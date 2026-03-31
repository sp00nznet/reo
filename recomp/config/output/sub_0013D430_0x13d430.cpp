#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D430
// Address: 0x13d430 - 0x13d468
void sub_0013D430_0x13d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d430u;

label_13d430:
    // 0x13d430: 0x3c020022
    ctx->pc = 0x13d430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13d434:
    // 0x13d434: 0x27bdfff0
    ctx->pc = 0x13d434u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13d438:
    // 0x13d438: 0x8c46dfd8
    ctx->pc = 0x13d438u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294959064)));
label_13d43c:
    // 0x13d43c: 0x10c00006
label_13d440:
    if (ctx->pc == 0x13D440u) {
        ctx->pc = 0x13D440u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x13D444u;
        goto label_13d444;
    }
    ctx->pc = 0x13D43Cu;
    {
        const bool branch_taken_0x13d43c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x13D440u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13d43c) {
            ctx->pc = 0x13D458u;
            goto label_13d458;
        }
    }
    ctx->pc = 0x13D444u;
label_13d444:
    // 0x13d444: 0x3c020022
    ctx->pc = 0x13d444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13d448:
    // 0x13d448: 0x3c030022
    ctx->pc = 0x13d448u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_13d44c:
    // 0x13d44c: 0x8c44dfdc
    ctx->pc = 0x13d44cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294959068)));
label_13d450:
    // 0x13d450: 0xc0f809
label_13d454:
    if (ctx->pc == 0x13D454u) {
        ctx->pc = 0x13D454u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294959072)));
        ctx->pc = 0x13D458u;
        goto label_13d458;
    }
    ctx->pc = 0x13D450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x13D458u);
        ctx->pc = 0x13D454u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294959072)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D430u: goto label_13d430;
            case 0x13D434u: goto label_13d434;
            case 0x13D438u: goto label_13d438;
            case 0x13D43Cu: goto label_13d43c;
            case 0x13D440u: goto label_13d440;
            case 0x13D444u: goto label_13d444;
            case 0x13D448u: goto label_13d448;
            case 0x13D44Cu: goto label_13d44c;
            case 0x13D450u: goto label_13d450;
            case 0x13D454u: goto label_13d454;
            case 0x13D458u: goto label_13d458;
            case 0x13D45Cu: goto label_13d45c;
            case 0x13D460u: goto label_13d460;
            case 0x13D464u: goto label_13d464;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13D458u; }
            if (ctx->pc != 0x13D458u) { return; }
        }
    }
    ctx->pc = 0x13D458u;
label_13d458:
    // 0x13d458: 0xdfbf0000
    ctx->pc = 0x13d458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d45c:
    // 0x13d45c: 0x3e00008
label_13d460:
    if (ctx->pc == 0x13D460u) {
        ctx->pc = 0x13D460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13D464u;
        goto label_13d464;
    }
    ctx->pc = 0x13D45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D460u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13D430u: goto label_13d430;
            case 0x13D434u: goto label_13d434;
            case 0x13D438u: goto label_13d438;
            case 0x13D43Cu: goto label_13d43c;
            case 0x13D440u: goto label_13d440;
            case 0x13D444u: goto label_13d444;
            case 0x13D448u: goto label_13d448;
            case 0x13D44Cu: goto label_13d44c;
            case 0x13D450u: goto label_13d450;
            case 0x13D454u: goto label_13d454;
            case 0x13D458u: goto label_13d458;
            case 0x13D45Cu: goto label_13d45c;
            case 0x13D460u: goto label_13d460;
            case 0x13D464u: goto label_13d464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13D464u;
label_13d464:
    // 0x13d464: 0x0
    ctx->pc = 0x13d464u;
    // NOP
}
