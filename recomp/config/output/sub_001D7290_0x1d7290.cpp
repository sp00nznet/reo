#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7290
// Address: 0x1d7290 - 0x1d72c0
void sub_001D7290_0x1d7290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7290u;

    // 0x1d7290: 0x27bdfff0
    ctx->pc = 0x1d7290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7294: 0xffbf0000
    ctx->pc = 0x1d7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7298: 0xc0761f4
    ctx->pc = 0x1D7298u;
    SET_GPR_U32(ctx, 31, 0x1D72A0u);
    ctx->pc = 0x1D87D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D87D0_0x1d87d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D72A0u; }
    }
    if (ctx->pc != 0x1D72A0u) { return; }
    ctx->pc = 0x1D72A0u;
    // 0x1d72a0: 0x3c010034
    ctx->pc = 0x1d72a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d72a4: 0x2143c
    ctx->pc = 0x1d72a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d72a8: 0xa0204601
    ctx->pc = 0x1d72a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17921), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d72ac: 0x2143f
    ctx->pc = 0x1d72acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d72b0: 0xdfbf0000
    ctx->pc = 0x1d72b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d72b4: 0x3e00008
    ctx->pc = 0x1D72B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D72B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D72BCu;
    // 0x1d72bc: 0x0
    ctx->pc = 0x1d72bcu;
    // NOP
}
