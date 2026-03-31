#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F13DC
// Address: 0x1f13dc - 0x1f15b4
void sub_001F13DC_0x1f13dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f13dcu;

label_1f13dc:
    // 0x1f13dc: 0x27bdffd0
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f13e0:
    // 0x1f13e0: 0xffbe0020
    ctx->pc = 0x1f13e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_1f13e4:
    // 0x1f13e4: 0xffbf0028
    ctx->pc = 0x1f13e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1f13e8:
    // 0x1f13e8: 0x3a0f02d
    ctx->pc = 0x1f13e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f13ec:
    // 0x1f13ec: 0xafc40000
    ctx->pc = 0x1f13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1f13f0:
    // 0x1f13f0: 0xafc50004
    ctx->pc = 0x1f13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_1f13f4:
    // 0x1f13f4: 0xafc60008
    ctx->pc = 0x1f13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_1f13f8:
    // 0x1f13f8: 0x8fc40000
    ctx->pc = 0x1f13f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f13fc:
    // 0x1f13fc: 0x24050001
    ctx->pc = 0x1f13fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1f1400:
    // 0x1f1400: 0xc07c725
label_1f1404:
    if (ctx->pc == 0x1F1404u) {
        ctx->pc = 0x1F1408u;
        goto label_1f1408;
    }
    ctx->pc = 0x1F1400u;
    SET_GPR_U32(ctx, 31, 0x1F1408u);
    ctx->pc = 0x1F1C94u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1C94_0x1f1c94(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1408u; }
    }
    if (ctx->pc != 0x1F1408u) { return; }
    ctx->pc = 0x1F1408u;
label_1f1408:
    // 0x1f1408: 0xafc2000c
    ctx->pc = 0x1f1408u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f140c:
    // 0x1f140c: 0x8fc2000c
    ctx->pc = 0x1f140cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1410:
    // 0x1f1410: 0x10400004
label_1f1414:
    if (ctx->pc == 0x1F1414u) {
        ctx->pc = 0x1F1418u;
        goto label_1f1418;
    }
    ctx->pc = 0x1F1410u;
    {
        const bool branch_taken_0x1f1410 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1410) {
            ctx->pc = 0x1F1424u;
            goto label_1f1424;
        }
    }
    ctx->pc = 0x1F1418u;
label_1f1418:
    // 0x1f1418: 0x8fc2000c
    ctx->pc = 0x1f1418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f141c:
    // 0x1f141c: 0x10000020
label_1f1420:
    if (ctx->pc == 0x1F1420u) {
        ctx->pc = 0x1F1424u;
        goto label_1f1424;
    }
    ctx->pc = 0x1F141Cu;
    {
        const bool branch_taken_0x1f141c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f141c) {
            ctx->pc = 0x1F14A0u;
            goto label_1f14a0;
        }
    }
    ctx->pc = 0x1F1424u;
label_1f1424:
    // 0x1f1424: 0x8fc30008
    ctx->pc = 0x1f1424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f1428:
    // 0x1f1428: 0x8fc20004
    ctx->pc = 0x1f1428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f142c:
    // 0x1f142c: 0x8c420000
    ctx->pc = 0x1f142cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1430:
    // 0x1f1430: 0xac620000
    ctx->pc = 0x1f1430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f1434:
    // 0x1f1434: 0x8fc30008
    ctx->pc = 0x1f1434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f1438:
    // 0x1f1438: 0x8fc20004
    ctx->pc = 0x1f1438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f143c:
    // 0x1f143c: 0xac620004
    ctx->pc = 0x1f143cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f1440:
    // 0x1f1440: 0x8fc30004
    ctx->pc = 0x1f1440u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f1444:
    // 0x1f1444: 0x8fc20008
    ctx->pc = 0x1f1444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f1448:
    // 0x1f1448: 0xac620000
    ctx->pc = 0x1f1448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f144c:
    // 0x1f144c: 0x8fc20008
    ctx->pc = 0x1f144cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f1450:
    // 0x1f1450: 0x8c430000
    ctx->pc = 0x1f1450u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1454:
    // 0x1f1454: 0x8fc20008
    ctx->pc = 0x1f1454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f1458:
    // 0x1f1458: 0xac620004
    ctx->pc = 0x1f1458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f145c:
    // 0x1f145c: 0x8fc30000
    ctx->pc = 0x1f145cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1460:
    // 0x1f1460: 0x8fc20000
    ctx->pc = 0x1f1460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1464:
    // 0x1f1464: 0x9442000c
    ctx->pc = 0x1f1464u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_1f1468:
    // 0x1f1468: 0x24420001
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f146c:
    // 0x1f146c: 0xa462000c
    ctx->pc = 0x1f146cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
