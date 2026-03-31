#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00151070
// Address: 0x151070 - 0x1510c0
void sub_00151070_0x151070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x151070u;

    // 0x151070: 0x8c820048
    ctx->pc = 0x151070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x151074: 0x24030001
    ctx->pc = 0x151074u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x151078: 0x10430008
    ctx->pc = 0x151078u;
    {
        const bool branch_taken_0x151078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x15107Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x151078) {
            ctx->pc = 0x15109Cu;
            goto label_15109c;
        }
    }
    ctx->pc = 0x151080u;
    // 0x151080: 0x8c820118
    ctx->pc = 0x151080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x151084: 0x50430005
    ctx->pc = 0x151084u;
    {
        const bool branch_taken_0x151084 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x151084) {
            ctx->pc = 0x151088u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x15109Cu;
            goto label_15109c;
        }
    }
    ctx->pc = 0x15108Cu;
    // 0x15108c: 0x24050002
    ctx->pc = 0x15108cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x151090: 0x54450005
    ctx->pc = 0x151090u;
    {
        const bool branch_taken_0x151090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x151090) {
            ctx->pc = 0x151094u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 308)));
            ctx->pc = 0x1510A8u;
            goto label_1510a8;
        }
    }
    ctx->pc = 0x151098u;
    // 0x151098: 0x24020001
    ctx->pc = 0x151098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_15109c:
    // 0x15109c: 0x3e00008
    ctx->pc = 0x15109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1510A0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15109Cu: goto label_15109c;
            case 0x1510A8u: goto label_1510a8;
            case 0x1510B8u: goto label_1510b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1510A4u;
    // 0x1510a4: 0x0
    ctx->pc = 0x1510a4u;
    // NOP
label_1510a8:
    // 0x1510a8: 0x14430003
    ctx->pc = 0x1510A8u;
    {
        const bool branch_taken_0x1510a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1510ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1510a8) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x1510B0u;
    // 0x1510b0: 0x3e00008
    ctx->pc = 0x1510B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1510B4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15109Cu: goto label_15109c;
            case 0x1510A8u: goto label_1510a8;
            case 0x1510B8u: goto label_1510b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1510B8u;
label_1510b8:
    // 0x1510b8: 0x3e00008
    ctx->pc = 0x1510B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1510BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15109Cu: goto label_15109c;
            case 0x1510A8u: goto label_1510a8;
            case 0x1510B8u: goto label_1510b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1510C0u;
}
