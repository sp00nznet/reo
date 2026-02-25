/*
 * REO Game Override for PS2Recomp Runtime
 *
 * Registers hardware overrides for both RE Outbreak games:
 *   - File #1: SLUS-20765 (SLUS_207.65)
 *   - File #2: SLUS-20984 (SLUS_209.84)
 *
 * Both games share the same engine (derived from REOF2), so the
 * override structure is largely identical — same GS/SPU2/IOP
 * interfaces, same SN@P network stack, same DNAS flow.
 *
 * Strategy:
 *   The PS2Recomp runtime handles syscalls (threads, semaphores, SIF,
 *   file I/O) and MMIO (GS registers, DMA, VU memory) automatically.
 *   Statically-linked SDK functions (scePad*, sceCd*, sceSd*, etc.)
 *   were either recompiled or generated as TODO stubs.
 *
 *   Stubs log "TODO_NAMED" at runtime and return 0. As we identify
 *   function addresses (via Ghidra or runtime observation), we bind
 *   them to proper handlers here using bindAddressHandler() or
 *   registerFunction().
 *
 *   The RE Code Veronica override in PS2Recomp serves as our template.
 */

#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "game_overrides.h"
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>

// ═══════════════════════════════════════════════════════════════════════
// Custom RecompiledFunction handlers for RE Outbreak
// Signature: void(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime)
// ═══════════════════════════════════════════════════════════════════════

// Generic "return 0" handler — used for functions that just need to succeed
static void reo_ret0(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    setReturnU32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31); // return to caller
}

// Generic "return 1" handler
static void reo_ret1(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    setReturnU32(ctx, 1);
    ctx->pc = getRegU32(ctx, 31);
}

// Generic "return -1" handler (error indicator for some PS2 APIs)
static void reo_ret_neg1(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    setReturnS32(ctx, -1);
    ctx->pc = getRegU32(ctx, 31);
}

// ── Printf handler ────────────────────────────────────────────────────
// Intercepts the game's printf to display messages on the host console.
// PS2 printf: $a0 = format string pointer (guest address)
static void reo_printf(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t fmtAddr = getRegU32(ctx, 4); // $a0 = format string
    if (fmtAddr != 0 && (fmtAddr & PS2_RAM_MASK) < PS2_RAM_SIZE - 256) {
        const char* fmt = reinterpret_cast<const char*>(rdram + (fmtAddr & PS2_RAM_MASK));
        // Safety: just print the raw format string (don't try to process varargs)
        static int logCount = 0;
        if (logCount < 500) {
            printf("[GAME] %s", fmt);
            logCount++;
        }
    }
    setReturnU32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}

