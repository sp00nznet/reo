#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1249e8
// Address: 0x1249e8 - 0x124cd8
void entry_1249e8_0x124cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1249e8u;

label_1249e8:
    // 0x1249e8: 0x27bdff60
    ctx->pc = 0x1249e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_1249ec:
    // 0x1249ec: 0x24020001
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1249f0:
    // 0x1249f0: 0xffb00050
    ctx->pc = 0x1249f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1249f4:
    // 0x1249f4: 0x80802d
    ctx->pc = 0x1249f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1249f8:
    // 0x1249f8: 0xffb10058
    ctx->pc = 0x1249f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_1249fc:
    // 0x1249fc: 0xa0882d
    ctx->pc = 0x1249fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124a00:
    // 0x124a00: 0xffb20060
    ctx->pc = 0x124a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_124a04:
    // 0x124a04: 0xc0902d
    ctx->pc = 0x124a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_124a08:
    // 0x124a08: 0xffb30068
    ctx->pc = 0x124a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_124a0c:
    // 0x124a0c: 0x2613000c
    ctx->pc = 0x124a0cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 12));
label_124a10:
    // 0x124a10: 0xffb40070
    ctx->pc = 0x124a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_124a14:
    // 0x124a14: 0x26140018
    ctx->pc = 0x124a14u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 24));
label_124a18:
    // 0x124a18: 0xffb50078
    ctx->pc = 0x124a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_124a1c:
    // 0x124a1c: 0x2615000d
    ctx->pc = 0x124a1cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 13));
label_124a20:
    // 0x124a20: 0xffb60080
    ctx->pc = 0x124a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_124a24:
    // 0x124a24: 0x2616000e
    ctx->pc = 0x124a24u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 16), 14));
label_124a28:
    // 0x124a28: 0xffb70088
    ctx->pc = 0x124a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_124a2c:
    // 0x124a2c: 0x26170010
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 16), 16));
label_124a30:
    // 0x124a30: 0xffbe0090
    ctx->pc = 0x124a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_124a34:
    // 0x124a34: 0x261e000f
    ctx->pc = 0x124a34u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 16), 15));
label_124a38:
    // 0x124a38: 0xffbf0098
    ctx->pc = 0x124a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_124a3c:
    // 0x124a3c: 0x27a60040
    ctx->pc = 0x124a3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
label_124a40:
    // 0x124a40: 0xa6020002
    ctx->pc = 0x124a40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_124a44:
    // 0x124a44: 0x26020014
    ctx->pc = 0x124a44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_124a48:
    // 0x124a48: 0x220202d
    ctx->pc = 0x124a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124a4c:
    // 0x124a4c: 0x240282d
    ctx->pc = 0x124a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124a50:
    // 0x124a50: 0x260382d
    ctx->pc = 0x124a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_124a54:
    // 0x124a54: 0x2a0402d
    ctx->pc = 0x124a54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_124a58:
    // 0x124a58: 0x3c0482d
    ctx->pc = 0x124a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_124a5c:
    // 0x124a5c: 0x2c0502d
    ctx->pc = 0x124a5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_124a60:
    // 0x124a60: 0x40582d
    ctx->pc = 0x124a60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124a64:
    // 0x124a64: 0xafa2004c
    ctx->pc = 0x124a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_124a68:
    // 0x124a68: 0xafb40000
    ctx->pc = 0x124a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_124a6c:
    // 0x124a6c: 0xc0499e6
label_124a70:
    if (ctx->pc == 0x124A70u) {
        ctx->pc = 0x124A70u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->pc = 0x124A74u;
        goto label_124a74;
    }
    ctx->pc = 0x124A6Cu;
    SET_GPR_U32(ctx, 31, 0x124A74u);
    ctx->pc = 0x124A70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    ctx->pc = 0x126798u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126798_0x126798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A74u; }
    }
    if (ctx->pc != 0x124A74u) { return; }
    ctx->pc = 0x124A74u;
label_124a74:
    // 0x124a74: 0x440008b
label_124a78:
    if (ctx->pc == 0x124A78u) {
        ctx->pc = 0x124A78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124A7Cu;
        goto label_124a7c;
    }
    ctx->pc = 0x124A74u;
    {
        const bool branch_taken_0x124a74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124A78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124a74) {
            ctx->pc = 0x124CA4u;
            goto label_124ca4;
        }
    }
    ctx->pc = 0x124A7Cu;
label_124a7c:
    // 0x124a7c: 0x82620000
    ctx->pc = 0x124a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_124a80:
    // 0x124a80: 0x28420005
    ctx->pc = 0x124a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
label_124a84:
    // 0x124a84: 0x1440003a
label_124a88:
    if (ctx->pc == 0x124A88u) {
        ctx->pc = 0x124A88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124A8Cu;
        goto label_124a8c;
    }
    ctx->pc = 0x124A84u;
    {
        const bool branch_taken_0x124a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x124A88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124a84) {
            ctx->pc = 0x124B70u;
            goto label_124b70;
        }
    }
    ctx->pc = 0x124A8Cu;
label_124a8c:
    // 0x124a8c: 0x8e0200b0
    ctx->pc = 0x124a8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_124a90:
    // 0x124a90: 0x54400009
label_124a94:
    if (ctx->pc == 0x124A94u) {
        ctx->pc = 0x124A94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x124A98u;
        goto label_124a98;
    }
    ctx->pc = 0x124A90u;
    {
        const bool branch_taken_0x124a90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x124a90) {
            ctx->pc = 0x124A94u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
            ctx->pc = 0x124AB8u;
            goto label_124ab8;
        }
    }
    ctx->pc = 0x124A98u;
