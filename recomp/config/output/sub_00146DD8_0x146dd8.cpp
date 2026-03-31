#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00146DD8
// Address: 0x146dd8 - 0x146ee8
void sub_00146DD8_0x146dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x146dd8u;

    // 0x146dd8: 0x27bdffd0
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146ddc: 0xffb10010
    ctx->pc = 0x146ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x146de0: 0xffb00000
    ctx->pc = 0x146de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146de4: 0xa0882d
    ctx->pc = 0x146de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146de8: 0xffbf0020
    ctx->pc = 0x146de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x146dec: 0x80802d
    ctx->pc = 0x146decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146df0: 0x8e070870
    ctx->pc = 0x146df0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x146df4: 0x24e80020
    ctx->pc = 0x146df4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 32));
    // 0x146df8: 0x24e60010
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 16));
    // 0x146dfc: 0xc051b18
    ctx->pc = 0x146DFCu;
    SET_GPR_U32(ctx, 31, 0x146E04u);
    ctx->pc = 0x146E00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24));
    ctx->pc = 0x146C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146C60_0x146c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146E04u; }
    }
    if (ctx->pc != 0x146E04u) { return; }
    ctx->pc = 0x146E04u;
    // 0x146e04: 0x8e070870
    ctx->pc = 0x146e04u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x146e08: 0x3c060023
    ctx->pc = 0x146e08u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x146e0c: 0x24c6a720
    ctx->pc = 0x146e0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944544));
    // 0x146e10: 0x200202d
    ctx->pc = 0x146e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e14: 0xdce20020
    ctx->pc = 0x146e14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x146e18: 0x220282d
    ctx->pc = 0x146e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e1c: 0x8ce30010
    ctx->pc = 0x146e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x146e20: 0x216f8
    ctx->pc = 0x146e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x146e24: 0x2103f
    ctx->pc = 0x146e24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x146e28: 0xae030098
    ctx->pc = 0x146e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x146e2c: 0x3042000f
    ctx->pc = 0x146e2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x146e30: 0x21080
    ctx->pc = 0x146e30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x146e34: 0x8e23005c
    ctx->pc = 0x146e34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x146e38: 0x461021
    ctx->pc = 0x146e38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x146e3c: 0x9c460000
    ctx->pc = 0x146e3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146e40: 0xae0300e4
    ctx->pc = 0x146e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x146e44: 0xfe0600a0
    ctx->pc = 0x146e44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 6));
    // 0x146e48: 0x8e220060
    ctx->pc = 0x146e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x146e4c: 0xae0200e8
    ctx->pc = 0x146e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x146e50: 0x8e230044
    ctx->pc = 0x146e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x146e54: 0xae0300cc
    ctx->pc = 0x146e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x146e58: 0x8e220048
    ctx->pc = 0x146e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x146e5c: 0xae0200d0
    ctx->pc = 0x146e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x146e60: 0x8e23004c
    ctx->pc = 0x146e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x146e64: 0xae0300d4
    ctx->pc = 0x146e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x146e68: 0x8e220050
    ctx->pc = 0x146e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x146e6c: 0xae0200d8
    ctx->pc = 0x146e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x146e70: 0x8e230054
    ctx->pc = 0x146e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x146e74: 0xae0300dc
    ctx->pc = 0x146e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x146e78: 0x8e220058
    ctx->pc = 0x146e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x146e7c: 0xc051a42
    ctx->pc = 0x146E7Cu;
    SET_GPR_U32(ctx, 31, 0x146E84u);
    ctx->pc = 0x146E80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->pc = 0x146908u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00146908_0x146908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146E84u; }
    }
    if (ctx->pc != 0x146E84u) { return; }
    ctx->pc = 0x146E84u;
    // 0x146e84: 0x10400013
    ctx->pc = 0x146E84u;
    {
        const bool branch_taken_0x146e84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146E88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x146e84) {
            ctx->pc = 0x146ED4u;
            goto label_146ed4;
        }
    }
    ctx->pc = 0x146E8Cu;
    // 0x146e8c: 0x8e230028
    ctx->pc = 0x146e8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x146e90: 0x14620011
    ctx->pc = 0x146E90u;
    {
        const bool branch_taken_0x146e90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x146E94u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x146e90) {
            ctx->pc = 0x146ED8u;
            goto label_146ed8;
        }
    }
    ctx->pc = 0x146E98u;
    // 0x146e98: 0x8e0200c8
    ctx->pc = 0x146e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x146e9c: 0x10400005
    ctx->pc = 0x146E9Cu;
    {
        const bool branch_taken_0x146e9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x146EA0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146e9c) {
            ctx->pc = 0x146EB4u;
            goto label_146eb4;
        }
    }
    ctx->pc = 0x146EA4u;
    // 0x146ea4: 0xc051de8
    ctx->pc = 0x146EA4u;
    SET_GPR_U32(ctx, 31, 0x146EACu);
    ctx->pc = 0x146EA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1477A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001477A0_0x1477a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146EACu; }
    }
    if (ctx->pc != 0x146EACu) { return; }
    ctx->pc = 0x146EACu;
    // 0x146eac: 0x10000004
    ctx->pc = 0x146EACu;
    {
        const bool branch_taken_0x146eac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x146EB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x146eac) {
            ctx->pc = 0x146EC0u;
            goto label_146ec0;
        }
    }
    ctx->pc = 0x146EB4u;
label_146eb4:
    // 0x146eb4: 0xc051a6a
    ctx->pc = 0x146EB4u;
    SET_GPR_U32(ctx, 31, 0x146EBCu);
    ctx->pc = 0x146EB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1469A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001469A8_0x1469a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146EBCu; }
    }
    if (ctx->pc != 0x146EBCu) { return; }
    ctx->pc = 0x146EBCu;
    // 0x146ebc: 0x200202d
    ctx->pc = 0x146ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146ec0:
    // 0x146ec0: 0xdfbf0020
    ctx->pc = 0x146ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146ec4: 0xdfb10010
    ctx->pc = 0x146ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146ec8: 0xdfb00000
    ctx->pc = 0x146ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146ecc: 0x8051b0e
    ctx->pc = 0x146ECCu;
    ctx->pc = 0x146ED0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x146C38u;
    entry_146c38_0x146c60(rdram, ctx, runtime); return;
    ctx->pc = 0x146ED4u;
label_146ed4:
    // 0x146ed4: 0xdfbf0020
    ctx->pc = 0x146ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_146ed8:
    // 0x146ed8: 0xdfb10010
    ctx->pc = 0x146ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146edc: 0xdfb00000
    ctx->pc = 0x146edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146ee0: 0x3e00008
    ctx->pc = 0x146EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146EE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146EB4u: goto label_146eb4;
            case 0x146EC0u: goto label_146ec0;
            case 0x146ED4u: goto label_146ed4;
            case 0x146ED8u: goto label_146ed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146EE8u;
}
