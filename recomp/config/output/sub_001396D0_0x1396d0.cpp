#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001396D0
// Address: 0x1396d0 - 0x139798
void sub_001396D0_0x1396d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1396d0u;

label_1396d0:
    // 0x1396d0: 0x27bdfff0
    ctx->pc = 0x1396d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1396d4:
    // 0x1396d4: 0xffb00000
    ctx->pc = 0x1396d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1396d8:
    // 0x1396d8: 0x80802d
    ctx->pc = 0x1396d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1396dc:
    // 0x1396dc: 0xffbf0008
    ctx->pc = 0x1396dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1396e0:
    // 0x1396e0: 0x8e02001c
    ctx->pc = 0x1396e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1396e4:
    // 0x1396e4: 0x50400028
label_1396e8:
    if (ctx->pc == 0x1396E8u) {
        ctx->pc = 0x1396E8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1396ECu;
        goto label_1396ec;
    }
    ctx->pc = 0x1396E4u;
    {
        const bool branch_taken_0x1396e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1396e4) {
            ctx->pc = 0x1396E8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x139788u;
            goto label_139788;
        }
    }
    ctx->pc = 0x1396ECu;
label_1396ec:
    // 0x1396ec: 0xc0505c0
label_1396f0:
    if (ctx->pc == 0x1396F0u) {
        ctx->pc = 0x1396F4u;
        goto label_1396f4;
    }
    ctx->pc = 0x1396ECu;
    SET_GPR_U32(ctx, 31, 0x1396F4u);
    ctx->pc = 0x141700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141700_0x141700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396F4u; }
    }
    if (ctx->pc != 0x1396F4u) { return; }
    ctx->pc = 0x1396F4u;
label_1396f4:
    // 0x1396f4: 0xc04dd82
label_1396f8:
    if (ctx->pc == 0x1396F8u) {
        ctx->pc = 0x1396F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1396FCu;
        goto label_1396fc;
    }
    ctx->pc = 0x1396F4u;
    SET_GPR_U32(ctx, 31, 0x1396FCu);
    ctx->pc = 0x1396F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x137608u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00137608_0x137608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1396FCu; }
    }
    if (ctx->pc != 0x1396FCu) { return; }
    ctx->pc = 0x1396FCu;
label_1396fc:
    // 0x1396fc: 0x40182d
    ctx->pc = 0x1396fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139700:
    // 0x139700: 0x2c62000a
    ctx->pc = 0x139700u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_139704:
    // 0x139704: 0x5040001c
label_139708:
    if (ctx->pc == 0x139708u) {
        ctx->pc = 0x139708u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13970Cu;
        goto label_13970c;
    }
    ctx->pc = 0x139704u;
    {
        const bool branch_taken_0x139704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x139704) {
            ctx->pc = 0x139708u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x139778u;
            goto label_139778;
        }
    }
    ctx->pc = 0x13970Cu;
label_13970c:
    // 0x13970c: 0x31080
    ctx->pc = 0x13970cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_139710:
    // 0x139710: 0x3c030024
    ctx->pc = 0x139710u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_139714:
    // 0x139714: 0x621821
    ctx->pc = 0x139714u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_139718:
    // 0x139718: 0x8c63ca60
    ctx->pc = 0x139718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294953568)));
label_13971c:
    // 0x13971c: 0x600008