label_124a98:
    // 0x124a98: 0x3c040024
    ctx->pc = 0x124a98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_124a9c:
    // 0x124a9c: 0x3c050024
    ctx->pc = 0x124a9cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_124aa0:
    // 0x124aa0: 0x24849b68
    ctx->pc = 0x124aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941544));
label_124aa4:
    // 0x124aa4: 0xc04a04a
label_124aa8:
    if (ctx->pc == 0x124AA8u) {
        ctx->pc = 0x124AA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941576));
        ctx->pc = 0x124AACu;
        goto label_124aac;
    }
    ctx->pc = 0x124AA4u;
    SET_GPR_U32(ctx, 31, 0x124AACu);
    ctx->pc = 0x124AA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941576));
    ctx->pc = 0x128128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00128128_0x128128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AACu; }
    }
    if (ctx->pc != 0x124AACu) { return; }
    ctx->pc = 0x124AACu;
label_124aac:
    // 0x124aac: 0x1000007d
label_124ab0:
    if (ctx->pc == 0x124AB0u) {
        ctx->pc = 0x124AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x124AB4u;
        goto label_124ab4;
    }
    ctx->pc = 0x124AACu;
    {
        const bool branch_taken_0x124aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x124AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x124aac) {
            ctx->pc = 0x124CA4u;
            goto label_124ca4;
        }
    }
    ctx->pc = 0x124AB4u;
label_124ab4:
    // 0x124ab4: 0x0
    ctx->pc = 0x124ab4u;
    // NOP
label_124ab8:
    // 0x124ab8: 0x24090060
    ctx->pc = 0x124ab8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 96));
label_124abc:
    // 0x124abc: 0xa2a20000
    ctx->pc = 0x124abcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_124ac0:
    // 0x124ac0: 0x2408000a
    ctx->pc = 0x124ac0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 10));
label_124ac4:
    // 0x124ac4: 0x220202d
    ctx->pc = 0x124ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124ac8:
    // 0x124ac8: 0x240282d
    ctx->pc = 0x124ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124acc:
    // 0x124acc: 0x82c30000
    ctx->pc = 0x124accu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_124ad0:
    // 0x124ad0: 0x27a60042
    ctx->pc = 0x124ad0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 66));
label_124ad4:
    // 0x124ad4: 0x27a70043
    ctx->pc = 0x124ad4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 67));
label_124ad8:
    // 0x124ad8: 0x31040
    ctx->pc = 0x124ad8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_124adc:
    // 0x124adc: 0x431021
    ctx->pc = 0x124adcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124ae0:
    // 0x124ae0: 0x21180
    ctx->pc = 0x124ae0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
label_124ae4:
    // 0x124ae4: 0xa3c20000
    ctx->pc = 0x124ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_124ae8:
    // 0x124ae8: 0xaee90000
    ctx->pc = 0x124ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
label_124aec:
    // 0x124aec: 0xa6080098
    ctx->pc = 0x124aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 8));
label_124af0:
    // 0x124af0: 0xa600001c
    ctx->pc = 0x124af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_124af4:
    // 0x124af4: 0xa6000024
    ctx->pc = 0x124af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_124af8:
    // 0x124af8: 0xa6000026
    ctx->pc = 0x124af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_124afc:
    // 0x124afc: 0xae000020
    ctx->pc = 0x124afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_124b00:
    // 0x124b00: 0xae000028
    ctx->pc = 0x124b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_124b04:
    // 0x124b04: 0xae00002c
    ctx->pc = 0x124b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_124b08:
    // 0x124b08: 0xae000030
    ctx->pc = 0x124b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_124b0c:
    // 0x124b0c: 0xae000034
    ctx->pc = 0x124b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_124b10:
    // 0x124b10: 0xc049a46
label_124b14:
    if (ctx->pc == 0x124B14u) {
        ctx->pc = 0x124B14u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x124B18u;
        goto label_124b18;
    }
    ctx->pc = 0x124B10u;
    SET_GPR_U32(ctx, 31, 0x124B18u);
    ctx->pc = 0x124B14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->pc = 0x126918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126918_0x126918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B18u; }
    }
    if (ctx->pc != 0x124B18u) { return; }
    ctx->pc = 0x124B18u;
label_124b18:
    // 0x124b18: 0x4400036
label_124b1c:
    if (ctx->pc == 0x124B1Cu) {
        ctx->pc = 0x124B1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124B20u;
        goto label_124b20;
    }
    ctx->pc = 0x124B18u;
    {
        const bool branch_taken_0x124b18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124B1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124b18) {
            ctx->pc = 0x124BF4u;
            goto label_124bf4;
        }
    }
    ctx->pc = 0x124B20u;
label_124b20:
    // 0x124b20: 0x8e870000
    ctx->pc = 0x124b20u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_124b24:
    // 0x124b24: 0x93a50042
    ctx->pc = 0x124b24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_124b28:
    // 0x124b28: 0x27a80032
    ctx->pc = 0x124b28u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 50));
label_124b2c:
    // 0x124b2c: 0x93a60043
    ctx->pc = 0x124b2cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_124b30:
    // 0x124b30: 0x27a90034
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 52));
label_124b34:
    // 0x124b34: 0x27aa0036
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 54));
label_124b38:
    // 0x124b38: 0xc049428
label_124b3c:
    if (ctx->pc == 0x124B3Cu) {
        ctx->pc = 0x124B3Cu;
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x124B40u;
        goto label_124b40;
    }
    ctx->pc = 0x124B38u;
    SET_GPR_U32(ctx, 31, 0x124B40u);
    ctx->pc = 0x124B3Cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1250A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001250A0_0x1250a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B40u; }
    }
    if (ctx->pc != 0x124B40u) { return; }
    ctx->pc = 0x124B40u;
label_124b40:
    // 0x124b40: 0x4400058
