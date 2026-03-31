#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177D90
// Address: 0x177d90 - 0x177dd0
void sub_00177D90_0x177d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177d90u;

    // 0x177d90: 0x27bdfff0
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177d94: 0x282d
    ctx->pc = 0x177d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d98: 0xffb00000
    ctx->pc = 0x177d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177d9c: 0x80802d
    ctx->pc = 0x177d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177da0: 0x26040018
    ctx->pc = 0x177da0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    // 0x177da4: 0xffbf0008
    ctx->pc = 0x177da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177da8: 0xc041f1a
    ctx->pc = 0x177DA8u;
    SET_GPR_U32(ctx, 31, 0x177DB0u);
    ctx->pc = 0x177DACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DB0u; }
    }
    if (ctx->pc != 0x177DB0u) { return; }
    ctx->pc = 0x177DB0u;
    // 0x177db0: 0x8e02019c
    ctx->pc = 0x177db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x177db4: 0xae000014
    ctx->pc = 0x177db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x177db8: 0x24420001
    ctx->pc = 0x177db8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x177dbc: 0xdfbf0008
    ctx->pc = 0x177dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177dc0: 0xae02019c
    ctx->pc = 0x177dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x177dc4: 0xdfb00000
    ctx->pc = 0x177dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177dc8: 0x3e00008
    ctx->pc = 0x177DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DD0u;
}
