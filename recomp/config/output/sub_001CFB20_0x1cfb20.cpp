#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CFB20
// Address: 0x1cfb20 - 0x1d0030
void sub_001CFB20_0x1cfb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1cfb20u;

label_1cfb20:
    // 0x1cfb20: 0x3c0b0034
    ctx->pc = 0x1cfb20u;
    SET_GPR_U32(ctx, 11, ((uint32_t)52 << 16));
    // 0x1cfb24: 0x3c0a0034
    ctx->pc = 0x1cfb24u;
    SET_GPR_U32(ctx, 10, ((uint32_t)52 << 16));
    // 0x1cfb28: 0x3c090034
    ctx->pc = 0x1cfb28u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
    // 0x1cfb2c: 0x256b1430
    ctx->pc = 0x1cfb2cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 5168));
    // 0x1cfb30: 0x254a1500
    ctx->pc = 0x1cfb30u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 5376));
    // 0x1cfb34: 0x252913f0
    ctx->pc = 0x1cfb34u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5104));
    // 0x1cfb38: 0x402d
    ctx->pc = 0x1cfb38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb3c: 0x24070001
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_1cfb40:
    // 0x1cfb40: 0x91630000
    ctx->pc = 0x1cfb40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cfb44: 0x1060000b
    ctx->pc = 0x1CFB44u;
    {
        const bool branch_taken_0x1cfb44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfb44) {
            ctx->pc = 0x1CFB74u;
            goto label_1cfb74;
        }
    }
    ctx->pc = 0x1CFB4Cu;
    // 0x1cfb4c: 0x91630008
    ctx->pc = 0x1cfb4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1cfb50: 0x14670008
    ctx->pc = 0x1CFB50u;
    {
        const bool branch_taken_0x1cfb50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        if (branch_taken_0x1cfb50) {
            ctx->pc = 0x1CFB74u;
            goto label_1cfb74;
        }
    }
    ctx->pc = 0x1CFB58u;
    // 0x1cfb58: 0x91630003
    ctx->pc = 0x1cfb58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1cfb5c: 0x30630004
    ctx->pc = 0x1cfb5cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x1cfb60: 0x10600004
    ctx->pc = 0x1CFB60u;
    {
        const bool branch_taken_0x1cfb60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfb60) {
            ctx->pc = 0x1CFB74u;
            goto label_1cfb74;
        }
    }
    ctx->pc = 0x1CFB68u;
    // 0x1cfb68: 0x9563000a
    ctx->pc = 0x1cfb68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x1cfb6c: 0xa4830000
    ctx->pc = 0x1cfb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cfb70: 0x24840002
    ctx->pc = 0x1cfb70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_1cfb74:
    // 0x1cfb74: 0x91430000
    ctx->pc = 0x1cfb74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cfb78: 0x1060000c
    ctx->pc = 0x1CFB78u;
    {
        const bool branch_taken_0x1cfb78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFB7Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), 4));
        if (branch_taken_0x1cfb78) {
            ctx->pc = 0x1CFBACu;
            goto label_1cfbac;
        }
    }
    ctx->pc = 0x1CFB80u;
    // 0x1cfb80: 0x91430010
    ctx->pc = 0x1cfb80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1cfb84: 0x14670008
    ctx->pc = 0x1CFB84u;
    {
        const bool branch_taken_0x1cfb84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        if (branch_taken_0x1cfb84) {
            ctx->pc = 0x1CFBA8u;
            goto label_1cfba8;
        }
    }
    ctx->pc = 0x1CFB8Cu;
    // 0x1cfb8c: 0x91630003
    ctx->pc = 0x1cfb8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1cfb90: 0x30630004
    ctx->pc = 0x1cfb90u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 4));
    // 0x1cfb94: 0x10600004
    ctx->pc = 0x1CFB94u;
    {
        const bool branch_taken_0x1cfb94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfb94) {
            ctx->pc = 0x1CFBA8u;
            goto label_1cfba8;
        }
    }
    ctx->pc = 0x1CFB9Cu;
    // 0x1cfb9c: 0x95430012
    ctx->pc = 0x1cfb9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x1cfba0: 0xa4a30000
    ctx->pc = 0x1cfba0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cfba4: 0x24a50002
    ctx->pc = 0x1cfba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_1cfba8:
    // 0x1cfba8: 0x29010004
    ctx->pc = 0x1cfba8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), 4));
label_1cfbac:
    // 0x1cfbac: 0x1020000a
    ctx->pc = 0x1CFBACu;
    {
        const bool branch_taken_0x1cfbac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfbac) {
            ctx->pc = 0x1CFBD8u;
            goto label_1cfbd8;
        }
    }
    ctx->pc = 0x1CFBB4u;
    // 0x1cfbb4: 0x91230000
    ctx->pc = 0x1cfbb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cfbb8: 0x10600006
    ctx->pc = 0x1CFBB8u;
    {
        const bool branch_taken_0x1cfbb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cfbb8) {
            ctx->pc = 0x1CFBD4u;
            goto label_1cfbd4;
        }
    }
    ctx->pc = 0x1CFBC0u;
    // 0x1cfbc0: 0x95230008
    ctx->pc = 0x1cfbc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cfbc4: 0xa4c30000
    ctx->pc = 0x1cfbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cfbc8: 0x9523000c
    ctx->pc = 0x1cfbc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1cfbcc: 0xa4c30002
    ctx->pc = 0x1cfbccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cfbd0: 0x24c60004
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
label_1cfbd4:
    // 0x1cfbd4: 0x25290010
    ctx->pc = 0x1cfbd4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
