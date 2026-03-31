#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00106738
// Address: 0x106738 - 0x1068a8
void sub_00106738_0x106738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106738u;

label_106738:
    // 0x106738: 0x27bdffd0
    ctx->pc = 0x106738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_10673c:
    // 0x10673c: 0xffb20010
    ctx->pc = 0x10673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_106740:
    // 0x106740: 0x249201d8
    ctx->pc = 0x106740u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 4), 472));
label_106744:
    // 0x106744: 0xffb30018
    ctx->pc = 0x106744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_106748:
    // 0x106748: 0x982d
    ctx->pc = 0x106748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10674c:
    // 0x10674c: 0xffb40020
    ctx->pc = 0x10674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_106750:
    // 0x106750: 0xa0a02d
    ctx->pc = 0x106750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_106754:
    // 0x106754: 0xffb00000
    ctx->pc = 0x106754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_106758:
    // 0x106758: 0xffb10008
    ctx->pc = 0x106758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10675c:
    // 0x10675c: 0x12400012
label_106760:
    if (ctx->pc == 0x106760u) {
        ctx->pc = 0x106760u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->pc = 0x106764u;
        goto label_106764;
    }
    ctx->pc = 0x10675Cu;
    {
        const bool branch_taken_0x10675c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x106760u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        if (branch_taken_0x10675c) {
            ctx->pc = 0x1067A8u;
            goto label_1067a8;
        }
    }
    ctx->pc = 0x106764u;
label_106764:
    // 0x106764: 0x8e500004
    ctx->pc = 0x106764u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_106768:
    // 0x106768: 0x2610ffff
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_10676c:
    // 0x10676c: 0x600000b
label_106770:
    if (ctx->pc == 0x106770u) {
        ctx->pc = 0x106770u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x106774u;
        goto label_106774;
    }
    ctx->pc = 0x10676Cu;
    {
        const bool branch_taken_0x10676c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x106770u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x10676c) {
            ctx->pc = 0x10679Cu;
            goto label_10679c;
        }
    }
    ctx->pc = 0x106774u;
label_106774:
    // 0x106774: 0x0
    ctx->pc = 0x106774u;
    // NOP
label_106778:
    // 0x106778: 0x8622000c
    ctx->pc = 0x106778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_10677c:
    // 0x10677c: 0x50400005
label_106780:
    if (ctx->pc == 0x106780u) {
        ctx->pc = 0x106780u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x106784u;
        goto label_106784;
    }
    ctx->pc = 0x10677Cu;
    {
        const bool branch_taken_0x10677c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10677c) {
            ctx->pc = 0x106780u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x106794u;
            goto label_106794;
        }
    }
    ctx->pc = 0x106784u;
label_106784:
    // 0x106784: 0x280f809
