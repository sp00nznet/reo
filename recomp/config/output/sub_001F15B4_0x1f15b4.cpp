#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F15B4
// Address: 0x1f15b4 - 0x1f1688
void sub_001F15B4_0x1f15b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f15b4u;

label_1f15b4:
    // 0x1f15b4: 0x27bdffd0
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f15b8:
    // 0x1f15b8: 0xffbe0020
    ctx->pc = 0x1f15b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
label_1f15bc:
    // 0x1f15bc: 0xffbf0028
    ctx->pc = 0x1f15bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1f15c0:
    // 0x1f15c0: 0x3a0f02d
    ctx->pc = 0x1f15c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f15c4:
    // 0x1f15c4: 0xafc40000
    ctx->pc = 0x1f15c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1f15c8:
    // 0x1f15c8: 0xafc50004
    ctx->pc = 0x1f15c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_1f15cc:
    // 0x1f15cc: 0xafc60008
    ctx->pc = 0x1f15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_1f15d0:
    // 0x1f15d0: 0xafc7000c
    ctx->pc = 0x1f15d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_1f15d4:
    // 0x1f15d4: 0xafc00010
    ctx->pc = 0x1f15d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_1f15d8:
    // 0x1f15d8: 0x8fc20004
    ctx->pc = 0x1f15d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f15dc:
    // 0x1f15dc: 0xac400000
    ctx->pc = 0x1f15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f15e0:
    // 0x1f15e0: 0x8fc20000
    ctx->pc = 0x1f15e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f15e4:
    // 0x1f15e4: 0x8c420000
    ctx->pc = 0x1f15e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f15e8:
    // 0x1f15e8: 0xafc20014
    ctx->pc = 0x1f15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_1f15ec:
    // 0x1f15ec: 0x8fc30014
    ctx->pc = 0x1f15ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_1f15f0:
    // 0x1f15f0: 0x8fc20000
    ctx->pc = 0x1f15f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f15f4:
    // 0x1f15f4: 0x14620003
label_1f15f8:
    if (ctx->pc == 0x1F15F8u) {
        ctx->pc = 0x1F15FCu;
        goto label_1f15fc;
    }
    ctx->pc = 0x1F15F4u;
    {
        const bool branch_taken_0x1f15f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f15f4) {
            ctx->pc = 0x1F1604u;
            goto label_1f1604;
        }
    }
    ctx->pc = 0x1F15FCu;
label_1f15fc:
    // 0x1f15fc: 0x1000001b
label_1f1600:
    if (ctx->pc == 0x1F1600u) {
        ctx->pc = 0x1F1604u;
        goto label_1f1604;
    }
    ctx->pc = 0x1F15FCu;
    {
        const bool branch_taken_0x1f15fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f15fc) {
            ctx->pc = 0x1F166Cu;
            goto label_1f166c;
        }
    }
    ctx->pc = 0x1F1604u;
label_1f1604:
    // 0x1f1604: 0x8fc20008
    ctx->pc = 0x1f1604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1f1608:
    // 0x1f1608: 0x8fc40014
    ctx->pc = 0x1f1608u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_1f160c:
    // 0x1f160c: 0x8fc5000c
    ctx->pc = 0x1f160cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_1f1610:
    // 0x1f1610: 0x40f809
