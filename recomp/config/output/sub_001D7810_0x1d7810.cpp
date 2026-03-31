#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7810
// Address: 0x1d7810 - 0x1d78e0
void sub_001D7810_0x1d7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7810u;

    // 0x1d7810: 0x27bdffd0
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7814: 0x3c010034
    ctx->pc = 0x1d7814u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7818: 0xffbf0000
    ctx->pc = 0x1d7818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d781c: 0x8c225240
    ctx->pc = 0x1d781cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 21056)));
    // 0x1d7820: 0x1440000b
    ctx->pc = 0x1D7820u;
    {
        const bool branch_taken_0x1d7820 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D7824u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1d7820) {
            ctx->pc = 0x1D7850u;
            goto label_1d7850;
        }
    }
    ctx->pc = 0x1D7828u;
    // 0x1d7828: 0x282d
    ctx->pc = 0x1d7828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d782c: 0xc041f1a
    ctx->pc = 0x1D782Cu;
    SET_GPR_U32(ctx, 31, 0x1D7834u);
    ctx->pc = 0x1D7830u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7834u; }
    }
    if (ctx->pc != 0x1D7834u) { return; }
    ctx->pc = 0x1D7834u;
    // 0x1d7834: 0x24020001
    ctx->pc = 0x1d7834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7838: 0x27a40010
    ctx->pc = 0x1d7838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d783c: 0xafa20018
    ctx->pc = 0x1d783cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d7840: 0xc045188
    ctx->pc = 0x1D7840u;
    SET_GPR_U32(ctx, 31, 0x1D7848u);
    ctx->pc = 0x1D7844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7848u; }
    }
    if (ctx->pc != 0x1D7848u) { return; }
    ctx->pc = 0x1D7848u;
    // 0x1d7848: 0x3c010034
    ctx->pc = 0x1d7848u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d784c: 0xac225240
    ctx->pc = 0x1d784cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21056), GPR_U32(ctx, 2));
label_1d7850:
    // 0x1d7850: 0x3c010035
    ctx->pc = 0x1d7850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d7854: 0xa4208288
    ctx->pc = 0x1d7854u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935176), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d7858: 0x3c010035
    ctx->pc = 0x1d7858u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1d785c: 0xa4208280
    ctx->pc = 0x1d785cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294935168), (uint16_t)GPR_U32(ctx, 0));
label_1d7860:
    // 0x1d7860: 0x3c040035
    ctx->pc = 0x1d7860u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1d7864: 0x3c020127
    ctx->pc = 0x1d7864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)295 << 16));
    // 0x1d7868: 0x24848290
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935184));
    // 0x1d786c: 0x302d
    ctx->pc = 0x1d786cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7870: 0xc045e06
    ctx->pc = 0x1D7870u;
    SET_GPR_U32(ctx, 31, 0x1D7878u);
    ctx->pc = 0x1D7874u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 272));
    ctx->pc = 0x117818u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117818_0x117818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7878u; }
    }
    if (ctx->pc != 0x1D7878u) { return; }
    ctx->pc = 0x1D7878u;
    // 0x1d7878: 0x4400005
    ctx->pc = 0x1D7878u;
    {
        const bool branch_taken_0x1d7878 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D787Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
        if (branch_taken_0x1d7878) {
            ctx->pc = 0x1D7890u;
            goto label_1d7890;
        }
    }
    ctx->pc = 0x1D7880u;
    // 0x1d7880: 0x8c2282b4
    ctx->pc = 0x1d7880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294935220)));
    // 0x1d7884: 0x14400012
    ctx->pc = 0x1D7884u;
    {
        const bool branch_taken_0x1d7884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d7884) {
            ctx->pc = 0x1D78D0u;
            goto label_1d78d0;
        }
    }
    ctx->pc = 0x1D788Cu;
    // 0x1d788c: 0x0
    ctx->pc = 0x1d788cu;
    // NOP
label_1d7890:
    // 0x1d7890: 0x3c020001
    ctx->pc = 0x1d7890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1d7894: 0xafa2002c
    ctx->pc = 0x1d7894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1d7898: 0x8fa2002c
    ctx->pc = 0x1d7898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d789c: 0x1040fff0
    ctx->pc = 0x1D789Cu;
    {
        const bool branch_taken_0x1d789c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d789c) {
            ctx->pc = 0x1D7860u;
            goto label_1d7860;
        }
    }
    ctx->pc = 0x1D78A4u;
    // 0x1d78a4: 0x0
    ctx->pc = 0x1d78a4u;
    // NOP
label_1d78a8:
    // 0x1d78a8: 0x8fa2002c
    ctx->pc = 0x1d78a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d78ac: 0x2442ffff
    ctx->pc = 0x1d78acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d78b0: 0xafa2002c
    ctx->pc = 0x1d78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1d78b4: 0x8fa2002c
    ctx->pc = 0x1d78b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1d78b8: 0x0
    ctx->pc = 0x1d78b8u;
    // NOP
    // 0x1d78bc: 0x1440fffa
    ctx->pc = 0x1D78BCu;
    {
        const bool branch_taken_0x1d78bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d78bc) {
            ctx->pc = 0x1D78A8u;
            goto label_1d78a8;
        }
    }
    ctx->pc = 0x1D78C4u;
    // 0x1d78c4: 0x1000ffe6
    ctx->pc = 0x1D78C4u;
    {
        const bool branch_taken_0x1d78c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d78c4) {
            ctx->pc = 0x1D7860u;
            goto label_1d7860;
        }
    }
    ctx->pc = 0x1D78CCu;
    // 0x1d78cc: 0x0
    ctx->pc = 0x1d78ccu;
    // NOP
label_1d78d0:
    // 0x1d78d0: 0xdfbf0000
    ctx->pc = 0x1d78d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78d4: 0x102d
    ctx->pc = 0x1d78d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78d8: 0x3e00008
    ctx->pc = 0x1D78D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7850u: goto label_1d7850;
            case 0x1D7860u: goto label_1d7860;
            case 0x1D7890u: goto label_1d7890;
            case 0x1D78A8u: goto label_1d78a8;
            case 0x1D78D0u: goto label_1d78d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D78E0u;
}
