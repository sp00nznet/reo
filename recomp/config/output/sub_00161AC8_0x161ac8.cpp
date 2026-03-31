#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00161AC8
// Address: 0x161ac8 - 0x161d20
void sub_00161AC8_0x161ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x161ac8u;

label_161ac8:
    // 0x161ac8: 0x27bdffa0
    ctx->pc = 0x161ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_161acc:
    // 0x161acc: 0x24050001
    ctx->pc = 0x161accu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_161ad0:
    // 0x161ad0: 0xffb00030
    ctx->pc = 0x161ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_161ad4:
    // 0x161ad4: 0x80802d
    ctx->pc = 0x161ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161ad8:
    // 0x161ad8: 0xffb10038
    ctx->pc = 0x161ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_161adc:
    // 0x161adc: 0x26110100
    ctx->pc = 0x161adcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 256));
label_161ae0:
    // 0x161ae0: 0xffb20040
    ctx->pc = 0x161ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_161ae4:
    // 0x161ae4: 0xffb30048
    ctx->pc = 0x161ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_161ae8:
    // 0x161ae8: 0xffbf0050
    ctx->pc = 0x161ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_161aec:
    // 0x161aec: 0x8e1200e8
    ctx->pc = 0x161aecu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_161af0:
    // 0x161af0: 0x8e430000
    ctx->pc = 0x161af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_161af4:
    // 0x161af4: 0x8c620024
    ctx->pc = 0x161af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_161af8:
    // 0x161af8: 0x40f809
label_161afc:
    if (ctx->pc == 0x161AFCu) {
        ctx->pc = 0x161AFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161B00u;
        goto label_161b00;
    }
    ctx->pc = 0x161AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161B00u);
        ctx->pc = 0x161AFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AC8u: goto label_161ac8;
            case 0x161ACCu: goto label_161acc;
            case 0x161AD0u: goto label_161ad0;
            case 0x161AD4u: goto label_161ad4;
            case 0x161AD8u: goto label_161ad8;
            case 0x161ADCu: goto label_161adc;
            case 0x161AE0u: goto label_161ae0;
            case 0x161AE4u: goto label_161ae4;
            case 0x161AE8u: goto label_161ae8;
            case 0x161AECu: goto label_161aec;
            case 0x161AF0u: goto label_161af0;
            case 0x161AF4u: goto label_161af4;
            case 0x161AF8u: goto label_161af8;
            case 0x161AFCu: goto label_161afc;
            case 0x161B00u: goto label_161b00;
            case 0x161B04u: goto label_161b04;
            case 0x161B08u: goto label_161b08;
            case 0x161B0Cu: goto label_161b0c;
            case 0x161B10u: goto label_161b10;
            case 0x161B14u: goto label_161b14;
            case 0x161B18u: goto label_161b18;
            case 0x161B1Cu: goto label_161b1c;
            case 0x161B20u: goto label_161b20;
            case 0x161B24u: goto label_161b24;
            case 0x161B28u: goto label_161b28;
            case 0x161B2Cu: goto label_161b2c;
            case 0x161B30u: goto label_161b30;
            case 0x161B34u: goto label_161b34;
            case 0x161B38u: goto label_161b38;
            case 0x161B3Cu: goto label_161b3c;
            case 0x161B40u: goto label_161b40;
            case 0x161B44u: goto label_161b44;
            case 0x161B48u: goto label_161b48;
            case 0x161B4Cu: goto label_161b4c;
            case 0x161B50u: goto label_161b50;
            case 0x161B54u: goto label_161b54;
            case 0x161B58u: goto label_161b58;
            case 0x161B5Cu: goto label_161b5c;
            case 0x161B60u: goto label_161b60;
            case 0x161B64u: goto label_161b64;
            case 0x161B68u: goto label_161b68;
            case 0x161B6Cu: goto label_161b6c;
            case 0x161B70u: goto label_161b70;
            case 0x161B74u: goto label_161b74;
            case 0x161B78u: goto label_161b78;
            case 0x161B7Cu: goto label_161b7c;
            case 0x161B80u: goto label_161b80;
            case 0x161B84u: goto label_161b84;
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            case 0x161C38u: goto label_161c38;
            case 0x161C3Cu: goto label_161c3c;
            case 0x161C40u: goto label_161c40;
            case 0x161C44u: goto label_161c44;
            case 0x161C48u: goto label_161c48;
            case 0x161C4Cu: goto label_161c4c;
            case 0x161C50u: goto label_161c50;
            case 0x161C54u: goto label_161c54;
            case 0x161C58u: goto label_161c58;
            case 0x161C5Cu: goto label_161c5c;
            case 0x161C60u: goto label_161c60;
            case 0x161C64u: goto label_161c64;
            case 0x161C68u: goto label_161c68;
            case 0x161C6Cu: goto label_161c6c;
            case 0x161C70u: goto label_161c70;
            case 0x161C74u: goto label_161c74;
            case 0x161C78u: goto label_161c78;
            case 0x161C7Cu: goto label_161c7c;
            case 0x161C80u: goto label_161c80;
            case 0x161C84u: goto label_161c84;
            case 0x161C88u: goto label_161c88;
            case 0x161C8Cu: goto label_161c8c;
            case 0x161C90u: goto label_161c90;
            case 0x161C94u: goto label_161c94;
            case 0x161C98u: goto label_161c98;
            case 0x161C9Cu: goto label_161c9c;
            case 0x161CA0u: goto label_161ca0;
            case 0x161CA4u: goto label_161ca4;
            case 0x161CA8u: goto label_161ca8;
            case 0x161CACu: goto label_161cac;
            case 0x161CB0u: goto label_161cb0;
            case 0x161CB4u: goto label_161cb4;
            case 0x161CB8u: goto label_161cb8;
            case 0x161CBCu: goto label_161cbc;
            case 0x161CC0u: goto label_161cc0;
            case 0x161CC4u: goto label_161cc4;
            case 0x161CC8u: goto label_161cc8;
            case 0x161CCCu: goto label_161ccc;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CD4u: goto label_161cd4;
            case 0x161CD8u: goto label_161cd8;
            case 0x161CDCu: goto label_161cdc;
            case 0x161CE0u: goto label_161ce0;
            case 0x161CE4u: goto label_161ce4;
            case 0x161CE8u: goto label_161ce8;
            case 0x161CECu: goto label_161cec;
            case 0x161CF0u: goto label_161cf0;
            case 0x161CF4u: goto label_161cf4;
            case 0x161CF8u: goto label_161cf8;
            case 0x161CFCu: goto label_161cfc;
            case 0x161D00u: goto label_161d00;
            case 0x161D04u: goto label_161d04;
            case 0x161D08u: goto label_161d08;
            case 0x161D0Cu: goto label_161d0c;
            case 0x161D10u: goto label_161d10;
            case 0x161D14u: goto label_161d14;
            case 0x161D18u: goto label_161d18;
            case 0x161D1Cu: goto label_161d1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161B00u; }
            if (ctx->pc != 0x161B00u) { return; }
        }
    }
    ctx->pc = 0x161B00u;
label_161b00:
    // 0x161b00: 0x3c050024
    ctx->pc = 0x161b00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_161b04:
    // 0x161b04: 0x3c060024
    ctx->pc = 0x161b04u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
label_161b08:
    // 0x161b08: 0x40182d
    ctx->pc = 0x161b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161b0c:
    // 0x161b0c: 0x24a5feb0
    ctx->pc = 0x161b0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966960));
label_161b10:
    // 0x161b10: 0x24c6feb8
    ctx->pc = 0x161b10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294966968));
