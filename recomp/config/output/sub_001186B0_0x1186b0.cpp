#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001186B0
// Address: 0x1186b0 - 0x1187a0
void sub_001186B0_0x1186b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1186b0u;

label_1186b0:
    // 0x1186b0: 0x27bdffa0
    ctx->pc = 0x1186b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_1186b4:
    // 0x1186b4: 0xffb30030
    ctx->pc = 0x1186b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1186b8:
    // 0x1186b8: 0xffb20020
    ctx->pc = 0x1186b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1186bc:
    // 0x1186bc: 0x80982d
    ctx->pc = 0x1186bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1186c0:
    // 0x1186c0: 0xffb40040
    ctx->pc = 0x1186c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1186c4:
    // 0x1186c4: 0xa0902d
    ctx->pc = 0x1186c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1186c8:
    // 0x1186c8: 0xffb00000
    ctx->pc = 0x1186c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1186cc:
    // 0x1186cc: 0x2404001b
    ctx->pc = 0x1186ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 27));
label_1186d0:
    // 0x1186d0: 0xffbf0050
    ctx->pc = 0x1186d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1186d4:
    // 0x1186d4: 0x3c100026
    ctx->pc = 0x1186d4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
label_1186d8:
    // 0x1186d8: 0xffb10010
    ctx->pc = 0x1186d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1186dc:
    // 0x1186dc: 0xc04619c
label_1186e0:
    if (ctx->pc == 0x1186E0u) {
        ctx->pc = 0x1186E0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 4294959552));
        ctx->pc = 0x1186E4u;
        goto label_1186e4;
    }
    ctx->pc = 0x1186DCu;
    SET_GPR_U32(ctx, 31, 0x1186E4u);
    ctx->pc = 0x1186E0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 4294959552));
    ctx->pc = 0x118670u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118670_0x118670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186E4u; }
    }
    if (ctx->pc != 0x1186E4u) { return; }
    ctx->pc = 0x1186E4u;
label_1186e4:
    // 0x1186e4: 0x3c020021
    ctx->pc = 0x1186e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_1186e8:
    // 0x1186e8: 0x8c439ddc
    ctx->pc = 0x1186e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942172)));
label_1186ec:
    // 0x1186ec: 0x14600003
label_1186f0:
    if (ctx->pc == 0x1186F0u) {
        ctx->pc = 0x1186F4u;
        goto label_1186f4;
    }
    ctx->pc = 0x1186ECu;
    {
        const bool branch_taken_0x1186ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1186ec) {
            ctx->pc = 0x1186FCu;
            goto label_1186fc;
        }
    }
    ctx->pc = 0x1186F4u;
label_1186f4:
    // 0x1186f4: 0xc0461e8
label_1186f8:
    if (ctx->pc == 0x1186F8u) {
        ctx->pc = 0x1186FCu;
        goto label_1186fc;
    }
    ctx->pc = 0x1186F4u;
    SET_GPR_U32(ctx, 31, 0x1186FCu);
    ctx->pc = 0x1187A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001187A0_0x1187a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186FCu; }
    }
    if (ctx->pc != 0x1186FCu) { return; }
    ctx->pc = 0x1186FCu;
label_1186fc:
    // 0x1186fc: 0xc047598
label_118700:
    if (ctx->pc == 0x118700u) {
        ctx->pc = 0x118704u;
        goto label_118704;
    }
    ctx->pc = 0x1186FCu;
    SET_GPR_U32(ctx, 31, 0x118704u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118704u; }
    }
    if (ctx->pc != 0x118704u) { return; }
    ctx->pc = 0x118704u;
label_118704:
    // 0x118704: 0x8e11e1c0
    ctx->pc = 0x118704u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4294959552)));
label_118708:
    // 0x118708: 0x3c030026
    ctx->pc = 0x118708u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_11870c:
    // 0x11870c: 0xae920004
    ctx->pc = 0x11870cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_118710:
    // 0x118710: 0xae13e1c0
    ctx->pc = 0x118710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959552), GPR_U32(ctx, 19));
label_118714:
    // 0x118714: 0xac7ce200
    ctx->pc = 0x118714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959616), GPR_U32(ctx, 28));
label_118718:
    // 0x118718: 0x10400003
