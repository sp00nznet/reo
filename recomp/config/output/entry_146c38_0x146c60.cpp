#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_146c38
// Address: 0x146c38 - 0x146c60
void entry_146c38_0x146c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x146c38u;

    // 0x146c38: 0x8c820008
    ctx->pc = 0x146c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x146c3c: 0x24030002
    ctx->pc = 0x146c3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x146c40: 0x10430005
    ctx->pc = 0x146C40u;
    {
        const bool branch_taken_0x146c40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x146C44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146c40) {
            ctx->pc = 0x146C58u;
            goto label_146c58;
        }
    }
    ctx->pc = 0x146C48u;
    // 0x146c48: 0x8c820130
    ctx->pc = 0x146c48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x146c4c: 0xac830008
    ctx->pc = 0x146c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x146c50: 0xac8200c4
    ctx->pc = 0x146c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 2));
    // 0x146c54: 0x24020001
    ctx->pc = 0x146c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_146c58:
    // 0x146c58: 0x3e00008
    ctx->pc = 0x146C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146C5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 2104), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146C58u: goto label_146c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146C60u;
}