label_124b44:
    if (ctx->pc == 0x124B44u) {
        ctx->pc = 0x124B44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x124B48u;
        goto label_124b48;
    }
    ctx->pc = 0x124B40u;
    {
        const bool branch_taken_0x124b40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124B44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x124b40) {
            ctx->pc = 0x124CA4u;
            goto label_124ca4;
        }
    }
    ctx->pc = 0x124B48u;
label_124b48:
    // 0x124b48: 0x3c020021
    ctx->pc = 0x124b48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_124b4c:
    // 0x124b4c: 0x8c42b948
    ctx->pc = 0x124b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949192)));
label_124b50:
    // 0x124b50: 0x50400047
label_124b54:
    if (ctx->pc == 0x124B54u) {
        ctx->pc = 0x124B54u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x124B58u;
        goto label_124b58;
    }
    ctx->pc = 0x124B50u;
    {
        const bool branch_taken_0x124b50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x124b50) {
            ctx->pc = 0x124B54u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->pc = 0x124C70u;
            goto label_124c70;
        }
    }
    ctx->pc = 0x124B58u;
label_124b58:
    // 0x124b58: 0x8e0400b0
    ctx->pc = 0x124b58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_124b5c:
    // 0x124b5c: 0x40f809
label_124b60:
    if (ctx->pc == 0x124B60u) {
        ctx->pc = 0x124B60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x124B64u;
        goto label_124b64;
    }
    ctx->pc = 0x124B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124B64u);
        ctx->pc = 0x124B60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1249E8u: goto label_1249e8;
            case 0x1249ECu: goto label_1249ec;
            case 0x1249F0u: goto label_1249f0;
            case 0x1249F4u: goto label_1249f4;
            case 0x1249F8u: goto label_1249f8;
            case 0x1249FCu: goto label_1249fc;
            case 0x124A00u: goto label_124a00;
            case 0x124A04u: goto label_124a04;
            case 0x124A08u: goto label_124a08;
            case 0x124A0Cu: goto label_124a0c;
            case 0x124A10u: goto label_124a10;
            case 0x124A14u: goto label_124a14;
            case 0x124A18u: goto label_124a18;
            case 0x124A1Cu: goto label_124a1c;
            case 0x124A20u: goto label_124a20;
            case 0x124A24u: goto label_124a24;
            case 0x124A28u: goto label_124a28;
            case 0x124A2Cu: goto label_124a2c;
            case 0x124A30u: goto label_124a30;
            case 0x124A34u: goto label_124a34;
            case 0x124A38u: goto label_124a38;
            case 0x124A3Cu: goto label_124a3c;
            case 0x124A40u: goto label_124a40;
            case 0x124A44u: goto label_124a44;
            case 0x124A48u: goto label_124a48;
            case 0x124A4Cu: goto label_124a4c;
            case 0x124A50u: goto label_124a50;
            case 0x124A54u: goto label_124a54;
            case 0x124A58u: goto label_124a58;
            case 0x124A5Cu: goto label_124a5c;
            case 0x124A60u: goto label_124a60;
            case 0x124A64u: goto label_124a64;
            case 0x124A68u: goto label_124a68;
            case 0x124A6Cu: goto label_124a6c;
            case 0x124A70u: goto label_124a70;
            case 0x124A74u: goto label_124a74;
            case 0x124A78u: goto label_124a78;
            case 0x124A7Cu: goto label_124a7c;
            case 0x124A80u: goto label_124a80;
            case 0x124A84u: goto label_124a84;
            case 0x124A88u: goto label_124a88;
            case 0x124A8Cu: goto label_124a8c;
            case 0x124A90u: goto label_124a90;
            case 0x124A94u: goto label_124a94;
            case 0x124A98u: goto label_124a98;
            case 0x124A9Cu: goto label_124a9c;
            case 0x124AA0u: goto label_124aa0;
            case 0x124AA4u: goto label_124aa4;
            case 0x124AA8u: goto label_124aa8;
            case 0x124AACu: goto label_124aac;
            case 0x124AB0u: goto label_124ab0;
            case 0x124AB4u: goto label_124ab4;
            case 0x124AB8u: goto label_124ab8;
            case 0x124ABCu: goto label_124abc;
            case 0x124AC0u: goto label_124ac0;
            case 0x124AC4u: goto label_124ac4;
            case 0x124AC8u: goto label_124ac8;
            case 0x124ACCu: goto label_124acc;
            case 0x124AD0u: goto label_124ad0;
            case 0x124AD4u: goto label_124ad4;
            case 0x124AD8u: goto label_124ad8;
            case 0x124ADCu: goto label_124adc;
            case 0x124AE0u: goto label_124ae0;
            case 0x124AE4u: goto label_124ae4;
            case 0x124AE8u: goto label_124ae8;
            case 0x124AECu: goto label_124aec;
            case 0x124AF0u: goto label_124af0;
            case 0x124AF4u: goto label_124af4;
            case 0x124AF8u: goto label_124af8;
            case 0x124AFCu: goto label_124afc;
            case 0x124B00u: goto label_124b00;
            case 0x124B04u: goto label_124b04;
            case 0x124B08u: goto label_124b08;
            case 0x124B0Cu: goto label_124b0c;
            case 0x124B10u: goto label_124b10;
            case 0x124B14u: goto label_124b14;
            case 0x124B18u: goto label_124b18;
            case 0x124B1Cu: goto label_124b1c;
            case 0x124B20u: goto label_124b20;
            case 0x124B24u: goto label_124b24;
            case 0x124B28u: goto label_124b28;
            case 0x124B2Cu: goto label_124b2c;
            case 0x124B30u: goto label_124b30;
            case 0x124B34u: goto label_124b34;
            case 0x124B38u: goto label_124b38;
            case 0x124B3Cu: goto label_124b3c;
            case 0x124B40u: goto label_124b40;
            case 0x124B44u: goto label_124b44;
            case 0x124B48u: goto label_124b48;
            case 0x124B4Cu: goto label_124b4c;
            case 0x124B50u: goto label_124b50;
            case 0x124B54u: goto label_124b54;
            case 0x124B58u: goto label_124b58;
            case 0x124B5Cu: goto label_124b5c;
            case 0x124B60u: goto label_124b60;
            case 0x124B64u: goto label_124b64;
            case 0x124B68u: goto label_124b68;
            case 0x124B6Cu: goto label_124b6c;
            case 0x124B70u: goto label_124b70;
            case 0x124B74u: goto label_124b74;
            case 0x124B78u: goto label_124b78;
            case 0x124B7Cu: goto label_124b7c;
            case 0x124B80u: goto label_124b80;
            case 0x124B84u: goto label_124b84;
            case 0x124B88u: goto label_124b88;
            case 0x124B8Cu: goto label_124b8c;
            case 0x124B90u: goto label_124b90;
            case 0x124B94u: goto label_124b94;
            case 0x124B98u: goto label_124b98;
            case 0x124B9Cu: goto label_124b9c;
            case 0x124BA0u: goto label_124ba0;
            case 0x124BA4u: goto label_124ba4;
            case 0x124BA8u: goto label_124ba8;
            case 0x124BACu: goto label_124bac;
            case 0x124BB0u: goto label_124bb0;
            case 0x124BB4u: goto label_124bb4;
            case 0x124BB8u: goto label_124bb8;
            case 0x124BBCu: goto label_124bbc;
            case 0x124BC0u: goto label_124bc0;
            case 0x124BC4u: goto label_124bc4;
            case 0x124BC8u: goto label_124bc8;
            case 0x124BCCu: goto label_124bcc;
            case 0x124BD0u: goto label_124bd0;
            case 0x124BD4u: goto label_124bd4;
            case 0x124BD8u: goto label_124bd8;
            case 0x124BDCu: goto label_124bdc;
            case 0x124BE0u: goto label_124be0;
            case 0x124BE4u: goto label_124be4;
            case 0x124BE8u: goto label_124be8;
            case 0x124BECu: goto label_124bec;
            case 0x124BF0u: goto label_124bf0;
            case 0x124BF4u: goto label_124bf4;
            case 0x124BF8u: goto label_124bf8;
            case 0x124BFCu: goto label_124bfc;
            case 0x124C00u: goto label_124c00;
            case 0x124C04u: goto label_124c04;
            case 0x124C08u: goto label_124c08;
            case 0x124C0Cu: goto label_124c0c;
            case 0x124C10u: goto label_124c10;
            case 0x124C14u: goto label_124c14;
            case 0x124C18u: goto label_124c18;
            case 0x124C1Cu: goto label_124c1c;
            case 0x124C20u: goto label_124c20;
            case 0x124C24u: goto label_124c24;
            case 0x124C28u: goto label_124c28;
            case 0x124C2Cu: goto label_124c2c;
            case 0x124C30u: goto label_124c30;
            case 0x124C34u: goto label_124c34;
            case 0x124C38u: goto label_124c38;
            case 0x124C3Cu: goto label_124c3c;
            case 0x124C40u: goto label_124c40;
            case 0x124C44u: goto label_124c44;
            case 0x124C48u: goto label_124c48;
            case 0x124C4Cu: goto label_124c4c;
            case 0x124C50u: goto label_124c50;
            case 0x124C54u: goto label_124c54;
            case 0x124C58u: goto label_124c58;
            case 0x124C5Cu: goto label_124c5c;
            case 0x124C60u: goto label_124c60;
            case 0x124C64u: goto label_124c64;
            case 0x124C68u: goto label_124c68;
            case 0x124C6Cu: goto label_124c6c;
            case 0x124C70u: goto label_124c70;
            case 0x124C74u: goto label_124c74;
            case 0x124C78u: goto label_124c78;
            case 0x124C7Cu: goto label_124c7c;
            case 0x124C80u: goto label_124c80;
            case 0x124C84u: goto label_124c84;
            case 0x124C88u: goto label_124c88;
            case 0x124C8Cu: goto label_124c8c;
            case 0x124C90u: goto label_124c90;
            case 0x124C94u: goto label_124c94;
            case 0x124C98u: goto label_124c98;
            case 0x124C9Cu: goto label_124c9c;
            case 0x124CA0u: goto label_124ca0;
            case 0x124CA4u: goto label_124ca4;
            case 0x124CA8u: goto label_124ca8;
            case 0x124CACu: goto label_124cac;
            case 0x124CB0u: goto label_124cb0;
            case 0x124CB4u: goto label_124cb4;
            case 0x124CB8u: goto label_124cb8;
            case 0x124CBCu: goto label_124cbc;
            case 0x124CC0u: goto label_124cc0;
            case 0x124CC4u: goto label_124cc4;
            case 0x124CC8u: goto label_124cc8;
            case 0x124CCCu: goto label_124ccc;
            case 0x124CD0u: goto label_124cd0;
            case 0x124CD4u: goto label_124cd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x124B64u; }
            if (ctx->pc != 0x124B64u) { return; }
        }
    }
    ctx->pc = 0x124B64u;