label_11871c:
    if (ctx->pc == 0x11871Cu) {
        ctx->pc = 0x118720u;
        goto label_118720;
    }
    ctx->pc = 0x118718u;
    {
        const bool branch_taken_0x118718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x118718) {
            ctx->pc = 0x118728u;
            goto label_118728;
        }
    }
    ctx->pc = 0x118720u;
label_118720:
    // 0x118720: 0xc0475ae
label_118724:
    if (ctx->pc == 0x118724u) {
        ctx->pc = 0x118728u;
        goto label_118728;
    }
    ctx->pc = 0x118720u;
    SET_GPR_U32(ctx, 31, 0x118728u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118728u; }
    }
    if (ctx->pc != 0x118728u) { return; }
    ctx->pc = 0x118728u;
label_118728:
    // 0x118728: 0xc0461a8
label_11872c:
    if (ctx->pc == 0x11872Cu) {
        ctx->pc = 0x118730u;
        goto label_118730;
    }
    ctx->pc = 0x118728u;
    SET_GPR_U32(ctx, 31, 0x118730u);
    ctx->pc = 0x1186A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001186A0_0x1186a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118730u; }
    }
    if (ctx->pc != 0x118730u) { return; }
    ctx->pc = 0x118730u;
label_118730:
    // 0x118730: 0x220102d
    ctx->pc = 0x118730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_118734:
    // 0x118734: 0xdfbf0050
    ctx->pc = 0x118734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_118738:
    // 0x118738: 0xdfb40040
    ctx->pc = 0x118738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11873c:
    // 0x11873c: 0xdfb30030
    ctx->pc = 0x11873cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_118740:
    // 0x118740: 0xdfb20020
    ctx->pc = 0x118740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_118744:
    // 0x118744: 0xdfb10010
    ctx->pc = 0x118744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_118748:
    // 0x118748: 0xdfb00000
    ctx->pc = 0x118748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11874c:
    // 0x11874c: 0x3e00008
label_118750:
    if (ctx->pc == 0x118750u) {
        ctx->pc = 0x118750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x118754u;
        goto label_118754;
    }
    ctx->pc = 0x11874Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1186B0u: goto label_1186b0;
            case 0x1186B4u: goto label_1186b4;
            case 0x1186B8u: goto label_1186b8;
            case 0x1186BCu: goto label_1186bc;
            case 0x1186C0u: goto label_1186c0;
            case 0x1186C4u: goto label_1186c4;
            case 0x1186C8u: goto label_1186c8;
            case 0x1186CCu: goto label_1186cc;
            case 0x1186D0u: goto label_1186d0;
            case 0x1186D4u: goto label_1186d4;
            case 0x1186D8u: goto label_1186d8;
            case 0x1186DCu: goto label_1186dc;
            case 0x1186E0u: goto label_1186e0;
            case 0x1186E4u: goto label_1186e4;
            case 0x1186E8u: goto label_1186e8;
            case 0x1186ECu: goto label_1186ec;
            case 0x1186F0u: goto label_1186f0;
            case 0x1186F4u: goto label_1186f4;
            case 0x1186F8u: goto label_1186f8;
            case 0x1186FCu: goto label_1186fc;
            case 0x118700u: goto label_118700;
            case 0x118704u: goto label_118704;
            case 0x118708u: goto label_118708;
            case 0x11870Cu: goto label_11870c;
            case 0x118710u: goto label_118710;
            case 0x118714u: goto label_118714;
            case 0x118718u: goto label_118718;
            case 0x11871Cu: goto label_11871c;
            case 0x118720u: goto label_118720;
            case 0x118724u: goto label_118724;
            case 0x118728u: goto label_118728;
            case 0x11872Cu: goto label_11872c;
            case 0x118730u: goto label_118730;
            case 0x118734u: goto label_118734;
            case 0x118738u: goto label_118738;
            case 0x11873Cu: goto label_11873c;
            case 0x118740u: goto label_118740;
            case 0x118744u: goto label_118744;
            case 0x118748u: goto label_118748;
            case 0x11874Cu: goto label_11874c;
            case 0x118750u: goto label_118750;
            case 0x118754u: goto label_118754;
            case 0x118758u: goto label_118758;
            case 0x11875Cu: goto label_11875c;
            case 0x118760u: goto label_118760;
            case 0x118764u: goto label_118764;
            case 0x118768u: goto label_118768;
            case 0x11876Cu: goto label_11876c;
            case 0x118770u: goto label_118770;
            case 0x118774u: goto label_118774;
            case 0x118778u: goto label_118778;
            case 0x11877Cu: goto label_11877c;
            case 0x118780u: goto label_118780;
            case 0x118784u: goto label_118784;
            case 0x118788u: goto label_118788;
            case 0x11878Cu: goto label_11878c;
            case 0x118790u: goto label_118790;
            case 0x118794u: goto label_118794;
            case 0x118798u: goto label_118798;
            case 0x11879Cu: goto label_11879c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118754u;
