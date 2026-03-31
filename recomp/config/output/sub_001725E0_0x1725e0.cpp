#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001725E0
// Address: 0x1725e0 - 0x1726f8
void sub_001725E0_0x1725e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1725e0u;

label_1725e0:
    // 0x1725e0: 0x27bdffe0
    ctx->pc = 0x1725e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1725e4:
    // 0x1725e4: 0xffb10008
    ctx->pc = 0x1725e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1725e8:
    // 0x1725e8: 0x80882d
    ctx->pc = 0x1725e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1725ec:
    // 0x1725ec: 0xffb00000
    ctx->pc = 0x1725ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1725f0:
    // 0x1725f0: 0xffb20010
    ctx->pc = 0x1725f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1725f4:
    // 0x1725f4: 0xffbf0018
    ctx->pc = 0x1725f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1725f8:
    // 0x1725f8: 0x8e300048
    ctx->pc = 0x1725f8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1725fc:
    // 0x1725fc: 0x2602ffff
    ctx->pc = 0x1725fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
label_172600:
    // 0x172600: 0x2c420004
    ctx->pc = 0x172600u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
label_172604:
    // 0x172604: 0x50400036
label_172608:
    if (ctx->pc == 0x172608u) {
        ctx->pc = 0x172608u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x17260Cu;
        goto label_17260c;
    }
    ctx->pc = 0x172604u;
    {
        const bool branch_taken_0x172604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172604) {
            ctx->pc = 0x172608u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1726E0u;
            goto label_1726e0;
        }
    }
    ctx->pc = 0x17260Cu;
label_17260c:
    // 0x17260c: 0x8e220044
    ctx->pc = 0x17260cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_172610:
    // 0x172610: 0x50400033
label_172614:
    if (ctx->pc == 0x172614u) {
        ctx->pc = 0x172614u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x172618u;
        goto label_172618;
    }
    ctx->pc = 0x172610u;
    {
        const bool branch_taken_0x172610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172610) {
            ctx->pc = 0x172614u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1726E0u;
            goto label_1726e0;
        }
    }
    ctx->pc = 0x172618u;
label_172618:
    // 0x172618: 0xae200044
    ctx->pc = 0x172618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_17261c:
    // 0x17261c: 0xc05fa1c
label_172620:
    if (ctx->pc == 0x172620u) {
        ctx->pc = 0x172624u;
        goto label_172624;
    }
    ctx->pc = 0x17261Cu;
    SET_GPR_U32(ctx, 31, 0x172624u);
    ctx->pc = 0x17E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E870_0x17e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172624u; }
    }
    if (ctx->pc != 0x172624u) { return; }
    ctx->pc = 0x172624u;
label_172624:
    // 0x172624: 0x40902d
    ctx->pc = 0x172624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172628:
    // 0x172628: 0x2602fffe
    ctx->pc = 0x172628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
label_17262c:
    // 0x17262c: 0x2c420003
    ctx->pc = 0x17262cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
label_172630:
    // 0x172630: 0x50400004
label_172634:
    if (ctx->pc == 0x172634u) {
        ctx->pc = 0x172634u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x172638u;
        goto label_172638;
    }
    ctx->pc = 0x172630u;
    {
        const bool branch_taken_0x172630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172630) {
            ctx->pc = 0x172634u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->pc = 0x172644u;
            goto label_172644;
        }
    }
    ctx->pc = 0x172638u;
label_172638:
    // 0x172638: 0xc05c9be
label_17263c:
    if (ctx->pc == 0x17263Cu) {
        ctx->pc = 0x17263Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172640u;
        goto label_172640;
    }
    ctx->pc = 0x172638u;
    SET_GPR_U32(ctx, 31, 0x172640u);
    ctx->pc = 0x17263Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1726F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001726F8_0x1726f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172640u; }
    }
    if (ctx->pc != 0x172640u) { return; }
    ctx->pc = 0x172640u;
label_172640:
    // 0x172640: 0x8e300048
    ctx->pc = 0x172640u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_172644:
    // 0x172644: 0x2e020007
    ctx->pc = 0x172644u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 7));
label_172648:
    // 0x172648: 0x5040001b
label_17264c:
    if (ctx->pc == 0x17264Cu) {
        ctx->pc = 0x17264Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
        ctx->pc = 0x172650u;
        goto label_172650;
    }
    ctx->pc = 0x172648u;
    {
        const bool branch_taken_0x172648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x172648) {
            ctx->pc = 0x17264Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
            ctx->pc = 0x1726B8u;
            goto label_1726b8;
        }
    }
    ctx->pc = 0x172650u;