label_124b64:
    // 0x124b64: 0x10000042
label_124b68:
    if (ctx->pc == 0x124B68u) {
        ctx->pc = 0x124B68u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x124B6Cu;
        goto label_124b6c;
    }
    ctx->pc = 0x124B64u;
    {
        const bool branch_taken_0x124b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x124B68u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x124b64) {
            ctx->pc = 0x124C70u;
            goto label_124c70;
        }
    }
    ctx->pc = 0x124B6Cu;
label_124b6c:
    // 0x124b6c: 0x0
    ctx->pc = 0x124b6cu;
    // NOP
label_124b70:
    // 0x124b70: 0x240282d
    ctx->pc = 0x124b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124b74:
    // 0x124b74: 0x27a60042
    ctx->pc = 0x124b74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 66));
label_124b78:
    // 0x124b78: 0xc049a46
label_124b7c:
    if (ctx->pc == 0x124B7Cu) {
        ctx->pc = 0x124B7Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 67));
        ctx->pc = 0x124B80u;
        goto label_124b80;
    }
    ctx->pc = 0x124B78u;
    SET_GPR_U32(ctx, 31, 0x124B80u);
    ctx->pc = 0x124B7Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 67));
    ctx->pc = 0x126918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126918_0x126918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B80u; }
    }
    if (ctx->pc != 0x124B80u) { return; }
    ctx->pc = 0x124B80u;
