#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00106358
// Address: 0x106358 - 0x106738
void sub_00106358_0x106358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106358u;

label_106358:
    // 0x106358: 0x27bdffb0
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_10635c:
    // 0x10635c: 0x102d
    ctx->pc = 0x10635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106360:
    // 0x106360: 0xffb10008
    ctx->pc = 0x106360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_106364:
    // 0x106364: 0xffb60030
    ctx->pc = 0x106364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_106368:
    // 0x106368: 0xa0b02d
    ctx->pc = 0x106368u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10636c:
    // 0x10636c: 0xffb00000
    ctx->pc = 0x10636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_106370:
    // 0x106370: 0xffb20010
    ctx->pc = 0x106370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_106374:
    // 0x106374: 0xffb30018
    ctx->pc = 0x106374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_106378:
    // 0x106378: 0xffb40020
    ctx->pc = 0x106378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_10637c:
    // 0x10637c: 0xffb50028
    ctx->pc = 0x10637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_106380:
    // 0x106380: 0xffb70038
    ctx->pc = 0x106380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_106384:
    // 0x106384: 0xffbf0040
    ctx->pc = 0x106384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_106388:
    // 0x106388: 0x8ed20008
    ctx->pc = 0x106388u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_10638c:
    // 0x10638c: 0x124000df
label_106390:
    if (ctx->pc == 0x106390u) {
        ctx->pc = 0x106390u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106394u;
        goto label_106394;
    }
    ctx->pc = 0x10638Cu;
    {
        const bool branch_taken_0x10638c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x106390u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10638c) {
            ctx->pc = 0x10670Cu;
            goto label_10670c;
        }
    }
    ctx->pc = 0x106394u;
label_106394:
    // 0x106394: 0x9623000c
    ctx->pc = 0x106394u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_106398:
    // 0x106398: 0x30620008
    ctx->pc = 0x106398u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_10639c:
    // 0x10639c: 0x10400004
label_1063a0:
    if (ctx->pc == 0x1063A0u) {
        ctx->pc = 0x1063A4u;
        goto label_1063a4;
    }
    ctx->pc = 0x10639Cu;
    {
        const bool branch_taken_0x10639c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10639c) {
            ctx->pc = 0x1063B0u;
            goto label_1063b0;
        }
    }
    ctx->pc = 0x1063A4u;
label_1063a4:
    // 0x1063a4: 0x8e220010
    ctx->pc = 0x1063a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1063a8:
    // 0x1063a8: 0x14400007
label_1063ac:
    if (ctx->pc == 0x1063ACu) {
        ctx->pc = 0x1063ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1063B0u;
        goto label_1063b0;
    }
    ctx->pc = 0x1063A8u;
    {
        const bool branch_taken_0x1063a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1063ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1063a8) {
            ctx->pc = 0x1063C8u;
            goto label_1063c8;
        }
    }
    ctx->pc = 0x1063B0u;
label_1063b0:
    // 0x1063b0: 0xc043e64
label_1063b4:
    if (ctx->pc == 0x1063B4u) {
        ctx->pc = 0x1063B8u;
        goto label_1063b8;
    }
    ctx->pc = 0x1063B0u;
    SET_GPR_U32(ctx, 31, 0x1063B8u);
    ctx->pc = 0x10F990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F990_0x10f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1063B8u; }
    }
    if (ctx->pc != 0x1063B8u) { return; }
    ctx->pc = 0x1063B8u;
label_1063b8:
    // 0x1063b8: 0x144000d4
label_1063bc:
    if (ctx->pc == 0x1063BCu) {
        ctx->pc = 0x1063BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1063C0u;
        goto label_1063c0;
    }
    ctx->pc = 0x1063B8u;
    {
        const bool branch_taken_0x1063b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1063BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1063b8) {
            ctx->pc = 0x10670Cu;
            goto label_10670c;
        }
    }
    ctx->pc = 0x1063C0u;
label_1063c0:
    // 0x1063c0: 0x9623000c
    ctx->pc = 0x1063c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1063c4:
    // 0x1063c4: 0x30620002
    ctx->pc = 0x1063c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
label_1063c8:
    // 0x1063c8: 0x8ed40000
    ctx->pc = 0x1063c8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1063cc:
    // 0x1063cc: 0x1040001e
label_1063d0:
    if (ctx->pc == 0x1063D0u) {
        ctx->pc = 0x1063D0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1063D4u;
        goto label_1063d4;
    }
    ctx->pc = 0x1063CCu;
    {
        const bool branch_taken_0x1063cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1063D0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1063cc) {
            ctx->pc = 0x106448u;
            goto label_106448;
        }
    }
    ctx->pc = 0x1063D4u;
label_1063d4:
    // 0x1063d4: 0x24150400
    ctx->pc = 0x1063d4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1024));
label_1063d8:
    // 0x1063d8: 0x56400009
label_1063dc:
    if (ctx->pc == 0x1063DCu) {
        ctx->pc = 0x1063DCu;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 18), 1025));
        ctx->pc = 0x1063E0u;
        goto label_1063e0;
    }
    ctx->pc = 0x1063D8u;
    {
        const bool branch_taken_0x1063d8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x1063d8) {
            ctx->pc = 0x1063DCu;
            SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 18), 1025));
            ctx->pc = 0x106400u;
            goto label_106400;
        }
    }
    ctx->pc = 0x1063E0u;
label_1063e0:
    // 0x1063e0: 0x8e920004
    ctx->pc = 0x1063e0u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1063e4:
    // 0x1063e4: 0x8e930000
    ctx->pc = 0x1063e4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1063e8:
    // 0x1063e8: 0x0
    ctx->pc = 0x1063e8u;
    // NOP
label_1063ec:
    // 0x1063ec: 0x0
    ctx->pc = 0x1063ecu;
    // NOP
label_1063f0:
    // 0x1063f0: 0x0
    ctx->pc = 0x1063f0u;
    // NOP
label_1063f4:
    // 0x1063f4: 0x1240fffa
label_1063f8:
    if (ctx->pc == 0x1063F8u) {
        ctx->pc = 0x1063F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x1063FCu;
        goto label_1063fc;
    }
    ctx->pc = 0x1063F4u;
    {
        const bool branch_taken_0x1063f4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1063F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x1063f4) {
            ctx->pc = 0x1063E0u;
            goto label_1063e0;
        }
    }
    ctx->pc = 0x1063FCu;
label_1063fc:
    // 0x1063fc: 0x2e430401
    ctx->pc = 0x1063fcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 18), 1025));
label_106400:
    // 0x106400: 0x8e220024
    ctx->pc = 0x106400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_106404:
    // 0x106404: 0x8e24001c
    ctx->pc = 0x106404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_106408:
    // 0x106408: 0x2a0302d
    ctx->pc = 0x106408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10640c:
    // 0x10640c: 0x243300b
    ctx->pc = 0x10640cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 18));
label_106410:
    // 0x106410: 0x40f809