label_1cfbd8:
    // 0x1cfbd8: 0x25080001
    ctx->pc = 0x1cfbd8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cfbdc: 0x256b000c
    ctx->pc = 0x1cfbdcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 12));
    // 0x1cfbe0: 0x29030010
    ctx->pc = 0x1cfbe0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 16));
    // 0x1cfbe4: 0x1460ffd6
    ctx->pc = 0x1CFBE4u;
    {
        const bool branch_taken_0x1cfbe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFBE8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 20));
        if (branch_taken_0x1cfbe4) {
            ctx->pc = 0x1CFB40u;
            goto label_1cfb40;
        }
    }
    ctx->pc = 0x1CFBECu;
    // 0x1cfbec: 0x3e00008
    ctx->pc = 0x1CFBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFB20u: goto label_1cfb20;
            case 0x1CFB40u: goto label_1cfb40;
            case 0x1CFB74u: goto label_1cfb74;
            case 0x1CFBA8u: goto label_1cfba8;
            case 0x1CFBACu: goto label_1cfbac;
            case 0x1CFBD4u: goto label_1cfbd4;
            case 0x1CFBD8u: goto label_1cfbd8;
            case 0x1CFC5Cu: goto label_1cfc5c;
            case 0x1CFC98u: goto label_1cfc98;
            case 0x1CFCBCu: goto label_1cfcbc;
            case 0x1CFCE0u: goto label_1cfce0;
            case 0x1CFCFCu: goto label_1cfcfc;
            case 0x1CFD00u: goto label_1cfd00;
            case 0x1CFD0Cu: goto label_1cfd0c;
            case 0x1CFD18u: goto label_1cfd18;
            case 0x1CFD34u: goto label_1cfd34;
            case 0x1CFD38u: goto label_1cfd38;
            case 0x1CFD44u: goto label_1cfd44;
            case 0x1CFD54u: goto label_1cfd54;
            case 0x1CFD84u: goto label_1cfd84;
            case 0x1CFDA4u: goto label_1cfda4;
            case 0x1CFDBCu: goto label_1cfdbc;
            case 0x1CFDE8u: goto label_1cfde8;
            case 0x1CFDECu: goto label_1cfdec;
            case 0x1CFDF8u: goto label_1cfdf8;
            case 0x1CFE08u: goto label_1cfe08;
            case 0x1CFE1Cu: goto label_1cfe1c;
            case 0x1CFE20u: goto label_1cfe20;
            case 0x1CFE44u: goto label_1cfe44;
            case 0x1CFE60u: goto label_1cfe60;
            case 0x1CFE78u: goto label_1cfe78;
            case 0x1CFEB0u: goto label_1cfeb0;
            case 0x1CFEF0u: goto label_1cfef0;
            case 0x1CFF34u: goto label_1cff34;
            case 0x1CFF68u: goto label_1cff68;
            case 0x1CFF78u: goto label_1cff78;
            case 0x1CFF8Cu: goto label_1cff8c;
            case 0x1CFFC8u: goto label_1cffc8;
            case 0x1CFFE8u: goto label_1cffe8;
            case 0x1CFFF8u: goto label_1cfff8;
            case 0x1D0010u: goto label_1d0010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CFBF4u;
    // 0x1cfbf4: 0x0
    ctx->pc = 0x1cfbf4u;
    // NOP
    // 0x1cfbf8: 0x0
    ctx->pc = 0x1cfbf8u;
    // NOP
    // 0x1cfbfc: 0x0
    ctx->pc = 0x1cfbfcu;
    // NOP
    // 0x1cfc00: 0x27bdff50
    ctx->pc = 0x1cfc00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cfc04: 0x240500ff
    ctx->pc = 0x1cfc04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cfc08: 0xffbf0050
    ctx->pc = 0x1cfc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1cfc0c: 0x27a40090
    ctx->pc = 0x1cfc0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cfc10: 0x7fb40040
    ctx->pc = 0x1cfc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1cfc14: 0x24060020
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cfc18: 0x7fb30030
    ctx->pc = 0x1cfc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cfc1c: 0x7fb20020
    ctx->pc = 0x1cfc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cfc20: 0x7fb10010
    ctx->pc = 0x1cfc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cfc24: 0xc041f1a
    ctx->pc = 0x1CFC24u;
    SET_GPR_U32(ctx, 31, 0x1CFC2Cu);
    ctx->pc = 0x1CFC28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC2Cu; }
    }
    if (ctx->pc != 0x1CFC2Cu) { return; }
    ctx->pc = 0x1CFC2Cu;
    // 0x1cfc2c: 0x27a40070
    ctx->pc = 0x1cfc2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cfc30: 0x240500ff
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cfc34: 0xc041f1a
    ctx->pc = 0x1CFC34u;
    SET_GPR_U32(ctx, 31, 0x1CFC3Cu);
    ctx->pc = 0x1CFC38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC3Cu; }
    }
    if (ctx->pc != 0x1CFC3Cu) { return; }
    ctx->pc = 0x1CFC3Cu;
    // 0x1cfc3c: 0x27a40060
    ctx->pc = 0x1cfc3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cfc40: 0x240500ff
    ctx->pc = 0x1cfc40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cfc44: 0xc041f1a
    ctx->pc = 0x1CFC44u;
    SET_GPR_U32(ctx, 31, 0x1CFC4Cu);
    ctx->pc = 0x1CFC48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC4Cu; }
    }
    if (ctx->pc != 0x1CFC4Cu) { return; }
    ctx->pc = 0x1CFC4Cu;
    // 0x1cfc4c: 0x27a40090
    ctx->pc = 0x1cfc4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cfc50: 0x27a50070
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cfc54: 0xc073ec8
    ctx->pc = 0x1CFC54u;
    SET_GPR_U32(ctx, 31, 0x1CFC5Cu);
    ctx->pc = 0x1CFC58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1CFB20u;
    goto label_1cfb20;
    ctx->pc = 0x1CFC5Cu;
