#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C3C40
// Address: 0x1c3c40 - 0x1c3c90
void sub_001C3C40_0x1c3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c3c40u;

    // 0x1c3c40: 0x8c830020
    ctx->pc = 0x1c3c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1c3c44: 0x24020003
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3c48: 0x10620003
    ctx->pc = 0x1C3C48u;
    {
        const bool branch_taken_0x1c3c48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C3C4Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
        if (branch_taken_0x1c3c48) {
            ctx->pc = 0x1C3C58u;
            goto label_1c3c58;
        }
    }
    ctx->pc = 0x1C3C50u;
    // 0x1c3c50: 0x10000007
    ctx->pc = 0x1C3C50u;
    {
        const bool branch_taken_0x1c3c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3C54u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
        if (branch_taken_0x1c3c50) {
            ctx->pc = 0x1C3C70u;
            goto label_1c3c70;
        }
    }
    ctx->pc = 0x1C3C58u;
label_1c3c58:
    // 0x1c3c58: 0x8c22ae90
    ctx->pc = 0x1c3c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294946448)));
    // 0x1c3c5c: 0x30420020
    ctx->pc = 0x1c3c5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x1c3c60: 0x10400009
    ctx->pc = 0x1C3C60u;
    {
        const bool branch_taken_0x1c3c60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3C64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c60) {
            ctx->pc = 0x1C3C88u;
            goto label_1c3c88;
        }
    }
    ctx->pc = 0x1C3C68u;
    // 0x1c3c68: 0x10000007
    ctx->pc = 0x1C3C68u;
    {
        const bool branch_taken_0x1c3c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3C6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c3c68) {
            ctx->pc = 0x1C3C88u;
            goto label_1c3c88;
        }
    }
    ctx->pc = 0x1C3C70u;
label_1c3c70:
    // 0x1c3c70: 0x30420010
    ctx->pc = 0x1c3c70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x1c3c74: 0x10400003
    ctx->pc = 0x1C3C74u;
    {
        const bool branch_taken_0x1c3c74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3c74) {
            ctx->pc = 0x1C3C84u;
            goto label_1c3c84;
        }
    }
    ctx->pc = 0x1C3C7Cu;
    // 0x1c3c7c: 0x10000002
    ctx->pc = 0x1C3C7Cu;
    {
        const bool branch_taken_0x1c3c7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3C80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c3c7c) {
            ctx->pc = 0x1C3C88u;
            goto label_1c3c88;
        }
    }
    ctx->pc = 0x1C3C84u;
label_1c3c84:
    // 0x1c3c84: 0x102d
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3c88:
    // 0x1c3c88: 0x3e00008
    ctx->pc = 0x1C3C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3C58u: goto label_1c3c58;
            case 0x1C3C70u: goto label_1c3c70;
            case 0x1C3C84u: goto label_1c3c84;
            case 0x1C3C88u: goto label_1c3c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3C90u;
}