label_106414:
    if (ctx->pc == 0x106414u) {
        ctx->pc = 0x106414u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106418u;
        goto label_106418;
    }
    ctx->pc = 0x106410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106418u);
        ctx->pc = 0x106414u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106358u: goto label_106358;
            case 0x10635Cu: goto label_10635c;
            case 0x106360u: goto label_106360;
            case 0x106364u: goto label_106364;
            case 0x106368u: goto label_106368;
            case 0x10636Cu: goto label_10636c;
            case 0x106370u: goto label_106370;
            case 0x106374u: goto label_106374;
            case 0x106378u: goto label_106378;
            case 0x10637Cu: goto label_10637c;
            case 0x106380u: goto label_106380;
            case 0x106384u: goto label_106384;
            case 0x106388u: goto label_106388;
            case 0x10638Cu: goto label_10638c;
            case 0x106390u: goto label_106390;
            case 0x106394u: goto label_106394;
            case 0x106398u: goto label_106398;
            case 0x10639Cu: goto label_10639c;
            case 0x1063A0u: goto label_1063a0;
            case 0x1063A4u: goto label_1063a4;
            case 0x1063A8u: goto label_1063a8;
            case 0x1063ACu: goto label_1063ac;
            case 0x1063B0u: goto label_1063b0;
            case 0x1063B4u: goto label_1063b4;
            case 0x1063B8u: goto label_1063b8;
            case 0x1063BCu: goto label_1063bc;
            case 0x1063C0u: goto label_1063c0;
            case 0x1063C4u: goto label_1063c4;
            case 0x1063C8u: goto label_1063c8;
            case 0x1063CCu: goto label_1063cc;
            case 0x1063D0u: goto label_1063d0;
            case 0x1063D4u: goto label_1063d4;
            case 0x1063D8u: goto label_1063d8;
            case 0x1063DCu: goto label_1063dc;
            case 0x1063E0u: goto label_1063e0;
            case 0x1063E4u: goto label_1063e4;
            case 0x1063E8u: goto label_1063e8;
            case 0x1063ECu: goto label_1063ec;
            case 0x1063F0u: goto label_1063f0;
            case 0x1063F4u: goto label_1063f4;
            case 0x1063F8u: goto label_1063f8;
            case 0x1063FCu: goto label_1063fc;
            case 0x106400u: goto label_106400;
            case 0x106404u: goto label_106404;
            case 0x106408u: goto label_106408;
            case 0x10640Cu: goto label_10640c;
            case 0x106410u: goto label_106410;
            case 0x106414u: goto label_106414;
            case 0x106418u: goto label_106418;
            case 0x10641Cu: goto label_10641c;
            case 0x106420u: goto label_106420;
            case 0x106424u: goto label_106424;
            case 0x106428u: goto label_106428;
            case 0x10642Cu: goto label_10642c;
            case 0x106430u: goto label_106430;
            case 0x106434u: goto label_106434;
            case 0x106438u: goto label_106438;
            case 0x10643Cu: goto label_10643c;
            case 0x106440u: goto label_106440;
            case 0x106444u: goto label_106444;
            case 0x106448u: goto label_106448;
            case 0x10644Cu: goto label_10644c;
            case 0x106450u: goto label_106450;
            case 0x106454u: goto label_106454;
            case 0x106458u: goto label_106458;
            case 0x10645Cu: goto label_10645c;
            case 0x106460u: goto label_106460;
            case 0x106464u: goto label_106464;
            case 0x106468u: goto label_106468;
            case 0x10646Cu: goto label_10646c;
            case 0x106470u: goto label_106470;
            case 0x106474u: goto label_106474;
            case 0x106478u: goto label_106478;
            case 0x10647Cu: goto label_10647c;
            case 0x106480u: goto label_106480;
            case 0x106484u: goto label_106484;
            case 0x106488u: goto label_106488;
            case 0x10648Cu: goto label_10648c;
            case 0x106490u: goto label_106490;
            case 0x106494u: goto label_106494;
            case 0x106498u: goto label_106498;
            case 0x10649Cu: goto label_10649c;
            case 0x1064A0u: goto label_1064a0;
            case 0x1064A4u: goto label_1064a4;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064ACu: goto label_1064ac;
            case 0x1064B0u: goto label_1064b0;
            case 0x1064B4u: goto label_1064b4;
            case 0x1064B8u: goto label_1064b8;
            case 0x1064BCu: goto label_1064bc;
            case 0x1064C0u: goto label_1064c0;
            case 0x1064C4u: goto label_1064c4;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064CCu: goto label_1064cc;
            case 0x1064D0u: goto label_1064d0;
            case 0x1064D4u: goto label_1064d4;
            case 0x1064D8u: goto label_1064d8;
            case 0x1064DCu: goto label_1064dc;
            case 0x1064E0u: goto label_1064e0;
            case 0x1064E4u: goto label_1064e4;
            case 0x1064E8u: goto label_1064e8;
            case 0x1064ECu: goto label_1064ec;
            case 0x1064F0u: goto label_1064f0;
            case 0x1064F4u: goto label_1064f4;
            case 0x1064F8u: goto label_1064f8;
            case 0x1064FCu: goto label_1064fc;
            case 0x106500u: goto label_106500;
            case 0x106504u: goto label_106504;
            case 0x106508u: goto label_106508;
            case 0x10650Cu: goto label_10650c;
            case 0x106510u: goto label_106510;
            case 0x106514u: goto label_106514;
            case 0x106518u: goto label_106518;
            case 0x10651Cu: goto label_10651c;
            case 0x106520u: goto label_106520;
            case 0x106524u: goto label_106524;
            case 0x106528u: goto label_106528;
            case 0x10652Cu: goto label_10652c;
            case 0x106530u: goto label_106530;
            case 0x106534u: goto label_106534;
            case 0x106538u: goto label_106538;
            case 0x10653Cu: goto label_10653c;
            case 0x106540u: goto label_106540;
            case 0x106544u: goto label_106544;
            case 0x106548u: goto label_106548;
            case 0x10654Cu: goto label_10654c;
            case 0x106550u: goto label_106550;
            case 0x106554u: goto label_106554;
            case 0x106558u: goto label_106558;
            case 0x10655Cu: goto label_10655c;
            case 0x106560u: goto label_106560;
            case 0x106564u: goto label_106564;
            case 0x106568u: goto label_106568;
            case 0x10656Cu: goto label_10656c;
            case 0x106570u: goto label_106570;
            case 0x106574u: goto label_106574;
            case 0x106578u: goto label_106578;
            case 0x10657Cu: goto label_10657c;
            case 0x106580u: goto label_106580;
            case 0x106584u: goto label_106584;
            case 0x106588u: goto label_106588;
            case 0x10658Cu: goto label_10658c;
            case 0x106590u: goto label_106590;
            case 0x106594u: goto label_106594;
            case 0x106598u: goto label_106598;
            case 0x10659Cu: goto label_10659c;
            case 0x1065A0u: goto label_1065a0;
            case 0x1065A4u: goto label_1065a4;
            case 0x1065A8u: goto label_1065a8;
            case 0x1065ACu: goto label_1065ac;
            case 0x1065B0u: goto label_1065b0;
            case 0x1065B4u: goto label_1065b4;
            case 0x1065B8u: goto label_1065b8;
            case 0x1065BCu: goto label_1065bc;
            case 0x1065C0u: goto label_1065c0;
            case 0x1065C4u: goto label_1065c4;
            case 0x1065C8u: goto label_1065c8;
            case 0x1065CCu: goto label_1065cc;
            case 0x1065D0u: goto label_1065d0;
            case 0x1065D4u: goto label_1065d4;
            case 0x1065D8u: goto label_1065d8;
            case 0x1065DCu: goto label_1065dc;
            case 0x1065E0u: goto label_1065e0;
            case 0x1065E4u: goto label_1065e4;
            case 0x1065E8u: goto label_1065e8;
            case 0x1065ECu: goto label_1065ec;
            case 0x1065F0u: goto label_1065f0;
            case 0x1065F4u: goto label_1065f4;
            case 0x1065F8u: goto label_1065f8;
            case 0x1065FCu: goto label_1065fc;
            case 0x106600u: goto label_106600;
            case 0x106604u: goto label_106604;
            case 0x106608u: goto label_106608;
            case 0x10660Cu: goto label_10660c;
            case 0x106610u: goto label_106610;
            case 0x106614u: goto label_106614;
            case 0x106618u: goto label_106618;
            case 0x10661Cu: goto label_10661c;
            case 0x106620u: goto label_106620;
            case 0x106624u: goto label_106624;
            case 0x106628u: goto label_106628;
            case 0x10662Cu: goto label_10662c;
            case 0x106630u: goto label_106630;
            case 0x106634u: goto label_106634;
            case 0x106638u: goto label_106638;
            case 0x10663Cu: goto label_10663c;
            case 0x106640u: goto label_106640;
            case 0x106644u: goto label_106644;
            case 0x106648u: goto label_106648;
            case 0x10664Cu: goto label_10664c;
            case 0x106650u: goto label_106650;
            case 0x106654u: goto label_106654;
            case 0x106658u: goto label_106658;
            case 0x10665Cu: goto label_10665c;
            case 0x106660u: goto label_106660;
            case 0x106664u: goto label_106664;
            case 0x106668u: goto label_106668;
            case 0x10666Cu: goto label_10666c;
            case 0x106670u: goto label_106670;
            case 0x106674u: goto label_106674;
            case 0x106678u: goto label_106678;
            case 0x10667Cu: goto label_10667c;
            case 0x106680u: goto label_106680;
            case 0x106684u: goto label_106684;
            case 0x106688u: goto label_106688;
            case 0x10668Cu: goto label_10668c;
            case 0x106690u: goto label_106690;
            case 0x106694u: goto label_106694;
            case 0x106698u: goto label_106698;
            case 0x10669Cu: goto label_10669c;
            case 0x1066A0u: goto label_1066a0;
            case 0x1066A4u: goto label_1066a4;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066ACu: goto label_1066ac;
            case 0x1066B0u: goto label_1066b0;
            case 0x1066B4u: goto label_1066b4;
            case 0x1066B8u: goto label_1066b8;
            case 0x1066BCu: goto label_1066bc;
            case 0x1066C0u: goto label_1066c0;
            case 0x1066C4u: goto label_1066c4;
            case 0x1066C8u: goto label_1066c8;
            case 0x1066CCu: goto label_1066cc;
            case 0x1066D0u: goto label_1066d0;
            case 0x1066D4u: goto label_1066d4;
            case 0x1066D8u: goto label_1066d8;
            case 0x1066DCu: goto label_1066dc;
            case 0x1066E0u: goto label_1066e0;
            case 0x1066E4u: goto label_1066e4;
            case 0x1066E8u: goto label_1066e8;
            case 0x1066ECu: goto label_1066ec;
            case 0x1066F0u: goto label_1066f0;
            case 0x1066F4u: goto label_1066f4;
            case 0x1066F8u: goto label_1066f8;
            case 0x1066FCu: goto label_1066fc;
            case 0x106700u: goto label_106700;
            case 0x106704u: goto label_106704;
            case 0x106708u: goto label_106708;
            case 0x10670Cu: goto label_10670c;
            case 0x106710u: goto label_106710;
            case 0x106714u: goto label_106714;
            case 0x106718u: goto label_106718;
            case 0x10671Cu: goto label_10671c;
            case 0x106720u: goto label_106720;
            case 0x106724u: goto label_106724;
            case 0x106728u: goto label_106728;
            case 0x10672Cu: goto label_10672c;
            case 0x106730u: goto label_106730;
            case 0x106734u: goto label_106734;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106418u; }
            if (ctx->pc != 0x106418u) { return; }
        }
    }
    ctx->pc = 0x106418u;
label_106418:
    // 0x106418: 0x40802d
    ctx->pc = 0x106418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10641c:
    // 0x10641c: 0x5a0000b8
label_106420:
    if (ctx->pc == 0x106420u) {
        ctx->pc = 0x106420u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x106424u;
        goto label_106424;
    }
    ctx->pc = 0x10641Cu;
    {
        const bool branch_taken_0x10641c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x10641c) {
            ctx->pc = 0x106420u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x106424u;
label_106424:
    // 0x106424: 0x8ec20008
    ctx->pc = 0x106424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_106428:
    // 0x106428: 0x2709821
    ctx->pc = 0x106428u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10642c:
    // 0x10642c: 0x2509023
    ctx->pc = 0x10642cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_106430:
    // 0x106430: 0x501023
    ctx->pc = 0x106430u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_106434:
    // 0x106434: 0x1440ffe8
label_106438:
    if (ctx->pc == 0x106438u) {
        ctx->pc = 0x106438u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x10643Cu;
        goto label_10643c;
    }
    ctx->pc = 0x106434u;
    {
        const bool branch_taken_0x106434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x106438u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x106434) {
            ctx->pc = 0x1063D8u;
            goto label_1063d8;
        }
    }
    ctx->pc = 0x10643Cu;
label_10643c:
    // 0x10643c: 0x100000b3
label_106440:
    if (ctx->pc == 0x106440u) {
        ctx->pc = 0x106440u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106444u;
        goto label_106444;
    }
    ctx->pc = 0x10643Cu;
    {
        const bool branch_taken_0x10643c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106440u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10643c) {
            ctx->pc = 0x10670Cu;
            goto label_10670c;
        }
    }
    ctx->pc = 0x106444u;
label_106444:
    // 0x106444: 0x0
    ctx->pc = 0x106444u;
    // NOP
label_106448:
    // 0x106448: 0x30620001
    ctx->pc = 0x106448u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_10644c:
    // 0x10644c: 0x14400052
label_106450:
    if (ctx->pc == 0x106450u) {
        ctx->pc = 0x106450u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106454u;
        goto label_106454;
    }
    ctx->pc = 0x10644Cu;
    {
        const bool branch_taken_0x10644c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x106450u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10644c) {
            ctx->pc = 0x106598u;
            goto label_106598;
        }
    }
    ctx->pc = 0x106454u;
label_106454:
    // 0x106454: 0x10000004