label_1f1470:
    // 0x1f1470: 0x8fc40000
    ctx->pc = 0x1f1470u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1474:
    // 0x1f1474: 0x24050002
    ctx->pc = 0x1f1474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_1f1478:
    // 0x1f1478: 0xc07c725
label_1f147c:
    if (ctx->pc == 0x1F147Cu) {
        ctx->pc = 0x1F1480u;
        goto label_1f1480;
    }
    ctx->pc = 0x1F1478u;
    SET_GPR_U32(ctx, 31, 0x1F1480u);
    ctx->pc = 0x1F1C94u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1C94_0x1f1c94(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1480u; }
    }
    if (ctx->pc != 0x1F1480u) { return; }
    ctx->pc = 0x1F1480u;
label_1f1480:
    // 0x1f1480: 0xafc2000c
    ctx->pc = 0x1f1480u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f1484:
    // 0x1f1484: 0x8fc2000c
    ctx->pc = 0x1f1484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1488:
    // 0x1f1488: 0x10400004
label_1f148c:
    if (ctx->pc == 0x1F148Cu) {
        ctx->pc = 0x1F1490u;
        goto label_1f1490;
    }
    ctx->pc = 0x1F1488u;
    {
        const bool branch_taken_0x1f1488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1488) {
            ctx->pc = 0x1F149Cu;
            goto label_1f149c;
        }
    }
    ctx->pc = 0x1F1490u;
label_1f1490:
    // 0x1f1490: 0x8fc2000c
    ctx->pc = 0x1f1490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1494:
    // 0x1f1494: 0x10000002
label_1f1498:
    if (ctx->pc == 0x1F1498u) {
        ctx->pc = 0x1F149Cu;
        goto label_1f149c;
    }
    ctx->pc = 0x1F1494u;
    {
        const bool branch_taken_0x1f1494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1494) {
            ctx->pc = 0x1F14A0u;
            goto label_1f14a0;
        }
    }
    ctx->pc = 0x1F149Cu;
label_1f149c:
    // 0x1f149c: 0x8fc2000c
    ctx->pc = 0x1f149cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f14a0:
    // 0x1f14a0: 0x3c0e82d
    ctx->pc = 0x1f14a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f14a4:
    // 0x1f14a4: 0xdfbe0020
    ctx->pc = 0x1f14a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f14a8:
    // 0x1f14a8: 0xdfbf0028
    ctx->pc = 0x1f14a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f14ac:
    // 0x1f14ac: 0x27bd0030
    ctx->pc = 0x1f14acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
label_1f14b0:
    // 0x1f14b0: 0x3e00008
