#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013DF20
// Address: 0x13df20 - 0x13df98
void sub_0013DF20_0x13df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13df20u;

    // 0x13df20: 0x3c080022
    ctx->pc = 0x13df20u;
    SET_GPR_U32(ctx, 8, ((uint32_t)34 << 16));
    // 0x13df24: 0x302d
    ctx->pc = 0x13df24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df28: 0x8d051438
    ctx->pc = 0x13df28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 8), 5176)));
    // 0x13df2c: 0x18a00011
    ctx->pc = 0x13DF2Cu;
    {
        const bool branch_taken_0x13df2c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13DF30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13df2c) {
            ctx->pc = 0x13DF74u;
            goto label_13df74;
        }
    }
    ctx->pc = 0x13DF34u;
    // 0x13df34: 0x3c020022
    ctx->pc = 0x13df34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13df38: 0x24441480
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 5248));
    // 0x13df3c: 0x80830000
    ctx->pc = 0x13df3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13df40: 0x1060000c
    ctx->pc = 0x13DF40u;
    {
        const bool branch_taken_0x13df40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13DF44u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13df40) {
            ctx->pc = 0x13DF74u;
            goto label_13df74;
        }
    }
    ctx->pc = 0x13DF48u;
    // 0x13df48: 0xa0382d
    ctx->pc = 0x13df48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df4c: 0x80282d
    ctx->pc = 0x13df4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13df50:
    // 0x13df50: 0x24c60001
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x13df54: 0x24a50018
    ctx->pc = 0x13df54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24));
    // 0x13df58: 0xc7102a
    ctx->pc = 0x13df58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x13df5c: 0x10400005
    ctx->pc = 0x13DF5Cu;
    {
        const bool branch_taken_0x13df5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13DF60u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x13df5c) {
            ctx->pc = 0x13DF74u;
            goto label_13df74;
        }
    }
    ctx->pc = 0x13DF64u;
    // 0x13df64: 0x80a20000
    ctx->pc = 0x13df64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13df68: 0x0
    ctx->pc = 0x13df68u;
    // NOP
    // 0x13df6c: 0x1440fff8
    ctx->pc = 0x13DF6Cu;
    {
        const bool branch_taken_0x13df6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13DF70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13df6c) {
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DF74u;
label_13df74:
    // 0x13df74: 0x8d031438
    ctx->pc = 0x13df74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 5176)));
    // 0x13df78: 0x10c30004
    ctx->pc = 0x13DF78u;
    {
        const bool branch_taken_0x13df78 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x13DF7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13df78) {
            ctx->pc = 0x13DF8Cu;
            goto label_13df8c;
        }
    }
    ctx->pc = 0x13DF80u;
    // 0x13df80: 0x24030001
    ctx->pc = 0x13df80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13df84: 0x80102d
    ctx->pc = 0x13df84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df88: 0xa0830000
    ctx->pc = 0x13df88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_13df8c:
    // 0x13df8c: 0x3e00008
    ctx->pc = 0x13DF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DF50u: goto label_13df50;
            case 0x13DF74u: goto label_13df74;
            case 0x13DF8Cu: goto label_13df8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DF94u;
    // 0x13df94: 0x0
    ctx->pc = 0x13df94u;
    // NOP
}