label_106458:
    if (ctx->pc == 0x106458u) {
        ctx->pc = 0x10645Cu;
        goto label_10645c;
    }
    ctx->pc = 0x106454u;
    {
        const bool branch_taken_0x106454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x106454) {
            ctx->pc = 0x106468u;
            goto label_106468;
        }
    }
    ctx->pc = 0x10645Cu;
label_10645c:
    // 0x10645c: 0x0
    ctx->pc = 0x10645cu;
    // NOP
label_106460:
    // 0x106460: 0x9623000c
    ctx->pc = 0x106460u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_106464:
    // 0x106464: 0x0
    ctx->pc = 0x106464u;
    // NOP
label_106468:
    // 0x106468: 0x16400009
label_10646c:
    if (ctx->pc == 0x10646Cu) {
        ctx->pc = 0x10646Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
        ctx->pc = 0x106470u;
        goto label_106470;
    }
    ctx->pc = 0x106468u;
    {
        const bool branch_taken_0x106468 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x10646Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
        if (branch_taken_0x106468) {
            ctx->pc = 0x106490u;
            goto label_106490;
        }
    }
    ctx->pc = 0x106470u;
label_106470:
    // 0x106470: 0x8e920004
    ctx->pc = 0x106470u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_106474:
    // 0x106474: 0x8e930000
    ctx->pc = 0x106474u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_106478:
    // 0x106478: 0x0
    ctx->pc = 0x106478u;
    // NOP
label_10647c:
    // 0x10647c: 0x0
    ctx->pc = 0x10647cu;
    // NOP
label_106480:
    // 0x106480: 0x0
    ctx->pc = 0x106480u;
    // NOP
label_106484:
    // 0x106484: 0x1240fffa
label_106488:
    if (ctx->pc == 0x106488u) {
        ctx->pc = 0x106488u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x10648Cu;
        goto label_10648c;
    }
    ctx->pc = 0x106484u;
    {
        const bool branch_taken_0x106484 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x106488u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x106484) {
            ctx->pc = 0x106470u;
            goto label_106470;
        }
    }
    ctx->pc = 0x10648Cu;
label_10648c:
    // 0x10648c: 0x30620200
    ctx->pc = 0x10648cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 512));
label_106490:
    // 0x106490: 0x1040000d
label_106494:
    if (ctx->pc == 0x106494u) {
        ctx->pc = 0x106494u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x106498u;
        goto label_106498;
    }
    ctx->pc = 0x106490u;
    {
        const bool branch_taken_0x106490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106494u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        if (branch_taken_0x106490) {
            ctx->pc = 0x1064C8u;
            goto label_1064c8;
        }
    }
    ctx->pc = 0x106498u;
label_106498:
    // 0x106498: 0x250102b
    ctx->pc = 0x106498u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_10649c:
    // 0x10649c: 0x8e240000
    ctx->pc = 0x10649cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1064a0:
    // 0x1064a0: 0x242800b
    ctx->pc = 0x1064a0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
label_1064a4:
    // 0x1064a4: 0x260282d
    ctx->pc = 0x1064a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1064a8:
    // 0x1064a8: 0xc041ed8
label_1064ac:
    if (ctx->pc == 0x1064ACu) {
        ctx->pc = 0x1064ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1064B0u;
        goto label_1064b0;
    }
    ctx->pc = 0x1064A8u;
    SET_GPR_U32(ctx, 31, 0x1064B0u);
    ctx->pc = 0x1064ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B60_0x107b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064B0u; }
    }
    if (ctx->pc != 0x1064B0u) { return; }
    ctx->pc = 0x1064B0u;
label_1064b0:
    // 0x1064b0: 0x8e230008
    ctx->pc = 0x1064b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1064b4:
    // 0x1064b4: 0x8e220000
    ctx->pc = 0x1064b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1064b8:
    // 0x1064b8: 0x701823
    ctx->pc = 0x1064b8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1064bc:
    // 0x1064bc: 0x501021
    ctx->pc = 0x1064bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1064c0:
    // 0x1064c0: 0x1000002a
label_1064c4:
    if (ctx->pc == 0x1064C4u) {
        ctx->pc = 0x1064C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1064C8u;
        goto label_1064c8;
    }
    ctx->pc = 0x1064C0u;
    {
        const bool branch_taken_0x1064c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1064C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1064c0) {
            ctx->pc = 0x10656Cu;
            goto label_10656c;
        }
    }
    ctx->pc = 0x1064C8u;
label_1064c8:
    // 0x1064c8: 0x8e240000
    ctx->pc = 0x1064c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1064cc:
    // 0x1064cc: 0x8e220010
    ctx->pc = 0x1064ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1064d0:
    // 0x1064d0: 0x44102b
    ctx->pc = 0x1064d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1064d4:
    // 0x1064d4: 0x50400010
label_1064d8:
    if (ctx->pc == 0x1064D8u) {
        ctx->pc = 0x1064D8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x1064DCu;
        goto label_1064dc;
    }
    ctx->pc = 0x1064D4u;
    {
        const bool branch_taken_0x1064d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1064d4) {
            ctx->pc = 0x1064D8u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->pc = 0x106518u;
            goto label_106518;
        }
    }
    ctx->pc = 0x1064DCu;
label_1064dc:
    // 0x1064dc: 0x212102b
    ctx->pc = 0x1064dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1064e0:
    // 0x1064e0: 0x5040000d
label_1064e4:
    if (ctx->pc == 0x1064E4u) {
        ctx->pc = 0x1064E4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x1064E8u;
        goto label_1064e8;
    }
    ctx->pc = 0x1064E0u;
    {
        const bool branch_taken_0x1064e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1064e0) {
            ctx->pc = 0x1064E4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->pc = 0x106518u;
            goto label_106518;
        }
    }
    ctx->pc = 0x1064E8u;
label_1064e8:
    // 0x1064e8: 0x260282d
    ctx->pc = 0x1064e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1064ec:
    // 0x1064ec: 0xc041ed8
label_1064f0:
    if (ctx->pc == 0x1064F0u) {
        ctx->pc = 0x1064F0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1064F4u;
        goto label_1064f4;
    }
    ctx->pc = 0x1064ECu;
    SET_GPR_U32(ctx, 31, 0x1064F4u);
    ctx->pc = 0x1064F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B60_0x107b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1064F4u; }
    }
    if (ctx->pc != 0x1064F4u) { return; }
    ctx->pc = 0x1064F4u;
label_1064f4:
    // 0x1064f4: 0x8e230000
    ctx->pc = 0x1064f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1064f8:
    // 0x1064f8: 0x220202d
    ctx->pc = 0x1064f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1064fc:
    // 0x1064fc: 0x701821
    ctx->pc = 0x1064fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_106500:
    // 0x106500: 0xc04142c
label_106504:
    if (ctx->pc == 0x106504u) {
        ctx->pc = 0x106504u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x106508u;
        goto label_106508;
    }
    ctx->pc = 0x106500u;
    SET_GPR_U32(ctx, 31, 0x106508u);
    ctx->pc = 0x106504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106508u; }
    }
    if (ctx->pc != 0x106508u) { return; }
    ctx->pc = 0x106508u;
label_106508:
    // 0x106508: 0x5040001b
label_10650c:
    if (ctx->pc == 0x10650Cu) {
        ctx->pc = 0x10650Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x106510u;
        goto label_106510;
    }
    ctx->pc = 0x106508u;
    {
        const bool branch_taken_0x106508 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x106508) {
            ctx->pc = 0x10650Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->pc = 0x106578u;
            goto label_106578;
        }
    }
    ctx->pc = 0x106510u;
label_106510:
    // 0x106510: 0x1000007b
label_106514:
    if (ctx->pc == 0x106514u) {
        ctx->pc = 0x106514u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x106518u;
        goto label_106518;
    }
    ctx->pc = 0x106510u;
    {
        const bool branch_taken_0x106510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106514u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x106510) {
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x106518u;
label_106518:
    // 0x106518: 0x250102b
    ctx->pc = 0x106518u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_10651c:
    // 0x10651c: 0x5440000c
label_106520:
    if (ctx->pc == 0x106520u) {
        ctx->pc = 0x106520u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106524u;
        goto label_106524;
    }
    ctx->pc = 0x10651Cu;
    {
        const bool branch_taken_0x10651c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10651c) {
            ctx->pc = 0x106520u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x106550u;
            goto label_106550;
        }
    }
    ctx->pc = 0x106524u;
label_106524:
    // 0x106524: 0x8e220024
    ctx->pc = 0x106524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_106528:
    // 0x106528: 0x200302d
    ctx->pc = 0x106528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10652c:
    // 0x10652c: 0x8e24001c
    ctx->pc = 0x10652cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_106530:
    // 0x106530: 0x40f809