label_1f14b4:
    if (ctx->pc == 0x1F14B4u) {
        ctx->pc = 0x1F14B8u;
        goto label_1f14b8;
    }
    ctx->pc = 0x1F14B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F13E0u: goto label_1f13e0;
            case 0x1F13E4u: goto label_1f13e4;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F13ECu: goto label_1f13ec;
            case 0x1F13F0u: goto label_1f13f0;
            case 0x1F13F4u: goto label_1f13f4;
            case 0x1F13F8u: goto label_1f13f8;
            case 0x1F13FCu: goto label_1f13fc;
            case 0x1F1400u: goto label_1f1400;
            case 0x1F1404u: goto label_1f1404;
            case 0x1F1408u: goto label_1f1408;
            case 0x1F140Cu: goto label_1f140c;
            case 0x1F1410u: goto label_1f1410;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1418u: goto label_1f1418;
            case 0x1F141Cu: goto label_1f141c;
            case 0x1F1420u: goto label_1f1420;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1428u: goto label_1f1428;
            case 0x1F142Cu: goto label_1f142c;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1434u: goto label_1f1434;
            case 0x1F1438u: goto label_1f1438;
            case 0x1F143Cu: goto label_1f143c;
            case 0x1F1440u: goto label_1f1440;
            case 0x1F1444u: goto label_1f1444;
            case 0x1F1448u: goto label_1f1448;
            case 0x1F144Cu: goto label_1f144c;
            case 0x1F1450u: goto label_1f1450;
            case 0x1F1454u: goto label_1f1454;
            case 0x1F1458u: goto label_1f1458;
            case 0x1F145Cu: goto label_1f145c;
            case 0x1F1460u: goto label_1f1460;
            case 0x1F1464u: goto label_1f1464;
            case 0x1F1468u: goto label_1f1468;
            case 0x1F146Cu: goto label_1f146c;
            case 0x1F1470u: goto label_1f1470;
            case 0x1F1474u: goto label_1f1474;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F147Cu: goto label_1f147c;
            case 0x1F1480u: goto label_1f1480;
            case 0x1F1484u: goto label_1f1484;
            case 0x1F1488u: goto label_1f1488;
            case 0x1F148Cu: goto label_1f148c;
            case 0x1F1490u: goto label_1f1490;
            case 0x1F1494u: goto label_1f1494;
            case 0x1F1498u: goto label_1f1498;
            case 0x1F149Cu: goto label_1f149c;
            case 0x1F14A0u: goto label_1f14a0;
            case 0x1F14A4u: goto label_1f14a4;
            case 0x1F14A8u: goto label_1f14a8;
            case 0x1F14ACu: goto label_1f14ac;
            case 0x1F14B0u: goto label_1f14b0;
            case 0x1F14B4u: goto label_1f14b4;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14BCu: goto label_1f14bc;
            case 0x1F14C0u: goto label_1f14c0;
            case 0x1F14C4u: goto label_1f14c4;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14CCu: goto label_1f14cc;
            case 0x1F14D0u: goto label_1f14d0;
            case 0x1F14D4u: goto label_1f14d4;
            case 0x1F14D8u: goto label_1f14d8;
            case 0x1F14DCu: goto label_1f14dc;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14E4u: goto label_1f14e4;
            case 0x1F14E8u: goto label_1f14e8;
            case 0x1F14ECu: goto label_1f14ec;
            case 0x1F14F0u: goto label_1f14f0;
            case 0x1F14F4u: goto label_1f14f4;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F14FCu: goto label_1f14fc;
            case 0x1F1500u: goto label_1f1500;
            case 0x1F1504u: goto label_1f1504;
            case 0x1F1508u: goto label_1f1508;
            case 0x1F150Cu: goto label_1f150c;
            case 0x1F1510u: goto label_1f1510;
            case 0x1F1514u: goto label_1f1514;
            case 0x1F1518u: goto label_1f1518;
            case 0x1F151Cu: goto label_1f151c;
            case 0x1F1520u: goto label_1f1520;
            case 0x1F1524u: goto label_1f1524;
            case 0x1F1528u: goto label_1f1528;
            case 0x1F152Cu: goto label_1f152c;
            case 0x1F1530u: goto label_1f1530;
            case 0x1F1534u: goto label_1f1534;
            case 0x1F1538u: goto label_1f1538;
            case 0x1F153Cu: goto label_1f153c;
            case 0x1F1540u: goto label_1f1540;
            case 0x1F1544u: goto label_1f1544;
            case 0x1F1548u: goto label_1f1548;
            case 0x1F154Cu: goto label_1f154c;
            case 0x1F1550u: goto label_1f1550;
            case 0x1F1554u: goto label_1f1554;
            case 0x1F1558u: goto label_1f1558;
            case 0x1F155Cu: goto label_1f155c;
            case 0x1F1560u: goto label_1f1560;
            case 0x1F1564u: goto label_1f1564;
            case 0x1F1568u: goto label_1f1568;
            case 0x1F156Cu: goto label_1f156c;
            case 0x1F1570u: goto label_1f1570;
            case 0x1F1574u: goto label_1f1574;
            case 0x1F1578u: goto label_1f1578;
            case 0x1F157Cu: goto label_1f157c;
            case 0x1F1580u: goto label_1f1580;
            case 0x1F1584u: goto label_1f1584;
            case 0x1F1588u: goto label_1f1588;
            case 0x1F158Cu: goto label_1f158c;
            case 0x1F1590u: goto label_1f1590;
            case 0x1F1594u: goto label_1f1594;
            case 0x1F1598u: goto label_1f1598;
            case 0x1F159Cu: goto label_1f159c;
            case 0x1F15A0u: goto label_1f15a0;
            case 0x1F15A4u: goto label_1f15a4;
            case 0x1F15A8u: goto label_1f15a8;
            case 0x1F15ACu: goto label_1f15ac;
            case 0x1F15B0u: goto label_1f15b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F14B8u;
