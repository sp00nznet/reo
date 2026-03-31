#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124158
// Address: 0x124158 - 0x1242d8
void entry_124158_0x1242d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124158u;

label_124158:
    // 0x124158: 0x27bdffe0
    ctx->pc = 0x124158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_12415c:
    // 0x12415c: 0x24020001
    ctx->pc = 0x12415cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_124160:
    // 0x124160: 0xffb00000
    ctx->pc = 0x124160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_124164:
    // 0x124164: 0x80802d
    ctx->pc = 0x124164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124168:
    // 0x124168: 0xffb10008
    ctx->pc = 0x124168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12416c:
    // 0x12416c: 0x26110048
    ctx->pc = 0x12416cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_124170:
    // 0x124170: 0xffb20010
    ctx->pc = 0x124170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_124174:
    // 0x124174: 0xffbf0018
    ctx->pc = 0x124174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_124178:
    // 0x124178: 0x8e030004
    ctx->pc = 0x124178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12417c:
    // 0x12417c: 0x14620046
label_124180:
    if (ctx->pc == 0x124180u) {
        ctx->pc = 0x124180u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x124184u;
        goto label_124184;
    }
    ctx->pc = 0x12417Cu;
    {
        const bool branch_taken_0x12417c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x124180u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x12417c) {
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124184u;
label_124184:
    // 0x124184: 0xc04d3e6
label_124188:
    if (ctx->pc == 0x124188u) {
        ctx->pc = 0x124188u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x12418Cu;
        goto label_12418c;
    }
    ctx->pc = 0x124184u;
    SET_GPR_U32(ctx, 31, 0x12418Cu);
    ctx->pc = 0x124188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12418Cu; }
    }
    if (ctx->pc != 0x12418Cu) { return; }
    ctx->pc = 0x12418Cu;
label_12418c:
    // 0x12418c: 0x54400042
label_124190:
    if (ctx->pc == 0x124190u) {
        ctx->pc = 0x124190u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x124194u;
        goto label_124194;
    }
    ctx->pc = 0x12418Cu;
    {
        const bool branch_taken_0x12418c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12418c) {
            ctx->pc = 0x124190u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x124298u;
            goto label_124298;
        }
    }
    ctx->pc = 0x124194u;
label_124194:
    // 0x124194: 0x8e04007c
    ctx->pc = 0x124194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_124198:
    // 0x124198: 0x26050068
    ctx->pc = 0x124198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_12419c:
    // 0x12419c: 0x8e020078
    ctx->pc = 0x12419cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1241a0:
    // 0x1241a0: 0x2606006c
    ctx->pc = 0x1241a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_1241a4:
    // 0x1241a4: 0x40f809