label_106534:
    if (ctx->pc == 0x106534u) {
        ctx->pc = 0x106534u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106538u;
        goto label_106538;
    }
    ctx->pc = 0x106530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106538u);
        ctx->pc = 0x106534u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106358u: goto label_106358;
            case 0x10635Cu: goto label_10635c;
            case 0x106360u: goto label_106360;
            case 0x106364u: goto label_106364;
            case 0x106368u: goto label_106368;
            case 0x10636Cu: goto label_10636c;
            case 0x106370u: goto label_106370;
            case 0x106374u: goto label_106374;
            case 0x106378u: goto label_106378;
            case 0x10637Cu: goto label_10637c;
            case 0x106380u: goto label_106380;
            case 0x106384u: goto label_106384;
            case 0x106388u: goto label_106388;
            case 0x10638Cu: goto label_10638c;
            case 0x106390u: goto label_106390;
            case 0x106394u: goto label_106394;
            case 0x106398u: goto label_106398;
            case 0x10639Cu: goto label_10639c;
            case 0x1063A0u: goto label_1063a0;
            case 0x1063A4u: goto label_1063a4;
            case 0x1063A8u: goto label_1063a8;
            case 0x1063ACu: goto label_1063ac;
            case 0x1063B0u: goto label_1063b0;
            case 0x1063B4u: goto label_1063b4;
            case 0x1063B8u: goto label_1063b8;
            case 0x1063BCu: goto label_1063bc;
            case 0x1063C0u: goto label_1063c0;
            case 0x1063C4u: goto label_1063c4;
            case 0x1063C8u: goto label_1063c8;
            case 0x1063CCu: goto label_1063cc;
            case 0x1063D0u: goto label_1063d0;
            case 0x1063D4u: goto label_1063d4;
            case 0x1063D8u: goto label_1063d8;
            case 0x1063DCu: goto label_1063dc;
            case 0x1063E0u: goto label_1063e0;
            case 0x1063E4u: goto label_1063e4;
            case 0x1063E8u: goto label_1063e8;
            case 0x1063ECu: goto label_1063ec;
            case 0x1063F0u: goto label_1063f0;
            case 0x1063F4u: goto label_1063f4;
            case 0x1063F8u: goto label_1063f8;
            case 0x1063FCu: goto label_1063fc;
            case 0x106400u: goto label_106400;
            case 0x106404u: goto label_106404;
            case 0x106408u: goto label_106408;
            case 0x10640Cu: goto label_10640c;
            case 0x106410u: goto label_106410;
            case 0x106414u: goto label_106414;
            case 0x106418u: goto label_106418;
            case 0x10641Cu: goto label_10641c;
            case 0x106420u: goto label_106420;
            case 0x106424u: goto label_106424;
            case 0x106428u: goto label_106428;
            case 0x10642Cu: goto label_10642c;
            case 0x106430u: goto label_106430;
            case 0x106434u: goto label_106434;
            case 0x106438u: goto label_106438;
            case 0x10643Cu: goto label_10643c;
            case 0x106440u: goto label_106440;
            case 0x106444u: goto label_106444;
            case 0x106448u: goto label_106448;
            case 0x10644Cu: goto label_10644c;
            case 0x106450u: goto label_106450;
            case 0x106454u: goto label_106454;
            case 0x106458u: goto label_106458;
            case 0x10645Cu: goto label_10645c;
            case 0x106460u: goto label_106460;
            case 0x106464u: goto label_106464;
            case 0x106468u: goto label_106468;
            case 0x10646Cu: goto label_10646c;
            case 0x106470u: goto label_106470;
            case 0x106474u: goto label_106474;
            case 0x106478u: goto label_106478;
            case 0x10647Cu: goto label_10647c;
            case 0x106480u: goto label_106480;
            case 0x106484u: goto label_106484;
            case 0x106488u: goto label_106488;
            case 0x10648Cu: goto label_10648c;
            case 0x106490u: goto label_106490;
            case 0x106494u: goto label_106494;
            case 0x106498u: goto label_106498;
            case 0x10649Cu: goto label_10649c;
            case 0x1064A0u: goto label_1064a0;
            case 0x1064A4u: goto label_1064a4;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064ACu: goto label_1064ac;
            case 0x1064B0u: goto label_1064b0;
            case 0x1064B4u: goto label_1064b4;
            case 0x1064B8u: goto label_1064b8;
            case 0x1064BCu: goto label_1064bc;
            case 0x1064C0u: goto label_1064c0;
            case 0x1064C4u: goto label_1064c4;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064CCu: goto label_1064cc;
            case 0x1064D0u: goto label_1064d0;
            case 0x1064D4u: goto label_1064d4;
            case 0x1064D8u: goto label_1064d8;
            case 0x1064DCu: goto label_1064dc;
            case 0x1064E0u: goto label_1064e0;
            case 0x1064E4u: goto label_1064e4;
            case 0x1064E8u: goto label_1064e8;
            case 0x1064ECu: goto label_1064ec;
            case 0x1064F0u: goto label_1064f0;
            case 0x1064F4u: goto label_1064f4;
            case 0x1064F8u: goto label_1064f8;
            case 0x1064FCu: goto label_1064fc;
            case 0x106500u: goto label_106500;
            case 0x106504u: goto label_106504;
            case 0x106508u: goto label_106508;
            case 0x10650Cu: goto label_10650c;
            case 0x106510u: goto label_106510;
            case 0x106514u: goto label_106514;
            case 0x106518u: goto label_106518;
            case 0x10651Cu: goto label_10651c;
            case 0x106520u: goto label_106520;
            case 0x106524u: goto label_106524;
            case 0x106528u: goto label_106528;
            case 0x10652Cu: goto label_10652c;
            case 0x106530u: goto label_106530;
            case 0x106534u: goto label_106534;
            case 0x106538u: goto label_106538;
            case 0x10653Cu: goto label_10653c;
            case 0x106540u: goto label_106540;
            case 0x106544u: goto label_106544;
            case 0x106548u: goto label_106548;
            case 0x10654Cu: goto label_10654c;
            case 0x106550u: goto label_106550;
            case 0x106554u: goto label_106554;
            case 0x106558u: goto label_106558;
            case 0x10655Cu: goto label_10655c;
            case 0x106560u: goto label_106560;
            case 0x106564u: goto label_106564;
            case 0x106568u: goto label_106568;
            case 0x10656Cu: goto label_10656c;
            case 0x106570u: goto label_106570;
            case 0x106574u: goto label_106574;
            case 0x106578u: goto label_106578;
            case 0x10657Cu: goto label_10657c;
            case 0x106580u: goto label_106580;
            case 0x106584u: goto label_106584;
            case 0x106588u: goto label_106588;
            case 0x10658Cu: goto label_10658c;
            case 0x106590u: goto label_106590;
            case 0x106594u: goto label_106594;
            case 0x106598u: goto label_106598;
            case 0x10659Cu: goto label_10659c;
            case 0x1065A0u: goto label_1065a0;
            case 0x1065A4u: goto label_1065a4;
            case 0x1065A8u: goto label_1065a8;
            case 0x1065ACu: goto label_1065ac;
            case 0x1065B0u: goto label_1065b0;
            case 0x1065B4u: goto label_1065b4;
            case 0x1065B8u: goto label_1065b8;
            case 0x1065BCu: goto label_1065bc;
            case 0x1065C0u: goto label_1065c0;
            case 0x1065C4u: goto label_1065c4;
            case 0x1065C8u: goto label_1065c8;
            case 0x1065CCu: goto label_1065cc;
            case 0x1065D0u: goto label_1065d0;
            case 0x1065D4u: goto label_1065d4;
            case 0x1065D8u: goto label_1065d8;
            case 0x1065DCu: goto label_1065dc;
            case 0x1065E0u: goto label_1065e0;
            case 0x1065E4u: goto label_1065e4;
            case 0x1065E8u: goto label_1065e8;
            case 0x1065ECu: goto label_1065ec;
            case 0x1065F0u: goto label_1065f0;
            case 0x1065F4u: goto label_1065f4;
            case 0x1065F8u: goto label_1065f8;
            case 0x1065FCu: goto label_1065fc;
            case 0x106600u: goto label_106600;
            case 0x106604u: goto label_106604;
            case 0x106608u: goto label_106608;
            case 0x10660Cu: goto label_10660c;
            case 0x106610u: goto label_106610;
            case 0x106614u: goto label_106614;
            case 0x106618u: goto label_106618;
            case 0x10661Cu: goto label_10661c;
            case 0x106620u: goto label_106620;
            case 0x106624u: goto label_106624;
            case 0x106628u: goto label_106628;
            case 0x10662Cu: goto label_10662c;
            case 0x106630u: goto label_106630;
            case 0x106634u: goto label_106634;
            case 0x106638u: goto label_106638;
            case 0x10663Cu: goto label_10663c;
            case 0x106640u: goto label_106640;
            case 0x106644u: goto label_106644;
            case 0x106648u: goto label_106648;
            case 0x10664Cu: goto label_10664c;
            case 0x106650u: goto label_106650;
            case 0x106654u: goto label_106654;
            case 0x106658u: goto label_106658;
            case 0x10665Cu: goto label_10665c;
            case 0x106660u: goto label_106660;
            case 0x106664u: goto label_106664;
            case 0x106668u: goto label_106668;
            case 0x10666Cu: goto label_10666c;
            case 0x106670u: goto label_106670;
            case 0x106674u: goto label_106674;
            case 0x106678u: goto label_106678;
            case 0x10667Cu: goto label_10667c;
            case 0x106680u: goto label_106680;
            case 0x106684u: goto label_106684;
            case 0x106688u: goto label_106688;
            case 0x10668Cu: goto label_10668c;
            case 0x106690u: goto label_106690;
            case 0x106694u: goto label_106694;
            case 0x106698u: goto label_106698;
            case 0x10669Cu: goto label_10669c;
            case 0x1066A0u: goto label_1066a0;
            case 0x1066A4u: goto label_1066a4;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066ACu: goto label_1066ac;
            case 0x1066B0u: goto label_1066b0;
            case 0x1066B4u: goto label_1066b4;
            case 0x1066B8u: goto label_1066b8;
            case 0x1066BCu: goto label_1066bc;
            case 0x1066C0u: goto label_1066c0;
            case 0x1066C4u: goto label_1066c4;
            case 0x1066C8u: goto label_1066c8;
            case 0x1066CCu: goto label_1066cc;
            case 0x1066D0u: goto label_1066d0;
            case 0x1066D4u: goto label_1066d4;
            case 0x1066D8u: goto label_1066d8;
            case 0x1066DCu: goto label_1066dc;
            case 0x1066E0u: goto label_1066e0;
            case 0x1066E4u: goto label_1066e4;
            case 0x1066E8u: goto label_1066e8;
            case 0x1066ECu: goto label_1066ec;
            case 0x1066F0u: goto label_1066f0;
            case 0x1066F4u: goto label_1066f4;
            case 0x1066F8u: goto label_1066f8;
            case 0x1066FCu: goto label_1066fc;
            case 0x106700u: goto label_106700;
            case 0x106704u: goto label_106704;
            case 0x106708u: goto label_106708;
            case 0x10670Cu: goto label_10670c;
            case 0x106710u: goto label_106710;
            case 0x106714u: goto label_106714;
            case 0x106718u: goto label_106718;
            case 0x10671Cu: goto label_10671c;
            case 0x106720u: goto label_106720;
            case 0x106724u: goto label_106724;
            case 0x106728u: goto label_106728;
            case 0x10672Cu: goto label_10672c;
            case 0x106730u: goto label_106730;
            case 0x106734u: goto label_106734;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106538u; }
            if (ctx->pc != 0x106538u) { return; }
        }
    }
    ctx->pc = 0x106538u;
label_106538:
    // 0x106538: 0x40802d
    ctx->pc = 0x106538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10653c:
    // 0x10653c: 0x5e00000e
label_106540:
    if (ctx->pc == 0x106540u) {
        ctx->pc = 0x106540u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x106544u;
        goto label_106544;
    }
    ctx->pc = 0x10653Cu;
    {
        const bool branch_taken_0x10653c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x10653c) {
            ctx->pc = 0x106540u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->pc = 0x106578u;
            goto label_106578;
        }
    }
    ctx->pc = 0x106544u;
