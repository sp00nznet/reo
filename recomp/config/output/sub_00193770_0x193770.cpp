#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193770
// Address: 0x193770 - 0x193790
void sub_00193770_0x193770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193770u;

    // 0x193770: 0x3c023f80
    ctx->pc = 0x193770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x193774: 0x3c050029
    ctx->pc = 0x193774u;
    SET_GPR_U32(ctx, 5, ((uint32_t)41 << 16));
    // 0x193778: 0x44826000
    ctx->pc = 0x193778u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x19377c: 0x24a54e00
    ctx->pc = 0x19377cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19968));
    // 0x193780: 0x46006346
    ctx->pc = 0x193780u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193784: 0x8064de4
    ctx->pc = 0x193784u;
    ctx->pc = 0x193788u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x193790u;
    sub_00193790_0x193790(rdram, ctx, runtime); return;
    ctx->pc = 0x19378Cu;
    // 0x19378c: 0x0
    ctx->pc = 0x19378cu;
    // NOP
}
