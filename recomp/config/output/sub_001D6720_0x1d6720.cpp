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

        printf("[REO] Snapshot injection complete.\n");
        fflush(stdout);
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