label_161b14:
    // 0x161b14: 0x3a0202d
    ctx->pc = 0x161b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161b18:
    // 0x161b18: 0x10600007
label_161b1c:
    if (ctx->pc == 0x161B1Cu) {
        ctx->pc = 0x161B1Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x161B20u;
        goto label_161b20;
    }
    ctx->pc = 0x161B18u;
    {
        const bool branch_taken_0x161b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x161B1Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x161b18) {
            ctx->pc = 0x161B38u;
            goto label_161b38;
        }
    }
    ctx->pc = 0x161B20u;
label_161b20:
    // 0x161b20: 0x8e0200ec
    ctx->pc = 0x161b20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_161b24:
    // 0x161b24: 0xafa30004
    ctx->pc = 0x161b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_161b28:
    // 0x161b28: 0xc050288
label_161b2c:
    if (ctx->pc == 0x161B2Cu) {
        ctx->pc = 0x161B2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x161B30u;
        goto label_161b30;
    }
    ctx->pc = 0x161B28u;
    SET_GPR_U32(ctx, 31, 0x161B30u);
    ctx->pc = 0x161B2Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x140A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A20_0x140a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B30u; }
    }
    if (ctx->pc != 0x161B30u) { return; }
    ctx->pc = 0x161B30u;
label_161b30:
    // 0x161b30: 0x14400007
label_161b34:
    if (ctx->pc == 0x161B34u) {
        ctx->pc = 0x161B34u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 244));
        ctx->pc = 0x161B38u;
        goto label_161b38;
    }
    ctx->pc = 0x161B30u;
    {
        const bool branch_taken_0x161b30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161B34u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 244));
        if (branch_taken_0x161b30) {
            ctx->pc = 0x161B50u;
            goto label_161b50;
        }
    }
    ctx->pc = 0x161B38u;
label_161b38:
    // 0x161b38: 0x24020001
    ctx->pc = 0x161b38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_161b3c:
    // 0x161b3c: 0xae200004
    ctx->pc = 0x161b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_161b40:
    // 0x161b40: 0xae220000
    ctx->pc = 0x161b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_161b44:
    // 0x161b44: 0x1000002c
label_161b48:
    if (ctx->pc == 0x161B48u) {
        ctx->pc = 0x161B48u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x161B4Cu;
        goto label_161b4c;
    }
    ctx->pc = 0x161B44u;
    {
        const bool branch_taken_0x161b44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161B48u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x161b44) {
            ctx->pc = 0x161BF8u;
            goto label_161bf8;
        }
    }
    ctx->pc = 0x161B4Cu;
label_161b4c:
    // 0x161b4c: 0x0
    ctx->pc = 0x161b4cu;
    // NOP
label_161b50:
    // 0x161b50: 0x8e620000
    ctx->pc = 0x161b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_161b54:
    // 0x161b54: 0x10400020
label_161b58:
    if (ctx->pc == 0x161B58u) {
        ctx->pc = 0x161B58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161B5Cu;
        goto label_161b5c;
    }
    ctx->pc = 0x161B54u;
    {
        const bool branch_taken_0x161b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161B58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161b54) {
            ctx->pc = 0x161BD8u;
            goto label_161bd8;
        }
    }
    ctx->pc = 0x161B5Cu;
label_161b5c:
    // 0x161b5c: 0x8fa50010
    ctx->pc = 0x161b5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_161b60:
    // 0x161b60: 0xc041eac
label_161b64:
    if (ctx->pc == 0x161B64u) {
        ctx->pc = 0x161B64u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x161B68u;
        goto label_161b68;
    }
    ctx->pc = 0x161B60u;
    SET_GPR_U32(ctx, 31, 0x161B68u);
    ctx->pc = 0x161B64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B68u; }
    }
    if (ctx->pc != 0x161B68u) { return; }
    ctx->pc = 0x161B68u;
label_161b68:
    // 0x161b68: 0x8e630000
    ctx->pc = 0x161b68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_161b6c:
    // 0x161b6c: 0x8fa50014
    ctx->pc = 0x161b6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_161b70:
    // 0x161b70: 0x24020001
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_161b74:
    // 0x161b74: 0x8e470000
    ctx->pc = 0x161b74u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_161b78:
    // 0x161b78: 0x27b00020
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
label_161b7c:
    // 0x161b7c: 0xae220000
    ctx->pc = 0x161b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_161b80:
    // 0x161b80: 0x3c067fff
    ctx->pc = 0x161b80u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_161b84:
    // 0x161b84: 0x8ce20018
    ctx->pc = 0x161b84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_161b88:
    // 0x161b88: 0x200382d
    ctx->pc = 0x161b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161b8c:
    // 0x161b8c: 0xae230004
    ctx->pc = 0x161b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_161b90:
    // 0x161b90: 0x240202d
    ctx->pc = 0x161b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_161b94:
    // 0x161b94: 0xae250008
    ctx->pc = 0x161b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_161b98:
    // 0x161b98: 0x24050001
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_161b9c:
    // 0x161b9c: 0x40f809
