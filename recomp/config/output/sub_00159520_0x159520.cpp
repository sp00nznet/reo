#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00159520
// Address: 0x159520 - 0x159710
void sub_00159520_0x159520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x159520u;

label_159520:
    // 0x159520: 0x27bdff90
    ctx->pc = 0x159520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_159524:
    // 0x159524: 0xffb00020
    ctx->pc = 0x159524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_159528:
    // 0x159528: 0xa0802d
    ctx->pc = 0x159528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15952c:
    // 0x15952c: 0xffb10028
    ctx->pc = 0x15952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_159530:
    // 0x159530: 0xffb20030
    ctx->pc = 0x159530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_159534:
    // 0x159534: 0xffb30038
    ctx->pc = 0x159534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_159538:
    // 0x159538: 0xffb40040
    ctx->pc = 0x159538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15953c:
    // 0x15953c: 0xffb50048
    ctx->pc = 0x15953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_159540:
    // 0x159540: 0xffb60050
    ctx->pc = 0x159540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_159544:
    // 0x159544: 0xffb70058
    ctx->pc = 0x159544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_159548:
    // 0x159548: 0xffbf0060
    ctx->pc = 0x159548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15954c:
    // 0x15954c: 0xc056dec
label_159550:
    if (ctx->pc == 0x159550u) {
        ctx->pc = 0x159550u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159554u;
        goto label_159554;
    }
    ctx->pc = 0x15954Cu;
    SET_GPR_U32(ctx, 31, 0x159554u);
    ctx->pc = 0x159550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159554u; }
    }
    if (ctx->pc != 0x159554u) { return; }
    ctx->pc = 0x159554u;
label_159554:
    // 0x159554: 0x10400006
label_159558:
    if (ctx->pc == 0x159558u) {
        ctx->pc = 0x159558u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15955Cu;
        goto label_15955c;
    }
    ctx->pc = 0x159554u;
    {
        const bool branch_taken_0x159554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x159558u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159554) {
            ctx->pc = 0x159570u;
            goto label_159570;
        }
    }
    ctx->pc = 0x15955Cu;
label_15955c:
    // 0x15955c: 0x3c05ff03
    ctx->pc = 0x15955cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
label_159560:
    // 0x159560: 0xc0563ce
label_159564:
    if (ctx->pc == 0x159564u) {
        ctx->pc = 0x159564u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 524));
        ctx->pc = 0x159568u;
        goto label_159568;
    }
    ctx->pc = 0x159560u;
    SET_GPR_U32(ctx, 31, 0x159568u);
    ctx->pc = 0x159564u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 524));
    ctx->pc = 0x158F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158F38_0x158f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159568u; }
    }
    if (ctx->pc != 0x159568u) { return; }
    ctx->pc = 0x159568u;
label_159568:
    // 0x159568: 0x1000005f
label_15956c:
    if (ctx->pc == 0x15956Cu) {
        ctx->pc = 0x15956Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x159570u;
        goto label_159570;
    }
    ctx->pc = 0x159568u;
    {
        const bool branch_taken_0x159568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15956Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x159568) {
            ctx->pc = 0x1596E8u;
            goto label_1596e8;
        }
    }
    ctx->pc = 0x159570u;
label_159570:
    // 0x159570: 0x8e020000
    ctx->pc = 0x159570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159574:
    // 0x159574: 0x3c067fff
    ctx->pc = 0x159574u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_159578:
    // 0x159578: 0xae2003c0
    ctx->pc = 0x159578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 960), GPR_U32(ctx, 0));
label_15957c:
    // 0x15957c: 0x3a0382d
    ctx->pc = 0x15957cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_159580:
    // 0x159580: 0x8c480018
    ctx->pc = 0x159580u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_159584:
    // 0x159584: 0x200202d
    ctx->pc = 0x159584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159588:
    // 0x159588: 0x24050001
    ctx->pc = 0x159588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15958c:
    // 0x15958c: 0x100f809