label_1f14b8:
    // 0x1f14b8: 0x27bdffd0
    ctx->pc = 0x1f14b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f14bc:
    // 0x1f14bc: 0xffbe0020
    ctx->pc = 0x1f14bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_1f14c0:
    // 0x1f14c0: 0xffbf0028
    ctx->pc = 0x1f14c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1f14c4:
    // 0x1f14c4: 0x3a0f02d
    ctx->pc = 0x1f14c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f14c8:
    // 0x1f14c8: 0xafc40000
    ctx->pc = 0x1f14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1f14cc:
    // 0x1f14cc: 0xafc50004
    ctx->pc = 0x1f14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_1f14d0:
    // 0x1f14d0: 0xafc60008
    ctx->pc = 0x1f14d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_1f14d4:
    // 0x1f14d4: 0xafc0000c
    ctx->pc = 0x1f14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_1f14d8:
    // 0x1f14d8: 0x8fc40000
    ctx->pc = 0x1f14d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f14dc:
    // 0x1f14dc: 0x24050001
    ctx->pc = 0x1f14dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1f14e0:
    // 0x1f14e0: 0xc07c725
label_1f14e4:
    if (ctx->pc == 0x1F14E4u) {
        ctx->pc = 0x1F14E8u;
        goto label_1f14e8;
    }
    ctx->pc = 0x1F14E0u;
    SET_GPR_U32(ctx, 31, 0x1F14E8u);
    ctx->pc = 0x1F1C94u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1C94_0x1f1c94(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F14E8u; }
    }
    if (ctx->pc != 0x1F14E8u) { return; }
    ctx->pc = 0x1F14E8u;
label_1f14e8:
    // 0x1f14e8: 0xafc2000c
    ctx->pc = 0x1f14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f14ec:
    // 0x1f14ec: 0x8fc2000c
    ctx->pc = 0x1f14ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f14f0:
    // 0x1f14f0: 0x10400004
label_1f14f4:
    if (ctx->pc == 0x1F14F4u) {
        ctx->pc = 0x1F14F8u;
        goto label_1f14f8;
    }
    ctx->pc = 0x1F14F0u;
    {
        const bool branch_taken_0x1f14f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f14f0) {
            ctx->pc = 0x1F1504u;
            goto label_1f1504;
        }
    }
    ctx->pc = 0x1F14F8u;
label_1f14f8:
    // 0x1f14f8: 0x8fc2000c
    ctx->pc = 0x1f14f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f14fc:
    // 0x1f14fc: 0x10000027
label_1f1500:
    if (ctx->pc == 0x1F1500u) {
        ctx->pc = 0x1F1504u;
        goto label_1f1504;
    }
    ctx->pc = 0x1F14FCu;
    {
        const bool branch_taken_0x1f14fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f14fc) {
            ctx->pc = 0x1F159Cu;
            goto label_1f159c;
        }
    }
    ctx->pc = 0x1F1504u;
label_1f1504:
    // 0x1f1504: 0x8fc20000
    ctx->pc = 0x1f1504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1508:
    // 0x1f1508: 0x8c420000
    ctx->pc = 0x1f1508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f150c:
    // 0x1f150c: 0xafc20010
    ctx->pc = 0x1f150cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1f1510:
    // 0x1f1510: 0x8fc30010
    ctx->pc = 0x1f1510u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1f1514:
    // 0x1f1514: 0x8fc20000
    ctx->pc = 0x1f1514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1518:
    // 0x1f1518: 0x14620003
label_1f151c:
    if (ctx->pc == 0x1F151Cu) {
        ctx->pc = 0x1F1520u;
        goto label_1f1520;
    }
    ctx->pc = 0x1F1518u;
    {
        const bool branch_taken_0x1f1518 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f1518) {
            ctx->pc = 0x1F1528u;
            goto label_1f1528;
        }
    }
    ctx->pc = 0x1F1520u;
label_1f1520:
    // 0x1f1520: 0x10000012
label_1f1524:
    if (ctx->pc == 0x1F1524u) {
        ctx->pc = 0x1F1528u;
        goto label_1f1528;
    }
    ctx->pc = 0x1F1520u;
    {
        const bool branch_taken_0x1f1520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1520) {
            ctx->pc = 0x1F156Cu;
            goto label_1f156c;
        }
    }
    ctx->pc = 0x1F1528u;