label_124b80:
    // 0x124b80: 0x440001c
label_124b84:
    if (ctx->pc == 0x124B84u) {
        ctx->pc = 0x124B84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124B88u;
        goto label_124b88;
    }
    ctx->pc = 0x124B80u;
    {
        const bool branch_taken_0x124b80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124B84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124b80) {
            ctx->pc = 0x124BF4u;
            goto label_124bf4;
        }
    }
    ctx->pc = 0x124B88u;
label_124b88:
    // 0x124b88: 0x8e870000
    ctx->pc = 0x124b88u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_124b8c:
    // 0x124b8c: 0x93a50042
    ctx->pc = 0x124b8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_124b90:
    // 0x124b90: 0x27a80044
    ctx->pc = 0x124b90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 68));
label_124b94:
    // 0x124b94: 0x93a60043
    ctx->pc = 0x124b94u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_124b98:
    // 0x124b98: 0x27a90046
    ctx->pc = 0x124b98u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 70));
label_124b9c:
    // 0x124b9c: 0xc049428
label_124ba0:
    if (ctx->pc == 0x124BA0u) {
        ctx->pc = 0x124BA0u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x124BA4u;
        goto label_124ba4;
    }
    ctx->pc = 0x124B9Cu;
    SET_GPR_U32(ctx, 31, 0x124BA4u);
    ctx->pc = 0x124BA0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x1250A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001250A0_0x1250a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BA4u; }
    }
    if (ctx->pc != 0x124BA4u) { return; }
    ctx->pc = 0x124BA4u;
label_124ba4:
    // 0x124ba4: 0x440ffc1
label_124ba8:
    if (ctx->pc == 0x124BA8u) {
        ctx->pc = 0x124BA8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x124BACu;
        goto label_124bac;
    }
    ctx->pc = 0x124BA4u;
    {
        const bool branch_taken_0x124ba4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124BA8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 28));
        if (branch_taken_0x124ba4) {
            ctx->pc = 0x124AACu;
            goto label_124aac;
        }
    }
    ctx->pc = 0x124BACu;
label_124bac:
    // 0x124bac: 0x8e040008
    ctx->pc = 0x124bacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_124bb0:
    // 0x124bb0: 0x87a50044
    ctx->pc = 0x124bb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_124bb4:
    // 0x124bb4: 0x87a60046
    ctx->pc = 0x124bb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_124bb8:
    // 0x124bb8: 0xc04d3ca
label_124bbc:
    if (ctx->pc == 0x124BBCu) {
        ctx->pc = 0x124BBCu;
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x124BC0u;
        goto label_124bc0;
    }
    ctx->pc = 0x124BB8u;
    SET_GPR_U32(ctx, 31, 0x124BC0u);
    ctx->pc = 0x124BBCu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->pc = 0x134F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F28_0x134f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BC0u; }
    }
    if (ctx->pc != 0x124BC0u) { return; }
    ctx->pc = 0x124BC0u;
label_124bc0:
    // 0x124bc0: 0x220202d
    ctx->pc = 0x124bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124bc4:
    // 0x124bc4: 0x240282d
    ctx->pc = 0x124bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124bc8:
    // 0x124bc8: 0xc049a26
label_124bcc:
    if (ctx->pc == 0x124BCCu) {
        ctx->pc = 0x124BCCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124BD0u;
        goto label_124bd0;
    }
    ctx->pc = 0x124BC8u;
    SET_GPR_U32(ctx, 31, 0x124BD0u);
    ctx->pc = 0x124BCCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126898u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126898_0x126898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BD0u; }
    }
    if (ctx->pc != 0x124BD0u) { return; }
    ctx->pc = 0x124BD0u;
label_124bd0:
    // 0x124bd0: 0x4400008
label_124bd4:
    if (ctx->pc == 0x124BD4u) {
        ctx->pc = 0x124BD4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x124BD8u;
        goto label_124bd8;
    }
    ctx->pc = 0x124BD0u;
    {
        const bool branch_taken_0x124bd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124BD4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x124bd0) {
            ctx->pc = 0x124BF4u;
            goto label_124bf4;
        }
    }
    ctx->pc = 0x124BD8u;
label_124bd8:
    // 0x124bd8: 0x220202d
    ctx->pc = 0x124bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124bdc:
    // 0x124bdc: 0x240282d
    ctx->pc = 0x124bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124be0:
    // 0x124be0: 0x27a60010
    ctx->pc = 0x124be0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
label_124be4:
    // 0x124be4: 0xc049a64
label_124be8:
    if (ctx->pc == 0x124BE8u) {
        ctx->pc = 0x124BE8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124BECu;
        goto label_124bec;
    }
    ctx->pc = 0x124BE4u;
    SET_GPR_U32(ctx, 31, 0x124BECu);
    ctx->pc = 0x124BE8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126990_0x126990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BECu; }
    }
    if (ctx->pc != 0x124BECu) { return; }
    ctx->pc = 0x124BECu;
