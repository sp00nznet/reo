#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013B0B0
// Address: 0x13b0b0 - 0x13b110
void sub_0013B0B0_0x13b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13b0b0u;

    // 0x13b0b0: 0x27bdfff0
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b0b4: 0x80282d
    ctx->pc = 0x13b0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0b8: 0xffbf0000
    ctx->pc = 0x13b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b0bc: 0x8ca40024
    ctx->pc = 0x13b0bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x13b0c0: 0x8ca2001c
    ctx->pc = 0x13b0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x13b0c4: 0xdca30008
    ctx->pc = 0x13b0c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13b0c8: 0x43ac0
    ctx->pc = 0x13b0c8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 4), 11));
    // 0x13b0cc: 0x44102d
    ctx->pc = 0x13b0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x13b0d0: 0x212f8
    ctx->pc = 0x13b0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x13b0d4: 0x43202f
    ctx->pc = 0x13b0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x13b0d8: 0x62182b
    ctx->pc = 0x13b0d8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b0dc: 0x4103c
    ctx->pc = 0x13b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13b0e0: 0x2103f
    ctx->pc = 0x13b0e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13b0e4: 0x10600008
    ctx->pc = 0x13B0E4u;
    {
        const bool branch_taken_0x13b0e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13B0E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13b0e4) {
            ctx->pc = 0x13B108u;
            goto label_13b108;
        }
    }
    ctx->pc = 0x13B0ECu;
    // 0x13b0ec: 0x8ca40020
    ctx->pc = 0x13b0ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13b0f0: 0x282d
    ctx->pc = 0x13b0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0f4: 0x40302d
    ctx->pc = 0x13b0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0f8: 0x872021
    ctx->pc = 0x13b0f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13b0fc: 0x822023
    ctx->pc = 0x13b0fcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13b100: 0x8041f1a
    ctx->pc = 0x13B100u;
    ctx->pc = 0x13B104u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x13B108u;
label_13b108:
    // 0x13b108: 0x3e00008
    ctx->pc = 0x13B108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B10Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B108u: goto label_13b108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B110u;
}