label_1241a8:
    if (ctx->pc == 0x1241A8u) {
        ctx->pc = 0x1241A8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1241ACu;
        goto label_1241ac;
    }
    ctx->pc = 0x1241A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1241ACu);
        ctx->pc = 0x1241A8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124158u: goto label_124158;
            case 0x12415Cu: goto label_12415c;
            case 0x124160u: goto label_124160;
            case 0x124164u: goto label_124164;
            case 0x124168u: goto label_124168;
            case 0x12416Cu: goto label_12416c;
            case 0x124170u: goto label_124170;
            case 0x124174u: goto label_124174;
            case 0x124178u: goto label_124178;
            case 0x12417Cu: goto label_12417c;
            case 0x124180u: goto label_124180;
            case 0x124184u: goto label_124184;
            case 0x124188u: goto label_124188;
            case 0x12418Cu: goto label_12418c;
            case 0x124190u: goto label_124190;
            case 0x124194u: goto label_124194;
            case 0x124198u: goto label_124198;
            case 0x12419Cu: goto label_12419c;
            case 0x1241A0u: goto label_1241a0;
            case 0x1241A4u: goto label_1241a4;
            case 0x1241A8u: goto label_1241a8;
            case 0x1241ACu: goto label_1241ac;
            case 0x1241B0u: goto label_1241b0;
            case 0x1241B4u: goto label_1241b4;
            case 0x1241B8u: goto label_1241b8;
            case 0x1241BCu: goto label_1241bc;
            case 0x1241C0u: goto label_1241c0;
            case 0x1241C4u: goto label_1241c4;
            case 0x1241C8u: goto label_1241c8;
            case 0x1241CCu: goto label_1241cc;
            case 0x1241D0u: goto label_1241d0;
            case 0x1241D4u: goto label_1241d4;
            case 0x1241D8u: goto label_1241d8;
            case 0x1241DCu: goto label_1241dc;
            case 0x1241E0u: goto label_1241e0;
            case 0x1241E4u: goto label_1241e4;
            case 0x1241E8u: goto label_1241e8;
            case 0x1241ECu: goto label_1241ec;
            case 0x1241F0u: goto label_1241f0;
            case 0x1241F4u: goto label_1241f4;
            case 0x1241F8u: goto label_1241f8;
            case 0x1241FCu: goto label_1241fc;
            case 0x124200u: goto label_124200;
            case 0x124204u: goto label_124204;
            case 0x124208u: goto label_124208;
            case 0x12420Cu: goto label_12420c;
            case 0x124210u: goto label_124210;
            case 0x124214u: goto label_124214;
            case 0x124218u: goto label_124218;
            case 0x12421Cu: goto label_12421c;
            case 0x124220u: goto label_124220;
            case 0x124224u: goto label_124224;
            case 0x124228u: goto label_124228;
            case 0x12422Cu: goto label_12422c;
            case 0x124230u: goto label_124230;
            case 0x124234u: goto label_124234;
            case 0x124238u: goto label_124238;
            case 0x12423Cu: goto label_12423c;
            case 0x124240u: goto label_124240;
            case 0x124244u: goto label_124244;
            case 0x124248u: goto label_124248;
            case 0x12424Cu: goto label_12424c;
            case 0x124250u: goto label_124250;
            case 0x124254u: goto label_124254;
            case 0x124258u: goto label_124258;
            case 0x12425Cu: goto label_12425c;
            case 0x124260u: goto label_124260;
            case 0x124264u: goto label_124264;
            case 0x124268u: goto label_124268;
            case 0x12426Cu: goto label_12426c;
            case 0x124270u: goto label_124270;
            case 0x124274u: goto label_124274;
            case 0x124278u: goto label_124278;
            case 0x12427Cu: goto label_12427c;
            case 0x124280u: goto label_124280;
            case 0x124284u: goto label_124284;
            case 0x124288u: goto label_124288;
            case 0x12428Cu: goto label_12428c;
            case 0x124290u: goto label_124290;
            case 0x124294u: goto label_124294;
            case 0x124298u: goto label_124298;
            case 0x12429Cu: goto label_12429c;
            case 0x1242A0u: goto label_1242a0;
            case 0x1242A4u: goto label_1242a4;
            case 0x1242A8u: goto label_1242a8;
            case 0x1242ACu: goto label_1242ac;
            case 0x1242B0u: goto label_1242b0;
            case 0x1242B4u: goto label_1242b4;
            case 0x1242B8u: goto label_1242b8;
            case 0x1242BCu: goto label_1242bc;
            case 0x1242C0u: goto label_1242c0;
            case 0x1242C4u: goto label_1242c4;
            case 0x1242C8u: goto label_1242c8;
            case 0x1242CCu: goto label_1242cc;
            case 0x1242D0u: goto label_1242d0;
            case 0x1242D4u: goto label_1242d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1241ACu; }
            if (ctx->pc != 0x1241ACu) { return; }
        }
    }
    ctx->pc = 0x1241ACu;
label_1241ac:
    // 0x1241ac: 0x8e240018
    ctx->pc = 0x1241acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1241b0:
    // 0x1241b0: 0x8e290020
    ctx->pc = 0x1241b0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1241b4:
    // 0x1241b4: 0x24060002
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1241b8:
    // 0x1241b8: 0x8e230024
    ctx->pc = 0x1241b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1241bc:
    // 0x1241bc: 0x894023
    ctx->pc = 0x1241bcu;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1241c0:
    // 0x1241c0: 0x8204000e
    ctx->pc = 0x1241c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1241c4:
    // 0x1241c4: 0x68102a
    ctx->pc = 0x1241c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 8)));
label_1241c8:
    // 0x1241c8: 0x8e250004
    ctx->pc = 0x1241c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1241cc:
    // 0x1241cc: 0x62400b
    ctx->pc = 0x1241ccu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 3));
label_1241d0:
    // 0x1241d0: 0x91840
    ctx->pc = 0x1241d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 9), 1));