label_124bec:
    // 0x124bec: 0x4430004
label_124bf0:
    if (ctx->pc == 0x124BF0u) {
        ctx->pc = 0x124BF0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x124BF4u;
        goto label_124bf4;
    }
    ctx->pc = 0x124BECu;
    {
        const bool branch_taken_0x124bec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x124bec) {
            ctx->pc = 0x124BF0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
            ctx->pc = 0x124C00u;
            goto label_124c00;
        }
    }
    ctx->pc = 0x124BF4u;
label_124bf4:
    // 0x124bf4: 0x1000002b
label_124bf8:
    if (ctx->pc == 0x124BF8u) {
        ctx->pc = 0x124BF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124BFCu;
        goto label_124bfc;
    }
    ctx->pc = 0x124BF4u;
    {
        const bool branch_taken_0x124bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x124BF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124bf4) {
            ctx->pc = 0x124CA4u;
            goto label_124ca4;
        }
    }
    ctx->pc = 0x124BFCu;
label_124bfc:
    // 0x124bfc: 0x0
    ctx->pc = 0x124bfcu;
    // NOP
label_124c00:
    // 0x124c00: 0x86660000
    ctx->pc = 0x124c00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_124c04:
    // 0x124c04: 0x8c450000
    ctx->pc = 0x124c04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_124c08:
    // 0x124c08: 0xc04d3ac
label_124c0c:
    if (ctx->pc == 0x124C0Cu) {
        ctx->pc = 0x124C0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x124C10u;
        goto label_124c10;
    }
    ctx->pc = 0x124C08u;
    SET_GPR_U32(ctx, 31, 0x124C10u);
    ctx->pc = 0x124C0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134EB0_0x134eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C10u; }
    }
    if (ctx->pc != 0x124C10u) { return; }
    ctx->pc = 0x124C10u;
label_124c10:
    // 0x124c10: 0x8e040008
    ctx->pc = 0x124c10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_124c14:
    // 0x124c14: 0x27a50010
    ctx->pc = 0x124c14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_124c18:
    // 0x124c18: 0xc04d3b6
label_124c1c:
    if (ctx->pc == 0x124C1Cu) {
        ctx->pc = 0x124C1Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124C20u;
        goto label_124c20;
    }
    ctx->pc = 0x124C18u;
    SET_GPR_U32(ctx, 31, 0x124C20u);
    ctx->pc = 0x124C1Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134ED8_0x134ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C20u; }
    }
    if (ctx->pc != 0x124C20u) { return; }
    ctx->pc = 0x124C20u;
label_124c20:
    // 0x124c20: 0x26020034
    ctx->pc = 0x124c20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 52));
label_124c24:
    // 0x124c24: 0x26060020
    ctx->pc = 0x124c24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 32));
label_124c28:
    // 0x124c28: 0x26070024
    ctx->pc = 0x124c28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 36));
label_124c2c:
    // 0x124c2c: 0x26080026
    ctx->pc = 0x124c2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 38));
label_124c30:
    // 0x124c30: 0x26090028
    ctx->pc = 0x124c30u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 40));
label_124c34:
    // 0x124c34: 0x260a002c
    ctx->pc = 0x124c34u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 44));
label_124c38:
    // 0x124c38: 0x260b0030
    ctx->pc = 0x124c38u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 48));
label_124c3c:
    // 0x124c3c: 0x220202d
    ctx->pc = 0x124c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124c40:
    // 0x124c40: 0x240282d
    ctx->pc = 0x124c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124c44:
    // 0x124c44: 0xc049ab2
label_124c48:
    if (ctx->pc == 0x124C48u) {
        ctx->pc = 0x124C48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x124C4Cu;
        goto label_124c4c;
    }
    ctx->pc = 0x124C44u;
    SET_GPR_U32(ctx, 31, 0x124C4Cu);
    ctx->pc = 0x124C48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x126AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126AC8_0x126ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C4Cu; }
    }
    if (ctx->pc != 0x124C4Cu) { return; }
    ctx->pc = 0x124C4Cu;
label_124c4c:
    // 0x124c4c: 0x220202d
    ctx->pc = 0x124c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124c50:
    // 0x124c50: 0x240282d
    ctx->pc = 0x124c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124c54:
    // 0x124c54: 0x260600c8
    ctx->pc = 0x124c54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 200));
label_124c58:
    // 0x124c58: 0x260700cc
    ctx->pc = 0x124c58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 204));
label_124c5c:
    // 0x124c5c: 0x260800dc
    ctx->pc = 0x124c5cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 220));
label_124c60:
    // 0x124c60: 0xc049b4a
label_124c64:
    if (ctx->pc == 0x124C64u) {
        ctx->pc = 0x124C64u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 222));
        ctx->pc = 0x124C68u;
        goto label_124c68;
    }
    ctx->pc = 0x124C60u;
    SET_GPR_U32(ctx, 31, 0x124C68u);
    ctx->pc = 0x124C64u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 222));
    ctx->pc = 0x126D28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126D28_0x126d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C68u; }
    }
    if (ctx->pc != 0x124C68u) { return; }
    ctx->pc = 0x124C68u;
label_124c68:
    // 0x124c68: 0xa6000098
    ctx->pc = 0x124c68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