label_118754:
    // 0x118754: 0x0
    ctx->pc = 0x118754u;
    // NOP
label_118758:
    // 0x118758: 0x27bdffe0
    ctx->pc = 0x118758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_11875c:
    // 0x11875c: 0x8ca30000
    ctx->pc = 0x11875cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_118760:
    // 0x118760: 0xffbf0010
    ctx->pc = 0x118760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_118764:
    // 0x118764: 0x10600007
label_118768:
    if (ctx->pc == 0x118768u) {
        ctx->pc = 0x118768u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x11876Cu;
        goto label_11876c;
    }
    ctx->pc = 0x118764u;
    {
        const bool branch_taken_0x118764 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x118768u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x118764) {
            ctx->pc = 0x118784u;
            goto label_118784;
        }
    }
    ctx->pc = 0x11876Cu;
label_11876c:
    // 0x11876c: 0x3c020026
    ctx->pc = 0x11876cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_118770:
    // 0x118770: 0x380802d
    ctx->pc = 0x118770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_118774:
    // 0x118774: 0x8c5ce200
    ctx->pc = 0x118774u;
    SET_GPR_U32(ctx, 28, READ32(ADD32(GPR_U32(ctx, 2), 4294959616)));
label_118778:
    // 0x118778: 0x60f809
label_11877c:
    if (ctx->pc == 0x11877Cu) {
        ctx->pc = 0x11877Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = 0x118780u;
        goto label_118780;
    }
    ctx->pc = 0x118778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x118780u);
        ctx->pc = 0x11877Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1186B0u: goto label_1186b0;
            case 0x1186B4u: goto label_1186b4;
            case 0x1186B8u: goto label_1186b8;
            case 0x1186BCu: goto label_1186bc;
            case 0x1186C0u: goto label_1186c0;
            case 0x1186C4u: goto label_1186c4;
            case 0x1186C8u: goto label_1186c8;
            case 0x1186CCu: goto label_1186cc;
            case 0x1186D0u: goto label_1186d0;
            case 0x1186D4u: goto label_1186d4;
            case 0x1186D8u: goto label_1186d8;
            case 0x1186DCu: goto label_1186dc;
            case 0x1186E0u: goto label_1186e0;
            case 0x1186E4u: goto label_1186e4;
            case 0x1186E8u: goto label_1186e8;
            case 0x1186ECu: goto label_1186ec;
            case 0x1186F0u: goto label_1186f0;
            case 0x1186F4u: goto label_1186f4;
            case 0x1186F8u: goto label_1186f8;
            case 0x1186FCu: goto label_1186fc;
            case 0x118700u: goto label_118700;
            case 0x118704u: goto label_118704;
            case 0x118708u: goto label_118708;
            case 0x11870Cu: goto label_11870c;
            case 0x118710u: goto label_118710;
            case 0x118714u: goto label_118714;
            case 0x118718u: goto label_118718;
            case 0x11871Cu: goto label_11871c;
            case 0x118720u: goto label_118720;
            case 0x118724u: goto label_118724;
            case 0x118728u: goto label_118728;
            case 0x11872Cu: goto label_11872c;
            case 0x118730u: goto label_118730;
            case 0x118734u: goto label_118734;
            case 0x118738u: goto label_118738;
            case 0x11873Cu: goto label_11873c;
            case 0x118740u: goto label_118740;
            case 0x118744u: goto label_118744;
            case 0x118748u: goto label_118748;
            case 0x11874Cu: goto label_11874c;
            case 0x118750u: goto label_118750;
            case 0x118754u: goto label_118754;
            case 0x118758u: goto label_118758;
            case 0x11875Cu: goto label_11875c;
            case 0x118760u: goto label_118760;
            case 0x118764u: goto label_118764;
            case 0x118768u: goto label_118768;
            case 0x11876Cu: goto label_11876c;
            case 0x118770u: goto label_118770;
            case 0x118774u: goto label_118774;
            case 0x118778u: goto label_118778;
            case 0x11877Cu: goto label_11877c;
            case 0x118780u: goto label_118780;
            case 0x118784u: goto label_118784;
            case 0x118788u: goto label_118788;
            case 0x11878Cu: goto label_11878c;
            case 0x118790u: goto label_118790;
            case 0x118794u: goto label_118794;
            case 0x118798u: goto label_118798;
            case 0x11879Cu: goto label_11879c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x118780u; }
            if (ctx->pc != 0x118780u) { return; }
        }
    }
    ctx->pc = 0x118780u;