label_161ba0:
    if (ctx->pc == 0x161BA0u) {
        ctx->pc = 0x161BA0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = 0x161BA4u;
        goto label_161ba4;
    }
    ctx->pc = 0x161B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161BA4u);
        ctx->pc = 0x161BA0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AC8u: goto label_161ac8;
            case 0x161ACCu: goto label_161acc;
            case 0x161AD0u: goto label_161ad0;
            case 0x161AD4u: goto label_161ad4;
            case 0x161AD8u: goto label_161ad8;
            case 0x161ADCu: goto label_161adc;
            case 0x161AE0u: goto label_161ae0;
            case 0x161AE4u: goto label_161ae4;
            case 0x161AE8u: goto label_161ae8;
            case 0x161AECu: goto label_161aec;
            case 0x161AF0u: goto label_161af0;
            case 0x161AF4u: goto label_161af4;
            case 0x161AF8u: goto label_161af8;
            case 0x161AFCu: goto label_161afc;
            case 0x161B00u: goto label_161b00;
            case 0x161B04u: goto label_161b04;
            case 0x161B08u: goto label_161b08;
            case 0x161B0Cu: goto label_161b0c;
            case 0x161B10u: goto label_161b10;
            case 0x161B14u: goto label_161b14;
            case 0x161B18u: goto label_161b18;
            case 0x161B1Cu: goto label_161b1c;
            case 0x161B20u: goto label_161b20;
            case 0x161B24u: goto label_161b24;
            case 0x161B28u: goto label_161b28;
            case 0x161B2Cu: goto label_161b2c;
            case 0x161B30u: goto label_161b30;
            case 0x161B34u: goto label_161b34;
            case 0x161B38u: goto label_161b38;
            case 0x161B3Cu: goto label_161b3c;
            case 0x161B40u: goto label_161b40;
            case 0x161B44u: goto label_161b44;
            case 0x161B48u: goto label_161b48;
            case 0x161B4Cu: goto label_161b4c;
            case 0x161B50u: goto label_161b50;
            case 0x161B54u: goto label_161b54;
            case 0x161B58u: goto label_161b58;
            case 0x161B5Cu: goto label_161b5c;
            case 0x161B60u: goto label_161b60;
            case 0x161B64u: goto label_161b64;
            case 0x161B68u: goto label_161b68;
            case 0x161B6Cu: goto label_161b6c;
            case 0x161B70u: goto label_161b70;
            case 0x161B74u: goto label_161b74;
            case 0x161B78u: goto label_161b78;
            case 0x161B7Cu: goto label_161b7c;
            case 0x161B80u: goto label_161b80;
            case 0x161B84u: goto label_161b84;
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            case 0x161C38u: goto label_161c38;
            case 0x161C3Cu: goto label_161c3c;
            case 0x161C40u: goto label_161c40;
            case 0x161C44u: goto label_161c44;
            case 0x161C48u: goto label_161c48;
            case 0x161C4Cu: goto label_161c4c;
            case 0x161C50u: goto label_161c50;
            case 0x161C54u: goto label_161c54;
            case 0x161C58u: goto label_161c58;
            case 0x161C5Cu: goto label_161c5c;
            case 0x161C60u: goto label_161c60;
            case 0x161C64u: goto label_161c64;
            case 0x161C68u: goto label_161c68;
            case 0x161C6Cu: goto label_161c6c;
            case 0x161C70u: goto label_161c70;
            case 0x161C74u: goto label_161c74;
            case 0x161C78u: goto label_161c78;
            case 0x161C7Cu: goto label_161c7c;
            case 0x161C80u: goto label_161c80;
            case 0x161C84u: goto label_161c84;
            case 0x161C88u: goto label_161c88;
            case 0x161C8Cu: goto label_161c8c;
            case 0x161C90u: goto label_161c90;
            case 0x161C94u: goto label_161c94;
            case 0x161C98u: goto label_161c98;
            case 0x161C9Cu: goto label_161c9c;
            case 0x161CA0u: goto label_161ca0;
            case 0x161CA4u: goto label_161ca4;
            case 0x161CA8u: goto label_161ca8;
            case 0x161CACu: goto label_161cac;
            case 0x161CB0u: goto label_161cb0;
            case 0x161CB4u: goto label_161cb4;
            case 0x161CB8u: goto label_161cb8;
            case 0x161CBCu: goto label_161cbc;
            case 0x161CC0u: goto label_161cc0;
            case 0x161CC4u: goto label_161cc4;
            case 0x161CC8u: goto label_161cc8;
            case 0x161CCCu: goto label_161ccc;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CD4u: goto label_161cd4;
            case 0x161CD8u: goto label_161cd8;
            case 0x161CDCu: goto label_161cdc;
            case 0x161CE0u: goto label_161ce0;
            case 0x161CE4u: goto label_161ce4;
            case 0x161CE8u: goto label_161ce8;
            case 0x161CECu: goto label_161cec;
            case 0x161CF0u: goto label_161cf0;
            case 0x161CF4u: goto label_161cf4;
            case 0x161CF8u: goto label_161cf8;
            case 0x161CFCu: goto label_161cfc;
            case 0x161D00u: goto label_161d00;
            case 0x161D04u: goto label_161d04;
            case 0x161D08u: goto label_161d08;
            case 0x161D0Cu: goto label_161d0c;
            case 0x161D10u: goto label_161d10;
            case 0x161D14u: goto label_161d14;
            case 0x161D18u: goto label_161d18;
            case 0x161D1Cu: goto label_161d1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161BA4u; }
            if (ctx->pc != 0x161BA4u) { return; }
        }
    }
    ctx->pc = 0x161BA4u;
label_161ba4:
    // 0x161ba4: 0x8e430000
    ctx->pc = 0x161ba4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_161ba8:
    // 0x161ba8: 0x240202d
    ctx->pc = 0x161ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_161bac:
    // 0x161bac: 0x200302d
    ctx->pc = 0x161bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161bb0:
    // 0x161bb0: 0x8c620020
    ctx->pc = 0x161bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_161bb4:
    // 0x161bb4: 0x40f809
label_161bb8:
    if (ctx->pc == 0x161BB8u) {
        ctx->pc = 0x161BB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161BBCu;
        goto label_161bbc;
    }
    ctx->pc = 0x161BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161BBCu);
        ctx->pc = 0x161BB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AC8u: goto label_161ac8;
            case 0x161ACCu: goto label_161acc;
            case 0x161AD0u: goto label_161ad0;
            case 0x161AD4u: goto label_161ad4;
            case 0x161AD8u: goto label_161ad8;
            case 0x161ADCu: goto label_161adc;
            case 0x161AE0u: goto label_161ae0;
            case 0x161AE4u: goto label_161ae4;
            case 0x161AE8u: goto label_161ae8;
            case 0x161AECu: goto label_161aec;
            case 0x161AF0u: goto label_161af0;
            case 0x161AF4u: goto label_161af4;
            case 0x161AF8u: goto label_161af8;
            case 0x161AFCu: goto label_161afc;
            case 0x161B00u: goto label_161b00;
            case 0x161B04u: goto label_161b04;
            case 0x161B08u: goto label_161b08;
            case 0x161B0Cu: goto label_161b0c;
            case 0x161B10u: goto label_161b10;
            case 0x161B14u: goto label_161b14;
            case 0x161B18u: goto label_161b18;
            case 0x161B1Cu: goto label_161b1c;
            case 0x161B20u: goto label_161b20;
            case 0x161B24u: goto label_161b24;
            case 0x161B28u: goto label_161b28;
            case 0x161B2Cu: goto label_161b2c;
            case 0x161B30u: goto label_161b30;
            case 0x161B34u: goto label_161b34;
            case 0x161B38u: goto label_161b38;
            case 0x161B3Cu: goto label_161b3c;
            case 0x161B40u: goto label_161b40;
            case 0x161B44u: goto label_161b44;
            case 0x161B48u: goto label_161b48;
            case 0x161B4Cu: goto label_161b4c;
            case 0x161B50u: goto label_161b50;
            case 0x161B54u: goto label_161b54;
            case 0x161B58u: goto label_161b58;
            case 0x161B5Cu: goto label_161b5c;
            case 0x161B60u: goto label_161b60;
            case 0x161B64u: goto label_161b64;
            case 0x161B68u: goto label_161b68;
            case 0x161B6Cu: goto label_161b6c;
            case 0x161B70u: goto label_161b70;
            case 0x161B74u: goto label_161b74;
            case 0x161B78u: goto label_161b78;
            case 0x161B7Cu: goto label_161b7c;
            case 0x161B80u: goto label_161b80;
            case 0x161B84u: goto label_161b84;
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            case 0x161C38u: goto label_161c38;
            case 0x161C3Cu: goto label_161c3c;
            case 0x161C40u: goto label_161c40;
            case 0x161C44u: goto label_161c44;
            case 0x161C48u: goto label_161c48;
            case 0x161C4Cu: goto label_161c4c;
            case 0x161C50u: goto label_161c50;
            case 0x161C54u: goto label_161c54;
            case 0x161C58u: goto label_161c58;
            case 0x161C5Cu: goto label_161c5c;
            case 0x161C60u: goto label_161c60;
            case 0x161C64u: goto label_161c64;
            case 0x161C68u: goto label_161c68;
            case 0x161C6Cu: goto label_161c6c;
            case 0x161C70u: goto label_161c70;
            case 0x161C74u: goto label_161c74;
            case 0x161C78u: goto label_161c78;
            case 0x161C7Cu: goto label_161c7c;
            case 0x161C80u: goto label_161c80;
            case 0x161C84u: goto label_161c84;
            case 0x161C88u: goto label_161c88;
            case 0x161C8Cu: goto label_161c8c;
            case 0x161C90u: goto label_161c90;
            case 0x161C94u: goto label_161c94;
            case 0x161C98u: goto label_161c98;
            case 0x161C9Cu: goto label_161c9c;
            case 0x161CA0u: goto label_161ca0;
            case 0x161CA4u: goto label_161ca4;
            case 0x161CA8u: goto label_161ca8;
            case 0x161CACu: goto label_161cac;
            case 0x161CB0u: goto label_161cb0;
            case 0x161CB4u: goto label_161cb4;
            case 0x161CB8u: goto label_161cb8;
            case 0x161CBCu: goto label_161cbc;
            case 0x161CC0u: goto label_161cc0;
            case 0x161CC4u: goto label_161cc4;
            case 0x161CC8u: goto label_161cc8;
            case 0x161CCCu: goto label_161ccc;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CD4u: goto label_161cd4;
            case 0x161CD8u: goto label_161cd8;
            case 0x161CDCu: goto label_161cdc;
            case 0x161CE0u: goto label_161ce0;
            case 0x161CE4u: goto label_161ce4;
            case 0x161CE8u: goto label_161ce8;
            case 0x161CECu: goto label_161cec;
            case 0x161CF0u: goto label_161cf0;
            case 0x161CF4u: goto label_161cf4;
            case 0x161CF8u: goto label_161cf8;
            case 0x161CFCu: goto label_161cfc;
            case 0x161D00u: goto label_161d00;
            case 0x161D04u: goto label_161d04;
            case 0x161D08u: goto label_161d08;
            case 0x161D0Cu: goto label_161d0c;
            case 0x161D10u: goto label_161d10;
            case 0x161D14u: goto label_161d14;
            case 0x161D18u: goto label_161d18;
            case 0x161D1Cu: goto label_161d1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161BBCu; }
            if (ctx->pc != 0x161BBCu) { return; }
        }
    }
    ctx->pc = 0x161BBCu;