label_124c6c:
    // 0x124c6c: 0x8202000e
    ctx->pc = 0x124c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_124c70:
    // 0x124c70: 0x8203000f
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_124c74:
    // 0x124c74: 0x8e040010
    ctx->pc = 0x124c74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_124c78:
    // 0x124c78: 0x8e05003c
    ctx->pc = 0x124c78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_124c7c:
    // 0x124c7c: 0x8e060040
    ctx->pc = 0x124c7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_124c80:
    // 0x124c80: 0x8e070044
    ctx->pc = 0x124c80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_124c84:
    // 0x124c84: 0xae020050
    ctx->pc = 0x124c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_124c88:
    // 0x124c88: 0xae030054
    ctx->pc = 0x124c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_124c8c:
    // 0x124c8c: 0xae040058
    ctx->pc = 0x124c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_124c90:
    // 0x124c90: 0xae05005c
    ctx->pc = 0x124c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_124c94:
    // 0x124c94: 0xae060060
    ctx->pc = 0x124c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_124c98:
    // 0x124c98: 0xae070064
    ctx->pc = 0x124c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_124c9c:
    // 0x124c9c: 0xae00008c
    ctx->pc = 0x124c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_124ca0:
    // 0x124ca0: 0x87a20040
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_124ca4:
    // 0x124ca4: 0xdfb00050
    ctx->pc = 0x124ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_124ca8:
    // 0x124ca8: 0xdfb10058
    ctx->pc = 0x124ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_124cac:
    // 0x124cac: 0xdfb20060
    ctx->pc = 0x124cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_124cb0:
    // 0x124cb0: 0xdfb30068
    ctx->pc = 0x124cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_124cb4:
    // 0x124cb4: 0xdfb40070
    ctx->pc = 0x124cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_124cb8:
    // 0x124cb8: 0xdfb50078
    ctx->pc = 0x124cb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_124cbc:
    // 0x124cbc: 0xdfb60080
    ctx->pc = 0x124cbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_124cc0:
    // 0x124cc0: 0xdfb70088
    ctx->pc = 0x124cc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_124cc4:
    // 0x124cc4: 0xdfbe0090
    ctx->pc = 0x124cc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_124cc8:
    // 0x124cc8: 0xdfbf0098
    ctx->pc = 0x124cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_124ccc:
    // 0x124ccc: 0x3e00008