label_1cfc5c:
    // 0x1cfc5c: 0x3c01004c
    ctx->pc = 0x1cfc5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1cfc60: 0x24020001
    ctx->pc = 0x1cfc60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfc64: 0x8023adf8
    ctx->pc = 0x1cfc64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x1cfc68: 0x1062006c
    ctx->pc = 0x1CFC68u;
    {
        const bool branch_taken_0x1cfc68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CFC6Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc68) {
            ctx->pc = 0x1CFE1Cu;
            goto label_1cfe1c;
        }
    }
    ctx->pc = 0x1CFC70u;
    // 0x1cfc70: 0x202d
    ctx->pc = 0x1cfc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc74: 0x3c0a0038
    ctx->pc = 0x1cfc74u;
    SET_GPR_U32(ctx, 10, ((uint32_t)56 << 16));
    // 0x1cfc78: 0x3c09004c
    ctx->pc = 0x1cfc78u;
    SET_GPR_U32(ctx, 9, ((uint32_t)76 << 16));
    // 0x1cfc7c: 0x3c02004c
    ctx->pc = 0x1cfc7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1cfc80: 0x340bffff
    ctx->pc = 0x1cfc80u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1cfc84: 0x2408ffff
    ctx->pc = 0x1cfc84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfc88: 0x254a7e90
    ctx->pc = 0x1cfc88u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 32400));
    // 0x1cfc8c: 0x25299680
    ctx->pc = 0x1cfc8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294940288));
    // 0x1cfc90: 0x24429a80
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x1cfc94: 0x41840
    ctx->pc = 0x1cfc94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_1cfc98:
    // 0x1cfc98: 0x431821
    ctx->pc = 0x1cfc98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cfc9c: 0x94630da0
    ctx->pc = 0x1cfc9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x1cfca0: 0x106b002c
    ctx->pc = 0x1CFCA0u;
    {
        const bool branch_taken_0x1cfca0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 11));
        ctx->pc = 0x1CFCA4u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x1cfca0) {
            ctx->pc = 0x1CFD54u;
            goto label_1cfd54;
        }
    }
    ctx->pc = 0x1CFCA8u;
    // 0x1cfca8: 0x1452821
    ctx->pc = 0x1cfca8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1cfcac: 0x419c0
    ctx->pc = 0x1cfcacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1cfcb0: 0x8ca60000
    ctx->pc = 0x1cfcb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cfcb4: 0x1231821
    ctx->pc = 0x1cfcb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1cfcb8: 0x282d
    ctx->pc = 0x1cfcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfcbc:
    // 0x1cfcbc: 0x8c670000
    ctx->pc = 0x1cfcbcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfcc0: 0x10e80020
    ctx->pc = 0x1CFCC0u;
    {
        const bool branch_taken_0x1cfcc0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 8));
        ctx->pc = 0x1CFCC4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1cfcc0) {
            ctx->pc = 0x1CFD44u;
            goto label_1cfd44;
        }
    }
    ctx->pc = 0x1CFCC8u;
    // 0x1cfcc8: 0x73900
    ctx->pc = 0x1cfcc8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1cfccc: 0xc73821
    ctx->pc = 0x1cfcccu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1cfcd0: 0x90ee0001
    ctx->pc = 0x1cfcd0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1cfcd4: 0x90ed0000
    ctx->pc = 0x1cfcd4u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cfcd8: 0x10000009
    ctx->pc = 0x1CFCD8u;
    {
        const bool branch_taken_0x1cfcd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFCDCu;
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcd8) {
            ctx->pc = 0x1CFD00u;
            goto label_1cfd00;
        }
    }
    ctx->pc = 0x1CFCE0u;
label_1cfce0:
    // 0x1cfce0: 0xfd3821
    ctx->pc = 0x1cfce0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1cfce4: 0x24ec0090
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 7), 144));
    // 0x1cfce8: 0x95870000
    ctx->pc = 0x1cfce8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1cfcec: 0x15a70003
    ctx->pc = 0x1CFCECu;
    {
        const bool branch_taken_0x1cfcec = (GPR_U32(ctx, 13) != GPR_U32(ctx, 7));
        if (branch_taken_0x1cfcec) {
            ctx->pc = 0x1CFCFCu;
            goto label_1cfcfc;
        }
    }
    ctx->pc = 0x1CFCF4u;
    // 0x1cfcf4: 0x10000005
    ctx->pc = 0x1CFCF4u;
    {
        const bool branch_taken_0x1cfcf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFCF8u;
        WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 11));
        if (branch_taken_0x1cfcf4) {
            ctx->pc = 0x1CFD0Cu;
            goto label_1cfd0c;
        }
    }
    ctx->pc = 0x1CFCFCu;