label_159590:
    if (ctx->pc == 0x159590u) {
        ctx->pc = 0x159590u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = 0x159594u;
        goto label_159594;
    }
    ctx->pc = 0x15958Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x159594u);
        ctx->pc = 0x159590u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159520u: goto label_159520;
            case 0x159524u: goto label_159524;
            case 0x159528u: goto label_159528;
            case 0x15952Cu: goto label_15952c;
            case 0x159530u: goto label_159530;
            case 0x159534u: goto label_159534;
            case 0x159538u: goto label_159538;
            case 0x15953Cu: goto label_15953c;
            case 0x159540u: goto label_159540;
            case 0x159544u: goto label_159544;
            case 0x159548u: goto label_159548;
            case 0x15954Cu: goto label_15954c;
            case 0x159550u: goto label_159550;
            case 0x159554u: goto label_159554;
            case 0x159558u: goto label_159558;
            case 0x15955Cu: goto label_15955c;
            case 0x159560u: goto label_159560;
            case 0x159564u: goto label_159564;
            case 0x159568u: goto label_159568;
            case 0x15956Cu: goto label_15956c;
            case 0x159570u: goto label_159570;
            case 0x159574u: goto label_159574;
            case 0x159578u: goto label_159578;
            case 0x15957Cu: goto label_15957c;
            case 0x159580u: goto label_159580;
            case 0x159584u: goto label_159584;
            case 0x159588u: goto label_159588;
            case 0x15958Cu: goto label_15958c;
            case 0x159590u: goto label_159590;
            case 0x159594u: goto label_159594;
            case 0x159598u: goto label_159598;
            case 0x15959Cu: goto label_15959c;
            case 0x1595A0u: goto label_1595a0;
            case 0x1595A4u: goto label_1595a4;
            case 0x1595A8u: goto label_1595a8;
            case 0x1595ACu: goto label_1595ac;
            case 0x1595B0u: goto label_1595b0;
            case 0x1595B4u: goto label_1595b4;
            case 0x1595B8u: goto label_1595b8;
            case 0x1595BCu: goto label_1595bc;
            case 0x1595C0u: goto label_1595c0;
            case 0x1595C4u: goto label_1595c4;
            case 0x1595C8u: goto label_1595c8;
            case 0x1595CCu: goto label_1595cc;
            case 0x1595D0u: goto label_1595d0;
            case 0x1595D4u: goto label_1595d4;
            case 0x1595D8u: goto label_1595d8;
            case 0x1595DCu: goto label_1595dc;
            case 0x1595E0u: goto label_1595e0;
            case 0x1595E4u: goto label_1595e4;
            case 0x1595E8u: goto label_1595e8;
            case 0x1595ECu: goto label_1595ec;
            case 0x1595F0u: goto label_1595f0;
            case 0x1595F4u: goto label_1595f4;
            case 0x1595F8u: goto label_1595f8;
            case 0x1595FCu: goto label_1595fc;
            case 0x159600u: goto label_159600;
            case 0x159604u: goto label_159604;
            case 0x159608u: goto label_159608;
            case 0x15960Cu: goto label_15960c;
            case 0x159610u: goto label_159610;
            case 0x159614u: goto label_159614;
            case 0x159618u: goto label_159618;
            case 0x15961Cu: goto label_15961c;
            case 0x159620u: goto label_159620;
            case 0x159624u: goto label_159624;
            case 0x159628u: goto label_159628;
            case 0x15962Cu: goto label_15962c;
            case 0x159630u: goto label_159630;
            case 0x159634u: goto label_159634;
            case 0x159638u: goto label_159638;
            case 0x15963Cu: goto label_15963c;
            case 0x159640u: goto label_159640;
            case 0x159644u: goto label_159644;
            case 0x159648u: goto label_159648;
            case 0x15964Cu: goto label_15964c;
            case 0x159650u: goto label_159650;
            case 0x159654u: goto label_159654;
            case 0x159658u: goto label_159658;
            case 0x15965Cu: goto label_15965c;
            case 0x159660u: goto label_159660;
            case 0x159664u: goto label_159664;
            case 0x159668u: goto label_159668;
            case 0x15966Cu: goto label_15966c;
            case 0x159670u: goto label_159670;
            case 0x159674u: goto label_159674;
            case 0x159678u: goto label_159678;
            case 0x15967Cu: goto label_15967c;
            case 0x159680u: goto label_159680;
            case 0x159684u: goto label_159684;
            case 0x159688u: goto label_159688;
            case 0x15968Cu: goto label_15968c;
            case 0x159690u: goto label_159690;
            case 0x159694u: goto label_159694;
            case 0x159698u: goto label_159698;
            case 0x15969Cu: goto label_15969c;
            case 0x1596A0u: goto label_1596a0;
            case 0x1596A4u: goto label_1596a4;
            case 0x1596A8u: goto label_1596a8;
            case 0x1596ACu: goto label_1596ac;
            case 0x1596B0u: goto label_1596b0;
            case 0x1596B4u: goto label_1596b4;
            case 0x1596B8u: goto label_1596b8;
            case 0x1596BCu: goto label_1596bc;
            case 0x1596C0u: goto label_1596c0;
            case 0x1596C4u: goto label_1596c4;
            case 0x1596C8u: goto label_1596c8;
            case 0x1596CCu: goto label_1596cc;
            case 0x1596D0u: goto label_1596d0;
            case 0x1596D4u: goto label_1596d4;
            case 0x1596D8u: goto label_1596d8;
            case 0x1596DCu: goto label_1596dc;
            case 0x1596E0u: goto label_1596e0;
            case 0x1596E4u: goto label_1596e4;
            case 0x1596E8u: goto label_1596e8;
            case 0x1596ECu: goto label_1596ec;
            case 0x1596F0u: goto label_1596f0;
            case 0x1596F4u: goto label_1596f4;
            case 0x1596F8u: goto label_1596f8;
            case 0x1596FCu: goto label_1596fc;
            case 0x159700u: goto label_159700;
            case 0x159704u: goto label_159704;
            case 0x159708u: goto label_159708;
            case 0x15970Cu: goto label_15970c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159594u; }
            if (ctx->pc != 0x159594u) { return; }
        }
    }
    ctx->pc = 0x159594u;