label_139720:
    if (ctx->pc == 0x139720u) {
        ctx->pc = 0x139724u;
        goto label_139724;
    }
    ctx->pc = 0x13971Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1396D0u: goto label_1396d0;
            case 0x1396D4u: goto label_1396d4;
            case 0x1396D8u: goto label_1396d8;
            case 0x1396DCu: goto label_1396dc;
            case 0x1396E0u: goto label_1396e0;
            case 0x1396E4u: goto label_1396e4;
            case 0x1396E8u: goto label_1396e8;
            case 0x1396ECu: goto label_1396ec;
            case 0x1396F0u: goto label_1396f0;
            case 0x1396F4u: goto label_1396f4;
            case 0x1396F8u: goto label_1396f8;
            case 0x1396FCu: goto label_1396fc;
            case 0x139700u: goto label_139700;
            case 0x139704u: goto label_139704;
            case 0x139708u: goto label_139708;
            case 0x13970Cu: goto label_13970c;
            case 0x139710u: goto label_139710;
            case 0x139714u: goto label_139714;
            case 0x139718u: goto label_139718;
            case 0x13971Cu: goto label_13971c;
            case 0x139720u: goto label_139720;
            case 0x139724u: goto label_139724;
            case 0x139728u: goto label_139728;
            case 0x13972Cu: goto label_13972c;
            case 0x139730u: goto label_139730;
            case 0x139734u: goto label_139734;
            case 0x139738u: goto label_139738;
            case 0x13973Cu: goto label_13973c;
            case 0x139740u: goto label_139740;
            case 0x139744u: goto label_139744;
            case 0x139748u: goto label_139748;
            case 0x13974Cu: goto label_13974c;
            case 0x139750u: goto label_139750;
            case 0x139754u: goto label_139754;
            case 0x139758u: goto label_139758;
            case 0x13975Cu: goto label_13975c;
            case 0x139760u: goto label_139760;
            case 0x139764u: goto label_139764;
            case 0x139768u: goto label_139768;
            case 0x13976Cu: goto label_13976c;
            case 0x139770u: goto label_139770;
            case 0x139774u: goto label_139774;
            case 0x139778u: goto label_139778;
            case 0x13977Cu: goto label_13977c;
            case 0x139780u: goto label_139780;
            case 0x139784u: goto label_139784;
            case 0x139788u: goto label_139788;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139794u: goto label_139794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139724u;
label_139724:
    // 0x139724: 0x0
    ctx->pc = 0x139724u;
    // NOP
label_139728:
    // 0x139728: 0x24020003
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_13972c:
    // 0x13972c: 0x8e04001c
    ctx->pc = 0x13972cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_139730:
    // 0x139730: 0x1000000d
label_139734:
    if (ctx->pc == 0x139734u) {
        ctx->pc = 0x139734u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x139738u;
        goto label_139738;
    }
    ctx->pc = 0x139730u;
    {
        const bool branch_taken_0x139730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139734u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x139730) {
            ctx->pc = 0x139768u;
            goto label_139768;
        }
    }
    ctx->pc = 0x139738u;
label_139738:
    // 0x139738: 0x8e040010
    ctx->pc = 0x139738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13973c:
    // 0x13973c: 0x24030001
    ctx->pc = 0x13973cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_139740:
    // 0x139740: 0x8e02000c
    ctx->pc = 0x139740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_139744:
    // 0x139744: 0xae040014
    ctx->pc = 0x139744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_139748:
    // 0x139748: 0x441021
    ctx->pc = 0x139748u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13974c:
    // 0x13974c: 0x8e04001c
    ctx->pc = 0x13974cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_139750:
    // 0x139750: 0xa2030002
    ctx->pc = 0x139750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_139754:
    // 0x139754: 0x10000004
label_139758:
    if (ctx->pc == 0x139758u) {
        ctx->pc = 0x139758u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x13975Cu;
        goto label_13975c;
    }
    ctx->pc = 0x139754u;
    {
        const bool branch_taken_0x139754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x139758u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x139754) {
            ctx->pc = 0x139768u;
            goto label_139768;
        }
    }
    ctx->pc = 0x13975Cu;
label_13975c:
    // 0x13975c: 0x0
    ctx->pc = 0x13975cu;
    // NOP
label_139760:
    // 0x139760: 0xa2000002
    ctx->pc = 0x139760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_139764:
    // 0x139764: 0x8e04001c
    ctx->pc = 0x139764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_139768:
    // 0x139768: 0xc04dcf2
