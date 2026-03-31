#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8780
// Address: 0x1b8780 - 0x1b87c0
void sub_001B8780_0x1b8780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8780u;

    // 0x1b8780: 0x44841000
    ctx->pc = 0x1b8780u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 4);
    // 0x1b8784: 0x3c0240e0
    ctx->pc = 0x1b8784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16608 << 16));
    // 0x1b8788: 0x44820800
    ctx->pc = 0x1b8788u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1b878c: 0x468010a0
    ctx->pc = 0x1b878cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1b8790: 0x3c0242fe
    ctx->pc = 0x1b8790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17150 << 16));
    // 0x1b8794: 0x46011043
    ctx->pc = 0x1b8794u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1b8798: 0x44820000
    ctx->pc = 0x1b8798u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1b879c: 0x0
    ctx->pc = 0x1b879cu;
    // NOP
    // 0x1b87a0: 0x46010002
    ctx->pc = 0x1b87a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b87a4: 0x46000024
    ctx->pc = 0x1b87a4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1b87a8: 0x44050000
    ctx->pc = 0x1b87a8u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1b87ac: 0x0
    ctx->pc = 0x1b87acu;
    // NOP
    // 0x1b87b0: 0x806b830
    ctx->pc = 0x1B87B0u;
    ctx->pc = 0x1B87B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AE0C0u;
    sub_001AE0C0_0x1ae0c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B87B8u;
    // 0x1b87b8: 0x0
    ctx->pc = 0x1b87b8u;
    // NOP
    // 0x1b87bc: 0x0
    ctx->pc = 0x1b87bcu;
    // NOP
}