label_106788:
    if (ctx->pc == 0x106788u) {
        ctx->pc = 0x106788u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10678Cu;
        goto label_10678c;
    }
    ctx->pc = 0x106784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x10678Cu);
        ctx->pc = 0x106788u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106738u: goto label_106738;
            case 0x10673Cu: goto label_10673c;
            case 0x106740u: goto label_106740;
            case 0x106744u: goto label_106744;
            case 0x106748u: goto label_106748;
            case 0x10674Cu: goto label_10674c;
            case 0x106750u: goto label_106750;
            case 0x106754u: goto label_106754;
            case 0x106758u: goto label_106758;
            case 0x10675Cu: goto label_10675c;
            case 0x106760u: goto label_106760;
            case 0x106764u: goto label_106764;
            case 0x106768u: goto label_106768;
            case 0x10676Cu: goto label_10676c;
            case 0x106770u: goto label_106770;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x10677Cu: goto label_10677c;
            case 0x106780u: goto label_106780;
            case 0x106784u: goto label_106784;
            case 0x106788u: goto label_106788;
            case 0x10678Cu: goto label_10678c;
            case 0x106790u: goto label_106790;
            case 0x106794u: goto label_106794;
            case 0x106798u: goto label_106798;
            case 0x10679Cu: goto label_10679c;
            case 0x1067A0u: goto label_1067a0;
            case 0x1067A4u: goto label_1067a4;
            case 0x1067A8u: goto label_1067a8;
            case 0x1067ACu: goto label_1067ac;
            case 0x1067B0u: goto label_1067b0;
            case 0x1067B4u: goto label_1067b4;
            case 0x1067B8u: goto label_1067b8;
            case 0x1067BCu: goto label_1067bc;
            case 0x1067C0u: goto label_1067c0;
            case 0x1067C4u: goto label_1067c4;
            case 0x1067C8u: goto label_1067c8;
            case 0x1067CCu: goto label_1067cc;
            case 0x1067D0u: goto label_1067d0;
            case 0x1067D4u: goto label_1067d4;
            case 0x1067D8u: goto label_1067d8;
            case 0x1067DCu: goto label_1067dc;
            case 0x1067E0u: goto label_1067e0;
            case 0x1067E4u: goto label_1067e4;
            case 0x1067E8u: goto label_1067e8;
            case 0x1067ECu: goto label_1067ec;
            case 0x1067F0u: goto label_1067f0;
            case 0x1067F4u: goto label_1067f4;
            case 0x1067F8u: goto label_1067f8;
            case 0x1067FCu: goto label_1067fc;
            case 0x106800u: goto label_106800;
            case 0x106804u: goto label_106804;
            case 0x106808u: goto label_106808;
            case 0x10680Cu: goto label_10680c;
            case 0x106810u: goto label_106810;
            case 0x106814u: goto label_106814;
            case 0x106818u: goto label_106818;
            case 0x10681Cu: goto label_10681c;
            case 0x106820u: goto label_106820;
            case 0x106824u: goto label_106824;
            case 0x106828u: goto label_106828;
            case 0x10682Cu: goto label_10682c;
            case 0x106830u: goto label_106830;
            case 0x106834u: goto label_106834;
            case 0x106838u: goto label_106838;
            case 0x10683Cu: goto label_10683c;
            case 0x106840u: goto label_106840;
            case 0x106844u: goto label_106844;
            case 0x106848u: goto label_106848;
            case 0x10684Cu: goto label_10684c;
            case 0x106850u: goto label_106850;
            case 0x106854u: goto label_106854;
            case 0x106858u: goto label_106858;
            case 0x10685Cu: goto label_10685c;
            case 0x106860u: goto label_106860;
            case 0x106864u: goto label_106864;
            case 0x106868u: goto label_106868;
            case 0x10686Cu: goto label_10686c;
            case 0x106870u: goto label_106870;
            case 0x106874u: goto label_106874;
            case 0x106878u: goto label_106878;
            case 0x10687Cu: goto label_10687c;
            case 0x106880u: goto label_106880;
            case 0x106884u: goto label_106884;
            case 0x106888u: goto label_106888;
            case 0x10688Cu: goto label_10688c;
            case 0x106890u: goto label_106890;
            case 0x106894u: goto label_106894;
            case 0x106898u: goto label_106898;
            case 0x10689Cu: goto label_10689c;
            case 0x1068A0u: goto label_1068a0;
            case 0x1068A4u: goto label_1068a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10678Cu; }
            if (ctx->pc != 0x10678Cu) { return; }
        }
    }
    ctx->pc = 0x10678Cu;
label_10678c:
    // 0x10678c: 0x2629825
    ctx->pc = 0x10678cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_106790:
    // 0x106790: 0x2610ffff
    ctx->pc = 0x106790u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_106794:
    // 0x106794: 0x601fff8
label_106798:
    if (ctx->pc == 0x106798u) {
        ctx->pc = 0x106798u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x10679Cu;
        goto label_10679c;
    }
    ctx->pc = 0x106794u;
    {
        const bool branch_taken_0x106794 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x106798u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 88));
        if (branch_taken_0x106794) {
            ctx->pc = 0x106778u;
            goto label_106778;
        }
    }
    ctx->pc = 0x10679Cu;
label_10679c:
    // 0x10679c: 0x8e520000
    ctx->pc = 0x10679cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1067a0:
    // 0x1067a0: 0x5640fff1
label_1067a4:
    if (ctx->pc == 0x1067A4u) {
        ctx->pc = 0x1067A4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1067A8u;
        goto label_1067a8;
    }
    ctx->pc = 0x1067A0u;
    {
        const bool branch_taken_0x1067a0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x1067a0) {
            ctx->pc = 0x1067A4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x106768u;
            goto label_106768;
        }
    }
    ctx->pc = 0x1067A8u;
