#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_125f60
// Address: 0x125f60 - 0x1260d8
void entry_125f60_0x1260d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125f60u;

label_125f60:
    // 0x125f60: 0x27bdffe0
    ctx->pc = 0x125f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_125f64:
    // 0x125f64: 0x24020001
    ctx->pc = 0x125f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_125f68:
    // 0x125f68: 0xffb00000
    ctx->pc = 0x125f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125f6c:
    // 0x125f6c: 0x80802d
    ctx->pc = 0x125f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125f70:
    // 0x125f70: 0xffb10008
    ctx->pc = 0x125f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125f74:
    // 0x125f74: 0x26110048
    ctx->pc = 0x125f74u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_125f78:
    // 0x125f78: 0xffb20010
    ctx->pc = 0x125f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125f7c:
    // 0x125f7c: 0xffbf0018
    ctx->pc = 0x125f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_125f80:
    // 0x125f80: 0x8e030004
    ctx->pc = 0x125f80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_125f84:
    // 0x125f84: 0x14620043
label_125f88:
    if (ctx->pc == 0x125F88u) {
        ctx->pc = 0x125F88u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x125F8Cu;
        goto label_125f8c;
    }
    ctx->pc = 0x125F84u;
    {
        const bool branch_taken_0x125f84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x125F88u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x125f84) {
            ctx->pc = 0x126094u;
            goto label_126094;
        }
    }
    ctx->pc = 0x125F8Cu;
label_125f8c:
    // 0x125f8c: 0xc04d3e6
label_125f90:
    if (ctx->pc == 0x125F90u) {
        ctx->pc = 0x125F90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x125F94u;
        goto label_125f94;
    }
    ctx->pc = 0x125F8Cu;
    SET_GPR_U32(ctx, 31, 0x125F94u);
    ctx->pc = 0x125F90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F94u; }
    }
    if (ctx->pc != 0x125F94u) { return; }
    ctx->pc = 0x125F94u;
label_125f94:
    // 0x125f94: 0x5440003f
label_125f98:
    if (ctx->pc == 0x125F98u) {
        ctx->pc = 0x125F98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x125F9Cu;
        goto label_125f9c;
    }
    ctx->pc = 0x125F94u;
    {
        const bool branch_taken_0x125f94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x125f94) {
            ctx->pc = 0x125F98u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x126094u;
            goto label_126094;
        }
    }
    ctx->pc = 0x125F9Cu;
label_125f9c:
    // 0x125f9c: 0x8e04007c
    ctx->pc = 0x125f9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_125fa0:
    // 0x125fa0: 0x26050068
    ctx->pc = 0x125fa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_125fa4:
    // 0x125fa4: 0x8e020078
    ctx->pc = 0x125fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_125fa8:
    // 0x125fa8: 0x2606006c
    ctx->pc = 0x125fa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_125fac:
    // 0x125fac: 0x40f809
label_125fb0:
    if (ctx->pc == 0x125FB0u) {
        ctx->pc = 0x125FB0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x125FB4u;
        goto label_125fb4;
    }
    ctx->pc = 0x125FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125FB4u);
        ctx->pc = 0x125FB0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125FB4u; }
            if (ctx->pc != 0x125FB4u) { return; }
        }
    }
    ctx->pc = 0x125FB4u;
label_125fb4:
    // 0x125fb4: 0x8e240018
    ctx->pc = 0x125fb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_125fb8:
    // 0x125fb8: 0x8e270020
    ctx->pc = 0x125fb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_125fbc:
    // 0x125fbc: 0x24060002
    ctx->pc = 0x125fbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_125fc0:
    // 0x125fc0: 0x8e230024
    ctx->pc = 0x125fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_125fc4:
    // 0x125fc4: 0x874823
    ctx->pc = 0x125fc4u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_125fc8:
    // 0x125fc8: 0x8204000e
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_125fcc:
    // 0x125fcc: 0x69102a
    ctx->pc = 0x125fccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_125fd0:
    // 0x125fd0: 0x8e250004
    ctx->pc = 0x125fd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_125fd4:
    // 0x125fd4: 0x62480b
    ctx->pc = 0x125fd4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_125fd8:
    // 0x125fd8: 0x71840
    ctx->pc = 0x125fd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_125fdc:
    // 0x125fdc: 0x8e2b0014
    ctx->pc = 0x125fdcu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_125fe0:
    // 0x125fe0: 0xa9102a
    ctx->pc = 0x125fe0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_125fe4:
    // 0x125fe4: 0xa2480b
    ctx->pc = 0x125fe4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_125fe8:
    // 0x125fe8: 0x1635021
    ctx->pc = 0x125fe8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_125fec:
    // 0x125fec: 0x14860016
