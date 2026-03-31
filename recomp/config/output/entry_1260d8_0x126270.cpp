#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1260d8
// Address: 0x1260d8 - 0x126270
void entry_1260d8_0x126270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1260d8u;

label_1260d8:
    // 0x1260d8: 0x27bdffe0
    ctx->pc = 0x1260d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1260dc:
    // 0x1260dc: 0x24020001
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1260e0:
    // 0x1260e0: 0xffb00000
    ctx->pc = 0x1260e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1260e4:
    // 0x1260e4: 0x80802d
    ctx->pc = 0x1260e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1260e8:
    // 0x1260e8: 0xffb10008
    ctx->pc = 0x1260e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1260ec:
    // 0x1260ec: 0x26110048
    ctx->pc = 0x1260ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_1260f0:
    // 0x1260f0: 0xffb20010
    ctx->pc = 0x1260f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1260f4:
    // 0x1260f4: 0xffbf0018
    ctx->pc = 0x1260f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1260f8:
    // 0x1260f8: 0x8e030004
    ctx->pc = 0x1260f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1260fc:
    // 0x1260fc: 0x1462004b
label_126100:
    if (ctx->pc == 0x126100u) {
        ctx->pc = 0x126100u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x126104u;
        goto label_126104;
    }
    ctx->pc = 0x1260FCu;
    {
        const bool branch_taken_0x1260fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x126100u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x1260fc) {
            ctx->pc = 0x12622Cu;
            goto label_12622c;
        }
    }
    ctx->pc = 0x126104u;
label_126104:
    // 0x126104: 0xc04d3e6
label_126108:
    if (ctx->pc == 0x126108u) {
        ctx->pc = 0x126108u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x12610Cu;
        goto label_12610c;
    }
    ctx->pc = 0x126104u;
    SET_GPR_U32(ctx, 31, 0x12610Cu);
    ctx->pc = 0x126108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12610Cu; }
    }
    if (ctx->pc != 0x12610Cu) { return; }
    ctx->pc = 0x12610Cu;
label_12610c:
    // 0x12610c: 0x54400047
label_126110:
    if (ctx->pc == 0x126110u) {
        ctx->pc = 0x126110u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x126114u;
        goto label_126114;
    }
    ctx->pc = 0x12610Cu;
    {
        const bool branch_taken_0x12610c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12610c) {
            ctx->pc = 0x126110u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x12622Cu;
            goto label_12622c;
        }
    }
    ctx->pc = 0x126114u;
label_126114:
    // 0x126114: 0x8e04007c
    ctx->pc = 0x126114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_126118:
    // 0x126118: 0x26050068
    ctx->pc = 0x126118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_12611c:
    // 0x12611c: 0x8e020078
    ctx->pc = 0x12611cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_126120:
    // 0x126120: 0x2606006c
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_126124:
    // 0x126124: 0x40f809
label_126128:
    if (ctx->pc == 0x126128u) {
        ctx->pc = 0x126128u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x12612Cu;
        goto label_12612c;
    }
    ctx->pc = 0x126124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12612Cu);
        ctx->pc = 0x126128u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12612Cu; }
            if (ctx->pc != 0x12612Cu) { return; }
        }
    }
    ctx->pc = 0x12612Cu;
label_12612c:
    // 0x12612c: 0x8e240018
    ctx->pc = 0x12612cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_126130:
    // 0x126130: 0x8e270020
    ctx->pc = 0x126130u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_126134:
    // 0x126134: 0x24060002
    ctx->pc = 0x126134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_126138:
    // 0x126138: 0x8e230024
    ctx->pc = 0x126138u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_12613c:
    // 0x12613c: 0x874823
    ctx->pc = 0x12613cu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_126140:
    // 0x126140: 0x8204000e
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_126144:
    // 0x126144: 0x69102a
    ctx->pc = 0x126144u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_126148:
    // 0x126148: 0x8e250004
    ctx->pc = 0x126148u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12614c:
    // 0x12614c: 0x62480b
    ctx->pc = 0x12614cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_126150:
    // 0x126150: 0x71840
    ctx->pc = 0x126150u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_126154:
    // 0x126154: 0x8e2a0014
    ctx->pc = 0x126154u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_126158:
    // 0x126158: 0xa9102a
    ctx->pc = 0x126158u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_12615c:
    // 0x12615c: 0xa2480b
    ctx->pc = 0x12615cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_126160:
    // 0x126160: 0x1435821
    ctx->pc = 0x126160u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_126164:
    // 0x126164: 0x1486001c
