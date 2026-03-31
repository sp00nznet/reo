#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A8B20
// Address: 0x1a8b20 - 0x1a8c60
void sub_001A8B20_0x1a8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a8b20u;

    // 0x1a8b20: 0x27bdffd0
    ctx->pc = 0x1a8b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8b24: 0xffbf0020
    ctx->pc = 0x1a8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a8b28: 0x7fb10010
    ctx->pc = 0x1a8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8b2c: 0x80882d
    ctx->pc = 0x1a8b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b30: 0x7fb00000
    ctx->pc = 0x1a8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a8b34: 0x3c040024
    ctx->pc = 0x1a8b34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1a8b38: 0xa0802d
    ctx->pc = 0x1a8b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b3c: 0xc0423b4
    ctx->pc = 0x1A8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B44u);
    ctx->pc = 0x1A8B40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9616));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B44u; }
    }
    if (ctx->pc != 0x1A8B44u) { return; }
    ctx->pc = 0x1A8B44u;
    // 0x1a8b44: 0x3c04002b
    ctx->pc = 0x1a8b44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8b48: 0x282d
    ctx->pc = 0x1a8b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b4c: 0x24841000
    ctx->pc = 0x1a8b4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4096));
    // 0x1a8b50: 0xc041f1a
    ctx->pc = 0x1A8B50u;
    SET_GPR_U32(ctx, 31, 0x1A8B58u);
    ctx->pc = 0x1A8B54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B58u; }
    }
    if (ctx->pc != 0x1A8B58u) { return; }
    ctx->pc = 0x1A8B58u;
    // 0x1a8b58: 0x3c04002b
    ctx->pc = 0x1a8b58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8b5c: 0x3c01002b
    ctx->pc = 0x1a8b5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8b60: 0x24841000
    ctx->pc = 0x1a8b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4096));
    // 0x1a8b64: 0xc04c4ce
    ctx->pc = 0x1A8B64u;
    SET_GPR_U32(ctx, 31, 0x1A8B6Cu);
    ctx->pc = 0x1A8B68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4096), GPR_U32(ctx, 17));
    ctx->pc = 0x131338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131338_0x131338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B6Cu; }
    }
    if (ctx->pc != 0x1A8B6Cu) { return; }
    ctx->pc = 0x1A8B6Cu;
    // 0x1a8b6c: 0x1220000f
    ctx->pc = 0x1A8B6Cu;
    {
        const bool branch_taken_0x1a8b6c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8b6c) {
            ctx->pc = 0x1A8BACu;
            goto label_1a8bac;
        }
    }
    ctx->pc = 0x1A8B74u;
    // 0x1a8b74: 0x3c04002b
    ctx->pc = 0x1a8b74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8b78: 0x3c01002b
    ctx->pc = 0x1a8b78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8b7c: 0x24841060
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4192));
    // 0x1a8b80: 0x220282d
    ctx->pc = 0x1a8b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b84: 0xc042bf0
    ctx->pc = 0x1A8B84u;
    SET_GPR_U32(ctx, 31, 0x1A8B8Cu);
    ctx->pc = 0x1A8B88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3784), GPR_U32(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B8Cu; }
    }
    if (ctx->pc != 0x1A8B8Cu) { return; }
    ctx->pc = 0x1A8B8Cu;
    // 0x1a8b8c: 0x3c04002b
    ctx->pc = 0x1a8b8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8b90: 0x220282d
    ctx->pc = 0x1a8b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b94: 0xc042bf0
    ctx->pc = 0x1A8B94u;
    SET_GPR_U32(ctx, 31, 0x1A8B9Cu);
    ctx->pc = 0x1A8B98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3792));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B9Cu; }
    }
    if (ctx->pc != 0x1A8B9Cu) { return; }
    ctx->pc = 0x1A8B9Cu;
    // 0x1a8b9c: 0x3c04002b
    ctx->pc = 0x1a8b9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8ba0: 0x200282d
    ctx->pc = 0x1a8ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ba4: 0xc042bf0
    ctx->pc = 0x1A8BA4u;
    SET_GPR_U32(ctx, 31, 0x1A8BACu);
    ctx->pc = 0x1A8BA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4064));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BACu; }
    }
    if (ctx->pc != 0x1A8BACu) { return; }
    ctx->pc = 0x1A8BACu;