label_161bbc:
    // 0x161bbc: 0x8e430000
    ctx->pc = 0x161bbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_161bc0:
    // 0x161bc0: 0x8c620014
    ctx->pc = 0x161bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_161bc4:
    // 0x161bc4: 0x40f809
label_161bc8:
    if (ctx->pc == 0x161BC8u) {
        ctx->pc = 0x161BC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161BCCu;
        goto label_161bcc;
    }
    ctx->pc = 0x161BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161BCCu);
        ctx->pc = 0x161BC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AC8u: goto label_161ac8;
            case 0x161ACCu: goto label_161acc;
            case 0x161AD0u: goto label_161ad0;
            case 0x161AD4u: goto label_161ad4;
            case 0x161AD8u: goto label_161ad8;
            case 0x161ADCu: goto label_161adc;
            case 0x161AE0u: goto label_161ae0;
            case 0x161AE4u: goto label_161ae4;
            case 0x161AE8u: goto label_161ae8;
            case 0x161AECu: goto label_161aec;
            case 0x161AF0u: goto label_161af0;
            case 0x161AF4u: goto label_161af4;
            case 0x161AF8u: goto label_161af8;
            case 0x161AFCu: goto label_161afc;
            case 0x161B00u: goto label_161b00;
            case 0x161B04u: goto label_161b04;
            case 0x161B08u: goto label_161b08;
            case 0x161B0Cu: goto label_161b0c;
            case 0x161B10u: goto label_161b10;
            case 0x161B14u: goto label_161b14;
            case 0x161B18u: goto label_161b18;
            case 0x161B1Cu: goto label_161b1c;
            case 0x161B20u: goto label_161b20;
            case 0x161B24u: goto label_161b24;
            case 0x161B28u: goto label_161b28;
            case 0x161B2Cu: goto label_161b2c;
            case 0x161B30u: goto label_161b30;
            case 0x161B34u: goto label_161b34;
            case 0x161B38u: goto label_161b38;
            case 0x161B3Cu: goto label_161b3c;
            case 0x161B40u: goto label_161b40;
            case 0x161B44u: goto label_161b44;
            case 0x161B48u: goto label_161b48;
            case 0x161B4Cu: goto label_161b4c;
            case 0x161B50u: goto label_161b50;
            case 0x161B54u: goto label_161b54;
            case 0x161B58u: goto label_161b58;
            case 0x161B5Cu: goto label_161b5c;
            case 0x161B60u: goto label_161b60;
            case 0x161B64u: goto label_161b64;
            case 0x161B68u: goto label_161b68;
            case 0x161B6Cu: goto label_161b6c;
            case 0x161B70u: goto label_161b70;
            case 0x161B74u: goto label_161b74;
            case 0x161B78u: goto label_161b78;
            case 0x161B7Cu: goto label_161b7c;
            case 0x161B80u: goto label_161b80;
            case 0x161B84u: goto label_161b84;
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            case 0x161C38u: goto label_161c38;
            case 0x161C3Cu: goto label_161c3c;
            case 0x161C40u: goto label_161c40;
            case 0x161C44u: goto label_161c44;
            case 0x161C48u: goto label_161c48;
            case 0x161C4Cu: goto label_161c4c;
            case 0x161C50u: goto label_161c50;
            case 0x161C54u: goto label_161c54;
            case 0x161C58u: goto label_161c58;
            case 0x161C5Cu: goto label_161c5c;
            case 0x161C60u: goto label_161c60;
            case 0x161C64u: goto label_161c64;
            case 0x161C68u: goto label_161c68;
            case 0x161C6Cu: goto label_161c6c;
            case 0x161C70u: goto label_161c70;
            case 0x161C74u: goto label_161c74;
            case 0x161C78u: goto label_161c78;
            case 0x161C7Cu: goto label_161c7c;
            case 0x161C80u: goto label_161c80;
            case 0x161C84u: goto label_161c84;
            case 0x161C88u: goto label_161c88;
            case 0x161C8Cu: goto label_161c8c;
            case 0x161C90u: goto label_161c90;
            case 0x161C94u: goto label_161c94;
            case 0x161C98u: goto label_161c98;
            case 0x161C9Cu: goto label_161c9c;
            case 0x161CA0u: goto label_161ca0;
            case 0x161CA4u: goto label_161ca4;
            case 0x161CA8u: goto label_161ca8;
            case 0x161CACu: goto label_161cac;
            case 0x161CB0u: goto label_161cb0;
            case 0x161CB4u: goto label_161cb4;
            case 0x161CB8u: goto label_161cb8;
            case 0x161CBCu: goto label_161cbc;
            case 0x161CC0u: goto label_161cc0;
            case 0x161CC4u: goto label_161cc4;
            case 0x161CC8u: goto label_161cc8;
            case 0x161CCCu: goto label_161ccc;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CD4u: goto label_161cd4;
            case 0x161CD8u: goto label_161cd8;
            case 0x161CDCu: goto label_161cdc;
            case 0x161CE0u: goto label_161ce0;
            case 0x161CE4u: goto label_161ce4;
            case 0x161CE8u: goto label_161ce8;
            case 0x161CECu: goto label_161cec;
            case 0x161CF0u: goto label_161cf0;
            case 0x161CF4u: goto label_161cf4;
            case 0x161CF8u: goto label_161cf8;
            case 0x161CFCu: goto label_161cfc;
            case 0x161D00u: goto label_161d00;
            case 0x161D04u: goto label_161d04;
            case 0x161D08u: goto label_161d08;
            case 0x161D0Cu: goto label_161d0c;
            case 0x161D10u: goto label_161d10;
            case 0x161D14u: goto label_161d14;
            case 0x161D18u: goto label_161d18;
            case 0x161D1Cu: goto label_161d1c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161BCCu; }
            if (ctx->pc != 0x161BCCu) { return; }
        }
    }
    ctx->pc = 0x161BCCu;
label_161bcc:
    // 0x161bcc: 0x1000000b