label_106544:
    // 0x106544: 0x1000006e
label_106548:
    if (ctx->pc == 0x106548u) {
        ctx->pc = 0x106548u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x10654Cu;
        goto label_10654c;
    }
    ctx->pc = 0x106544u;
    {
        const bool branch_taken_0x106544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106548u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x106544) {
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x10654Cu;
label_10654c:
    // 0x10654c: 0x0
    ctx->pc = 0x10654cu;
    // NOP
label_106550:
    // 0x106550: 0x260282d
    ctx->pc = 0x106550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106554:
    // 0x106554: 0xc041ed8
label_106558:
    if (ctx->pc == 0x106558u) {
        ctx->pc = 0x106558u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10655Cu;
        goto label_10655c;
    }
    ctx->pc = 0x106554u;
    SET_GPR_U32(ctx, 31, 0x10655Cu);
    ctx->pc = 0x106558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B60_0x107b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10655Cu; }
    }
    if (ctx->pc != 0x10655Cu) { return; }
    ctx->pc = 0x10655Cu;
label_10655c:
    // 0x10655c: 0x8e230008
    ctx->pc = 0x10655cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_106560:
    // 0x106560: 0x8e220000
    ctx->pc = 0x106560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106564:
    // 0x106564: 0x701823
    ctx->pc = 0x106564u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_106568:
    // 0x106568: 0x501021
    ctx->pc = 0x106568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_10656c:
    // 0x10656c: 0xae230008
    ctx->pc = 0x10656cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_106570:
    // 0x106570: 0xae220000
    ctx->pc = 0x106570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_106574:
    // 0x106574: 0x8ec20008
    ctx->pc = 0x106574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_106578:
    // 0x106578: 0x2709821
    ctx->pc = 0x106578u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_10657c:
    // 0x10657c: 0x2509023
    ctx->pc = 0x10657cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_106580:
    // 0x106580: 0x501023
    ctx->pc = 0x106580u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_106584:
    // 0x106584: 0x1440ffb6
label_106588:
    if (ctx->pc == 0x106588u) {
        ctx->pc = 0x106588u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x10658Cu;
        goto label_10658c;
    }
    ctx->pc = 0x106584u;
    {
        const bool branch_taken_0x106584 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x106588u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x106584) {
            ctx->pc = 0x106460u;
            goto label_106460;
        }
    }
    ctx->pc = 0x10658Cu;
label_10658c:
    // 0x10658c: 0x1000005f
label_106590:
    if (ctx->pc == 0x106590u) {
        ctx->pc = 0x106590u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106594u;
        goto label_106594;
    }
    ctx->pc = 0x10658Cu;
    {
        const bool branch_taken_0x10658c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106590u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10658c) {
            ctx->pc = 0x10670Cu;
            goto label_10670c;
        }
    }
    ctx->pc = 0x106594u;
label_106594:
    // 0x106594: 0x0
    ctx->pc = 0x106594u;
    // NOP
label_106598:
    // 0x106598: 0x1640000a
label_10659c:
    if (ctx->pc == 0x10659Cu) {
        ctx->pc = 0x1065A0u;
        goto label_1065a0;
    }
    ctx->pc = 0x106598u;
    {
        const bool branch_taken_0x106598 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x106598) {
            ctx->pc = 0x1065C4u;
            goto label_1065c4;
        }
    }
    ctx->pc = 0x1065A0u;
label_1065a0:
    // 0x1065a0: 0xb82d
    ctx->pc = 0x1065a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1065a4:
    // 0x1065a4: 0x0
    ctx->pc = 0x1065a4u;
    // NOP
label_1065a8:
    // 0x1065a8: 0x8e920004
    ctx->pc = 0x1065a8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1065ac:
    // 0x1065ac: 0x8e930000
    ctx->pc = 0x1065acu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1065b0:
    // 0x1065b0: 0x0
    ctx->pc = 0x1065b0u;
    // NOP
label_1065b4:
    // 0x1065b4: 0x0
    ctx->pc = 0x1065b4u;
    // NOP
label_1065b8:
    // 0x1065b8: 0x0
    ctx->pc = 0x1065b8u;
    // NOP
label_1065bc:
    // 0x1065bc: 0x1240fffa
label_1065c0:
    if (ctx->pc == 0x1065C0u) {
        ctx->pc = 0x1065C0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x1065C4u;
        goto label_1065c4;
    }
    ctx->pc = 0x1065BCu;
    {
        const bool branch_taken_0x1065bc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1065C0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x1065bc) {
            ctx->pc = 0x1065A8u;
            goto label_1065a8;
        }
    }
    ctx->pc = 0x1065C4u;
label_1065c4:
    // 0x1065c4: 0x56e0000d
label_1065c8:
    if (ctx->pc == 0x1065C8u) {
        ctx->pc = 0x1065C8u;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1065CCu;
        goto label_1065cc;
    }
    ctx->pc = 0x1065C4u;
    {
        const bool branch_taken_0x1065c4 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 0));
        if (branch_taken_0x1065c4) {
            ctx->pc = 0x1065C8u;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x1065FCu;
            goto label_1065fc;
        }
    }
    ctx->pc = 0x1065CCu;
label_1065cc:
    // 0x1065cc: 0x260202d
    ctx->pc = 0x1065ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1065d0:
    // 0x1065d0: 0x2405000a
    ctx->pc = 0x1065d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
label_1065d4:
    // 0x1065d4: 0xc041e4e
label_1065d8:
    if (ctx->pc == 0x1065D8u) {
        ctx->pc = 0x1065D8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1065DCu;
        goto label_1065dc;
    }
    ctx->pc = 0x1065D4u;
    SET_GPR_U32(ctx, 31, 0x1065DCu);
    ctx->pc = 0x1065D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107938_0x107938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065DCu; }
    }
    if (ctx->pc != 0x1065DCu) { return; }
    ctx->pc = 0x1065DCu;
label_1065dc:
    // 0x1065dc: 0x10400004
label_1065e0:
    if (ctx->pc == 0x1065E0u) {
        ctx->pc = 0x1065E0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1065E4u;
        goto label_1065e4;
    }
    ctx->pc = 0x1065DCu;
    {
        const bool branch_taken_0x1065dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1065E0u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x1065dc) {
            ctx->pc = 0x1065F0u;
            goto label_1065f0;
        }
    }
    ctx->pc = 0x1065E4u;
label_1065e4:
    // 0x1065e4: 0x10000003
label_1065e8:
    if (ctx->pc == 0x1065E8u) {
        ctx->pc = 0x1065E8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1065ECu;
        goto label_1065ec;
    }
    ctx->pc = 0x1065E4u;
    {
        const bool branch_taken_0x1065e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1065E8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1065e4) {
            ctx->pc = 0x1065F4u;
            goto label_1065f4;
        }
    }
    ctx->pc = 0x1065ECu;
label_1065ec:
    // 0x1065ec: 0x0
    ctx->pc = 0x1065ecu;
    // NOP
label_1065f0:
    // 0x1065f0: 0x26550001
    ctx->pc = 0x1065f0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 1));
label_1065f4:
    // 0x1065f4: 0x24170001
    ctx->pc = 0x1065f4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_1065f8:
    // 0x1065f8: 0x8e280000
    ctx->pc = 0x1065f8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1065fc:
    // 0x1065fc: 0x255102b
    ctx->pc = 0x1065fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_106600:
    // 0x106600: 0x8e230010
    ctx->pc = 0x106600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_106604:
    // 0x106604: 0x240282d
    ctx->pc = 0x106604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106608:
    // 0x106608: 0x8e240008
    ctx->pc = 0x106608u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10660c:
    // 0x10660c: 0x2a2280a
    ctx->pc = 0x10660cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 21));
label_106610:
    // 0x106610: 0x8e270014
    ctx->pc = 0x106610u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_106614:
    // 0x106614: 0x68182b
    ctx->pc = 0x106614u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_106618:
    // 0x106618: 0x10600011
label_10661c:
    if (ctx->pc == 0x10661Cu) {
        ctx->pc = 0x10661Cu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->pc = 0x106620u;
        goto label_106620;
    }
    ctx->pc = 0x106618u;
    {
        const bool branch_taken_0x106618 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10661Cu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        if (branch_taken_0x106618) {
            ctx->pc = 0x106660u;
            goto label_106660;
        }
    }
    ctx->pc = 0x106620u;
label_106620:
    // 0x106620: 0x205102a
    ctx->pc = 0x106620u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 5)));
label_106624:
    // 0x106624: 0x5040000f
label_106628:
    if (ctx->pc == 0x106628u) {
        ctx->pc = 0x106628u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10662Cu;
        goto label_10662c;
    }
    ctx->pc = 0x106624u;
    {
        const bool branch_taken_0x106624 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x106624) {
            ctx->pc = 0x106628u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x106664u;
            goto label_106664;
        }
    }
    ctx->pc = 0x10662Cu;
label_10662c:
    // 0x10662c: 0x100202d
    ctx->pc = 0x10662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_106630:
    // 0x106630: 0x260282d
    ctx->pc = 0x106630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_106634:
    // 0x106634: 0xc041ed8
label_106638:
    if (ctx->pc == 0x106638u) {
        ctx->pc = 0x106638u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10663Cu;
        goto label_10663c;
    }
    ctx->pc = 0x106634u;
    SET_GPR_U32(ctx, 31, 0x10663Cu);
    ctx->pc = 0x106638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B60_0x107b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10663Cu; }
    }
    if (ctx->pc != 0x10663Cu) { return; }
    ctx->pc = 0x10663Cu;
label_10663c:
    // 0x10663c: 0x8e230000
    ctx->pc = 0x10663cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_106640:
    // 0x106640: 0x220202d
    ctx->pc = 0x106640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106644:
    // 0x106644: 0x701821
    ctx->pc = 0x106644u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_106648:
    // 0x106648: 0xc04142c
label_10664c:
    if (ctx->pc == 0x10664Cu) {
        ctx->pc = 0x10664Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x106650u;
        goto label_106650;
    }
    ctx->pc = 0x106648u;
    SET_GPR_U32(ctx, 31, 0x106650u);
    ctx->pc = 0x10664Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106650u; }
    }
    if (ctx->pc != 0x106650u) { return; }
    ctx->pc = 0x106650u;
label_106650:
    // 0x106650: 0x1040001c
label_106654:
    if (ctx->pc == 0x106654u) {
        ctx->pc = 0x106654u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x106658u;
        goto label_106658;
    }
    ctx->pc = 0x106650u;
    {
        const bool branch_taken_0x106650 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106654u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        if (branch_taken_0x106650) {
            ctx->pc = 0x1066C4u;
            goto label_1066c4;
        }
    }
    ctx->pc = 0x106658u;