label_1cfcfc:
    // 0x1cfcfc: 0x25ef0001
    ctx->pc = 0x1cfcfcu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
label_1cfd00:
    // 0x1cfd00: 0x29e70010
    ctx->pc = 0x1cfd00u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 15), 16));
    // 0x1cfd04: 0x14e0fff6
    ctx->pc = 0x1CFD04u;
    {
        const bool branch_taken_0x1cfd04 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFD08u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 15), 1));
        if (branch_taken_0x1cfd04) {
            ctx->pc = 0x1CFCE0u;
            goto label_1cfce0;
        }
    }
    ctx->pc = 0x1CFD0Cu;
label_1cfd0c:
    // 0x1cfd0c: 0x31ceffff
    ctx->pc = 0x1cfd0cu;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 14), 65535));
    // 0x1cfd10: 0x10000009
    ctx->pc = 0x1CFD10u;
    {
        const bool branch_taken_0x1cfd10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFD14u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd10) {
            ctx->pc = 0x1CFD38u;
            goto label_1cfd38;
        }
    }
    ctx->pc = 0x1CFD18u;
label_1cfd18:
    // 0x1cfd18: 0xfd3821
    ctx->pc = 0x1cfd18u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1cfd1c: 0x24ed0070
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 7), 112));
    // 0x1cfd20: 0x95a70000
    ctx->pc = 0x1cfd20u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1cfd24: 0x15c70003
    ctx->pc = 0x1CFD24u;
    {
        const bool branch_taken_0x1cfd24 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 7));
        if (branch_taken_0x1cfd24) {
            ctx->pc = 0x1CFD34u;
            goto label_1cfd34;
        }
    }
    ctx->pc = 0x1CFD2Cu;
    // 0x1cfd2c: 0x10000005
    ctx->pc = 0x1CFD2Cu;
    {
        const bool branch_taken_0x1cfd2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFD30u;
        WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 11));
        if (branch_taken_0x1cfd2c) {
            ctx->pc = 0x1CFD44u;
            goto label_1cfd44;
        }
    }
    ctx->pc = 0x1CFD34u;
label_1cfd34:
    // 0x1cfd34: 0x258c0001
    ctx->pc = 0x1cfd34u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
label_1cfd38:
    // 0x1cfd38: 0x29870010
    ctx->pc = 0x1cfd38u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 12), 16));
    // 0x1cfd3c: 0x14e0fff6
    ctx->pc = 0x1CFD3Cu;
    {
        const bool branch_taken_0x1cfd3c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFD40u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 12), 1));
        if (branch_taken_0x1cfd3c) {
            ctx->pc = 0x1CFD18u;
            goto label_1cfd18;
        }
    }
    ctx->pc = 0x1CFD44u;
label_1cfd44:
    // 0x1cfd44: 0x24a50001
    ctx->pc = 0x1cfd44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cfd48: 0x28a70020
    ctx->pc = 0x1cfd48u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 5), 32));
    // 0x1cfd4c: 0x14e0ffdb
    ctx->pc = 0x1CFD4Cu;
    {
        const bool branch_taken_0x1cfd4c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cfd4c) {
            ctx->pc = 0x1CFCBCu;
            goto label_1cfcbc;
        }
    }
    ctx->pc = 0x1CFD54u;
label_1cfd54:
    // 0x1cfd54: 0x24840001
    ctx->pc = 0x1cfd54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cfd58: 0x28830002
    ctx->pc = 0x1cfd58u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
    // 0x1cfd5c: 0x1460ffce
    ctx->pc = 0x1CFD5Cu;
    {
        const bool branch_taken_0x1cfd5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFD60u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1cfd5c) {
            ctx->pc = 0x1CFC98u;
            goto label_1cfc98;
        }
    }
    ctx->pc = 0x1CFD64u;
    // 0x1cfd64: 0x502d
    ctx->pc = 0x1cfd64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfd68: 0x3c04004c
    ctx->pc = 0x1cfd68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1cfd6c: 0x3c06004c
    ctx->pc = 0x1cfd6cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)76 << 16));
    // 0x1cfd70: 0x3405ffff
    ctx->pc = 0x1cfd70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1cfd74: 0x2403ffff
    ctx->pc = 0x1cfd74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfd78: 0x24849680
    ctx->pc = 0x1cfd78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940288));
    // 0x1cfd7c: 0x24c69a80
    ctx->pc = 0x1cfd7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294941312));
    // 0x1cfd80: 0xa1040
    ctx->pc = 0x1cfd80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 1));
label_1cfd84:
    // 0x1cfd84: 0xc21021
    ctx->pc = 0x1cfd84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cfd88: 0x94420da0
    ctx->pc = 0x1cfd88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x1cfd8c: 0x1045001e
    ctx->pc = 0x1CFD8Cu;
    {
        const bool branch_taken_0x1cfd8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1CFD90u;
        SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1cfd8c) {
            ctx->pc = 0x1CFE08u;
            goto label_1cfe08;
        }
    }
    ctx->pc = 0x1CFD94u;
    // 0x1cfd94: 0x402d
    ctx->pc = 0x1cfd94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfd98: 0xa11c0
    ctx->pc = 0x1cfd98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 7));
    // 0x1cfd9c: 0x821021
    ctx->pc = 0x1cfd9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cfda0: 0x24490100
    ctx->pc = 0x1cfda0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 256));
