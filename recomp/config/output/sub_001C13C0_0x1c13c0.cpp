#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C13C0
// Address: 0x1c13c0 - 0x1c1578
void sub_001C13C0_0x1c13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c13c0u;

    // 0x1c13c0: 0x27bdffc0
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c13c4: 0x3c030023
    ctx->pc = 0x1c13c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1c13c8: 0xffbf0030
    ctx->pc = 0x1c13c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c13cc: 0x24635160
    ctx->pc = 0x1c13ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20832));
    // 0x1c13d0: 0x7fb20020
    ctx->pc = 0x1c13d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c13d4: 0x7fb10010
    ctx->pc = 0x1c13d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c13d8: 0x7fb00000
    ctx->pc = 0x1c13d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c13dc: 0x80802d
    ctx->pc = 0x1c13dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c13e0: 0x8c8400a0
    ctx->pc = 0x1c13e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1c13e4: 0x42080
    ctx->pc = 0x1c13e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c13e8: 0x641821
    ctx->pc = 0x1c13e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c13ec: 0x8c710000
    ctx->pc = 0x1c13ecu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c13f0: 0x8e23004c
    ctx->pc = 0x1c13f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1c13f4: 0x10600040
    ctx->pc = 0x1C13F4u;
    {
        const bool branch_taken_0x1c13f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c13f4) {
            ctx->pc = 0x1C14F8u;
            goto label_1c14f8;
        }
    }
    ctx->pc = 0x1C13FCu;
    // 0x1c13fc: 0x8e320054
    ctx->pc = 0x1c13fcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1c1400: 0xc042c56
    ctx->pc = 0x1C1400u;
    SET_GPR_U32(ctx, 31, 0x1C1408u);
    ctx->pc = 0x1C1404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1408u; }
    }
    if (ctx->pc != 0x1C1408u) { return; }
    ctx->pc = 0x1C1408u;
    // 0x1c1408: 0xa6420006
    ctx->pc = 0x1c1408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c140c: 0x3c050025
    ctx->pc = 0x1c140cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1c1410: 0x8e260000
    ctx->pc = 0x1c1410u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1414: 0x264400c0
    ctx->pc = 0x1c1414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c1418: 0x8e270004
    ctx->pc = 0x1c1418u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c141c: 0xc042a0c
    ctx->pc = 0x1C141Cu;
    SET_GPR_U32(ctx, 31, 0x1C1424u);
    ctx->pc = 0x1C1420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1648));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1424u; }
    }
    if (ctx->pc != 0x1C1424u) { return; }
    ctx->pc = 0x1C1424u;
    // 0x1c1424: 0x8e250020
    ctx->pc = 0x1c1424u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c1428: 0xc042bf0
    ctx->pc = 0x1C1428u;
    SET_GPR_U32(ctx, 31, 0x1C1430u);
    ctx->pc = 0x1C142Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 260));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1430u; }
    }
    if (ctx->pc != 0x1C1430u) { return; }
    ctx->pc = 0x1C1430u;
    // 0x1c1430: 0x8e250030
    ctx->pc = 0x1c1430u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c1434: 0xc042bf0
    ctx->pc = 0x1C1434u;
    SET_GPR_U32(ctx, 31, 0x1C143Cu);
    ctx->pc = 0x1C1438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 324));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C143Cu; }
    }
    if (ctx->pc != 0x1C143Cu) { return; }
    ctx->pc = 0x1C143Cu;
    // 0x1c143c: 0x8e250040
    ctx->pc = 0x1c143cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c1440: 0xc042bf0
    ctx->pc = 0x1C1440u;
    SET_GPR_U32(ctx, 31, 0x1C1448u);
    ctx->pc = 0x1C1444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 388));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1448u; }
    }
    if (ctx->pc != 0x1C1448u) { return; }
    ctx->pc = 0x1C1448u;
    // 0x1c1448: 0x8e0400a0
    ctx->pc = 0x1c1448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1c144c: 0x24030001
    ctx->pc = 0x1c144cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1450: 0x10830015
    ctx->pc = 0x1C1450u;
    {
        const bool branch_taken_0x1c1450 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C1454u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x1c1450) {
            ctx->pc = 0x1C14A8u;
            goto label_1c14a8;
        }
    }
    ctx->pc = 0x1C1458u;
    // 0x1c1458: 0x10800003
    ctx->pc = 0x1C1458u;
    {
        const bool branch_taken_0x1c1458 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C145Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
        if (branch_taken_0x1c1458) {
            ctx->pc = 0x1C1468u;
            goto label_1c1468;
        }
    }
    ctx->pc = 0x1C1460u;
    // 0x1c1460: 0x10000026
    ctx->pc = 0x1C1460u;
    {
        const bool branch_taken_0x1c1460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C1464u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1c1460) {
            ctx->pc = 0x1C14FCu;
            goto label_1c14fc;
        }
    }
    ctx->pc = 0x1C1468u;