label_106658:
    // 0x106658: 0x10000029
label_10665c:
    if (ctx->pc == 0x10665Cu) {
        ctx->pc = 0x10665Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x106660u;
        goto label_106660;
    }
    ctx->pc = 0x106658u;
    {
        const bool branch_taken_0x106658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10665Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x106658) {
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x106660u;
label_106660:
    // 0x106660: 0xe0802d
    ctx->pc = 0x106660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_106664:
    // 0x106664: 0xb0102a
    ctx->pc = 0x106664u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 16)));
label_106668:
    // 0x106668: 0x5440000b
label_10666c:
    if (ctx->pc == 0x10666Cu) {
        ctx->pc = 0x10666Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106670u;
        goto label_106670;
    }
    ctx->pc = 0x106668u;
    {
        const bool branch_taken_0x106668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x106668) {
            ctx->pc = 0x10666Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x106698u;
            goto label_106698;
        }
    }
    ctx->pc = 0x106670u;
label_106670:
    // 0x106670: 0x8e220024
    ctx->pc = 0x106670u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_106674:
    // 0x106674: 0x200302d
    ctx->pc = 0x106674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106678:
    // 0x106678: 0x8e24001c
    ctx->pc = 0x106678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10667c:
    // 0x10667c: 0x40f809
label_106680:
    if (ctx->pc == 0x106680u) {
        ctx->pc = 0x106680u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106684u;
        goto label_106684;
    }
    ctx->pc = 0x10667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x106684u);
        ctx->pc = 0x106680u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106358u: goto label_106358;
            case 0x10635Cu: goto label_10635c;
            case 0x106360u: goto label_106360;
            case 0x106364u: goto label_106364;
            case 0x106368u: goto label_106368;
            case 0x10636Cu: goto label_10636c;
            case 0x106370u: goto label_106370;
            case 0x106374u: goto label_106374;
            case 0x106378u: goto label_106378;
            case 0x10637Cu: goto label_10637c;
            case 0x106380u: goto label_106380;
            case 0x106384u: goto label_106384;
            case 0x106388u: goto label_106388;
            case 0x10638Cu: goto label_10638c;
            case 0x106390u: goto label_106390;
            case 0x106394u: goto label_106394;
            case 0x106398u: goto label_106398;
            case 0x10639Cu: goto label_10639c;
            case 0x1063A0u: goto label_1063a0;
            case 0x1063A4u: goto label_1063a4;
            case 0x1063A8u: goto label_1063a8;
            case 0x1063ACu: goto label_1063ac;
            case 0x1063B0u: goto label_1063b0;
            case 0x1063B4u: goto label_1063b4;
            case 0x1063B8u: goto label_1063b8;
            case 0x1063BCu: goto label_1063bc;
            case 0x1063C0u: goto label_1063c0;
            case 0x1063C4u: goto label_1063c4;
            case 0x1063C8u: goto label_1063c8;
            case 0x1063CCu: goto label_1063cc;
            case 0x1063D0u: goto label_1063d0;
            case 0x1063D4u: goto label_1063d4;
            case 0x1063D8u: goto label_1063d8;
            case 0x1063DCu: goto label_1063dc;
            case 0x1063E0u: goto label_1063e0;
            case 0x1063E4u: goto label_1063e4;
            case 0x1063E8u: goto label_1063e8;
            case 0x1063ECu: goto label_1063ec;
            case 0x1063F0u: goto label_1063f0;
            case 0x1063F4u: goto label_1063f4;
            case 0x1063F8u: goto label_1063f8;
            case 0x1063FCu: goto label_1063fc;
            case 0x106400u: goto label_106400;
            case 0x106404u: goto label_106404;
            case 0x106408u: goto label_106408;
            case 0x10640Cu: goto label_10640c;
            case 0x106410u: goto label_106410;
            case 0x106414u: goto label_106414;
            case 0x106418u: goto label_106418;
            case 0x10641Cu: goto label_10641c;
            case 0x106420u: goto label_106420;
            case 0x106424u: goto label_106424;
            case 0x106428u: goto label_106428;
            case 0x10642Cu: goto label_10642c;
            case 0x106430u: goto label_106430;
            case 0x106434u: goto label_106434;
            case 0x106438u: goto label_106438;
            case 0x10643Cu: goto label_10643c;
            case 0x106440u: goto label_106440;
            case 0x106444u: goto label_106444;
            case 0x106448u: goto label_106448;
            case 0x10644Cu: goto label_10644c;
            case 0x106450u: goto label_106450;
            case 0x106454u: goto label_106454;
            case 0x106458u: goto label_106458;
            case 0x10645Cu: goto label_10645c;
            case 0x106460u: goto label_106460;
            case 0x106464u: goto label_106464;
            case 0x106468u: goto label_106468;
            case 0x10646Cu: goto label_10646c;
            case 0x106470u: goto label_106470;
            case 0x106474u: goto label_106474;
            case 0x106478u: goto label_106478;
            case 0x10647Cu: goto label_10647c;
            case 0x106480u: goto label_106480;
            case 0x106484u: goto label_106484;
            case 0x106488u: goto label_106488;
            case 0x10648Cu: goto label_10648c;
            case 0x106490u: goto label_106490;
            case 0x106494u: goto label_106494;
            case 0x106498u: goto label_106498;
            case 0x10649Cu: goto label_10649c;
            case 0x1064A0u: goto label_1064a0;
            case 0x1064A4u: goto label_1064a4;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064ACu: goto label_1064ac;
            case 0x1064B0u: goto label_1064b0;
            case 0x1064B4u: goto label_1064b4;
            case 0x1064B8u: goto label_1064b8;
            case 0x1064BCu: goto label_1064bc;
            case 0x1064C0u: goto label_1064c0;
            case 0x1064C4u: goto label_1064c4;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064CCu: goto label_1064cc;
            case 0x1064D0u: goto label_1064d0;
            case 0x1064D4u: goto label_1064d4;
            case 0x1064D8u: goto label_1064d8;
            case 0x1064DCu: goto label_1064dc;
            case 0x1064E0u: goto label_1064e0;
            case 0x1064E4u: goto label_1064e4;
            case 0x1064E8u: goto label_1064e8;
            case 0x1064ECu: goto label_1064ec;
            case 0x1064F0u: goto label_1064f0;
            case 0x1064F4u: goto label_1064f4;
            case 0x1064F8u: goto label_1064f8;
            case 0x1064FCu: goto label_1064fc;
            case 0x106500u: goto label_106500;
            case 0x106504u: goto label_106504;
            case 0x106508u: goto label_106508;
            case 0x10650Cu: goto label_10650c;
            case 0x106510u: goto label_106510;
            case 0x106514u: goto label_106514;
            case 0x106518u: goto label_106518;
            case 0x10651Cu: goto label_10651c;
            case 0x106520u: goto label_106520;
            case 0x106524u: goto label_106524;
            case 0x106528u: goto label_106528;
            case 0x10652Cu: goto label_10652c;
            case 0x106530u: goto label_106530;
            case 0x106534u: goto label_106534;
            case 0x106538u: goto label_106538;
            case 0x10653Cu: goto label_10653c;
            case 0x106540u: goto label_106540;
            case 0x106544u: goto label_106544;
            case 0x106548u: goto label_106548;
            case 0x10654Cu: goto label_10654c;
            case 0x106550u: goto label_106550;
            case 0x106554u: goto label_106554;
            case 0x106558u: goto label_106558;
            case 0x10655Cu: goto label_10655c;
            case 0x106560u: goto label_106560;
            case 0x106564u: goto label_106564;
            case 0x106568u: goto label_106568;
            case 0x10656Cu: goto label_10656c;
            case 0x106570u: goto label_106570;
            case 0x106574u: goto label_106574;
            case 0x106578u: goto label_106578;
            case 0x10657Cu: goto label_10657c;
            case 0x106580u: goto label_106580;
            case 0x106584u: goto label_106584;
            case 0x106588u: goto label_106588;
            case 0x10658Cu: goto label_10658c;
            case 0x106590u: goto label_106590;
            case 0x106594u: goto label_106594;
            case 0x106598u: goto label_106598;
            case 0x10659Cu: goto label_10659c;
            case 0x1065A0u: goto label_1065a0;
            case 0x1065A4u: goto label_1065a4;
            case 0x1065A8u: goto label_1065a8;
            case 0x1065ACu: goto label_1065ac;
            case 0x1065B0u: goto label_1065b0;
            case 0x1065B4u: goto label_1065b4;
            case 0x1065B8u: goto label_1065b8;
            case 0x1065BCu: goto label_1065bc;
            case 0x1065C0u: goto label_1065c0;
            case 0x1065C4u: goto label_1065c4;
            case 0x1065C8u: goto label_1065c8;
            case 0x1065CCu: goto label_1065cc;
            case 0x1065D0u: goto label_1065d0;
            case 0x1065D4u: goto label_1065d4;
            case 0x1065D8u: goto label_1065d8;
            case 0x1065DCu: goto label_1065dc;
            case 0x1065E0u: goto label_1065e0;
            case 0x1065E4u: goto label_1065e4;
            case 0x1065E8u: goto label_1065e8;
            case 0x1065ECu: goto label_1065ec;
            case 0x1065F0u: goto label_1065f0;
            case 0x1065F4u: goto label_1065f4;
            case 0x1065F8u: goto label_1065f8;
            case 0x1065FCu: goto label_1065fc;
            case 0x106600u: goto label_106600;
            case 0x106604u: goto label_106604;
            case 0x106608u: goto label_106608;
            case 0x10660Cu: goto label_10660c;
            case 0x106610u: goto label_106610;
            case 0x106614u: goto label_106614;
            case 0x106618u: goto label_106618;
            case 0x10661Cu: goto label_10661c;
            case 0x106620u: goto label_106620;
            case 0x106624u: goto label_106624;
            case 0x106628u: goto label_106628;
            case 0x10662Cu: goto label_10662c;
            case 0x106630u: goto label_106630;
            case 0x106634u: goto label_106634;
            case 0x106638u: goto label_106638;
            case 0x10663Cu: goto label_10663c;
            case 0x106640u: goto label_106640;
            case 0x106644u: goto label_106644;
            case 0x106648u: goto label_106648;
            case 0x10664Cu: goto label_10664c;
            case 0x106650u: goto label_106650;
            case 0x106654u: goto label_106654;
            case 0x106658u: goto label_106658;
            case 0x10665Cu: goto label_10665c;
            case 0x106660u: goto label_106660;
            case 0x106664u: goto label_106664;
            case 0x106668u: goto label_106668;
            case 0x10666Cu: goto label_10666c;
            case 0x106670u: goto label_106670;
            case 0x106674u: goto label_106674;
            case 0x106678u: goto label_106678;
            case 0x10667Cu: goto label_10667c;
            case 0x106680u: goto label_106680;
            case 0x106684u: goto label_106684;
            case 0x106688u: goto label_106688;
            case 0x10668Cu: goto label_10668c;
            case 0x106690u: goto label_106690;
            case 0x106694u: goto label_106694;
            case 0x106698u: goto label_106698;
            case 0x10669Cu: goto label_10669c;
            case 0x1066A0u: goto label_1066a0;
            case 0x1066A4u: goto label_1066a4;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066ACu: goto label_1066ac;
            case 0x1066B0u: goto label_1066b0;
            case 0x1066B4u: goto label_1066b4;
            case 0x1066B8u: goto label_1066b8;
            case 0x1066BCu: goto label_1066bc;
            case 0x1066C0u: goto label_1066c0;
            case 0x1066C4u: goto label_1066c4;
            case 0x1066C8u: goto label_1066c8;
            case 0x1066CCu: goto label_1066cc;
            case 0x1066D0u: goto label_1066d0;
            case 0x1066D4u: goto label_1066d4;
            case 0x1066D8u: goto label_1066d8;
            case 0x1066DCu: goto label_1066dc;
            case 0x1066E0u: goto label_1066e0;
            case 0x1066E4u: goto label_1066e4;
            case 0x1066E8u: goto label_1066e8;
            case 0x1066ECu: goto label_1066ec;
            case 0x1066F0u: goto label_1066f0;
            case 0x1066F4u: goto label_1066f4;
            case 0x1066F8u: goto label_1066f8;
            case 0x1066FCu: goto label_1066fc;
            case 0x106700u: goto label_106700;
            case 0x106704u: goto label_106704;
            case 0x106708u: goto label_106708;
            case 0x10670Cu: goto label_10670c;
            case 0x106710u: goto label_106710;
            case 0x106714u: goto label_106714;
            case 0x106718u: goto label_106718;
            case 0x10671Cu: goto label_10671c;
            case 0x106720u: goto label_106720;
            case 0x106724u: goto label_106724;
            case 0x106728u: goto label_106728;
            case 0x10672Cu: goto label_10672c;
            case 0x106730u: goto label_106730;
            case 0x106734u: goto label_106734;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x106684u; }
            if (ctx->pc != 0x106684u) { return; }
        }
    }
    ctx->pc = 0x106684u;
