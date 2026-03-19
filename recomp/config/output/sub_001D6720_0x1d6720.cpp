/*
 * REO Override: sub_001D6720 — VSync frame check
 *
 * Original function reads a VBlank counter at 0x3445E8, XORs with 3,
 * and returns 1 when the counter == 3 (i.e., frame ready).
 *
 * This override provides proper frame timing. Note: raylib window
 * events are handled by the runtime's rendering thread separately.
 */
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "reo_netbio.h"
#include "ps2_stubs.h"
#include "reo_hw_bridge.h"
#include "runtime/input/input.h"
#include <cstdio>
#include <cstring>
#include <chrono>
#include <thread>

void sub_001D6720_0x1d6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    using clock = std::chrono::steady_clock;
    static auto lastFrame = clock::now();
    static uint32_t frameCount = 0;

    // Target: 60fps (16.67ms per frame)
    constexpr auto frameDuration = std::chrono::microseconds(16667);
    auto now = clock::now();
    auto elapsed = now - lastFrame;

    if (elapsed < frameDuration) {
        std::this_thread::sleep_for(frameDuration - elapsed);
    }
    lastFrame = clock::now();
    frameCount++;

    // Poll input devices each frame
    auto* bridge = ReoHwBridge::instance();
    if (bridge && bridge->input()) {
        bridge->input()->update();
    }

    // Update the VBlank counter in guest memory
    uint32_t counterAddr = 0x3445E8u & PS2_RAM_MASK;
    if (counterAddr + 4 <= PS2_RAM_SIZE) {
        WRITE32(counterAddr, 3);
    }

    // Inject PCSX2 game data snapshot — 4MB of loaded game data (textures,
    // headers, models) plus state regions. This bypasses the IOP/CDVD pipeline.
    static bool snapshotLoaded = false;
    if (!snapshotLoaded && frameCount == 5) {
        snapshotLoaded = true;

        // Load game data at PCSX2's base address (0xAEA3C0).
        // Try main menu (8MB) first, then 4MB, then 1MB snapshot.
        uint32_t pcsx2Base = 0xAEA3C0;
        FILE* f = fopen("tools/ps2_debug/pcsx2_mainmenu_8mb.bin", "rb");
        if (!f) f = fopen("tools/ps2_debug/pcsx2_snapshot_4mb.bin", "rb");
        if (!f) f = fopen("tools/ps2_debug/pcsx2_snapshot_gamedata.bin", "rb");
        if (f) {
            fseek(f, 0, SEEK_END);
            long sz = ftell(f);
            fseek(f, 0, SEEK_SET);
            uint32_t p = pcsx2Base & PS2_RAM_MASK;
            if (p + sz <= PS2_RAM_SIZE && sz > 0) {
                fread(rdram + p, 1, sz, f);
                printf("[REO] Injected game data: %ld bytes at 0x%08X\n", sz, pcsx2Base);
            }
            fclose(f);
        } else {
            printf("[REO] No PCSX2 snapshot found\n");
        }

        // Inject state regions
        // Inject state regions (prefer main menu snapshots)
        struct { const char* file; const char* fallback; uint32_t addr; uint32_t size; } regions[] = {
            {"tools/ps2_debug/pcsx2_mainmenu_324000.bin", "tools/ps2_debug/pcsx2_snapshot_324000.bin", 0x324000, 0x500},
            {"tools/ps2_debug/pcsx2_mainmenu_340000.bin", "tools/ps2_debug/pcsx2_snapshot_340000.bin", 0x340000, 0x3000},
            {"tools/ps2_debug/pcsx2_mainmenu_236700.bin", "tools/ps2_debug/pcsx2_snapshot_236700.bin", 0x236700, 0x100},
        };

        // Inject PCSX2 DMA channel table (has properly initialized render contexts)
        {
            FILE* chf = fopen("tools/ps2_debug/pcsx2_dma_channels.bin", "rb");
            if (chf) {
                fseek(chf, 0, SEEK_END);
                long chsz = ftell(chf);
                fseek(chf, 0, SEEK_SET);
                uint32_t chPhys = 0x298680 & PS2_RAM_MASK;
                if (chPhys + chsz <= PS2_RAM_SIZE) {
                    fread(rdram + chPhys, 1, chsz, chf);
                    printf("[REO] Injected DMA channel table: %ld bytes at 0x298680\n", chsz);
                }
                fclose(chf);
            }
        }
        // Also inject the render pool
        {
            FILE* rpf = fopen("tools/ps2_debug/pcsx2_render_pool.bin", "rb");
            if (rpf) {
                fseek(rpf, 0, SEEK_END);
                long rpsz = ftell(rpf);
                fseek(rpf, 0, SEEK_SET);
                uint32_t rpPhys = 0x298000 & PS2_RAM_MASK;
                if (rpPhys + rpsz <= PS2_RAM_SIZE) {
                    fread(rdram + rpPhys, 1, rpsz, rpf);
                    printf("[REO] Injected render pool: %ld bytes at 0x298000\n", rpsz);
                }
                fclose(rpf);
            }
        }

        // Initialize DMA channel entries with TIM2 signature
        // sub_001A57B0 checks for "TIM2" header at channel entry byte[0-3]
        // Without this, display list allocation (1A5280) returns 0
        for (int ch = 0; ch < 8; ch++) {
            uint32_t chAddr = (0x298680 + ch * 56) & PS2_RAM_MASK;
            if (chAddr + 56 <= PS2_RAM_SIZE) {
                // Write "TIM2" signature + version byte
                rdram[chAddr + 0] = 0x54; // 'T'
                rdram[chAddr + 1] = 0x49; // 'I'
                rdram[chAddr + 2] = 0x4D; // 'M'
                rdram[chAddr + 3] = 0x32; // '2'
                rdram[chAddr + 4] = 0x04; // version (3 or 4 passes the check)
                rdram[chAddr + 5] = 0x01; // sub-version
            }
        }
        printf("[REO] Initialized 8 DMA channel entries with TIM2 headers\n");

        // Also set specific safe values from the 29F600 region
        auto wr32s = [&](uint32_t a, uint32_t v) {
            uint32_t p = a & PS2_RAM_MASK;
            if (p + 4 <= PS2_RAM_SIZE) memcpy(rdram + p, &v, 4);
        };
        // Display configuration (not pointers)
        wr32s(0x29F6E0, 0x00000005);  // display mode
        wr32s(0x29F6F0, 0x00000001);  // display enabled
        wr32s(0x29F6F4, 0x00001000);  // some config
        wr32s(0x29F6F8, 0x00000004);  // some config
        wr32s(0x29FA00, 1); wr32s(0x29FA04, 1);  // subsystem ready flags
        wr32s(0x29FA08, 1); wr32s(0x29FA0C, 1);  // subsystem ready flags
        wr32s(0x29FA10, 1);  // all systems ready
        for (auto& r : regions) {
            FILE* rf = fopen(r.file, "rb");
            if (!rf && r.fallback) rf = fopen(r.fallback, "rb");
            if (rf) {
                uint32_t rp = r.addr & PS2_RAM_MASK;
                if (rp + r.size <= PS2_RAM_SIZE) {
                    fread(rdram + rp, 1, r.size, rf);
                    printf("[REO] Injected state: 0x%08X (%u bytes)\n", r.addr, r.size);
                }
                fclose(rf);
            }
        }
        // Inject PCSX2 display list data into REO's display list buffers
        // PCSX2 uses buffers at 0x010B23C0/0x011323C0, REO uses 0x700000/0x780000
        // We also need to allocate space at the PCSX2 addresses and copy there
        // since the display list entries contain absolute pointers.
        for (int bi = 0; bi < 2; bi++) {
            char dlname[128];
            snprintf(dlname, sizeof(dlname), "tools/ps2_debug/pcsx2_displaylist_%d.bin", bi);
            FILE* dlf = fopen(dlname, "rb");
            if (dlf) {
                fseek(dlf, 0, SEEK_END);
                long dlsz = ftell(dlf);
                fseek(dlf, 0, SEEK_SET);
                // Load to PCSX2's display list addresses
                uint32_t pcsx2Addrs[2] = {0x010B23C0, 0x011323C0};
                uint32_t dlPhys = pcsx2Addrs[bi] & PS2_RAM_MASK;
                if (dlPhys + dlsz <= PS2_RAM_SIZE) {
                    fread(rdram + dlPhys, 1, dlsz, dlf);
                    printf("[REO] Injected display list %d: %ld bytes at 0x%08X\n",
                           bi, dlsz, pcsx2Addrs[bi]);
                }
                fclose(dlf);
            }
        }

        // Update display list struct to use PCSX2's addresses
        wr32s(0x29FDB8, 0x010B23C0);  // buf[0]
        wr32s(0x29FDBC, 0x011323C0);  // buf[1]
        wr32s(0x29FDA8, 0x010AA3C0);  // some base ptr
        wr32s(0x29FDAC, 0x00E00000);  // buffer size

        // Load game data from NETBIO archives
        {
            static NetbioReader netbio;
            if (netbio.open("game_data/NETBIO00.DAT")) {
                // Parse romdata_usa.afs (index 0) — contains all game NBD files
                std::vector<NetbioEntry> romdata;
                int romCount = netbio.parse_inner_afs(0, romdata);
                if (romCount > 0) {
                    printf("[REO] romdata_usa.afs: %d files\n", romCount);

                    // Load EF01.NBD (index 0) — main menu/demo scene data
                    // Load to the game's data buffer region
                    uint32_t loadAddr = 0xE00000; // Safe region after our DMA pools
                    for (int i = 0; i < std::min(romCount, 5); i++) {
                        uint32_t phys = loadAddr & PS2_RAM_MASK;
                        if (phys + romdata[i].size > PS2_RAM_SIZE) continue;
                        if (romdata[i].size > 0x200000) continue; // Skip files > 2MB

                        // Read directly from the DAT file
                        FILE* datf = fopen("game_data/NETBIO00.DAT", "rb");
                        if (datf) {
                            fseek(datf, romdata[i].offset, SEEK_SET);
                            uint32_t readSz = std::min(romdata[i].size, (uint32_t)(PS2_RAM_SIZE - phys));
                            fread(rdram + phys, 1, readSz, datf);
                            fclose(datf);
                            printf("[REO] Loaded NBD [%d] '%s' (%u bytes) → 0x%08X\n",
                                   i, romdata[i].name, readSz, loadAddr);
                        }
                        loadAddr += (romdata[i].size + 0xFFF) & ~0xFFF; // Align to 4KB
                    }
                }
                netbio.close();
            }
        }

        printf("[REO] Snapshot injection complete.\n");
        fflush(stdout);
    }

    // Inject PCSX2's GIF frame data + our test sprite
    // The PCSX2 data does screen clears; we add a colored rectangle on top
    // This writes a colored sprite directly via GS register writes
    if (frameCount >= 10 && frameCount % 2 == 0) {
        auto* gs = bridge ? bridge->input() : nullptr; // just to check bridge exists
        if (bridge) {
            // Build a GIF A+D packet that draws a red rectangle
            // GIF tag: NLOOP=5, EOP=1, FLG=0 (PACKED), NREG=1, REG=A+D (0xE)
            uint8_t gifData[6 * 16]; // 1 tag + 5 register writes = 96 bytes
            memset(gifData, 0, sizeof(gifData));

            // GIF tag (16 bytes)
            uint64_t tag_lo = 5 | (1ULL << 15); // NLOOP=5, EOP=1
            tag_lo |= (0ULL << 58); // FLG=PACKED
            tag_lo |= (1ULL << 60); // NREG=1
            uint64_t tag_hi = 0x0E; // REGS = A+D
            memcpy(gifData + 0, &tag_lo, 8);
            memcpy(gifData + 8, &tag_hi, 8);

            // Reg 1: FRAME (0x4C) - set framebuffer to page 0, PSM32, fbw=10
            uint64_t frame_val = 0x00000 | (10 << 16) | (0 << 24); // FBP=0, FBW=10, PSM=0
            uint64_t frame_reg = 0x4C;
            memcpy(gifData + 16, &frame_val, 8);
            memcpy(gifData + 24, &frame_reg, 8);

            // Reg 2: PRIM (0x00) - SPRITE primitive
            uint64_t prim_val = 6; // SPRITE
            uint64_t prim_reg = 0x00;
            memcpy(gifData + 32, &prim_val, 8);
            memcpy(gifData + 40, &prim_reg, 8);

            // Reg 3: RGBAQ (0x01) - Red color
            uint64_t rgbaq_val = 0xFF | (0x00 << 8) | (0x00 << 16) | (0x80ULL << 24);
            uint64_t rgbaq_reg = 0x01;
            memcpy(gifData + 48, &rgbaq_val, 8);
            memcpy(gifData + 56, &rgbaq_reg, 8);

            // Reg 4: XYZ2 (0x05) - top-left (100,100)
            uint64_t xyz2_tl = ((uint64_t)(100*16) << 0) | ((uint64_t)(100*16) << 16);
            uint64_t xyz2_reg1 = 0x05;
            memcpy(gifData + 64, &xyz2_tl, 8);
            memcpy(gifData + 72, &xyz2_reg1, 8);

            // Reg 5: XYZ2 (0x05) - bottom-right (300,200)
            uint64_t xyz2_br = ((uint64_t)(300*16) << 0) | ((uint64_t)(200*16) << 16);
            uint64_t xyz2_reg2 = 0x05;
            memcpy(gifData + 80, &xyz2_br, 8);
            memcpy(gifData + 88, &xyz2_reg2, 8);

            // Submit directly to GS renderer via PATH3
            extern void reoSubmitGifPath3(const void* data, uint32_t size);
            // We don't have a direct function, but we can use the bridge's gs
            // Actually, let's use the GS renderer from the bridge
            // The bridge's m_gs is private. Let's write the GIF data to
            // a display list buffer location and trigger DMA.

            // Write GIF data to a known location in guest RAM
            uint32_t gifAddr = 0x7F0000; // safe unused area
            uint32_t gifPhys = gifAddr & PS2_RAM_MASK;
            memcpy(rdram + gifPhys, gifData, sizeof(gifData));

            // Submit via Store32 the same way the recompiled code does.
            // Submit test sprite directly to GS renderer
            extern void reo_gs_submit_path3_direct(const void* data, uint32_t bytes);
            reo_gs_submit_path3_direct(gifData, sizeof(gifData));

            // Also submit texture upload + textured sprite from file
            static bool texGifLoaded = false;
            static uint8_t texGif[4096];
            static uint32_t texGifSize = 0;
            if (!texGifLoaded) {
                texGifLoaded = true;
                FILE* tgf = fopen("test_texture_gif.bin", "rb");
                if (tgf) {
                    fseek(tgf, 0, SEEK_END);
                    texGifSize = (uint32_t)ftell(tgf);
                    fseek(tgf, 0, SEEK_SET);
                    if (texGifSize > sizeof(texGif)) texGifSize = sizeof(texGif);
                    fread(texGif, 1, texGifSize, tgf);
                    fclose(tgf);
                    printf("[REO] Loaded texture GIF: %u bytes\n", texGifSize);
                    fflush(stdout);
                }
            }
            if (texGifSize > 0) {
                // Submit texture upload: setup (80 bytes) + IMAGE data (1040 bytes)
                reo_gs_submit_path3_direct(texGif, 80);
                reo_gs_submit_path3_direct(texGif + 80, 1040);
            }

            // Submit textured sprite draw
            static bool texDrawLoaded = false;
            static uint8_t texDraw[256];
            static uint32_t texDrawSize = 0;
            if (!texDrawLoaded) {
                texDrawLoaded = true;
                FILE* tdf = fopen("test_texture_draw.bin", "rb");
                if (tdf) {
                    fseek(tdf, 0, SEEK_END);
                    texDrawSize = (uint32_t)ftell(tdf);
                    fseek(tdf, 0, SEEK_SET);
                    if (texDrawSize > sizeof(texDraw)) texDrawSize = sizeof(texDraw);
                    fread(texDraw, 1, texDrawSize, tdf);
                    fclose(tdf);
                    printf("[REO] Loaded texture draw GIF: %u bytes\n", texDrawSize);
                    fflush(stdout);
                }
            }
            if (texDrawSize > 0) {
                reo_gs_submit_path3_direct(texDraw, texDrawSize);
            }

            // Also submit PCSX2 frame GIF data (screen clear + setup)
            static bool pcsx2GifLoaded = false;
            static uint8_t pcsx2Gif[4096];
            static uint32_t pcsx2GifSize = 0;
            if (!pcsx2GifLoaded) {
                pcsx2GifLoaded = true;
                FILE* gf = fopen("tools/ps2_debug/pcsx2_frame_gif.bin", "rb");
                if (gf) {
                    fseek(gf, 0, SEEK_END);
                    pcsx2GifSize = (uint32_t)ftell(gf);
                    fseek(gf, 0, SEEK_SET);
                    if (pcsx2GifSize > sizeof(pcsx2Gif)) pcsx2GifSize = sizeof(pcsx2Gif);
                    fread(pcsx2Gif, 1, pcsx2GifSize, gf);
                    fclose(gf);
                    printf("[REO] Loaded PCSX2 GIF data: %u bytes\n", pcsx2GifSize);
                    fflush(stdout);

                    // Extract individual GIF packets from the DMA chain and submit them
                    // The DMA chain uses NEXT tags with PCSX2-specific addresses
                    // We need to submit just the GIF payload data, not the DMA tags
                }
            }
            if (pcsx2GifSize > 0) {
                // Parse DMA chain and submit GIF packets
                uint32_t pos = 0;
                uint32_t pcsx2Base = 0x010B23C0;
                while (pos + 16 <= pcsx2GifSize) {
                    uint64_t tag;
                    memcpy(&tag, pcsx2Gif + pos, 8);
                    uint16_t qwc = (uint16_t)(tag & 0xFFFF);
                    uint32_t tagId = (uint32_t)((tag >> 28) & 0x7);
                    uint32_t tagAddr = (uint32_t)((tag >> 32) & 0x7FFFFFFF);

                    if (qwc > 0) {
                        uint32_t dataStart = pos + 16;
                        uint32_t bytes = qwc * 16;
                        if (dataStart + bytes <= pcsx2GifSize) {
                            reo_gs_submit_path3_direct(pcsx2Gif + dataStart, bytes);
                        }
                    }

                    if (tagId == 7) break; // END
                    else if (tagId == 2) { // NEXT
                        uint32_t rel = tagAddr - pcsx2Base;
                        if (rel < pcsx2GifSize) pos = rel;
                        else break;
                    } else if (tagId == 1) { // CNT
                        pos = pos + 16 + qwc * 16;
                    } else break;
                }
            }

            static int testLog2 = 0;
            if (testLog2 < 3) {
                printf("[REO-TEST] Submitted %zu bytes directly to GS PATH3\n", sizeof(gifData));
                printf("[REO-TEST] GIF tag: 0x%016llX 0x%016llX\n",
                       (unsigned long long)tag_lo, (unsigned long long)tag_hi);
                fflush(stdout);
                testLog2++;
            }
            // Check if our test sprite produced pixels via the bridge framebuffer
            if (frameCount == 12) {
                int fbW = 0, fbH = 0;
                const uint32_t* fb = nullptr;
                auto vt = runtime->hwBridgeVt();
                if (vt.getFramebuffer) {
                    fb = vt.getFramebuffer(&fbW, &fbH, vt.user);
                }
                if (fb && fbW > 0 && fbH > 0) {
                    // Count non-black pixels by color
                    int redPx = 0, coloredPx = 0;
                    for (int i = 0; i < fbW * fbH; i++) {
                        uint32_t px = fb[i];
                        uint8_t r = px & 0xFF;
                        uint8_t g = (px >> 8) & 0xFF;
                        uint8_t b = (px >> 16) & 0xFF;
                        if (r > 200 && g < 50 && b < 50) redPx++;
                        if (r > 10 || g > 10 || b > 10) coloredPx++;
                    }
                    printf("[REO-TEST] Framebuffer %dx%d: %d red, %d colored pixels\n",
                           fbW, fbH, redPx, coloredPx);
                    fflush(stdout);
                }
            }

            static int testLog = 0;
            if (testLog < 3) {
                printf("[REO-TEST] Submitted test GIF sprite at 0x%08X (%zu bytes)\n",
                       gifAddr, sizeof(gifData));
                fflush(stdout);
                testLog++;
            }
        }
    }

    // Call render dispatch every frame (replaces IOP indirect dispatch callback)
    if (frameCount >= 10) {
        // Clear task table and DMA channel entries from previous frame
        // so new ones can be created each frame.
        // (In PCSX2, the display list flush in 18DCB0 handles this)
        memset(rdram + (0x341640 & PS2_RAM_MASK), 0, 256 * 16);  // task table
        // Reset DMA channel active flags (byte 52 of each 56-byte entry)
        for (int ch = 0; ch < 256; ch++) {
            uint32_t chAddr = (0x298680 + ch * 56 + 52) & PS2_RAM_MASK;
            if (chAddr < PS2_RAM_SIZE) rdram[chAddr] = 0;
        }
        // Reset display list state for new frame
        auto wr32f = [&](uint32_t a, uint32_t v) {
            uint32_t p = a & PS2_RAM_MASK;
            if (p + 4 <= PS2_RAM_SIZE) memcpy(rdram + p, &v, 4);
        };
        auto rd32f = [&](uint32_t a) -> uint32_t {
            uint32_t p = a & PS2_RAM_MASK;
            if (p + 4 > PS2_RAM_SIZE) return 0;
            uint32_t v; memcpy(&v, rdram + p, 4); return v;
        };
        // Toggle display buffer index (double-buffering)
        uint32_t curDbIdx = rd32f(0x29FDB4);
        uint32_t newDbIdx = curDbIdx ^ 1;
        wr32f(0x29FDB4, newDbIdx);
        // Set buffer swap state to 1 (ready)
        wr32f(0x29FDB0, 1);
        // Reset write pointers for the NEW buffer
        wr32f(0x29F704 + newDbIdx * 4, 0);  // entry_count[dbIdx]
        wr32f(0x29F70C + newDbIdx * 4, 0);  // write_idx[dbIdx]
        // Update current write buffer pointer from buffer table
        uint32_t bufAddr = rd32f(0x29FDC4 + newDbIdx * 4);
        if (bufAddr == 0) bufAddr = (newDbIdx == 0) ? 0x700000 : 0x780000;
        wr32f(0x29FDB8, bufAddr);  // current write ptr
        wr32f(0x29FDC0, bufAddr);  // write buffer start
        wr32f(0x29FDBC, bufAddr + 0x80000);  // write buffer end

        extern void entry_1d2280_0x1d25b0(uint8_t*, R5900Context*, PS2Runtime*);
        R5900Context saved = *ctx;

        // Flush pending display list
        ctx->pc = 0x1D2280;
        SET_GPR_U32(ctx, 31, 0x1D6720);
        entry_1d2280_0x1d25b0(rdram, ctx, runtime);

        // Render dispatch — process all 6 callback slots
        *ctx = saved;
        ctx->pc = 0x1D22B0;
        SET_GPR_U32(ctx, 31, 0x1D6720);
        SET_GPR_U32(ctx, 4, 1);
        entry_1d2280_0x1d25b0(rdram, ctx, runtime);
        *ctx = saved;
    }

    // One-shot: force SifBindRpc for each needed IOP module
    // The game's IOP callback system (indirect dispatch) never fires because
    // IOP doesn't run. We manually bind RPC clients so SifCallRpc can work.
    static bool sifBound = false;
    if (!sifBound && frameCount == 1) {
        sifBound = true;
        printf("[REO] Forcing SifBindRpc for IOP modules...\n");
        fflush(stdout);

        // Module IDs to bind
        struct { uint32_t sid; const char* name; } modules[] = {
            { 0x80000100, "PADMAN" },
            { 0x80000400, "MCSERV" },
            { 0x80000592, "CDVD"   },
            { 0x80000701, "LIBSD"  },
        };

        // Allocate fake client structs at 0x3E0000 (unused BSS region)
        // Each t_SifRpcClientData is 40 bytes, allocate 64 per entry for alignment
        uint32_t clientBase = 0x3E0000;
        for (int i = 0; i < 4; i++) {
            uint32_t clientAddr = clientBase + i * 64;
            uint32_t clientPhys = clientAddr & PS2_RAM_MASK;
            if (clientPhys + 64 > PS2_RAM_SIZE) continue;

            // Zero out the client struct
            memset(rdram + clientPhys, 0, 64);

            // Set up R5900Context for SifBindRpc syscall
            // a0 = clientPtr, a1 = rpcId, a2 = mode (0 = blocking)
            R5900Context sifCtx = *ctx;
            SET_GPR_U32(&sifCtx, 4, clientAddr);    // a0 = client
            SET_GPR_U32(&sifCtx, 5, modules[i].sid); // a1 = service ID
            SET_GPR_U32(&sifCtx, 6, 0);              // a2 = mode
            SET_GPR_S32(&sifCtx, 3, 87);             // v1 = syscall# for SifBindRpc
            sifCtx.pc = 0;

            runtime->handleSyscall(rdram, &sifCtx, 0);

            printf("[REO] SifBindRpc(0x%08X) → %s (client@0x%08X)\n",
                   modules[i].sid, modules[i].name, clientAddr);
        }

        // Also call SifInitRpc
        {
            R5900Context sifCtx = *ctx;
            SET_GPR_U32(&sifCtx, 4, 0); // a0 = mode
            SET_GPR_S32(&sifCtx, 3, 86); // v1 = syscall# for SifInitRpc
            sifCtx.pc = 0;
            runtime->handleSyscall(rdram, &sifCtx, 0);
            printf("[REO] SifInitRpc called\n");
        }

        fflush(stdout);
    }

    // Periodic game state diagnostics
    static int diagCount = 0;
    static auto lastDiag = clock::now();
    auto diagNow = clock::now();
    if (diagCount == 0 || (diagCount < 10 &&
        std::chrono::duration_cast<std::chrono::seconds>(diagNow - lastDiag).count() >= 2)) {
        lastDiag = diagNow;
        diagCount++;

        auto rd32 = [&](uint32_t a) -> uint32_t {
            uint32_t p = a & PS2_RAM_MASK;
            if (p + 4 > PS2_RAM_SIZE) return 0;
            uint32_t v; memcpy(&v, rdram + p, 4); return v;
        };

        // Task table at 0x341640 (256 entries, 16 bytes each)
        int activeCount = 0;
        for (int i = 0; i < 256; i++) {
            uint32_t addr = (0x341640 + i * 16) & PS2_RAM_MASK;
            if (addr + 16 > PS2_RAM_SIZE) break;
            uint32_t flag = rd32(0x341640 + i * 16);
            if (flag != 0) {
                uint32_t f4 = rd32(0x341640 + i*16 + 4);
                uint32_t f8 = rd32(0x341640 + i*16 + 8);
                uint32_t fc = rd32(0x341640 + i*16 + 12);
                if (activeCount < 10)
                    printf("[DIAG] task[%d]: 0x%X 0x%08X 0x%08X 0x%08X\n", i, flag, f4, f8, fc);
                activeCount++;
            }
        }
        printf("[DIAG] frame=%u tasks=%d state@2B0EC0=%u @32440C=0x%08X @3243D7=0x%02X\n",
               frameCount, activeCount,
               rd32(0x2B0EC0), rd32(0x32440C), rd32(0x3243D7) & 0xFF);

        // First frame: dump callback table + other state
        if (diagCount == 1) {
            printf("[DIAG] Callback table at 0x236700:\n");
            for (int i = 0; i < 8; i++)
                printf("[DIAG]   [%d] = 0x%08X\n", i, rd32(0x236700 + i*4));
            printf("[DIAG] Dispatch offsets at 0x236730:\n");
            for (int i = 0; i < 6; i++)
                printf("[DIAG]   slot[%d] offset=0x%08X param=0x%08X\n",
                       i, rd32(0x236730 + i*4), rd32(0x236750 + i*4));
            printf("[DIAG] Dispatch flags at 0x236720:\n");
            for (int i = 0; i < 4; i++)
                printf("[DIAG]   [%d] = 0x%08X\n", i, rd32(0x236720 + i*4));
        }
        if (diagCount == 1) {
            printf("[DIAG] Scanning 0x340000-0x345000 for initialized state...\n");
            for (uint32_t a = 0x340000; a < 0x345000; a += 4) {
                uint32_t v = rd32(a);
                if (v != 0) {
                    printf("[DIAG] 0x%06X = 0x%08X\n", a, v);
                }
            }
            printf("[DIAG] Scanning 0x2B0E00-0x2B1000...\n");
            for (uint32_t a = 0x2B0E00; a < 0x2B1000; a += 4) {
                uint32_t v = rd32(a);
                if (v != 0) {
                    printf("[DIAG] 0x%06X = 0x%08X\n", a, v);
                }
            }
        }
        fflush(stdout);
    }

    // Log first few frames
    static int logCount = 0;
    if (logCount < 5) {
        printf("[REO] Frame %u\n", frameCount);
        fflush(stdout);
        logCount++;
    }

    // Return 1 (frame ready) and set pc = $ra
    setReturnU32(ctx, 1);
    ctx->pc = getRegU32(ctx, 31);
}