label_172650:
    // 0x172650: 0x101080
    ctx->pc = 0x172650u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_172654:
    // 0x172654: 0x3c030024
    ctx->pc = 0x172654u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_172658:
    // 0x172658: 0x621821
    ctx->pc = 0x172658u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17265c:
    // 0x17265c: 0x8c630ad0
    ctx->pc = 0x17265cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 2768)));
label_172660:
    // 0x172660: 0x600008
label_172664:
    if (ctx->pc == 0x172664u) {
        ctx->pc = 0x172668u;
        goto label_172668;
    }
    ctx->pc = 0x172660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1725E0u: goto label_1725e0;
            case 0x1725E4u: goto label_1725e4;
            case 0x1725E8u: goto label_1725e8;
            case 0x1725ECu: goto label_1725ec;
            case 0x1725F0u: goto label_1725f0;
            case 0x1725F4u: goto label_1725f4;
            case 0x1725F8u: goto label_1725f8;
            case 0x1725FCu: goto label_1725fc;
            case 0x172600u: goto label_172600;
            case 0x172604u: goto label_172604;
            case 0x172608u: goto label_172608;
            case 0x17260Cu: goto label_17260c;
            case 0x172610u: goto label_172610;
            case 0x172614u: goto label_172614;
            case 0x172618u: goto label_172618;
            case 0x17261Cu: goto label_17261c;
            case 0x172620u: goto label_172620;
            case 0x172624u: goto label_172624;
            case 0x172628u: goto label_172628;
            case 0x17262Cu: goto label_17262c;
            case 0x172630u: goto label_172630;
            case 0x172634u: goto label_172634;
            case 0x172638u: goto label_172638;
            case 0x17263Cu: goto label_17263c;
            case 0x172640u: goto label_172640;
            case 0x172644u: goto label_172644;
            case 0x172648u: goto label_172648;
            case 0x17264Cu: goto label_17264c;
            case 0x172650u: goto label_172650;
            case 0x172654u: goto label_172654;
            case 0x172658u: goto label_172658;
            case 0x17265Cu: goto label_17265c;
            case 0x172660u: goto label_172660;
            case 0x172664u: goto label_172664;
            case 0x172668u: goto label_172668;
            case 0x17266Cu: goto label_17266c;
            case 0x172670u: goto label_172670;
            case 0x172674u: goto label_172674;
            case 0x172678u: goto label_172678;
            case 0x17267Cu: goto label_17267c;
            case 0x172680u: goto label_172680;
            case 0x172684u: goto label_172684;
            case 0x172688u: goto label_172688;
            case 0x17268Cu: goto label_17268c;
            case 0x172690u: goto label_172690;
            case 0x172694u: goto label_172694;
            case 0x172698u: goto label_172698;
            case 0x17269Cu: goto label_17269c;
            case 0x1726A0u: goto label_1726a0;
            case 0x1726A4u: goto label_1726a4;
            case 0x1726A8u: goto label_1726a8;
            case 0x1726ACu: goto label_1726ac;
            case 0x1726B0u: goto label_1726b0;
            case 0x1726B4u: goto label_1726b4;
            case 0x1726B8u: goto label_1726b8;
            case 0x1726BCu: goto label_1726bc;
            case 0x1726C0u: goto label_1726c0;
            case 0x1726C4u: goto label_1726c4;
            case 0x1726C8u: goto label_1726c8;
            case 0x1726CCu: goto label_1726cc;
            case 0x1726D0u: goto label_1726d0;
            case 0x1726D4u: goto label_1726d4;
            case 0x1726D8u: goto label_1726d8;
            case 0x1726DCu: goto label_1726dc;
            case 0x1726E0u: goto label_1726e0;
            case 0x1726E4u: goto label_1726e4;
            case 0x1726E8u: goto label_1726e8;
            case 0x1726ECu: goto label_1726ec;
            case 0x1726F0u: goto label_1726f0;
            case 0x1726F4u: goto label_1726f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172668u;
label_172668:
    // 0x172668: 0xc05c9ce
label_17266c:
    if (ctx->pc == 0x17266Cu) {
        ctx->pc = 0x17266Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172670u;
        goto label_172670;
    }
    ctx->pc = 0x172668u;
    SET_GPR_U32(ctx, 31, 0x172670u);
    ctx->pc = 0x17266Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172738_0x172738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172670u; }
    }
    if (ctx->pc != 0x172670u) { return; }
    ctx->pc = 0x172670u;
label_172670:
    // 0x172670: 0x10000010
label_172674:
    if (ctx->pc == 0x172674u) {
        ctx->pc = 0x172674u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172678u;
        goto label_172678;
    }
    ctx->pc = 0x172670u;
    {
        const bool branch_taken_0x172670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172674u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172670) {
            ctx->pc = 0x1726B4u;
            goto label_1726b4;
        }
    }
    ctx->pc = 0x172678u;