label_1cfda4:
    // 0x1cfda4: 0x8d220000
    ctx->pc = 0x1cfda4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cfda8: 0x10430013
    ctx->pc = 0x1CFDA8u;
    {
        const bool branch_taken_0x1cfda8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFDACu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x1cfda8) {
            ctx->pc = 0x1CFDF8u;
            goto label_1cfdf8;
        }
    }
    ctx->pc = 0x1CFDB0u;
    // 0x1cfdb0: 0x304dffff
    ctx->pc = 0x1cfdb0u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1cfdb4: 0x1000000d
    ctx->pc = 0x1CFDB4u;
    {
        const bool branch_taken_0x1cfdb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFDB8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cfdb4) {
            ctx->pc = 0x1CFDECu;
            goto label_1cfdec;
        }
    }
    ctx->pc = 0x1CFDBCu;
label_1cfdbc:
    // 0x1cfdbc: 0x5d1021
    ctx->pc = 0x1cfdbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cfdc0: 0x244b0060
    ctx->pc = 0x1cfdc0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 96));
    // 0x1cfdc4: 0x95620000
    ctx->pc = 0x1cfdc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cfdc8: 0x15c20007
    ctx->pc = 0x1CFDC8u;
    {
        const bool branch_taken_0x1cfdc8 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 2));
        if (branch_taken_0x1cfdc8) {
            ctx->pc = 0x1CFDE8u;
            goto label_1cfde8;
        }
    }
    ctx->pc = 0x1CFDD0u;
    // 0x1cfdd0: 0x95620002
    ctx->pc = 0x1cfdd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1cfdd4: 0x15a20004
    ctx->pc = 0x1CFDD4u;
    {
        const bool branch_taken_0x1cfdd4 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CFDD8u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 11), 2));
        if (branch_taken_0x1cfdd4) {
            ctx->pc = 0x1CFDE8u;
            goto label_1cfde8;
        }
    }
    ctx->pc = 0x1CFDDCu;
    // 0x1cfddc: 0xa5650000
    ctx->pc = 0x1cfddcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1cfde0: 0x10000005
    ctx->pc = 0x1CFDE0u;
    {
        const bool branch_taken_0x1cfde0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CFDE4u;
        WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1cfde0) {
            ctx->pc = 0x1CFDF8u;
            goto label_1cfdf8;
        }
    }
    ctx->pc = 0x1CFDE8u;
label_1cfde8:
    // 0x1cfde8: 0x24e70001
    ctx->pc = 0x1cfde8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1cfdec:
    // 0x1cfdec: 0x28e20004
    ctx->pc = 0x1cfdecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 4));
    // 0x1cfdf0: 0x1440fff2
    ctx->pc = 0x1CFDF0u;
    {
        const bool branch_taken_0x1cfdf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFDF4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1cfdf0) {
            ctx->pc = 0x1CFDBCu;
            goto label_1cfdbc;
        }
    }
    ctx->pc = 0x1CFDF8u;
label_1cfdf8:
    // 0x1cfdf8: 0x25080001
    ctx->pc = 0x1cfdf8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cfdfc: 0x29020020
    ctx->pc = 0x1cfdfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 32));
    // 0x1cfe00: 0x1440ffe8
    ctx->pc = 0x1CFE00u;
    {
        const bool branch_taken_0x1cfe00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cfe00) {
            ctx->pc = 0x1CFDA4u;
            goto label_1cfda4;
        }
    }
    ctx->pc = 0x1CFE08u;
label_1cfe08:
    // 0x1cfe08: 0x254a0001
    ctx->pc = 0x1cfe08u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cfe0c: 0x29420002
    ctx->pc = 0x1cfe0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 2));
    // 0x1cfe10: 0x1440ffdc
    ctx->pc = 0x1CFE10u;
    {
        const bool branch_taken_0x1cfe10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFE14u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x1cfe10) {
            ctx->pc = 0x1CFD84u;
            goto label_1cfd84;
        }
    }
    ctx->pc = 0x1CFE18u;
    // 0x1cfe18: 0x802d
    ctx->pc = 0x1cfe18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe1c:
    // 0x1cfe1c: 0x108840
    ctx->pc = 0x1cfe1cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 1));
label_1cfe20:
    // 0x1cfe20: 0x3402ffff
    ctx->pc = 0x1cfe20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1cfe24: 0x23d1821
    ctx->pc = 0x1cfe24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1cfe28: 0x94660090
    ctx->pc = 0x1cfe28u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1cfe2c: 0x10c20005
    ctx->pc = 0x1CFE2Cu;
    {
        const bool branch_taken_0x1cfe2c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CFE30u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        if (branch_taken_0x1cfe2c) {
            ctx->pc = 0x1CFE44u;
            goto label_1cfe44;
        }
    }
    ctx->pc = 0x1CFE34u;
    // 0x1cfe34: 0x24040004
    ctx->pc = 0x1cfe34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfe38: 0xc073b48
    ctx->pc = 0x1CFE38u;
    SET_GPR_U32(ctx, 31, 0x1CFE40u);
    ctx->pc = 0x1CFE3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CED20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CED20_0x1ced20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE40u; }
    }
    if (ctx->pc != 0x1CFE40u) { return; }
    ctx->pc = 0x1CFE40u;
    // 0x1cfe40: 0x23d1821
    ctx->pc = 0x1cfe40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1cfe44:
    // 0x1cfe44: 0x3402ffff
    ctx->pc = 0x1cfe44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1cfe48: 0x94630070
    ctx->pc = 0x1cfe48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1cfe4c: 0x10620004
    ctx->pc = 0x1CFE4Cu;
    {
        const bool branch_taken_0x1cfe4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CFE50u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x1cfe4c) {
            ctx->pc = 0x1CFE60u;
            goto label_1cfe60;
        }
    }
    ctx->pc = 0x1CFE54u;
    // 0x1cfe54: 0x24040004
    ctx->pc = 0x1cfe54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cfe58: 0xc073a2c
    ctx->pc = 0x1CFE58u;
    SET_GPR_U32(ctx, 31, 0x1CFE60u);
    ctx->pc = 0x1CFE5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CE8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE8B0_0x1ce8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE60u; }
    }
    if (ctx->pc != 0x1CFE60u) { return; }
    ctx->pc = 0x1CFE60u;
