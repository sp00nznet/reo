#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A15B0
// Address: 0x1a15b0 - 0x1a1600
void sub_001A15B0_0x1a15b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a15b0u;

    // 0x1a15b0: 0x8c82000c
    ctx->pc = 0x1a15b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a15b4: 0x10400009
    ctx->pc = 0x1A15B4u;
    {
        const bool branch_taken_0x1a15b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a15b4) {
            ctx->pc = 0x1A15DCu;
            goto label_1a15dc;
        }
    }
    ctx->pc = 0x1A15BCu;
    // 0x1a15bc: 0x8c860014
    ctx->pc = 0x1a15bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a15c0: 0x8c850004
    ctx->pc = 0x1a15c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a15c4: 0x8c830010
    ctx->pc = 0x1a15c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a15c8: 0x8c820020
    ctx->pc = 0x1a15c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a15cc: 0xc52021
    ctx->pc = 0x1a15ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a15d0: 0x831823
    ctx->pc = 0x1a15d0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a15d4: 0x10000008
    ctx->pc = 0x1A15D4u;
    {
        const bool branch_taken_0x1a15d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A15D8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a15d4) {
            ctx->pc = 0x1A15F8u;
            goto label_1a15f8;
        }
    }
    ctx->pc = 0x1A15DCu;
label_1a15dc:
    // 0x1a15dc: 0x8c860014
    ctx->pc = 0x1a15dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a15e0: 0x8c850004
    ctx->pc = 0x1a15e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a15e4: 0x8c830010
    ctx->pc = 0x1a15e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a15e8: 0x8c820020
    ctx->pc = 0x1a15e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a15ec: 0xc52023
    ctx->pc = 0x1a15ecu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a15f0: 0x641823
    ctx->pc = 0x1a15f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a15f4: 0x621023
    ctx->pc = 0x1a15f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a15f8:
    // 0x1a15f8: 0x3e00008
    ctx->pc = 0x1A15F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A15DCu: goto label_1a15dc;
            case 0x1A15F8u: goto label_1a15f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1600u;
}