label_159594:
    // 0x159594: 0x8e030000
    ctx->pc = 0x159594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_159598:
    // 0x159598: 0x200202d
    ctx->pc = 0x159598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15959c:
    // 0x15959c: 0x24050001
    ctx->pc = 0x15959cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1595a0:
    // 0x1595a0: 0x8c62001c
    ctx->pc = 0x1595a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1595a4:
    // 0x1595a4: 0x40f809
label_1595a8:
    if (ctx->pc == 0x1595A8u) {
        ctx->pc = 0x1595A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1595ACu;
        goto label_1595ac;
    }
    ctx->pc = 0x1595A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1595ACu);
        ctx->pc = 0x1595A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159520u: goto label_159520;
            case 0x159524u: goto label_159524;
            case 0x159528u: goto label_159528;
            case 0x15952Cu: goto label_15952c;
            case 0x159530u: goto label_159530;
            case 0x159534u: goto label_159534;
            case 0x159538u: goto label_159538;
            case 0x15953Cu: goto label_15953c;
            case 0x159540u: goto label_159540;
            case 0x159544u: goto label_159544;
            case 0x159548u: goto label_159548;
            case 0x15954Cu: goto label_15954c;
            case 0x159550u: goto label_159550;
            case 0x159554u: goto label_159554;
            case 0x159558u: goto label_159558;
            case 0x15955Cu: goto label_15955c;
            case 0x159560u: goto label_159560;
            case 0x159564u: goto label_159564;
            case 0x159568u: goto label_159568;
            case 0x15956Cu: goto label_15956c;
            case 0x159570u: goto label_159570;
            case 0x159574u: goto label_159574;
            case 0x159578u: goto label_159578;
            case 0x15957Cu: goto label_15957c;
            case 0x159580u: goto label_159580;
            case 0x159584u: goto label_159584;
            case 0x159588u: goto label_159588;
            case 0x15958Cu: goto label_15958c;
            case 0x159590u: goto label_159590;
            case 0x159594u: goto label_159594;
            case 0x159598u: goto label_159598;
            case 0x15959Cu: goto label_15959c;
            case 0x1595A0u: goto label_1595a0;
            case 0x1595A4u: goto label_1595a4;
            case 0x1595A8u: goto label_1595a8;
            case 0x1595ACu: goto label_1595ac;
            case 0x1595B0u: goto label_1595b0;
            case 0x1595B4u: goto label_1595b4;
            case 0x1595B8u: goto label_1595b8;
            case 0x1595BCu: goto label_1595bc;
            case 0x1595C0u: goto label_1595c0;
            case 0x1595C4u: goto label_1595c4;
            case 0x1595C8u: goto label_1595c8;
            case 0x1595CCu: goto label_1595cc;
            case 0x1595D0u: goto label_1595d0;
            case 0x1595D4u: goto label_1595d4;
            case 0x1595D8u: goto label_1595d8;
            case 0x1595DCu: goto label_1595dc;
            case 0x1595E0u: goto label_1595e0;
            case 0x1595E4u: goto label_1595e4;
            case 0x1595E8u: goto label_1595e8;
            case 0x1595ECu: goto label_1595ec;
            case 0x1595F0u: goto label_1595f0;
            case 0x1595F4u: goto label_1595f4;
            case 0x1595F8u: goto label_1595f8;
            case 0x1595FCu: goto label_1595fc;
            case 0x159600u: goto label_159600;
            case 0x159604u: goto label_159604;
            case 0x159608u: goto label_159608;
            case 0x15960Cu: goto label_15960c;
            case 0x159610u: goto label_159610;
            case 0x159614u: goto label_159614;
            case 0x159618u: goto label_159618;
            case 0x15961Cu: goto label_15961c;
            case 0x159620u: goto label_159620;
            case 0x159624u: goto label_159624;
            case 0x159628u: goto label_159628;
            case 0x15962Cu: goto label_15962c;
            case 0x159630u: goto label_159630;
            case 0x159634u: goto label_159634;
            case 0x159638u: goto label_159638;
            case 0x15963Cu: goto label_15963c;
            case 0x159640u: goto label_159640;
            case 0x159644u: goto label_159644;
            case 0x159648u: goto label_159648;
            case 0x15964Cu: goto label_15964c;
            case 0x159650u: goto label_159650;
            case 0x159654u: goto label_159654;
            case 0x159658u: goto label_159658;
            case 0x15965Cu: goto label_15965c;
            case 0x159660u: goto label_159660;
            case 0x159664u: goto label_159664;
            case 0x159668u: goto label_159668;
            case 0x15966Cu: goto label_15966c;
            case 0x159670u: goto label_159670;
            case 0x159674u: goto label_159674;
            case 0x159678u: goto label_159678;
            case 0x15967Cu: goto label_15967c;
            case 0x159680u: goto label_159680;
            case 0x159684u: goto label_159684;
            case 0x159688u: goto label_159688;
            case 0x15968Cu: goto label_15968c;
            case 0x159690u: goto label_159690;
            case 0x159694u: goto label_159694;
            case 0x159698u: goto label_159698;
            case 0x15969Cu: goto label_15969c;
            case 0x1596A0u: goto label_1596a0;
            case 0x1596A4u: goto label_1596a4;
            case 0x1596A8u: goto label_1596a8;
            case 0x1596ACu: goto label_1596ac;
            case 0x1596B0u: goto label_1596b0;
            case 0x1596B4u: goto label_1596b4;
            case 0x1596B8u: goto label_1596b8;
            case 0x1596BCu: goto label_1596bc;
            case 0x1596C0u: goto label_1596c0;
            case 0x1596C4u: goto label_1596c4;
            case 0x1596C8u: goto label_1596c8;
            case 0x1596CCu: goto label_1596cc;
            case 0x1596D0u: goto label_1596d0;
            case 0x1596D4u: goto label_1596d4;
            case 0x1596D8u: goto label_1596d8;
            case 0x1596DCu: goto label_1596dc;
            case 0x1596E0u: goto label_1596e0;
            case 0x1596E4u: goto label_1596e4;
            case 0x1596E8u: goto label_1596e8;
            case 0x1596ECu: goto label_1596ec;
            case 0x1596F0u: goto label_1596f0;
            case 0x1596F4u: goto label_1596f4;
            case 0x1596F8u: goto label_1596f8;
            case 0x1596FCu: goto label_1596fc;
            case 0x159700u: goto label_159700;
            case 0x159704u: goto label_159704;
            case 0x159708u: goto label_159708;
            case 0x15970Cu: goto label_15970c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1595ACu; }
            if (ctx->pc != 0x1595ACu) { return; }
        }
    }
    ctx->pc = 0x1595ACu;