label_1067a8:
    // 0x1067a8: 0x260102d
    ctx->pc = 0x1067a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1067ac:
    // 0x1067ac: 0xdfb00000
    ctx->pc = 0x1067acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1067b0:
    // 0x1067b0: 0xdfb10008
    ctx->pc = 0x1067b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1067b4:
    // 0x1067b4: 0xdfb20010
    ctx->pc = 0x1067b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1067b8:
    // 0x1067b8: 0xdfb30018
    ctx->pc = 0x1067b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1067bc:
    // 0x1067bc: 0xdfb40020
    ctx->pc = 0x1067bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1067c0:
    // 0x1067c0: 0xdfbf0028
    ctx->pc = 0x1067c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1067c4:
    // 0x1067c4: 0x3e00008
label_1067c8:
    if (ctx->pc == 0x1067C8u) {
        ctx->pc = 0x1067C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1067CCu;
        goto label_1067cc;
    }
    ctx->pc = 0x1067C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1067C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106738u: goto label_106738;
            case 0x10673Cu: goto label_10673c;
            case 0x106740u: goto label_106740;
            case 0x106744u: goto label_106744;
            case 0x106748u: goto label_106748;
            case 0x10674Cu: goto label_10674c;
            case 0x106750u: goto label_106750;
            case 0x106754u: goto label_106754;
            case 0x106758u: goto label_106758;
            case 0x10675Cu: goto label_10675c;
            case 0x106760u: goto label_106760;
            case 0x106764u: goto label_106764;
            case 0x106768u: goto label_106768;
            case 0x10676Cu: goto label_10676c;
            case 0x106770u: goto label_106770;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x10677Cu: goto label_10677c;
            case 0x106780u: goto label_106780;
            case 0x106784u: goto label_106784;
            case 0x106788u: goto label_106788;
            case 0x10678Cu: goto label_10678c;
            case 0x106790u: goto label_106790;
            case 0x106794u: goto label_106794;
            case 0x106798u: goto label_106798;
            case 0x10679Cu: goto label_10679c;
            case 0x1067A0u: goto label_1067a0;
            case 0x1067A4u: goto label_1067a4;
            case 0x1067A8u: goto label_1067a8;
            case 0x1067ACu: goto label_1067ac;
            case 0x1067B0u: goto label_1067b0;
            case 0x1067B4u: goto label_1067b4;
            case 0x1067B8u: goto label_1067b8;
            case 0x1067BCu: goto label_1067bc;
            case 0x1067C0u: goto label_1067c0;
            case 0x1067C4u: goto label_1067c4;
            case 0x1067C8u: goto label_1067c8;
            case 0x1067CCu: goto label_1067cc;
            case 0x1067D0u: goto label_1067d0;
            case 0x1067D4u: goto label_1067d4;
            case 0x1067D8u: goto label_1067d8;
            case 0x1067DCu: goto label_1067dc;
            case 0x1067E0u: goto label_1067e0;
            case 0x1067E4u: goto label_1067e4;
            case 0x1067E8u: goto label_1067e8;
            case 0x1067ECu: goto label_1067ec;
            case 0x1067F0u: goto label_1067f0;
            case 0x1067F4u: goto label_1067f4;
            case 0x1067F8u: goto label_1067f8;
            case 0x1067FCu: goto label_1067fc;
            case 0x106800u: goto label_106800;
            case 0x106804u: goto label_106804;
            case 0x106808u: goto label_106808;
            case 0x10680Cu: goto label_10680c;
            case 0x106810u: goto label_106810;
            case 0x106814u: goto label_106814;
            case 0x106818u: goto label_106818;
            case 0x10681Cu: goto label_10681c;
            case 0x106820u: goto label_106820;
            case 0x106824u: goto label_106824;
            case 0x106828u: goto label_106828;
            case 0x10682Cu: goto label_10682c;
            case 0x106830u: goto label_106830;
            case 0x106834u: goto label_106834;
            case 0x106838u: goto label_106838;
            case 0x10683Cu: goto label_10683c;
            case 0x106840u: goto label_106840;
            case 0x106844u: goto label_106844;
            case 0x106848u: goto label_106848;
            case 0x10684Cu: goto label_10684c;
            case 0x106850u: goto label_106850;
            case 0x106854u: goto label_106854;
            case 0x106858u: goto label_106858;
            case 0x10685Cu: goto label_10685c;
            case 0x106860u: goto label_106860;
            case 0x106864u: goto label_106864;
            case 0x106868u: goto label_106868;
            case 0x10686Cu: goto label_10686c;
            case 0x106870u: goto label_106870;
            case 0x106874u: goto label_106874;
            case 0x106878u: goto label_106878;
            case 0x10687Cu: goto label_10687c;
            case 0x106880u: goto label_106880;
            case 0x106884u: goto label_106884;
            case 0x106888u: goto label_106888;
            case 0x10688Cu: goto label_10688c;
            case 0x106890u: goto label_106890;
            case 0x106894u: goto label_106894;
            case 0x106898u: goto label_106898;
            case 0x10689Cu: goto label_10689c;
            case 0x1068A0u: goto label_1068a0;
            case 0x1068A4u: goto label_1068a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1067CCu;