label_1241d4:
    // 0x1241d4: 0x8e2b0014
    ctx->pc = 0x1241d4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1241d8:
    // 0x1241d8: 0xa8102a
    ctx->pc = 0x1241d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
label_1241dc:
    // 0x1241dc: 0xa2400b
    ctx->pc = 0x1241dcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
label_1241e0:
    // 0x1241e0: 0x1635021
    ctx->pc = 0x1241e0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1241e4:
    // 0x1241e4: 0x14860018
label_1241e8:
    if (ctx->pc == 0x1241E8u) {
        ctx->pc = 0x1241E8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1241ECu;
        goto label_1241ec;
    }
    ctx->pc = 0x1241E4u;
    {
        const bool branch_taken_0x1241e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x1241E8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1241e4) {
            ctx->pc = 0x124248u;
            goto label_124248;
        }
    }
    ctx->pc = 0x1241ECu;
label_1241ec:
    // 0x1241ec: 0x8e22001c
    ctx->pc = 0x1241ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1241f0:
    // 0x1241f0: 0x382d
    ctx->pc = 0x1241f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1241f4:
    // 0x1241f4: 0x491021
    ctx->pc = 0x1241f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1241f8:
    // 0x1241f8: 0x21040
    ctx->pc = 0x1241f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1241fc:
    // 0x1241fc: 0x1900001f
label_124200:
    if (ctx->pc == 0x124200u) {
        ctx->pc = 0x124200u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x124204u;
        goto label_124204;
    }
    ctx->pc = 0x1241FCu;
    {
        const bool branch_taken_0x1241fc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x124200u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x1241fc) {
            ctx->pc = 0x12427Cu;
            goto label_12427c;
        }
    }
    ctx->pc = 0x124204u;
label_124204:
    // 0x124204: 0x240302d
    ctx->pc = 0x124204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124208:
    // 0x124208: 0x90c20000
    ctx->pc = 0x124208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_12420c:
    // 0x12420c: 0x71840
    ctx->pc = 0x12420cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_124210:
    // 0x124210: 0x6a2021
    ctx->pc = 0x124210u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_124214:
    // 0x124214: 0x691821
    ctx->pc = 0x124214u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_124218:
    // 0x124218: 0x21200
    ctx->pc = 0x124218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_12421c:
    // 0x12421c: 0x24e70001
    ctx->pc = 0x12421cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_124220:
    // 0x124220: 0xa4820000
    ctx->pc = 0x124220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_124224:
    // 0x124224: 0xe8282a
    ctx->pc = 0x124224u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_124228:
    // 0x124228: 0x90c20001
    ctx->pc = 0x124228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_12422c:
    // 0x12422c: 0x24c60002
    ctx->pc = 0x12422cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_124230:
    // 0x124230: 0x21200
    ctx->pc = 0x124230u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_124234:
    // 0x124234: 0x14a0fff4
label_124238:
    if (ctx->pc == 0x124238u) {
        ctx->pc = 0x124238u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12423Cu;
        goto label_12423c;
    }
    ctx->pc = 0x124234u;
    {
        const bool branch_taken_0x124234 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x124238u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x124234) {
            ctx->pc = 0x124208u;
            goto label_124208;
        }
    }
    ctx->pc = 0x12423Cu;
label_12423c:
    // 0x12423c: 0x1000000f
label_124240:
    if (ctx->pc == 0x124240u) {
        ctx->pc = 0x124240u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x124244u;
        goto label_124244;
    }
    ctx->pc = 0x12423Cu;
    {
        const bool branch_taken_0x12423c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x124240u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12423c) {
            ctx->pc = 0x12427Cu;
            goto label_12427c;
        }
    }
    ctx->pc = 0x124244u;
label_124244:
    // 0x124244: 0x0
    ctx->pc = 0x124244u;
    // NOP
label_124248:
    // 0x124248: 0x1900000c
label_12424c:
    if (ctx->pc == 0x12424Cu) {
        ctx->pc = 0x12424Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x124250u;
        goto label_124250;
    }
    ctx->pc = 0x124248u;
    {
        const bool branch_taken_0x124248 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x12424Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124248) {
            ctx->pc = 0x12427Cu;
            goto label_12427c;
        }
    }
    ctx->pc = 0x124250u;
label_124250:
    // 0x124250: 0x140282d
    ctx->pc = 0x124250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_124254:
    // 0x124254: 0x0
    ctx->pc = 0x124254u;
    // NOP