label_1595ac:
    // 0x1595ac: 0x220202d
    ctx->pc = 0x1595acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1595b0:
    // 0x1595b0: 0x8fa30000
    ctx->pc = 0x1595b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1595b4:
    // 0x1595b4: 0x27a50010
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_1595b8:
    // 0x1595b8: 0x8fa20004
    ctx->pc = 0x1595b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1595bc:
    // 0x1595bc: 0xafa30010
    ctx->pc = 0x1595bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1595c0:
    // 0x1595c0: 0xc056608
label_1595c4:
    if (ctx->pc == 0x1595C4u) {
        ctx->pc = 0x1595C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x1595C8u;
        goto label_1595c8;
    }
    ctx->pc = 0x1595C0u;
    SET_GPR_U32(ctx, 31, 0x1595C8u);
    ctx->pc = 0x1595C4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x159820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159820_0x159820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595C8u; }
    }
    if (ctx->pc != 0x1595C8u) { return; }
    ctx->pc = 0x1595C8u;
label_1595c8:
    // 0x1595c8: 0x24030002
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1595cc:
    // 0x1595cc: 0x1443000a
label_1595d0:
    if (ctx->pc == 0x1595D0u) {
        ctx->pc = 0x1595D0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1595D4u;
        goto label_1595d4;
    }
    ctx->pc = 0x1595CCu;
    {
        const bool branch_taken_0x1595cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1595D0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1595cc) {
            ctx->pc = 0x1595F8u;
            goto label_1595f8;
        }
    }
    ctx->pc = 0x1595D4u;
label_1595d4:
    // 0x1595d4: 0x220202d
    ctx->pc = 0x1595d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1595d8:
    // 0x1595d8: 0xc056e14
label_1595dc:
    if (ctx->pc == 0x1595DCu) {
        ctx->pc = 0x1595DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1595E0u;
        goto label_1595e0;
    }
    ctx->pc = 0x1595D8u;
    SET_GPR_U32(ctx, 31, 0x1595E0u);
    ctx->pc = 0x1595DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B850_0x15b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595E0u; }
    }
    if (ctx->pc != 0x1595E0u) { return; }
    ctx->pc = 0x1595E0u;
label_1595e0:
    // 0x1595e0: 0x10000041
label_1595e4:
    if (ctx->pc == 0x1595E4u) {
        ctx->pc = 0x1595E4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1595E8u;
        goto label_1595e8;
    }
    ctx->pc = 0x1595E0u;
    {
        const bool branch_taken_0x1595e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1595E4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1595e0) {
            ctx->pc = 0x1596E8u;
            goto label_1596e8;
        }
    }
    ctx->pc = 0x1595E8u;
label_1595e8:
    // 0x1595e8: 0xc0563ce
