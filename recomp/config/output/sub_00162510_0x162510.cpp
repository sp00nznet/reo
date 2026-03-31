#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162510
// Address: 0x162510 - 0x162660
void sub_00162510_0x162510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162510u;

label_162510:
    // 0x162510: 0x27bdffe0
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_162514:
    // 0x162514: 0xffb00000
    ctx->pc = 0x162514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162518:
    // 0x162518: 0xa0802d
    ctx->pc = 0x162518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16251c:
    // 0x16251c: 0xffb10008
    ctx->pc = 0x16251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162520:
    // 0x162520: 0xffbf0010
    ctx->pc = 0x162520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_162524:
    // 0x162524: 0xc057ff0
label_162528:
    if (ctx->pc == 0x162528u) {
        ctx->pc = 0x162528u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16252Cu;
        goto label_16252c;
    }
    ctx->pc = 0x162524u;
    SET_GPR_U32(ctx, 31, 0x16252Cu);
    ctx->pc = 0x162528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16252Cu; }
    }
    if (ctx->pc != 0x16252Cu) { return; }
    ctx->pc = 0x16252Cu;
label_16252c:
    // 0x16252c: 0x3c040024
    ctx->pc = 0x16252cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_162530:
    // 0x162530: 0x14400007
label_162534:
    if (ctx->pc == 0x162534u) {
        ctx->pc = 0x162534u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 264));
        ctx->pc = 0x162538u;
        goto label_162538;
    }
    ctx->pc = 0x162530u;
    {
        const bool branch_taken_0x162530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162534u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 264));
        if (branch_taken_0x162530) {
            ctx->pc = 0x162550u;
            goto label_162550;
        }
    }
    ctx->pc = 0x162538u;
label_162538:
    // 0x162538: 0xdfb00000
    ctx->pc = 0x162538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16253c:
    // 0x16253c: 0xdfb10008
    ctx->pc = 0x16253cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162540:
    // 0x162540: 0xdfbf0010
    ctx->pc = 0x162540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162544:
    // 0x162544: 0x8058dd4
label_162548:
    if (ctx->pc == 0x162548u) {
        ctx->pc = 0x162548u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16254Cu;
        goto label_16254c;
    }
    ctx->pc = 0x162544u;
    ctx->pc = 0x162548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x16254Cu;
label_16254c:
    // 0x16254c: 0x0
    ctx->pc = 0x16254cu;
    // NOP
label_162550:
    // 0x162550: 0x56000009
label_162554:
    if (ctx->pc == 0x162554u) {
        ctx->pc = 0x162554u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->pc = 0x162558u;
        goto label_162558;
    }
    ctx->pc = 0x162550u;
    {
        const bool branch_taken_0x162550 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x162550) {
            ctx->pc = 0x162554u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->pc = 0x162578u;
            goto label_162578;
        }
    }
    ctx->pc = 0x162558u;
label_162558:
    // 0x162558: 0x3c040024
    ctx->pc = 0x162558u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_16255c:
    // 0x16255c: 0xdfb00000
    ctx->pc = 0x16255cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162560:
    // 0x162560: 0xdfb10008
    ctx->pc = 0x162560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162564:
    // 0x162564: 0x24840138
    ctx->pc = 0x162564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 312));
label_162568:
    // 0x162568: 0xdfbf0010
    ctx->pc = 0x162568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16256c:
    // 0x16256c: 0x8058dd4
label_162570:
    if (ctx->pc == 0x162570u) {
        ctx->pc = 0x162570u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x162574u;
        goto label_162574;
    }
    ctx->pc = 0x16256Cu;
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x162574u;
label_162574:
    // 0x162574: 0x0
    ctx->pc = 0x162574u;
    // NOP
label_162578:
    // 0x162578: 0xc04f344
label_16257c:
    if (ctx->pc == 0x16257Cu) {
        ctx->pc = 0x16257Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162580u;
        goto label_162580;
    }
    ctx->pc = 0x162578u;
    SET_GPR_U32(ctx, 31, 0x162580u);
    ctx->pc = 0x16257Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD10_0x13cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162580u; }
    }
    if (ctx->pc != 0x162580u) { return; }
    ctx->pc = 0x162580u;