// ── Memory allocator ──────────────────────────────────────────────────
// RE Outbreak uses a custom allocator (likely syMalloc/syFree pattern)
static void reo_malloc(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t size = getRegU32(ctx, 4); // $a0
    uint32_t result = 0;
    if (runtime && size != 0) {
        result = runtime->guestMalloc(size, 64);
    }
    static int logCount = 0;
    if (logCount < 16) {
        printf("[REO] malloc(0x%X) -> 0x%08X\n", size, result);
        logCount++;
    }
    setReturnU32(ctx, result);
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_calloc(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t count = getRegU32(ctx, 4); // $a0
    uint32_t size = getRegU32(ctx, 5);  // $a1
    uint32_t result = 0;
    if (runtime && count != 0 && size != 0) {
        result = runtime->guestCalloc(count, size, 64);
    }
    setReturnU32(ctx, result);
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_free(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t addr = getRegU32(ctx, 4); // $a0
    if (runtime && addr != 0) {
        runtime->guestFree(addr);
    }
    setReturnU32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_realloc(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    uint32_t addr = getRegU32(ctx, 4);    // $a0
    uint32_t newSize = getRegU32(ctx, 5); // $a1
    uint32_t result = 0;
    if (runtime) {
        result = runtime->guestRealloc(addr, newSize, 64);
    }
    setReturnU32(ctx, result);
    ctx->pc = getRegU32(ctx, 31);
}

// ── Heap init (syMallocInit pattern from RE engine) ───────────────────
static void reo_heap_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    if (runtime) {
        uint32_t heapBase = getRegU32(ctx, 4); // $a0
        uint32_t heapSize = getRegU32(ctx, 5); // $a1

        // Normalize KSEG0/KSEG1 addresses to physical
        uint32_t normalizedBase = heapBase;
        if (normalizedBase >= 0x80000000u && normalizedBase < 0xC0000000u) {
            normalizedBase &= 0x1FFFFFFFu;
        } else if (normalizedBase >= PS2_RAM_SIZE) {
            normalizedBase &= PS2_RAM_MASK;
        }

        // Sanity check
        if (normalizedBase == 0 || normalizedBase < 0x00100000u) {
            normalizedBase = runtime->guestHeapBase();
        }

        uint32_t heapLimit = 0;
        if (heapSize != 0 && heapSize <= PS2_RAM_SIZE) {
            uint64_t candidate = (uint64_t)normalizedBase + (uint64_t)heapSize;
            heapLimit = (uint32_t)std::min<uint64_t>(candidate, PS2_RAM_SIZE);
        }

        runtime->configureGuestHeap(normalizedBase, heapLimit);
        printf("[REO] heapInit base=0x%08X size=0x%X -> base=0x%08X end=0x%08X\n",
               heapBase, heapSize, runtime->guestHeapBase(), runtime->guestHeapEnd());
    }
    setReturnU32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}

// ── Pad (controller) stubs ────────────────────────────────────────────
// scePadInit returns 1 (success), scePadPortOpen returns port handle,
// scePadRead writes controller state to buffer, etc.

static void reo_pad_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    printf("[REO] scePadInit\n");
    setReturnU32(ctx, 1); // success
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_pad_port_open(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    static int logCount = 0;
    if (logCount < 4) {
        printf("[REO] scePadPortOpen port=%d slot=%d\n",
               getRegU32(ctx, 4), getRegU32(ctx, 5));
        logCount++;
    }
    setReturnU32(ctx, 1); // success
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_pad_get_state(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // Return PAD_STATE_STABLE (6) = pad is ready
    setReturnU32(ctx, 6);
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_pad_read(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // $a0 = port, $a1 = slot, $a2 = buffer address (32 bytes, DualShock2 format)
    uint32_t bufAddr = getRegU32(ctx, 6); // $a2
    if (bufAddr != 0 && (bufAddr & PS2_RAM_MASK) + 32 <= PS2_RAM_SIZE) {
        uint8_t* buf = rdram + (bufAddr & PS2_RAM_MASK);
        memset(buf, 0, 32);
        buf[0] = 0x00; // success
        buf[1] = 0x79; // mode: DualShock2 (analog + pressure)

        // Buttons: all released (0xFFFF = no buttons pressed)
        buf[2] = 0xFF;
        buf[3] = 0xFF;

        // Analog sticks: centered (0x80)
        buf[4] = 0x80; // RX
        buf[5] = 0x80; // RY
        buf[6] = 0x80; // LX
        buf[7] = 0x80; // LY

        // Pressure bytes: all 0 (not pressed)
        // buf[8..19] already zeroed
    }
    setReturnU32(ctx, 32); // bytes read
    ctx->pc = getRegU32(ctx, 31);
}

// ── CD/DVD stubs ──────────────────────────────────────────────────────
static void reo_cd_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    printf("[REO] sceCdInit mode=%d\n", getRegU32(ctx, 4));
    setReturnU32(ctx, 1); // success
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_cd_disk_ready(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    setReturnU32(ctx, 2); // SCECdComplete
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_cd_get_disk_type(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    setReturnU32(ctx, 0x14); // SCECdPS2DVD
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_cd_status(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    setReturnU32(ctx, 0x0A); // SCECdStatPause
    ctx->pc = getRegU32(ctx, 31);
}

// ── GS display stubs ─────────────────────────────────────────────────
static void reo_gs_sync_v(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    // sceGsSyncV: wait for vsync. Just return 0 (success).
    setReturnU32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}

static void reo_gs_reset_graph(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    printf("[REO] sceGsResetGraph mode=%d\n", getRegU32(ctx, 4));
    setReturnU32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}

// ── Sound driver stubs ────────────────────────────────────────────────
static void reo_sd_init(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    printf("[REO] sdDrvInit/sceSdInit\n");
    setReturnU32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}

// ── Network / DNAS stubs ──────────────────────────────────────────────
// All network init functions return success (0) to let the game proceed
// past the online setup phase without crashing.

// ═══════════════════════════════════════════════════════════════════════
// Address binding helper
// ═══════════════════════════════════════════════════════════════════════

// Bind a custom handler to a guest address, replacing the recompiled/stub version.
static void bind(PS2Runtime& runtime, uint32_t addr,
                 PS2Runtime::RecompiledFunction fn, const char* name) {
    runtime.registerFunction(addr, fn);
    printf("[REO]   0x%08X -> %s\n", addr, name);
}

// Try to bind a named handler from the PS2Recomp stub/syscall list.
// Returns true if the name was found and bound.
static bool bindNamed(PS2Runtime& runtime, uint32_t addr, const char* name) {
    if (ps2_game_overrides::bindAddressHandler(runtime, addr, name)) {
        printf("[REO]   0x%08X -> %s (runtime)\n", addr, name);
        return true;
    }
    printf("[REO]   0x%08X -> %s FAILED (not in runtime)\n", addr, name);
    return false;
}

// ═══════════════════════════════════════════════════════════════════════
// Shared HAL setup — identical for both games (same engine)
// ═══════════════════════════════════════════════════════════════════════
static void applySharedOverrides(PS2Runtime& runtime) {
    printf("[REO] Binding known function overrides...\n");

    // ── PS2 SDK functions (bind to PS2Recomp's built-in handlers) ─────
    // These use bindAddressHandler() to map guest addresses to handlers
    // that PS2Recomp already implements (from PS2_STUB_LIST / PS2_SYSCALL_LIST).
    //
    // NOTE: Addresses below are placeholders. They must be identified
    // for each game version via Ghidra analysis or runtime tracing.
    // When an address is confirmed, uncomment and set it.
    //
    // To identify addresses at runtime:
    //   1. Run reo_recomp — stubs print "TODO_NAMED sub_XXXXXXXX"
    //   2. Cross-reference with REOF2 decompilation (github.com/caprado/REOF2)
    //   3. Use Ghidra with PS2 SDK signatures
    //
    // Format: bindNamed(runtime, 0xADDRESS, "handlerName");
    //         bind(runtime, 0xADDRESS, reo_custom_handler, "description");

    // ── C library functions ───────────────────────────────────────────
    // bindNamed(runtime, 0x??????, "printf");
    // bindNamed(runtime, 0x??????, "malloc");
    // bindNamed(runtime, 0x??????, "free");
    // bindNamed(runtime, 0x??????, "calloc");
    // bindNamed(runtime, 0x??????, "realloc");
    // bindNamed(runtime, 0x??????, "memcpy");
    // bindNamed(runtime, 0x??????, "memset");
    // bindNamed(runtime, 0x??????, "strcpy");
    // bindNamed(runtime, 0x??????, "strcmp");
    // bindNamed(runtime, 0x??????, "sprintf");
    // bindNamed(runtime, 0x??????, "snprintf");

    // ── Pad (controller) ─────────────────────────────────────────────
    // bindNamed(runtime, 0x??????, "scePadInit");
    // bindNamed(runtime, 0x??????, "scePadPortOpen");
    // bindNamed(runtime, 0x??????, "scePadRead");
    // bindNamed(runtime, 0x??????, "scePadGetState");
    // bindNamed(runtime, 0x??????, "scePadSetMainMode");
    // bindNamed(runtime, 0x??????, "scePadSetActAlign");
    // bindNamed(runtime, 0x??????, "scePadSetActDirect");

    // ── CD/DVD ───────────────────────────────────────────────────────
    // bindNamed(runtime, 0x??????, "sceCdInit");
    // bindNamed(runtime, 0x??????, "sceCdRead");
    // bindNamed(runtime, 0x??????, "sceCdSearchFile");
    // bindNamed(runtime, 0x??????, "sceCdDiskReady");
    // bindNamed(runtime, 0x??????, "sceCdGetDiskType");
    // bindNamed(runtime, 0x??????, "sceCdSync");
    // bindNamed(runtime, 0x??????, "sceCdStatus");
    // bindNamed(runtime, 0x??????, "sceCdCallback");

    // ── Sound (sceSd) ────────────────────────────────────────────────
    // bindNamed(runtime, 0x??????, "sceSdInit");
    // bindNamed(runtime, 0x??????, "sceSdSetParam");
    // bindNamed(runtime, 0x??????, "sceSdGetParam");

    // ── Memory card ──────────────────────────────────────────────────
    // bindNamed(runtime, 0x??????, "sceMcInit");
    // bindNamed(runtime, 0x??????, "sceMcOpen");
    // bindNamed(runtime, 0x??????, "sceMcClose");
    // bindNamed(runtime, 0x??????, "sceMcRead");
    // bindNamed(runtime, 0x??????, "sceMcWrite");

    // ── Graphics (sceGs) ─────────────────────────────────────────────
    // bindNamed(runtime, 0x??????, "sceGsResetGraph");
    // bindNamed(runtime, 0x??????, "sceGsSyncV");
    // bindNamed(runtime, 0x??????, "sceGsSetDefDispEnv");
    // bindNamed(runtime, 0x??????, "sceGsSetDefDrawEnv");

    // ── SIF (EE↔IOP communication) ──────────────────────────────────
    // These are handled by PS2Recomp's SYSCALL dispatch, but if the game
    // calls SIF functions directly (not via SYSCALL), we need to bind them:
    // bindNamed(runtime, 0x??????, "SifInitRpc");
    // bindNamed(runtime, 0x??????, "SifBindRpc");
    // bindNamed(runtime, 0x??????, "SifCallRpc");
    // bindNamed(runtime, 0x??????, "SifLoadModule");

    // ── DNAS (authentication bypass) ─────────────────────────────────
    // All DNAS functions should return success (0) to bypass authentication:
    // bind(runtime, 0x??????, reo_ret0, "dnas_auth_start");
    // bind(runtime, 0x??????, reo_ret0, "dnas_auth_check");
    // bind(runtime, 0x??????, reo_ret0, "dnas_get_status");

    // ── Network (SN@P protocol) ──────────────────────────────────────
    // Custom handlers for online play (to be implemented):
    // bind(runtime, 0x??????, reo_snap_connect, "snap_connect");
    // bind(runtime, 0x??????, reo_snap_send, "snap_send");
    // bind(runtime, 0x??????, reo_snap_recv, "snap_recv");

    printf("[REO] Override binding complete.\n");
    printf("[REO] Unidentified stubs will log TODO_NAMED at runtime.\n");
    printf("[REO] Watch for these messages to identify function addresses.\n");
}

// ── File #1 overrides ──────────────────────────────────────────────
static void applyOutbreakOverrides(PS2Runtime& runtime) {
    printf("[REO] Applying RE Outbreak File #1 overrides (SLUS-20765, NTSC-U v2.00)\n");
    applySharedOverrides(runtime);

    // File #1-specific bindings
    // When addresses are identified from File #1 ELF analysis, add them here:
    // bind(runtime, 0xADDRESS, handler, "name");

    printf("[REO] File #1 overrides applied.\n");
}

PS2_REGISTER_GAME_OVERRIDE(
    "RE Outbreak NTSC-U",
    "SLUS_207.65",
    0x00100008,
    0x00000000,
    applyOutbreakOverrides
);

// ── File #2 overrides ──────────────────────────────────────────────
static void applyFile2Overrides(PS2Runtime& runtime) {
    printf("[REO] Applying RE Outbreak File #2 overrides (SLUS-20984, NTSC-U v1.05)\n");
    applySharedOverrides(runtime);

    // File #2-specific bindings
    // bind(runtime, 0xADDRESS, handler, "name");

    printf("[REO] File #2 overrides applied.\n");
}

PS2_REGISTER_GAME_OVERRIDE(
    "RE Outbreak File #2 NTSC-U",
    "SLUS_209.84",
    0x00100008,
    0x00000000,
    applyFile2Overrides
);
