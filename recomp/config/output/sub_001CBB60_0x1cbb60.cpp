#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CBB60
// Address: 0x1cbb60 - 0x1cbbc0
void sub_001CBB60_0x1cbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cbb60u;

    // 0x1cbb60: 0x3c010026
    ctx->pc = 0x1cbb60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
    // 0x1cbb64: 0x24020067
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
    // 0x1cbb68: 0x8c239d10
    ctx->pc = 0x1cbb68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294941968)));
    // 0x1cbb6c: 0x10620012
    ctx->pc = 0x1CBB6Cu;
    {
        const bool branch_taken_0x1cbb6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CBB70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        if (branch_taken_0x1cbb6c) {
            ctx->pc = 0x1CBBB8u;
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBB74u;
    // 0x1cbb74: 0x24020066
    ctx->pc = 0x1cbb74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
    // 0x1cbb78: 0x1062000d
    ctx->pc = 0x1CBB78u;
    {
        const bool branch_taken_0x1cbb78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CBB7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        if (branch_taken_0x1cbb78) {
            ctx->pc = 0x1CBBB0u;
            goto label_1cbbb0;
        }
    }
    ctx->pc = 0x1CBB80u;
    // 0x1cbb80: 0x24020065
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
    // 0x1cbb84: 0x10620008
    ctx->pc = 0x1CBB84u;
    {
        const bool branch_taken_0x1cbb84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CBB88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        if (branch_taken_0x1cbb84) {
            ctx->pc = 0x1CBBA8u;
            goto label_1cbba8;
        }
    }
    ctx->pc = 0x1CBB8Cu;
    // 0x1cbb8c: 0x24020064
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cbb90: 0x10620003
    ctx->pc = 0x1CBB90u;
    {
        const bool branch_taken_0x1cbb90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CBB94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967284));
        if (branch_taken_0x1cbb90) {
            ctx->pc = 0x1CBBA0u;
            goto label_1cbba0;
        }
    }
    ctx->pc = 0x1CBB98u;
    // 0x1cbb98: 0x10000007
    ctx->pc = 0x1CBB98u;
    {
        const bool branch_taken_0x1cbb98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CBB9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
        if (branch_taken_0x1cbb98) {
            ctx->pc = 0x1CBBB8u;
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBBA0u;
label_1cbba0:
    // 0x1cbba0: 0x10000005
    ctx->pc = 0x1CBBA0u;
    {
        const bool branch_taken_0x1cbba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cbba0) {
            ctx->pc = 0x1CBBB8u;
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBBA8u;
label_1cbba8:
    // 0x1cbba8: 0x10000003
    ctx->pc = 0x1CBBA8u;
    {
        const bool branch_taken_0x1cbba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cbba8) {
            ctx->pc = 0x1CBBB8u;
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBBB0u;
label_1cbbb0:
    // 0x1cbbb0: 0x10000001
    ctx->pc = 0x1CBBB0u;
    {
        const bool branch_taken_0x1cbbb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cbbb0) {
            ctx->pc = 0x1CBBB8u;
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBBB8u;
label_1cbbb8:
    // 0x1cbbb8: 0x3e00008
    ctx->pc = 0x1CBBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBBA0u: goto label_1cbba0;
            case 0x1CBBA8u: goto label_1cbba8;
            case 0x1CBBB0u: goto label_1cbbb0;
            case 0x1CBBB8u: goto label_1cbbb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CBBC0u;
}