label_126168:
    if (ctx->pc == 0x126168u) {
        ctx->pc = 0x126168u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x12616Cu;
        goto label_12616c;
    }
    ctx->pc = 0x126164u;
    {
        const bool branch_taken_0x126164 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x126168u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x126164) {
            ctx->pc = 0x1261D8u;
            goto label_1261d8;
        }
    }
    ctx->pc = 0x12616Cu;
label_12616c:
    // 0x12616c: 0x8e22001c
    ctx->pc = 0x12616cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_126170:
    // 0x126170: 0x402d
    ctx->pc = 0x126170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126174:
    // 0x126174: 0x471021
    ctx->pc = 0x126174u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_126178:
    // 0x126178: 0x21040
    ctx->pc = 0x126178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_12617c:
    // 0x12617c: 0x19200024
label_126180:
    if (ctx->pc == 0x126180u) {
        ctx->pc = 0x126180u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x126184u;
        goto label_126184;
    }
    ctx->pc = 0x12617Cu;
    {
        const bool branch_taken_0x12617c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126180u;
        SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        if (branch_taken_0x12617c) {
            ctx->pc = 0x126210u;
            goto label_126210;
        }
    }
    ctx->pc = 0x126184u;
label_126184:
    // 0x126184: 0x240382d
    ctx->pc = 0x126184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126188:
    // 0x126188: 0x340aff80
    ctx->pc = 0x126188u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 0), 65408));
label_12618c:
    // 0x12618c: 0x0
    ctx->pc = 0x12618cu;
    // NOP
label_126190:
    // 0x126190: 0x90e30000
    ctx->pc = 0x126190u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_126194:
    // 0x126194: 0x82040
    ctx->pc = 0x126194u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_126198:
    // 0x126198: 0x8b2821
    ctx->pc = 0x126198u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_12619c:
    // 0x12619c: 0x8c2021
    ctx->pc = 0x12619cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1261a0:
    // 0x1261a0: 0x6a1821
    ctx->pc = 0x1261a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1261a4:
    // 0x1261a4: 0x25080001
    ctx->pc = 0x1261a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1261a8:
    // 0x1261a8: 0x31a00
    ctx->pc = 0x1261a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_1261ac:
    // 0x1261ac: 0x109302a
    ctx->pc = 0x1261acu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1261b0:
    // 0x1261b0: 0xa4a30000
    ctx->pc = 0x1261b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1261b4:
    // 0x1261b4: 0x90e20001
    ctx->pc = 0x1261b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_1261b8:
    // 0x1261b8: 0x24e70002
    ctx->pc = 0x1261b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_1261bc:
    // 0x1261bc: 0x4a1021
    ctx->pc = 0x1261bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1261c0:
    // 0x1261c0: 0x21200
    ctx->pc = 0x1261c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1261c4:
    // 0x1261c4: 0x14c0fff2
label_1261c8:
    if (ctx->pc == 0x1261C8u) {
        ctx->pc = 0x1261C8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1261CCu;
        goto label_1261cc;
    }
    ctx->pc = 0x1261C4u;
    {
        const bool branch_taken_0x1261c4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1261C8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1261c4) {
            ctx->pc = 0x126190u;
            goto label_126190;
        }
    }
    ctx->pc = 0x1261CCu;
label_1261cc:
    // 0x1261cc: 0x10000010
label_1261d0:
    if (ctx->pc == 0x1261D0u) {
        ctx->pc = 0x1261D0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1261D4u;
        goto label_1261d4;
    }
    ctx->pc = 0x1261CCu;
    {
        const bool branch_taken_0x1261cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1261D0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1261cc) {
            ctx->pc = 0x126210u;
            goto label_126210;
        }
    }
    ctx->pc = 0x1261D4u;
label_1261d4:
    // 0x1261d4: 0x0
    ctx->pc = 0x1261d4u;
    // NOP
label_1261d8:
    // 0x1261d8: 0x1920000d
label_1261dc:
    if (ctx->pc == 0x1261DCu) {
        ctx->pc = 0x1261DCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1261E0u;
        goto label_1261e0;
    }
    ctx->pc = 0x1261D8u;
    {
        const bool branch_taken_0x1261d8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1261DCu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1261d8) {
            ctx->pc = 0x126210u;
            goto label_126210;
        }
    }
    ctx->pc = 0x1261E0u;