label_1067cc:
    // 0x1067cc: 0x0
    ctx->pc = 0x1067ccu;
    // NOP
label_1067d0:
    // 0x1067d0: 0x27bdffc0
    ctx->pc = 0x1067d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1067d4:
    // 0x1067d4: 0x24030001
    ctx->pc = 0x1067d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1067d8:
    // 0x1067d8: 0xffb10028
    ctx->pc = 0x1067d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1067dc:
    // 0x1067dc: 0xa0882d
    ctx->pc = 0x1067dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1067e0:
    // 0x1067e0: 0xffb20030
    ctx->pc = 0x1067e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1067e4:
    // 0x1067e4: 0xc0902d
    ctx->pc = 0x1067e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1067e8:
    // 0x1067e8: 0xffb00020
    ctx->pc = 0x1067e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1067ec:
    // 0x1067ec: 0x2518018
    ctx->pc = 0x1067ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
label_1067f0:
    // 0x1067f0: 0xafa40010
    ctx->pc = 0x1067f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1067f4:
    // 0x1067f4: 0xe0202d
    ctx->pc = 0x1067f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1067f8:
    // 0x1067f8: 0x27a20010
    ctx->pc = 0x1067f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
label_1067fc:
    // 0x1067fc: 0x3a0282d
    ctx->pc = 0x1067fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_106800:
    // 0x106800: 0xffbf0038
    ctx->pc = 0x106800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_106804:
    // 0x106804: 0xafa20000
    ctx->pc = 0x106804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_106808:
    // 0x106808: 0xafa30004
    ctx->pc = 0x106808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_10680c:
    // 0x10680c: 0xafb00014
    ctx->pc = 0x10680cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_106810:
    // 0x106810: 0xc0418d6
label_106814:
    if (ctx->pc == 0x106814u) {
        ctx->pc = 0x106814u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x106818u;
        goto label_106818;
    }
    ctx->pc = 0x106810u;
    SET_GPR_U32(ctx, 31, 0x106818u);
    ctx->pc = 0x106814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x106358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106358_0x106358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106818u; }
    }
    if (ctx->pc != 0x106818u) { return; }
    ctx->pc = 0x106818u;
label_106818:
    // 0x106818: 0x54400003
label_10681c:
    if (ctx->pc == 0x10681Cu) {
        ctx->pc = 0x10681Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x106820u;
        goto label_106820;
    }
    ctx->pc = 0x106818u;
    {
        const bool branch_taken_0x106818 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x106818) {
            ctx->pc = 0x10681Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->pc = 0x106828u;
            goto label_106828;
        }
    }
    ctx->pc = 0x106820u;
label_106820:
    // 0x106820: 0x10000006
label_106824:
    if (ctx->pc == 0x106824u) {
        ctx->pc = 0x106824u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x106828u;
        goto label_106828;
    }
    ctx->pc = 0x106820u;
    {
        const bool branch_taken_0x106820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106824u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x106820) {
            ctx->pc = 0x10683Cu;
            goto label_10683c;
        }
    }
    ctx->pc = 0x106828u;