label_1f1528:
    // 0x1f1528: 0x8fc20004
    ctx->pc = 0x1f1528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f152c:
    // 0x1f152c: 0x8fc40010
    ctx->pc = 0x1f152cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1f1530:
    // 0x1f1530: 0x8fc50008
    ctx->pc = 0x1f1530u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f1534:
    // 0x1f1534: 0x40f809
label_1f1538:
    if (ctx->pc == 0x1F1538u) {
        ctx->pc = 0x1F153Cu;
        goto label_1f153c;
    }
    ctx->pc = 0x1F1534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F153Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F13E0u: goto label_1f13e0;
            case 0x1F13E4u: goto label_1f13e4;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F13ECu: goto label_1f13ec;
            case 0x1F13F0u: goto label_1f13f0;
            case 0x1F13F4u: goto label_1f13f4;
            case 0x1F13F8u: goto label_1f13f8;
            case 0x1F13FCu: goto label_1f13fc;
            case 0x1F1400u: goto label_1f1400;
            case 0x1F1404u: goto label_1f1404;
            case 0x1F1408u: goto label_1f1408;
            case 0x1F140Cu: goto label_1f140c;
            case 0x1F1410u: goto label_1f1410;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1418u: goto label_1f1418;
            case 0x1F141Cu: goto label_1f141c;
            case 0x1F1420u: goto label_1f1420;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1428u: goto label_1f1428;
            case 0x1F142Cu: goto label_1f142c;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1434u: goto label_1f1434;
            case 0x1F1438u: goto label_1f1438;
            case 0x1F143Cu: goto label_1f143c;
            case 0x1F1440u: goto label_1f1440;
            case 0x1F1444u: goto label_1f1444;
            case 0x1F1448u: goto label_1f1448;
            case 0x1F144Cu: goto label_1f144c;
            case 0x1F1450u: goto label_1f1450;
            case 0x1F1454u: goto label_1f1454;
            case 0x1F1458u: goto label_1f1458;
            case 0x1F145Cu: goto label_1f145c;
            case 0x1F1460u: goto label_1f1460;
            case 0x1F1464u: goto label_1f1464;
            case 0x1F1468u: goto label_1f1468;
            case 0x1F146Cu: goto label_1f146c;
            case 0x1F1470u: goto label_1f1470;
            case 0x1F1474u: goto label_1f1474;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F147Cu: goto label_1f147c;
            case 0x1F1480u: goto label_1f1480;
            case 0x1F1484u: goto label_1f1484;
            case 0x1F1488u: goto label_1f1488;
            case 0x1F148Cu: goto label_1f148c;
            case 0x1F1490u: goto label_1f1490;
            case 0x1F1494u: goto label_1f1494;
            case 0x1F1498u: goto label_1f1498;
            case 0x1F149Cu: goto label_1f149c;
            case 0x1F14A0u: goto label_1f14a0;
            case 0x1F14A4u: goto label_1f14a4;
            case 0x1F14A8u: goto label_1f14a8;
            case 0x1F14ACu: goto label_1f14ac;
            case 0x1F14B0u: goto label_1f14b0;
            case 0x1F14B4u: goto label_1f14b4;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14BCu: goto label_1f14bc;
            case 0x1F14C0u: goto label_1f14c0;
            case 0x1F14C4u: goto label_1f14c4;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14CCu: goto label_1f14cc;
            case 0x1F14D0u: goto label_1f14d0;
            case 0x1F14D4u: goto label_1f14d4;
            case 0x1F14D8u: goto label_1f14d8;
            case 0x1F14DCu: goto label_1f14dc;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14E4u: goto label_1f14e4;
            case 0x1F14E8u: goto label_1f14e8;
            case 0x1F14ECu: goto label_1f14ec;
            case 0x1F14F0u: goto label_1f14f0;
            case 0x1F14F4u: goto label_1f14f4;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F14FCu: goto label_1f14fc;
            case 0x1F1500u: goto label_1f1500;
            case 0x1F1504u: goto label_1f1504;
            case 0x1F1508u: goto label_1f1508;
            case 0x1F150Cu: goto label_1f150c;
            case 0x1F1510u: goto label_1f1510;
            case 0x1F1514u: goto label_1f1514;
            case 0x1F1518u: goto label_1f1518;
            case 0x1F151Cu: goto label_1f151c;
            case 0x1F1520u: goto label_1f1520;
            case 0x1F1524u: goto label_1f1524;
            case 0x1F1528u: goto label_1f1528;
            case 0x1F152Cu: goto label_1f152c;
            case 0x1F1530u: goto label_1f1530;
            case 0x1F1534u: goto label_1f1534;
            case 0x1F1538u: goto label_1f1538;
            case 0x1F153Cu: goto label_1f153c;
            case 0x1F1540u: goto label_1f1540;
            case 0x1F1544u: goto label_1f1544;
            case 0x1F1548u: goto label_1f1548;
            case 0x1F154Cu: goto label_1f154c;
            case 0x1F1550u: goto label_1f1550;
            case 0x1F1554u: goto label_1f1554;
            case 0x1F1558u: goto label_1f1558;
            case 0x1F155Cu: goto label_1f155c;
            case 0x1F1560u: goto label_1f1560;
            case 0x1F1564u: goto label_1f1564;
            case 0x1F1568u: goto label_1f1568;
            case 0x1F156Cu: goto label_1f156c;
            case 0x1F1570u: goto label_1f1570;
            case 0x1F1574u: goto label_1f1574;
            case 0x1F1578u: goto label_1f1578;
            case 0x1F157Cu: goto label_1f157c;
            case 0x1F1580u: goto label_1f1580;
            case 0x1F1584u: goto label_1f1584;
            case 0x1F1588u: goto label_1f1588;
            case 0x1F158Cu: goto label_1f158c;
            case 0x1F1590u: goto label_1f1590;
            case 0x1F1594u: goto label_1f1594;
            case 0x1F1598u: goto label_1f1598;
            case 0x1F159Cu: goto label_1f159c;
            case 0x1F15A0u: goto label_1f15a0;
            case 0x1F15A4u: goto label_1f15a4;
            case 0x1F15A8u: goto label_1f15a8;
            case 0x1F15ACu: goto label_1f15ac;
            case 0x1F15B0u: goto label_1f15b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F153Cu; }
            if (ctx->pc != 0x1F153Cu) { return; }
        }
    }
    ctx->pc = 0x1F153Cu;
