#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170560
// Address: 0x170560 - 0x170570
void sub_00170560_0x170560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170560u;

    // 0x170560: 0x8c831b30
    ctx->pc = 0x170560u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x170564: 0x24020001
    ctx->pc = 0x170564u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x170568: 0x3e00008
    ctx->pc = 0x170568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17056Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170570u;
}