label_106828:
    // 0x106828: 0x52200001
label_10682c:
    if (ctx->pc == 0x10682Cu) {
        ctx->pc = 0x10682Cu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x106830u;
        goto label_106830;
    }
    ctx->pc = 0x106828u;
    {
        const bool branch_taken_0x106828 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x106828) {
            ctx->pc = 0x10682Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x106830u;
            goto label_106830;
        }
    }
    ctx->pc = 0x106830u;
label_106830:
    // 0x106830: 0x2021023
    ctx->pc = 0x106830u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_106834:
    // 0x106834: 0x51001b
    ctx->pc = 0x106834u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 2) / divisor; ctx->hi = GPR_U32(ctx, 17) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,2); } }
label_106838:
    // 0x106838: 0x1012
    ctx->pc = 0x106838u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_10683c:
    // 0x10683c: 0xdfb00020
    ctx->pc = 0x10683cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_106840:
    // 0x106840: 0xdfb10028
    ctx->pc = 0x106840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_106844:
    // 0x106844: 0xdfb20030
    ctx->pc = 0x106844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_106848:
    // 0x106848: 0xdfbf0038
    ctx->pc = 0x106848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_10684c:
    // 0x10684c: 0x3e00008
label_106850:
    if (ctx->pc == 0x106850u) {
        ctx->pc = 0x106850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x106854u;
        goto label_106854;
    }
    ctx->pc = 0x10684Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106738u: goto label_106738;
            case 0x10673Cu: goto label_10673c;
            case 0x106740u: goto label_106740;
            case 0x106744u: goto label_106744;
            case 0x106748u: goto label_106748;
            case 0x10674Cu: goto label_10674c;
            case 0x106750u: goto label_106750;
            case 0x106754u: goto label_106754;
            case 0x106758u: goto label_106758;
            case 0x10675Cu: goto label_10675c;
            case 0x106760u: goto label_106760;
            case 0x106764u: goto label_106764;
            case 0x106768u: goto label_106768;
            case 0x10676Cu: goto label_10676c;
            case 0x106770u: goto label_106770;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x10677Cu: goto label_10677c;
            case 0x106780u: goto label_106780;
            case 0x106784u: goto label_106784;
            case 0x106788u: goto label_106788;
            case 0x10678Cu: goto label_10678c;
            case 0x106790u: goto label_106790;
            case 0x106794u: goto label_106794;
            case 0x106798u: goto label_106798;
            case 0x10679Cu: goto label_10679c;
            case 0x1067A0u: goto label_1067a0;
            case 0x1067A4u: goto label_1067a4;
            case 0x1067A8u: goto label_1067a8;
            case 0x1067ACu: goto label_1067ac;
            case 0x1067B0u: goto label_1067b0;
            case 0x1067B4u: goto label_1067b4;
            case 0x1067B8u: goto label_1067b8;
            case 0x1067BCu: goto label_1067bc;
            case 0x1067C0u: goto label_1067c0;
            case 0x1067C4u: goto label_1067c4;
            case 0x1067C8u: goto label_1067c8;
            case 0x1067CCu: goto label_1067cc;
            case 0x1067D0u: goto label_1067d0;
            case 0x1067D4u: goto label_1067d4;
            case 0x1067D8u: goto label_1067d8;
            case 0x1067DCu: goto label_1067dc;
            case 0x1067E0u: goto label_1067e0;
            case 0x1067E4u: goto label_1067e4;
            case 0x1067E8u: goto label_1067e8;
            case 0x1067ECu: goto label_1067ec;
            case 0x1067F0u: goto label_1067f0;
            case 0x1067F4u: goto label_1067f4;
            case 0x1067F8u: goto label_1067f8;
            case 0x1067FCu: goto label_1067fc;
            case 0x106800u: goto label_106800;
            case 0x106804u: goto label_106804;
            case 0x106808u: goto label_106808;
            case 0x10680Cu: goto label_10680c;
            case 0x106810u: goto label_106810;
            case 0x106814u: goto label_106814;
            case 0x106818u: goto label_106818;
            case 0x10681Cu: goto label_10681c;
            case 0x106820u: goto label_106820;
            case 0x106824u: goto label_106824;
            case 0x106828u: goto label_106828;
            case 0x10682Cu: goto label_10682c;
            case 0x106830u: goto label_106830;
            case 0x106834u: goto label_106834;
            case 0x106838u: goto label_106838;
            case 0x10683Cu: goto label_10683c;
            case 0x106840u: goto label_106840;
            case 0x106844u: goto label_106844;
            case 0x106848u: goto label_106848;
            case 0x10684Cu: goto label_10684c;
            case 0x106850u: goto label_106850;
            case 0x106854u: goto label_106854;
            case 0x106858u: goto label_106858;
            case 0x10685Cu: goto label_10685c;
            case 0x106860u: goto label_106860;
            case 0x106864u: goto label_106864;
            case 0x106868u: goto label_106868;
            case 0x10686Cu: goto label_10686c;
            case 0x106870u: goto label_106870;
            case 0x106874u: goto label_106874;
            case 0x106878u: goto label_106878;
            case 0x10687Cu: goto label_10687c;
            case 0x106880u: goto label_106880;
            case 0x106884u: goto label_106884;
            case 0x106888u: goto label_106888;
            case 0x10688Cu: goto label_10688c;
            case 0x106890u: goto label_106890;
            case 0x106894u: goto label_106894;
            case 0x106898u: goto label_106898;
            case 0x10689Cu: goto label_10689c;
            case 0x1068A0u: goto label_1068a0;
            case 0x1068A4u: goto label_1068a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106854u;
