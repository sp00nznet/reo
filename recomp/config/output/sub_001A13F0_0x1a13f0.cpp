#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A13F0
// Address: 0x1a13f0 - 0x1a15b0
void sub_001A13F0_0x1a13f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a13f0u;

    // 0x1a13f0: 0x27bdffc0
    ctx->pc = 0x1a13f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a13f4: 0x3402ffff
    ctx->pc = 0x1a13f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a13f8: 0xffbf0030
    ctx->pc = 0x1a13f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a13fc: 0x7fb20020
    ctx->pc = 0x1a13fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1400: 0x7fb10010
    ctx->pc = 0x1a1400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1404: 0x7fb00000
    ctx->pc = 0x1a1404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1408: 0x8c830024
    ctx->pc = 0x1a1408u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a140c: 0x14620005
    ctx->pc = 0x1A140Cu;
    {
        const bool branch_taken_0x1a140c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A1410u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a140c) {
            ctx->pc = 0x1A1424u;
            goto label_1a1424;
        }
    }
    ctx->pc = 0x1A1414u;
    // 0x1a1414: 0x8e220014
    ctx->pc = 0x1a1414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a1418: 0xae220010
    ctx->pc = 0x1a1418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1a141c: 0x1000005e
    ctx->pc = 0x1A141Cu;
    {
        const bool branch_taken_0x1a141c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1420u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        if (branch_taken_0x1a141c) {
            ctx->pc = 0x1A1598u;
            goto label_1a1598;
        }
    }
    ctx->pc = 0x1A1424u;
label_1a1424:
    // 0x1a1424: 0x32100
    ctx->pc = 0x1a1424u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1428: 0x8e22000c
    ctx->pc = 0x1a1428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a142c: 0x8e230008
    ctx->pc = 0x1a142cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a1430: 0x10400033
    ctx->pc = 0x1A1430u;
    {
        const bool branch_taken_0x1a1430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1434u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x1a1430) {
            ctx->pc = 0x1A1500u;
            goto label_1a1500;
        }
    }
    ctx->pc = 0x1A1438u;
    // 0x1a1438: 0x8e240018
    ctx->pc = 0x1a1438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a143c: 0x8e230014
    ctx->pc = 0x1a143cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a1440: 0x8e050000
    ctx->pc = 0x1a1440u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1444: 0x2482ffff
    ctx->pc = 0x1a1444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a1448: 0x641821
    ctx->pc = 0x1a1448u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a144c: 0x401027
    ctx->pc = 0x1a144cu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1a1450: 0x2463ffff
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1454: 0x439024
    ctx->pc = 0x1a1454u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a1458: 0x1245001a
    ctx->pc = 0x1A1458u;
    {
        const bool branch_taken_0x1a1458 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 5));
        if (branch_taken_0x1a1458) {
            ctx->pc = 0x1A14C4u;
            goto label_1a14c4;
        }
    }
    ctx->pc = 0x1A1460u;
    // 0x1a1460: 0x8e060004
    ctx->pc = 0x1a1460u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1464: 0xc0696d0
    ctx->pc = 0x1A1464u;
    SET_GPR_U32(ctx, 31, 0x1A146Cu);
    ctx->pc = 0x1A1468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B40_0x1a5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A146Cu; }
    }
    if (ctx->pc != 0x1A146Cu) { return; }
    ctx->pc = 0x1A146Cu;
    // 0x1a146c: 0x10000015
    ctx->pc = 0x1A146Cu;
    {
        const bool branch_taken_0x1a146c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1470u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x1a146c) {
            ctx->pc = 0x1A14C4u;
            goto label_1a14c4;
        }
    }
    ctx->pc = 0x1A1474u;