label_1f153c:
    // 0x1f153c: 0xafc2000c
    ctx->pc = 0x1f153cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f1540:
    // 0x1f1540: 0x8fc2000c
    ctx->pc = 0x1f1540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1544:
    // 0x1f1544: 0x10400004
label_1f1548:
    if (ctx->pc == 0x1F1548u) {
        ctx->pc = 0x1F154Cu;
        goto label_1f154c;
    }
    ctx->pc = 0x1F1544u;
    {
        const bool branch_taken_0x1f1544 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1544) {
            ctx->pc = 0x1F1558u;
            goto label_1f1558;
        }
    }
    ctx->pc = 0x1F154Cu;
label_1f154c:
    // 0x1f154c: 0x8fc2000c
    ctx->pc = 0x1f154cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1550:
    // 0x1f1550: 0x10000012
label_1f1554:
    if (ctx->pc == 0x1F1554u) {
        ctx->pc = 0x1F1558u;
        goto label_1f1558;
    }
    ctx->pc = 0x1F1550u;
    {
        const bool branch_taken_0x1f1550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1550) {
            ctx->pc = 0x1F159Cu;
            goto label_1f159c;
        }
    }
    ctx->pc = 0x1F1558u;
label_1f1558:
    // 0x1f1558: 0x8fc20010
    ctx->pc = 0x1f1558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1f155c:
    // 0x1f155c: 0x8c420000
    ctx->pc = 0x1f155cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1560:
    // 0x1f1560: 0xafc20010
    ctx->pc = 0x1f1560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1f1564:
    // 0x1f1564: 0x1000ffea
label_1f1568:
    if (ctx->pc == 0x1F1568u) {
        ctx->pc = 0x1F156Cu;
        goto label_1f156c;
    }
    ctx->pc = 0x1F1564u;
    {
        const bool branch_taken_0x1f1564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1564) {
            ctx->pc = 0x1F1510u;
            goto label_1f1510;
        }
    }
    ctx->pc = 0x1F156Cu;
label_1f156c:
    // 0x1f156c: 0x8fc40000
    ctx->pc = 0x1f156cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f1570:
    // 0x1f1570: 0x24050002
    ctx->pc = 0x1f1570u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_1f1574:
    // 0x1f1574: 0xc07c725