label_118780:
    // 0x118780: 0x200e02d
    ctx->pc = 0x118780u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118784:
    // 0x118784: 0xf
    ctx->pc = 0x118784u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_118788:
    // 0x118788: 0x42000038
    ctx->pc = 0x118788u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_11878c:
    // 0x11878c: 0xdfbf0010
    ctx->pc = 0x11878cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_118790:
    // 0x118790: 0xdfb00000
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_118794:
    // 0x118794: 0x3e00008
label_118798:
    if (ctx->pc == 0x118798u) {
        ctx->pc = 0x118798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11879Cu;
        goto label_11879c;
    }
    ctx->pc = 0x118794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1186B0u: goto label_1186b0;
            case 0x1186B4u: goto label_1186b4;
            case 0x1186B8u: goto label_1186b8;
            case 0x1186BCu: goto label_1186bc;
            case 0x1186C0u: goto label_1186c0;
            case 0x1186C4u: goto label_1186c4;
            case 0x1186C8u: goto label_1186c8;
            case 0x1186CCu: goto label_1186cc;
            case 0x1186D0u: goto label_1186d0;
            case 0x1186D4u: goto label_1186d4;
            case 0x1186D8u: goto label_1186d8;
            case 0x1186DCu: goto label_1186dc;
            case 0x1186E0u: goto label_1186e0;
            case 0x1186E4u: goto label_1186e4;
            case 0x1186E8u: goto label_1186e8;
            case 0x1186ECu: goto label_1186ec;
            case 0x1186F0u: goto label_1186f0;
            case 0x1186F4u: goto label_1186f4;
            case 0x1186F8u: goto label_1186f8;
            case 0x1186FCu: goto label_1186fc;
            case 0x118700u: goto label_118700;
            case 0x118704u: goto label_118704;
            case 0x118708u: goto label_118708;
            case 0x11870Cu: goto label_11870c;
            case 0x118710u: goto label_118710;
            case 0x118714u: goto label_118714;
            case 0x118718u: goto label_118718;
            case 0x11871Cu: goto label_11871c;
            case 0x118720u: goto label_118720;
            case 0x118724u: goto label_118724;
            case 0x118728u: goto label_118728;
            case 0x11872Cu: goto label_11872c;
            case 0x118730u: goto label_118730;
            case 0x118734u: goto label_118734;
            case 0x118738u: goto label_118738;
            case 0x11873Cu: goto label_11873c;
            case 0x118740u: goto label_118740;
            case 0x118744u: goto label_118744;
            case 0x118748u: goto label_118748;
            case 0x11874Cu: goto label_11874c;
            case 0x118750u: goto label_118750;
            case 0x118754u: goto label_118754;
            case 0x118758u: goto label_118758;
            case 0x11875Cu: goto label_11875c;
            case 0x118760u: goto label_118760;
            case 0x118764u: goto label_118764;
            case 0x118768u: goto label_118768;
            case 0x11876Cu: goto label_11876c;
            case 0x118770u: goto label_118770;
            case 0x118774u: goto label_118774;
            case 0x118778u: goto label_118778;
            case 0x11877Cu: goto label_11877c;
            case 0x118780u: goto label_118780;
            case 0x118784u: goto label_118784;
            case 0x118788u: goto label_118788;
            case 0x11878Cu: goto label_11878c;
            case 0x118790u: goto label_118790;
            case 0x118794u: goto label_118794;
            case 0x118798u: goto label_118798;
            case 0x11879Cu: goto label_11879c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11879Cu;
label_11879c:
    // 0x11879c: 0x0
    ctx->pc = 0x11879cu;
    // NOP
}
