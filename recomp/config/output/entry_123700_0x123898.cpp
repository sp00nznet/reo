#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_123700
// Address: 0x123700 - 0x123898
void entry_123700_0x123898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123700u;

label_123700:
    // 0x123700: 0x27bdffe0
    ctx->pc = 0x123700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_123704:
    // 0x123704: 0x24020001
    ctx->pc = 0x123704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_123708:
    // 0x123708: 0xffb00000
    ctx->pc = 0x123708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12370c:
    // 0x12370c: 0x80802d
    ctx->pc = 0x12370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123710:
    // 0x123710: 0xffb10008
    ctx->pc = 0x123710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_123714:
    // 0x123714: 0x26110048
    ctx->pc = 0x123714u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 72));
label_123718:
    // 0x123718: 0xffb20010
    ctx->pc = 0x123718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_12371c:
    // 0x12371c: 0xffbf0018
    ctx->pc = 0x12371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_123720:
    // 0x123720: 0x8e030004
    ctx->pc = 0x123720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_123724:
    // 0x123724: 0x1462004c
label_123728:
    if (ctx->pc == 0x123728u) {
        ctx->pc = 0x123728u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12372Cu;
        goto label_12372c;
    }
    ctx->pc = 0x123724u;
    {
        const bool branch_taken_0x123724 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123728u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x123724) {
            ctx->pc = 0x123858u;
            goto label_123858;
        }
    }
    ctx->pc = 0x12372Cu;
label_12372c:
    // 0x12372c: 0xc04d3e6
label_123730:
    if (ctx->pc == 0x123730u) {
        ctx->pc = 0x123730u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x123734u;
        goto label_123734;
    }
    ctx->pc = 0x12372Cu;
    SET_GPR_U32(ctx, 31, 0x123734u);
    ctx->pc = 0x123730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x134F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134F98_0x134f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123734u; }
    }
    if (ctx->pc != 0x123734u) { return; }
    ctx->pc = 0x123734u;
label_123734:
    // 0x123734: 0x54400048
label_123738:
    if (ctx->pc == 0x123738u) {
        ctx->pc = 0x123738u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x12373Cu;
        goto label_12373c;
    }
    ctx->pc = 0x123734u;
    {
        const bool branch_taken_0x123734 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x123734) {
            ctx->pc = 0x123738u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x123858u;
            goto label_123858;
        }
    }
    ctx->pc = 0x12373Cu;
label_12373c:
    // 0x12373c: 0x8e04007c
    ctx->pc = 0x12373cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_123740:
    // 0x123740: 0x26050068
    ctx->pc = 0x123740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 104));
label_123744:
    // 0x123744: 0x8e020078
    ctx->pc = 0x123744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_123748:
    // 0x123748: 0x2606006c
    ctx->pc = 0x123748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 108));
label_12374c:
    // 0x12374c: 0x40f809
label_123750:
    if (ctx->pc == 0x123750u) {
        ctx->pc = 0x123750u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x123754u;
        goto label_123754;
    }
    ctx->pc = 0x12374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123754u);
        ctx->pc = 0x123750u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x123754u; }
            if (ctx->pc != 0x123754u) { return; }
        }
    }
    ctx->pc = 0x123754u;
label_123754:
    // 0x123754: 0x8e240018
    ctx->pc = 0x123754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_123758:
    // 0x123758: 0x8e270020
    ctx->pc = 0x123758u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_12375c:
    // 0x12375c: 0x24060002
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_123760:
    // 0x123760: 0x8e230024
    ctx->pc = 0x123760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_123764:
    // 0x123764: 0x874823
    ctx->pc = 0x123764u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_123768:
    // 0x123768: 0x8204000e
    ctx->pc = 0x123768u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_12376c:
    // 0x12376c: 0x69102a
    ctx->pc = 0x12376cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 9)));
label_123770:
    // 0x123770: 0x8e250004
    ctx->pc = 0x123770u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_123774:
    // 0x123774: 0x62480b
    ctx->pc = 0x123774u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
label_123778:
    // 0x123778: 0x71840
    ctx->pc = 0x123778u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
label_12377c:
    // 0x12377c: 0x8e2b0014
    ctx->pc = 0x12377cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_123780:
    // 0x123780: 0xa9102a
    ctx->pc = 0x123780u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 9)));
