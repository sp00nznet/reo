#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170710
// Address: 0x170710 - 0x170738
void sub_00170710_0x170710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170710u;

    // 0x170710: 0x10800007
    ctx->pc = 0x170710u;
    {
        const bool branch_taken_0x170710 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x170714u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x170710) {
            ctx->pc = 0x170730u;
            goto label_170730;
        }
    }
    ctx->pc = 0x170718u;
    // 0x170718: 0x8c830000
    ctx->pc = 0x170718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17071c: 0x54620004
    ctx->pc = 0x17071Cu;
    {
        const bool branch_taken_0x17071c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17071c) {
            ctx->pc = 0x170720u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x170730u;
            goto label_170730;
        }
    }
    ctx->pc = 0x170724u;
    // 0x170724: 0x24020003
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x170728: 0x3e00008
    ctx->pc = 0x170728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17072Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170730u: goto label_170730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170730u;
label_170730:
    // 0x170730: 0x3e00008
    ctx->pc = 0x170730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170730u: goto label_170730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170738u;
}
