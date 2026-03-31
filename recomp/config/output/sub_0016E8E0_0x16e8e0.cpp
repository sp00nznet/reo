#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E8E0
// Address: 0x16e8e0 - 0x16e930
void sub_0016E8E0_0x16e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e8e0u;

    // 0x16e8e0: 0x24020002
    ctx->pc = 0x16e8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e8e4: 0x10a2000e
    ctx->pc = 0x16E8E4u;
    {
        const bool branch_taken_0x16e8e4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x16E8E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2464));
        if (branch_taken_0x16e8e4) {
            ctx->pc = 0x16E920u;
            goto label_16e920;
        }
    }
    ctx->pc = 0x16E8ECu;
    // 0x16e8ec: 0x2ca20003
    ctx->pc = 0x16e8ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 3));
    // 0x16e8f0: 0x10400007
    ctx->pc = 0x16E8F0u;
    {
        const bool branch_taken_0x16e8f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E8F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16e8f0) {
            ctx->pc = 0x16E910u;
            goto label_16e910;
        }
    }
    ctx->pc = 0x16E8F8u;
    // 0x16e8f8: 0x24020001
    ctx->pc = 0x16e8f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e8fc: 0x50a20009
    ctx->pc = 0x16E8FCu;
    {
        const bool branch_taken_0x16e8fc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x16e8fc) {
            ctx->pc = 0x16E900u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x16E924u;
            goto label_16e924;
        }
    }
    ctx->pc = 0x16E904u;
    // 0x16e904: 0x10000008
    ctx->pc = 0x16E904u;
    {
        const bool branch_taken_0x16e904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e904) {
            ctx->pc = 0x16E928u;
            goto label_16e928;
        }
    }
    ctx->pc = 0x16E90Cu;
    // 0x16e90c: 0x0
    ctx->pc = 0x16e90cu;
    // NOP
label_16e910:
    // 0x16e910: 0x50a20004
    ctx->pc = 0x16E910u;
    {
        const bool branch_taken_0x16e910 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x16e910) {
            ctx->pc = 0x16E914u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->pc = 0x16E924u;
            goto label_16e924;
        }
    }
    ctx->pc = 0x16E918u;
    // 0x16e918: 0x3e00008
    ctx->pc = 0x16E918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E91Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E910u: goto label_16e910;
            case 0x16E920u: goto label_16e920;
            case 0x16E924u: goto label_16e924;
            case 0x16E928u: goto label_16e928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E920u;
label_16e920:
    // 0x16e920: 0x8c82000c
    ctx->pc = 0x16e920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e924:
    // 0x16e924: 0x2c420001
    ctx->pc = 0x16e924u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_16e928:
    // 0x16e928: 0x3e00008
    ctx->pc = 0x16E928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E910u: goto label_16e910;
            case 0x16E920u: goto label_16e920;
            case 0x16E924u: goto label_16e924;
            case 0x16E928u: goto label_16e928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E930u;
}