label_172678:
    // 0x172678: 0xc05c9da
label_17267c:
    if (ctx->pc == 0x17267Cu) {
        ctx->pc = 0x17267Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172680u;
        goto label_172680;
    }
    ctx->pc = 0x172678u;
    SET_GPR_U32(ctx, 31, 0x172680u);
    ctx->pc = 0x17267Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172768u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172768_0x172768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172680u; }
    }
    if (ctx->pc != 0x172680u) { return; }
    ctx->pc = 0x172680u;
label_172680:
    // 0x172680: 0x1000000c
label_172684:
    if (ctx->pc == 0x172684u) {
        ctx->pc = 0x172684u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172688u;
        goto label_172688;
    }
    ctx->pc = 0x172680u;
    {
        const bool branch_taken_0x172680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172684u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172680) {
            ctx->pc = 0x1726B4u;
            goto label_1726b4;
        }
    }
    ctx->pc = 0x172688u;
label_172688:
    // 0x172688: 0xc05cab2
label_17268c:
    if (ctx->pc == 0x17268Cu) {
        ctx->pc = 0x17268Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172690u;
        goto label_172690;
    }
    ctx->pc = 0x172688u;
    SET_GPR_U32(ctx, 31, 0x172690u);
    ctx->pc = 0x17268Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172AC8_0x172ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172690u; }
    }
    if (ctx->pc != 0x172690u) { return; }
    ctx->pc = 0x172690u;
label_172690:
    // 0x172690: 0x10000008
label_172694:
    if (ctx->pc == 0x172694u) {
        ctx->pc = 0x172694u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172698u;
        goto label_172698;
    }
    ctx->pc = 0x172690u;
    {
        const bool branch_taken_0x172690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x172694u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172690) {
            ctx->pc = 0x1726B4u;
            goto label_1726b4;
        }
    }
    ctx->pc = 0x172698u;
label_172698:
    // 0x172698: 0xc05cada
label_17269c:
    if (ctx->pc == 0x17269Cu) {
        ctx->pc = 0x17269Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726A0u;
        goto label_1726a0;
    }
    ctx->pc = 0x172698u;
    SET_GPR_U32(ctx, 31, 0x1726A0u);
    ctx->pc = 0x17269Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172B68_0x172b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726A0u; }
    }
    if (ctx->pc != 0x1726A0u) { return; }
    ctx->pc = 0x1726A0u;
label_1726a0:
    // 0x1726a0: 0x10000004
label_1726a4:
    if (ctx->pc == 0x1726A4u) {
        ctx->pc = 0x1726A4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726A8u;
        goto label_1726a8;
    }
    ctx->pc = 0x1726A0u;
    {
        const bool branch_taken_0x1726a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1726A4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1726a0) {
            ctx->pc = 0x1726B4u;
            goto label_1726b4;
        }
    }
    ctx->pc = 0x1726A8u;
label_1726a8:
    // 0x1726a8: 0xc05caf6
label_1726ac:
    if (ctx->pc == 0x1726ACu) {
        ctx->pc = 0x1726ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726B0u;
        goto label_1726b0;
    }
    ctx->pc = 0x1726A8u;
    SET_GPR_U32(ctx, 31, 0x1726B0u);
    ctx->pc = 0x1726ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172BD8_0x172bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726B0u; }
    }
    if (ctx->pc != 0x1726B0u) { return; }
    ctx->pc = 0x1726B0u;
label_1726b0:
    // 0x1726b0: 0x40802d
    ctx->pc = 0x1726b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1726b4:
    // 0x1726b4: 0xae300048
    ctx->pc = 0x1726b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_1726b8:
    // 0x1726b8: 0xc05fa1c
label_1726bc:
    if (ctx->pc == 0x1726BCu) {
        ctx->pc = 0x1726BCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 11104));
        ctx->pc = 0x1726C0u;
        goto label_1726c0;
    }
    ctx->pc = 0x1726B8u;
    SET_GPR_U32(ctx, 31, 0x1726C0u);
    ctx->pc = 0x1726BCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 11104));
    ctx->pc = 0x17E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E870_0x17e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726C0u; }
    }
    if (ctx->pc != 0x1726C0u) { return; }
    ctx->pc = 0x1726C0u;
label_1726c0:
    // 0x1726c0: 0x200202d
    ctx->pc = 0x1726c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1726c4:
    // 0x1726c4: 0x52282f
    ctx->pc = 0x1726c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
