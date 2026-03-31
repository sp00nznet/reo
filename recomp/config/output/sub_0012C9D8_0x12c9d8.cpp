#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C9D8
// Address: 0x12c9d8 - 0x12cb58
void sub_0012C9D8_0x12c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c9d8u;

    // 0x12c9d8: 0x27bdffc0
    ctx->pc = 0x12c9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12c9dc: 0x3c070021
    ctx->pc = 0x12c9dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x12c9e0: 0xffb30018
    ctx->pc = 0x12c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12c9e4: 0xa0982d
    ctx->pc = 0x12c9e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9e8: 0xffb40020
    ctx->pc = 0x12c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12c9ec: 0xc0a02d
    ctx->pc = 0x12c9ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9f0: 0xffb50028
    ctx->pc = 0x12c9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12c9f4: 0x80a82d
    ctx->pc = 0x12c9f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9f8: 0xffb00000
    ctx->pc = 0x12c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c9fc: 0x24e37d88
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 32136));
    // 0x12ca00: 0xffb10008
    ctx->pc = 0x12ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ca04: 0x282d
    ctx->pc = 0x12ca04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca08: 0xffb20010
    ctx->pc = 0x12ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ca0c: 0xffbf0030
    ctx->pc = 0x12ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12ca10: 0x80620000
    ctx->pc = 0x12ca10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ca14: 0x1040000b
    ctx->pc = 0x12CA14u;
    {
        const bool branch_taken_0x12ca14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA18u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x12ca14) {
            ctx->pc = 0x12CA44u;
            goto label_12ca44;
        }
    }
    ctx->pc = 0x12CA1Cu;
    // 0x12ca1c: 0x24a50001
    ctx->pc = 0x12ca1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_12ca20:
    // 0x12ca20: 0x28a20010
    ctx->pc = 0x12ca20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
    // 0x12ca24: 0x10400007
    ctx->pc = 0x12CA24u;
    {
        const bool branch_taken_0x12ca24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA28u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 156));
        if (branch_taken_0x12ca24) {
            ctx->pc = 0x12CA44u;
            goto label_12ca44;
        }
    }
    ctx->pc = 0x12CA2Cu;
    // 0x12ca2c: 0x80620000
    ctx->pc = 0x12ca2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ca30: 0x0
    ctx->pc = 0x12ca30u;
    // NOP
    // 0x12ca34: 0x0
    ctx->pc = 0x12ca34u;
    // NOP
    // 0x12ca38: 0x0
    ctx->pc = 0x12ca38u;
    // NOP
    // 0x12ca3c: 0x5440fff8
    ctx->pc = 0x12CA3Cu;
    {
        const bool branch_taken_0x12ca3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12ca3c) {
            ctx->pc = 0x12CA40u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x12CA20u;
            goto label_12ca20;
        }
    }
    ctx->pc = 0x12CA44u;
