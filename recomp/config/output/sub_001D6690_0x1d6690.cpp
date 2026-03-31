#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6690
// Address: 0x1d6690 - 0x1d66d0
void sub_001D6690_0x1d6690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6690u;

    // 0x1d6690: 0x27bdfff0
    ctx->pc = 0x1d6690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6694: 0x3c010034
    ctx->pc = 0x1d6694u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d6698: 0xffbf0000
    ctx->pc = 0x1d6698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d669c: 0xa02045d8
    ctx->pc = 0x1d669cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17880), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d66a0: 0x3c010034
    ctx->pc = 0x1d66a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d66a4: 0xac2045e0
    ctx->pc = 0x1d66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17888), GPR_U32(ctx, 0));
    // 0x1d66a8: 0x3c010034
    ctx->pc = 0x1d66a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d66ac: 0xac2045e8
    ctx->pc = 0x1d66acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 0));
    // 0x1d66b0: 0x3c010034
    ctx->pc = 0x1d66b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d66b4: 0xc075e04
    ctx->pc = 0x1D66B4u;
    SET_GPR_U32(ctx, 31, 0x1D66BCu);
    ctx->pc = 0x1D66B8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17904), GPR_U32(ctx, 0));
    ctx->pc = 0x1D7810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7810_0x1d7810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66BCu; }
    }
    if (ctx->pc != 0x1D66BCu) { return; }
    ctx->pc = 0x1D66BCu;
    // 0x1d66bc: 0xdfbf0000
    ctx->pc = 0x1d66bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d66c0: 0x102d
    ctx->pc = 0x1d66c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66c4: 0x3e00008
    ctx->pc = 0x1D66C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D66CCu;
    // 0x1d66cc: 0x0
    ctx->pc = 0x1d66ccu;
    // NOP
}