label_124258:
    // 0x124258: 0x2471021
    ctx->pc = 0x124258u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_12425c:
    // 0x12425c: 0x24e70001
    ctx->pc = 0x12425cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_124260:
    // 0x124260: 0x90430000
    ctx->pc = 0x124260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_124264:
    // 0x124264: 0xe8202a
    ctx->pc = 0x124264u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
label_124268:
    // 0x124268: 0x31a00
    ctx->pc = 0x124268u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_12426c:
    // 0x12426c: 0xa4a30000
    ctx->pc = 0x12426cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_124270:
    // 0x124270: 0x1480fff9
label_124274:
    if (ctx->pc == 0x124274u) {
        ctx->pc = 0x124274u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x124278u;
        goto label_124278;
    }
    ctx->pc = 0x124270u;
    {
        const bool branch_taken_0x124270 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x124274u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x124270) {
            ctx->pc = 0x124258u;
            goto label_124258;
        }
    }
    ctx->pc = 0x124278u;
label_124278:
    // 0x124278: 0x9203000e
    ctx->pc = 0x124278u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_12427c:
    // 0x12427c: 0x31600
    ctx->pc = 0x12427cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_124280:
    // 0x124280: 0x24030002
    ctx->pc = 0x124280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_124284:
    // 0x124284: 0x21603
    ctx->pc = 0x124284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_124288:
    // 0x124288: 0xae030004
    ctx->pc = 0x124288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_12428c:
    // 0x12428c: 0x1021018
    ctx->pc = 0x12428cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_124290:
    // 0x124290: 0xae080090
    ctx->pc = 0x124290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_124294:
    // 0x124294: 0xae020094
    ctx->pc = 0x124294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_124298:
    // 0x124298: 0x24020002
    ctx->pc = 0x124298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_12429c:
    // 0x12429c: 0x54620009
label_1242a0:
    if (ctx->pc == 0x1242A0u) {
        ctx->pc = 0x1242A0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1242A4u;
        goto label_1242a4;
    }
    ctx->pc = 0x12429Cu;
    {
        const bool branch_taken_0x12429c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x12429c) {
            ctx->pc = 0x1242A0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1242C4u;
            goto label_1242c4;
        }
    }
    ctx->pc = 0x1242A4u;
label_1242a4:
    // 0x1242a4: 0x8e030080
    ctx->pc = 0x1242a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1242a8:
    // 0x1242a8: 0x8e040084
    ctx->pc = 0x1242a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1242ac:
    // 0x1242ac: 0x8e050094
    ctx->pc = 0x1242acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1242b0:
    // 0x1242b0: 0x60f809