label_106684:
    // 0x106684: 0x40802d
    ctx->pc = 0x106684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106688:
    // 0x106688: 0x1e00000e
label_10668c:
    if (ctx->pc == 0x10668Cu) {
        ctx->pc = 0x10668Cu;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x106690u;
        goto label_106690;
    }
    ctx->pc = 0x106688u;
    {
        const bool branch_taken_0x106688 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x10668Cu;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        if (branch_taken_0x106688) {
            ctx->pc = 0x1066C4u;
            goto label_1066c4;
        }
    }
    ctx->pc = 0x106690u;
label_106690:
    // 0x106690: 0x1000001b
label_106694:
    if (ctx->pc == 0x106694u) {
        ctx->pc = 0x106694u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x106698u;
        goto label_106698;
    }
    ctx->pc = 0x106690u;
    {
        const bool branch_taken_0x106690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106694u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x106690) {
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x106698u;
label_106698:
    // 0x106698: 0x260282d
    ctx->pc = 0x106698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10669c:
    // 0x10669c: 0x100202d
    ctx->pc = 0x10669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1066a0:
    // 0x1066a0: 0xc041ed8
label_1066a4:
    if (ctx->pc == 0x1066A4u) {
        ctx->pc = 0x1066A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1066A8u;
        goto label_1066a8;
    }
    ctx->pc = 0x1066A0u;
    SET_GPR_U32(ctx, 31, 0x1066A8u);
    ctx->pc = 0x1066A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B60_0x107b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066A8u; }
    }
    if (ctx->pc != 0x1066A8u) { return; }
    ctx->pc = 0x1066A8u;
label_1066a8:
    // 0x1066a8: 0x8e230008
    ctx->pc = 0x1066a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1066ac:
    // 0x1066ac: 0x8e220000
    ctx->pc = 0x1066acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1066b0:
    // 0x1066b0: 0x701823
    ctx->pc = 0x1066b0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1066b4:
    // 0x1066b4: 0x501021
    ctx->pc = 0x1066b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1066b8:
    // 0x1066b8: 0xae230008
    ctx->pc = 0x1066b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1066bc:
    // 0x1066bc: 0xae220000
    ctx->pc = 0x1066bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1066c0:
    // 0x1066c0: 0x2b0a823
    ctx->pc = 0x1066c0u;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1066c4:
    // 0x1066c4: 0x56a00007
label_1066c8:
    if (ctx->pc == 0x1066C8u) {
        ctx->pc = 0x1066C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->pc = 0x1066CCu;
        goto label_1066cc;
    }
    ctx->pc = 0x1066C4u;
    {
        const bool branch_taken_0x1066c4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        if (branch_taken_0x1066c4) {
            ctx->pc = 0x1066C8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->pc = 0x1066E4u;
            goto label_1066e4;
        }
    }
    ctx->pc = 0x1066CCu;
label_1066cc:
    // 0x1066cc: 0xc04142c
label_1066d0:
    if (ctx->pc == 0x1066D0u) {
        ctx->pc = 0x1066D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1066D4u;
        goto label_1066d4;
    }
    ctx->pc = 0x1066CCu;
    SET_GPR_U32(ctx, 31, 0x1066D4u);
    ctx->pc = 0x1066D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1066D4u; }
    }
    if (ctx->pc != 0x1066D4u) { return; }
    ctx->pc = 0x1066D4u;
label_1066d4:
    // 0x1066d4: 0x5440000a
label_1066d8:
    if (ctx->pc == 0x1066D8u) {
        ctx->pc = 0x1066D8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x1066DCu;
        goto label_1066dc;
    }
    ctx->pc = 0x1066D4u;
    {
        const bool branch_taken_0x1066d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1066d4) {
            ctx->pc = 0x1066D8u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x106700u;
            goto label_106700;
        }
    }
    ctx->pc = 0x1066DCu;
label_1066dc:
    // 0x1066dc: 0xb82d
    ctx->pc = 0x1066dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1066e0:
    // 0x1066e0: 0x8ec20008
    ctx->pc = 0x1066e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1066e4:
    // 0x1066e4: 0x2709821
    ctx->pc = 0x1066e4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1066e8:
    // 0x1066e8: 0x2509023
    ctx->pc = 0x1066e8u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1066ec:
    // 0x1066ec: 0x501023
    ctx->pc = 0x1066ecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1066f0:
    // 0x1066f0: 0x1440ffa9
label_1066f4:
    if (ctx->pc == 0x1066F4u) {
        ctx->pc = 0x1066F4u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1066F8u;
        goto label_1066f8;
    }
    ctx->pc = 0x1066F0u;
    {
        const bool branch_taken_0x1066f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1066F4u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x1066f0) {
            ctx->pc = 0x106598u;
            goto label_106598;
        }
    }
    ctx->pc = 0x1066F8u;
label_1066f8:
    // 0x1066f8: 0x10000004
label_1066fc:
    if (ctx->pc == 0x1066FCu) {
        ctx->pc = 0x1066FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106700u;
        goto label_106700;
    }
    ctx->pc = 0x1066F8u;
    {
        const bool branch_taken_0x1066f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1066FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1066f8) {
            ctx->pc = 0x10670Cu;
            goto label_10670c;
        }
    }
    ctx->pc = 0x106700u;
label_106700:
    // 0x106700: 0x2402ffff
    ctx->pc = 0x106700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_106704:
    // 0x106704: 0x34630040
    ctx->pc = 0x106704u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64));
label_106708:
    // 0x106708: 0xa623000c
    ctx->pc = 0x106708u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_10670c:
    // 0x10670c: 0xdfb00000
    ctx->pc = 0x10670cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106710:
    // 0x106710: 0xdfb10008
    ctx->pc = 0x106710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_106714:
    // 0x106714: 0xdfb20010
    ctx->pc = 0x106714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_106718:
    // 0x106718: 0xdfb30018
    ctx->pc = 0x106718u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10671c:
    // 0x10671c: 0xdfb40020
    ctx->pc = 0x10671cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_106720:
    // 0x106720: 0xdfb50028
    ctx->pc = 0x106720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_106724:
    // 0x106724: 0xdfb60030
    ctx->pc = 0x106724u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_106728:
    // 0x106728: 0xdfb70038
    ctx->pc = 0x106728u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_10672c:
    // 0x10672c: 0xdfbf0040
    ctx->pc = 0x10672cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_106730:
    // 0x106730: 0x3e00008