label_1f1578:
    if (ctx->pc == 0x1F1578u) {
        ctx->pc = 0x1F157Cu;
        goto label_1f157c;
    }
    ctx->pc = 0x1F1574u;
    SET_GPR_U32(ctx, 31, 0x1F157Cu);
    ctx->pc = 0x1F1C94u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1C94_0x1f1c94(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F157Cu; }
    }
    if (ctx->pc != 0x1F157Cu) { return; }
    ctx->pc = 0x1F157Cu;
label_1f157c:
    // 0x1f157c: 0xafc2000c
    ctx->pc = 0x1f157cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_1f1580:
    // 0x1f1580: 0x8fc2000c
    ctx->pc = 0x1f1580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1584:
    // 0x1f1584: 0x10400004
label_1f1588:
    if (ctx->pc == 0x1F1588u) {
        ctx->pc = 0x1F158Cu;
        goto label_1f158c;
    }
    ctx->pc = 0x1F1584u;
    {
        const bool branch_taken_0x1f1584 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1584) {
            ctx->pc = 0x1F1598u;
            goto label_1f1598;
        }
    }
    ctx->pc = 0x1F158Cu;
label_1f158c:
    // 0x1f158c: 0x8fc2000c
    ctx->pc = 0x1f158cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1590:
    // 0x1f1590: 0x10000002
label_1f1594:
    if (ctx->pc == 0x1F1594u) {
        ctx->pc = 0x1F1598u;
        goto label_1f1598;
    }
    ctx->pc = 0x1F1590u;
    {
        const bool branch_taken_0x1f1590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1590) {
            ctx->pc = 0x1F159Cu;
            goto label_1f159c;
        }
    }
    ctx->pc = 0x1F1598u;
label_1f1598:
    // 0x1f1598: 0x8fc2000c
    ctx->pc = 0x1f1598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f159c:
    // 0x1f159c: 0x3c0e82d
    ctx->pc = 0x1f159cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f15a0:
    // 0x1f15a0: 0xdfbe0020
    ctx->pc = 0x1f15a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f15a4:
    // 0x1f15a4: 0xdfbf0028
    ctx->pc = 0x1f15a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f15a8:
    // 0x1f15a8: 0x27bd0030
    ctx->pc = 0x1f15a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
label_1f15ac:
    // 0x1f15ac: 0x3e00008
