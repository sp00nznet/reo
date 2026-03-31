#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f288
// Address: 0x13f288 - 0x13f2c0
void entry_13f288_0x13f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f288u;

label_13f288:
    // 0x13f288: 0x27bdfff0
    ctx->pc = 0x13f288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f28c: 0xffbf0000
    ctx->pc = 0x13f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f290: 0xdfbf0000
    ctx->pc = 0x13f290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f294: 0x805062a
    ctx->pc = 0x13F294u;
    ctx->pc = 0x13F298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1418A8u;
    sub_001418A8_0x1418a8(rdram, ctx, runtime); return;
    ctx->pc = 0x13F29Cu;
    // 0x13f29c: 0x0
    ctx->pc = 0x13f29cu;
    // NOP
    // 0x13f2a0: 0x27bdfff0
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f2a4: 0x3c040024
    ctx->pc = 0x13f2a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13f2a8: 0xffbf0000
    ctx->pc = 0x13f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f2ac: 0x2484da18
    ctx->pc = 0x13f2acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957592));
    // 0x13f2b0: 0xdfbf0000
    ctx->pc = 0x13f2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f2b4: 0x804fca2
    ctx->pc = 0x13F2B4u;
    ctx->pc = 0x13F2B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F288u;
    goto label_13f288;
    ctx->pc = 0x13F2BCu;
    // 0x13f2bc: 0x0
    ctx->pc = 0x13f2bcu;
    // NOP
}
