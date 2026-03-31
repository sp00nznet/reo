#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B3830
// Address: 0x1b3830 - 0x1b3860
void sub_001B3830_0x1b3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b3830u;

    // 0x1b3830: 0x27bdffb0
    ctx->pc = 0x1b3830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b3834: 0xffa50018
    ctx->pc = 0x1b3834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x1b3838: 0xffa60020
    ctx->pc = 0x1b3838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x1b383c: 0xffa70028
    ctx->pc = 0x1b383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x1b3840: 0xffa80030
    ctx->pc = 0x1b3840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x1b3844: 0xffa90038
    ctx->pc = 0x1b3844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x1b3848: 0xffaa0040
    ctx->pc = 0x1b3848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x1b384c: 0xffab0048
    ctx->pc = 0x1b384cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    // 0x1b3850: 0x3e00008
    ctx->pc = 0x1B3850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3858u;
    // 0x1b3858: 0x0
    ctx->pc = 0x1b3858u;
    // NOP
    // 0x1b385c: 0x0
    ctx->pc = 0x1b385cu;
    // NOP
}
