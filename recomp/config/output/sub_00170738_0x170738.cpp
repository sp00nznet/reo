#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00170738
// Address: 0x170738 - 0x170760
void sub_00170738_0x170738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x170738u;

    // 0x170738: 0x10800007
    ctx->pc = 0x170738u;
    {
        const bool branch_taken_0x170738 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17073Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x170738) {
            ctx->pc = 0x170758u;
            goto label_170758;
        }
    }
    ctx->pc = 0x170740u;
    // 0x170740: 0x8c830000
    ctx->pc = 0x170740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170744: 0x54620004
    ctx->pc = 0x170744u;
    {
        const bool branch_taken_0x170744 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x170744) {
            ctx->pc = 0x170748u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x170758u;
            goto label_170758;
        }
    }
    ctx->pc = 0x17074Cu;
    // 0x17074c: 0x24020002
    ctx->pc = 0x17074cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x170750: 0x3e00008
    ctx->pc = 0x170750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170754u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170758u: goto label_170758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170758u;
label_170758:
    // 0x170758: 0x3e00008
    ctx->pc = 0x170758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170758u: goto label_170758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170760u;
}
