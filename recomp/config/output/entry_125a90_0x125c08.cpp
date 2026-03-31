#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_125a90
// Address: 0x125a90 - 0x125c08
void entry_125a90_0x125c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125a90u;

label_125a90:
    // 0x125a90: 0x27bdffe0
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_125a94:
    // 0x125a94: 0x24020001
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_125a98:
    // 0x125a98: 0xffb00000
    ctx->pc = 0x125a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125a9c:
    // 0x125a9c: 0x80802d
    ctx->pc = 0x125a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125aa0:
    // 0x125aa0: 0xffb10008
    ctx->pc = 0x125aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125aa4:
    // 0x125aa4: 0x26110048
    ctx->pc = 0x125aa4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_125aa8:
    // 0x125aa8: 0xffb20010
    ctx->pc = 0x125aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125aac:
    // 0x125aac: 0xffbf0018
    ctx->pc = 0x125aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_125ab0:
    // 0x125ab0: 0x8e030004
    ctx->pc = 0x125ab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_125ab4:
    // 0x125ab4: 0x14620043
label_125ab8:
    if (ctx->pc == 0x125AB8u) {
        ctx->pc = 0x125AB8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x125ABCu;
        goto label_125abc;
    }
    ctx->pc = 0x125AB4u;
    {
        const bool branch_taken_0x125ab4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x125AB8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x125ab4) {
            ctx->pc = 0x125BC4u;
            goto label_125bc4;
        }
    }
    ctx->pc = 0x125ABCu;
label_125abc:
    // 0x125abc: 0xc04d3e6
label_125ac0:
    if (ctx->pc == 0x125AC0u) {
        ctx->pc = 0x125AC0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125AC4u;
        goto label_125ac4;
    }
    ctx->pc = 0x125ABCu;
    SET_GPR_U32(ctx, 31, 0x125AC4u);
    ctx->pc = 0x125AC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125AC4u; }
    }
    if (ctx->pc != 0x125AC4u) { return; }
    ctx->pc = 0x125AC4u;
label_125ac4:
    // 0x125ac4: 0x5440003f
label_125ac8:
    if (ctx->pc == 0x125AC8u) {
        ctx->pc = 0x125AC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x125ACCu;
        goto label_125acc;
    }
    ctx->pc = 0x125AC4u;
    {
        const bool branch_taken_0x125ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125ac4) {
            ctx->pc = 0x125AC8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x125BC4u;
            goto label_125bc4;
        }
    }
    ctx->pc = 0x125ACCu;
label_125acc:
    // 0x125acc: 0x8e04007c
    ctx->pc = 0x125accu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_125ad0:
    // 0x125ad0: 0x26050068
    ctx->pc = 0x125ad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_125ad4:
    // 0x125ad4: 0x8e020078
    ctx->pc = 0x125ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_125ad8:
    // 0x125ad8: 0x2606006c
    ctx->pc = 0x125ad8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_125adc:
    // 0x125adc: 0x40f809
label_125ae0:
    if (ctx->pc == 0x125AE0u) {
        ctx->pc = 0x125AE0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x125AE4u;
        goto label_125ae4;
    }
    ctx->pc = 0x125ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125AE4u);
        ctx->pc = 0x125AE0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125AE4u; }
            if (ctx->pc != 0x125AE4u) { return; }
        }
    }
    ctx->pc = 0x125AE4u;
label_125ae4:
    // 0x125ae4: 0x8e240018
    ctx->pc = 0x125ae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_125ae8:
    // 0x125ae8: 0x8e270020
    ctx->pc = 0x125ae8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_125aec:
    // 0x125aec: 0x24060002
    ctx->pc = 0x125aecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_125af0:
    // 0x125af0: 0x8e230024
    ctx->pc = 0x125af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_125af4:
    // 0x125af4: 0x874823
    ctx->pc = 0x125af4u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_125af8:
    // 0x125af8: 0x8204000e
    ctx->pc = 0x125af8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_125afc:
    // 0x125afc: 0x69102a
    ctx->pc = 0x125afcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_125b00:
    // 0x125b00: 0x8e250004
    ctx->pc = 0x125b00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125b04:
    // 0x125b04: 0x62480b
    ctx->pc = 0x125b04u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_125b08:
    // 0x125b08: 0x71840
    ctx->pc = 0x125b08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_125b0c:
    // 0x125b0c: 0x8e2b0014
    ctx->pc = 0x125b0cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_125b10:
    // 0x125b10: 0xa9102a
    ctx->pc = 0x125b10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_125b14:
    // 0x125b14: 0xa2480b
    ctx->pc = 0x125b14u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_125b18:
    // 0x125b18: 0x1635021
    ctx->pc = 0x125b18u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_125b1c:
    // 0x125b1c: 0x14860016
