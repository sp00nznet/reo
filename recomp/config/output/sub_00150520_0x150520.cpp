#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150520
// Address: 0x150520 - 0x150548
void sub_00150520_0x150520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150520u;

label_150520:
    // 0x150520: 0x3c020023
    ctx->pc = 0x150520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_150524:
    // 0x150524: 0x27bdfff0
    ctx->pc = 0x150524u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150528:
    // 0x150528: 0x8c42d854
    ctx->pc = 0x150528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957140)));
label_15052c:
    // 0x15052c: 0x10400003
label_150530:
    if (ctx->pc == 0x150530u) {
        ctx->pc = 0x150530u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x150534u;
        goto label_150534;
    }
    ctx->pc = 0x15052Cu;
    {
        const bool branch_taken_0x15052c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150530u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x15052c) {
            ctx->pc = 0x15053Cu;
            goto label_15053c;
        }
    }
    ctx->pc = 0x150534u;
label_150534:
    // 0x150534: 0x40f809
label_150538:
    if (ctx->pc == 0x150538u) {
        ctx->pc = 0x15053Cu;
        goto label_15053c;
    }
    ctx->pc = 0x150534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15053Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150520u: goto label_150520;
            case 0x150524u: goto label_150524;
            case 0x150528u: goto label_150528;
            case 0x15052Cu: goto label_15052c;
            case 0x150530u: goto label_150530;
            case 0x150534u: goto label_150534;
            case 0x150538u: goto label_150538;
            case 0x15053Cu: goto label_15053c;
            case 0x150540u: goto label_150540;
            case 0x150544u: goto label_150544;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15053Cu; }
            if (ctx->pc != 0x15053Cu) { return; }
        }
    }
    ctx->pc = 0x15053Cu;
label_15053c:
    // 0x15053c: 0xdfbf0000
    ctx->pc = 0x15053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150540:
    // 0x150540: 0x3e00008
label_150544:
    if (ctx->pc == 0x150544u) {
        ctx->pc = 0x150544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150548u;
        goto label_fallthrough_0x150540;
    }
    ctx->pc = 0x150540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150520u: goto label_150520;
            case 0x150524u: goto label_150524;
            case 0x150528u: goto label_150528;
            case 0x15052Cu: goto label_15052c;
            case 0x150530u: goto label_150530;
            case 0x150534u: goto label_150534;
            case 0x150538u: goto label_150538;
            case 0x15053Cu: goto label_15053c;
            case 0x150540u: goto label_150540;
            case 0x150544u: goto label_150544;
            default: break;
        }
        return;
    }
label_fallthrough_0x150540:
    ctx->pc = 0x150548u;
}