label_1242b4:
    if (ctx->pc == 0x1242B4u) {
        ctx->pc = 0x1242B4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1242B8u;
        goto label_1242b8;
    }
    ctx->pc = 0x1242B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1242B8u);
        ctx->pc = 0x1242B4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124158u: goto label_124158;
            case 0x12415Cu: goto label_12415c;
            case 0x124160u: goto label_124160;
            case 0x124164u: goto label_124164;
            case 0x124168u: goto label_124168;
            case 0x12416Cu: goto label_12416c;
            case 0x124170u: goto label_124170;
            case 0x124174u: goto label_124174;
            case 0x124178u: goto label_124178;
            case 0x12417Cu: goto label_12417c;
            case 0x124180u: goto label_124180;
            case 0x124184u: goto label_124184;
            case 0x124188u: goto label_124188;
            case 0x12418Cu: goto label_12418c;
            case 0x124190u: goto label_124190;
            case 0x124194u: goto label_124194;
            case 0x124198u: goto label_124198;
            case 0x12419Cu: goto label_12419c;
            case 0x1241A0u: goto label_1241a0;
            case 0x1241A4u: goto label_1241a4;
            case 0x1241A8u: goto label_1241a8;
            case 0x1241ACu: goto label_1241ac;
            case 0x1241B0u: goto label_1241b0;
            case 0x1241B4u: goto label_1241b4;
            case 0x1241B8u: goto label_1241b8;
            case 0x1241BCu: goto label_1241bc;
            case 0x1241C0u: goto label_1241c0;
            case 0x1241C4u: goto label_1241c4;
            case 0x1241C8u: goto label_1241c8;
            case 0x1241CCu: goto label_1241cc;
            case 0x1241D0u: goto label_1241d0;
            case 0x1241D4u: goto label_1241d4;
            case 0x1241D8u: goto label_1241d8;
            case 0x1241DCu: goto label_1241dc;
            case 0x1241E0u: goto label_1241e0;
            case 0x1241E4u: goto label_1241e4;
            case 0x1241E8u: goto label_1241e8;
            case 0x1241ECu: goto label_1241ec;
            case 0x1241F0u: goto label_1241f0;
            case 0x1241F4u: goto label_1241f4;
            case 0x1241F8u: goto label_1241f8;
            case 0x1241FCu: goto label_1241fc;
            case 0x124200u: goto label_124200;
            case 0x124204u: goto label_124204;
            case 0x124208u: goto label_124208;
            case 0x12420Cu: goto label_12420c;
            case 0x124210u: goto label_124210;
            case 0x124214u: goto label_124214;
            case 0x124218u: goto label_124218;
            case 0x12421Cu: goto label_12421c;
            case 0x124220u: goto label_124220;
            case 0x124224u: goto label_124224;
            case 0x124228u: goto label_124228;
            case 0x12422Cu: goto label_12422c;
            case 0x124230u: goto label_124230;
            case 0x124234u: goto label_124234;
            case 0x124238u: goto label_124238;
            case 0x12423Cu: goto label_12423c;
            case 0x124240u: goto label_124240;
            case 0x124244u: goto label_124244;
            case 0x124248u: goto label_124248;
            case 0x12424Cu: goto label_12424c;
            case 0x124250u: goto label_124250;
            case 0x124254u: goto label_124254;
            case 0x124258u: goto label_124258;
            case 0x12425Cu: goto label_12425c;
            case 0x124260u: goto label_124260;
            case 0x124264u: goto label_124264;
            case 0x124268u: goto label_124268;
            case 0x12426Cu: goto label_12426c;
            case 0x124270u: goto label_124270;
            case 0x124274u: goto label_124274;
            case 0x124278u: goto label_124278;
            case 0x12427Cu: goto label_12427c;
            case 0x124280u: goto label_124280;
            case 0x124284u: goto label_124284;
            case 0x124288u: goto label_124288;
            case 0x12428Cu: goto label_12428c;
            case 0x124290u: goto label_124290;
            case 0x124294u: goto label_124294;
            case 0x124298u: goto label_124298;
            case 0x12429Cu: goto label_12429c;
            case 0x1242A0u: goto label_1242a0;
            case 0x1242A4u: goto label_1242a4;
            case 0x1242A8u: goto label_1242a8;
            case 0x1242ACu: goto label_1242ac;
            case 0x1242B0u: goto label_1242b0;
            case 0x1242B4u: goto label_1242b4;
            case 0x1242B8u: goto label_1242b8;
            case 0x1242BCu: goto label_1242bc;
            case 0x1242C0u: goto label_1242c0;
            case 0x1242C4u: goto label_1242c4;
            case 0x1242C8u: goto label_1242c8;
            case 0x1242CCu: goto label_1242cc;
            case 0x1242D0u: goto label_1242d0;
            case 0x1242D4u: goto label_1242d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1242B8u; }
            if (ctx->pc != 0x1242B8u) { return; }
        }
    }
    ctx->pc = 0x1242B8u;
label_1242b8:
    // 0x1242b8: 0x24020003
    ctx->pc = 0x1242b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1242bc:
    // 0x1242bc: 0xae020004
    ctx->pc = 0x1242bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1242c0:
    // 0x1242c0: 0xdfb00000
    ctx->pc = 0x1242c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1242c4:
    // 0x1242c4: 0xdfb10008
    ctx->pc = 0x1242c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1242c8:
    // 0x1242c8: 0xdfb20010
    ctx->pc = 0x1242c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1242cc:
    // 0x1242cc: 0xdfbf0018
    ctx->pc = 0x1242ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1242d0:
    // 0x1242d0: 0x3e00008