label_125ff0:
    if (ctx->pc == 0x125FF0u) {
        ctx->pc = 0x125FF0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x125FF4u;
        goto label_125ff4;
    }
    ctx->pc = 0x125FECu;
    {
        const bool branch_taken_0x125fec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x125FF0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x125fec) {
            ctx->pc = 0x126048u;
            goto label_126048;
        }
    }
    ctx->pc = 0x125FF4u;
label_125ff4:
    // 0x125ff4: 0x8e22001c
    ctx->pc = 0x125ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_125ff8:
    // 0x125ff8: 0x402d
    ctx->pc = 0x125ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125ffc:
    // 0x125ffc: 0x471021
    ctx->pc = 0x125ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_126000:
    // 0x126000: 0x21040
    ctx->pc = 0x126000u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_126004:
    // 0x126004: 0x1920001b
label_126008:
    if (ctx->pc == 0x126008u) {
        ctx->pc = 0x126008u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x12600Cu;
        goto label_12600c;
    }
    ctx->pc = 0x126004u;
    {
        const bool branch_taken_0x126004 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126008u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x126004) {
            ctx->pc = 0x126074u;
            goto label_126074;
        }
    }
    ctx->pc = 0x12600Cu;
label_12600c:
    // 0x12600c: 0x240382d
    ctx->pc = 0x12600cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126010:
    // 0x126010: 0x81840
    ctx->pc = 0x126010u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
label_126014:
    // 0x126014: 0x25080001
    ctx->pc = 0x126014u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126018:
    // 0x126018: 0x94e50000
    ctx->pc = 0x126018u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_12601c:
    // 0x12601c: 0x6a2021
    ctx->pc = 0x12601cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_126020:
    // 0x126020: 0x109302a
    ctx->pc = 0x126020u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126024:
    // 0x126024: 0x6b1821
    ctx->pc = 0x126024u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_126028:
    // 0x126028: 0xa4850000
    ctx->pc = 0x126028u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_12602c:
    // 0x12602c: 0x94e20002
    ctx->pc = 0x12602cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_126030:
    // 0x126030: 0x24e70004
    ctx->pc = 0x126030u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_126034:
    // 0x126034: 0x14c0fff6
label_126038:
    if (ctx->pc == 0x126038u) {
        ctx->pc = 0x126038u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12603Cu;
        goto label_12603c;
    }
    ctx->pc = 0x126034u;
    {
        const bool branch_taken_0x126034 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x126038u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x126034) {
            ctx->pc = 0x126010u;
            goto label_126010;
        }
    }
    ctx->pc = 0x12603Cu;
label_12603c:
    // 0x12603c: 0x1000000d
label_126040:
    if (ctx->pc == 0x126040u) {
        ctx->pc = 0x126040u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x126044u;
        goto label_126044;
    }
    ctx->pc = 0x12603Cu;
    {
        const bool branch_taken_0x12603c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126040u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12603c) {
            ctx->pc = 0x126074u;
            goto label_126074;
        }
    }
    ctx->pc = 0x126044u;
label_126044:
    // 0x126044: 0x0
    ctx->pc = 0x126044u;
    // NOP
label_126048:
    // 0x126048: 0x1920000a
label_12604c:
    if (ctx->pc == 0x12604Cu) {
        ctx->pc = 0x12604Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x126050u;
        goto label_126050;
    }
    ctx->pc = 0x126048u;
    {
        const bool branch_taken_0x126048 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x12604Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x126048) {
            ctx->pc = 0x126074u;
            goto label_126074;
        }
    }
    ctx->pc = 0x126050u;
label_126050:
    // 0x126050: 0x81040
    ctx->pc = 0x126050u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
