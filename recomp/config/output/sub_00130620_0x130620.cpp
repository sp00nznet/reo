#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130620
// Address: 0x130620 - 0x130658
void sub_00130620_0x130620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130620u;

    // 0x130620: 0x8c820010
    ctx->pc = 0x130620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x130624: 0xac800030
    ctx->pc = 0x130624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x130628: 0x14400003
    ctx->pc = 0x130628u;
    {
        const bool branch_taken_0x130628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13062Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x130628) {
            ctx->pc = 0x130638u;
            goto label_130638;
        }
    }
    ctx->pc = 0x130630u;
    // 0x130630: 0x10000002
    ctx->pc = 0x130630u;
    {
        const bool branch_taken_0x130630 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130634u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x130630) {
            ctx->pc = 0x13063Cu;
            goto label_13063c;
        }
    }
    ctx->pc = 0x130638u;
label_130638:
    // 0x130638: 0x24020002
    ctx->pc = 0x130638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_13063c:
    // 0x13063c: 0xa0820001
    ctx->pc = 0x13063cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x130640: 0x24020001
    ctx->pc = 0x130640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130644: 0xa0800002
    ctx->pc = 0x130644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130648: 0xac800020
    ctx->pc = 0x130648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x13064c: 0xac800024
    ctx->pc = 0x13064cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x130650: 0x3e00008
    ctx->pc = 0x130650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130654u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130638u: goto label_130638;
            case 0x13063Cu: goto label_13063c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130658u;
}
