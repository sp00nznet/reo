#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019E9F0
// Address: 0x19e9f0 - 0x19ea60
void sub_0019E9F0_0x19e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19e9f0u;

    // 0x19e9f0: 0x61a00
    ctx->pc = 0x19e9f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 8));
    // 0x19e9f4: 0x3c090023
    ctx->pc = 0x19e9f4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x19e9f8: 0x2467ffe0
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x19e9fc: 0x25290fa0
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4000));
    // 0x19ea00: 0x502d
    ctx->pc = 0x19ea00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ea04:
    // 0x19ea04: 0x8d280000
    ctx->pc = 0x19ea04u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19ea08: 0x602d
    ctx->pc = 0x19ea08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea0c: 0x25290004
    ctx->pc = 0x19ea0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
label_19ea10:
    // 0x19ea10: 0x582d
    ctx->pc = 0x19ea10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ea14:
    // 0x19ea14: 0x8d060000
    ctx->pc = 0x19ea14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19ea18: 0x256b0001
    ctx->pc = 0x19ea18u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
    // 0x19ea1c: 0x29630020
    ctx->pc = 0x19ea1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 11), 32));
    // 0x19ea20: 0x863021
    ctx->pc = 0x19ea20u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19ea24: 0x25080004
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x19ea28: 0x90c60000
    ctx->pc = 0x19ea28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19ea2c: 0xa0a60000
    ctx->pc = 0x19ea2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19ea30: 0x1460fff8
    ctx->pc = 0x19EA30u;
    {
        const bool branch_taken_0x19ea30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19EA34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x19ea30) {
            ctx->pc = 0x19EA14u;
            goto label_19ea14;
        }
    }
    ctx->pc = 0x19EA38u;
    // 0x19ea38: 0x258c0001
    ctx->pc = 0x19ea38u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
    // 0x19ea3c: 0x29830002
    ctx->pc = 0x19ea3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 12), 2));
    // 0x19ea40: 0x1460fff3
    ctx->pc = 0x19EA40u;
    {
        const bool branch_taken_0x19ea40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19EA44u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        if (branch_taken_0x19ea40) {
            ctx->pc = 0x19EA10u;
            goto label_19ea10;
        }
    }
    ctx->pc = 0x19EA48u;
    // 0x19ea48: 0x254a0001
    ctx->pc = 0x19ea48u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x19ea4c: 0x29430004
    ctx->pc = 0x19ea4cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), 4));
    // 0x19ea50: 0x1460ffec
    ctx->pc = 0x19EA50u;
    {
        const bool branch_taken_0x19ea50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19EA54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 512));
        if (branch_taken_0x19ea50) {
            ctx->pc = 0x19EA04u;
            goto label_19ea04;
        }
    }
    ctx->pc = 0x19EA58u;
    // 0x19ea58: 0x3e00008
    ctx->pc = 0x19EA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EA04u: goto label_19ea04;
            case 0x19EA10u: goto label_19ea10;
            case 0x19EA14u: goto label_19ea14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EA60u;
}