label_125b20:
    if (ctx->pc == 0x125B20u) {
        ctx->pc = 0x125B20u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x125B24u;
        goto label_125b24;
    }
    ctx->pc = 0x125B1Cu;
    {
        const bool branch_taken_0x125b1c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x125B20u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x125b1c) {
            ctx->pc = 0x125B78u;
            goto label_125b78;
        }
    }
    ctx->pc = 0x125B24u;
label_125b24:
    // 0x125b24: 0x8e22001c
    ctx->pc = 0x125b24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_125b28:
    // 0x125b28: 0x402d
    ctx->pc = 0x125b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125b2c:
    // 0x125b2c: 0x471021
    ctx->pc = 0x125b2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_125b30:
    // 0x125b30: 0x21040
    ctx->pc = 0x125b30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_125b34:
    // 0x125b34: 0x1920001b
label_125b38:
    if (ctx->pc == 0x125B38u) {
        ctx->pc = 0x125B38u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x125B3Cu;
        goto label_125b3c;
    }
    ctx->pc = 0x125B34u;
    {
        const bool branch_taken_0x125b34 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x125B38u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x125b34) {
            ctx->pc = 0x125BA4u;
            goto label_125ba4;
        }
    }
    ctx->pc = 0x125B3Cu;
label_125b3c:
    // 0x125b3c: 0x240382d
    ctx->pc = 0x125b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125b40:
    // 0x125b40: 0x81840
    ctx->pc = 0x125b40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
label_125b44:
    // 0x125b44: 0x25080001
    ctx->pc = 0x125b44u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_125b48:
    // 0x125b48: 0x94e50000
    ctx->pc = 0x125b48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_125b4c:
    // 0x125b4c: 0x6a2021
    ctx->pc = 0x125b4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_125b50:
    // 0x125b50: 0x109302a
    ctx->pc = 0x125b50u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_125b54:
    // 0x125b54: 0x6b1821
    ctx->pc = 0x125b54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_125b58:
    // 0x125b58: 0xa4850000
    ctx->pc = 0x125b58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_125b5c:
    // 0x125b5c: 0x94e20002
    ctx->pc = 0x125b5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_125b60:
    // 0x125b60: 0x24e70004
    ctx->pc = 0x125b60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_125b64:
    // 0x125b64: 0x14c0fff6
label_125b68:
    if (ctx->pc == 0x125B68u) {
        ctx->pc = 0x125B68u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x125B6Cu;
        goto label_125b6c;
    }
    ctx->pc = 0x125B64u;
    {
        const bool branch_taken_0x125b64 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x125B68u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x125b64) {
            ctx->pc = 0x125B40u;
            goto label_125b40;
        }
    }
    ctx->pc = 0x125B6Cu;
label_125b6c:
    // 0x125b6c: 0x1000000d
label_125b70:
    if (ctx->pc == 0x125B70u) {
        ctx->pc = 0x125B70u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x125B74u;
        goto label_125b74;
    }
    ctx->pc = 0x125B6Cu;
    {
        const bool branch_taken_0x125b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125B70u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x125b6c) {
            ctx->pc = 0x125BA4u;
            goto label_125ba4;
        }
    }
    ctx->pc = 0x125B74u;
label_125b74:
    // 0x125b74: 0x0
    ctx->pc = 0x125b74u;
    // NOP
label_125b78:
    // 0x125b78: 0x1920000a
label_125b7c:
    if (ctx->pc == 0x125B7Cu) {
        ctx->pc = 0x125B7Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125B80u;
        goto label_125b80;
    }
    ctx->pc = 0x125B78u;
    {
        const bool branch_taken_0x125b78 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x125B7Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125b78) {
            ctx->pc = 0x125BA4u;
            goto label_125ba4;
        }
    }
    ctx->pc = 0x125B80u;
label_125b80:
    // 0x125b80: 0x81040
    ctx->pc = 0x125b80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