label_126054:
    // 0x126054: 0x25080001
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126058:
    // 0x126058: 0x521821
    ctx->pc = 0x126058u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_12605c:
    // 0x12605c: 0x4a1021
    ctx->pc = 0x12605cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_126060:
    // 0x126060: 0x94640000
    ctx->pc = 0x126060u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_126064:
    // 0x126064: 0x109282a
    ctx->pc = 0x126064u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126068:
    // 0x126068: 0x14a0fff9
label_12606c:
    if (ctx->pc == 0x12606Cu) {
        ctx->pc = 0x12606Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x126070u;
        goto label_126070;
    }
    ctx->pc = 0x126068u;
    {
        const bool branch_taken_0x126068 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12606Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x126068) {
            ctx->pc = 0x126050u;
            goto label_126050;
        }
    }
    ctx->pc = 0x126070u;
label_126070:
    // 0x126070: 0x9203000e
    ctx->pc = 0x126070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_126074:
    // 0x126074: 0x31600
    ctx->pc = 0x126074u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_126078:
    // 0x126078: 0x24030002
    ctx->pc = 0x126078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_12607c:
    // 0x12607c: 0x21603
    ctx->pc = 0x12607cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_126080:
    // 0x126080: 0xae030004
    ctx->pc = 0x126080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_126084:
    // 0x126084: 0x1221018
    ctx->pc = 0x126084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_126088:
    // 0x126088: 0xae090090
    ctx->pc = 0x126088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_12608c:
    // 0x12608c: 0x21040
    ctx->pc = 0x12608cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_126090:
    // 0x126090: 0xae020094
    ctx->pc = 0x126090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_126094:
    // 0x126094: 0x24020002
    ctx->pc = 0x126094u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_126098:
    // 0x126098: 0x54620009
label_12609c:
    if (ctx->pc == 0x12609Cu) {
        ctx->pc = 0x12609Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1260A0u;
        goto label_1260a0;
    }
    ctx->pc = 0x126098u;
    {
        const bool branch_taken_0x126098 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x126098) {
            ctx->pc = 0x12609Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1260C0u;
            goto label_1260c0;
        }
    }
    ctx->pc = 0x1260A0u;
label_1260a0:
    // 0x1260a0: 0x8e030080
    ctx->pc = 0x1260a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1260a4:
    // 0x1260a4: 0x8e040084
    ctx->pc = 0x1260a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1260a8:
    // 0x1260a8: 0x8e050094
    ctx->pc = 0x1260a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1260ac:
    // 0x1260ac: 0x60f809
label_1260b0:
    if (ctx->pc == 0x1260B0u) {
        ctx->pc = 0x1260B0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1260B4u;
        goto label_1260b4;
    }
    ctx->pc = 0x1260ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1260B4u);
        ctx->pc = 0x1260B0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1260B4u; }
            if (ctx->pc != 0x1260B4u) { return; }
        }
    }
    ctx->pc = 0x1260B4u;
label_1260b4:
    // 0x1260b4: 0x24020003
    ctx->pc = 0x1260b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1260b8:
    // 0x1260b8: 0xae020004
    ctx->pc = 0x1260b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1260bc:
    // 0x1260bc: 0xdfb00000
    ctx->pc = 0x1260bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1260c0:
    // 0x1260c0: 0xdfb10008
    ctx->pc = 0x1260c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1260c4:
    // 0x1260c4: 0xdfb20010
    ctx->pc = 0x1260c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1260c8:
    // 0x1260c8: 0xdfbf0018
    ctx->pc = 0x1260c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1260cc:
    // 0x1260cc: 0x3e00008