label_1726c8:
    // 0x1726c8: 0xdfb20010
    ctx->pc = 0x1726c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1726cc:
    // 0x1726cc: 0xdfb00000
    ctx->pc = 0x1726ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1726d0:
    // 0x1726d0: 0xdfb10008
    ctx->pc = 0x1726d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1726d4:
    // 0x1726d4: 0xdfbf0018
    ctx->pc = 0x1726d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1726d8:
    // 0x1726d8: 0x805dd1c
label_1726dc:
    if (ctx->pc == 0x1726DCu) {
        ctx->pc = 0x1726DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1726E0u;
        goto label_1726e0;
    }
    ctx->pc = 0x1726D8u;
    ctx->pc = 0x1726DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177470u;
    sub_00177470_0x177470(rdram, ctx, runtime); return;
    ctx->pc = 0x1726E0u;
label_1726e0:
    // 0x1726e0: 0xdfb10008
    ctx->pc = 0x1726e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1726e4:
    // 0x1726e4: 0xdfb20010
    ctx->pc = 0x1726e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1726e8:
    // 0x1726e8: 0xdfbf0018
    ctx->pc = 0x1726e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1726ec:
    // 0x1726ec: 0x3e00008
label_1726f0:
    if (ctx->pc == 0x1726F0u) {
        ctx->pc = 0x1726F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1726F4u;
        goto label_1726f4;
    }
    ctx->pc = 0x1726ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1726F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1725E0u: goto label_1725e0;
            case 0x1725E4u: goto label_1725e4;
            case 0x1725E8u: goto label_1725e8;
            case 0x1725ECu: goto label_1725ec;
            case 0x1725F0u: goto label_1725f0;
            case 0x1725F4u: goto label_1725f4;
            case 0x1725F8u: goto label_1725f8;
            case 0x1725FCu: goto label_1725fc;
            case 0x172600u: goto label_172600;
            case 0x172604u: goto label_172604;
            case 0x172608u: goto label_172608;
            case 0x17260Cu: goto label_17260c;
            case 0x172610u: goto label_172610;
            case 0x172614u: goto label_172614;
            case 0x172618u: goto label_172618;
            case 0x17261Cu: goto label_17261c;
            case 0x172620u: goto label_172620;
            case 0x172624u: goto label_172624;
            case 0x172628u: goto label_172628;
            case 0x17262Cu: goto label_17262c;
            case 0x172630u: goto label_172630;
            case 0x172634u: goto label_172634;
            case 0x172638u: goto label_172638;
            case 0x17263Cu: goto label_17263c;
            case 0x172640u: goto label_172640;
            case 0x172644u: goto label_172644;
            case 0x172648u: goto label_172648;
            case 0x17264Cu: goto label_17264c;
            case 0x172650u: goto label_172650;
            case 0x172654u: goto label_172654;
            case 0x172658u: goto label_172658;
            case 0x17265Cu: goto label_17265c;
            case 0x172660u: goto label_172660;
            case 0x172664u: goto label_172664;
            case 0x172668u: goto label_172668;
            case 0x17266Cu: goto label_17266c;
            case 0x172670u: goto label_172670;
            case 0x172674u: goto label_172674;
            case 0x172678u: goto label_172678;
            case 0x17267Cu: goto label_17267c;
            case 0x172680u: goto label_172680;
            case 0x172684u: goto label_172684;
            case 0x172688u: goto label_172688;
            case 0x17268Cu: goto label_17268c;
            case 0x172690u: goto label_172690;
            case 0x172694u: goto label_172694;
            case 0x172698u: goto label_172698;
            case 0x17269Cu: goto label_17269c;
            case 0x1726A0u: goto label_1726a0;
            case 0x1726A4u: goto label_1726a4;
            case 0x1726A8u: goto label_1726a8;
            case 0x1726ACu: goto label_1726ac;
            case 0x1726B0u: goto label_1726b0;
            case 0x1726B4u: goto label_1726b4;
            case 0x1726B8u: goto label_1726b8;
            case 0x1726BCu: goto label_1726bc;
            case 0x1726C0u: goto label_1726c0;
            case 0x1726C4u: goto label_1726c4;
            case 0x1726C8u: goto label_1726c8;
            case 0x1726CCu: goto label_1726cc;
            case 0x1726D0u: goto label_1726d0;
            case 0x1726D4u: goto label_1726d4;
            case 0x1726D8u: goto label_1726d8;
            case 0x1726DCu: goto label_1726dc;
            case 0x1726E0u: goto label_1726e0;
            case 0x1726E4u: goto label_1726e4;
            case 0x1726E8u: goto label_1726e8;
            case 0x1726ECu: goto label_1726ec;
            case 0x1726F0u: goto label_1726f0;
            case 0x1726F4u: goto label_1726f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1726F4u;
label_1726f4:
    // 0x1726f4: 0x0
    ctx->pc = 0x1726f4u;
    // NOP
}