label_162580:
    // 0x162580: 0x3c040024
    ctx->pc = 0x162580u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_162584:
    // 0x162584: 0x200282d
    ctx->pc = 0x162584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162588:
    // 0x162588: 0x4410009
label_16258c:
    if (ctx->pc == 0x16258Cu) {
        ctx->pc = 0x16258Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 360));
        ctx->pc = 0x162590u;
        goto label_162590;
    }
    ctx->pc = 0x162588u;
    {
        const bool branch_taken_0x162588 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16258Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 360));
        if (branch_taken_0x162588) {
            ctx->pc = 0x1625B0u;
            goto label_1625b0;
        }
    }
    ctx->pc = 0x162590u;
label_162590:
    // 0x162590: 0x24020004
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_162594:
    // 0x162594: 0xdfb00000
    ctx->pc = 0x162594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162598:
    // 0x162598: 0xae220008
    ctx->pc = 0x162598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_16259c:
    // 0x16259c: 0xdfbf0010
    ctx->pc = 0x16259cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1625a0:
    // 0x1625a0: 0xdfb10008
    ctx->pc = 0x1625a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1625a4:
    // 0x1625a4: 0x8058dd4
label_1625a8:
    if (ctx->pc == 0x1625A8u) {
        ctx->pc = 0x1625A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1625ACu;
        goto label_1625ac;
    }
    ctx->pc = 0x1625A4u;
    ctx->pc = 0x1625A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x1625ACu;
label_1625ac:
    // 0x1625ac: 0x0
    ctx->pc = 0x1625acu;
    // NOP
label_1625b0:
    // 0x1625b0: 0x8e220074
    ctx->pc = 0x1625b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1625b4:
    // 0x1625b4: 0xdfb00000
    ctx->pc = 0x1625b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1625b8:
    // 0x1625b8: 0x24420001
    ctx->pc = 0x1625b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1625bc:
    // 0x1625bc: 0xdfbf0010
    ctx->pc = 0x1625bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1625c0:
    // 0x1625c0: 0xae220074
    ctx->pc = 0x1625c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_1625c4:
    // 0x1625c4: 0xdfb10008
    ctx->pc = 0x1625c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1625c8:
    // 0x1625c8: 0x3e00008