label_106854:
    // 0x106854: 0x0
    ctx->pc = 0x106854u;
    // NOP
label_106858:
    // 0x106858: 0x27bdfff0
    ctx->pc = 0x106858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_10685c:
    // 0x10685c: 0x3c020021
    ctx->pc = 0x10685cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_106860:
    // 0x106860: 0xffbf0000
    ctx->pc = 0x106860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106864:
    // 0x106864: 0xa0302d
    ctx->pc = 0x106864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_106868:
    // 0x106868: 0x80282d
    ctx->pc = 0x106868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10686c:
    // 0x10686c: 0x8c4497f0
    ctx->pc = 0x10686cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_106870:
    // 0x106870: 0xdfbf0000
    ctx->pc = 0x106870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106874:
    // 0x106874: 0x8041a2a
label_106878:
    if (ctx->pc == 0x106878u) {
        ctx->pc = 0x106878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10687Cu;
        goto label_10687c;
    }
    ctx->pc = 0x106874u;
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1068A8u;
    sub_001068A8_0x1068a8(rdram, ctx, runtime); return;
    ctx->pc = 0x10687Cu;
label_10687c:
    // 0x10687c: 0x0
    ctx->pc = 0x10687cu;
    // NOP
label_106880:
    // 0x106880: 0x3c020021
    ctx->pc = 0x106880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_106884:
    // 0x106884: 0x27bdffe0
    ctx->pc = 0x106884u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_106888:
    // 0x106888: 0x80282d
    ctx->pc = 0x106888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10688c:
    // 0x10688c: 0x8c4497f0
    ctx->pc = 0x10688cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_106890:
    // 0x106890: 0xffbf0010
    ctx->pc = 0x106890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_106894:
    // 0x106894: 0xc041a2a
label_106898:
    if (ctx->pc == 0x106898u) {
        ctx->pc = 0x106898u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10689Cu;
        goto label_10689c;
    }
    ctx->pc = 0x106894u;
    SET_GPR_U32(ctx, 31, 0x10689Cu);
    ctx->pc = 0x106898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1068A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001068A8_0x1068a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10689Cu; }
    }
    if (ctx->pc != 0x10689Cu) { return; }
    ctx->pc = 0x10689Cu;
label_10689c:
    // 0x10689c: 0xdfbf0010
    ctx->pc = 0x10689cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1068a0:
    // 0x1068a0: 0x3e00008
