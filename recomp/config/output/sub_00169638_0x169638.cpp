#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169638
// Address: 0x169638 - 0x1696b0
void sub_00169638_0x169638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169638u;

    // 0x169638: 0x27bdffd0
    ctx->pc = 0x169638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16963c: 0xffb00010
    ctx->pc = 0x16963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x169640: 0xa0802d
    ctx->pc = 0x169640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169644: 0xffb10018
    ctx->pc = 0x169644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x169648: 0xc0882d
    ctx->pc = 0x169648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16964c: 0x230102a
    ctx->pc = 0x16964cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x169650: 0xffb20020
    ctx->pc = 0x169650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x169654: 0xffbf0028
    ctx->pc = 0x169654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x169658: 0x1440000e
    ctx->pc = 0x169658u;
    {
        const bool branch_taken_0x169658 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16965Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x169658) {
            ctx->pc = 0x169694u;
            goto label_169694;
        }
    }
    ctx->pc = 0x169660u;
    // 0x169660: 0x320500ff
    ctx->pc = 0x169660u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 255));
    // 0x169664: 0x0
    ctx->pc = 0x169664u;
    // NOP
label_169668:
    // 0x169668: 0x240202d
    ctx->pc = 0x169668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16966c: 0xc05e4fe
    ctx->pc = 0x16966Cu;
    SET_GPR_U32(ctx, 31, 0x169674u);
    ctx->pc = 0x169670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1793F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001793F8_0x1793f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169674u; }
    }
    if (ctx->pc != 0x169674u) { return; }
    ctx->pc = 0x169674u;
    // 0x169674: 0x10400003
    ctx->pc = 0x169674u;
    {
        const bool branch_taken_0x169674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x169678u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x169674) {
            ctx->pc = 0x169684u;
            goto label_169684;
        }
    }
    ctx->pc = 0x16967Cu;
    // 0x16967c: 0x14600006
    ctx->pc = 0x16967Cu;
    {
        const bool branch_taken_0x16967c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x169680u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16967c) {
            ctx->pc = 0x169698u;
            goto label_169698;
        }
    }
    ctx->pc = 0x169684u;
label_169684:
    // 0x169684: 0x26100001
    ctx->pc = 0x169684u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x169688: 0x230102a
    ctx->pc = 0x169688u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x16968c: 0x1040fff6
    ctx->pc = 0x16968Cu;
    {
        const bool branch_taken_0x16968c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x169690u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 255));
        if (branch_taken_0x16968c) {
            ctx->pc = 0x169668u;
            goto label_169668;
        }
    }
    ctx->pc = 0x169694u;
label_169694:
    // 0x169694: 0x102d
    ctx->pc = 0x169694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169698:
    // 0x169698: 0xdfb00010
    ctx->pc = 0x169698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16969c: 0xdfb10018
    ctx->pc = 0x16969cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1696a0: 0xdfb20020
    ctx->pc = 0x1696a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1696a4: 0xdfbf0028
    ctx->pc = 0x1696a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1696a8: 0x3e00008
    ctx->pc = 0x1696A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169668u: goto label_169668;
            case 0x169684u: goto label_169684;
            case 0x169694u: goto label_169694;
            case 0x169698u: goto label_169698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1696B0u;
}