label_123784:
    // 0x123784: 0xa2480b
    ctx->pc = 0x123784u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 5));
label_123788:
    // 0x123788: 0x1635021
    ctx->pc = 0x123788u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_12378c:
    // 0x12378c: 0x1486001c
label_123790:
    if (ctx->pc == 0x123790u) {
        ctx->pc = 0x123790u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x123794u;
        goto label_123794;
    }
    ctx->pc = 0x12378Cu;
    {
        const bool branch_taken_0x12378c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        ctx->pc = 0x123790u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x12378c) {
            ctx->pc = 0x123800u;
            goto label_123800;
        }
    }
    ctx->pc = 0x123794u;
label_123794:
    // 0x123794: 0x8e22001c
    ctx->pc = 0x123794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_123798:
    // 0x123798: 0x402d
    ctx->pc = 0x123798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12379c:
    // 0x12379c: 0x471021
    ctx->pc = 0x12379cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1237a0:
    // 0x1237a0: 0x21040
    ctx->pc = 0x1237a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1237a4:
    // 0x1237a4: 0x19200024
label_1237a8:
    if (ctx->pc == 0x1237A8u) {
        ctx->pc = 0x1237A8u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x1237ACu;
        goto label_1237ac;
    }
    ctx->pc = 0x1237A4u;
    {
        const bool branch_taken_0x1237a4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1237A8u;
        SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x1237a4) {
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x1237ACu;
label_1237ac:
    // 0x1237ac: 0x240382d
    ctx->pc = 0x1237acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1237b0:
    // 0x1237b0: 0x94e20000
    ctx->pc = 0x1237b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1237b4:
    // 0x1237b4: 0x82040
    ctx->pc = 0x1237b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_1237b8:
    // 0x1237b8: 0x8a2821
    ctx->pc = 0x1237b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1237bc:
    // 0x1237bc: 0x8b2021
    ctx->pc = 0x1237bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1237c0:
    // 0x1237c0: 0x21a00
    ctx->pc = 0x1237c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_1237c4:
    // 0x1237c4: 0x21202
    ctx->pc = 0x1237c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1237c8:
    // 0x1237c8: 0x431025
    ctx->pc = 0x1237c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1237cc:
    // 0x1237cc: 0x25080001
    ctx->pc = 0x1237ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1237d0:
    // 0x1237d0: 0xa4a20000
    ctx->pc = 0x1237d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_1237d4:
    // 0x1237d4: 0x109302a
    ctx->pc = 0x1237d4u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_1237d8:
    // 0x1237d8: 0x94e20002
    ctx->pc = 0x1237d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1237dc:
    // 0x1237dc: 0x24e70004
    ctx->pc = 0x1237dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_1237e0:
    // 0x1237e0: 0x21a00
    ctx->pc = 0x1237e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_1237e4:
    // 0x1237e4: 0x21202
    ctx->pc = 0x1237e4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1237e8:
    // 0x1237e8: 0x431025
    ctx->pc = 0x1237e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1237ec:
    // 0x1237ec: 0x14c0fff0
label_1237f0:
    if (ctx->pc == 0x1237F0u) {
        ctx->pc = 0x1237F0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1237F4u;
        goto label_1237f4;
    }
    ctx->pc = 0x1237ECu;
    {
        const bool branch_taken_0x1237ec = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1237F0u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1237ec) {
            ctx->pc = 0x1237B0u;
            goto label_1237b0;
        }
    }
    ctx->pc = 0x1237F4u;
label_1237f4:
    // 0x1237f4: 0x10000010
label_1237f8:
    if (ctx->pc == 0x1237F8u) {
        ctx->pc = 0x1237F8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1237FCu;
        goto label_1237fc;
    }
    ctx->pc = 0x1237F4u;
    {
        const bool branch_taken_0x1237f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1237F8u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1237f4) {
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x1237FCu;
label_1237fc:
    // 0x1237fc: 0x0
    ctx->pc = 0x1237fcu;
    // NOP
label_123800:
    // 0x123800: 0x1920000d
label_123804:
    if (ctx->pc == 0x123804u) {
        ctx->pc = 0x123804u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x123808u;
        goto label_123808;
    }
    ctx->pc = 0x123800u;
    {
        const bool branch_taken_0x123800 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x123804u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123800) {
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x123808u;
label_123808:
    // 0x123808: 0x82040
    ctx->pc = 0x123808u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 1));
