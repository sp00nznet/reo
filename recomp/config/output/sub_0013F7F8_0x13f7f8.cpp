#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F7F8
// Address: 0x13f7f8 - 0x13f858
void sub_0013F7F8_0x13f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f7f8u;

    // 0x13f7f8: 0x27bdfff0
    ctx->pc = 0x13f7f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f7fc: 0x3c020022
    ctx->pc = 0x13f7fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13f800: 0xffb00000
    ctx->pc = 0x13f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f804: 0x24424c20
    ctx->pc = 0x13f804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19488));
    // 0x13f808: 0xffbf0008
    ctx->pc = 0x13f808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13f80c: 0xc04fc96
    ctx->pc = 0x13F80Cu;
    SET_GPR_U32(ctx, 31, 0x13F814u);
    ctx->pc = 0x13F810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F814u; }
    }
    if (ctx->pc != 0x13F814u) { return; }
    ctx->pc = 0x13F814u;
    // 0x13f814: 0x3c020022
    ctx->pc = 0x13f814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13f818: 0x3c040022
    ctx->pc = 0x13f818u;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13f81c: 0x24504c58
    ctx->pc = 0x13f81cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 19544));
    // 0x13f820: 0x24844c60
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19552));
    // 0x13f824: 0x8e020000
    ctx->pc = 0x13f824u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f828: 0x282d
    ctx->pc = 0x13f828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f82c: 0x14400004
    ctx->pc = 0x13F82Cu;
    {
        const bool branch_taken_0x13f82c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13F830u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
        if (branch_taken_0x13f82c) {
            ctx->pc = 0x13F840u;
            goto label_13f840;
        }
    }
    ctx->pc = 0x13F834u;
    // 0x13f834: 0xc041f1a
    ctx->pc = 0x13F834u;
    SET_GPR_U32(ctx, 31, 0x13F83Cu);
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F83Cu; }
    }
    if (ctx->pc != 0x13F83Cu) { return; }
    ctx->pc = 0x13F83Cu;
    // 0x13f83c: 0x8e020000
    ctx->pc = 0x13f83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13f840:
    // 0x13f840: 0x24420001
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f844: 0xdfbf0008
    ctx->pc = 0x13f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f848: 0xae020000
    ctx->pc = 0x13f848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13f84c: 0xdfb00000
    ctx->pc = 0x13f84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f850: 0x804fc9c
    ctx->pc = 0x13F850u;
    ctx->pc = 0x13F854u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13F858u;
}