label_1f1614:
    if (ctx->pc == 0x1F1614u) {
        ctx->pc = 0x1F1618u;
        goto label_1f1618;
    }
    ctx->pc = 0x1F1610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1618u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F15B4u: goto label_1f15b4;
            case 0x1F15B8u: goto label_1f15b8;
            case 0x1F15BCu: goto label_1f15bc;
            case 0x1F15C0u: goto label_1f15c0;
            case 0x1F15C4u: goto label_1f15c4;
            case 0x1F15C8u: goto label_1f15c8;
            case 0x1F15CCu: goto label_1f15cc;
            case 0x1F15D0u: goto label_1f15d0;
            case 0x1F15D4u: goto label_1f15d4;
            case 0x1F15D8u: goto label_1f15d8;
            case 0x1F15DCu: goto label_1f15dc;
            case 0x1F15E0u: goto label_1f15e0;
            case 0x1F15E4u: goto label_1f15e4;
            case 0x1F15E8u: goto label_1f15e8;
            case 0x1F15ECu: goto label_1f15ec;
            case 0x1F15F0u: goto label_1f15f0;
            case 0x1F15F4u: goto label_1f15f4;
            case 0x1F15F8u: goto label_1f15f8;
            case 0x1F15FCu: goto label_1f15fc;
            case 0x1F1600u: goto label_1f1600;
            case 0x1F1604u: goto label_1f1604;
            case 0x1F1608u: goto label_1f1608;
            case 0x1F160Cu: goto label_1f160c;
            case 0x1F1610u: goto label_1f1610;
            case 0x1F1614u: goto label_1f1614;
            case 0x1F1618u: goto label_1f1618;
            case 0x1F161Cu: goto label_1f161c;
            case 0x1F1620u: goto label_1f1620;
            case 0x1F1624u: goto label_1f1624;
            case 0x1F1628u: goto label_1f1628;
            case 0x1F162Cu: goto label_1f162c;
            case 0x1F1630u: goto label_1f1630;
            case 0x1F1634u: goto label_1f1634;
            case 0x1F1638u: goto label_1f1638;
            case 0x1F163Cu: goto label_1f163c;
            case 0x1F1640u: goto label_1f1640;
            case 0x1F1644u: goto label_1f1644;
            case 0x1F1648u: goto label_1f1648;
            case 0x1F164Cu: goto label_1f164c;
            case 0x1F1650u: goto label_1f1650;
            case 0x1F1654u: goto label_1f1654;
            case 0x1F1658u: goto label_1f1658;
            case 0x1F165Cu: goto label_1f165c;
            case 0x1F1660u: goto label_1f1660;
            case 0x1F1664u: goto label_1f1664;
            case 0x1F1668u: goto label_1f1668;
            case 0x1F166Cu: goto label_1f166c;
            case 0x1F1670u: goto label_1f1670;
            case 0x1F1674u: goto label_1f1674;
            case 0x1F1678u: goto label_1f1678;
            case 0x1F167Cu: goto label_1f167c;
            case 0x1F1680u: goto label_1f1680;
            case 0x1F1684u: goto label_1f1684;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1618u; }
            if (ctx->pc != 0x1F1618u) { return; }
        }
    }
    ctx->pc = 0x1F1618u;
label_1f1618:
    // 0x1f1618: 0xafc20010
    ctx->pc = 0x1f1618u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_1f161c:
    // 0x1f161c: 0x8fc20010
    ctx->pc = 0x1f161cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1f1620:
    // 0x1f1620: 0x18400007
label_1f1624:
    if (ctx->pc == 0x1F1624u) {
        ctx->pc = 0x1F1628u;
        goto label_1f1628;
    }
    ctx->pc = 0x1F1620u;
    {
        const bool branch_taken_0x1f1620 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f1620) {
            ctx->pc = 0x1F1640u;
            goto label_1f1640;
        }
    }
    ctx->pc = 0x1F1628u;
label_1f1628:
    // 0x1f1628: 0x8fc30004
    ctx->pc = 0x1f1628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f162c:
    // 0x1f162c: 0x8fc20014
    ctx->pc = 0x1f162cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_1f1630:
    // 0x1f1630: 0xac620000
    ctx->pc = 0x1f1630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f1634:
    // 0x1f1634: 0x102d
    ctx->pc = 0x1f1634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1638:
    // 0x1f1638: 0x1000000d
label_1f163c:
    if (ctx->pc == 0x1F163Cu) {
        ctx->pc = 0x1F1640u;
        goto label_1f1640;
    }
    ctx->pc = 0x1F1638u;
    {
        const bool branch_taken_0x1f1638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1638) {
            ctx->pc = 0x1F1670u;
            goto label_1f1670;
        }
    }
    ctx->pc = 0x1F1640u;
label_1f1640:
    // 0x1f1640: 0x8fc20010
    ctx->pc = 0x1f1640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1f1644:
    // 0x1f1644: 0x4410004
label_1f1648:
    if (ctx->pc == 0x1F1648u) {
        ctx->pc = 0x1F164Cu;
        goto label_1f164c;
    }
    ctx->pc = 0x1F1644u;
    {
        const bool branch_taken_0x1f1644 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f1644) {
            ctx->pc = 0x1F1658u;
            goto label_1f1658;
        }
    }
    ctx->pc = 0x1F164Cu;
label_1f164c:
    // 0x1f164c: 0x8fc20010
    ctx->pc = 0x1f164cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1f1650:
    // 0x1f1650: 0x10000007
label_1f1654:
    if (ctx->pc == 0x1F1654u) {
        ctx->pc = 0x1F1658u;
        goto label_1f1658;
    }
    ctx->pc = 0x1F1650u;
    {
        const bool branch_taken_0x1f1650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1650) {
            ctx->pc = 0x1F1670u;
            goto label_1f1670;
        }
    }
    ctx->pc = 0x1F1658u;
