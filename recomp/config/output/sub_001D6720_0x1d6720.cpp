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

    // Inject game data snapshot from PCSX2 into the game's allocated buffer.
    // This bypasses the entire IOP/CDVD pipeline by providing pre-loaded data.
    static bool snapshotLoaded = false;
    if (!snapshotLoaded && frameCount == 5) {
        snapshotLoaded = true;

        // The PCSX2 snapshot contains 1MB of game data (textures, headers)
        // that was loaded by the CDVD system. We inject it directly.
        uint32_t basePtr = 0;
        { uint32_t p = 0x32440C & PS2_RAM_MASK; memcpy(&basePtr, rdram+p, 4); }
        uint32_t destPhys = basePtr & PS2_RAM_MASK;

        // Load game data to the PCSX2 base address (0xAEA3C0) since the
        // injected state snapshots contain pointers to that address.
        uint32_t pcsx2Base = 0xAEA3C0;
        uint32_t pcsx2Phys = pcsx2Base & PS2_RAM_MASK;

        FILE* f = fopen("tools/ps2_debug/pcsx2_snapshot_gamedata.bin", "rb");
        if (f) {
            fseek(f, 0, SEEK_END);
            long sz = ftell(f);
            fseek(f, 0, SEEK_SET);

            if (pcsx2Phys + sz <= PS2_RAM_SIZE && sz > 0) {
                fread(rdram + pcsx2Phys, 1, sz, f);
                printf("[REO] Injected PCSX2 game data: %ld bytes → 0x%08X (PCSX2 base)\n", sz, pcsx2Base);
            }
            fclose(f);
        } else {
            printf("[REO] pcsx2_snapshot_gamedata.bin not found\n");
        }

        // Also inject the state regions
        struct { const char* file; uint32_t addr; uint32_t size; } regions[] = {
            {"tools/ps2_debug/pcsx2_snapshot_324000.bin", 0x324000, 0x500},
            {"tools/ps2_debug/pcsx2_snapshot_340000.bin", 0x340000, 0x3000},
            {"tools/ps2_debug/pcsx2_snapshot_29f600.bin", 0x29F600, 0x800},
            {"tools/ps2_debug/pcsx2_snapshot_236700.bin", 0x236700, 0x100},
        };
        for (auto& r : regions) {
            FILE* rf = fopen(r.file, "rb");
            if (rf) {
                uint32_t p = r.addr & PS2_RAM_MASK;
                if (p + r.size <= PS2_RAM_SIZE) {
                    fread(rdram + p, 1, r.size, rf);
                    printf("[REO] Injected %s → 0x%08X\n", r.file, r.addr);
                }
                fclose(rf);
            }
        }

        // Fix up pointers: PCSX2 base=0xAEA3C0, REO base=current basePtr
        // The buffer pointers at 0x324408-0x324470 need to be rebased
        // PCSX2 allocated at ~0x8AA3C0-0xC6A3C0; REO allocated at ~0x600000+
        // For now, leave them as-is and see what happens — the data is at
        // the base ptr address which may work.

        printf("[REO] Snapshot injection complete.\n");
        fflush(stdout);
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