label_106734:
    if (ctx->pc == 0x106734u) {
        ctx->pc = 0x106734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x106738u;
        goto label_fallthrough_0x106730;
    }
    ctx->pc = 0x106730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106734u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106358u: goto label_106358;
            case 0x10635Cu: goto label_10635c;
            case 0x106360u: goto label_106360;
            case 0x106364u: goto label_106364;
            case 0x106368u: goto label_106368;
            case 0x10636Cu: goto label_10636c;
            case 0x106370u: goto label_106370;
            case 0x106374u: goto label_106374;
            case 0x106378u: goto label_106378;
            case 0x10637Cu: goto label_10637c;
            case 0x106380u: goto label_106380;
            case 0x106384u: goto label_106384;
            case 0x106388u: goto label_106388;
            case 0x10638Cu: goto label_10638c;
            case 0x106390u: goto label_106390;
            case 0x106394u: goto label_106394;
            case 0x106398u: goto label_106398;
            case 0x10639Cu: goto label_10639c;
            case 0x1063A0u: goto label_1063a0;
            case 0x1063A4u: goto label_1063a4;
            case 0x1063A8u: goto label_1063a8;
            case 0x1063ACu: goto label_1063ac;
            case 0x1063B0u: goto label_1063b0;
            case 0x1063B4u: goto label_1063b4;
            case 0x1063B8u: goto label_1063b8;
            case 0x1063BCu: goto label_1063bc;
            case 0x1063C0u: goto label_1063c0;
            case 0x1063C4u: goto label_1063c4;
            case 0x1063C8u: goto label_1063c8;
            case 0x1063CCu: goto label_1063cc;
            case 0x1063D0u: goto label_1063d0;
            case 0x1063D4u: goto label_1063d4;
            case 0x1063D8u: goto label_1063d8;
            case 0x1063DCu: goto label_1063dc;
            case 0x1063E0u: goto label_1063e0;
            case 0x1063E4u: goto label_1063e4;
            case 0x1063E8u: goto label_1063e8;
            case 0x1063ECu: goto label_1063ec;
            case 0x1063F0u: goto label_1063f0;
            case 0x1063F4u: goto label_1063f4;
            case 0x1063F8u: goto label_1063f8;
            case 0x1063FCu: goto label_1063fc;
            case 0x106400u: goto label_106400;
            case 0x106404u: goto label_106404;
            case 0x106408u: goto label_106408;
            case 0x10640Cu: goto label_10640c;
            case 0x106410u: goto label_106410;
            case 0x106414u: goto label_106414;
            case 0x106418u: goto label_106418;
            case 0x10641Cu: goto label_10641c;
            case 0x106420u: goto label_106420;
            case 0x106424u: goto label_106424;
            case 0x106428u: goto label_106428;
            case 0x10642Cu: goto label_10642c;
            case 0x106430u: goto label_106430;
            case 0x106434u: goto label_106434;
            case 0x106438u: goto label_106438;
            case 0x10643Cu: goto label_10643c;
            case 0x106440u: goto label_106440;
            case 0x106444u: goto label_106444;
            case 0x106448u: goto label_106448;
            case 0x10644Cu: goto label_10644c;
            case 0x106450u: goto label_106450;
            case 0x106454u: goto label_106454;
            case 0x106458u: goto label_106458;
            case 0x10645Cu: goto label_10645c;
            case 0x106460u: goto label_106460;
            case 0x106464u: goto label_106464;
            case 0x106468u: goto label_106468;
            case 0x10646Cu: goto label_10646c;
            case 0x106470u: goto label_106470;
            case 0x106474u: goto label_106474;
            case 0x106478u: goto label_106478;
            case 0x10647Cu: goto label_10647c;
            case 0x106480u: goto label_106480;
            case 0x106484u: goto label_106484;
            case 0x106488u: goto label_106488;
            case 0x10648Cu: goto label_10648c;
            case 0x106490u: goto label_106490;
            case 0x106494u: goto label_106494;
            case 0x106498u: goto label_106498;
            case 0x10649Cu: goto label_10649c;
            case 0x1064A0u: goto label_1064a0;
            case 0x1064A4u: goto label_1064a4;
            case 0x1064A8u: goto label_1064a8;
            case 0x1064ACu: goto label_1064ac;
            case 0x1064B0u: goto label_1064b0;
            case 0x1064B4u: goto label_1064b4;
            case 0x1064B8u: goto label_1064b8;
            case 0x1064BCu: goto label_1064bc;
            case 0x1064C0u: goto label_1064c0;
            case 0x1064C4u: goto label_1064c4;
            case 0x1064C8u: goto label_1064c8;
            case 0x1064CCu: goto label_1064cc;
            case 0x1064D0u: goto label_1064d0;
            case 0x1064D4u: goto label_1064d4;
            case 0x1064D8u: goto label_1064d8;
            case 0x1064DCu: goto label_1064dc;
            case 0x1064E0u: goto label_1064e0;
            case 0x1064E4u: goto label_1064e4;
            case 0x1064E8u: goto label_1064e8;
            case 0x1064ECu: goto label_1064ec;
            case 0x1064F0u: goto label_1064f0;
            case 0x1064F4u: goto label_1064f4;
            case 0x1064F8u: goto label_1064f8;
            case 0x1064FCu: goto label_1064fc;
            case 0x106500u: goto label_106500;
            case 0x106504u: goto label_106504;
            case 0x106508u: goto label_106508;
            case 0x10650Cu: goto label_10650c;
            case 0x106510u: goto label_106510;
            case 0x106514u: goto label_106514;
            case 0x106518u: goto label_106518;
            case 0x10651Cu: goto label_10651c;
            case 0x106520u: goto label_106520;
            case 0x106524u: goto label_106524;
            case 0x106528u: goto label_106528;
            case 0x10652Cu: goto label_10652c;
            case 0x106530u: goto label_106530;
            case 0x106534u: goto label_106534;
            case 0x106538u: goto label_106538;
            case 0x10653Cu: goto label_10653c;
            case 0x106540u: goto label_106540;
            case 0x106544u: goto label_106544;
            case 0x106548u: goto label_106548;
            case 0x10654Cu: goto label_10654c;
            case 0x106550u: goto label_106550;
            case 0x106554u: goto label_106554;
            case 0x106558u: goto label_106558;
            case 0x10655Cu: goto label_10655c;
            case 0x106560u: goto label_106560;
            case 0x106564u: goto label_106564;
            case 0x106568u: goto label_106568;
            case 0x10656Cu: goto label_10656c;
            case 0x106570u: goto label_106570;
            case 0x106574u: goto label_106574;
            case 0x106578u: goto label_106578;
            case 0x10657Cu: goto label_10657c;
            case 0x106580u: goto label_106580;
            case 0x106584u: goto label_106584;
            case 0x106588u: goto label_106588;
            case 0x10658Cu: goto label_10658c;
            case 0x106590u: goto label_106590;
            case 0x106594u: goto label_106594;
            case 0x106598u: goto label_106598;
            case 0x10659Cu: goto label_10659c;
            case 0x1065A0u: goto label_1065a0;
            case 0x1065A4u: goto label_1065a4;
            case 0x1065A8u: goto label_1065a8;
            case 0x1065ACu: goto label_1065ac;
            case 0x1065B0u: goto label_1065b0;
            case 0x1065B4u: goto label_1065b4;
            case 0x1065B8u: goto label_1065b8;
            case 0x1065BCu: goto label_1065bc;
            case 0x1065C0u: goto label_1065c0;
            case 0x1065C4u: goto label_1065c4;
            case 0x1065C8u: goto label_1065c8;
            case 0x1065CCu: goto label_1065cc;
            case 0x1065D0u: goto label_1065d0;
            case 0x1065D4u: goto label_1065d4;
            case 0x1065D8u: goto label_1065d8;
            case 0x1065DCu: goto label_1065dc;
            case 0x1065E0u: goto label_1065e0;
            case 0x1065E4u: goto label_1065e4;
            case 0x1065E8u: goto label_1065e8;
            case 0x1065ECu: goto label_1065ec;
            case 0x1065F0u: goto label_1065f0;
            case 0x1065F4u: goto label_1065f4;
            case 0x1065F8u: goto label_1065f8;
            case 0x1065FCu: goto label_1065fc;
            case 0x106600u: goto label_106600;
            case 0x106604u: goto label_106604;
            case 0x106608u: goto label_106608;
            case 0x10660Cu: goto label_10660c;
            case 0x106610u: goto label_106610;
            case 0x106614u: goto label_106614;
            case 0x106618u: goto label_106618;
            case 0x10661Cu: goto label_10661c;
            case 0x106620u: goto label_106620;
            case 0x106624u: goto label_106624;
            case 0x106628u: goto label_106628;
            case 0x10662Cu: goto label_10662c;
            case 0x106630u: goto label_106630;
            case 0x106634u: goto label_106634;
            case 0x106638u: goto label_106638;
            case 0x10663Cu: goto label_10663c;
            case 0x106640u: goto label_106640;
            case 0x106644u: goto label_106644;
            case 0x106648u: goto label_106648;
            case 0x10664Cu: goto label_10664c;
            case 0x106650u: goto label_106650;
            case 0x106654u: goto label_106654;
            case 0x106658u: goto label_106658;
            case 0x10665Cu: goto label_10665c;
            case 0x106660u: goto label_106660;
            case 0x106664u: goto label_106664;
            case 0x106668u: goto label_106668;
            case 0x10666Cu: goto label_10666c;
            case 0x106670u: goto label_106670;
            case 0x106674u: goto label_106674;
            case 0x106678u: goto label_106678;
            case 0x10667Cu: goto label_10667c;
            case 0x106680u: goto label_106680;
            case 0x106684u: goto label_106684;
            case 0x106688u: goto label_106688;
            case 0x10668Cu: goto label_10668c;
            case 0x106690u: goto label_106690;
            case 0x106694u: goto label_106694;
            case 0x106698u: goto label_106698;
            case 0x10669Cu: goto label_10669c;
            case 0x1066A0u: goto label_1066a0;
            case 0x1066A4u: goto label_1066a4;
            case 0x1066A8u: goto label_1066a8;
            case 0x1066ACu: goto label_1066ac;
            case 0x1066B0u: goto label_1066b0;
            case 0x1066B4u: goto label_1066b4;
            case 0x1066B8u: goto label_1066b8;
            case 0x1066BCu: goto label_1066bc;
            case 0x1066C0u: goto label_1066c0;
            case 0x1066C4u: goto label_1066c4;
            case 0x1066C8u: goto label_1066c8;
            case 0x1066CCu: goto label_1066cc;
            case 0x1066D0u: goto label_1066d0;
            case 0x1066D4u: goto label_1066d4;
            case 0x1066D8u: goto label_1066d8;
            case 0x1066DCu: goto label_1066dc;
            case 0x1066E0u: goto label_1066e0;
            case 0x1066E4u: goto label_1066e4;
            case 0x1066E8u: goto label_1066e8;
            case 0x1066ECu: goto label_1066ec;
            case 0x1066F0u: goto label_1066f0;
            case 0x1066F4u: goto label_1066f4;
            case 0x1066F8u: goto label_1066f8;
            case 0x1066FCu: goto label_1066fc;
            case 0x106700u: goto label_106700;
            case 0x106704u: goto label_106704;
            case 0x106708u: goto label_106708;
            case 0x10670Cu: goto label_10670c;
            case 0x106710u: goto label_106710;
            case 0x106714u: goto label_106714;
            case 0x106718u: goto label_106718;
            case 0x10671Cu: goto label_10671c;
            case 0x106720u: goto label_106720;
            case 0x106724u: goto label_106724;
            case 0x106728u: goto label_106728;
            case 0x10672Cu: goto label_10672c;
            case 0x106730u: goto label_106730;
            case 0x106734u: goto label_106734;
            default: break;
        }
        return;
    }
label_fallthrough_0x106730:
    ctx->pc = 0x106738u;
}