label_1261e0:
    // 0x1261e0: 0x160282d
    ctx->pc = 0x1261e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1261e4:
    // 0x1261e4: 0x3406ff80
    ctx->pc = 0x1261e4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 65408));
label_1261e8:
    // 0x1261e8: 0x2481021
    ctx->pc = 0x1261e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1261ec:
    // 0x1261ec: 0x25080001
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1261f0:
    // 0x1261f0: 0x90430000
    ctx->pc = 0x1261f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1261f4:
    // 0x1261f4: 0x109202a
    ctx->pc = 0x1261f4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1261f8:
    // 0x1261f8: 0x661821
    ctx->pc = 0x1261f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1261fc:
    // 0x1261fc: 0x31a00
    ctx->pc = 0x1261fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_126200:
    // 0x126200: 0xa4a30000
    ctx->pc = 0x126200u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_126204:
    // 0x126204: 0x1480fff8
label_126208:
    if (ctx->pc == 0x126208u) {
        ctx->pc = 0x126208u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x12620Cu;
        goto label_12620c;
    }
    ctx->pc = 0x126204u;
    {
        const bool branch_taken_0x126204 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x126208u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x126204) {
            ctx->pc = 0x1261E8u;
            goto label_1261e8;
        }
    }
    ctx->pc = 0x12620Cu;
label_12620c:
    // 0x12620c: 0x9203000e
    ctx->pc = 0x12620cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_126210:
    // 0x126210: 0x31600
    ctx->pc = 0x126210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_126214:
    // 0x126214: 0x24030002
    ctx->pc = 0x126214u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_126218:
    // 0x126218: 0x21603
    ctx->pc = 0x126218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_12621c:
    // 0x12621c: 0xae030004
    ctx->pc = 0x12621cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_126220:
    // 0x126220: 0x1221018
    ctx->pc = 0x126220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_126224:
    // 0x126224: 0xae090090
    ctx->pc = 0x126224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_126228:
    // 0x126228: 0xae020094
    ctx->pc = 0x126228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_12622c:
    // 0x12622c: 0x24020002
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_126230:
    // 0x126230: 0x54620009
label_126234:
    if (ctx->pc == 0x126234u) {
        ctx->pc = 0x126234u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x126238u;
        goto label_126238;
    }
    ctx->pc = 0x126230u;
    {
        const bool branch_taken_0x126230 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x126230) {
            ctx->pc = 0x126234u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x126258u;
            goto label_126258;
        }
    }
    ctx->pc = 0x126238u;
label_126238:
    // 0x126238: 0x8e030080
    ctx->pc = 0x126238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_12623c:
    // 0x12623c: 0x8e040084
    ctx->pc = 0x12623cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_126240:
    // 0x126240: 0x8e050094
    ctx->pc = 0x126240u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_126244:
    // 0x126244: 0x60f809
label_126248:
    if (ctx->pc == 0x126248u) {
        ctx->pc = 0x126248u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x12624Cu;
        goto label_12624c;
    }
    ctx->pc = 0x126244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12624Cu);
        ctx->pc = 0x126248u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12624Cu; }
            if (ctx->pc != 0x12624Cu) { return; }
        }
    }
    ctx->pc = 0x12624Cu;
label_12624c:
    // 0x12624c: 0x24020003
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_126250:
    // 0x126250: 0xae020004
    ctx->pc = 0x126250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_126254:
    // 0x126254: 0xdfb00000
    ctx->pc = 0x126254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126258:
    // 0x126258: 0xdfb10008
    ctx->pc = 0x126258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12625c:
    // 0x12625c: 0xdfb20010
    ctx->pc = 0x12625cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_126260:
    // 0x126260: 0xdfbf0018
    ctx->pc = 0x126260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_126264:
    // 0x126264: 0x3e00008
