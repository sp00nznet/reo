#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12c018
// Address: 0x12c018 - 0x12c040
// Original: sets flag at 0x21049C=1, then calls SleepThread (syscall 0x32)
// On real PS2, VBlank handler wakes the thread and clears 0x29FA10 (rendering active flag).
// In static recomp: skip SleepThread, clear the rendering flag ourselves.
void entry_12c018_0x12c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    // Set the rendering-complete flag at 0x21049C to 1 (original behavior)
    WRITE32(0x21049C, 1);
    // Clear the rendering-active flag that the VBlank handler would clear
    WRITE32(0x29FA10, 0);
    // Skip SleepThread — no VBlank will wake us in static recomp
    ctx->pc = getRegU32(ctx, 31);
}