label_1f15b0:
    if (ctx->pc == 0x1F15B0u) {
        ctx->pc = 0x1F15B4u;
        goto label_fallthrough_0x1f15ac;
    }
    ctx->pc = 0x1F15ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F13DCu: goto label_1f13dc;
            case 0x1F13E0u: goto label_1f13e0;
            case 0x1F13E4u: goto label_1f13e4;
            case 0x1F13E8u: goto label_1f13e8;
            case 0x1F13ECu: goto label_1f13ec;
            case 0x1F13F0u: goto label_1f13f0;
            case 0x1F13F4u: goto label_1f13f4;
            case 0x1F13F8u: goto label_1f13f8;
            case 0x1F13FCu: goto label_1f13fc;
            case 0x1F1400u: goto label_1f1400;
            case 0x1F1404u: goto label_1f1404;
            case 0x1F1408u: goto label_1f1408;
            case 0x1F140Cu: goto label_1f140c;
            case 0x1F1410u: goto label_1f1410;
            case 0x1F1414u: goto label_1f1414;
            case 0x1F1418u: goto label_1f1418;
            case 0x1F141Cu: goto label_1f141c;
            case 0x1F1420u: goto label_1f1420;
            case 0x1F1424u: goto label_1f1424;
            case 0x1F1428u: goto label_1f1428;
            case 0x1F142Cu: goto label_1f142c;
            case 0x1F1430u: goto label_1f1430;
            case 0x1F1434u: goto label_1f1434;
            case 0x1F1438u: goto label_1f1438;
            case 0x1F143Cu: goto label_1f143c;
            case 0x1F1440u: goto label_1f1440;
            case 0x1F1444u: goto label_1f1444;
            case 0x1F1448u: goto label_1f1448;
            case 0x1F144Cu: goto label_1f144c;
            case 0x1F1450u: goto label_1f1450;
            case 0x1F1454u: goto label_1f1454;
            case 0x1F1458u: goto label_1f1458;
            case 0x1F145Cu: goto label_1f145c;
            case 0x1F1460u: goto label_1f1460;
            case 0x1F1464u: goto label_1f1464;
            case 0x1F1468u: goto label_1f1468;
            case 0x1F146Cu: goto label_1f146c;
            case 0x1F1470u: goto label_1f1470;
            case 0x1F1474u: goto label_1f1474;
            case 0x1F1478u: goto label_1f1478;
            case 0x1F147Cu: goto label_1f147c;
            case 0x1F1480u: goto label_1f1480;
            case 0x1F1484u: goto label_1f1484;
            case 0x1F1488u: goto label_1f1488;
            case 0x1F148Cu: goto label_1f148c;
            case 0x1F1490u: goto label_1f1490;
            case 0x1F1494u: goto label_1f1494;
            case 0x1F1498u: goto label_1f1498;
            case 0x1F149Cu: goto label_1f149c;
            case 0x1F14A0u: goto label_1f14a0;
            case 0x1F14A4u: goto label_1f14a4;
            case 0x1F14A8u: goto label_1f14a8;
            case 0x1F14ACu: goto label_1f14ac;
            case 0x1F14B0u: goto label_1f14b0;
            case 0x1F14B4u: goto label_1f14b4;
            case 0x1F14B8u: goto label_1f14b8;
            case 0x1F14BCu: goto label_1f14bc;
            case 0x1F14C0u: goto label_1f14c0;
            case 0x1F14C4u: goto label_1f14c4;
            case 0x1F14C8u: goto label_1f14c8;
            case 0x1F14CCu: goto label_1f14cc;
            case 0x1F14D0u: goto label_1f14d0;
            case 0x1F14D4u: goto label_1f14d4;
            case 0x1F14D8u: goto label_1f14d8;
            case 0x1F14DCu: goto label_1f14dc;
            case 0x1F14E0u: goto label_1f14e0;
            case 0x1F14E4u: goto label_1f14e4;
            case 0x1F14E8u: goto label_1f14e8;
            case 0x1F14ECu: goto label_1f14ec;
            case 0x1F14F0u: goto label_1f14f0;
            case 0x1F14F4u: goto label_1f14f4;
            case 0x1F14F8u: goto label_1f14f8;
            case 0x1F14FCu: goto label_1f14fc;
            case 0x1F1500u: goto label_1f1500;
            case 0x1F1504u: goto label_1f1504;
            case 0x1F1508u: goto label_1f1508;
            case 0x1F150Cu: goto label_1f150c;
            case 0x1F1510u: goto label_1f1510;
            case 0x1F1514u: goto label_1f1514;
            case 0x1F1518u: goto label_1f1518;
            case 0x1F151Cu: goto label_1f151c;
            case 0x1F1520u: goto label_1f1520;
            case 0x1F1524u: goto label_1f1524;
            case 0x1F1528u: goto label_1f1528;
            case 0x1F152Cu: goto label_1f152c;
            case 0x1F1530u: goto label_1f1530;
            case 0x1F1534u: goto label_1f1534;
            case 0x1F1538u: goto label_1f1538;
            case 0x1F153Cu: goto label_1f153c;
            case 0x1F1540u: goto label_1f1540;
            case 0x1F1544u: goto label_1f1544;
            case 0x1F1548u: goto label_1f1548;
            case 0x1F154Cu: goto label_1f154c;
            case 0x1F1550u: goto label_1f1550;
            case 0x1F1554u: goto label_1f1554;
            case 0x1F1558u: goto label_1f1558;
            case 0x1F155Cu: goto label_1f155c;
            case 0x1F1560u: goto label_1f1560;
            case 0x1F1564u: goto label_1f1564;
            case 0x1F1568u: goto label_1f1568;
            case 0x1F156Cu: goto label_1f156c;
            case 0x1F1570u: goto label_1f1570;
            case 0x1F1574u: goto label_1f1574;
            case 0x1F1578u: goto label_1f1578;
            case 0x1F157Cu: goto label_1f157c;
            case 0x1F1580u: goto label_1f1580;
            case 0x1F1584u: goto label_1f1584;
            case 0x1F1588u: goto label_1f1588;
            case 0x1F158Cu: goto label_1f158c;
            case 0x1F1590u: goto label_1f1590;
            case 0x1F1594u: goto label_1f1594;
            case 0x1F1598u: goto label_1f1598;
            case 0x1F159Cu: goto label_1f159c;
            case 0x1F15A0u: goto label_1f15a0;
            case 0x1F15A4u: goto label_1f15a4;
            case 0x1F15A8u: goto label_1f15a8;
            case 0x1F15ACu: goto label_1f15ac;
            case 0x1F15B0u: goto label_1f15b0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f15ac:
    ctx->pc = 0x1F15B4u;
}