label_1a8bac:
    // 0x1a8bac: 0x3c01002b
    ctx->pc = 0x1a8bacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8bb0: 0x80231160
    ctx->pc = 0x1a8bb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4448)));
    // 0x1a8bb4: 0x10600022
    ctx->pc = 0x1A8BB4u;
    {
        const bool branch_taken_0x1a8bb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8BB8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x1a8bb4) {
            ctx->pc = 0x1A8C40u;
            goto label_1a8c40;
        }
    }
    ctx->pc = 0x1A8BBCu;
    // 0x1a8bbc: 0xc0423b4
    ctx->pc = 0x1A8BBCu;
    SET_GPR_U32(ctx, 31, 0x1A8BC4u);
    ctx->pc = 0x1A8BC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9664));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BC4u; }
    }
    if (ctx->pc != 0x1A8BC4u) { return; }
    ctx->pc = 0x1A8BC4u;
    // 0x1a8bc4: 0x3c04002b
    ctx->pc = 0x1a8bc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8bc8: 0x282d
    ctx->pc = 0x1a8bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8bcc: 0x24841020
    ctx->pc = 0x1a8bccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4128));
    // 0x1a8bd0: 0xc041f1a
    ctx->pc = 0x1A8BD0u;
    SET_GPR_U32(ctx, 31, 0x1A8BD8u);
    ctx->pc = 0x1A8BD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BD8u; }
    }
    if (ctx->pc != 0x1A8BD8u) { return; }
    ctx->pc = 0x1A8BD8u;
    // 0x1a8bd8: 0x3c02002b
    ctx->pc = 0x1a8bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x1a8bdc: 0x3c04002b
    ctx->pc = 0x1a8bdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8be0: 0x24421160
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4448));
    // 0x1a8be4: 0x3c01002b
    ctx->pc = 0x1a8be4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8be8: 0x24841020
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4128));
    // 0x1a8bec: 0xc04c422
    ctx->pc = 0x1A8BECu;
    SET_GPR_U32(ctx, 31, 0x1A8BF4u);
    ctx->pc = 0x1A8BF0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4128), GPR_U32(ctx, 2));
    ctx->pc = 0x131088u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131088_0x131088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BF4u; }
    }
    if (ctx->pc != 0x1A8BF4u) { return; }
    ctx->pc = 0x1A8BF4u;
    // 0x1a8bf4: 0x16200012
    ctx->pc = 0x1A8BF4u;
    {
        const bool branch_taken_0x1a8bf4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A8BF8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
        if (branch_taken_0x1a8bf4) {
            ctx->pc = 0x1A8C40u;
            goto label_1a8c40;
        }
    }
    ctx->pc = 0x1A8BFCu;
    // 0x1a8bfc: 0x3c050024
    ctx->pc = 0x1a8bfcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1a8c00: 0x24020001
    ctx->pc = 0x1a8c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8c04: 0x3c01002b
    ctx->pc = 0x1a8c04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a8c08: 0x24840fe0
    ctx->pc = 0x1a8c08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4064));
    // 0x1a8c0c: 0xac220ec8
    ctx->pc = 0x1a8c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3784), GPR_U32(ctx, 2));
    // 0x1a8c10: 0xc042bf0
    ctx->pc = 0x1A8C10u;
    SET_GPR_U32(ctx, 31, 0x1A8C18u);
    ctx->pc = 0x1A8C14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9688));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C18u; }
    }
    if (ctx->pc != 0x1A8C18u) { return; }
    ctx->pc = 0x1A8C18u;
    // 0x1a8c18: 0x3c04002b
    ctx->pc = 0x1a8c18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8c1c: 0x3c050024
    ctx->pc = 0x1a8c1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1a8c20: 0x24840fd0
    ctx->pc = 0x1a8c20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4048));
    // 0x1a8c24: 0xc042bf0
    ctx->pc = 0x1A8C24u;
    SET_GPR_U32(ctx, 31, 0x1A8C2Cu);
    ctx->pc = 0x1A8C28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9688));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C2Cu; }
    }
    if (ctx->pc != 0x1A8C2Cu) { return; }
    ctx->pc = 0x1A8C2Cu;
    // 0x1a8c2c: 0x3c04002b
    ctx->pc = 0x1a8c2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)43 << 16));
    // 0x1a8c30: 0x3c05002b
    ctx->pc = 0x1a8c30u;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x1a8c34: 0x24840ed0
    ctx->pc = 0x1a8c34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3792));
    // 0x1a8c38: 0xc042bf0
    ctx->pc = 0x1A8C38u;
    SET_GPR_U32(ctx, 31, 0x1A8C40u);
    ctx->pc = 0x1A8C3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4448));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C40u; }
    }
    if (ctx->pc != 0x1A8C40u) { return; }
    ctx->pc = 0x1A8C40u;
label_1a8c40:
    // 0x1a8c40: 0xdfbf0020
    ctx->pc = 0x1a8c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8c44: 0x7bb10010
    ctx->pc = 0x1a8c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8c48: 0x7bb00000
    ctx->pc = 0x1a8c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8c4c: 0x3e00008
    ctx->pc = 0x1A8C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8C50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8BACu: goto label_1a8bac;
            case 0x1A8C40u: goto label_1a8c40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8C54u;
    // 0x1a8c54: 0x0
    ctx->pc = 0x1a8c54u;
    // NOP
    // 0x1a8c58: 0x0
    ctx->pc = 0x1a8c58u;
    // NOP
    // 0x1a8c5c: 0x0
    ctx->pc = 0x1a8c5cu;
    // NOP
}