label_1c1468:
    // 0x1c1468: 0x26440050
    ctx->pc = 0x1c1468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 80));
    // 0x1c146c: 0x24a551a0
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20896));
    // 0x1c1470: 0xc041eac
    ctx->pc = 0x1C1470u;
    SET_GPR_U32(ctx, 31, 0x1C1478u);
    ctx->pc = 0x1C1474u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1478u; }
    }
    if (ctx->pc != 0x1C1478u) { return; }
    ctx->pc = 0x1C1478u;
    // 0x1c1478: 0x3c050023
    ctx->pc = 0x1c1478u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1c147c: 0x26440080
    ctx->pc = 0x1c147cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
    // 0x1c1480: 0x24a551d0
    ctx->pc = 0x1c1480u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20944));
    // 0x1c1484: 0xc041eac
    ctx->pc = 0x1C1484u;
    SET_GPR_U32(ctx, 31, 0x1C148Cu);
    ctx->pc = 0x1C1488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C148Cu; }
    }
    if (ctx->pc != 0x1C148Cu) { return; }
    ctx->pc = 0x1C148Cu;
    // 0x1c148c: 0x3c050023
    ctx->pc = 0x1c148cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1c1490: 0x264400b0
    ctx->pc = 0x1c1490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 176));
    // 0x1c1494: 0x24a55200
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20992));
    // 0x1c1498: 0xc041eac
    ctx->pc = 0x1C1498u;
    SET_GPR_U32(ctx, 31, 0x1C14A0u);
    ctx->pc = 0x1C149Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14A0u; }
    }
    if (ctx->pc != 0x1C14A0u) { return; }
    ctx->pc = 0x1C14A0u;
    // 0x1c14a0: 0x10000015
    ctx->pc = 0x1C14A0u;
    {
        const bool branch_taken_0x1c14a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c14a0) {
            ctx->pc = 0x1C14F8u;
            goto label_1c14f8;
        }
    }
    ctx->pc = 0x1C14A8u;
label_1c14a8:
    // 0x1c14a8: 0x3c050023
    ctx->pc = 0x1c14a8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1c14ac: 0x26440010
    ctx->pc = 0x1c14acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c14b0: 0xae46000c
    ctx->pc = 0x1c14b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
    // 0x1c14b4: 0xc041eac
    ctx->pc = 0x1C14B4u;
    SET_GPR_U32(ctx, 31, 0x1C14BCu);
    ctx->pc = 0x1C14B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 21008));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14BCu; }
    }
    if (ctx->pc != 0x1C14BCu) { return; }
    ctx->pc = 0x1C14BCu;
    // 0x1c14bc: 0x3c050023
    ctx->pc = 0x1c14bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1c14c0: 0x26440050
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 80));
    // 0x1c14c4: 0x24a55250
    ctx->pc = 0x1c14c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 21072));
    // 0x1c14c8: 0xc041eac
    ctx->pc = 0x1C14C8u;
    SET_GPR_U32(ctx, 31, 0x1C14D0u);
    ctx->pc = 0x1C14CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14D0u; }
    }
    if (ctx->pc != 0x1C14D0u) { return; }
    ctx->pc = 0x1C14D0u;
    // 0x1c14d0: 0x3c050023
    ctx->pc = 0x1c14d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1c14d4: 0x26440080
    ctx->pc = 0x1c14d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
    // 0x1c14d8: 0x24a55280
    ctx->pc = 0x1c14d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 21120));
    // 0x1c14dc: 0xc041eac
    ctx->pc = 0x1C14DCu;
    SET_GPR_U32(ctx, 31, 0x1C14E4u);
    ctx->pc = 0x1C14E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14E4u; }
    }
    if (ctx->pc != 0x1C14E4u) { return; }
    ctx->pc = 0x1C14E4u;
    // 0x1c14e4: 0x3c050023
    ctx->pc = 0x1c14e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1c14e8: 0x264400b0
    ctx->pc = 0x1c14e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 176));
    // 0x1c14ec: 0x24a552b0
    ctx->pc = 0x1c14ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 21168));
    // 0x1c14f0: 0xc041eac
    ctx->pc = 0x1C14F0u;
    SET_GPR_U32(ctx, 31, 0x1C14F8u);
    ctx->pc = 0x1C14F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C14F8u; }
    }
    if (ctx->pc != 0x1C14F8u) { return; }
    ctx->pc = 0x1C14F8u;
