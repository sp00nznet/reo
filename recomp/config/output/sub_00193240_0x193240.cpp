#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193240
// Address: 0x193240 - 0x193260
void sub_00193240_0x193240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193240u;

    // 0x193240: 0x3c023f80
    ctx->pc = 0x193240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x193244: 0x44826000
    ctx->pc = 0x193244u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x193248: 0x0
    ctx->pc = 0x193248u;
    // NOP
    // 0x19324c: 0x46006346
    ctx->pc = 0x19324cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193250: 0x8064c98
    ctx->pc = 0x193250u;
    ctx->pc = 0x193254u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x193260u;
    sub_00193260_0x193260(rdram, ctx, runtime); return;
    ctx->pc = 0x193258u;
    // 0x193258: 0x0
    ctx->pc = 0x193258u;
    // NOP
    // 0x19325c: 0x0
    ctx->pc = 0x19325cu;
    // NOP
}