label_1595ec:
    if (ctx->pc == 0x1595ECu) {
        ctx->pc = 0x1595ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1595F0u;
        goto label_1595f0;
    }
    ctx->pc = 0x1595E8u;
    SET_GPR_U32(ctx, 31, 0x1595F0u);
    ctx->pc = 0x1595ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158F38_0x158f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1595F0u; }
    }
    if (ctx->pc != 0x1595F0u) { return; }
    ctx->pc = 0x1595F0u;
label_1595f0:
    // 0x1595f0: 0x1000003d
label_1595f4:
    if (ctx->pc == 0x1595F4u) {
        ctx->pc = 0x1595F4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1595F8u;
        goto label_1595f8;
    }
    ctx->pc = 0x1595F0u;
    {
        const bool branch_taken_0x1595f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1595F4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1595f0) {
            ctx->pc = 0x1596E8u;
            goto label_1596e8;
        }
    }
    ctx->pc = 0x1595F8u;
label_1595f8:
    // 0x1595f8: 0x24130010
    ctx->pc = 0x1595f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 16));
label_1595fc:
    // 0x1595fc: 0x24150004
    ctx->pc = 0x1595fcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4));
label_159600:
    // 0x159600: 0x24170008
    ctx->pc = 0x159600u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 8));
label_159604:
    // 0x159604: 0x24140020
    ctx->pc = 0x159604u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 32));
label_159608:
    // 0x159608: 0x10000028
label_15960c:
    if (ctx->pc == 0x15960Cu) {
        ctx->pc = 0x15960Cu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x159610u;
        goto label_159610;
    }
    ctx->pc = 0x159608u;
    {
        const bool branch_taken_0x159608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15960Cu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x159608) {
            ctx->pc = 0x1596ACu;
            goto label_1596ac;
        }
    }
    ctx->pc = 0x159610u;
label_159610:
    // 0x159610: 0x1073001d
label_159614:
    if (ctx->pc == 0x159614u) {
        ctx->pc = 0x159614u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159618u;
        goto label_159618;
    }
    ctx->pc = 0x159610u;
    {
        const bool branch_taken_0x159610 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x159614u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159610) {
            ctx->pc = 0x159688u;
            goto label_159688;
        }
    }
    ctx->pc = 0x159618u;
label_159618:
    // 0x159618: 0x2c620011
    ctx->pc = 0x159618u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 17));
label_15961c:
    // 0x15961c: 0x10400008
label_159620:
    if (ctx->pc == 0x159620u) {
        ctx->pc = 0x159624u;
        goto label_159624;
    }
    ctx->pc = 0x15961Cu;
    {
        const bool branch_taken_0x15961c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15961c) {
            ctx->pc = 0x159640u;
            goto label_159640;
        }
    }
    ctx->pc = 0x159624u;
label_159624:
    // 0x159624: 0x10750014
label_159628:
    if (ctx->pc == 0x159628u) {
        ctx->pc = 0x159628u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15962Cu;
        goto label_15962c;
    }
    ctx->pc = 0x159624u;
    {
        const bool branch_taken_0x159624 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 21));
        ctx->pc = 0x159628u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159624) {
            ctx->pc = 0x159678u;
            goto label_159678;
        }
    }
    ctx->pc = 0x15962Cu;
label_15962c:
    // 0x15962c: 0x1077000e
label_159630:
    if (ctx->pc == 0x159630u) {
        ctx->pc = 0x159634u;
        goto label_159634;
    }
    ctx->pc = 0x15962Cu;
    {
        const bool branch_taken_0x15962c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 23));
        if (branch_taken_0x15962c) {
            ctx->pc = 0x159668u;
            goto label_159668;
        }
    }
    ctx->pc = 0x159634u;
label_159634:
    // 0x159634: 0x1000001f
label_159638:
    if (ctx->pc == 0x159638u) {
        ctx->pc = 0x159638u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x15963Cu;
        goto label_15963c;
    }
    ctx->pc = 0x159634u;
    {
        const bool branch_taken_0x159634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159638u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x159634) {
            ctx->pc = 0x1596B4u;
            goto label_1596b4;
        }
    }
    ctx->pc = 0x15963Cu;
label_15963c:
    // 0x15963c: 0x0
    ctx->pc = 0x15963cu;
    // NOP
label_159640:
    // 0x159640: 0x10740017
label_159644:
    if (ctx->pc == 0x159644u) {
        ctx->pc = 0x159644u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159648u;
        goto label_159648;
    }
    ctx->pc = 0x159640u;
    {
        const bool branch_taken_0x159640 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        ctx->pc = 0x159644u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159640) {
            ctx->pc = 0x1596A0u;
            goto label_1596a0;
        }
    }
    ctx->pc = 0x159648u;
label_159648:
    // 0x159648: 0x1476001a
label_15964c:
    if (ctx->pc == 0x15964Cu) {
        ctx->pc = 0x15964Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x159650u;
        goto label_159650;
    }
    ctx->pc = 0x159648u;
    {
        const bool branch_taken_0x159648 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 22));
        ctx->pc = 0x15964Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x159648) {
            ctx->pc = 0x1596B4u;
            goto label_1596b4;
        }
    }
    ctx->pc = 0x159650u;