label_1a1474:
    // 0x1a1474: 0x3063ffff
    ctx->pc = 0x1a1474u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1a1478: 0x8e220008
    ctx->pc = 0x1a1478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a147c: 0x32900
    ctx->pc = 0x1a147cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1480: 0x8e040000
    ctx->pc = 0x1a1480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1484: 0x8e030004
    ctx->pc = 0x1a1484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1488: 0x8e260018
    ctx->pc = 0x1a1488u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a148c: 0x458021
    ctx->pc = 0x1a148cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a1490: 0x831821
    ctx->pc = 0x1a1490u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1494: 0x8e050000
    ctx->pc = 0x1a1494u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1498: 0x24c2ffff
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a149c: 0xc31821
    ctx->pc = 0x1a149cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a14a0: 0x401027
    ctx->pc = 0x1a14a0u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1a14a4: 0x2463ffff
    ctx->pc = 0x1a14a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a14a8: 0x439024
    ctx->pc = 0x1a14a8u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a14ac: 0x12450005
    ctx->pc = 0x1A14ACu;
    {
        const bool branch_taken_0x1a14ac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 5));
        if (branch_taken_0x1a14ac) {
            ctx->pc = 0x1A14C4u;
            goto label_1a14c4;
        }
    }
    ctx->pc = 0x1A14B4u;
    // 0x1a14b4: 0x8e060004
    ctx->pc = 0x1a14b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a14b8: 0xc0696d0
    ctx->pc = 0x1A14B8u;
    SET_GPR_U32(ctx, 31, 0x1A14C0u);
    ctx->pc = 0x1A14BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A5B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B40_0x1a5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A14C0u; }
    }
    if (ctx->pc != 0x1A14C0u) { return; }
    ctx->pc = 0x1A14C0u;
    // 0x1a14c0: 0xae120000
    ctx->pc = 0x1a14c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1a14c4:
    // 0x1a14c4: 0x9603000e
    ctx->pc = 0x1a14c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1a14c8: 0x3402ffff
    ctx->pc = 0x1a14c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a14cc: 0x1462ffe9
    ctx->pc = 0x1A14CCu;
    {
        const bool branch_taken_0x1a14cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a14cc) {
            ctx->pc = 0x1A1474u;
            goto label_1a1474;
        }
    }
    ctx->pc = 0x1A14D4u;
    // 0x1a14d4: 0x8e040000
    ctx->pc = 0x1a14d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a14d8: 0x8e030004
    ctx->pc = 0x1a14d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a14dc: 0x8e250018
    ctx->pc = 0x1a14dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a14e0: 0x831821
    ctx->pc = 0x1a14e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a14e4: 0x24a2ffff
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a14e8: 0xa31821
    ctx->pc = 0x1a14e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a14ec: 0x401027
    ctx->pc = 0x1a14ecu;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1a14f0: 0x2463ffff
    ctx->pc = 0x1a14f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a14f4: 0x431024
    ctx->pc = 0x1a14f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a14f8: 0x10000026
    ctx->pc = 0x1A14F8u;
    {
        const bool branch_taken_0x1a14f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A14FCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1a14f8) {
            ctx->pc = 0x1A1594u;
            goto label_1a1594;
        }
    }
    ctx->pc = 0x1A1500u;
label_1a1500:
    // 0x1a1500: 0x8e230018
    ctx->pc = 0x1a1500u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a1504: 0x8e060004
    ctx->pc = 0x1a1504u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1508: 0x8e220014
    ctx->pc = 0x1a1508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1a150c: 0x8e050000
    ctx->pc = 0x1a150cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1510: 0x2463ffff
    ctx->pc = 0x1a1510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1514: 0x601827
    ctx->pc = 0x1a1514u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a1518: 0x461023
    ctx->pc = 0x1a1518u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a151c: 0x629024
    ctx->pc = 0x1a151cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1520: 0x12450016
    ctx->pc = 0x1A1520u;
    {
        const bool branch_taken_0x1a1520 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 5));
        ctx->pc = 0x1A1524u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1520) {
            ctx->pc = 0x1A157Cu;
            goto label_1a157c;
        }
    }
    ctx->pc = 0x1A1528u;
    // 0x1a1528: 0xc0696d0
    ctx->pc = 0x1A1528u;
    SET_GPR_U32(ctx, 31, 0x1A1530u);
    ctx->pc = 0x1A5B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B40_0x1a5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1530u; }
    }
    if (ctx->pc != 0x1A1530u) { return; }
    ctx->pc = 0x1A1530u;
    // 0x1a1530: 0x10000012
    ctx->pc = 0x1A1530u;
    {
        const bool branch_taken_0x1a1530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1534u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x1a1530) {
            ctx->pc = 0x1A157Cu;
            goto label_1a157c;
        }
    }
    ctx->pc = 0x1A1538u;