label_1c14f8:
    // 0x1c14f8: 0xdfbf0030
    ctx->pc = 0x1c14f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c14fc:
    // 0x1c14fc: 0x7bb20020
    ctx->pc = 0x1c14fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1500: 0x7bb10010
    ctx->pc = 0x1c1500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1504: 0x7bb00000
    ctx->pc = 0x1c1504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1508: 0x3e00008
    ctx->pc = 0x1C1508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C150Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1468u: goto label_1c1468;
            case 0x1C14A8u: goto label_1c14a8;
            case 0x1C14F8u: goto label_1c14f8;
            case 0x1C14FCu: goto label_1c14fc;
            case 0x1C1530u: goto label_1c1530;
            case 0x1C1548u: goto label_1c1548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1510u;
    // 0x1c1510: 0x27bdffd0
    ctx->pc = 0x1c1510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1514: 0xffbf0020
    ctx->pc = 0x1c1514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1518: 0x7fb10010
    ctx->pc = 0x1c1518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c151c: 0x7fb00000
    ctx->pc = 0x1c151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1520: 0x882d
    ctx->pc = 0x1c1520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1524: 0x3c100032
    ctx->pc = 0x1c1524u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x1c1528: 0x10000007
    ctx->pc = 0x1C1528u;
    {
        const bool branch_taken_0x1c1528 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C152Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 27728));
        if (branch_taken_0x1c1528) {
            ctx->pc = 0x1C1548u;
            goto label_1c1548;
        }
    }
    ctx->pc = 0x1C1530u;
label_1c1530:
    // 0x1c1530: 0x111880
    ctx->pc = 0x1c1530u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c1534: 0x24426c40
    ctx->pc = 0x1c1534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27712));
    // 0x1c1538: 0x431021
    ctx->pc = 0x1c1538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c153c: 0xc06038a
    ctx->pc = 0x1C153Cu;
    SET_GPR_U32(ctx, 31, 0x1C1544u);
    ctx->pc = 0x1C1540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x180E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180E28_0x180e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1544u; }
    }
    if (ctx->pc != 0x1C1544u) { return; }
    ctx->pc = 0x1C1544u;
    // 0x1c1544: 0x26310001
    ctx->pc = 0x1c1544u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1c1548:
    // 0x1c1548: 0x8e020010
    ctx->pc = 0x1c1548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c154c: 0x222102a
    ctx->pc = 0x1c154cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x1c1550: 0x1440fff7
    ctx->pc = 0x1C1550u;
    {
        const bool branch_taken_0x1c1550 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C1554u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x1c1550) {
            ctx->pc = 0x1C1530u;
            goto label_1c1530;
        }
    }
    ctx->pc = 0x1C1558u;
    // 0x1c1558: 0xc060334
    ctx->pc = 0x1C1558u;
    SET_GPR_U32(ctx, 31, 0x1C1560u);
    ctx->pc = 0x180CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1560u; }
    }
    if (ctx->pc != 0x1C1560u) { return; }
    ctx->pc = 0x1C1560u;
    // 0x1c1560: 0xdfbf0020
    ctx->pc = 0x1c1560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1564: 0x7bb10010
    ctx->pc = 0x1c1564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1568: 0x7bb00000
    ctx->pc = 0x1c1568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c156c: 0x3e00008
    ctx->pc = 0x1C156Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1570u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1468u: goto label_1c1468;
            case 0x1C14A8u: goto label_1c14a8;
            case 0x1C14F8u: goto label_1c14f8;
            case 0x1C14FCu: goto label_1c14fc;
            case 0x1C1530u: goto label_1c1530;
            case 0x1C1548u: goto label_1c1548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1574u;
    // 0x1c1574: 0x0
    ctx->pc = 0x1c1574u;
    // NOP
}
