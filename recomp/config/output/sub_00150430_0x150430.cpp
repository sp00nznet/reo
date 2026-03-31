#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00150430
// Address: 0x150430 - 0x150458
void sub_00150430_0x150430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x150430u;

label_150430:
    // 0x150430: 0x3c020023
    ctx->pc = 0x150430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_150434:
    // 0x150434: 0x27bdfff0
    ctx->pc = 0x150434u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_150438:
    // 0x150438: 0x8c42d83c
    ctx->pc = 0x150438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957116)));
label_15043c:
    // 0x15043c: 0x10400003
label_150440:
    if (ctx->pc == 0x150440u) {
        ctx->pc = 0x150440u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x150444u;
        goto label_150444;
    }
    ctx->pc = 0x15043Cu;
    {
        const bool branch_taken_0x15043c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x150440u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x15043c) {
            ctx->pc = 0x15044Cu;
            goto label_15044c;
        }
    }
    ctx->pc = 0x150444u;
label_150444:
    // 0x150444: 0x40f809
label_150448:
    if (ctx->pc == 0x150448u) {
        ctx->pc = 0x15044Cu;
        goto label_15044c;
    }
    ctx->pc = 0x150444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15044Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150430u: goto label_150430;
            case 0x150434u: goto label_150434;
            case 0x150438u: goto label_150438;
            case 0x15043Cu: goto label_15043c;
            case 0x150440u: goto label_150440;
            case 0x150444u: goto label_150444;
            case 0x150448u: goto label_150448;
            case 0x15044Cu: goto label_15044c;
            case 0x150450u: goto label_150450;
            case 0x150454u: goto label_150454;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15044Cu; }
            if (ctx->pc != 0x15044Cu) { return; }
        }
    }
    ctx->pc = 0x15044Cu;
label_15044c:
    // 0x15044c: 0xdfbf0000
    ctx->pc = 0x15044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150450:
    // 0x150450: 0x3e00008
label_150454:
    if (ctx->pc == 0x150454u) {
        ctx->pc = 0x150454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x150458u;
        goto label_fallthrough_0x150450;
    }
    ctx->pc = 0x150450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150454u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150430u: goto label_150430;
            case 0x150434u: goto label_150434;
            case 0x150438u: goto label_150438;
            case 0x15043Cu: goto label_15043c;
            case 0x150440u: goto label_150440;
            case 0x150444u: goto label_150444;
            case 0x150448u: goto label_150448;
            case 0x15044Cu: goto label_15044c;
            case 0x150450u: goto label_150450;
            case 0x150454u: goto label_150454;
            default: break;
        }
        return;
    }
label_fallthrough_0x150450:
    ctx->pc = 0x150458u;
}
