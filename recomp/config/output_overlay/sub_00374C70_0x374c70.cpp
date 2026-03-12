#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00374C70
// Address: 0x374c70 - 0x374cc0
void sub_00374C70_0x374c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x374c70u;

    // 0x374c70: 0x308300ff
    ctx->pc = 0x374c70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x374c74: 0x240200ff
    ctx->pc = 0x374c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x374c78: 0x14620002
    ctx->pc = 0x374C78u;
    {
        const bool branch_taken_0x374c78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x374C7Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x374c78) {
            ctx->pc = 0x374C84u;
            goto label_374c84;
        }
    }
    ctx->pc = 0x374C80u;
    // 0x374c80: 0x9024aed8
    ctx->pc = 0x374c80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946520)));
label_374c84:
    // 0x374c84: 0x308300ff
    ctx->pc = 0x374c84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x374c88: 0x28620008
    ctx->pc = 0x374c88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x374c8c: 0x14400003
    ctx->pc = 0x374C8Cu;
    {
        const bool branch_taken_0x374c8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x374C90u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x374c8c) {
            ctx->pc = 0x374C9Cu;
            goto label_374c9c;
        }
    }
    ctx->pc = 0x374C94u;
    // 0x374c94: 0x10000007
    ctx->pc = 0x374C94u;
    {
        const bool branch_taken_0x374c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x374C98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x374c94) {
            ctx->pc = 0x374CB4u;
            goto label_374cb4;
        }
    }
    ctx->pc = 0x374C9Cu;
label_374c9c:
    // 0x374c9c: 0x31340
    ctx->pc = 0x374c9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 13));
    // 0x374ca0: 0x8c24440c
    ctx->pc = 0x374ca0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x374ca4: 0x3c03002b
    ctx->pc = 0x374ca4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x374ca8: 0x3463f000
    ctx->pc = 0x374ca8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61440));
    // 0x374cac: 0x831821
    ctx->pc = 0x374cacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x374cb0: 0x621021
    ctx->pc = 0x374cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_374cb4:
    // 0x374cb4: 0x3e00008
    ctx->pc = 0x374CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x374C84u: goto label_374c84;
            case 0x374C9Cu: goto label_374c9c;
            case 0x374CB4u: goto label_374cb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x374CBCu;
    // 0x374cbc: 0x0
    ctx->pc = 0x374cbcu;
    // NOP
}
