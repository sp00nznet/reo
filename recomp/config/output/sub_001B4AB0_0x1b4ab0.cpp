#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B4AB0
// Address: 0x1b4ab0 - 0x1b4c50
void sub_001B4AB0_0x1b4ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b4ab0u;

    // 0x1b4ab0: 0x27bdffd0
    ctx->pc = 0x1b4ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4ab4: 0x3c010032
    ctx->pc = 0x1b4ab4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4ab8: 0xffbf0020
    ctx->pc = 0x1b4ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4abc: 0x24030002
    ctx->pc = 0x1b4abcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4ac0: 0x7fb10010
    ctx->pc = 0x1b4ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4ac4: 0x7fb00000
    ctx->pc = 0x1b4ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4ac8: 0x80882d
    ctx->pc = 0x1b4ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4acc: 0x902443c3
    ctx->pc = 0x1b4accu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17347)));
    // 0x1b4ad0: 0x14830002
    ctx->pc = 0x1B4AD0u;
    {
        const bool branch_taken_0x1b4ad0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1b4ad0) {
            ctx->pc = 0x1B4ADCu;
            goto label_1b4adc;
        }
    }
    ctx->pc = 0x1B4AD8u;
    // 0x1b4ad8: 0x24110008
    ctx->pc = 0x1b4ad8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 8));
label_1b4adc:
    // 0x1b4adc: 0x3c010032
    ctx->pc = 0x1b4adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4ae0: 0x3c038000
    ctx->pc = 0x1b4ae0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1b4ae4: 0xa02043d6
    ctx->pc = 0x1b4ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17366), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4ae8: 0x2231824
    ctx->pc = 0x1b4ae8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b4aec: 0x3c010032
    ctx->pc = 0x1b4aecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4af0: 0x3282b
    ctx->pc = 0x1b4af0u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b4af4: 0x8c304460
    ctx->pc = 0x1b4af4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17504)));
    // 0x1b4af8: 0x11887c
    ctx->pc = 0x1b4af8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 1));
    // 0x1b4afc: 0x24030001
    ctx->pc = 0x1b4afcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b00: 0x3c010032
    ctx->pc = 0x1b4b00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4b04: 0x902443eb
    ctx->pc = 0x1b4b04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17387)));
    // 0x1b4b08: 0x14830005
    ctx->pc = 0x1B4B08u;
    {
        const bool branch_taken_0x1b4b08 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1B4B0Cu;
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 1));
        if (branch_taken_0x1b4b08) {
            ctx->pc = 0x1B4B20u;
            goto label_1b4b20;
        }
    }
    ctx->pc = 0x1B4B10u;
    // 0x1b4b10: 0x3c01002c
    ctx->pc = 0x1b4b10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4b14: 0x8c23aaf4
    ctx->pc = 0x1b4b14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294945524)));
    // 0x1b4b18: 0x12230011
    ctx->pc = 0x1B4B18u;
    {
        const bool branch_taken_0x1b4b18 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        if (branch_taken_0x1b4b18) {
            ctx->pc = 0x1B4B60u;
            goto label_1b4b60;
        }
    }
    ctx->pc = 0x1B4B20u;
label_1b4b20:
    // 0x1b4b20: 0x14a0001a
    ctx->pc = 0x1B4B20u;
    {
        const bool branch_taken_0x1b4b20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b4b20) {
            ctx->pc = 0x1B4B8Cu;
            goto label_1b4b8c;
        }
    }
    ctx->pc = 0x1B4B28u;
    // 0x1b4b28: 0x3c020023
    ctx->pc = 0x1b4b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b4b2c: 0x111880
    ctx->pc = 0x1b4b2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b4b30: 0x24424770
    ctx->pc = 0x1b4b30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18288));
    // 0x1b4b34: 0x200282d
    ctx->pc = 0x1b4b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b38: 0x431021
    ctx->pc = 0x1b4b38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4b3c: 0x24060001
    ctx->pc = 0x1b4b3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b40: 0x8c440000
    ctx->pc = 0x1b4b40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4b44: 0xc07323c
    ctx->pc = 0x1B4B44u;
    SET_GPR_U32(ctx, 31, 0x1B4B4Cu);
    ctx->pc = 0x1B4B48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B4Cu; }
    }
    if (ctx->pc != 0x1B4B4Cu) { return; }
    ctx->pc = 0x1B4B4Cu;
    // 0x1b4b4c: 0x18400004
    ctx->pc = 0x1B4B4Cu;
    {
        const bool branch_taken_0x1b4b4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b4b4c) {
            ctx->pc = 0x1B4B60u;
            goto label_1b4b60;
        }
    }
    ctx->pc = 0x1B4B54u;
    // 0x1b4b54: 0x24020001
    ctx->pc = 0x1b4b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b58: 0x3c010032
    ctx->pc = 0x1b4b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4b5c: 0xa02243eb
    ctx->pc = 0x1b4b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17387), (uint8_t)GPR_U32(ctx, 2));
