#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_126270
// Address: 0x126270 - 0x126410
void entry_126270_0x126410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126270u;

label_126270:
    // 0x126270: 0x27bdffe0
    ctx->pc = 0x126270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_126274:
    // 0x126274: 0x24020001
    ctx->pc = 0x126274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_126278:
    // 0x126278: 0xffb00000
    ctx->pc = 0x126278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12627c:
    // 0x12627c: 0x80802d
    ctx->pc = 0x12627cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126280:
    // 0x126280: 0xffb10008
    ctx->pc = 0x126280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_126284:
    // 0x126284: 0x26110048
    ctx->pc = 0x126284u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_126288:
    // 0x126288: 0xffb20010
    ctx->pc = 0x126288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12628c:
    // 0x12628c: 0xffbf0018
    ctx->pc = 0x12628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_126290:
    // 0x126290: 0x8e030004
    ctx->pc = 0x126290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_126294:
    // 0x126294: 0x1462004d
label_126298:
    if (ctx->pc == 0x126298u) {
        ctx->pc = 0x126298u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12629Cu;
        goto label_12629c;
    }
    ctx->pc = 0x126294u;
    {
        const bool branch_taken_0x126294 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x126298u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x126294) {
            ctx->pc = 0x1263CCu;
            goto label_1263cc;
        }
    }
    ctx->pc = 0x12629Cu;
label_12629c:
    // 0x12629c: 0xc04d3e6
label_1262a0:
    if (ctx->pc == 0x1262A0u) {
        ctx->pc = 0x1262A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1262A4u;
        goto label_1262a4;
    }
    ctx->pc = 0x12629Cu;
    SET_GPR_U32(ctx, 31, 0x1262A4u);
    ctx->pc = 0x1262A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1262A4u; }
    }
    if (ctx->pc != 0x1262A4u) { return; }
    ctx->pc = 0x1262A4u;
label_1262a4:
    // 0x1262a4: 0x54400049
label_1262a8:
    if (ctx->pc == 0x1262A8u) {
        ctx->pc = 0x1262A8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1262ACu;
        goto label_1262ac;
    }
    ctx->pc = 0x1262A4u;
    {
        const bool branch_taken_0x1262a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1262a4) {
            ctx->pc = 0x1262A8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1263CCu;
            goto label_1263cc;
        }
    }
    ctx->pc = 0x1262ACu;
label_1262ac:
    // 0x1262ac: 0x8e04007c
    ctx->pc = 0x1262acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1262b0:
    // 0x1262b0: 0x26050068
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_1262b4:
    // 0x1262b4: 0x8e020078
    ctx->pc = 0x1262b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1262b8:
    // 0x1262b8: 0x2606006c
    ctx->pc = 0x1262b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_1262bc:
    // 0x1262bc: 0x40f809
label_1262c0:
    if (ctx->pc == 0x1262C0u) {
        ctx->pc = 0x1262C0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1262C4u;
        goto label_1262c4;
    }
    ctx->pc = 0x1262BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1262C4u);
        ctx->pc = 0x1262C0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1262C4u; }
            if (ctx->pc != 0x1262C4u) { return; }
        }
    }
    ctx->pc = 0x1262C4u;
label_1262c4:
    // 0x1262c4: 0x8e240018
    ctx->pc = 0x1262c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1262c8:
    // 0x1262c8: 0x8e270020
    ctx->pc = 0x1262c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1262cc:
    // 0x1262cc: 0x24060002
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1262d0:
    // 0x1262d0: 0x8e230024
    ctx->pc = 0x1262d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1262d4:
    // 0x1262d4: 0x874823
    ctx->pc = 0x1262d4u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1262d8:
    // 0x1262d8: 0x8204000e
    ctx->pc = 0x1262d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1262dc:
    // 0x1262dc: 0x69102a
    ctx->pc = 0x1262dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_1262e0:
    // 0x1262e0: 0x8e250004
    ctx->pc = 0x1262e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1262e4:
    // 0x1262e4: 0x62480b
    ctx->pc = 0x1262e4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_1262e8:
    // 0x1262e8: 0x71840
    ctx->pc = 0x1262e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_1262ec:
    // 0x1262ec: 0x8e2b0014
    ctx->pc = 0x1262ecu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1262f0:
    // 0x1262f0: 0xa9102a
    ctx->pc = 0x1262f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_1262f4:
    // 0x1262f4: 0xa2480b
    ctx->pc = 0x1262f4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_1262f8:
    // 0x1262f8: 0x1635021
    ctx->pc = 0x1262f8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1262fc:
    // 0x1262fc: 0x1486001c