label_159650:
    // 0x159650: 0x220202d
    ctx->pc = 0x159650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159654:
    // 0x159654: 0x200282d
    ctx->pc = 0x159654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159658:
    // 0x159658: 0xc056632
label_15965c:
    if (ctx->pc == 0x15965Cu) {
        ctx->pc = 0x15965Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x159660u;
        goto label_159660;
    }
    ctx->pc = 0x159658u;
    SET_GPR_U32(ctx, 31, 0x159660u);
    ctx->pc = 0x15965Cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x1598C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001598C8_0x1598c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159660u; }
    }
    if (ctx->pc != 0x159660u) { return; }
    ctx->pc = 0x159660u;
label_159660:
    // 0x159660: 0x10000013
label_159664:
    if (ctx->pc == 0x159664u) {
        ctx->pc = 0x159664u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159668u;
        goto label_159668;
    }
    ctx->pc = 0x159660u;
    {
        const bool branch_taken_0x159660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159664u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159660) {
            ctx->pc = 0x1596B0u;
            goto label_1596b0;
        }
    }
    ctx->pc = 0x159668u;
label_159668:
    // 0x159668: 0xc0567ec
label_15966c:
    if (ctx->pc == 0x15966Cu) {
        ctx->pc = 0x15966Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x159670u;
        goto label_159670;
    }
    ctx->pc = 0x159668u;
    SET_GPR_U32(ctx, 31, 0x159670u);
    ctx->pc = 0x15966Cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x159FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159FB0_0x159fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159670u; }
    }
    if (ctx->pc != 0x159670u) { return; }
    ctx->pc = 0x159670u;
label_159670:
    // 0x159670: 0x1000000f
label_159674:
    if (ctx->pc == 0x159674u) {
        ctx->pc = 0x159674u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159678u;
        goto label_159678;
    }
    ctx->pc = 0x159670u;
    {
        const bool branch_taken_0x159670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159674u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159670) {
            ctx->pc = 0x1596B0u;
            goto label_1596b0;
        }
    }
    ctx->pc = 0x159678u;
label_159678:
    // 0x159678: 0xc05689c
label_15967c:
    if (ctx->pc == 0x15967Cu) {
        ctx->pc = 0x15967Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x159680u;
        goto label_159680;
    }
    ctx->pc = 0x159678u;
    SET_GPR_U32(ctx, 31, 0x159680u);
    ctx->pc = 0x15967Cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x15A270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A270_0x15a270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159680u; }
    }
    if (ctx->pc != 0x159680u) { return; }
    ctx->pc = 0x159680u;
label_159680:
    // 0x159680: 0x1000000b
label_159684:
    if (ctx->pc == 0x159684u) {
        ctx->pc = 0x159684u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159688u;
        goto label_159688;
    }
    ctx->pc = 0x159680u;
    {
        const bool branch_taken_0x159680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159684u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159680) {
            ctx->pc = 0x1596B0u;
            goto label_1596b0;
        }
    }
    ctx->pc = 0x159688u;
label_159688:
    // 0x159688: 0x200282d
    ctx->pc = 0x159688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15968c:
    // 0x15968c: 0xc056a18
label_159690:
    if (ctx->pc == 0x159690u) {
        ctx->pc = 0x159690u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159694u;
        goto label_159694;
    }
    ctx->pc = 0x15968Cu;
    SET_GPR_U32(ctx, 31, 0x159694u);
    ctx->pc = 0x159690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15A860u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A860_0x15a860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159694u; }
    }
    if (ctx->pc != 0x159694u) { return; }
    ctx->pc = 0x159694u;
label_159694:
    // 0x159694: 0x10000006
label_159698:
    if (ctx->pc == 0x159698u) {
        ctx->pc = 0x159698u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15969Cu;
        goto label_15969c;
    }
    ctx->pc = 0x159694u;
    {
        const bool branch_taken_0x159694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159698u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x159694) {
            ctx->pc = 0x1596B0u;
            goto label_1596b0;
        }
    }
    ctx->pc = 0x15969Cu;
label_15969c:
    // 0x15969c: 0x0
    ctx->pc = 0x15969cu;
    // NOP
label_1596a0:
    // 0x1596a0: 0x200282d
    ctx->pc = 0x1596a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1596a4:
    // 0x1596a4: 0xc056a54
label_1596a8:
    if (ctx->pc == 0x1596A8u) {
        ctx->pc = 0x1596A8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1596ACu;
        goto label_1596ac;
    }
    ctx->pc = 0x1596A4u;
    SET_GPR_U32(ctx, 31, 0x1596ACu);
    ctx->pc = 0x1596A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15A950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A950_0x15a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596ACu; }
    }
    if (ctx->pc != 0x1596ACu) { return; }
    ctx->pc = 0x1596ACu;
label_1596ac:
    // 0x1596ac: 0x220202d
    ctx->pc = 0x1596acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1596b0:
    // 0x1596b0: 0x2405ffff
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1596b4:
    // 0x1596b4: 0xc056bd0
