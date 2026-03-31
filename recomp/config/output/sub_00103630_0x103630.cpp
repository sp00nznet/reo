#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00103630
// Address: 0x103630 - 0x1036a0
void sub_00103630_0x103630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103630u;

    // 0x103630: 0x27bdfff0
    ctx->pc = 0x103630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x103634: 0x24020001
    ctx->pc = 0x103634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103638: 0x14a20005
    ctx->pc = 0x103638u;
    {
        const bool branch_taken_0x103638 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x10363Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x103638) {
            ctx->pc = 0x103650u;
            goto label_103650;
        }
    }
    ctx->pc = 0x103640u;
    // 0x103640: 0x8c820000
    ctx->pc = 0x103640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103644: 0x21202
    ctx->pc = 0x103644u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x103648: 0x10000004
    ctx->pc = 0x103648u;
    {
        const bool branch_taken_0x103648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10364Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x103648) {
            ctx->pc = 0x10365Cu;
            goto label_10365c;
        }
    }
    ctx->pc = 0x103650u;
label_103650:
    // 0x103650: 0xc040bc2
    ctx->pc = 0x103650u;
    SET_GPR_U32(ctx, 31, 0x103658u);
    ctx->pc = 0x102F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F08_0x102f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103658u; }
    }
    if (ctx->pc != 0x103658u) { return; }
    ctx->pc = 0x103658u;
    // 0x103658: 0x102d
    ctx->pc = 0x103658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10365c:
    // 0x10365c: 0xdfbf0000
    ctx->pc = 0x10365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103660: 0x3e00008
    ctx->pc = 0x103660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103664u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103650u: goto label_103650;
            case 0x10365Cu: goto label_10365c;
            case 0x103684u: goto label_103684;
            case 0x103690u: goto label_103690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103668u;
    // 0x103668: 0x27bdfff0
    ctx->pc = 0x103668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10366c: 0x24020001
    ctx->pc = 0x10366cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103670: 0x14c20004
    ctx->pc = 0x103670u;
    {
        const bool branch_taken_0x103670 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x103674u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x103670) {
            ctx->pc = 0x103684u;
            goto label_103684;
        }
    }
    ctx->pc = 0x103678u;
    // 0x103678: 0x8c820010
    ctx->pc = 0x103678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10367c: 0x10000004
    ctx->pc = 0x10367Cu;
    {
        const bool branch_taken_0x10367c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x103680u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        if (branch_taken_0x10367c) {
            ctx->pc = 0x103690u;
            goto label_103690;
        }
    }
    ctx->pc = 0x103684u;
label_103684:
    // 0x103684: 0xc040bde
    ctx->pc = 0x103684u;
    SET_GPR_U32(ctx, 31, 0x10368Cu);
    ctx->pc = 0x103688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102F78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00102F78_0x102f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10368Cu; }
    }
    if (ctx->pc != 0x10368Cu) { return; }
    ctx->pc = 0x10368Cu;
    // 0x10368c: 0x102d
    ctx->pc = 0x10368cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103690:
    // 0x103690: 0xdfbf0000
    ctx->pc = 0x103690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103694: 0x3e00008
    ctx->pc = 0x103694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103698u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103650u: goto label_103650;
            case 0x10365Cu: goto label_10365c;
            case 0x103684u: goto label_103684;
            case 0x103690u: goto label_103690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10369Cu;
    // 0x10369c: 0x0
    ctx->pc = 0x10369cu;
    // NOP
}