label_1a1538:
    // 0x1a1538: 0x8e020000
    ctx->pc = 0x1a1538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a153c: 0x3063ffff
    ctx->pc = 0x1a153cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1a1540: 0x8e240008
    ctx->pc = 0x1a1540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a1544: 0x32900
    ctx->pc = 0x1a1544u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1548: 0x8e230018
    ctx->pc = 0x1a1548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a154c: 0x858021
    ctx->pc = 0x1a154cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1550: 0x8e060004
    ctx->pc = 0x1a1550u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1554: 0x2463ffff
    ctx->pc = 0x1a1554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1558: 0x8e050000
    ctx->pc = 0x1a1558u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a155c: 0x601827
    ctx->pc = 0x1a155cu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x1a1560: 0x461023
    ctx->pc = 0x1a1560u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a1564: 0x629024
    ctx->pc = 0x1a1564u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1568: 0x12450004
    ctx->pc = 0x1A1568u;
    {
        const bool branch_taken_0x1a1568 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 5));
        ctx->pc = 0x1A156Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a1568) {
            ctx->pc = 0x1A157Cu;
            goto label_1a157c;
        }
    }
    ctx->pc = 0x1A1570u;
    // 0x1a1570: 0xc0696d0
    ctx->pc = 0x1A1570u;
    SET_GPR_U32(ctx, 31, 0x1A1578u);
    ctx->pc = 0x1A5B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B40_0x1a5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1578u; }
    }
    if (ctx->pc != 0x1A1578u) { return; }
    ctx->pc = 0x1A1578u;
    // 0x1a1578: 0xae120000
    ctx->pc = 0x1a1578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1a157c:
    // 0x1a157c: 0x9603000e
    ctx->pc = 0x1a157cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1a1580: 0x3402ffff
    ctx->pc = 0x1a1580u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1a1584: 0x1462ffec
    ctx->pc = 0x1A1584u;
    {
        const bool branch_taken_0x1a1584 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a1584) {
            ctx->pc = 0x1A1538u;
            goto label_1a1538;
        }
    }
    ctx->pc = 0x1A158Cu;
    // 0x1a158c: 0x8e020000
    ctx->pc = 0x1a158cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1590: 0xae220010
    ctx->pc = 0x1a1590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1a1594:
    // 0x1a1594: 0x8e220010
    ctx->pc = 0x1a1594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a1598:
    // 0x1a1598: 0xdfbf0030
    ctx->pc = 0x1a1598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a159c: 0x7bb20020
    ctx->pc = 0x1a159cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a15a0: 0x7bb10010
    ctx->pc = 0x1a15a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a15a4: 0x7bb00000
    ctx->pc = 0x1a15a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a15a8: 0x3e00008
    ctx->pc = 0x1A15A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A15ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1424u: goto label_1a1424;
            case 0x1A1474u: goto label_1a1474;
            case 0x1A14C4u: goto label_1a14c4;
            case 0x1A1500u: goto label_1a1500;
            case 0x1A1538u: goto label_1a1538;
            case 0x1A157Cu: goto label_1a157c;
            case 0x1A1594u: goto label_1a1594;
            case 0x1A1598u: goto label_1a1598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A15B0u;
}
