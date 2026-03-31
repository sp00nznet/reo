#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168378
// Address: 0x168378 - 0x1683d8
void sub_00168378_0x168378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168378u;

    // 0x168378: 0x27bdfff0
    ctx->pc = 0x168378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16837c: 0x282d
    ctx->pc = 0x16837cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168380: 0x24060040
    ctx->pc = 0x168380u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x168384: 0xffb00000
    ctx->pc = 0x168384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168388: 0xffbf0008
    ctx->pc = 0x168388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16838c: 0xc041f1a
    ctx->pc = 0x16838Cu;
    SET_GPR_U32(ctx, 31, 0x168394u);
    ctx->pc = 0x168390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168394u; }
    }
    if (ctx->pc != 0x168394u) { return; }
    ctx->pc = 0x168394u;
    // 0x168394: 0xa2000000
    ctx->pc = 0x168394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x168398: 0xae00002c
    ctx->pc = 0x168398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x16839c: 0xa2000001
    ctx->pc = 0x16839cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1683a0: 0xae000004
    ctx->pc = 0x1683a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1683a4: 0xae000008
    ctx->pc = 0x1683a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1683a8: 0xae00000c
    ctx->pc = 0x1683a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1683ac: 0xae000010
    ctx->pc = 0x1683acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1683b0: 0xae000014
    ctx->pc = 0x1683b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1683b4: 0xae000018
    ctx->pc = 0x1683b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1683b8: 0xae00001c
    ctx->pc = 0x1683b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1683bc: 0xae000020
    ctx->pc = 0x1683bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1683c0: 0xae000024
    ctx->pc = 0x1683c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1683c4: 0xa2000028
    ctx->pc = 0x1683c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1683c8: 0xdfbf0008
    ctx->pc = 0x1683c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1683cc: 0xdfb00000
    ctx->pc = 0x1683ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1683d0: 0x3e00008
    ctx->pc = 0x1683D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1683D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1683D8u;
}