label_125b84:
    // 0x125b84: 0x25080001
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_125b88:
    // 0x125b88: 0x521821
    ctx->pc = 0x125b88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_125b8c:
    // 0x125b8c: 0x4a1021
    ctx->pc = 0x125b8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_125b90:
    // 0x125b90: 0x94640000
    ctx->pc = 0x125b90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_125b94:
    // 0x125b94: 0x109282a
    ctx->pc = 0x125b94u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_125b98:
    // 0x125b98: 0x14a0fff9
label_125b9c:
    if (ctx->pc == 0x125B9Cu) {
        ctx->pc = 0x125B9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x125BA0u;
        goto label_125ba0;
    }
    ctx->pc = 0x125B98u;
    {
        const bool branch_taken_0x125b98 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x125B9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x125b98) {
            ctx->pc = 0x125B80u;
            goto label_125b80;
        }
    }
    ctx->pc = 0x125BA0u;
label_125ba0:
    // 0x125ba0: 0x9203000e
    ctx->pc = 0x125ba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_125ba4:
    // 0x125ba4: 0x31600
    ctx->pc = 0x125ba4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_125ba8:
    // 0x125ba8: 0x24030002
    ctx->pc = 0x125ba8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_125bac:
    // 0x125bac: 0x21603
    ctx->pc = 0x125bacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_125bb0:
    // 0x125bb0: 0xae030004
    ctx->pc = 0x125bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_125bb4:
    // 0x125bb4: 0x1221018
    ctx->pc = 0x125bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_125bb8:
    // 0x125bb8: 0xae090090
    ctx->pc = 0x125bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_125bbc:
    // 0x125bbc: 0x21040
    ctx->pc = 0x125bbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_125bc0:
    // 0x125bc0: 0xae020094
    ctx->pc = 0x125bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_125bc4:
    // 0x125bc4: 0x24020002
    ctx->pc = 0x125bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_125bc8:
    // 0x125bc8: 0x54620009
label_125bcc:
    if (ctx->pc == 0x125BCCu) {
        ctx->pc = 0x125BCCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x125BD0u;
        goto label_125bd0;
    }
    ctx->pc = 0x125BC8u;
    {
        const bool branch_taken_0x125bc8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x125bc8) {
            ctx->pc = 0x125BCCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x125BF0u;
            goto label_125bf0;
        }
    }
    ctx->pc = 0x125BD0u;
label_125bd0:
    // 0x125bd0: 0x8e030080
    ctx->pc = 0x125bd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_125bd4:
    // 0x125bd4: 0x8e040084
    ctx->pc = 0x125bd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_125bd8:
    // 0x125bd8: 0x8e050094
    ctx->pc = 0x125bd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_125bdc:
    // 0x125bdc: 0x60f809
label_125be0:
    if (ctx->pc == 0x125BE0u) {
        ctx->pc = 0x125BE0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x125BE4u;
        goto label_125be4;
    }
    ctx->pc = 0x125BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x125BE4u);
        ctx->pc = 0x125BE0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125BE4u; }
            if (ctx->pc != 0x125BE4u) { return; }
        }
    }
    ctx->pc = 0x125BE4u;
label_125be4:
    // 0x125be4: 0x24020003
    ctx->pc = 0x125be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_125be8:
    // 0x125be8: 0xae020004
    ctx->pc = 0x125be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_125bec:
    // 0x125bec: 0xdfb00000
    ctx->pc = 0x125becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125bf0:
    // 0x125bf0: 0xdfb10008
    ctx->pc = 0x125bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125bf4:
    // 0x125bf4: 0xdfb20010
    ctx->pc = 0x125bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125bf8:
    // 0x125bf8: 0xdfbf0018
    ctx->pc = 0x125bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125bfc:
    // 0x125bfc: 0x3e00008