label_1625cc:
    if (ctx->pc == 0x1625CCu) {
        ctx->pc = 0x1625CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1625D0u;
        goto label_1625d0;
    }
    ctx->pc = 0x1625C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1625CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162510u: goto label_162510;
            case 0x162514u: goto label_162514;
            case 0x162518u: goto label_162518;
            case 0x16251Cu: goto label_16251c;
            case 0x162520u: goto label_162520;
            case 0x162524u: goto label_162524;
            case 0x162528u: goto label_162528;
            case 0x16252Cu: goto label_16252c;
            case 0x162530u: goto label_162530;
            case 0x162534u: goto label_162534;
            case 0x162538u: goto label_162538;
            case 0x16253Cu: goto label_16253c;
            case 0x162540u: goto label_162540;
            case 0x162544u: goto label_162544;
            case 0x162548u: goto label_162548;
            case 0x16254Cu: goto label_16254c;
            case 0x162550u: goto label_162550;
            case 0x162554u: goto label_162554;
            case 0x162558u: goto label_162558;
            case 0x16255Cu: goto label_16255c;
            case 0x162560u: goto label_162560;
            case 0x162564u: goto label_162564;
            case 0x162568u: goto label_162568;
            case 0x16256Cu: goto label_16256c;
            case 0x162570u: goto label_162570;
            case 0x162574u: goto label_162574;
            case 0x162578u: goto label_162578;
            case 0x16257Cu: goto label_16257c;
            case 0x162580u: goto label_162580;
            case 0x162584u: goto label_162584;
            case 0x162588u: goto label_162588;
            case 0x16258Cu: goto label_16258c;
            case 0x162590u: goto label_162590;
            case 0x162594u: goto label_162594;
            case 0x162598u: goto label_162598;
            case 0x16259Cu: goto label_16259c;
            case 0x1625A0u: goto label_1625a0;
            case 0x1625A4u: goto label_1625a4;
            case 0x1625A8u: goto label_1625a8;
            case 0x1625ACu: goto label_1625ac;
            case 0x1625B0u: goto label_1625b0;
            case 0x1625B4u: goto label_1625b4;
            case 0x1625B8u: goto label_1625b8;
            case 0x1625BCu: goto label_1625bc;
            case 0x1625C0u: goto label_1625c0;
            case 0x1625C4u: goto label_1625c4;
            case 0x1625C8u: goto label_1625c8;
            case 0x1625CCu: goto label_1625cc;
            case 0x1625D0u: goto label_1625d0;
            case 0x1625D4u: goto label_1625d4;
            case 0x1625D8u: goto label_1625d8;
            case 0x1625DCu: goto label_1625dc;
            case 0x1625E0u: goto label_1625e0;
            case 0x1625E4u: goto label_1625e4;
            case 0x1625E8u: goto label_1625e8;
            case 0x1625ECu: goto label_1625ec;
            case 0x1625F0u: goto label_1625f0;
            case 0x1625F4u: goto label_1625f4;
            case 0x1625F8u: goto label_1625f8;
            case 0x1625FCu: goto label_1625fc;
            case 0x162600u: goto label_162600;
            case 0x162604u: goto label_162604;
            case 0x162608u: goto label_162608;
            case 0x16260Cu: goto label_16260c;
            case 0x162610u: goto label_162610;
            case 0x162614u: goto label_162614;
            case 0x162618u: goto label_162618;
            case 0x16261Cu: goto label_16261c;
            case 0x162620u: goto label_162620;
            case 0x162624u: goto label_162624;
            case 0x162628u: goto label_162628;
            case 0x16262Cu: goto label_16262c;
            case 0x162630u: goto label_162630;
            case 0x162634u: goto label_162634;
            case 0x162638u: goto label_162638;
            case 0x16263Cu: goto label_16263c;
            case 0x162640u: goto label_162640;
            case 0x162644u: goto label_162644;
            case 0x162648u: goto label_162648;
            case 0x16264Cu: goto label_16264c;
            case 0x162650u: goto label_162650;
            case 0x162654u: goto label_162654;
            case 0x162658u: goto label_162658;
            case 0x16265Cu: goto label_16265c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1625D0u;
label_1625d0:
    // 0x1625d0: 0x27bdfff0
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1625d4:
    // 0x1625d4: 0xffb00000
    ctx->pc = 0x1625d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1625d8:
    // 0x1625d8: 0xffbf0008
    ctx->pc = 0x1625d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1625dc:
    // 0x1625dc: 0xc057ff0
label_1625e0:
    if (ctx->pc == 0x1625E0u) {
        ctx->pc = 0x1625E0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1625E4u;
        goto label_1625e4;
    }
    ctx->pc = 0x1625DCu;
    SET_GPR_U32(ctx, 31, 0x1625E4u);
    ctx->pc = 0x1625E0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1625E4u; }
    }
    if (ctx->pc != 0x1625E4u) { return; }
    ctx->pc = 0x1625E4u;
label_1625e4:
    // 0x1625e4: 0x24050001
    ctx->pc = 0x1625e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1625e8:
    // 0x1625e8: 0x14400007
label_1625ec:
    if (ctx->pc == 0x1625ECu) {
        ctx->pc = 0x1625ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1625F0u;
        goto label_1625f0;
    }
    ctx->pc = 0x1625E8u;
    {
        const bool branch_taken_0x1625e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1625ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1625e8) {
            ctx->pc = 0x162608u;
            goto label_162608;
        }
    }
    ctx->pc = 0x1625F0u;
label_1625f0:
    // 0x1625f0: 0x3c040024
    ctx->pc = 0x1625f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1625f4:
    // 0x1625f4: 0xdfb00000
    ctx->pc = 0x1625f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1625f8:
    // 0x1625f8: 0xdfbf0008
    ctx->pc = 0x1625f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1625fc:
    // 0x1625fc: 0x24840198
    ctx->pc = 0x1625fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 408));
