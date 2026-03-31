#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F4B20
// Address: 0x1f4b20 - 0x1f4b90
void sub_001F4B20_0x1f4b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f4b20u;

    // 0x1f4b20: 0x27bdffc0
    ctx->pc = 0x1f4b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4b24: 0xffbf0020
    ctx->pc = 0x1f4b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f4b28: 0x7fb10010
    ctx->pc = 0x1f4b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4b2c: 0x7fb00000
    ctx->pc = 0x1f4b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4b30: 0x8c830020
    ctx->pc = 0x1f4b30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f4b34: 0x8c82002c
    ctx->pc = 0x1f4b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1f4b38: 0x628021
    ctx->pc = 0x1f4b38u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4b3c: 0xa3a5003f
    ctx->pc = 0x1f4b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f4b40: 0x8c83002c
    ctx->pc = 0x1f4b40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1f4b44: 0x8c820014
    ctx->pc = 0x1f4b44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f4b48: 0x24630001
    ctx->pc = 0x1f4b48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f4b4c: 0x43082b
    ctx->pc = 0x1f4b4cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4b50: 0x14200008
    ctx->pc = 0x1F4B50u;
    {
        const bool branch_taken_0x1f4b50 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4B54u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b50) {
            ctx->pc = 0x1F4B74u;
            goto label_1f4b74;
        }
    }
    ctx->pc = 0x1F4B58u;
    // 0x1f4b58: 0x200202d
    ctx->pc = 0x1f4b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b5c: 0x27a5003f
    ctx->pc = 0x1f4b5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 63));
    // 0x1f4b60: 0xc041eac
    ctx->pc = 0x1F4B60u;
    SET_GPR_U32(ctx, 31, 0x1F4B68u);
    ctx->pc = 0x1F4B64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B68u; }
    }
    if (ctx->pc != 0x1F4B68u) { return; }
    ctx->pc = 0x1F4B68u;
    // 0x1f4b68: 0x8e22002c
    ctx->pc = 0x1f4b68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1f4b6c: 0x24420001
    ctx->pc = 0x1f4b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4b70: 0xae22002c
    ctx->pc = 0x1f4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_1f4b74:
    // 0x1f4b74: 0x200102d
    ctx->pc = 0x1f4b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b78: 0xdfbf0020
    ctx->pc = 0x1f4b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4b7c: 0x7bb10010
    ctx->pc = 0x1f4b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b80: 0x7bb00000
    ctx->pc = 0x1f4b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b84: 0x3e00008
    ctx->pc = 0x1F4B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4B74u: goto label_1f4b74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4B8Cu;
    // 0x1f4b8c: 0x0
    ctx->pc = 0x1f4b8cu;
    // NOP
}