label_1068a4:
    if (ctx->pc == 0x1068A4u) {
        ctx->pc = 0x1068A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1068A8u;
        goto label_fallthrough_0x1068a0;
    }
    ctx->pc = 0x1068A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1068A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106738u: goto label_106738;
            case 0x10673Cu: goto label_10673c;
            case 0x106740u: goto label_106740;
            case 0x106744u: goto label_106744;
            case 0x106748u: goto label_106748;
            case 0x10674Cu: goto label_10674c;
            case 0x106750u: goto label_106750;
            case 0x106754u: goto label_106754;
            case 0x106758u: goto label_106758;
            case 0x10675Cu: goto label_10675c;
            case 0x106760u: goto label_106760;
            case 0x106764u: goto label_106764;
            case 0x106768u: goto label_106768;
            case 0x10676Cu: goto label_10676c;
            case 0x106770u: goto label_106770;
            case 0x106774u: goto label_106774;
            case 0x106778u: goto label_106778;
            case 0x10677Cu: goto label_10677c;
            case 0x106780u: goto label_106780;
            case 0x106784u: goto label_106784;
            case 0x106788u: goto label_106788;
            case 0x10678Cu: goto label_10678c;
            case 0x106790u: goto label_106790;
            case 0x106794u: goto label_106794;
            case 0x106798u: goto label_106798;
            case 0x10679Cu: goto label_10679c;
            case 0x1067A0u: goto label_1067a0;
            case 0x1067A4u: goto label_1067a4;
            case 0x1067A8u: goto label_1067a8;
            case 0x1067ACu: goto label_1067ac;
            case 0x1067B0u: goto label_1067b0;
            case 0x1067B4u: goto label_1067b4;
            case 0x1067B8u: goto label_1067b8;
            case 0x1067BCu: goto label_1067bc;
            case 0x1067C0u: goto label_1067c0;
            case 0x1067C4u: goto label_1067c4;
            case 0x1067C8u: goto label_1067c8;
            case 0x1067CCu: goto label_1067cc;
            case 0x1067D0u: goto label_1067d0;
            case 0x1067D4u: goto label_1067d4;
            case 0x1067D8u: goto label_1067d8;
            case 0x1067DCu: goto label_1067dc;
            case 0x1067E0u: goto label_1067e0;
            case 0x1067E4u: goto label_1067e4;
            case 0x1067E8u: goto label_1067e8;
            case 0x1067ECu: goto label_1067ec;
            case 0x1067F0u: goto label_1067f0;
            case 0x1067F4u: goto label_1067f4;
            case 0x1067F8u: goto label_1067f8;
            case 0x1067FCu: goto label_1067fc;
            case 0x106800u: goto label_106800;
            case 0x106804u: goto label_106804;
            case 0x106808u: goto label_106808;
            case 0x10680Cu: goto label_10680c;
            case 0x106810u: goto label_106810;
            case 0x106814u: goto label_106814;
            case 0x106818u: goto label_106818;
            case 0x10681Cu: goto label_10681c;
            case 0x106820u: goto label_106820;
            case 0x106824u: goto label_106824;
            case 0x106828u: goto label_106828;
            case 0x10682Cu: goto label_10682c;
            case 0x106830u: goto label_106830;
            case 0x106834u: goto label_106834;
            case 0x106838u: goto label_106838;
            case 0x10683Cu: goto label_10683c;
            case 0x106840u: goto label_106840;
            case 0x106844u: goto label_106844;
            case 0x106848u: goto label_106848;
            case 0x10684Cu: goto label_10684c;
            case 0x106850u: goto label_106850;
            case 0x106854u: goto label_106854;
            case 0x106858u: goto label_106858;
            case 0x10685Cu: goto label_10685c;
            case 0x106860u: goto label_106860;
            case 0x106864u: goto label_106864;
            case 0x106868u: goto label_106868;
            case 0x10686Cu: goto label_10686c;
            case 0x106870u: goto label_106870;
            case 0x106874u: goto label_106874;
            case 0x106878u: goto label_106878;
            case 0x10687Cu: goto label_10687c;
            case 0x106880u: goto label_106880;
            case 0x106884u: goto label_106884;
            case 0x106888u: goto label_106888;
            case 0x10688Cu: goto label_10688c;
            case 0x106890u: goto label_106890;
            case 0x106894u: goto label_106894;
            case 0x106898u: goto label_106898;
            case 0x10689Cu: goto label_10689c;
            case 0x1068A0u: goto label_1068a0;
            case 0x1068A4u: goto label_1068a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1068a0:
    ctx->pc = 0x1068A8u;
}
