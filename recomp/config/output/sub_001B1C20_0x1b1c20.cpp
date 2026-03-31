#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B1C20
// Address: 0x1b1c20 - 0x1b1cb0
void sub_001B1C20_0x1b1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b1c20u;

    // 0x1b1c20: 0x27bdffd0
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1c24: 0x30a200ff
    ctx->pc = 0x1b1c24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
    // 0x1b1c28: 0xffbf0020
    ctx->pc = 0x1b1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1c2c: 0x3c030023
    ctx->pc = 0x1b1c2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1b1c30: 0x7fb10010
    ctx->pc = 0x1b1c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1c34: 0x24634410
    ctx->pc = 0x1b1c34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17424));
    // 0x1b1c38: 0x7fb00000
    ctx->pc = 0x1b1c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1c3c: 0x80882d
    ctx->pc = 0x1b1c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c40: 0x280c0
    ctx->pc = 0x1b1c40u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b1c44: 0x282d
    ctx->pc = 0x1b1c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c48: 0x3c020023
    ctx->pc = 0x1b1c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b1c4c: 0x701821
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b1c50: 0x24424412
    ctx->pc = 0x1b1c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17426));
    // 0x1b1c54: 0x94630000
    ctx->pc = 0x1b1c54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1c58: 0x501021
    ctx->pc = 0x1b1c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1c5c: 0x94420000
    ctx->pc = 0x1b1c5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1c60: 0x31840
    ctx->pc = 0x1b1c60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b1c64: 0x831821
    ctx->pc = 0x1b1c64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b1c68: 0x23040
    ctx->pc = 0x1b1c68u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b1c6c: 0xc041f1a
    ctx->pc = 0x1B1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C74u);
    ctx->pc = 0x1B1C70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4004));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C74u; }
    }
    if (ctx->pc != 0x1B1C74u) { return; }
    ctx->pc = 0x1B1C74u;
    // 0x1b1c74: 0x3c020023
    ctx->pc = 0x1b1c74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b1c78: 0x24424414
    ctx->pc = 0x1b1c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17428));
    // 0x1b1c7c: 0x501821
    ctx->pc = 0x1b1c7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1c80: 0x3c020023
    ctx->pc = 0x1b1c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b1c84: 0x94650000
    ctx->pc = 0x1b1c84u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1c88: 0x24424416
    ctx->pc = 0x1b1c88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17430));
    // 0x1b1c8c: 0x501021
    ctx->pc = 0x1b1c8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b1c90: 0x94460000
    ctx->pc = 0x1b1c90u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1c94: 0xc06c6d0
    ctx->pc = 0x1B1C94u;
    SET_GPR_U32(ctx, 31, 0x1B1C9Cu);
    ctx->pc = 0x1B1C98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x1B1B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1B40_0x1b1b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C9Cu; }
    }
    if (ctx->pc != 0x1B1C9Cu) { return; }
    ctx->pc = 0x1B1C9Cu;
    // 0x1b1c9c: 0xdfbf0020
    ctx->pc = 0x1b1c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1ca0: 0x7bb10010
    ctx->pc = 0x1b1ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1ca4: 0x7bb00000
    ctx->pc = 0x1b1ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1ca8: 0x3e00008
    ctx->pc = 0x1B1CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1CACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1CB0u;
}