label_162600:
    // 0x162600: 0x8058dd4
label_162604:
    if (ctx->pc == 0x162604u) {
        ctx->pc = 0x162604u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x162608u;
        goto label_162608;
    }
    ctx->pc = 0x162600u;
    ctx->pc = 0x162604u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x162608u;
label_162608:
    // 0x162608: 0xc058abe
label_16260c:
    if (ctx->pc == 0x16260Cu) {
        ctx->pc = 0x162610u;
        goto label_162610;
    }
    ctx->pc = 0x162608u;
    SET_GPR_U32(ctx, 31, 0x162610u);
    ctx->pc = 0x162AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162AF8_0x162af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162610u; }
    }
    if (ctx->pc != 0x162610u) { return; }
    ctx->pc = 0x162610u;
label_162610:
    // 0x162610: 0x200202d
    ctx->pc = 0x162610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_162614:
    // 0x162614: 0xc057c9c
label_162618:
    if (ctx->pc == 0x162618u) {
        ctx->pc = 0x162618u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->pc = 0x16261Cu;
        goto label_16261c;
    }
    ctx->pc = 0x162614u;
    SET_GPR_U32(ctx, 31, 0x16261Cu);
    ctx->pc = 0x162618u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 300)));
    ctx->pc = 0x15F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F270_0x15f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16261Cu; }
    }
    if (ctx->pc != 0x16261Cu) { return; }
    ctx->pc = 0x16261Cu;
label_16261c:
    // 0x16261c: 0xc057d6c
label_162620:
    if (ctx->pc == 0x162620u) {
        ctx->pc = 0x162620u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162624u;
        goto label_162624;
    }
    ctx->pc = 0x16261Cu;
    SET_GPR_U32(ctx, 31, 0x162624u);
    ctx->pc = 0x162620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F5B0_0x15f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162624u; }
    }
    if (ctx->pc != 0x162624u) { return; }
    ctx->pc = 0x162624u;
label_162624:
    // 0x162624: 0xc04f3c4
label_162628:
    if (ctx->pc == 0x162628u) {
        ctx->pc = 0x162628u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x16262Cu;
        goto label_16262c;
    }
    ctx->pc = 0x162624u;
    SET_GPR_U32(ctx, 31, 0x16262Cu);
    ctx->pc = 0x162628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x13CF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF10_0x13cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16262Cu; }
    }
    if (ctx->pc != 0x16262Cu) { return; }
    ctx->pc = 0x16262Cu;
label_16262c:
    // 0x16262c: 0x8e020128
    ctx->pc = 0x16262cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_162630:
    // 0x162630: 0x10400005
label_162634:
    if (ctx->pc == 0x162634u) {
        ctx->pc = 0x162634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x162638u;
        goto label_162638;
    }
    ctx->pc = 0x162630u;
    {
        const bool branch_taken_0x162630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162630) {
            ctx->pc = 0x162648u;
            goto label_162648;
        }
    }
    ctx->pc = 0x162638u;
label_162638:
    // 0x162638: 0x8c420000
    ctx->pc = 0x162638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16263c:
    // 0x16263c: 0x8c430014
    ctx->pc = 0x16263cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_162640:
    // 0x162640: 0x60f809
