#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193880
// Address: 0x193880 - 0x1938a0
void sub_00193880_0x193880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193880u;

    // 0x193880: 0x3c023f80
    ctx->pc = 0x193880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x193884: 0x3c050029
    ctx->pc = 0x193884u;
    SET_GPR_U32(ctx, 5, ((uint32_t)41 << 16));
    // 0x193888: 0x44826000
    ctx->pc = 0x193888u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x19388c: 0x24a54e00
    ctx->pc = 0x19388cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19968));
    // 0x193890: 0x46006346
    ctx->pc = 0x193890u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193894: 0x8064e28
    ctx->pc = 0x193894u;
    ctx->pc = 0x193898u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1938A0u;
    sub_001938A0_0x1938a0(rdram, ctx, runtime); return;
    ctx->pc = 0x19389Cu;
    // 0x19389c: 0x0
    ctx->pc = 0x19389cu;
    // NOP
}
