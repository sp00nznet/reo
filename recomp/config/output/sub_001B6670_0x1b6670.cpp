#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B6670
// Address: 0x1b6670 - 0x1b66c0
void sub_001B6670_0x1b6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b6670u;

    // 0x1b6670: 0x308300ff
    ctx->pc = 0x1b6670u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x1b6674: 0x28610060
    ctx->pc = 0x1b6674u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 96));
    // 0x1b6678: 0x10200004
    ctx->pc = 0x1B6678u;
    {
        const bool branch_taken_0x1b6678 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B667Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 128));
        if (branch_taken_0x1b6678) {
            ctx->pc = 0x1B668Cu;
            goto label_1b668c;
        }
    }
    ctx->pc = 0x1B6680u;
    // 0x1b6680: 0x24627fff
    ctx->pc = 0x1b6680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32767));
    // 0x1b6684: 0x1000000c
    ctx->pc = 0x1B6684u;
    {
        const bool branch_taken_0x1b6684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6688u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1312));
        if (branch_taken_0x1b6684) {
            ctx->pc = 0x1B66B8u;
            goto label_1b66b8;
        }
    }
    ctx->pc = 0x1B668Cu;
label_1b668c:
    // 0x1b668c: 0x10200004
    ctx->pc = 0x1B668Cu;
    {
        const bool branch_taken_0x1b668c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B6690u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 165));
        if (branch_taken_0x1b668c) {
            ctx->pc = 0x1B66A0u;
            goto label_1b66a0;
        }
    }
    ctx->pc = 0x1B6694u;
    // 0x1b6694: 0x24627fff
    ctx->pc = 0x1b6694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32767));
    // 0x1b6698: 0x10000007
    ctx->pc = 0x1B6698u;
    {
        const bool branch_taken_0x1b6698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B669Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1313));
        if (branch_taken_0x1b6698) {
            ctx->pc = 0x1B66B8u;
            goto label_1b66b8;
        }
    }
    ctx->pc = 0x1B66A0u;
label_1b66a0:
    // 0x1b66a0: 0x14620003
    ctx->pc = 0x1B66A0u;
    {
        const bool branch_taken_0x1b66a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b66a0) {
            ctx->pc = 0x1B66B0u;
            goto label_1b66b0;
        }
    }
    ctx->pc = 0x1B66A8u;
    // 0x1b66a8: 0x10000003
    ctx->pc = 0x1B66A8u;
    {
        const bool branch_taken_0x1b66a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B66ACu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 34211));
        if (branch_taken_0x1b66a8) {
            ctx->pc = 0x1B66B8u;
            goto label_1b66b8;
        }
    }
    ctx->pc = 0x1B66B0u;
label_1b66b0:
    // 0x1b66b0: 0x24627fff
    ctx->pc = 0x1b66b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 32767));
    // 0x1b66b4: 0x244204ff
    ctx->pc = 0x1b66b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1279));
label_1b66b8:
    // 0x1b66b8: 0x3e00008
    ctx->pc = 0x1B66B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B668Cu: goto label_1b668c;
            case 0x1B66A0u: goto label_1b66a0;
            case 0x1B66B0u: goto label_1b66b0;
            case 0x1B66B8u: goto label_1b66b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B66C0u;
}