label_1f1658:
    // 0x1f1658: 0x8fc20014
    ctx->pc = 0x1f1658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_1f165c:
    // 0x1f165c: 0x8c420000
    ctx->pc = 0x1f165cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1660:
    // 0x1f1660: 0xafc20014
    ctx->pc = 0x1f1660u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_1f1664:
    // 0x1f1664: 0x1000ffe1
label_1f1668:
    if (ctx->pc == 0x1F1668u) {
        ctx->pc = 0x1F166Cu;
        goto label_1f166c;
    }
    ctx->pc = 0x1F1664u;
    {
        const bool branch_taken_0x1f1664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f1664) {
            ctx->pc = 0x1F15ECu;
            goto label_1f15ec;
        }
    }
    ctx->pc = 0x1F166Cu;
label_1f166c:
    // 0x1f166c: 0x8fc20010
    ctx->pc = 0x1f166cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_1f1670:
    // 0x1f1670: 0x3c0e82d
    ctx->pc = 0x1f1670u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f1674:
    // 0x1f1674: 0xdfbe0020
    ctx->pc = 0x1f1674u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1678:
    // 0x1f1678: 0xdfbf0028
    ctx->pc = 0x1f1678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f167c:
    // 0x1f167c: 0x27bd0030
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
label_1f1680:
    // 0x1f1680: 0x3e00008
label_1f1684:
    if (ctx->pc == 0x1F1684u) {
        ctx->pc = 0x1F1688u;
        goto label_fallthrough_0x1f1680;
    }
    ctx->pc = 0x1F1680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F15B4u: goto label_1f15b4;
            case 0x1F15B8u: goto label_1f15b8;
            case 0x1F15BCu: goto label_1f15bc;
            case 0x1F15C0u: goto label_1f15c0;
            case 0x1F15C4u: goto label_1f15c4;
            case 0x1F15C8u: goto label_1f15c8;
            case 0x1F15CCu: goto label_1f15cc;
            case 0x1F15D0u: goto label_1f15d0;
            case 0x1F15D4u: goto label_1f15d4;
            case 0x1F15D8u: goto label_1f15d8;
            case 0x1F15DCu: goto label_1f15dc;
            case 0x1F15E0u: goto label_1f15e0;
            case 0x1F15E4u: goto label_1f15e4;
            case 0x1F15E8u: goto label_1f15e8;
            case 0x1F15ECu: goto label_1f15ec;
            case 0x1F15F0u: goto label_1f15f0;
            case 0x1F15F4u: goto label_1f15f4;
            case 0x1F15F8u: goto label_1f15f8;
            case 0x1F15FCu: goto label_1f15fc;
            case 0x1F1600u: goto label_1f1600;
            case 0x1F1604u: goto label_1f1604;
            case 0x1F1608u: goto label_1f1608;
            case 0x1F160Cu: goto label_1f160c;
            case 0x1F1610u: goto label_1f1610;
            case 0x1F1614u: goto label_1f1614;
            case 0x1F1618u: goto label_1f1618;
            case 0x1F161Cu: goto label_1f161c;
            case 0x1F1620u: goto label_1f1620;
            case 0x1F1624u: goto label_1f1624;
            case 0x1F1628u: goto label_1f1628;
            case 0x1F162Cu: goto label_1f162c;
            case 0x1F1630u: goto label_1f1630;
            case 0x1F1634u: goto label_1f1634;
            case 0x1F1638u: goto label_1f1638;
            case 0x1F163Cu: goto label_1f163c;
            case 0x1F1640u: goto label_1f1640;
            case 0x1F1644u: goto label_1f1644;
            case 0x1F1648u: goto label_1f1648;
            case 0x1F164Cu: goto label_1f164c;
            case 0x1F1650u: goto label_1f1650;
            case 0x1F1654u: goto label_1f1654;
            case 0x1F1658u: goto label_1f1658;
            case 0x1F165Cu: goto label_1f165c;
            case 0x1F1660u: goto label_1f1660;
            case 0x1F1664u: goto label_1f1664;
            case 0x1F1668u: goto label_1f1668;
            case 0x1F166Cu: goto label_1f166c;
            case 0x1F1670u: goto label_1f1670;
            case 0x1F1674u: goto label_1f1674;
            case 0x1F1678u: goto label_1f1678;
            case 0x1F167Cu: goto label_1f167c;
            case 0x1F1680u: goto label_1f1680;
            case 0x1F1684u: goto label_1f1684;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f1680:
    ctx->pc = 0x1F1688u;
}
