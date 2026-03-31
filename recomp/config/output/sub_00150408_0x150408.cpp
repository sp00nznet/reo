#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150408
// Address: 0x150408 - 0x150430
void sub_00150408_0x150408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150408u;

label_150408:
    // 0x150408: 0x3c020023
    ctx->pc = 0x150408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_15040c:
    // 0x15040c: 0x27bdfff0
    ctx->pc = 0x15040cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150410:
    // 0x150410: 0x8c42d838
    ctx->pc = 0x150410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957112)));
label_150414:
    // 0x150414: 0x10400003
label_150418:
    if (ctx->pc == 0x150418u) {
        ctx->pc = 0x150418u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x15041Cu;
        goto label_15041c;
    }
    ctx->pc = 0x150414u;
    {
        const bool branch_taken_0x150414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150418u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x150414) {
            ctx->pc = 0x150424u;
            goto label_150424;
        }
    }
    ctx->pc = 0x15041Cu;
label_15041c:
    // 0x15041c: 0x40f809
label_150420:
    if (ctx->pc == 0x150420u) {
        ctx->pc = 0x150424u;
        goto label_150424;
    }
    ctx->pc = 0x15041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x150424u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150408u: goto label_150408;
            case 0x15040Cu: goto label_15040c;
            case 0x150410u: goto label_150410;
            case 0x150414u: goto label_150414;
            case 0x150418u: goto label_150418;
            case 0x15041Cu: goto label_15041c;
            case 0x150420u: goto label_150420;
            case 0x150424u: goto label_150424;
            case 0x150428u: goto label_150428;
            case 0x15042Cu: goto label_15042c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x150424u; }
            if (ctx->pc != 0x150424u) { return; }
        }
    }
    ctx->pc = 0x150424u;
label_150424:
    // 0x150424: 0xdfbf0000
    ctx->pc = 0x150424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150428:
    // 0x150428: 0x3e00008
label_15042c:
    if (ctx->pc == 0x15042Cu) {
        ctx->pc = 0x15042Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150430u;
        goto label_fallthrough_0x150428;
    }
    ctx->pc = 0x150428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15042Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150408u: goto label_150408;
            case 0x15040Cu: goto label_15040c;
            case 0x150410u: goto label_150410;
            case 0x150414u: goto label_150414;
            case 0x150418u: goto label_150418;
            case 0x15041Cu: goto label_15041c;
            case 0x150420u: goto label_150420;
            case 0x150424u: goto label_150424;
            case 0x150428u: goto label_150428;
            case 0x15042Cu: goto label_15042c;
            default: break;
        }
        return;
    }
label_fallthrough_0x150428:
    ctx->pc = 0x150430u;
}
