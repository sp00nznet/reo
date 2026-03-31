#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130798
// Address: 0x130798 - 0x1307a8
void sub_00130798_0x130798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130798u;

    // 0x130798: 0xac860038
    ctx->pc = 0x130798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x13079c: 0x3e00008
    ctx->pc = 0x13079Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1307A0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1307A4u;
    // 0x1307a4: 0x0
    ctx->pc = 0x1307a4u;
    // NOP
}