label_125c00:
    if (ctx->pc == 0x125C00u) {
        ctx->pc = 0x125C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x125C04u;
        goto label_125c04;
    }
    ctx->pc = 0x125BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125A90u: goto label_125a90;
            case 0x125A94u: goto label_125a94;
            case 0x125A98u: goto label_125a98;
            case 0x125A9Cu: goto label_125a9c;
            case 0x125AA0u: goto label_125aa0;
            case 0x125AA4u: goto label_125aa4;
            case 0x125AA8u: goto label_125aa8;
            case 0x125AACu: goto label_125aac;
            case 0x125AB0u: goto label_125ab0;
            case 0x125AB4u: goto label_125ab4;
            case 0x125AB8u: goto label_125ab8;
            case 0x125ABCu: goto label_125abc;
            case 0x125AC0u: goto label_125ac0;
            case 0x125AC4u: goto label_125ac4;
            case 0x125AC8u: goto label_125ac8;
            case 0x125ACCu: goto label_125acc;
            case 0x125AD0u: goto label_125ad0;
            case 0x125AD4u: goto label_125ad4;
            case 0x125AD8u: goto label_125ad8;
            case 0x125ADCu: goto label_125adc;
            case 0x125AE0u: goto label_125ae0;
            case 0x125AE4u: goto label_125ae4;
            case 0x125AE8u: goto label_125ae8;
            case 0x125AECu: goto label_125aec;
            case 0x125AF0u: goto label_125af0;
            case 0x125AF4u: goto label_125af4;
            case 0x125AF8u: goto label_125af8;
            case 0x125AFCu: goto label_125afc;
            case 0x125B00u: goto label_125b00;
            case 0x125B04u: goto label_125b04;
            case 0x125B08u: goto label_125b08;
            case 0x125B0Cu: goto label_125b0c;
            case 0x125B10u: goto label_125b10;
            case 0x125B14u: goto label_125b14;
            case 0x125B18u: goto label_125b18;
            case 0x125B1Cu: goto label_125b1c;
            case 0x125B20u: goto label_125b20;
            case 0x125B24u: goto label_125b24;
            case 0x125B28u: goto label_125b28;
            case 0x125B2Cu: goto label_125b2c;
            case 0x125B30u: goto label_125b30;
            case 0x125B34u: goto label_125b34;
            case 0x125B38u: goto label_125b38;
            case 0x125B3Cu: goto label_125b3c;
            case 0x125B40u: goto label_125b40;
            case 0x125B44u: goto label_125b44;
            case 0x125B48u: goto label_125b48;
            case 0x125B4Cu: goto label_125b4c;
            case 0x125B50u: goto label_125b50;
            case 0x125B54u: goto label_125b54;
            case 0x125B58u: goto label_125b58;
            case 0x125B5Cu: goto label_125b5c;
            case 0x125B60u: goto label_125b60;
            case 0x125B64u: goto label_125b64;
            case 0x125B68u: goto label_125b68;
            case 0x125B6Cu: goto label_125b6c;
            case 0x125B70u: goto label_125b70;
            case 0x125B74u: goto label_125b74;
            case 0x125B78u: goto label_125b78;
            case 0x125B7Cu: goto label_125b7c;
            case 0x125B80u: goto label_125b80;
            case 0x125B84u: goto label_125b84;
            case 0x125B88u: goto label_125b88;
            case 0x125B8Cu: goto label_125b8c;
            case 0x125B90u: goto label_125b90;
            case 0x125B94u: goto label_125b94;
            case 0x125B98u: goto label_125b98;
            case 0x125B9Cu: goto label_125b9c;
            case 0x125BA0u: goto label_125ba0;
            case 0x125BA4u: goto label_125ba4;
            case 0x125BA8u: goto label_125ba8;
            case 0x125BACu: goto label_125bac;
            case 0x125BB0u: goto label_125bb0;
            case 0x125BB4u: goto label_125bb4;
            case 0x125BB8u: goto label_125bb8;
            case 0x125BBCu: goto label_125bbc;
            case 0x125BC0u: goto label_125bc0;
            case 0x125BC4u: goto label_125bc4;
            case 0x125BC8u: goto label_125bc8;
            case 0x125BCCu: goto label_125bcc;
            case 0x125BD0u: goto label_125bd0;
            case 0x125BD4u: goto label_125bd4;
            case 0x125BD8u: goto label_125bd8;
            case 0x125BDCu: goto label_125bdc;
            case 0x125BE0u: goto label_125be0;
            case 0x125BE4u: goto label_125be4;
            case 0x125BE8u: goto label_125be8;
            case 0x125BECu: goto label_125bec;
            case 0x125BF0u: goto label_125bf0;
            case 0x125BF4u: goto label_125bf4;
            case 0x125BF8u: goto label_125bf8;
            case 0x125BFCu: goto label_125bfc;
            case 0x125C00u: goto label_125c00;
            case 0x125C04u: goto label_125c04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125C04u;
label_125c04:
    // 0x125c04: 0x0
    ctx->pc = 0x125c04u;
    // NOP
}