label_12380c:
    // 0x12380c: 0x25080001
    ctx->pc = 0x12380cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_123810:
    // 0x123810: 0x921021
    ctx->pc = 0x123810u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_123814:
    // 0x123814: 0x8a2021
    ctx->pc = 0x123814u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_123818:
    // 0x123818: 0x94420000
    ctx->pc = 0x123818u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12381c:
    // 0x12381c: 0x109282a
    ctx->pc = 0x12381cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 9)));
label_123820:
    // 0x123820: 0x21a00
    ctx->pc = 0x123820u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_123824:
    // 0x123824: 0x21202
    ctx->pc = 0x123824u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_123828:
    // 0x123828: 0x431025
    ctx->pc = 0x123828u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12382c:
    // 0x12382c: 0x14a0fff6
label_123830:
    if (ctx->pc == 0x123830u) {
        ctx->pc = 0x123830u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x123834u;
        goto label_123834;
    }
    ctx->pc = 0x12382Cu;
    {
        const bool branch_taken_0x12382c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x123830u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12382c) {
            ctx->pc = 0x123808u;
            goto label_123808;
        }
    }
    ctx->pc = 0x123834u;
label_123834:
    // 0x123834: 0x9203000e
    ctx->pc = 0x123834u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_123838:
    // 0x123838: 0x31600
    ctx->pc = 0x123838u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_12383c:
    // 0x12383c: 0x24030002
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_123840:
    // 0x123840: 0x21603
    ctx->pc = 0x123840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_123844:
    // 0x123844: 0xae030004
    ctx->pc = 0x123844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_123848:
    // 0x123848: 0x1221018
    ctx->pc = 0x123848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_12384c:
    // 0x12384c: 0xae090090
    ctx->pc = 0x12384cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_123850:
    // 0x123850: 0x21040
    ctx->pc = 0x123850u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_123854:
    // 0x123854: 0xae020094
    ctx->pc = 0x123854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_123858:
    // 0x123858: 0x24020002
    ctx->pc = 0x123858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_12385c:
    // 0x12385c: 0x54620009
label_123860:
    if (ctx->pc == 0x123860u) {
        ctx->pc = 0x123860u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x123864u;
        goto label_123864;
    }
    ctx->pc = 0x12385Cu;
    {
        const bool branch_taken_0x12385c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x12385c) {
            ctx->pc = 0x123860u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x123884u;
            goto label_123884;
        }
    }
    ctx->pc = 0x123864u;
label_123864:
    // 0x123864: 0x8e030080
    ctx->pc = 0x123864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_123868:
    // 0x123868: 0x8e040084
    ctx->pc = 0x123868u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_12386c:
    // 0x12386c: 0x8e050094
    ctx->pc = 0x12386cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_123870:
    // 0x123870: 0x60f809
label_123874:
    if (ctx->pc == 0x123874u) {
        ctx->pc = 0x123874u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = 0x123878u;
        goto label_123878;
    }
    ctx->pc = 0x123870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123878u);
        ctx->pc = 0x123874u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x123878u; }
            if (ctx->pc != 0x123878u) { return; }
        }
    }
    ctx->pc = 0x123878u;
label_123878:
    // 0x123878: 0x24020003
    ctx->pc = 0x123878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_12387c:
    // 0x12387c: 0xae020004
    ctx->pc = 0x12387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_123880:
    // 0x123880: 0xdfb00000
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123884:
    // 0x123884: 0xdfb10008
    ctx->pc = 0x123884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_123888:
    // 0x123888: 0xdfb20010
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12388c:
    // 0x12388c: 0xdfbf0018
    ctx->pc = 0x12388cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_123890:
    // 0x123890: 0x3e00008