label_126300:
    if (ctx->pc == 0x126300u) {
        ctx->pc = 0x126300u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x126304u;
        goto label_126304;
    }
    ctx->pc = 0x1262FCu;
    {
        const bool branch_taken_0x1262fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x126300u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1262fc) {
            ctx->pc = 0x126370u;
            goto label_126370;
        }
    }
    ctx->pc = 0x126304u;
label_126304:
    // 0x126304: 0x8e22001c
    ctx->pc = 0x126304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_126308:
    // 0x126308: 0x402d
    ctx->pc = 0x126308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12630c:
    // 0x12630c: 0x471021
    ctx->pc = 0x12630cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_126310:
    // 0x126310: 0x21040
    ctx->pc = 0x126310u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_126314:
    // 0x126314: 0x19200025
label_126318:
    if (ctx->pc == 0x126318u) {
        ctx->pc = 0x126318u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x12631Cu;
        goto label_12631c;
    }
    ctx->pc = 0x126314u;
    {
        const bool branch_taken_0x126314 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126318u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x126314) {
            ctx->pc = 0x1263ACu;
            goto label_1263ac;
        }
    }
    ctx->pc = 0x12631Cu;
label_12631c:
    // 0x12631c: 0x240382d
    ctx->pc = 0x12631cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_126320:
    // 0x126320: 0x90e20002
    ctx->pc = 0x126320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_126324:
    // 0x126324: 0x82040
    ctx->pc = 0x126324u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_126328:
    // 0x126328: 0x90e30000
    ctx->pc = 0x126328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_12632c:
    // 0x12632c: 0x8a2821
    ctx->pc = 0x12632cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_126330:
    // 0x126330: 0x21200
    ctx->pc = 0x126330u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_126334:
    // 0x126334: 0x25080001
    ctx->pc = 0x126334u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126338:
    // 0x126338: 0x621825
    ctx->pc = 0x126338u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12633c:
    // 0x12633c: 0x8b2021
    ctx->pc = 0x12633cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_126340:
    // 0x126340: 0xa4a30000
    ctx->pc = 0x126340u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_126344:
    // 0x126344: 0x109302a
    ctx->pc = 0x126344u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126348:
    // 0x126348: 0x90e20003
    ctx->pc = 0x126348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_12634c:
    // 0x12634c: 0x90e30001
    ctx->pc = 0x12634cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_126350:
    // 0x126350: 0x24e70004
    ctx->pc = 0x126350u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_126354:
    // 0x126354: 0x21200
    ctx->pc = 0x126354u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_126358:
    // 0x126358: 0x621825
    ctx->pc = 0x126358u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12635c:
    // 0x12635c: 0x14c0fff0
label_126360:
    if (ctx->pc == 0x126360u) {
        ctx->pc = 0x126360u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x126364u;
        goto label_126364;
    }
    ctx->pc = 0x12635Cu;
    {
        const bool branch_taken_0x12635c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x126360u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12635c) {
            ctx->pc = 0x126320u;
            goto label_126320;
        }
    }
    ctx->pc = 0x126364u;
label_126364:
    // 0x126364: 0x10000011
label_126368:
    if (ctx->pc == 0x126368u) {
        ctx->pc = 0x126368u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x12636Cu;
        goto label_12636c;
    }
    ctx->pc = 0x126364u;
    {
        const bool branch_taken_0x126364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x126368u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x126364) {
            ctx->pc = 0x1263ACu;
            goto label_1263ac;
        }
    }
    ctx->pc = 0x12636Cu;
label_12636c:
    // 0x12636c: 0x0
    ctx->pc = 0x12636cu;
    // NOP
label_126370:
    // 0x126370: 0x1920000e
label_126374:
    if (ctx->pc == 0x126374u) {
        ctx->pc = 0x126374u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x126378u;
        goto label_126378;
    }
    ctx->pc = 0x126370u;
    {
        const bool branch_taken_0x126370 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x126374u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x126370) {
            ctx->pc = 0x1263ACu;
            goto label_1263ac;
        }
    }
    ctx->pc = 0x126378u;