label_126268:
    if (ctx->pc == 0x126268u) {
        ctx->pc = 0x126268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12626Cu;
        goto label_12626c;
    }
    ctx->pc = 0x126264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1260D8u: goto label_1260d8;
            case 0x1260DCu: goto label_1260dc;
            case 0x1260E0u: goto label_1260e0;
            case 0x1260E4u: goto label_1260e4;
            case 0x1260E8u: goto label_1260e8;
            case 0x1260ECu: goto label_1260ec;
            case 0x1260F0u: goto label_1260f0;
            case 0x1260F4u: goto label_1260f4;
            case 0x1260F8u: goto label_1260f8;
            case 0x1260FCu: goto label_1260fc;
            case 0x126100u: goto label_126100;
            case 0x126104u: goto label_126104;
            case 0x126108u: goto label_126108;
            case 0x12610Cu: goto label_12610c;
            case 0x126110u: goto label_126110;
            case 0x126114u: goto label_126114;
            case 0x126118u: goto label_126118;
            case 0x12611Cu: goto label_12611c;
            case 0x126120u: goto label_126120;
            case 0x126124u: goto label_126124;
            case 0x126128u: goto label_126128;
            case 0x12612Cu: goto label_12612c;
            case 0x126130u: goto label_126130;
            case 0x126134u: goto label_126134;
            case 0x126138u: goto label_126138;
            case 0x12613Cu: goto label_12613c;
            case 0x126140u: goto label_126140;
            case 0x126144u: goto label_126144;
            case 0x126148u: goto label_126148;
            case 0x12614Cu: goto label_12614c;
            case 0x126150u: goto label_126150;
            case 0x126154u: goto label_126154;
            case 0x126158u: goto label_126158;
            case 0x12615Cu: goto label_12615c;
            case 0x126160u: goto label_126160;
            case 0x126164u: goto label_126164;
            case 0x126168u: goto label_126168;
            case 0x12616Cu: goto label_12616c;
            case 0x126170u: goto label_126170;
            case 0x126174u: goto label_126174;
            case 0x126178u: goto label_126178;
            case 0x12617Cu: goto label_12617c;
            case 0x126180u: goto label_126180;
            case 0x126184u: goto label_126184;
            case 0x126188u: goto label_126188;
            case 0x12618Cu: goto label_12618c;
            case 0x126190u: goto label_126190;
            case 0x126194u: goto label_126194;
            case 0x126198u: goto label_126198;
            case 0x12619Cu: goto label_12619c;
            case 0x1261A0u: goto label_1261a0;
            case 0x1261A4u: goto label_1261a4;
            case 0x1261A8u: goto label_1261a8;
            case 0x1261ACu: goto label_1261ac;
            case 0x1261B0u: goto label_1261b0;
            case 0x1261B4u: goto label_1261b4;
            case 0x1261B8u: goto label_1261b8;
            case 0x1261BCu: goto label_1261bc;
            case 0x1261C0u: goto label_1261c0;
            case 0x1261C4u: goto label_1261c4;
            case 0x1261C8u: goto label_1261c8;
            case 0x1261CCu: goto label_1261cc;
            case 0x1261D0u: goto label_1261d0;
            case 0x1261D4u: goto label_1261d4;
            case 0x1261D8u: goto label_1261d8;
            case 0x1261DCu: goto label_1261dc;
            case 0x1261E0u: goto label_1261e0;
            case 0x1261E4u: goto label_1261e4;
            case 0x1261E8u: goto label_1261e8;
            case 0x1261ECu: goto label_1261ec;
            case 0x1261F0u: goto label_1261f0;
            case 0x1261F4u: goto label_1261f4;
            case 0x1261F8u: goto label_1261f8;
            case 0x1261FCu: goto label_1261fc;
            case 0x126200u: goto label_126200;
            case 0x126204u: goto label_126204;
            case 0x126208u: goto label_126208;
            case 0x12620Cu: goto label_12620c;
            case 0x126210u: goto label_126210;
            case 0x126214u: goto label_126214;
            case 0x126218u: goto label_126218;
            case 0x12621Cu: goto label_12621c;
            case 0x126220u: goto label_126220;
            case 0x126224u: goto label_126224;
            case 0x126228u: goto label_126228;
            case 0x12622Cu: goto label_12622c;
            case 0x126230u: goto label_126230;
            case 0x126234u: goto label_126234;
            case 0x126238u: goto label_126238;
            case 0x12623Cu: goto label_12623c;
            case 0x126240u: goto label_126240;
            case 0x126244u: goto label_126244;
            case 0x126248u: goto label_126248;
            case 0x12624Cu: goto label_12624c;
            case 0x126250u: goto label_126250;
            case 0x126254u: goto label_126254;
            case 0x126258u: goto label_126258;
            case 0x12625Cu: goto label_12625c;
            case 0x126260u: goto label_126260;
            case 0x126264u: goto label_126264;
            case 0x126268u: goto label_126268;
            case 0x12626Cu: goto label_12626c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12626Cu;
label_12626c:
    // 0x12626c: 0x0
    ctx->pc = 0x12626cu;
    // NOP
}
