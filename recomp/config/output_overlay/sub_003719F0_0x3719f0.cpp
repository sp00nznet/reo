#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_003719F0
// Address: 0x3719f0 - 0x371a00
void sub_003719F0_0x3719f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3719f0u;

    // 0x3719f0: 0x807308c
    ctx->pc = 0x3719F0u;
    ctx->pc = 0x1CC230u;
    {
        auto targetFn = runtime->lookupFunction(0x1CC230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3719F8u;
    // 0x3719f8: 0x0
    ctx->pc = 0x3719f8u;
    // NOP
    // 0x3719fc: 0x0
    ctx->pc = 0x3719fcu;
    // NOP
}