label_126378:
    // 0x126378: 0x240282d
    ctx->pc = 0x126378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12637c:
    // 0x12637c: 0x140302d
    ctx->pc = 0x12637cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_126380:
    // 0x126380: 0x90a20001
    ctx->pc = 0x126380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_126384:
    // 0x126384: 0x25080001
    ctx->pc = 0x126384u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_126388:
    // 0x126388: 0x90a30000
    ctx->pc = 0x126388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12638c:
    // 0x12638c: 0x24a50002
    ctx->pc = 0x12638cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_126390:
    // 0x126390: 0x21200
    ctx->pc = 0x126390u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_126394:
    // 0x126394: 0x109202a
    ctx->pc = 0x126394u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_126398:
    // 0x126398: 0x621825
    ctx->pc = 0x126398u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12639c:
    // 0x12639c: 0xa4c30000
    ctx->pc = 0x12639cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1263a0:
    // 0x1263a0: 0x1480fff7
label_1263a4:
    if (ctx->pc == 0x1263A4u) {
        ctx->pc = 0x1263A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1263A8u;
        goto label_1263a8;
    }
    ctx->pc = 0x1263A0u;
    {
        const bool branch_taken_0x1263a0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1263A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1263a0) {
            ctx->pc = 0x126380u;
            goto label_126380;
        }
    }
    ctx->pc = 0x1263A8u;
label_1263a8:
    // 0x1263a8: 0x9203000e
    ctx->pc = 0x1263a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1263ac:
    // 0x1263ac: 0x31600
    ctx->pc = 0x1263acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_1263b0:
    // 0x1263b0: 0x24030002
    ctx->pc = 0x1263b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1263b4:
    // 0x1263b4: 0x21603
    ctx->pc = 0x1263b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1263b8:
    // 0x1263b8: 0xae030004
    ctx->pc = 0x1263b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1263bc:
    // 0x1263bc: 0x1221018
    ctx->pc = 0x1263bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1263c0:
    // 0x1263c0: 0xae090090
    ctx->pc = 0x1263c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_1263c4:
    // 0x1263c4: 0x21040
    ctx->pc = 0x1263c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1263c8:
    // 0x1263c8: 0xae020094
    ctx->pc = 0x1263c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1263cc:
    // 0x1263cc: 0x24020002
    ctx->pc = 0x1263ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1263d0:
    // 0x1263d0: 0x54620009
label_1263d4:
    if (ctx->pc == 0x1263D4u) {
        ctx->pc = 0x1263D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1263D8u;
        goto label_1263d8;
    }
    ctx->pc = 0x1263D0u;
    {
        const bool branch_taken_0x1263d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1263d0) {
            ctx->pc = 0x1263D4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1263F8u;
            goto label_1263f8;
        }
    }
    ctx->pc = 0x1263D8u;
label_1263d8:
    // 0x1263d8: 0x8e030080
    ctx->pc = 0x1263d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1263dc:
    // 0x1263dc: 0x8e040084
    ctx->pc = 0x1263dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1263e0:
    // 0x1263e0: 0x8e050094
    ctx->pc = 0x1263e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1263e4:
    // 0x1263e4: 0x60f809
label_1263e8:
    if (ctx->pc == 0x1263E8u) {
        ctx->pc = 0x1263E8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x1263ECu;
        goto label_1263ec;
    }
    ctx->pc = 0x1263E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1263ECu);
        ctx->pc = 0x1263E8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1263ECu; }
            if (ctx->pc != 0x1263ECu) { return; }
        }
    }
    ctx->pc = 0x1263ECu;
label_1263ec:
    // 0x1263ec: 0x24020003
    ctx->pc = 0x1263ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1263f0:
    // 0x1263f0: 0xae020004
    ctx->pc = 0x1263f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1263f4:
    // 0x1263f4: 0xdfb00000
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1263f8:
    // 0x1263f8: 0xdfb10008
    ctx->pc = 0x1263f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1263fc:
    // 0x1263fc: 0xdfb20010
    ctx->pc = 0x1263fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_126400:
    // 0x126400: 0xdfbf0018
    ctx->pc = 0x126400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_126404:
    // 0x126404: 0x3e00008