label_161bd0:
    if (ctx->pc == 0x161BD0u) {
        ctx->pc = 0x161BD0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x161BD4u;
        goto label_161bd4;
    }
    ctx->pc = 0x161BCCu;
    {
        const bool branch_taken_0x161bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161BD0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x161bcc) {
            ctx->pc = 0x161BFCu;
            goto label_161bfc;
        }
    }
    ctx->pc = 0x161BD4u;
label_161bd4:
    // 0x161bd4: 0x0
    ctx->pc = 0x161bd4u;
    // NOP
label_161bd8:
    // 0x161bd8: 0x8fa50014
    ctx->pc = 0x161bd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_161bdc:
    // 0x161bdc: 0x24030001
    ctx->pc = 0x161bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_161be0:
    // 0x161be0: 0x8fa20010
    ctx->pc = 0x161be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_161be4:
    // 0x161be4: 0x200202d
    ctx->pc = 0x161be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161be8:
    // 0x161be8: 0xae230000
    ctx->pc = 0x161be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_161bec:
    // 0x161bec: 0xae220004
    ctx->pc = 0x161becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_161bf0:
    // 0x161bf0: 0xc058748
label_161bf4:
    if (ctx->pc == 0x161BF4u) {
        ctx->pc = 0x161BF4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
        ctx->pc = 0x161BF8u;
        goto label_161bf8;
    }
    ctx->pc = 0x161BF0u;
    SET_GPR_U32(ctx, 31, 0x161BF8u);
    ctx->pc = 0x161BF4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    ctx->pc = 0x161D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161D20_0x161d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BF8u; }
    }
    if (ctx->pc != 0x161BF8u) { return; }
    ctx->pc = 0x161BF8u;
label_161bf8:
    // 0x161bf8: 0xdfb00030
    ctx->pc = 0x161bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_161bfc:
    // 0x161bfc: 0xdfb10038
    ctx->pc = 0x161bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_161c00:
    // 0x161c00: 0xdfb20040
    ctx->pc = 0x161c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_161c04:
    // 0x161c04: 0xdfb30048
    ctx->pc = 0x161c04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_161c08:
    // 0x161c08: 0xdfbf0050
    ctx->pc = 0x161c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_161c0c:
    // 0x161c0c: 0x3e00008
label_161c10:
    if (ctx->pc == 0x161C10u) {
        ctx->pc = 0x161C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x161C14u;
        goto label_161c14;
    }
    ctx->pc = 0x161C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AC8u: goto label_161ac8;
            case 0x161ACCu: goto label_161acc;
            case 0x161AD0u: goto label_161ad0;
            case 0x161AD4u: goto label_161ad4;
            case 0x161AD8u: goto label_161ad8;
            case 0x161ADCu: goto label_161adc;
            case 0x161AE0u: goto label_161ae0;
            case 0x161AE4u: goto label_161ae4;
            case 0x161AE8u: goto label_161ae8;
            case 0x161AECu: goto label_161aec;
            case 0x161AF0u: goto label_161af0;
            case 0x161AF4u: goto label_161af4;
            case 0x161AF8u: goto label_161af8;
            case 0x161AFCu: goto label_161afc;
            case 0x161B00u: goto label_161b00;
            case 0x161B04u: goto label_161b04;
            case 0x161B08u: goto label_161b08;
            case 0x161B0Cu: goto label_161b0c;
            case 0x161B10u: goto label_161b10;
            case 0x161B14u: goto label_161b14;
            case 0x161B18u: goto label_161b18;
            case 0x161B1Cu: goto label_161b1c;
            case 0x161B20u: goto label_161b20;
            case 0x161B24u: goto label_161b24;
            case 0x161B28u: goto label_161b28;
            case 0x161B2Cu: goto label_161b2c;
            case 0x161B30u: goto label_161b30;
            case 0x161B34u: goto label_161b34;
            case 0x161B38u: goto label_161b38;
            case 0x161B3Cu: goto label_161b3c;
            case 0x161B40u: goto label_161b40;
            case 0x161B44u: goto label_161b44;
            case 0x161B48u: goto label_161b48;
            case 0x161B4Cu: goto label_161b4c;
            case 0x161B50u: goto label_161b50;
            case 0x161B54u: goto label_161b54;
            case 0x161B58u: goto label_161b58;
            case 0x161B5Cu: goto label_161b5c;
            case 0x161B60u: goto label_161b60;
            case 0x161B64u: goto label_161b64;
            case 0x161B68u: goto label_161b68;
            case 0x161B6Cu: goto label_161b6c;
            case 0x161B70u: goto label_161b70;
            case 0x161B74u: goto label_161b74;
            case 0x161B78u: goto label_161b78;
            case 0x161B7Cu: goto label_161b7c;
            case 0x161B80u: goto label_161b80;
            case 0x161B84u: goto label_161b84;
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            case 0x161C38u: goto label_161c38;
            case 0x161C3Cu: goto label_161c3c;
            case 0x161C40u: goto label_161c40;
            case 0x161C44u: goto label_161c44;
            case 0x161C48u: goto label_161c48;
            case 0x161C4Cu: goto label_161c4c;
            case 0x161C50u: goto label_161c50;
            case 0x161C54u: goto label_161c54;
            case 0x161C58u: goto label_161c58;
            case 0x161C5Cu: goto label_161c5c;
            case 0x161C60u: goto label_161c60;
            case 0x161C64u: goto label_161c64;
            case 0x161C68u: goto label_161c68;
            case 0x161C6Cu: goto label_161c6c;
            case 0x161C70u: goto label_161c70;
            case 0x161C74u: goto label_161c74;
            case 0x161C78u: goto label_161c78;
            case 0x161C7Cu: goto label_161c7c;
            case 0x161C80u: goto label_161c80;
            case 0x161C84u: goto label_161c84;
            case 0x161C88u: goto label_161c88;
            case 0x161C8Cu: goto label_161c8c;
            case 0x161C90u: goto label_161c90;
            case 0x161C94u: goto label_161c94;
            case 0x161C98u: goto label_161c98;
            case 0x161C9Cu: goto label_161c9c;
            case 0x161CA0u: goto label_161ca0;
            case 0x161CA4u: goto label_161ca4;
            case 0x161CA8u: goto label_161ca8;
            case 0x161CACu: goto label_161cac;
            case 0x161CB0u: goto label_161cb0;
            case 0x161CB4u: goto label_161cb4;
            case 0x161CB8u: goto label_161cb8;
            case 0x161CBCu: goto label_161cbc;
            case 0x161CC0u: goto label_161cc0;
            case 0x161CC4u: goto label_161cc4;
            case 0x161CC8u: goto label_161cc8;
            case 0x161CCCu: goto label_161ccc;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CD4u: goto label_161cd4;
            case 0x161CD8u: goto label_161cd8;
            case 0x161CDCu: goto label_161cdc;
            case 0x161CE0u: goto label_161ce0;
            case 0x161CE4u: goto label_161ce4;
            case 0x161CE8u: goto label_161ce8;
            case 0x161CECu: goto label_161cec;
            case 0x161CF0u: goto label_161cf0;
            case 0x161CF4u: goto label_161cf4;
            case 0x161CF8u: goto label_161cf8;
            case 0x161CFCu: goto label_161cfc;
            case 0x161D00u: goto label_161d00;
            case 0x161D04u: goto label_161d04;
            case 0x161D08u: goto label_161d08;
            case 0x161D0Cu: goto label_161d0c;
            case 0x161D10u: goto label_161d10;
            case 0x161D14u: goto label_161d14;
            case 0x161D18u: goto label_161d18;
            case 0x161D1Cu: goto label_161d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161C14u;