label_1596b8:
    if (ctx->pc == 0x1596B8u) {
        ctx->pc = 0x1596B8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1596BCu;
        goto label_1596bc;
    }
    ctx->pc = 0x1596B4u;
    SET_GPR_U32(ctx, 31, 0x1596BCu);
    ctx->pc = 0x1596B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AF40_0x15af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596BCu; }
    }
    if (ctx->pc != 0x1596BCu) { return; }
    ctx->pc = 0x1596BCu;
label_1596bc:
    // 0x1596bc: 0x5440ffca
label_1596c0:
    if (ctx->pc == 0x1596C0u) {
        ctx->pc = 0x1596C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1596C4u;
        goto label_1596c4;
    }
    ctx->pc = 0x1596BCu;
    {
        const bool branch_taken_0x1596bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1596bc) {
            ctx->pc = 0x1596C0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1595E8u;
            goto label_1595e8;
        }
    }
    ctx->pc = 0x1596C4u;
label_1596c4:
    // 0x1596c4: 0xc0565c4
label_1596c8:
    if (ctx->pc == 0x1596C8u) {
        ctx->pc = 0x1596C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1596CCu;
        goto label_1596cc;
    }
    ctx->pc = 0x1596C4u;
    SET_GPR_U32(ctx, 31, 0x1596CCu);
    ctx->pc = 0x1596C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x159710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159710_0x159710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1596CCu; }
    }
    if (ctx->pc != 0x1596CCu) { return; }
    ctx->pc = 0x1596CCu;
label_1596cc:
    // 0x1596cc: 0x40182d
    ctx->pc = 0x1596ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1596d0:
    // 0x1596d0: 0x10600003
label_1596d4:
    if (ctx->pc == 0x1596D4u) {
        ctx->pc = 0x1596D4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        ctx->pc = 0x1596D8u;
        goto label_1596d8;
    }
    ctx->pc = 0x1596D0u;
    {
        const bool branch_taken_0x1596d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1596D4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x1596d0) {
            ctx->pc = 0x1596E0u;
            goto label_1596e0;
        }
    }
    ctx->pc = 0x1596D8u;
label_1596d8:
    // 0x1596d8: 0x1040ffcd
label_1596dc:
    if (ctx->pc == 0x1596DCu) {
        ctx->pc = 0x1596E0u;
        goto label_1596e0;
    }
    ctx->pc = 0x1596D8u;
    {
        const bool branch_taken_0x1596d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1596d8) {
            ctx->pc = 0x159610u;
            goto label_159610;
        }
    }
    ctx->pc = 0x1596E0u;
label_1596e0:
    // 0x1596e0: 0x102d
    ctx->pc = 0x1596e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1596e4:
    // 0x1596e4: 0xdfb00020
    ctx->pc = 0x1596e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1596e8:
    // 0x1596e8: 0xdfb10028
    ctx->pc = 0x1596e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1596ec:
    // 0x1596ec: 0xdfb20030
    ctx->pc = 0x1596ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1596f0:
    // 0x1596f0: 0xdfb30038
    ctx->pc = 0x1596f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1596f4:
    // 0x1596f4: 0xdfb40040
    ctx->pc = 0x1596f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1596f8:
    // 0x1596f8: 0xdfb50048
    ctx->pc = 0x1596f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1596fc:
    // 0x1596fc: 0xdfb60050
    ctx->pc = 0x1596fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_159700:
    // 0x159700: 0xdfb70058
    ctx->pc = 0x159700u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_159704:
    // 0x159704: 0xdfbf0060
    ctx->pc = 0x159704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_159708:
    // 0x159708: 0x3e00008