label_1260d0:
    if (ctx->pc == 0x1260D0u) {
        ctx->pc = 0x1260D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1260D4u;
        goto label_1260d4;
    }
    ctx->pc = 0x1260CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1260D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125F60u: goto label_125f60;
            case 0x125F64u: goto label_125f64;
            case 0x125F68u: goto label_125f68;
            case 0x125F6Cu: goto label_125f6c;
            case 0x125F70u: goto label_125f70;
            case 0x125F74u: goto label_125f74;
            case 0x125F78u: goto label_125f78;
            case 0x125F7Cu: goto label_125f7c;
            case 0x125F80u: goto label_125f80;
            case 0x125F84u: goto label_125f84;
            case 0x125F88u: goto label_125f88;
            case 0x125F8Cu: goto label_125f8c;
            case 0x125F90u: goto label_125f90;
            case 0x125F94u: goto label_125f94;
            case 0x125F98u: goto label_125f98;
            case 0x125F9Cu: goto label_125f9c;
            case 0x125FA0u: goto label_125fa0;
            case 0x125FA4u: goto label_125fa4;
            case 0x125FA8u: goto label_125fa8;
            case 0x125FACu: goto label_125fac;
            case 0x125FB0u: goto label_125fb0;
            case 0x125FB4u: goto label_125fb4;
            case 0x125FB8u: goto label_125fb8;
            case 0x125FBCu: goto label_125fbc;
            case 0x125FC0u: goto label_125fc0;
            case 0x125FC4u: goto label_125fc4;
            case 0x125FC8u: goto label_125fc8;
            case 0x125FCCu: goto label_125fcc;
            case 0x125FD0u: goto label_125fd0;
            case 0x125FD4u: goto label_125fd4;
            case 0x125FD8u: goto label_125fd8;
            case 0x125FDCu: goto label_125fdc;
            case 0x125FE0u: goto label_125fe0;
            case 0x125FE4u: goto label_125fe4;
            case 0x125FE8u: goto label_125fe8;
            case 0x125FECu: goto label_125fec;
            case 0x125FF0u: goto label_125ff0;
            case 0x125FF4u: goto label_125ff4;
            case 0x125FF8u: goto label_125ff8;
            case 0x125FFCu: goto label_125ffc;
            case 0x126000u: goto label_126000;
            case 0x126004u: goto label_126004;
            case 0x126008u: goto label_126008;
            case 0x12600Cu: goto label_12600c;
            case 0x126010u: goto label_126010;
            case 0x126014u: goto label_126014;
            case 0x126018u: goto label_126018;
            case 0x12601Cu: goto label_12601c;
            case 0x126020u: goto label_126020;
            case 0x126024u: goto label_126024;
            case 0x126028u: goto label_126028;
            case 0x12602Cu: goto label_12602c;
            case 0x126030u: goto label_126030;
            case 0x126034u: goto label_126034;
            case 0x126038u: goto label_126038;
            case 0x12603Cu: goto label_12603c;
            case 0x126040u: goto label_126040;
            case 0x126044u: goto label_126044;
            case 0x126048u: goto label_126048;
            case 0x12604Cu: goto label_12604c;
            case 0x126050u: goto label_126050;
            case 0x126054u: goto label_126054;
            case 0x126058u: goto label_126058;
            case 0x12605Cu: goto label_12605c;
            case 0x126060u: goto label_126060;
            case 0x126064u: goto label_126064;
            case 0x126068u: goto label_126068;
            case 0x12606Cu: goto label_12606c;
            case 0x126070u: goto label_126070;
            case 0x126074u: goto label_126074;
            case 0x126078u: goto label_126078;
            case 0x12607Cu: goto label_12607c;
            case 0x126080u: goto label_126080;
            case 0x126084u: goto label_126084;
            case 0x126088u: goto label_126088;
            case 0x12608Cu: goto label_12608c;
            case 0x126090u: goto label_126090;
            case 0x126094u: goto label_126094;
            case 0x126098u: goto label_126098;
            case 0x12609Cu: goto label_12609c;
            case 0x1260A0u: goto label_1260a0;
            case 0x1260A4u: goto label_1260a4;
            case 0x1260A8u: goto label_1260a8;
            case 0x1260ACu: goto label_1260ac;
            case 0x1260B0u: goto label_1260b0;
            case 0x1260B4u: goto label_1260b4;
            case 0x1260B8u: goto label_1260b8;
            case 0x1260BCu: goto label_1260bc;
            case 0x1260C0u: goto label_1260c0;
            case 0x1260C4u: goto label_1260c4;
            case 0x1260C8u: goto label_1260c8;
            case 0x1260CCu: goto label_1260cc;
            case 0x1260D0u: goto label_1260d0;
            case 0x1260D4u: goto label_1260d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1260D4u;
label_1260d4:
    // 0x1260d4: 0x0
    ctx->pc = 0x1260d4u;
    // NOP
}