label_1cfe60:
    // 0x1cfe60: 0x26100001
    ctx->pc = 0x1cfe60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cfe64: 0x2a020010
    ctx->pc = 0x1cfe64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 16));
    // 0x1cfe68: 0x1440ffed
    ctx->pc = 0x1CFE68u;
    {
        const bool branch_taken_0x1cfe68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFE6Cu;
        SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1cfe68) {
            ctx->pc = 0x1CFE20u;
            goto label_1cfe20;
        }
    }
    ctx->pc = 0x1CFE70u;
    // 0x1cfe70: 0x802d
    ctx->pc = 0x1cfe70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe74: 0x101880
    ctx->pc = 0x1cfe74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_1cfe78:
    // 0x1cfe78: 0x3402ffff
    ctx->pc = 0x1cfe78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1cfe7c: 0x7d1821
    ctx->pc = 0x1cfe7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1cfe80: 0x24710060
    ctx->pc = 0x1cfe80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 96));
    // 0x1cfe84: 0x96240000
    ctx->pc = 0x1cfe84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfe88: 0x10820009
    ctx->pc = 0x1CFE88u;
    {
        const bool branch_taken_0x1cfe88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x1cfe88) {
            ctx->pc = 0x1CFEB0u;
            goto label_1cfeb0;
        }
    }
    ctx->pc = 0x1CFE90u;
    // 0x1cfe90: 0xc073dd0
    ctx->pc = 0x1CFE90u;
    SET_GPR_U32(ctx, 31, 0x1CFE98u);
    ctx->pc = 0x1CFE94u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->pc = 0x1CF740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF740_0x1cf740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE98u; }
    }
    if (ctx->pc != 0x1CFE98u) { return; }
    ctx->pc = 0x1CFE98u;
    // 0x1cfe98: 0x96230000
    ctx->pc = 0x1cfe98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfe9c: 0x3c02004c
    ctx->pc = 0x1cfe9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1cfea0: 0x2442aeb0
    ctx->pc = 0x1cfea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294946480));
    // 0x1cfea4: 0x240400ff
    ctx->pc = 0x1cfea4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cfea8: 0x431021
    ctx->pc = 0x1cfea8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cfeac: 0xa0440000
    ctx->pc = 0x1cfeacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_1cfeb0:
    // 0x1cfeb0: 0x26100001
    ctx->pc = 0x1cfeb0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cfeb4: 0x2a020004
    ctx->pc = 0x1cfeb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1cfeb8: 0x1440ffef
    ctx->pc = 0x1CFEB8u;
    {
        const bool branch_taken_0x1cfeb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CFEBCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x1cfeb8) {
            ctx->pc = 0x1CFE78u;
            goto label_1cfe78;
        }
    }
    ctx->pc = 0x1CFEC0u;
    // 0x1cfec0: 0xc06372c
    ctx->pc = 0x1CFEC0u;
    SET_GPR_U32(ctx, 31, 0x1CFEC8u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEC8u; }
    }
    if (ctx->pc != 0x1CFEC8u) { return; }
    ctx->pc = 0x1CFEC8u;
    // 0x1cfec8: 0x3c01004c
    ctx->pc = 0x1cfec8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
    // 0x1cfecc: 0x24030001
    ctx->pc = 0x1cfeccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfed0: 0x8024adf8
    ctx->pc = 0x1cfed0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946296)));
    // 0x1cfed4: 0x1083004e
    ctx->pc = 0x1CFED4u;
    {
        const bool branch_taken_0x1cfed4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CFED8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4608));
        if (branch_taken_0x1cfed4) {
            ctx->pc = 0x1D0010u;
            goto label_1d0010;
        }
    }
    ctx->pc = 0x1CFEDCu;
    // 0x1cfedc: 0xc073470
    ctx->pc = 0x1CFEDCu;
    SET_GPR_U32(ctx, 31, 0x1CFEE4u);
    ctx->pc = 0x1CD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD1C0_0x1cd1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEE4u; }
    }
    if (ctx->pc != 0x1CFEE4u) { return; }
    ctx->pc = 0x1CFEE4u;
    // 0x1cfee4: 0xc0740e8
    ctx->pc = 0x1CFEE4u;
    SET_GPR_U32(ctx, 31, 0x1CFEECu);
    ctx->pc = 0x1D03A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D03A0_0x1d03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEECu; }
    }
    if (ctx->pc != 0x1CFEECu) { return; }
    ctx->pc = 0x1CFEECu;
    // 0x1cfeec: 0x982d
    ctx->pc = 0x1cfeecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfef0:
    // 0x1cfef0: 0x3c02004c
    ctx->pc = 0x1cfef0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1cfef4: 0x131840
    ctx->pc = 0x1cfef4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 1));
    // 0x1cfef8: 0x24429a80
    ctx->pc = 0x1cfef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x1cfefc: 0x431821
    ctx->pc = 0x1cfefcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cff00: 0x94630da0
    ctx->pc = 0x1cff00u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x1cff04: 0x3402ffff
    ctx->pc = 0x1cff04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1cff08: 0x1062001b
    ctx->pc = 0x1CFF08u;
    {
        const bool branch_taken_0x1cff08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CFF0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x1cff08) {
            ctx->pc = 0x1CFF78u;
            goto label_1cff78;
        }
    }
    ctx->pc = 0x1CFF10u;
    // 0x1cff10: 0x318c0
    ctx->pc = 0x1cff10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cff14: 0x24427e90
    ctx->pc = 0x1cff14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32400));
    // 0x1cff18: 0x802d
    ctx->pc = 0x1cff18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff1c: 0x431021
    ctx->pc = 0x1cff1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cff20: 0x8c520000
    ctx->pc = 0x1cff20u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff24: 0x1319c0
    ctx->pc = 0x1cff24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 7));
    // 0x1cff28: 0x3c02004c
    ctx->pc = 0x1cff28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1cff2c: 0x24429680
    ctx->pc = 0x1cff2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940288));
    // 0x1cff30: 0x438821
    ctx->pc = 0x1cff30u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cff34:
    // 0x1cff34: 0x8e230000
    ctx->pc = 0x1cff34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cff38: 0x2402ffff
    ctx->pc = 0x1cff38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff3c: 0x1062000a
    ctx->pc = 0x1CFF3Cu;
    {
        const bool branch_taken_0x1cff3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CFF40u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1cff3c) {
            ctx->pc = 0x1CFF68u;
            goto label_1cff68;
        }
    }
    ctx->pc = 0x1CFF44u;
    // 0x1cff44: 0x31100
    ctx->pc = 0x1cff44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cff48: 0x202d
    ctx->pc = 0x1cff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff4c: 0x2421821
    ctx->pc = 0x1cff4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cff50: 0x90650000
    ctx->pc = 0x1cff50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cff54: 0x3c028000
    ctx->pc = 0x1cff54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1cff58: 0x90660001
    ctx->pc = 0x1cff58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1cff5c: 0x90680004
    ctx->pc = 0x1cff5cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cff60: 0xc073c24
    ctx->pc = 0x1CFF60u;
    SET_GPR_U32(ctx, 31, 0x1CFF68u);
    ctx->pc = 0x1CFF64u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1CF090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF090_0x1cf090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF68u; }
    }
    if (ctx->pc != 0x1CFF68u) { return; }
    ctx->pc = 0x1CFF68u;