label_161c14:
    // 0x161c14: 0x0
    ctx->pc = 0x161c14u;
    // NOP
label_161c18:
    // 0x161c18: 0x27bdffe0
    ctx->pc = 0x161c18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_161c1c:
    // 0x161c1c: 0x3c020001
    ctx->pc = 0x161c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
label_161c20:
    // 0x161c20: 0xffb10008
    ctx->pc = 0x161c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_161c24:
    // 0x161c24: 0xc0882d
    ctx->pc = 0x161c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_161c28:
    // 0x161c28: 0x3442ffff
    ctx->pc = 0x161c28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_161c2c:
    // 0x161c2c: 0xffb00000
    ctx->pc = 0x161c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_161c30:
    // 0x161c30: 0x51102a
    ctx->pc = 0x161c30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
label_161c34:
    // 0x161c34: 0xffb20010
    ctx->pc = 0x161c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_161c38:
    // 0x161c38: 0xffbf0018
    ctx->pc = 0x161c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_161c3c:
    // 0x161c3c: 0x249000f4
    ctx->pc = 0x161c3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 244));
label_161c40:
    // 0x161c40: 0x14400004
label_161c44:
    if (ctx->pc == 0x161C44u) {
        ctx->pc = 0x161C44u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161C48u;
        goto label_161c48;
    }
    ctx->pc = 0x161C40u;
    {
        const bool branch_taken_0x161c40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161C44u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161c40) {
            ctx->pc = 0x161C54u;
            goto label_161c54;
        }
    }
    ctx->pc = 0x161C48u;
label_161c48:
    // 0x161c48: 0x3c040024
    ctx->pc = 0x161c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_161c4c:
    // 0x161c4c: 0xc058dd4
label_161c50:
    if (ctx->pc == 0x161C50u) {
        ctx->pc = 0x161C50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966976));
        ctx->pc = 0x161C54u;
        goto label_161c54;
    }
    ctx->pc = 0x161C4Cu;
    SET_GPR_U32(ctx, 31, 0x161C54u);
    ctx->pc = 0x161C50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966976));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C54u; }
    }
    if (ctx->pc != 0x161C54u) { return; }
    ctx->pc = 0x161C54u;
label_161c54:
    // 0x161c54: 0xae110004
    ctx->pc = 0x161c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_161c58:
    // 0x161c58: 0xae120000
    ctx->pc = 0x161c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_161c5c:
    // 0x161c5c: 0xdfb10008
    ctx->pc = 0x161c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_161c60:
    // 0x161c60: 0xdfb00000
    ctx->pc = 0x161c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161c64:
    // 0x161c64: 0xdfb20010
    ctx->pc = 0x161c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161c68:
    // 0x161c68: 0xdfbf0018
    ctx->pc = 0x161c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_161c6c:
    // 0x161c6c: 0x3e00008
label_161c70:
    if (ctx->pc == 0x161C70u) {
        ctx->pc = 0x161C70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x161C74u;
        goto label_161c74;
    }
    ctx->pc = 0x161C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AC8u: goto label_161ac8;
            case 0x161ACCu: goto label_161acc;
            case 0x161AD0u: goto label_161ad0;
            case 0x161AD4u: goto label_161ad4;
            case 0x161AD8u: goto label_161ad8;
            case 0x161ADCu: goto label_161adc;
            case 0x161AE0u: goto label_161ae0;
            case 0x161AE4u: goto label_161ae4;
            case 0x161AE8u: goto label_161ae8;
            case 0x161AECu: goto label_161aec;
            case 0x161AF0u: goto label_161af0;
            case 0x161AF4u: goto label_161af4;
            case 0x161AF8u: goto label_161af8;
            case 0x161AFCu: goto label_161afc;
            case 0x161B00u: goto label_161b00;
            case 0x161B04u: goto label_161b04;
            case 0x161B08u: goto label_161b08;
            case 0x161B0Cu: goto label_161b0c;
            case 0x161B10u: goto label_161b10;
            case 0x161B14u: goto label_161b14;
            case 0x161B18u: goto label_161b18;
            case 0x161B1Cu: goto label_161b1c;
            case 0x161B20u: goto label_161b20;
            case 0x161B24u: goto label_161b24;
            case 0x161B28u: goto label_161b28;
            case 0x161B2Cu: goto label_161b2c;
            case 0x161B30u: goto label_161b30;
            case 0x161B34u: goto label_161b34;
            case 0x161B38u: goto label_161b38;
            case 0x161B3Cu: goto label_161b3c;
            case 0x161B40u: goto label_161b40;
            case 0x161B44u: goto label_161b44;
            case 0x161B48u: goto label_161b48;
            case 0x161B4Cu: goto label_161b4c;
            case 0x161B50u: goto label_161b50;
            case 0x161B54u: goto label_161b54;
            case 0x161B58u: goto label_161b58;
            case 0x161B5Cu: goto label_161b5c;
            case 0x161B60u: goto label_161b60;
            case 0x161B64u: goto label_161b64;
            case 0x161B68u: goto label_161b68;
            case 0x161B6Cu: goto label_161b6c;
            case 0x161B70u: goto label_161b70;
            case 0x161B74u: goto label_161b74;
            case 0x161B78u: goto label_161b78;
            case 0x161B7Cu: goto label_161b7c;
            case 0x161B80u: goto label_161b80;
            case 0x161B84u: goto label_161b84;
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            case 0x161C38u: goto label_161c38;
            case 0x161C3Cu: goto label_161c3c;
            case 0x161C40u: goto label_161c40;
            case 0x161C44u: goto label_161c44;
            case 0x161C48u: goto label_161c48;
            case 0x161C4Cu: goto label_161c4c;
            case 0x161C50u: goto label_161c50;
            case 0x161C54u: goto label_161c54;
            case 0x161C58u: goto label_161c58;
            case 0x161C5Cu: goto label_161c5c;
            case 0x161C60u: goto label_161c60;
            case 0x161C64u: goto label_161c64;
            case 0x161C68u: goto label_161c68;
            case 0x161C6Cu: goto label_161c6c;
            case 0x161C70u: goto label_161c70;
            case 0x161C74u: goto label_161c74;
            case 0x161C78u: goto label_161c78;
            case 0x161C7Cu: goto label_161c7c;
            case 0x161C80u: goto label_161c80;
            case 0x161C84u: goto label_161c84;
            case 0x161C88u: goto label_161c88;
            case 0x161C8Cu: goto label_161c8c;
            case 0x161C90u: goto label_161c90;
            case 0x161C94u: goto label_161c94;
            case 0x161C98u: goto label_161c98;
            case 0x161C9Cu: goto label_161c9c;
            case 0x161CA0u: goto label_161ca0;
            case 0x161CA4u: goto label_161ca4;
            case 0x161CA8u: goto label_161ca8;
            case 0x161CACu: goto label_161cac;
            case 0x161CB0u: goto label_161cb0;
            case 0x161CB4u: goto label_161cb4;
            case 0x161CB8u: goto label_161cb8;
            case 0x161CBCu: goto label_161cbc;
            case 0x161CC0u: goto label_161cc0;
            case 0x161CC4u: goto label_161cc4;
            case 0x161CC8u: goto label_161cc8;
            case 0x161CCCu: goto label_161ccc;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CD4u: goto label_161cd4;
            case 0x161CD8u: goto label_161cd8;
            case 0x161CDCu: goto label_161cdc;
            case 0x161CE0u: goto label_161ce0;
            case 0x161CE4u: goto label_161ce4;
            case 0x161CE8u: goto label_161ce8;
            case 0x161CECu: goto label_161cec;
            case 0x161CF0u: goto label_161cf0;
            case 0x161CF4u: goto label_161cf4;
            case 0x161CF8u: goto label_161cf8;
            case 0x161CFCu: goto label_161cfc;
            case 0x161D00u: goto label_161d00;
            case 0x161D04u: goto label_161d04;
            case 0x161D08u: goto label_161d08;
            case 0x161D0Cu: goto label_161d0c;
            case 0x161D10u: goto label_161d10;
            case 0x161D14u: goto label_161d14;
            case 0x161D18u: goto label_161d18;
            case 0x161D1Cu: goto label_161d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161C74u;