label_1242d4:
    if (ctx->pc == 0x1242D4u) {
        ctx->pc = 0x1242D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1242D8u;
        goto label_fallthrough_0x1242d0;
    }
    ctx->pc = 0x1242D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1242D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124158u: goto label_124158;
            case 0x12415Cu: goto label_12415c;
            case 0x124160u: goto label_124160;
            case 0x124164u: goto label_124164;
            case 0x124168u: goto label_124168;
            case 0x12416Cu: goto label_12416c;
            case 0x124170u: goto label_124170;
            case 0x124174u: goto label_124174;
            case 0x124178u: goto label_124178;
            case 0x12417Cu: goto label_12417c;
            case 0x124180u: goto label_124180;
            case 0x124184u: goto label_124184;
            case 0x124188u: goto label_124188;
            case 0x12418Cu: goto label_12418c;
            case 0x124190u: goto label_124190;
            case 0x124194u: goto label_124194;
            case 0x124198u: goto label_124198;
            case 0x12419Cu: goto label_12419c;
            case 0x1241A0u: goto label_1241a0;
            case 0x1241A4u: goto label_1241a4;
            case 0x1241A8u: goto label_1241a8;
            case 0x1241ACu: goto label_1241ac;
            case 0x1241B0u: goto label_1241b0;
            case 0x1241B4u: goto label_1241b4;
            case 0x1241B8u: goto label_1241b8;
            case 0x1241BCu: goto label_1241bc;
            case 0x1241C0u: goto label_1241c0;
            case 0x1241C4u: goto label_1241c4;
            case 0x1241C8u: goto label_1241c8;
            case 0x1241CCu: goto label_1241cc;
            case 0x1241D0u: goto label_1241d0;
            case 0x1241D4u: goto label_1241d4;
            case 0x1241D8u: goto label_1241d8;
            case 0x1241DCu: goto label_1241dc;
            case 0x1241E0u: goto label_1241e0;
            case 0x1241E4u: goto label_1241e4;
            case 0x1241E8u: goto label_1241e8;
            case 0x1241ECu: goto label_1241ec;
            case 0x1241F0u: goto label_1241f0;
            case 0x1241F4u: goto label_1241f4;
            case 0x1241F8u: goto label_1241f8;
            case 0x1241FCu: goto label_1241fc;
            case 0x124200u: goto label_124200;
            case 0x124204u: goto label_124204;
            case 0x124208u: goto label_124208;
            case 0x12420Cu: goto label_12420c;
            case 0x124210u: goto label_124210;
            case 0x124214u: goto label_124214;
            case 0x124218u: goto label_124218;
            case 0x12421Cu: goto label_12421c;
            case 0x124220u: goto label_124220;
            case 0x124224u: goto label_124224;
            case 0x124228u: goto label_124228;
            case 0x12422Cu: goto label_12422c;
            case 0x124230u: goto label_124230;
            case 0x124234u: goto label_124234;
            case 0x124238u: goto label_124238;
            case 0x12423Cu: goto label_12423c;
            case 0x124240u: goto label_124240;
            case 0x124244u: goto label_124244;
            case 0x124248u: goto label_124248;
            case 0x12424Cu: goto label_12424c;
            case 0x124250u: goto label_124250;
            case 0x124254u: goto label_124254;
            case 0x124258u: goto label_124258;
            case 0x12425Cu: goto label_12425c;
            case 0x124260u: goto label_124260;
            case 0x124264u: goto label_124264;
            case 0x124268u: goto label_124268;
            case 0x12426Cu: goto label_12426c;
            case 0x124270u: goto label_124270;
            case 0x124274u: goto label_124274;
            case 0x124278u: goto label_124278;
            case 0x12427Cu: goto label_12427c;
            case 0x124280u: goto label_124280;
            case 0x124284u: goto label_124284;
            case 0x124288u: goto label_124288;
            case 0x12428Cu: goto label_12428c;
            case 0x124290u: goto label_124290;
            case 0x124294u: goto label_124294;
            case 0x124298u: goto label_124298;
            case 0x12429Cu: goto label_12429c;
            case 0x1242A0u: goto label_1242a0;
            case 0x1242A4u: goto label_1242a4;
            case 0x1242A8u: goto label_1242a8;
            case 0x1242ACu: goto label_1242ac;
            case 0x1242B0u: goto label_1242b0;
            case 0x1242B4u: goto label_1242b4;
            case 0x1242B8u: goto label_1242b8;
            case 0x1242BCu: goto label_1242bc;
            case 0x1242C0u: goto label_1242c0;
            case 0x1242C4u: goto label_1242c4;
            case 0x1242C8u: goto label_1242c8;
            case 0x1242CCu: goto label_1242cc;
            case 0x1242D0u: goto label_1242d0;
            case 0x1242D4u: goto label_1242d4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1242d0:
    ctx->pc = 0x1242D8u;
}
