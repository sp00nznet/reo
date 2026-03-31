#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012F750
// Address: 0x12f750 - 0x12f780
void sub_0012F750_0x12f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12f750u;

    // 0x12f750: 0x27bdfff0
    ctx->pc = 0x12f750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f754: 0xffbf0000
    ctx->pc = 0x12f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f758: 0xc04b6b8
    ctx->pc = 0x12F758u;
    SET_GPR_U32(ctx, 31, 0x12F760u);
    ctx->pc = 0x12DAE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DAE0_0x12dae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F760u; }
    }
    if (ctx->pc != 0x12F760u) { return; }
    ctx->pc = 0x12F760u;
    // 0x12f760: 0xdfbf0000
    ctx->pc = 0x12f760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f764: 0x3c040022
    ctx->pc = 0x12f764u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x12f768: 0x24848760
    ctx->pc = 0x12f768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936416));
    // 0x12f76c: 0x282d
    ctx->pc = 0x12f76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f770: 0x24061780
    ctx->pc = 0x12f770u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6016));
    // 0x12f774: 0x8041f1a
    ctx->pc = 0x12F774u;
    ctx->pc = 0x12F778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x12F77Cu;
    // 0x12f77c: 0x0
    ctx->pc = 0x12f77cu;
    // NOP
}