label_1b4b60:
    // 0x1b4b60: 0x3c010032
    ctx->pc = 0x1b4b60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4b64: 0x220202d
    ctx->pc = 0x1b4b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b68: 0x94274414
    ctx->pc = 0x1b4b68u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17428)));
    // 0x1b4b6c: 0x200282d
    ctx->pc = 0x1b4b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b70: 0xc06d350
    ctx->pc = 0x1B4B70u;
    SET_GPR_U32(ctx, 31, 0x1B4B78u);
    ctx->pc = 0x1B4B74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x1B4D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4D40_0x1b4d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B78u; }
    }
    if (ctx->pc != 0x1B4B78u) { return; }
    ctx->pc = 0x1B4B78u;
    // 0x1b4b78: 0x24020001
    ctx->pc = 0x1b4b78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4b7c: 0x3c010032
    ctx->pc = 0x1b4b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4b80: 0x202d
    ctx->pc = 0x1b4b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b84: 0xc06d588
    ctx->pc = 0x1B4B84u;
    SET_GPR_U32(ctx, 31, 0x1B4B8Cu);
    ctx->pc = 0x1B4B88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17366), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1B5620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5620_0x1b5620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B8Cu; }
    }
    if (ctx->pc != 0x1B4B8Cu) { return; }
    ctx->pc = 0x1B4B8Cu;
label_1b4b8c:
    // 0x1b4b8c: 0xdfbf0020
    ctx->pc = 0x1b4b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4b90: 0x7bb10010
    ctx->pc = 0x1b4b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4b94: 0x7bb00000
    ctx->pc = 0x1b4b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b98: 0x3e00008
    ctx->pc = 0x1B4B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4ADCu: goto label_1b4adc;
            case 0x1B4B20u: goto label_1b4b20;
            case 0x1B4B60u: goto label_1b4b60;
            case 0x1B4B8Cu: goto label_1b4b8c;
            case 0x1B4BC8u: goto label_1b4bc8;
            case 0x1B4C30u: goto label_1b4c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4BA0u;
    // 0x1b4ba0: 0x27bdffd0
    ctx->pc = 0x1b4ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4ba4: 0x3c01002c
    ctx->pc = 0x1b4ba4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1b4ba8: 0xffbf0020
    ctx->pc = 0x1b4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4bac: 0x7fb10010
    ctx->pc = 0x1b4bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4bb0: 0x7fb00000
    ctx->pc = 0x1b4bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4bb4: 0x8c22aa30
    ctx->pc = 0x1b4bb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294945328)));
    // 0x1b4bb8: 0x10400003
    ctx->pc = 0x1B4BB8u;
    {
        const bool branch_taken_0x1b4bb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B4BBCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bb8) {
            ctx->pc = 0x1B4BC8u;
            goto label_1b4bc8;
        }
    }
    ctx->pc = 0x1B4BC0u;
    // 0x1b4bc0: 0xc06d314
    ctx->pc = 0x1B4BC0u;
    SET_GPR_U32(ctx, 31, 0x1B4BC8u);
    ctx->pc = 0x1B4C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4C50_0x1b4c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4BC8u; }
    }
    if (ctx->pc != 0x1B4BC8u) { return; }
    ctx->pc = 0x1B4BC8u;
