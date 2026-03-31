#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00137668
// Address: 0x137668 - 0x137738
void sub_00137668_0x137668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x137668u;

    // 0x137668: 0x27bdffb0
    ctx->pc = 0x137668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13766c: 0x24020001
    ctx->pc = 0x13766cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x137670: 0xffb00010
    ctx->pc = 0x137670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137674: 0xffbf0048
    ctx->pc = 0x137674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x137678: 0xafa20000
    ctx->pc = 0x137678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x13767c: 0xffb10018
    ctx->pc = 0x13767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x137680: 0x80882d
    ctx->pc = 0x137680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137684: 0xffb20020
    ctx->pc = 0x137684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x137688: 0x902d
    ctx->pc = 0x137688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13768c: 0xffb30028
    ctx->pc = 0x13768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x137690: 0x34139000
    ctx->pc = 0x137690u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 0), 36864));
    // 0x137694: 0xffb40030
    ctx->pc = 0x137694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x137698: 0x24140001
    ctx->pc = 0x137698u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13769c: 0xffb50038
    ctx->pc = 0x13769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1376a0: 0x3c150024
    ctx->pc = 0x1376a0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x1376a4: 0xffb60040
    ctx->pc = 0x1376a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1376a8: 0x24160009
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1376ac: 0x8fa20000
    ctx->pc = 0x1376acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1376b0:
    // 0x1376b0: 0x14540017
    ctx->pc = 0x1376B0u;
    {
        const bool branch_taken_0x1376b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        ctx->pc = 0x1376B4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1376b0) {
            ctx->pc = 0x137710u;
            goto label_137710;
        }
    }
    ctx->pc = 0x1376B8u;
    // 0x1376b8: 0xc04e082
    ctx->pc = 0x1376B8u;
    SET_GPR_U32(ctx, 31, 0x1376C0u);
    ctx->pc = 0x1376BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4352));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376C0u; }
    }
    if (ctx->pc != 0x1376C0u) { return; }
    ctx->pc = 0x1376C0u;
    // 0x1376c0: 0x8e240030
    ctx->pc = 0x1376c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1376c4: 0x24050001
    ctx->pc = 0x1376c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1376c8: 0xc04e128
    ctx->pc = 0x1376C8u;
    SET_GPR_U32(ctx, 31, 0x1376D0u);
    ctx->pc = 0x1376CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1384A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001384A0_0x1384a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376D0u; }
    }
    if (ctx->pc != 0x1376D0u) { return; }
    ctx->pc = 0x1376D0u;
    // 0x1376d0: 0x24041101
    ctx->pc = 0x1376d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4353));
    // 0x1376d4: 0xc04e082
    ctx->pc = 0x1376D4u;
    SET_GPR_U32(ctx, 31, 0x1376DCu);
    ctx->pc = 0x1376D8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376DCu; }
    }
    if (ctx->pc != 0x1376DCu) { return; }
    ctx->pc = 0x1376DCu;
    // 0x1376dc: 0x6010004
    ctx->pc = 0x1376DCu;
    {
        const bool branch_taken_0x1376dc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1376dc) {
            ctx->pc = 0x1376F0u;
            goto label_1376f0;
        }
    }
    ctx->pc = 0x1376E4u;
    // 0x1376e4: 0xae300034
    ctx->pc = 0x1376e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1376e8: 0x10000008
    ctx->pc = 0x1376E8u;
    {
        const bool branch_taken_0x1376e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1376ECu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
        if (branch_taken_0x1376e8) {
            ctx->pc = 0x13770Cu;
            goto label_13770c;
        }
    }
    ctx->pc = 0x1376F0u;
label_1376f0:
    // 0x1376f0: 0xc04dd84
    ctx->pc = 0x1376F0u;
    SET_GPR_U32(ctx, 31, 0x1376F8u);
    ctx->pc = 0x1376F4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x137610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137610_0x137610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1376F8u; }
    }
    if (ctx->pc != 0x1376F8u) { return; }
    ctx->pc = 0x1376F8u;
    // 0x1376f8: 0x272102a
    ctx->pc = 0x1376f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 18)));
    // 0x1376fc: 0x5040ffec
    ctx->pc = 0x1376FCu;
    {
        const bool branch_taken_0x1376fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1376fc) {
            ctx->pc = 0x137700u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1376B0u;
            goto label_1376b0;
        }
    }
    ctx->pc = 0x137704u;
    // 0x137704: 0xc045a12
    ctx->pc = 0x137704u;
    SET_GPR_U32(ctx, 31, 0x13770Cu);
    ctx->pc = 0x137708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294952136));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13770Cu; }
    }
    if (ctx->pc != 0x13770Cu) { return; }
    ctx->pc = 0x13770Cu;
label_13770c:
    // 0x13770c: 0xdfb00010
    ctx->pc = 0x13770cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137710:
    // 0x137710: 0xdfb10018
    ctx->pc = 0x137710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137714: 0xdfb20020
    ctx->pc = 0x137714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137718: 0xdfb30028
    ctx->pc = 0x137718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13771c: 0xdfb40030
    ctx->pc = 0x13771cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137720: 0xdfb50038
    ctx->pc = 0x137720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x137724: 0xdfb60040
    ctx->pc = 0x137724u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137728: 0xdfbf0048
    ctx->pc = 0x137728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13772c: 0x3e00008
    ctx->pc = 0x13772Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137730u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1376B0u: goto label_1376b0;
            case 0x1376F0u: goto label_1376f0;
            case 0x13770Cu: goto label_13770c;
            case 0x137710u: goto label_137710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137734u;
    // 0x137734: 0x0
    ctx->pc = 0x137734u;
    // NOP
}