label_13976c:
    if (ctx->pc == 0x13976Cu) {
        ctx->pc = 0x139770u;
        goto label_139770;
    }
    ctx->pc = 0x139768u;
    SET_GPR_U32(ctx, 31, 0x139770u);
    ctx->pc = 0x1373C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001373C8_0x1373c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139770u; }
    }
    if (ctx->pc != 0x139770u) { return; }
    ctx->pc = 0x139770u;
label_139770:
    // 0x139770: 0xae00001c
    ctx->pc = 0x139770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_139774:
    // 0x139774: 0xdfb00000
    ctx->pc = 0x139774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139778:
    // 0x139778: 0xdfbf0008
    ctx->pc = 0x139778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13977c:
    // 0x13977c: 0x80505de
label_139780:
    if (ctx->pc == 0x139780u) {
        ctx->pc = 0x139780u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x139784u;
        goto label_139784;
    }
    ctx->pc = 0x13977Cu;
    ctx->pc = 0x139780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141778u;
    sub_00141778_0x141778(rdram, ctx, runtime); return;
    ctx->pc = 0x139784u;
label_139784:
    // 0x139784: 0x0
    ctx->pc = 0x139784u;
    // NOP
label_139788:
    // 0x139788: 0xdfbf0008
    ctx->pc = 0x139788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13978c:
    // 0x13978c: 0x3e00008
label_139790:
    if (ctx->pc == 0x139790u) {
        ctx->pc = 0x139790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x139794u;
        goto label_139794;
    }
    ctx->pc = 0x13978Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1396D0u: goto label_1396d0;
            case 0x1396D4u: goto label_1396d4;
            case 0x1396D8u: goto label_1396d8;
            case 0x1396DCu: goto label_1396dc;
            case 0x1396E0u: goto label_1396e0;
            case 0x1396E4u: goto label_1396e4;
            case 0x1396E8u: goto label_1396e8;
            case 0x1396ECu: goto label_1396ec;
            case 0x1396F0u: goto label_1396f0;
            case 0x1396F4u: goto label_1396f4;
            case 0x1396F8u: goto label_1396f8;
            case 0x1396FCu: goto label_1396fc;
            case 0x139700u: goto label_139700;
            case 0x139704u: goto label_139704;
            case 0x139708u: goto label_139708;
            case 0x13970Cu: goto label_13970c;
            case 0x139710u: goto label_139710;
            case 0x139714u: goto label_139714;
            case 0x139718u: goto label_139718;
            case 0x13971Cu: goto label_13971c;
            case 0x139720u: goto label_139720;
            case 0x139724u: goto label_139724;
            case 0x139728u: goto label_139728;
            case 0x13972Cu: goto label_13972c;
            case 0x139730u: goto label_139730;
            case 0x139734u: goto label_139734;
            case 0x139738u: goto label_139738;
            case 0x13973Cu: goto label_13973c;
            case 0x139740u: goto label_139740;
            case 0x139744u: goto label_139744;
            case 0x139748u: goto label_139748;
            case 0x13974Cu: goto label_13974c;
            case 0x139750u: goto label_139750;
            case 0x139754u: goto label_139754;
            case 0x139758u: goto label_139758;
            case 0x13975Cu: goto label_13975c;
            case 0x139760u: goto label_139760;
            case 0x139764u: goto label_139764;
            case 0x139768u: goto label_139768;
            case 0x13976Cu: goto label_13976c;
            case 0x139770u: goto label_139770;
            case 0x139774u: goto label_139774;
            case 0x139778u: goto label_139778;
            case 0x13977Cu: goto label_13977c;
            case 0x139780u: goto label_139780;
            case 0x139784u: goto label_139784;
            case 0x139788u: goto label_139788;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139794u: goto label_139794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139794u;
label_139794:
    // 0x139794: 0x0
    ctx->pc = 0x139794u;
    // NOP
}