label_1cff68:
    // 0x1cff68: 0x26100001
    ctx->pc = 0x1cff68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cff6c: 0x2a020020
    ctx->pc = 0x1cff6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
    // 0x1cff70: 0x1440fff0
    ctx->pc = 0x1CFF70u;
    {
        const bool branch_taken_0x1cff70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cff70) {
            ctx->pc = 0x1CFF34u;
            goto label_1cff34;
        }
    }
    ctx->pc = 0x1CFF78u;
label_1cff78:
    // 0x1cff78: 0x26730001
    ctx->pc = 0x1cff78u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cff7c: 0x2a620002
    ctx->pc = 0x1cff7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 2));
    // 0x1cff80: 0x1440ffdb
    ctx->pc = 0x1CFF80u;
    {
        const bool branch_taken_0x1cff80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cff80) {
            ctx->pc = 0x1CFEF0u;
            goto label_1cfef0;
        }
    }
    ctx->pc = 0x1CFF88u;
    // 0x1cff88: 0x982d
    ctx->pc = 0x1cff88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff8c:
    // 0x1cff8c: 0x3c02004c
    ctx->pc = 0x1cff8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1cff90: 0x131840
    ctx->pc = 0x1cff90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 1));
    // 0x1cff94: 0x24429a80
    ctx->pc = 0x1cff94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941312));
    // 0x1cff98: 0x431821
    ctx->pc = 0x1cff98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cff9c: 0x94740da0
    ctx->pc = 0x1cff9cu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x1cffa0: 0x3402ffff
    ctx->pc = 0x1cffa0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1cffa4: 0x12820014
    ctx->pc = 0x1CFFA4u;
    {
        const bool branch_taken_0x1cffa4 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        if (branch_taken_0x1cffa4) {
            ctx->pc = 0x1CFFF8u;
            goto label_1cfff8;
        }
    }
    ctx->pc = 0x1CFFACu;
    // 0x1cffac: 0x94700da4
    ctx->pc = 0x1cffacu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3492)));
    // 0x1cffb0: 0x3c02004c
    ctx->pc = 0x1cffb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)76 << 16));
    // 0x1cffb4: 0x24429680
    ctx->pc = 0x1cffb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940288));
    // 0x1cffb8: 0x882d
    ctx->pc = 0x1cffb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffbc: 0x1319c0
    ctx->pc = 0x1cffbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 7));
    // 0x1cffc0: 0x431021
    ctx->pc = 0x1cffc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cffc4: 0x24520100
    ctx->pc = 0x1cffc4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 256));