label_12ca44:
    // 0x12ca44: 0x24030010
    ctx->pc = 0x12ca44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ca48: 0x10a30039
    ctx->pc = 0x12CA48u;
    {
        const bool branch_taken_0x12ca48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x12CA4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12ca48) {
            ctx->pc = 0x12CB30u;
            goto label_12cb30;
        }
    }
    ctx->pc = 0x12CA50u;
    // 0x12ca50: 0x51080
    ctx->pc = 0x12ca50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x12ca54: 0x24e37d88
    ctx->pc = 0x12ca54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 32136));
    // 0x12ca58: 0x451021
    ctx->pc = 0x12ca58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12ca5c: 0x200202d
    ctx->pc = 0x12ca5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca60: 0x210c0
    ctx->pc = 0x12ca60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x12ca64: 0x451023
    ctx->pc = 0x12ca64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12ca68: 0x21080
    ctx->pc = 0x12ca68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x12ca6c: 0xc04ffee
    ctx->pc = 0x12CA6Cu;
    SET_GPR_U32(ctx, 31, 0x12CA74u);
    ctx->pc = 0x12CA70u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x13FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFB8_0x13ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA74u; }
    }
    if (ctx->pc != 0x12CA74u) { return; }
    ctx->pc = 0x12CA74u;
    // 0x12ca74: 0x200202d
    ctx->pc = 0x12ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca78: 0xc04fff0
    ctx->pc = 0x12CA78u;
    SET_GPR_U32(ctx, 31, 0x12CA80u);
    ctx->pc = 0x12CA7Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFC0_0x13ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA80u; }
    }
    if (ctx->pc != 0x12CA80u) { return; }
    ctx->pc = 0x12CA80u;
    // 0x12ca80: 0x200202d
    ctx->pc = 0x12ca80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca84: 0x287c2
    ctx->pc = 0x12ca84u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 2), 31));
    // 0x12ca88: 0xc04fff2
    ctx->pc = 0x12CA88u;
    SET_GPR_U32(ctx, 31, 0x12CA90u);
    ctx->pc = 0x12CA8Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x13FFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFC8_0x13ffc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA90u; }
    }
    if (ctx->pc != 0x12CA90u) { return; }
    ctx->pc = 0x12CA90u;
    // 0x12ca90: 0x23fc2
    ctx->pc = 0x12ca90u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 2), 31));
    // 0x12ca94: 0x108043
    ctx->pc = 0x12ca94u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x12ca98: 0xe23821
    ctx->pc = 0x12ca98u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12ca9c: 0x200302d
    ctx->pc = 0x12ca9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caa0: 0x73843
    ctx->pc = 0x12caa0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x12caa4: 0x260202d
    ctx->pc = 0x12caa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caa8: 0x220282d
    ctx->pc = 0x12caa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caac: 0xc049218
    ctx->pc = 0x12CAACu;
    SET_GPR_U32(ctx, 31, 0x12CAB4u);
    ctx->pc = 0x12CAB0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->pc = 0x124860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124860_0x124860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAB4u; }
    }
    if (ctx->pc != 0x12CAB4u) { return; }
    ctx->pc = 0x12CAB4u;
    // 0x12cab4: 0x40202d
    ctx->pc = 0x12cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cab8: 0x1080001d
    ctx->pc = 0x12CAB8u;
    {
        const bool branch_taken_0x12cab8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CABCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        if (branch_taken_0x12cab8) {
            ctx->pc = 0x12CB30u;
            goto label_12cb30;
        }
    }
    ctx->pc = 0x12CAC0u;
    // 0x12cac0: 0x3c050013
    ctx->pc = 0x12cac0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19 << 16));
    // 0x12cac4: 0x240302d
    ctx->pc = 0x12cac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cac8: 0xc049390
    ctx->pc = 0x12CAC8u;
    SET_GPR_U32(ctx, 31, 0x12CAD0u);
    ctx->pc = 0x12CACCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954680));
    ctx->pc = 0x124E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E40_0x124e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAD0u; }
    }
    if (ctx->pc != 0x12CAD0u) { return; }
    ctx->pc = 0x12CAD0u;
    // 0x12cad0: 0xae550008
    ctx->pc = 0x12cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x12cad4: 0xa2530002
    ctx->pc = 0x12cad4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x12cad8: 0x1a60000b
    ctx->pc = 0x12CAD8u;
    {
        const bool branch_taken_0x12cad8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12CADCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12cad8) {
            ctx->pc = 0x12CB08u;
            goto label_12cb08;
        }
    }
    ctx->pc = 0x12CAE0u;
    // 0x12cae0: 0x2647000c
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 12));
    // 0x12cae4: 0x0
    ctx->pc = 0x12cae4u;
    // NOP
label_12cae8:
    // 0x12cae8: 0x61080
    ctx->pc = 0x12cae8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x12caec: 0x24c60001
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x12caf0: 0x541821
    ctx->pc = 0x12caf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12caf4: 0xe21021
    ctx->pc = 0x12caf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x12caf8: 0x8c640000
    ctx->pc = 0x12caf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12cafc: 0xd3282a
    ctx->pc = 0x12cafcu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 19)));
    // 0x12cb00: 0x14a0fff9
    ctx->pc = 0x12CB00u;
    {
        const bool branch_taken_0x12cb00 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CB04u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x12cb00) {
            ctx->pc = 0x12CAE8u;
            goto label_12cae8;
        }
    }
    ctx->pc = 0x12CB08u;
label_12cb08:
    // 0x12cb08: 0xa2400001
    ctx->pc = 0x12cb08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cb0c: 0xc04b268
    ctx->pc = 0x12CB0Cu;
    SET_GPR_U32(ctx, 31, 0x12CB14u);
    ctx->pc = 0x12CB10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C9A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C9A0_0x12c9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB14u; }
    }
    if (ctx->pc != 0x12CB14u) { return; }
    ctx->pc = 0x12CB14u;
    // 0x12cb14: 0xae400048
    ctx->pc = 0x12cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x12cb18: 0x24020001
    ctx->pc = 0x12cb18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cb1c: 0xae40004c
    ctx->pc = 0x12cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x12cb20: 0xae400050
    ctx->pc = 0x12cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x12cb24: 0xae400054
    ctx->pc = 0x12cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x12cb28: 0xa2420000
    ctx->pc = 0x12cb28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cb2c: 0x240102d
    ctx->pc = 0x12cb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cb30:
    // 0x12cb30: 0xdfb00000
    ctx->pc = 0x12cb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cb34: 0xdfb10008
    ctx->pc = 0x12cb34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cb38: 0xdfb20010
    ctx->pc = 0x12cb38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cb3c: 0xdfb30018
    ctx->pc = 0x12cb3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cb40: 0xdfb40020
    ctx->pc = 0x12cb40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cb44: 0xdfb50028
    ctx->pc = 0x12cb44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cb48: 0xdfbf0030
    ctx->pc = 0x12cb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cb4c: 0x3e00008
    ctx->pc = 0x12CB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CB50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CA20u: goto label_12ca20;
            case 0x12CA44u: goto label_12ca44;
            case 0x12CAE8u: goto label_12cae8;
            case 0x12CB08u: goto label_12cb08;
            case 0x12CB30u: goto label_12cb30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12CB54u;
    // 0x12cb54: 0x0
    ctx->pc = 0x12cb54u;
    // NOP
}