label_161c74:
    // 0x161c74: 0x0
    ctx->pc = 0x161c74u;
    // NOP
label_161c78:
    // 0x161c78: 0x27bdffd0
    ctx->pc = 0x161c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_161c7c:
    // 0x161c7c: 0x80102d
    ctx->pc = 0x161c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161c80:
    // 0x161c80: 0xffb00020
    ctx->pc = 0x161c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_161c84:
    // 0x161c84: 0x24430100
    ctx->pc = 0x161c84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 256));
label_161c88:
    // 0x161c88: 0xffbf0028
    ctx->pc = 0x161c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_161c8c:
    // 0x161c8c: 0x3a0202d
    ctx->pc = 0x161c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161c90:
    // 0x161c90: 0x8c680004
    ctx->pc = 0x161c90u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_161c94:
    // 0x161c94: 0x15000008
label_161c98:
    if (ctx->pc == 0x161C98u) {
        ctx->pc = 0x161C98u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->pc = 0x161C9Cu;
        goto label_161c9c;
    }
    ctx->pc = 0x161C94u;
    {
        const bool branch_taken_0x161c94 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x161C98u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 168)));
        if (branch_taken_0x161c94) {
            ctx->pc = 0x161CB8u;
            goto label_161cb8;
        }
    }
    ctx->pc = 0x161C9Cu;
label_161c9c:
    // 0x161c9c: 0x200202d
    ctx->pc = 0x161c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161ca0:
    // 0x161ca0: 0x282d
    ctx->pc = 0x161ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161ca4:
    // 0x161ca4: 0xc05f4be
label_161ca8:
    if (ctx->pc == 0x161CA8u) {
        ctx->pc = 0x161CA8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161CACu;
        goto label_161cac;
    }
    ctx->pc = 0x161CA4u;
    SET_GPR_U32(ctx, 31, 0x161CACu);
    ctx->pc = 0x161CA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D2F8_0x17d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CACu; }
    }
    if (ctx->pc != 0x161CACu) { return; }
    ctx->pc = 0x161CACu;
label_161cac:
    // 0x161cac: 0x10000019
label_161cb0:
    if (ctx->pc == 0x161CB0u) {
        ctx->pc = 0x161CB0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x161CB4u;
        goto label_161cb4;
    }
    ctx->pc = 0x161CACu;
    {
        const bool branch_taken_0x161cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161CB0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x161cac) {
            ctx->pc = 0x161D14u;
            goto label_161d14;
        }
    }
    ctx->pc = 0x161CB4u;
label_161cb4:
    // 0x161cb4: 0x0
    ctx->pc = 0x161cb4u;
    // NOP
label_161cb8:
    // 0x161cb8: 0x8c620008
    ctx->pc = 0x161cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_161cbc:
    // 0x161cbc: 0x3c050024
    ctx->pc = 0x161cbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_161cc0:
    // 0x161cc0: 0x3c060024
    ctx->pc = 0x161cc0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
label_161cc4:
    // 0x161cc4: 0x24a5fef8
    ctx->pc = 0x161cc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967032));
label_161cc8:
    // 0x161cc8: 0x24c6ff00
    ctx->pc = 0x161cc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967040));
label_161ccc:
    // 0x161ccc: 0x27a70010
    ctx->pc = 0x161cccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_161cd0:
    // 0x161cd0: 0xafa80000
    ctx->pc = 0x161cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_161cd4:
    // 0x161cd4: 0xc050288
label_161cd8:
    if (ctx->pc == 0x161CD8u) {
        ctx->pc = 0x161CD8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x161CDCu;
        goto label_161cdc;
    }
    ctx->pc = 0x161CD4u;
    SET_GPR_U32(ctx, 31, 0x161CDCu);
    ctx->pc = 0x161CD8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x140A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A20_0x140a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CDCu; }
    }
    if (ctx->pc != 0x161CDCu) { return; }
    ctx->pc = 0x161CDCu;
label_161cdc:
    // 0x161cdc: 0x200202d
    ctx->pc = 0x161cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161ce0:
    // 0x161ce0: 0x282d
    ctx->pc = 0x161ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161ce4:
    // 0x161ce4: 0x14400006
label_161ce8:
    if (ctx->pc == 0x161CE8u) {
        ctx->pc = 0x161CE8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161CECu;
        goto label_161cec;
    }
    ctx->pc = 0x161CE4u;
    {
        const bool branch_taken_0x161ce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161CE8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161ce4) {
            ctx->pc = 0x161D00u;
            goto label_161d00;
        }
    }
    ctx->pc = 0x161CECu;
label_161cec:
    // 0x161cec: 0xc05f4be
label_161cf0:
    if (ctx->pc == 0x161CF0u) {
        ctx->pc = 0x161CF4u;
        goto label_161cf4;
    }
    ctx->pc = 0x161CECu;
    SET_GPR_U32(ctx, 31, 0x161CF4u);
    ctx->pc = 0x17D2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D2F8_0x17d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CF4u; }
    }
    if (ctx->pc != 0x161CF4u) { return; }
    ctx->pc = 0x161CF4u;
label_161cf4:
    // 0x161cf4: 0x10000007
label_161cf8:
    if (ctx->pc == 0x161CF8u) {
        ctx->pc = 0x161CF8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x161CFCu;
        goto label_161cfc;
    }
    ctx->pc = 0x161CF4u;
    {
        const bool branch_taken_0x161cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x161CF8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x161cf4) {
            ctx->pc = 0x161D14u;
            goto label_161d14;
        }
    }
    ctx->pc = 0x161CFCu;
label_161cfc:
    // 0x161cfc: 0x0
    ctx->pc = 0x161cfcu;
    // NOP
label_161d00:
    // 0x161d00: 0x8fa50010
    ctx->pc = 0x161d00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_161d04:
    // 0x161d04: 0x200202d
    ctx->pc = 0x161d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161d08:
    // 0x161d08: 0xc05f4be
label_161d0c:
    if (ctx->pc == 0x161D0Cu) {
        ctx->pc = 0x161D0Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x161D10u;
        goto label_161d10;
    }
    ctx->pc = 0x161D08u;
    SET_GPR_U32(ctx, 31, 0x161D10u);
    ctx->pc = 0x161D0Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x17D2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D2F8_0x17d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D10u; }
    }
    if (ctx->pc != 0x161D10u) { return; }
    ctx->pc = 0x161D10u;
label_161d10:
    // 0x161d10: 0xdfb00020
    ctx->pc = 0x161d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161d14:
    // 0x161d14: 0xdfbf0028
    ctx->pc = 0x161d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_161d18:
    // 0x161d18: 0x3e00008