label_1b4bc8:
    // 0x1b4bc8: 0x10807c
    ctx->pc = 0x1b4bc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 1));
    // 0x1b4bcc: 0x3c010032
    ctx->pc = 0x1b4bccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b4bd0: 0x10807e
    ctx->pc = 0x1b4bd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 1));
    // 0x1b4bd4: 0x3c020023
    ctx->pc = 0x1b4bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1b4bd8: 0x8c28440c
    ctx->pc = 0x1b4bd8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 17420)));
    // 0x1b4bdc: 0x24424770
    ctx->pc = 0x1b4bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18288));
    // 0x1b4be0: 0x101880
    ctx->pc = 0x1b4be0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1b4be4: 0x3c05000a
    ctx->pc = 0x1b4be4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)10 << 16));
    // 0x1b4be8: 0x431021
    ctx->pc = 0x1b4be8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4bec: 0x24060001
    ctx->pc = 0x1b4becu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4bf0: 0x8c440000
    ctx->pc = 0x1b4bf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4bf4: 0x382d
    ctx->pc = 0x1b4bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4bf8: 0x1058821
    ctx->pc = 0x1b4bf8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1b4bfc: 0xc07323c
    ctx->pc = 0x1B4BFCu;
    SET_GPR_U32(ctx, 31, 0x1B4C04u);
    ctx->pc = 0x1B4C00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C04u; }
    }
    if (ctx->pc != 0x1B4C04u) { return; }
    ctx->pc = 0x1B4C04u;
    // 0x1b4c04: 0x1840000a
    ctx->pc = 0x1B4C04u;
    {
        const bool branch_taken_0x1b4c04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B4C08u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1b4c04) {
            ctx->pc = 0x1B4C30u;
            goto label_1b4c30;
        }
    }
    ctx->pc = 0x1B4C0Cu;
    // 0x1b4c0c: 0x200202d
    ctx->pc = 0x1b4c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c10: 0x94274414
    ctx->pc = 0x1b4c10u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17428)));
    // 0x1b4c14: 0x220282d
    ctx->pc = 0x1b4c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c18: 0xc06d404
    ctx->pc = 0x1B4C18u;
    SET_GPR_U32(ctx, 31, 0x1B4C20u);
    ctx->pc = 0x1B4C1Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1B5010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5010_0x1b5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C20u; }
    }
    if (ctx->pc != 0x1B4C20u) { return; }
    ctx->pc = 0x1B4C20u;
    // 0x1b4c20: 0xc06d568
    ctx->pc = 0x1B4C20u;
    SET_GPR_U32(ctx, 31, 0x1B4C28u);
    ctx->pc = 0x1B55A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55A0_0x1b55a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C28u; }
    }
    if (ctx->pc != 0x1B4C28u) { return; }
    ctx->pc = 0x1B4C28u;
    // 0x1b4c28: 0xc06d588
    ctx->pc = 0x1B4C28u;
    SET_GPR_U32(ctx, 31, 0x1B4C30u);
    ctx->pc = 0x1B4C2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B5620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5620_0x1b5620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C30u; }
    }
    if (ctx->pc != 0x1B4C30u) { return; }
    ctx->pc = 0x1B4C30u;
label_1b4c30:
    // 0x1b4c30: 0xdfbf0020
    ctx->pc = 0x1b4c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4c34: 0x7bb10010
    ctx->pc = 0x1b4c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c38: 0x7bb00000
    ctx->pc = 0x1b4c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c3c: 0x3e00008
    ctx->pc = 0x1B4C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B4ADCu: goto label_1b4adc;
            case 0x1B4B20u: goto label_1b4b20;
            case 0x1B4B60u: goto label_1b4b60;
            case 0x1B4B8Cu: goto label_1b4b8c;
            case 0x1B4BC8u: goto label_1b4bc8;
            case 0x1B4C30u: goto label_1b4c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B4C44u;
    // 0x1b4c44: 0x0
    ctx->pc = 0x1b4c44u;
    // NOP
    // 0x1b4c48: 0x0
    ctx->pc = 0x1b4c48u;
    // NOP
    // 0x1b4c4c: 0x0
    ctx->pc = 0x1b4c4cu;
    // NOP
}