label_124cd0:
    if (ctx->pc == 0x124CD0u) {
        ctx->pc = 0x124CD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x124CD4u;
        goto label_124cd4;
    }
    ctx->pc = 0x124CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124CD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1249E8u: goto label_1249e8;
            case 0x1249ECu: goto label_1249ec;
            case 0x1249F0u: goto label_1249f0;
            case 0x1249F4u: goto label_1249f4;
            case 0x1249F8u: goto label_1249f8;
            case 0x1249FCu: goto label_1249fc;
            case 0x124A00u: goto label_124a00;
            case 0x124A04u: goto label_124a04;
            case 0x124A08u: goto label_124a08;
            case 0x124A0Cu: goto label_124a0c;
            case 0x124A10u: goto label_124a10;
            case 0x124A14u: goto label_124a14;
            case 0x124A18u: goto label_124a18;
            case 0x124A1Cu: goto label_124a1c;
            case 0x124A20u: goto label_124a20;
            case 0x124A24u: goto label_124a24;
            case 0x124A28u: goto label_124a28;
            case 0x124A2Cu: goto label_124a2c;
            case 0x124A30u: goto label_124a30;
            case 0x124A34u: goto label_124a34;
            case 0x124A38u: goto label_124a38;
            case 0x124A3Cu: goto label_124a3c;
            case 0x124A40u: goto label_124a40;
            case 0x124A44u: goto label_124a44;
            case 0x124A48u: goto label_124a48;
            case 0x124A4Cu: goto label_124a4c;
            case 0x124A50u: goto label_124a50;
            case 0x124A54u: goto label_124a54;
            case 0x124A58u: goto label_124a58;
            case 0x124A5Cu: goto label_124a5c;
            case 0x124A60u: goto label_124a60;
            case 0x124A64u: goto label_124a64;
            case 0x124A68u: goto label_124a68;
            case 0x124A6Cu: goto label_124a6c;
            case 0x124A70u: goto label_124a70;
            case 0x124A74u: goto label_124a74;
            case 0x124A78u: goto label_124a78;
            case 0x124A7Cu: goto label_124a7c;
            case 0x124A80u: goto label_124a80;
            case 0x124A84u: goto label_124a84;
            case 0x124A88u: goto label_124a88;
            case 0x124A8Cu: goto label_124a8c;
            case 0x124A90u: goto label_124a90;
            case 0x124A94u: goto label_124a94;
            case 0x124A98u: goto label_124a98;
            case 0x124A9Cu: goto label_124a9c;
            case 0x124AA0u: goto label_124aa0;
            case 0x124AA4u: goto label_124aa4;
            case 0x124AA8u: goto label_124aa8;
            case 0x124AACu: goto label_124aac;
            case 0x124AB0u: goto label_124ab0;
            case 0x124AB4u: goto label_124ab4;
            case 0x124AB8u: goto label_124ab8;
            case 0x124ABCu: goto label_124abc;
            case 0x124AC0u: goto label_124ac0;
            case 0x124AC4u: goto label_124ac4;
            case 0x124AC8u: goto label_124ac8;
            case 0x124ACCu: goto label_124acc;
            case 0x124AD0u: goto label_124ad0;
            case 0x124AD4u: goto label_124ad4;
            case 0x124AD8u: goto label_124ad8;
            case 0x124ADCu: goto label_124adc;
            case 0x124AE0u: goto label_124ae0;
            case 0x124AE4u: goto label_124ae4;
            case 0x124AE8u: goto label_124ae8;
            case 0x124AECu: goto label_124aec;
            case 0x124AF0u: goto label_124af0;
            case 0x124AF4u: goto label_124af4;
            case 0x124AF8u: goto label_124af8;
            case 0x124AFCu: goto label_124afc;
            case 0x124B00u: goto label_124b00;
            case 0x124B04u: goto label_124b04;
            case 0x124B08u: goto label_124b08;
            case 0x124B0Cu: goto label_124b0c;
            case 0x124B10u: goto label_124b10;
            case 0x124B14u: goto label_124b14;
            case 0x124B18u: goto label_124b18;
            case 0x124B1Cu: goto label_124b1c;
            case 0x124B20u: goto label_124b20;
            case 0x124B24u: goto label_124b24;
            case 0x124B28u: goto label_124b28;
            case 0x124B2Cu: goto label_124b2c;
            case 0x124B30u: goto label_124b30;
            case 0x124B34u: goto label_124b34;
            case 0x124B38u: goto label_124b38;
            case 0x124B3Cu: goto label_124b3c;
            case 0x124B40u: goto label_124b40;
            case 0x124B44u: goto label_124b44;
            case 0x124B48u: goto label_124b48;
            case 0x124B4Cu: goto label_124b4c;
            case 0x124B50u: goto label_124b50;
            case 0x124B54u: goto label_124b54;
            case 0x124B58u: goto label_124b58;
            case 0x124B5Cu: goto label_124b5c;
            case 0x124B60u: goto label_124b60;
            case 0x124B64u: goto label_124b64;
            case 0x124B68u: goto label_124b68;
            case 0x124B6Cu: goto label_124b6c;
            case 0x124B70u: goto label_124b70;
            case 0x124B74u: goto label_124b74;
            case 0x124B78u: goto label_124b78;
            case 0x124B7Cu: goto label_124b7c;
            case 0x124B80u: goto label_124b80;
            case 0x124B84u: goto label_124b84;
            case 0x124B88u: goto label_124b88;
            case 0x124B8Cu: goto label_124b8c;
            case 0x124B90u: goto label_124b90;
            case 0x124B94u: goto label_124b94;
            case 0x124B98u: goto label_124b98;
            case 0x124B9Cu: goto label_124b9c;
            case 0x124BA0u: goto label_124ba0;
            case 0x124BA4u: goto label_124ba4;
            case 0x124BA8u: goto label_124ba8;
            case 0x124BACu: goto label_124bac;
            case 0x124BB0u: goto label_124bb0;
            case 0x124BB4u: goto label_124bb4;
            case 0x124BB8u: goto label_124bb8;
            case 0x124BBCu: goto label_124bbc;
            case 0x124BC0u: goto label_124bc0;
            case 0x124BC4u: goto label_124bc4;
            case 0x124BC8u: goto label_124bc8;
            case 0x124BCCu: goto label_124bcc;
            case 0x124BD0u: goto label_124bd0;
            case 0x124BD4u: goto label_124bd4;
            case 0x124BD8u: goto label_124bd8;
            case 0x124BDCu: goto label_124bdc;
            case 0x124BE0u: goto label_124be0;
            case 0x124BE4u: goto label_124be4;
            case 0x124BE8u: goto label_124be8;
            case 0x124BECu: goto label_124bec;
            case 0x124BF0u: goto label_124bf0;
            case 0x124BF4u: goto label_124bf4;
            case 0x124BF8u: goto label_124bf8;
            case 0x124BFCu: goto label_124bfc;
            case 0x124C00u: goto label_124c00;
            case 0x124C04u: goto label_124c04;
            case 0x124C08u: goto label_124c08;
            case 0x124C0Cu: goto label_124c0c;
            case 0x124C10u: goto label_124c10;
            case 0x124C14u: goto label_124c14;
            case 0x124C18u: goto label_124c18;
            case 0x124C1Cu: goto label_124c1c;
            case 0x124C20u: goto label_124c20;
            case 0x124C24u: goto label_124c24;
            case 0x124C28u: goto label_124c28;
            case 0x124C2Cu: goto label_124c2c;
            case 0x124C30u: goto label_124c30;
            case 0x124C34u: goto label_124c34;
            case 0x124C38u: goto label_124c38;
            case 0x124C3Cu: goto label_124c3c;
            case 0x124C40u: goto label_124c40;
            case 0x124C44u: goto label_124c44;
            case 0x124C48u: goto label_124c48;
            case 0x124C4Cu: goto label_124c4c;
            case 0x124C50u: goto label_124c50;
            case 0x124C54u: goto label_124c54;
            case 0x124C58u: goto label_124c58;
            case 0x124C5Cu: goto label_124c5c;
            case 0x124C60u: goto label_124c60;
            case 0x124C64u: goto label_124c64;
            case 0x124C68u: goto label_124c68;
            case 0x124C6Cu: goto label_124c6c;
            case 0x124C70u: goto label_124c70;
            case 0x124C74u: goto label_124c74;
            case 0x124C78u: goto label_124c78;
            case 0x124C7Cu: goto label_124c7c;
            case 0x124C80u: goto label_124c80;
            case 0x124C84u: goto label_124c84;
            case 0x124C88u: goto label_124c88;
            case 0x124C8Cu: goto label_124c8c;
            case 0x124C90u: goto label_124c90;
            case 0x124C94u: goto label_124c94;
            case 0x124C98u: goto label_124c98;
            case 0x124C9Cu: goto label_124c9c;
            case 0x124CA0u: goto label_124ca0;
            case 0x124CA4u: goto label_124ca4;
            case 0x124CA8u: goto label_124ca8;
            case 0x124CACu: goto label_124cac;
            case 0x124CB0u: goto label_124cb0;
            case 0x124CB4u: goto label_124cb4;
            case 0x124CB8u: goto label_124cb8;
            case 0x124CBCu: goto label_124cbc;
            case 0x124CC0u: goto label_124cc0;
            case 0x124CC4u: goto label_124cc4;
            case 0x124CC8u: goto label_124cc8;
            case 0x124CCCu: goto label_124ccc;
            case 0x124CD0u: goto label_124cd0;
            case 0x124CD4u: goto label_124cd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124CD4u;
label_124cd4:
    // 0x124cd4: 0x0
    ctx->pc = 0x124cd4u;
    // NOP
}