label_161d1c:
    if (ctx->pc == 0x161D1Cu) {
        ctx->pc = 0x161D1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x161D20u;
        goto label_fallthrough_0x161d18;
    }
    ctx->pc = 0x161D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AC8u: goto label_161ac8;
            case 0x161ACCu: goto label_161acc;
            case 0x161AD0u: goto label_161ad0;
            case 0x161AD4u: goto label_161ad4;
            case 0x161AD8u: goto label_161ad8;
            case 0x161ADCu: goto label_161adc;
            case 0x161AE0u: goto label_161ae0;
            case 0x161AE4u: goto label_161ae4;
            case 0x161AE8u: goto label_161ae8;
            case 0x161AECu: goto label_161aec;
            case 0x161AF0u: goto label_161af0;
            case 0x161AF4u: goto label_161af4;
            case 0x161AF8u: goto label_161af8;
            case 0x161AFCu: goto label_161afc;
            case 0x161B00u: goto label_161b00;
            case 0x161B04u: goto label_161b04;
            case 0x161B08u: goto label_161b08;
            case 0x161B0Cu: goto label_161b0c;
            case 0x161B10u: goto label_161b10;
            case 0x161B14u: goto label_161b14;
            case 0x161B18u: goto label_161b18;
            case 0x161B1Cu: goto label_161b1c;
            case 0x161B20u: goto label_161b20;
            case 0x161B24u: goto label_161b24;
            case 0x161B28u: goto label_161b28;
            case 0x161B2Cu: goto label_161b2c;
            case 0x161B30u: goto label_161b30;
            case 0x161B34u: goto label_161b34;
            case 0x161B38u: goto label_161b38;
            case 0x161B3Cu: goto label_161b3c;
            case 0x161B40u: goto label_161b40;
            case 0x161B44u: goto label_161b44;
            case 0x161B48u: goto label_161b48;
            case 0x161B4Cu: goto label_161b4c;
            case 0x161B50u: goto label_161b50;
            case 0x161B54u: goto label_161b54;
            case 0x161B58u: goto label_161b58;
            case 0x161B5Cu: goto label_161b5c;
            case 0x161B60u: goto label_161b60;
            case 0x161B64u: goto label_161b64;
            case 0x161B68u: goto label_161b68;
            case 0x161B6Cu: goto label_161b6c;
            case 0x161B70u: goto label_161b70;
            case 0x161B74u: goto label_161b74;
            case 0x161B78u: goto label_161b78;
            case 0x161B7Cu: goto label_161b7c;
            case 0x161B80u: goto label_161b80;
            case 0x161B84u: goto label_161b84;
            case 0x161B88u: goto label_161b88;
            case 0x161B8Cu: goto label_161b8c;
            case 0x161B90u: goto label_161b90;
            case 0x161B94u: goto label_161b94;
            case 0x161B98u: goto label_161b98;
            case 0x161B9Cu: goto label_161b9c;
            case 0x161BA0u: goto label_161ba0;
            case 0x161BA4u: goto label_161ba4;
            case 0x161BA8u: goto label_161ba8;
            case 0x161BACu: goto label_161bac;
            case 0x161BB0u: goto label_161bb0;
            case 0x161BB4u: goto label_161bb4;
            case 0x161BB8u: goto label_161bb8;
            case 0x161BBCu: goto label_161bbc;
            case 0x161BC0u: goto label_161bc0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161BC8u: goto label_161bc8;
            case 0x161BCCu: goto label_161bcc;
            case 0x161BD0u: goto label_161bd0;
            case 0x161BD4u: goto label_161bd4;
            case 0x161BD8u: goto label_161bd8;
            case 0x161BDCu: goto label_161bdc;
            case 0x161BE0u: goto label_161be0;
            case 0x161BE4u: goto label_161be4;
            case 0x161BE8u: goto label_161be8;
            case 0x161BECu: goto label_161bec;
            case 0x161BF0u: goto label_161bf0;
            case 0x161BF4u: goto label_161bf4;
            case 0x161BF8u: goto label_161bf8;
            case 0x161BFCu: goto label_161bfc;
            case 0x161C00u: goto label_161c00;
            case 0x161C04u: goto label_161c04;
            case 0x161C08u: goto label_161c08;
            case 0x161C0Cu: goto label_161c0c;
            case 0x161C10u: goto label_161c10;
            case 0x161C14u: goto label_161c14;
            case 0x161C18u: goto label_161c18;
            case 0x161C1Cu: goto label_161c1c;
            case 0x161C20u: goto label_161c20;
            case 0x161C24u: goto label_161c24;
            case 0x161C28u: goto label_161c28;
            case 0x161C2Cu: goto label_161c2c;
            case 0x161C30u: goto label_161c30;
            case 0x161C34u: goto label_161c34;
            case 0x161C38u: goto label_161c38;
            case 0x161C3Cu: goto label_161c3c;
            case 0x161C40u: goto label_161c40;
            case 0x161C44u: goto label_161c44;
            case 0x161C48u: goto label_161c48;
            case 0x161C4Cu: goto label_161c4c;
            case 0x161C50u: goto label_161c50;
            case 0x161C54u: goto label_161c54;
            case 0x161C58u: goto label_161c58;
            case 0x161C5Cu: goto label_161c5c;
            case 0x161C60u: goto label_161c60;
            case 0x161C64u: goto label_161c64;
            case 0x161C68u: goto label_161c68;
            case 0x161C6Cu: goto label_161c6c;
            case 0x161C70u: goto label_161c70;
            case 0x161C74u: goto label_161c74;
            case 0x161C78u: goto label_161c78;
            case 0x161C7Cu: goto label_161c7c;
            case 0x161C80u: goto label_161c80;
            case 0x161C84u: goto label_161c84;
            case 0x161C88u: goto label_161c88;
            case 0x161C8Cu: goto label_161c8c;
            case 0x161C90u: goto label_161c90;
            case 0x161C94u: goto label_161c94;
            case 0x161C98u: goto label_161c98;
            case 0x161C9Cu: goto label_161c9c;
            case 0x161CA0u: goto label_161ca0;
            case 0x161CA4u: goto label_161ca4;
            case 0x161CA8u: goto label_161ca8;
            case 0x161CACu: goto label_161cac;
            case 0x161CB0u: goto label_161cb0;
            case 0x161CB4u: goto label_161cb4;
            case 0x161CB8u: goto label_161cb8;
            case 0x161CBCu: goto label_161cbc;
            case 0x161CC0u: goto label_161cc0;
            case 0x161CC4u: goto label_161cc4;
            case 0x161CC8u: goto label_161cc8;
            case 0x161CCCu: goto label_161ccc;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CD4u: goto label_161cd4;
            case 0x161CD8u: goto label_161cd8;
            case 0x161CDCu: goto label_161cdc;
            case 0x161CE0u: goto label_161ce0;
            case 0x161CE4u: goto label_161ce4;
            case 0x161CE8u: goto label_161ce8;
            case 0x161CECu: goto label_161cec;
            case 0x161CF0u: goto label_161cf0;
            case 0x161CF4u: goto label_161cf4;
            case 0x161CF8u: goto label_161cf8;
            case 0x161CFCu: goto label_161cfc;
            case 0x161D00u: goto label_161d00;
            case 0x161D04u: goto label_161d04;
            case 0x161D08u: goto label_161d08;
            case 0x161D0Cu: goto label_161d0c;
            case 0x161D10u: goto label_161d10;
            case 0x161D14u: goto label_161d14;
            case 0x161D18u: goto label_161d18;
            case 0x161D1Cu: goto label_161d1c;
            default: break;
        }
        return;
    }
label_fallthrough_0x161d18:
    ctx->pc = 0x161D20u;
}