label_162644:
    if (ctx->pc == 0x162644u) {
        ctx->pc = 0x162648u;
        goto label_162648;
    }
    ctx->pc = 0x162640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162648u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162510u: goto label_162510;
            case 0x162514u: goto label_162514;
            case 0x162518u: goto label_162518;
            case 0x16251Cu: goto label_16251c;
            case 0x162520u: goto label_162520;
            case 0x162524u: goto label_162524;
            case 0x162528u: goto label_162528;
            case 0x16252Cu: goto label_16252c;
            case 0x162530u: goto label_162530;
            case 0x162534u: goto label_162534;
            case 0x162538u: goto label_162538;
            case 0x16253Cu: goto label_16253c;
            case 0x162540u: goto label_162540;
            case 0x162544u: goto label_162544;
            case 0x162548u: goto label_162548;
            case 0x16254Cu: goto label_16254c;
            case 0x162550u: goto label_162550;
            case 0x162554u: goto label_162554;
            case 0x162558u: goto label_162558;
            case 0x16255Cu: goto label_16255c;
            case 0x162560u: goto label_162560;
            case 0x162564u: goto label_162564;
            case 0x162568u: goto label_162568;
            case 0x16256Cu: goto label_16256c;
            case 0x162570u: goto label_162570;
            case 0x162574u: goto label_162574;
            case 0x162578u: goto label_162578;
            case 0x16257Cu: goto label_16257c;
            case 0x162580u: goto label_162580;
            case 0x162584u: goto label_162584;
            case 0x162588u: goto label_162588;
            case 0x16258Cu: goto label_16258c;
            case 0x162590u: goto label_162590;
            case 0x162594u: goto label_162594;
            case 0x162598u: goto label_162598;
            case 0x16259Cu: goto label_16259c;
            case 0x1625A0u: goto label_1625a0;
            case 0x1625A4u: goto label_1625a4;
            case 0x1625A8u: goto label_1625a8;
            case 0x1625ACu: goto label_1625ac;
            case 0x1625B0u: goto label_1625b0;
            case 0x1625B4u: goto label_1625b4;
            case 0x1625B8u: goto label_1625b8;
            case 0x1625BCu: goto label_1625bc;
            case 0x1625C0u: goto label_1625c0;
            case 0x1625C4u: goto label_1625c4;
            case 0x1625C8u: goto label_1625c8;
            case 0x1625CCu: goto label_1625cc;
            case 0x1625D0u: goto label_1625d0;
            case 0x1625D4u: goto label_1625d4;
            case 0x1625D8u: goto label_1625d8;
            case 0x1625DCu: goto label_1625dc;
            case 0x1625E0u: goto label_1625e0;
            case 0x1625E4u: goto label_1625e4;
            case 0x1625E8u: goto label_1625e8;
            case 0x1625ECu: goto label_1625ec;
            case 0x1625F0u: goto label_1625f0;
            case 0x1625F4u: goto label_1625f4;
            case 0x1625F8u: goto label_1625f8;
            case 0x1625FCu: goto label_1625fc;
            case 0x162600u: goto label_162600;
            case 0x162604u: goto label_162604;
            case 0x162608u: goto label_162608;
            case 0x16260Cu: goto label_16260c;
            case 0x162610u: goto label_162610;
            case 0x162614u: goto label_162614;
            case 0x162618u: goto label_162618;
            case 0x16261Cu: goto label_16261c;
            case 0x162620u: goto label_162620;
            case 0x162624u: goto label_162624;
            case 0x162628u: goto label_162628;
            case 0x16262Cu: goto label_16262c;
            case 0x162630u: goto label_162630;
            case 0x162634u: goto label_162634;
            case 0x162638u: goto label_162638;
            case 0x16263Cu: goto label_16263c;
            case 0x162640u: goto label_162640;
            case 0x162644u: goto label_162644;
            case 0x162648u: goto label_162648;
            case 0x16264Cu: goto label_16264c;
            case 0x162650u: goto label_162650;
            case 0x162654u: goto label_162654;
            case 0x162658u: goto label_162658;
            case 0x16265Cu: goto label_16265c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x162648u; }
            if (ctx->pc != 0x162648u) { return; }
        }
    }
    ctx->pc = 0x162648u;
label_162648:
    // 0x162648: 0x200202d
    ctx->pc = 0x162648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16264c:
    // 0x16264c: 0xdfb00000
    ctx->pc = 0x16264cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162650:
    // 0x162650: 0xdfbf0008
    ctx->pc = 0x162650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162654:
    // 0x162654: 0x8056fea
label_162658:
    if (ctx->pc == 0x162658u) {
        ctx->pc = 0x162658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16265Cu;
        goto label_16265c;
    }
    ctx->pc = 0x162654u;
    ctx->pc = 0x162658u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15BFA8u;
    sub_0015BFA8_0x15bfa8(rdram, ctx, runtime); return;
    ctx->pc = 0x16265Cu;
label_16265c:
    // 0x16265c: 0x0
    ctx->pc = 0x16265cu;
    // NOP
}