label_1cffc8:
    // 0x1cffc8: 0x8e430000
    ctx->pc = 0x1cffc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cffcc: 0x2402ffff
    ctx->pc = 0x1cffccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cffd0: 0x10620005
    ctx->pc = 0x1CFFD0u;
    {
        const bool branch_taken_0x1cffd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CFFD4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x1cffd0) {
            ctx->pc = 0x1CFFE8u;
            goto label_1cffe8;
        }
    }
    ctx->pc = 0x1CFFD8u;
    // 0x1cffd8: 0x306600ff
    ctx->pc = 0x1cffd8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 255));
    // 0x1cffdc: 0x3284ffff
    ctx->pc = 0x1cffdcu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 20), 65535));
    // 0x1cffe0: 0xc073e74
    ctx->pc = 0x1CFFE0u;
    SET_GPR_U32(ctx, 31, 0x1CFFE8u);
    ctx->pc = 0x1CFFE4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 65535));
    ctx->pc = 0x1CF9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF9D0_0x1cf9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFE8u; }
    }
    if (ctx->pc != 0x1CFFE8u) { return; }
    ctx->pc = 0x1CFFE8u;
label_1cffe8:
    // 0x1cffe8: 0x26310001
    ctx->pc = 0x1cffe8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1cffec: 0x2a220020
    ctx->pc = 0x1cffecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 32));
    // 0x1cfff0: 0x1440fff5
    ctx->pc = 0x1CFFF0u;
    {
        const bool branch_taken_0x1cfff0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cfff0) {
            ctx->pc = 0x1CFFC8u;
            goto label_1cffc8;
        }
    }
    ctx->pc = 0x1CFFF8u;
label_1cfff8:
    // 0x1cfff8: 0x26730001
    ctx->pc = 0x1cfff8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cfffc: 0x2a620002
    ctx->pc = 0x1cfffcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 2));
    // 0x1d0000: 0x1440ffe2
    ctx->pc = 0x1D0000u;
    {
        const bool branch_taken_0x1d0000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d0000) {
            ctx->pc = 0x1CFF8Cu;
            goto label_1cff8c;
        }
    }
    ctx->pc = 0x1D0008u;
    // 0x1d0008: 0xc06372c
    ctx->pc = 0x1D0008u;
    SET_GPR_U32(ctx, 31, 0x1D0010u);
    ctx->pc = 0x18DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DCB0_0x18dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0010u; }
    }
    if (ctx->pc != 0x1D0010u) { return; }
    ctx->pc = 0x1D0010u;
label_1d0010:
    // 0x1d0010: 0xdfbf0050
    ctx->pc = 0x1d0010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0014: 0x7bb40040
    ctx->pc = 0x1d0014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0018: 0x7bb30030
    ctx->pc = 0x1d0018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d001c: 0x7bb20020
    ctx->pc = 0x1d001cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0020: 0x7bb10010
    ctx->pc = 0x1d0020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0024: 0x7bb00000
    ctx->pc = 0x1d0024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0028: 0x3e00008
    ctx->pc = 0x1D0028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D002Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFB20u: goto label_1cfb20;
            case 0x1CFB40u: goto label_1cfb40;
            case 0x1CFB74u: goto label_1cfb74;
            case 0x1CFBA8u: goto label_1cfba8;
            case 0x1CFBACu: goto label_1cfbac;
            case 0x1CFBD4u: goto label_1cfbd4;
            case 0x1CFBD8u: goto label_1cfbd8;
            case 0x1CFC5Cu: goto label_1cfc5c;
            case 0x1CFC98u: goto label_1cfc98;
            case 0x1CFCBCu: goto label_1cfcbc;
            case 0x1CFCE0u: goto label_1cfce0;
            case 0x1CFCFCu: goto label_1cfcfc;
            case 0x1CFD00u: goto label_1cfd00;
            case 0x1CFD0Cu: goto label_1cfd0c;
            case 0x1CFD18u: goto label_1cfd18;
            case 0x1CFD34u: goto label_1cfd34;
            case 0x1CFD38u: goto label_1cfd38;
            case 0x1CFD44u: goto label_1cfd44;
            case 0x1CFD54u: goto label_1cfd54;
            case 0x1CFD84u: goto label_1cfd84;
            case 0x1CFDA4u: goto label_1cfda4;
            case 0x1CFDBCu: goto label_1cfdbc;
            case 0x1CFDE8u: goto label_1cfde8;
            case 0x1CFDECu: goto label_1cfdec;
            case 0x1CFDF8u: goto label_1cfdf8;
            case 0x1CFE08u: goto label_1cfe08;
            case 0x1CFE1Cu: goto label_1cfe1c;
            case 0x1CFE20u: goto label_1cfe20;
            case 0x1CFE44u: goto label_1cfe44;
            case 0x1CFE60u: goto label_1cfe60;
            case 0x1CFE78u: goto label_1cfe78;
            case 0x1CFEB0u: goto label_1cfeb0;
            case 0x1CFEF0u: goto label_1cfef0;
            case 0x1CFF34u: goto label_1cff34;
            case 0x1CFF68u: goto label_1cff68;
            case 0x1CFF78u: goto label_1cff78;
            case 0x1CFF8Cu: goto label_1cff8c;
            case 0x1CFFC8u: goto label_1cffc8;
            case 0x1CFFE8u: goto label_1cffe8;
            case 0x1CFFF8u: goto label_1cfff8;
            case 0x1D0010u: goto label_1d0010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D0030u;
}