label_126408:
    if (ctx->pc == 0x126408u) {
        ctx->pc = 0x126408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12640Cu;
        goto label_12640c;
    }
    ctx->pc = 0x126404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126270u: goto label_126270;
            case 0x126274u: goto label_126274;
            case 0x126278u: goto label_126278;
            case 0x12627Cu: goto label_12627c;
            case 0x126280u: goto label_126280;
            case 0x126284u: goto label_126284;
            case 0x126288u: goto label_126288;
            case 0x12628Cu: goto label_12628c;
            case 0x126290u: goto label_126290;
            case 0x126294u: goto label_126294;
            case 0x126298u: goto label_126298;
            case 0x12629Cu: goto label_12629c;
            case 0x1262A0u: goto label_1262a0;
            case 0x1262A4u: goto label_1262a4;
            case 0x1262A8u: goto label_1262a8;
            case 0x1262ACu: goto label_1262ac;
            case 0x1262B0u: goto label_1262b0;
            case 0x1262B4u: goto label_1262b4;
            case 0x1262B8u: goto label_1262b8;
            case 0x1262BCu: goto label_1262bc;
            case 0x1262C0u: goto label_1262c0;
            case 0x1262C4u: goto label_1262c4;
            case 0x1262C8u: goto label_1262c8;
            case 0x1262CCu: goto label_1262cc;
            case 0x1262D0u: goto label_1262d0;
            case 0x1262D4u: goto label_1262d4;
            case 0x1262D8u: goto label_1262d8;
            case 0x1262DCu: goto label_1262dc;
            case 0x1262E0u: goto label_1262e0;
            case 0x1262E4u: goto label_1262e4;
            case 0x1262E8u: goto label_1262e8;
            case 0x1262ECu: goto label_1262ec;
            case 0x1262F0u: goto label_1262f0;
            case 0x1262F4u: goto label_1262f4;
            case 0x1262F8u: goto label_1262f8;
            case 0x1262FCu: goto label_1262fc;
            case 0x126300u: goto label_126300;
            case 0x126304u: goto label_126304;
            case 0x126308u: goto label_126308;
            case 0x12630Cu: goto label_12630c;
            case 0x126310u: goto label_126310;
            case 0x126314u: goto label_126314;
            case 0x126318u: goto label_126318;
            case 0x12631Cu: goto label_12631c;
            case 0x126320u: goto label_126320;
            case 0x126324u: goto label_126324;
            case 0x126328u: goto label_126328;
            case 0x12632Cu: goto label_12632c;
            case 0x126330u: goto label_126330;
            case 0x126334u: goto label_126334;
            case 0x126338u: goto label_126338;
            case 0x12633Cu: goto label_12633c;
            case 0x126340u: goto label_126340;
            case 0x126344u: goto label_126344;
            case 0x126348u: goto label_126348;
            case 0x12634Cu: goto label_12634c;
            case 0x126350u: goto label_126350;
            case 0x126354u: goto label_126354;
            case 0x126358u: goto label_126358;
            case 0x12635Cu: goto label_12635c;
            case 0x126360u: goto label_126360;
            case 0x126364u: goto label_126364;
            case 0x126368u: goto label_126368;
            case 0x12636Cu: goto label_12636c;
            case 0x126370u: goto label_126370;
            case 0x126374u: goto label_126374;
            case 0x126378u: goto label_126378;
            case 0x12637Cu: goto label_12637c;
            case 0x126380u: goto label_126380;
            case 0x126384u: goto label_126384;
            case 0x126388u: goto label_126388;
            case 0x12638Cu: goto label_12638c;
            case 0x126390u: goto label_126390;
            case 0x126394u: goto label_126394;
            case 0x126398u: goto label_126398;
            case 0x12639Cu: goto label_12639c;
            case 0x1263A0u: goto label_1263a0;
            case 0x1263A4u: goto label_1263a4;
            case 0x1263A8u: goto label_1263a8;
            case 0x1263ACu: goto label_1263ac;
            case 0x1263B0u: goto label_1263b0;
            case 0x1263B4u: goto label_1263b4;
            case 0x1263B8u: goto label_1263b8;
            case 0x1263BCu: goto label_1263bc;
            case 0x1263C0u: goto label_1263c0;
            case 0x1263C4u: goto label_1263c4;
            case 0x1263C8u: goto label_1263c8;
            case 0x1263CCu: goto label_1263cc;
            case 0x1263D0u: goto label_1263d0;
            case 0x1263D4u: goto label_1263d4;
            case 0x1263D8u: goto label_1263d8;
            case 0x1263DCu: goto label_1263dc;
            case 0x1263E0u: goto label_1263e0;
            case 0x1263E4u: goto label_1263e4;
            case 0x1263E8u: goto label_1263e8;
            case 0x1263ECu: goto label_1263ec;
            case 0x1263F0u: goto label_1263f0;
            case 0x1263F4u: goto label_1263f4;
            case 0x1263F8u: goto label_1263f8;
            case 0x1263FCu: goto label_1263fc;
            case 0x126400u: goto label_126400;
            case 0x126404u: goto label_126404;
            case 0x126408u: goto label_126408;
            case 0x12640Cu: goto label_12640c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12640Cu;
label_12640c:
    // 0x12640c: 0x0
    ctx->pc = 0x12640cu;
    // NOP
}