label_123894:
    if (ctx->pc == 0x123894u) {
        ctx->pc = 0x123894u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x123898u;
        goto label_fallthrough_0x123890;
    }
    ctx->pc = 0x123890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123894u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123700u: goto label_123700;
            case 0x123704u: goto label_123704;
            case 0x123708u: goto label_123708;
            case 0x12370Cu: goto label_12370c;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            case 0x123718u: goto label_123718;
            case 0x12371Cu: goto label_12371c;
            case 0x123720u: goto label_123720;
            case 0x123724u: goto label_123724;
            case 0x123728u: goto label_123728;
            case 0x12372Cu: goto label_12372c;
            case 0x123730u: goto label_123730;
            case 0x123734u: goto label_123734;
            case 0x123738u: goto label_123738;
            case 0x12373Cu: goto label_12373c;
            case 0x123740u: goto label_123740;
            case 0x123744u: goto label_123744;
            case 0x123748u: goto label_123748;
            case 0x12374Cu: goto label_12374c;
            case 0x123750u: goto label_123750;
            case 0x123754u: goto label_123754;
            case 0x123758u: goto label_123758;
            case 0x12375Cu: goto label_12375c;
            case 0x123760u: goto label_123760;
            case 0x123764u: goto label_123764;
            case 0x123768u: goto label_123768;
            case 0x12376Cu: goto label_12376c;
            case 0x123770u: goto label_123770;
            case 0x123774u: goto label_123774;
            case 0x123778u: goto label_123778;
            case 0x12377Cu: goto label_12377c;
            case 0x123780u: goto label_123780;
            case 0x123784u: goto label_123784;
            case 0x123788u: goto label_123788;
            case 0x12378Cu: goto label_12378c;
            case 0x123790u: goto label_123790;
            case 0x123794u: goto label_123794;
            case 0x123798u: goto label_123798;
            case 0x12379Cu: goto label_12379c;
            case 0x1237A0u: goto label_1237a0;
            case 0x1237A4u: goto label_1237a4;
            case 0x1237A8u: goto label_1237a8;
            case 0x1237ACu: goto label_1237ac;
            case 0x1237B0u: goto label_1237b0;
            case 0x1237B4u: goto label_1237b4;
            case 0x1237B8u: goto label_1237b8;
            case 0x1237BCu: goto label_1237bc;
            case 0x1237C0u: goto label_1237c0;
            case 0x1237C4u: goto label_1237c4;
            case 0x1237C8u: goto label_1237c8;
            case 0x1237CCu: goto label_1237cc;
            case 0x1237D0u: goto label_1237d0;
            case 0x1237D4u: goto label_1237d4;
            case 0x1237D8u: goto label_1237d8;
            case 0x1237DCu: goto label_1237dc;
            case 0x1237E0u: goto label_1237e0;
            case 0x1237E4u: goto label_1237e4;
            case 0x1237E8u: goto label_1237e8;
            case 0x1237ECu: goto label_1237ec;
            case 0x1237F0u: goto label_1237f0;
            case 0x1237F4u: goto label_1237f4;
            case 0x1237F8u: goto label_1237f8;
            case 0x1237FCu: goto label_1237fc;
            case 0x123800u: goto label_123800;
            case 0x123804u: goto label_123804;
            case 0x123808u: goto label_123808;
            case 0x12380Cu: goto label_12380c;
            case 0x123810u: goto label_123810;
            case 0x123814u: goto label_123814;
            case 0x123818u: goto label_123818;
            case 0x12381Cu: goto label_12381c;
            case 0x123820u: goto label_123820;
            case 0x123824u: goto label_123824;
            case 0x123828u: goto label_123828;
            case 0x12382Cu: goto label_12382c;
            case 0x123830u: goto label_123830;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            case 0x12383Cu: goto label_12383c;
            case 0x123840u: goto label_123840;
            case 0x123844u: goto label_123844;
            case 0x123848u: goto label_123848;
            case 0x12384Cu: goto label_12384c;
            case 0x123850u: goto label_123850;
            case 0x123854u: goto label_123854;
            case 0x123858u: goto label_123858;
            case 0x12385Cu: goto label_12385c;
            case 0x123860u: goto label_123860;
            case 0x123864u: goto label_123864;
            case 0x123868u: goto label_123868;
            case 0x12386Cu: goto label_12386c;
            case 0x123870u: goto label_123870;
            case 0x123874u: goto label_123874;
            case 0x123878u: goto label_123878;
            case 0x12387Cu: goto label_12387c;
            case 0x123880u: goto label_123880;
            case 0x123884u: goto label_123884;
            case 0x123888u: goto label_123888;
            case 0x12388Cu: goto label_12388c;
            case 0x123890u: goto label_123890;
            case 0x123894u: goto label_123894;
            default: break;
        }
        return;
    }
label_fallthrough_0x123890:
    ctx->pc = 0x123898u;
}