label_15970c:
    if (ctx->pc == 0x15970Cu) {
        ctx->pc = 0x15970Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x159710u;
        goto label_fallthrough_0x159708;
    }
    ctx->pc = 0x159708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15970Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159520u: goto label_159520;
            case 0x159524u: goto label_159524;
            case 0x159528u: goto label_159528;
            case 0x15952Cu: goto label_15952c;
            case 0x159530u: goto label_159530;
            case 0x159534u: goto label_159534;
            case 0x159538u: goto label_159538;
            case 0x15953Cu: goto label_15953c;
            case 0x159540u: goto label_159540;
            case 0x159544u: goto label_159544;
            case 0x159548u: goto label_159548;
            case 0x15954Cu: goto label_15954c;
            case 0x159550u: goto label_159550;
            case 0x159554u: goto label_159554;
            case 0x159558u: goto label_159558;
            case 0x15955Cu: goto label_15955c;
            case 0x159560u: goto label_159560;
            case 0x159564u: goto label_159564;
            case 0x159568u: goto label_159568;
            case 0x15956Cu: goto label_15956c;
            case 0x159570u: goto label_159570;
            case 0x159574u: goto label_159574;
            case 0x159578u: goto label_159578;
            case 0x15957Cu: goto label_15957c;
            case 0x159580u: goto label_159580;
            case 0x159584u: goto label_159584;
            case 0x159588u: goto label_159588;
            case 0x15958Cu: goto label_15958c;
            case 0x159590u: goto label_159590;
            case 0x159594u: goto label_159594;
            case 0x159598u: goto label_159598;
            case 0x15959Cu: goto label_15959c;
            case 0x1595A0u: goto label_1595a0;
            case 0x1595A4u: goto label_1595a4;
            case 0x1595A8u: goto label_1595a8;
            case 0x1595ACu: goto label_1595ac;
            case 0x1595B0u: goto label_1595b0;
            case 0x1595B4u: goto label_1595b4;
            case 0x1595B8u: goto label_1595b8;
            case 0x1595BCu: goto label_1595bc;
            case 0x1595C0u: goto label_1595c0;
            case 0x1595C4u: goto label_1595c4;
            case 0x1595C8u: goto label_1595c8;
            case 0x1595CCu: goto label_1595cc;
            case 0x1595D0u: goto label_1595d0;
            case 0x1595D4u: goto label_1595d4;
            case 0x1595D8u: goto label_1595d8;
            case 0x1595DCu: goto label_1595dc;
            case 0x1595E0u: goto label_1595e0;
            case 0x1595E4u: goto label_1595e4;
            case 0x1595E8u: goto label_1595e8;
            case 0x1595ECu: goto label_1595ec;
            case 0x1595F0u: goto label_1595f0;
            case 0x1595F4u: goto label_1595f4;
            case 0x1595F8u: goto label_1595f8;
            case 0x1595FCu: goto label_1595fc;
            case 0x159600u: goto label_159600;
            case 0x159604u: goto label_159604;
            case 0x159608u: goto label_159608;
            case 0x15960Cu: goto label_15960c;
            case 0x159610u: goto label_159610;
            case 0x159614u: goto label_159614;
            case 0x159618u: goto label_159618;
            case 0x15961Cu: goto label_15961c;
            case 0x159620u: goto label_159620;
            case 0x159624u: goto label_159624;
            case 0x159628u: goto label_159628;
            case 0x15962Cu: goto label_15962c;
            case 0x159630u: goto label_159630;
            case 0x159634u: goto label_159634;
            case 0x159638u: goto label_159638;
            case 0x15963Cu: goto label_15963c;
            case 0x159640u: goto label_159640;
            case 0x159644u: goto label_159644;
            case 0x159648u: goto label_159648;
            case 0x15964Cu: goto label_15964c;
            case 0x159650u: goto label_159650;
            case 0x159654u: goto label_159654;
            case 0x159658u: goto label_159658;
            case 0x15965Cu: goto label_15965c;
            case 0x159660u: goto label_159660;
            case 0x159664u: goto label_159664;
            case 0x159668u: goto label_159668;
            case 0x15966Cu: goto label_15966c;
            case 0x159670u: goto label_159670;
            case 0x159674u: goto label_159674;
            case 0x159678u: goto label_159678;
            case 0x15967Cu: goto label_15967c;
            case 0x159680u: goto label_159680;
            case 0x159684u: goto label_159684;
            case 0x159688u: goto label_159688;
            case 0x15968Cu: goto label_15968c;
            case 0x159690u: goto label_159690;
            case 0x159694u: goto label_159694;
            case 0x159698u: goto label_159698;
            case 0x15969Cu: goto label_15969c;
            case 0x1596A0u: goto label_1596a0;
            case 0x1596A4u: goto label_1596a4;
            case 0x1596A8u: goto label_1596a8;
            case 0x1596ACu: goto label_1596ac;
            case 0x1596B0u: goto label_1596b0;
            case 0x1596B4u: goto label_1596b4;
            case 0x1596B8u: goto label_1596b8;
            case 0x1596BCu: goto label_1596bc;
            case 0x1596C0u: goto label_1596c0;
            case 0x1596C4u: goto label_1596c4;
            case 0x1596C8u: goto label_1596c8;
            case 0x1596CCu: goto label_1596cc;
            case 0x1596D0u: goto label_1596d0;
            case 0x1596D4u: goto label_1596d4;
            case 0x1596D8u: goto label_1596d8;
            case 0x1596DCu: goto label_1596dc;
            case 0x1596E0u: goto label_1596e0;
            case 0x1596E4u: goto label_1596e4;
            case 0x1596E8u: goto label_1596e8;
            case 0x1596ECu: goto label_1596ec;
            case 0x1596F0u: goto label_1596f0;
            case 0x1596F4u: goto label_1596f4;
            case 0x1596F8u: goto label_1596f8;
            case 0x1596FCu: goto label_1596fc;
            case 0x159700u: goto label_159700;
            case 0x159704u: goto label_159704;
            case 0x159708u: goto label_159708;
            case 0x15970Cu: goto label_15970c;
            default: break;
        }
        return;
    }
label_fallthrough_0x159708:
    ctx->pc = 0x159710u;
}
