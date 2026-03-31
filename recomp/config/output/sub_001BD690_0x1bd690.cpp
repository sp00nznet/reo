#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BD690
// Address: 0x1bd690 - 0x1bd980
void sub_001BD690_0x1bd690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bd690u;

label_1bd690:
    // 0x1bd690: 0x3c010023
    ctx->pc = 0x1bd690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1bd694:
    // 0x1bd694: 0x24020003
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1bd698:
    // 0x1bd698: 0x8c245008
    ctx->pc = 0x1bd698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20488)));
label_1bd69c:
    // 0x1bd69c: 0x1082000b
label_1bd6a0:
    if (ctx->pc == 0x1BD6A0u) {
        ctx->pc = 0x1BD6A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BD6A4u;
        goto label_1bd6a4;
    }
    ctx->pc = 0x1BD69Cu;
    {
        const bool branch_taken_0x1bd69c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BD6A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bd69c) {
            ctx->pc = 0x1BD6CCu;
            goto label_1bd6cc;
        }
    }
    ctx->pc = 0x1BD6A4u;
label_1bd6a4:
    // 0x1bd6a4: 0x24030002
    ctx->pc = 0x1bd6a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1bd6a8:
    // 0x1bd6a8: 0x10830008
label_1bd6ac:
    if (ctx->pc == 0x1BD6ACu) {
        ctx->pc = 0x1BD6B0u;
        goto label_1bd6b0;
    }
    ctx->pc = 0x1BD6A8u;
    {
        const bool branch_taken_0x1bd6a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bd6a8) {
            ctx->pc = 0x1BD6CCu;
            goto label_1bd6cc;
        }
    }
    ctx->pc = 0x1BD6B0u;
label_1bd6b0:
    // 0x1bd6b0: 0x24020001
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1bd6b4:
    // 0x1bd6b4: 0x10820003
label_1bd6b8:
    if (ctx->pc == 0x1BD6B8u) {
        ctx->pc = 0x1BD6B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1BD6BCu;
        goto label_1bd6bc;
    }
    ctx->pc = 0x1BD6B4u;
    {
        const bool branch_taken_0x1bd6b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1BD6B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1bd6b4) {
            ctx->pc = 0x1BD6C4u;
            goto label_1bd6c4;
        }
    }
    ctx->pc = 0x1BD6BCu;
label_1bd6bc:
    // 0x1bd6bc: 0x10000005
label_1bd6c0:
    if (ctx->pc == 0x1BD6C0u) {
        ctx->pc = 0x1BD6C0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1BD6C4u;
        goto label_1bd6c4;
    }
    ctx->pc = 0x1BD6BCu;
    {
        const bool branch_taken_0x1bd6bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD6C0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bd6bc) {
            ctx->pc = 0x1BD6D4u;
            goto label_1bd6d4;
        }
    }
    ctx->pc = 0x1BD6C4u;
label_1bd6c4:
    // 0x1bd6c4: 0x1000000d
label_1bd6c8:
    if (ctx->pc == 0x1BD6C8u) {
        ctx->pc = 0x1BD6CCu;
        goto label_1bd6cc;
    }
    ctx->pc = 0x1BD6C4u;
    {
        const bool branch_taken_0x1bd6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bd6c4) {
            ctx->pc = 0x1BD6FCu;
            goto label_1bd6fc;
        }
    }
    ctx->pc = 0x1BD6CCu;
label_1bd6cc:
    // 0x1bd6cc: 0x1000000b
label_1bd6d0:
    if (ctx->pc == 0x1BD6D0u) {
        ctx->pc = 0x1BD6D4u;
        goto label_1bd6d4;
    }
    ctx->pc = 0x1BD6CCu;
    {
        const bool branch_taken_0x1bd6cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bd6cc) {
            ctx->pc = 0x1BD6FCu;
            goto label_1bd6fc;
        }
    }
    ctx->pc = 0x1BD6D4u;
label_1bd6d4:
    // 0x1bd6d4: 0x8c2244e0
    ctx->pc = 0x1bd6d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 17632)));
label_1bd6d8:
    // 0x1bd6d8: 0x10400007
label_1bd6dc:
    if (ctx->pc == 0x1BD6DCu) {
        ctx->pc = 0x1BD6E0u;
        goto label_1bd6e0;
    }
    ctx->pc = 0x1BD6D8u;
    {
        const bool branch_taken_0x1bd6d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bd6d8) {
            ctx->pc = 0x1BD6F8u;
            goto label_1bd6f8;
        }
    }
    ctx->pc = 0x1BD6E0u;
label_1bd6e0:
    // 0x1bd6e0: 0x10430003
label_1bd6e4:
    if (ctx->pc == 0x1BD6E4u) {
        ctx->pc = 0x1BD6E8u;
        goto label_1bd6e8;
    }
    ctx->pc = 0x1BD6E0u;
    {
        const bool branch_taken_0x1bd6e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1bd6e0) {
            ctx->pc = 0x1BD6F0u;
            goto label_1bd6f0;
        }
    }
    ctx->pc = 0x1BD6E8u;
label_1bd6e8:
    // 0x1bd6e8: 0x10000004
label_1bd6ec:
    if (ctx->pc == 0x1BD6ECu) {
        ctx->pc = 0x1BD6ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6F0u;
        goto label_1bd6f0;
    }
    ctx->pc = 0x1BD6E8u;
    {
        const bool branch_taken_0x1bd6e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD6ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6e8) {
            ctx->pc = 0x1BD6FCu;
            goto label_1bd6fc;
        }
    }
    ctx->pc = 0x1BD6F0u;
label_1bd6f0:
    // 0x1bd6f0: 0x10000002
label_1bd6f4:
    if (ctx->pc == 0x1BD6F4u) {
        ctx->pc = 0x1BD6F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x1BD6F8u;
        goto label_1bd6f8;
    }
    ctx->pc = 0x1BD6F0u;
    {
        const bool branch_taken_0x1bd6f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD6F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x1bd6f0) {
            ctx->pc = 0x1BD6FCu;
            goto label_1bd6fc;
        }
    }
    ctx->pc = 0x1BD6F8u;
label_1bd6f8:
    // 0x1bd6f8: 0x2402fffc
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_1bd6fc:
    // 0x1bd6fc: 0x3e00008
label_1bd700:
    if (ctx->pc == 0x1BD700u) {
        ctx->pc = 0x1BD704u;
        goto label_1bd704;
    }
    ctx->pc = 0x1BD6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD690u: goto label_1bd690;
            case 0x1BD694u: goto label_1bd694;
            case 0x1BD698u: goto label_1bd698;
            case 0x1BD69Cu: goto label_1bd69c;
            case 0x1BD6A0u: goto label_1bd6a0;
            case 0x1BD6A4u: goto label_1bd6a4;
            case 0x1BD6A8u: goto label_1bd6a8;
            case 0x1BD6ACu: goto label_1bd6ac;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6B4u: goto label_1bd6b4;
            case 0x1BD6B8u: goto label_1bd6b8;
            case 0x1BD6BCu: goto label_1bd6bc;
            case 0x1BD6C0u: goto label_1bd6c0;
            case 0x1BD6C4u: goto label_1bd6c4;
            case 0x1BD6C8u: goto label_1bd6c8;
            case 0x1BD6CCu: goto label_1bd6cc;
            case 0x1BD6D0u: goto label_1bd6d0;
            case 0x1BD6D4u: goto label_1bd6d4;
            case 0x1BD6D8u: goto label_1bd6d8;
            case 0x1BD6DCu: goto label_1bd6dc;
            case 0x1BD6E0u: goto label_1bd6e0;
            case 0x1BD6E4u: goto label_1bd6e4;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD6ECu: goto label_1bd6ec;
            case 0x1BD6F0u: goto label_1bd6f0;
            case 0x1BD6F4u: goto label_1bd6f4;
            case 0x1BD6F8u: goto label_1bd6f8;
            case 0x1BD6FCu: goto label_1bd6fc;
            case 0x1BD700u: goto label_1bd700;
            case 0x1BD704u: goto label_1bd704;
            case 0x1BD708u: goto label_1bd708;
            case 0x1BD70Cu: goto label_1bd70c;
            case 0x1BD710u: goto label_1bd710;
            case 0x1BD714u: goto label_1bd714;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD71Cu: goto label_1bd71c;
            case 0x1BD720u: goto label_1bd720;
            case 0x1BD724u: goto label_1bd724;
            case 0x1BD728u: goto label_1bd728;
            case 0x1BD72Cu: goto label_1bd72c;
            case 0x1BD730u: goto label_1bd730;
            case 0x1BD734u: goto label_1bd734;
            case 0x1BD738u: goto label_1bd738;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD740u: goto label_1bd740;
            case 0x1BD744u: goto label_1bd744;
            case 0x1BD748u: goto label_1bd748;
            case 0x1BD74Cu: goto label_1bd74c;
            case 0x1BD750u: goto label_1bd750;
            case 0x1BD754u: goto label_1bd754;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD75Cu: goto label_1bd75c;
            case 0x1BD760u: goto label_1bd760;
            case 0x1BD764u: goto label_1bd764;
            case 0x1BD768u: goto label_1bd768;
            case 0x1BD76Cu: goto label_1bd76c;
            case 0x1BD770u: goto label_1bd770;
            case 0x1BD774u: goto label_1bd774;
            case 0x1BD778u: goto label_1bd778;
            case 0x1BD77Cu: goto label_1bd77c;
            case 0x1BD780u: goto label_1bd780;
            case 0x1BD784u: goto label_1bd784;
            case 0x1BD788u: goto label_1bd788;
            case 0x1BD78Cu: goto label_1bd78c;
            case 0x1BD790u: goto label_1bd790;
            case 0x1BD794u: goto label_1bd794;
            case 0x1BD798u: goto label_1bd798;
            case 0x1BD79Cu: goto label_1bd79c;
            case 0x1BD7A0u: goto label_1bd7a0;
            case 0x1BD7A4u: goto label_1bd7a4;
            case 0x1BD7A8u: goto label_1bd7a8;
            case 0x1BD7ACu: goto label_1bd7ac;
            case 0x1BD7B0u: goto label_1bd7b0;
            case 0x1BD7B4u: goto label_1bd7b4;
            case 0x1BD7B8u: goto label_1bd7b8;
            case 0x1BD7BCu: goto label_1bd7bc;
            case 0x1BD7C0u: goto label_1bd7c0;
            case 0x1BD7C4u: goto label_1bd7c4;
            case 0x1BD7C8u: goto label_1bd7c8;
            case 0x1BD7CCu: goto label_1bd7cc;
            case 0x1BD7D0u: goto label_1bd7d0;
            case 0x1BD7D4u: goto label_1bd7d4;
            case 0x1BD7D8u: goto label_1bd7d8;
            case 0x1BD7DCu: goto label_1bd7dc;
            case 0x1BD7E0u: goto label_1bd7e0;
            case 0x1BD7E4u: goto label_1bd7e4;
            case 0x1BD7E8u: goto label_1bd7e8;
            case 0x1BD7ECu: goto label_1bd7ec;
            case 0x1BD7F0u: goto label_1bd7f0;
            case 0x1BD7F4u: goto label_1bd7f4;
            case 0x1BD7F8u: goto label_1bd7f8;
            case 0x1BD7FCu: goto label_1bd7fc;
            case 0x1BD800u: goto label_1bd800;
            case 0x1BD804u: goto label_1bd804;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD80Cu: goto label_1bd80c;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD814u: goto label_1bd814;
            case 0x1BD818u: goto label_1bd818;
            case 0x1BD81Cu: goto label_1bd81c;
            case 0x1BD820u: goto label_1bd820;
            case 0x1BD824u: goto label_1bd824;
            case 0x1BD828u: goto label_1bd828;
            case 0x1BD82Cu: goto label_1bd82c;
            case 0x1BD830u: goto label_1bd830;
            case 0x1BD834u: goto label_1bd834;
            case 0x1BD838u: goto label_1bd838;
            case 0x1BD83Cu: goto label_1bd83c;
            case 0x1BD840u: goto label_1bd840;
            case 0x1BD844u: goto label_1bd844;
            case 0x1BD848u: goto label_1bd848;
            case 0x1BD84Cu: goto label_1bd84c;
            case 0x1BD850u: goto label_1bd850;
            case 0x1BD854u: goto label_1bd854;
            case 0x1BD858u: goto label_1bd858;
            case 0x1BD85Cu: goto label_1bd85c;
            case 0x1BD860u: goto label_1bd860;
            case 0x1BD864u: goto label_1bd864;
            case 0x1BD868u: goto label_1bd868;
            case 0x1BD86Cu: goto label_1bd86c;
            case 0x1BD870u: goto label_1bd870;
            case 0x1BD874u: goto label_1bd874;
            case 0x1BD878u: goto label_1bd878;
            case 0x1BD87Cu: goto label_1bd87c;
            case 0x1BD880u: goto label_1bd880;
            case 0x1BD884u: goto label_1bd884;
            case 0x1BD888u: goto label_1bd888;
            case 0x1BD88Cu: goto label_1bd88c;
            case 0x1BD890u: goto label_1bd890;
            case 0x1BD894u: goto label_1bd894;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD89Cu: goto label_1bd89c;
            case 0x1BD8A0u: goto label_1bd8a0;
            case 0x1BD8A4u: goto label_1bd8a4;
            case 0x1BD8A8u: goto label_1bd8a8;
            case 0x1BD8ACu: goto label_1bd8ac;
            case 0x1BD8B0u: goto label_1bd8b0;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8B8u: goto label_1bd8b8;
            case 0x1BD8BCu: goto label_1bd8bc;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD8C4u: goto label_1bd8c4;
            case 0x1BD8C8u: goto label_1bd8c8;
            case 0x1BD8CCu: goto label_1bd8cc;
            case 0x1BD8D0u: goto label_1bd8d0;
            case 0x1BD8D4u: goto label_1bd8d4;
            case 0x1BD8D8u: goto label_1bd8d8;
            case 0x1BD8DCu: goto label_1bd8dc;
            case 0x1BD8E0u: goto label_1bd8e0;
            case 0x1BD8E4u: goto label_1bd8e4;
            case 0x1BD8E8u: goto label_1bd8e8;
            case 0x1BD8ECu: goto label_1bd8ec;
            case 0x1BD8F0u: goto label_1bd8f0;
            case 0x1BD8F4u: goto label_1bd8f4;
            case 0x1BD8F8u: goto label_1bd8f8;
            case 0x1BD8FCu: goto label_1bd8fc;
            case 0x1BD900u: goto label_1bd900;
            case 0x1BD904u: goto label_1bd904;
            case 0x1BD908u: goto label_1bd908;
            case 0x1BD90Cu: goto label_1bd90c;
            case 0x1BD910u: goto label_1bd910;
            case 0x1BD914u: goto label_1bd914;
            case 0x1BD918u: goto label_1bd918;
            case 0x1BD91Cu: goto label_1bd91c;
            case 0x1BD920u: goto label_1bd920;
            case 0x1BD924u: goto label_1bd924;
            case 0x1BD928u: goto label_1bd928;
            case 0x1BD92Cu: goto label_1bd92c;
            case 0x1BD930u: goto label_1bd930;
            case 0x1BD934u: goto label_1bd934;
            case 0x1BD938u: goto label_1bd938;
            case 0x1BD93Cu: goto label_1bd93c;
            case 0x1BD940u: goto label_1bd940;
            case 0x1BD944u: goto label_1bd944;
            case 0x1BD948u: goto label_1bd948;
            case 0x1BD94Cu: goto label_1bd94c;
            case 0x1BD950u: goto label_1bd950;
            case 0x1BD954u: goto label_1bd954;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD960u: goto label_1bd960;
            case 0x1BD964u: goto label_1bd964;
            case 0x1BD968u: goto label_1bd968;
            case 0x1BD96Cu: goto label_1bd96c;
            case 0x1BD970u: goto label_1bd970;
            case 0x1BD974u: goto label_1bd974;
            case 0x1BD978u: goto label_1bd978;
            case 0x1BD97Cu: goto label_1bd97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD704u;
label_1bd704:
    // 0x1bd704: 0x0
    ctx->pc = 0x1bd704u;
    // NOP
label_1bd708:
    // 0x1bd708: 0x0
    ctx->pc = 0x1bd708u;
    // NOP
label_1bd70c:
    // 0x1bd70c: 0x0
    ctx->pc = 0x1bd70cu;
    // NOP
label_1bd710:
    // 0x1bd710: 0x27bdfff0
    ctx->pc = 0x1bd710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd714:
    // 0x1bd714: 0x3c010023
    ctx->pc = 0x1bd714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1bd718:
    // 0x1bd718: 0xffbf0000
    ctx->pc = 0x1bd718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bd71c:
    // 0x1bd71c: 0x8c235018
    ctx->pc = 0x1bd71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20504)));
label_1bd720:
    // 0x1bd720: 0x460001e
label_1bd724:
    if (ctx->pc == 0x1BD724u) {
        ctx->pc = 0x1BD724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD728u;
        goto label_1bd728;
    }
    ctx->pc = 0x1BD720u;
    {
        const bool branch_taken_0x1bd720 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BD724u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bd720) {
            ctx->pc = 0x1BD79Cu;
            goto label_1bd79c;
        }
    }
    ctx->pc = 0x1BD728u;
label_1bd728:
    // 0x1bd728: 0xc0401ba
label_1bd72c:
    if (ctx->pc == 0x1BD72Cu) {
        ctx->pc = 0x1BD72Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD730u;
        goto label_1bd730;
    }
    ctx->pc = 0x1BD728u;
    SET_GPR_U32(ctx, 31, 0x1BD730u);
    ctx->pc = 0x1BD72Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1006E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001006E8_0x1006e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD730u; }
    }
    if (ctx->pc != 0x1BD730u) { return; }
    ctx->pc = 0x1BD730u;
label_1bd730:
    // 0x1bd730: 0x3c010023
    ctx->pc = 0x1bd730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1bd734:
    // 0x1bd734: 0xc04511c
label_1bd738:
    if (ctx->pc == 0x1BD738u) {
        ctx->pc = 0x1BD738u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20504)));
        ctx->pc = 0x1BD73Cu;
        goto label_1bd73c;
    }
    ctx->pc = 0x1BD734u;
    SET_GPR_U32(ctx, 31, 0x1BD73Cu);
    ctx->pc = 0x1BD738u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20504)));
    ctx->pc = 0x114470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114470_0x114470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD73Cu; }
    }
    if (ctx->pc != 0x1BD73Cu) { return; }
    ctx->pc = 0x1BD73Cu;
label_1bd73c:
    // 0x1bd73c: 0x3c010023
    ctx->pc = 0x1bd73cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1bd740:
    // 0x1bd740: 0xc04510c
label_1bd744:
    if (ctx->pc == 0x1BD744u) {
        ctx->pc = 0x1BD744u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20504)));
        ctx->pc = 0x1BD748u;
        goto label_1bd748;
    }
    ctx->pc = 0x1BD740u;
    SET_GPR_U32(ctx, 31, 0x1BD748u);
    ctx->pc = 0x1BD744u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20504)));
    ctx->pc = 0x114430u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114430_0x114430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD748u; }
    }
    if (ctx->pc != 0x1BD748u) { return; }
    ctx->pc = 0x1BD748u;
label_1bd748:
    // 0x1bd748: 0x3c010023
    ctx->pc = 0x1bd748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1bd74c:
    // 0x1bd74c: 0xc04518c
label_1bd750:
    if (ctx->pc == 0x1BD750u) {
        ctx->pc = 0x1BD750u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20496)));
        ctx->pc = 0x1BD754u;
        goto label_1bd754;
    }
    ctx->pc = 0x1BD74Cu;
    SET_GPR_U32(ctx, 31, 0x1BD754u);
    ctx->pc = 0x1BD750u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 20496)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD754u; }
    }
    if (ctx->pc != 0x1BD754u) { return; }
    ctx->pc = 0x1BD754u;
label_1bd754:
    // 0x1bd754: 0x3c040025
    ctx->pc = 0x1bd754u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
label_1bd758:
    // 0x1bd758: 0x24055003
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20483));
label_1bd75c:
    // 0x1bd75c: 0x24840420
    ctx->pc = 0x1bd75cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1056));
label_1bd760:
    // 0x1bd760: 0x302d
    ctx->pc = 0x1bd760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd764:
    // 0x1bd764: 0x382d
    ctx->pc = 0x1bd764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd768:
    // 0x1bd768: 0x402d
    ctx->pc = 0x1bd768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd76c:
    // 0x1bd76c: 0xc046c92
label_1bd770:
    if (ctx->pc == 0x1BD770u) {
        ctx->pc = 0x1BD770u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD774u;
        goto label_1bd774;
    }
    ctx->pc = 0x1BD76Cu;
    SET_GPR_U32(ctx, 31, 0x1BD774u);
    ctx->pc = 0x1BD770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B248_0x11b248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD774u; }
    }
    if (ctx->pc != 0x1BD774u) { return; }
    ctx->pc = 0x1BD774u;
label_1bd774:
    // 0x1bd774: 0x3c040025
    ctx->pc = 0x1bd774u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
label_1bd778:
    // 0x1bd778: 0x24054402
    ctx->pc = 0x1bd778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17410));
label_1bd77c:
    // 0x1bd77c: 0x24840418
    ctx->pc = 0x1bd77cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1048));
label_1bd780:
    // 0x1bd780: 0x302d
    ctx->pc = 0x1bd780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd784:
    // 0x1bd784: 0x382d
    ctx->pc = 0x1bd784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd788:
    // 0x1bd788: 0x402d
    ctx->pc = 0x1bd788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd78c:
    // 0x1bd78c: 0xc046c92
label_1bd790:
    if (ctx->pc == 0x1BD790u) {
        ctx->pc = 0x1BD790u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD794u;
        goto label_1bd794;
    }
    ctx->pc = 0x1BD78Cu;
    SET_GPR_U32(ctx, 31, 0x1BD794u);
    ctx->pc = 0x1BD790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B248_0x11b248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD794u; }
    }
    if (ctx->pc != 0x1BD794u) { return; }
    ctx->pc = 0x1BD794u;
label_1bd794:
    // 0x1bd794: 0x440fff7
label_1bd798:
    if (ctx->pc == 0x1BD798u) {
        ctx->pc = 0x1BD79Cu;
        goto label_1bd79c;
    }
    ctx->pc = 0x1BD794u;
    {
        const bool branch_taken_0x1bd794 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bd794) {
            ctx->pc = 0x1BD774u;
            goto label_1bd774;
        }
    }
    ctx->pc = 0x1BD79Cu;
label_1bd79c:
    // 0x1bd79c: 0xdfbf0000
    ctx->pc = 0x1bd79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd7a0:
    // 0x1bd7a0: 0x3e00008
label_1bd7a4:
    if (ctx->pc == 0x1BD7A4u) {
        ctx->pc = 0x1BD7A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD7A8u;
        goto label_1bd7a8;
    }
    ctx->pc = 0x1BD7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD7A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD690u: goto label_1bd690;
            case 0x1BD694u: goto label_1bd694;
            case 0x1BD698u: goto label_1bd698;
            case 0x1BD69Cu: goto label_1bd69c;
            case 0x1BD6A0u: goto label_1bd6a0;
            case 0x1BD6A4u: goto label_1bd6a4;
            case 0x1BD6A8u: goto label_1bd6a8;
            case 0x1BD6ACu: goto label_1bd6ac;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6B4u: goto label_1bd6b4;
            case 0x1BD6B8u: goto label_1bd6b8;
            case 0x1BD6BCu: goto label_1bd6bc;
            case 0x1BD6C0u: goto label_1bd6c0;
            case 0x1BD6C4u: goto label_1bd6c4;
            case 0x1BD6C8u: goto label_1bd6c8;
            case 0x1BD6CCu: goto label_1bd6cc;
            case 0x1BD6D0u: goto label_1bd6d0;
            case 0x1BD6D4u: goto label_1bd6d4;
            case 0x1BD6D8u: goto label_1bd6d8;
            case 0x1BD6DCu: goto label_1bd6dc;
            case 0x1BD6E0u: goto label_1bd6e0;
            case 0x1BD6E4u: goto label_1bd6e4;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD6ECu: goto label_1bd6ec;
            case 0x1BD6F0u: goto label_1bd6f0;
            case 0x1BD6F4u: goto label_1bd6f4;
            case 0x1BD6F8u: goto label_1bd6f8;
            case 0x1BD6FCu: goto label_1bd6fc;
            case 0x1BD700u: goto label_1bd700;
            case 0x1BD704u: goto label_1bd704;
            case 0x1BD708u: goto label_1bd708;
            case 0x1BD70Cu: goto label_1bd70c;
            case 0x1BD710u: goto label_1bd710;
            case 0x1BD714u: goto label_1bd714;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD71Cu: goto label_1bd71c;
            case 0x1BD720u: goto label_1bd720;
            case 0x1BD724u: goto label_1bd724;
            case 0x1BD728u: goto label_1bd728;
            case 0x1BD72Cu: goto label_1bd72c;
            case 0x1BD730u: goto label_1bd730;
            case 0x1BD734u: goto label_1bd734;
            case 0x1BD738u: goto label_1bd738;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD740u: goto label_1bd740;
            case 0x1BD744u: goto label_1bd744;
            case 0x1BD748u: goto label_1bd748;
            case 0x1BD74Cu: goto label_1bd74c;
            case 0x1BD750u: goto label_1bd750;
            case 0x1BD754u: goto label_1bd754;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD75Cu: goto label_1bd75c;
            case 0x1BD760u: goto label_1bd760;
            case 0x1BD764u: goto label_1bd764;
            case 0x1BD768u: goto label_1bd768;
            case 0x1BD76Cu: goto label_1bd76c;
            case 0x1BD770u: goto label_1bd770;
            case 0x1BD774u: goto label_1bd774;
            case 0x1BD778u: goto label_1bd778;
            case 0x1BD77Cu: goto label_1bd77c;
            case 0x1BD780u: goto label_1bd780;
            case 0x1BD784u: goto label_1bd784;
            case 0x1BD788u: goto label_1bd788;
            case 0x1BD78Cu: goto label_1bd78c;
            case 0x1BD790u: goto label_1bd790;
            case 0x1BD794u: goto label_1bd794;
            case 0x1BD798u: goto label_1bd798;
            case 0x1BD79Cu: goto label_1bd79c;
            case 0x1BD7A0u: goto label_1bd7a0;
            case 0x1BD7A4u: goto label_1bd7a4;
            case 0x1BD7A8u: goto label_1bd7a8;
            case 0x1BD7ACu: goto label_1bd7ac;
            case 0x1BD7B0u: goto label_1bd7b0;
            case 0x1BD7B4u: goto label_1bd7b4;
            case 0x1BD7B8u: goto label_1bd7b8;
            case 0x1BD7BCu: goto label_1bd7bc;
            case 0x1BD7C0u: goto label_1bd7c0;
            case 0x1BD7C4u: goto label_1bd7c4;
            case 0x1BD7C8u: goto label_1bd7c8;
            case 0x1BD7CCu: goto label_1bd7cc;
            case 0x1BD7D0u: goto label_1bd7d0;
            case 0x1BD7D4u: goto label_1bd7d4;
            case 0x1BD7D8u: goto label_1bd7d8;
            case 0x1BD7DCu: goto label_1bd7dc;
            case 0x1BD7E0u: goto label_1bd7e0;
            case 0x1BD7E4u: goto label_1bd7e4;
            case 0x1BD7E8u: goto label_1bd7e8;
            case 0x1BD7ECu: goto label_1bd7ec;
            case 0x1BD7F0u: goto label_1bd7f0;
            case 0x1BD7F4u: goto label_1bd7f4;
            case 0x1BD7F8u: goto label_1bd7f8;
            case 0x1BD7FCu: goto label_1bd7fc;
            case 0x1BD800u: goto label_1bd800;
            case 0x1BD804u: goto label_1bd804;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD80Cu: goto label_1bd80c;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD814u: goto label_1bd814;
            case 0x1BD818u: goto label_1bd818;
            case 0x1BD81Cu: goto label_1bd81c;
            case 0x1BD820u: goto label_1bd820;
            case 0x1BD824u: goto label_1bd824;
            case 0x1BD828u: goto label_1bd828;
            case 0x1BD82Cu: goto label_1bd82c;
            case 0x1BD830u: goto label_1bd830;
            case 0x1BD834u: goto label_1bd834;
            case 0x1BD838u: goto label_1bd838;
            case 0x1BD83Cu: goto label_1bd83c;
            case 0x1BD840u: goto label_1bd840;
            case 0x1BD844u: goto label_1bd844;
            case 0x1BD848u: goto label_1bd848;
            case 0x1BD84Cu: goto label_1bd84c;
            case 0x1BD850u: goto label_1bd850;
            case 0x1BD854u: goto label_1bd854;
            case 0x1BD858u: goto label_1bd858;
            case 0x1BD85Cu: goto label_1bd85c;
            case 0x1BD860u: goto label_1bd860;
            case 0x1BD864u: goto label_1bd864;
            case 0x1BD868u: goto label_1bd868;
            case 0x1BD86Cu: goto label_1bd86c;
            case 0x1BD870u: goto label_1bd870;
            case 0x1BD874u: goto label_1bd874;
            case 0x1BD878u: goto label_1bd878;
            case 0x1BD87Cu: goto label_1bd87c;
            case 0x1BD880u: goto label_1bd880;
            case 0x1BD884u: goto label_1bd884;
            case 0x1BD888u: goto label_1bd888;
            case 0x1BD88Cu: goto label_1bd88c;
            case 0x1BD890u: goto label_1bd890;
            case 0x1BD894u: goto label_1bd894;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD89Cu: goto label_1bd89c;
            case 0x1BD8A0u: goto label_1bd8a0;
            case 0x1BD8A4u: goto label_1bd8a4;
            case 0x1BD8A8u: goto label_1bd8a8;
            case 0x1BD8ACu: goto label_1bd8ac;
            case 0x1BD8B0u: goto label_1bd8b0;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8B8u: goto label_1bd8b8;
            case 0x1BD8BCu: goto label_1bd8bc;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD8C4u: goto label_1bd8c4;
            case 0x1BD8C8u: goto label_1bd8c8;
            case 0x1BD8CCu: goto label_1bd8cc;
            case 0x1BD8D0u: goto label_1bd8d0;
            case 0x1BD8D4u: goto label_1bd8d4;
            case 0x1BD8D8u: goto label_1bd8d8;
            case 0x1BD8DCu: goto label_1bd8dc;
            case 0x1BD8E0u: goto label_1bd8e0;
            case 0x1BD8E4u: goto label_1bd8e4;
            case 0x1BD8E8u: goto label_1bd8e8;
            case 0x1BD8ECu: goto label_1bd8ec;
            case 0x1BD8F0u: goto label_1bd8f0;
            case 0x1BD8F4u: goto label_1bd8f4;
            case 0x1BD8F8u: goto label_1bd8f8;
            case 0x1BD8FCu: goto label_1bd8fc;
            case 0x1BD900u: goto label_1bd900;
            case 0x1BD904u: goto label_1bd904;
            case 0x1BD908u: goto label_1bd908;
            case 0x1BD90Cu: goto label_1bd90c;
            case 0x1BD910u: goto label_1bd910;
            case 0x1BD914u: goto label_1bd914;
            case 0x1BD918u: goto label_1bd918;
            case 0x1BD91Cu: goto label_1bd91c;
            case 0x1BD920u: goto label_1bd920;
            case 0x1BD924u: goto label_1bd924;
            case 0x1BD928u: goto label_1bd928;
            case 0x1BD92Cu: goto label_1bd92c;
            case 0x1BD930u: goto label_1bd930;
            case 0x1BD934u: goto label_1bd934;
            case 0x1BD938u: goto label_1bd938;
            case 0x1BD93Cu: goto label_1bd93c;
            case 0x1BD940u: goto label_1bd940;
            case 0x1BD944u: goto label_1bd944;
            case 0x1BD948u: goto label_1bd948;
            case 0x1BD94Cu: goto label_1bd94c;
            case 0x1BD950u: goto label_1bd950;
            case 0x1BD954u: goto label_1bd954;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD960u: goto label_1bd960;
            case 0x1BD964u: goto label_1bd964;
            case 0x1BD968u: goto label_1bd968;
            case 0x1BD96Cu: goto label_1bd96c;
            case 0x1BD970u: goto label_1bd970;
            case 0x1BD974u: goto label_1bd974;
            case 0x1BD978u: goto label_1bd978;
            case 0x1BD97Cu: goto label_1bd97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD7A8u;
label_1bd7a8:
    // 0x1bd7a8: 0x0
    ctx->pc = 0x1bd7a8u;
    // NOP
label_1bd7ac:
    // 0x1bd7ac: 0x0
    ctx->pc = 0x1bd7acu;
    // NOP
label_1bd7b0:
    // 0x1bd7b0: 0x27bdffe0
    ctx->pc = 0x1bd7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bd7b4:
    // 0x1bd7b4: 0x3c010032
    ctx->pc = 0x1bd7b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1bd7b8:
    // 0x1bd7b8: 0xffbf0010
    ctx->pc = 0x1bd7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bd7bc:
    // 0x1bd7bc: 0x282d
    ctx->pc = 0x1bd7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd7c0:
    // 0x1bd7c0: 0x7fb00000
    ctx->pc = 0x1bd7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bd7c4:
    // 0x1bd7c4: 0x24060044
    ctx->pc = 0x1bd7c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 68));
label_1bd7c8:
    // 0x1bd7c8: 0x80802d
    ctx->pc = 0x1bd7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd7cc:
    // 0x1bd7cc: 0xc041f1a
label_1bd7d0:
    if (ctx->pc == 0x1BD7D0u) {
        ctx->pc = 0x1BD7D0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 17648), GPR_U32(ctx, 16));
        ctx->pc = 0x1BD7D4u;
        goto label_1bd7d4;
    }
    ctx->pc = 0x1BD7CCu;
    SET_GPR_U32(ctx, 31, 0x1BD7D4u);
    ctx->pc = 0x1BD7D0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17648), GPR_U32(ctx, 16));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD7D4u; }
    }
    if (ctx->pc != 0x1BD7D4u) { return; }
    ctx->pc = 0x1BD7D4u;
label_1bd7d4:
    // 0x1bd7d4: 0x24040001
    ctx->pc = 0x1bd7d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1bd7d8:
    // 0x1bd7d8: 0x26030100
    ctx->pc = 0x1bd7d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 256));
label_1bd7dc:
    // 0x1bd7dc: 0xae040008
    ctx->pc = 0x1bd7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_1bd7e0:
    // 0x1bd7e0: 0x3c040023
    ctx->pc = 0x1bd7e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
label_1bd7e4:
    // 0x1bd7e4: 0xae03000c
    ctx->pc = 0x1bd7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1bd7e8:
    // 0x1bd7e8: 0x24844f30
    ctx->pc = 0x1bd7e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20272));
label_1bd7ec:
    // 0x1bd7ec: 0x3c030002
    ctx->pc = 0x1bd7ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
label_1bd7f0:
    // 0x1bd7f0: 0xae040018
    ctx->pc = 0x1bd7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_1bd7f4:
    // 0x1bd7f4: 0xae030010
    ctx->pc = 0x1bd7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1bd7f8:
    // 0x1bd7f8: 0xae030014
    ctx->pc = 0x1bd7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1bd7fc:
    // 0x1bd7fc: 0x1000001d
label_1bd800:
    if (ctx->pc == 0x1BD800u) {
        ctx->pc = 0x1BD800u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x1BD804u;
        goto label_1bd804;
    }
    ctx->pc = 0x1BD7FCu;
    {
        const bool branch_taken_0x1bd7fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD800u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
        if (branch_taken_0x1bd7fc) {
            ctx->pc = 0x1BD874u;
            goto label_1bd874;
        }
    }
    ctx->pc = 0x1BD804u;
label_1bd804:
    // 0x1bd804: 0x8e03001c
    ctx->pc = 0x1bd804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1bd808:
    // 0x1bd808: 0x24630001
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1bd80c:
    // 0x1bd80c: 0xae03001c
    ctx->pc = 0x1bd80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1bd810:
    // 0x1bd810: 0x8e030010
    ctx->pc = 0x1bd810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bd814:
    // 0x1bd814: 0x4610003
label_1bd818:
    if (ctx->pc == 0x1BD818u) {
        ctx->pc = 0x1BD818u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        ctx->pc = 0x1BD81Cu;
        goto label_1bd81c;
    }
    ctx->pc = 0x1BD814u;
    {
        const bool branch_taken_0x1bd814 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD818u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        if (branch_taken_0x1bd814) {
            ctx->pc = 0x1BD824u;
            goto label_1bd824;
        }
    }
    ctx->pc = 0x1BD81Cu;
label_1bd81c:
    // 0x1bd81c: 0x246301ff
    ctx->pc = 0x1bd81cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 511));
label_1bd820:
    // 0x1bd820: 0x32243
    ctx->pc = 0x1bd820u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
label_1bd824:
    // 0x1bd824: 0x8e030020
    ctx->pc = 0x1bd824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1bd828:
    // 0x1bd828: 0x641821
    ctx->pc = 0x1bd828u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd82c:
    // 0x1bd82c: 0xae030020
    ctx->pc = 0x1bd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1bd830:
    // 0x1bd830: 0x8e040010
    ctx->pc = 0x1bd830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bd834:
    // 0x1bd834: 0x8ca30004
    ctx->pc = 0x1bd834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1bd838:
    // 0x1bd838: 0x641821
    ctx->pc = 0x1bd838u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd83c:
    // 0x1bd83c: 0x2463ffff
    ctx->pc = 0x1bd83cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bd840:
    // 0x1bd840: 0x64001a
    ctx->pc = 0x1bd840u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1bd844:
    // 0x1bd844: 0x0
    ctx->pc = 0x1bd844u;
    // NOP
label_1bd848:
    // 0x1bd848: 0x0
    ctx->pc = 0x1bd848u;
    // NOP
label_1bd84c:
    // 0x1bd84c: 0x1812
    ctx->pc = 0x1bd84cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_1bd850:
    // 0x1bd850: 0x831818
    ctx->pc = 0x1bd850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_1bd854:
    // 0x1bd854: 0x4610003
label_1bd858:
    if (ctx->pc == 0x1BD858u) {
        ctx->pc = 0x1BD858u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        ctx->pc = 0x1BD85Cu;
        goto label_1bd85c;
    }
    ctx->pc = 0x1BD854u;
    {
        const bool branch_taken_0x1bd854 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD858u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        if (branch_taken_0x1bd854) {
            ctx->pc = 0x1BD864u;
            goto label_1bd864;
        }
    }
    ctx->pc = 0x1BD85Cu;
label_1bd85c:
    // 0x1bd85c: 0x246301ff
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 511));
label_1bd860:
    // 0x1bd860: 0x32243
    ctx->pc = 0x1bd860u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
label_1bd864:
    // 0x1bd864: 0x8e030020
    ctx->pc = 0x1bd864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1bd868:
    // 0x1bd868: 0x24a5000c
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
label_1bd86c:
    // 0x1bd86c: 0x641821
    ctx->pc = 0x1bd86cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd870:
    // 0x1bd870: 0xae030020
    ctx->pc = 0x1bd870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1bd874:
    // 0x1bd874: 0x8ca30000
    ctx->pc = 0x1bd874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd878:
    // 0x1bd878: 0x1460ffe2
label_1bd87c:
    if (ctx->pc == 0x1BD87Cu) {
        ctx->pc = 0x1BD880u;
        goto label_1bd880;
    }
    ctx->pc = 0x1BD878u;
    {
        const bool branch_taken_0x1bd878 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1bd878) {
            ctx->pc = 0x1BD804u;
            goto label_1bd804;
        }
    }
    ctx->pc = 0x1BD880u;
label_1bd880:
    // 0x1bd880: 0x8e030010
    ctx->pc = 0x1bd880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bd884:
    // 0x1bd884: 0x4610003
label_1bd888:
    if (ctx->pc == 0x1BD888u) {
        ctx->pc = 0x1BD888u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        ctx->pc = 0x1BD88Cu;
        goto label_1bd88c;
    }
    ctx->pc = 0x1BD884u;
    {
        const bool branch_taken_0x1bd884 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD888u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        if (branch_taken_0x1bd884) {
            ctx->pc = 0x1BD894u;
            goto label_1bd894;
        }
    }
    ctx->pc = 0x1BD88Cu;
label_1bd88c:
    // 0x1bd88c: 0x246301ff
    ctx->pc = 0x1bd88cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 511));
label_1bd890:
    // 0x1bd890: 0x32243
    ctx->pc = 0x1bd890u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
label_1bd894:
    // 0x1bd894: 0x8e030020
    ctx->pc = 0x1bd894u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1bd898:
    // 0x1bd898: 0x641821
    ctx->pc = 0x1bd898u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd89c:
    // 0x1bd89c: 0xae030020
    ctx->pc = 0x1bd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1bd8a0:
    // 0x1bd8a0: 0x8e030010
    ctx->pc = 0x1bd8a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bd8a4:
    // 0x1bd8a4: 0x4610003
label_1bd8a8:
    if (ctx->pc == 0x1BD8A8u) {
        ctx->pc = 0x1BD8A8u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        ctx->pc = 0x1BD8ACu;
        goto label_1bd8ac;
    }
    ctx->pc = 0x1BD8A4u;
    {
        const bool branch_taken_0x1bd8a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD8A8u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        if (branch_taken_0x1bd8a4) {
            ctx->pc = 0x1BD8B4u;
            goto label_1bd8b4;
        }
    }
    ctx->pc = 0x1BD8ACu;
label_1bd8ac:
    // 0x1bd8ac: 0x246301ff
    ctx->pc = 0x1bd8acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 511));
label_1bd8b0:
    // 0x1bd8b0: 0x32243
    ctx->pc = 0x1bd8b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
label_1bd8b4:
    // 0x1bd8b4: 0x8e030020
    ctx->pc = 0x1bd8b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1bd8b8:
    // 0x1bd8b8: 0x641821
    ctx->pc = 0x1bd8b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd8bc:
    // 0x1bd8bc: 0xae030020
    ctx->pc = 0x1bd8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1bd8c0:
    // 0x1bd8c0: 0x8e030010
    ctx->pc = 0x1bd8c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bd8c4:
    // 0x1bd8c4: 0x4610003
label_1bd8c8:
    if (ctx->pc == 0x1BD8C8u) {
        ctx->pc = 0x1BD8C8u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        ctx->pc = 0x1BD8CCu;
        goto label_1bd8cc;
    }
    ctx->pc = 0x1BD8C4u;
    {
        const bool branch_taken_0x1bd8c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD8C8u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        if (branch_taken_0x1bd8c4) {
            ctx->pc = 0x1BD8D4u;
            goto label_1bd8d4;
        }
    }
    ctx->pc = 0x1BD8CCu;
label_1bd8cc:
    // 0x1bd8cc: 0x246301ff
    ctx->pc = 0x1bd8ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 511));
label_1bd8d0:
    // 0x1bd8d0: 0x32243
    ctx->pc = 0x1bd8d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
label_1bd8d4:
    // 0x1bd8d4: 0x8e030020
    ctx->pc = 0x1bd8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1bd8d8:
    // 0x1bd8d8: 0x641821
    ctx->pc = 0x1bd8d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd8dc:
    // 0x1bd8dc: 0xae030020
    ctx->pc = 0x1bd8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1bd8e0:
    // 0x1bd8e0: 0x8e030010
    ctx->pc = 0x1bd8e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bd8e4:
    // 0x1bd8e4: 0x4610003
label_1bd8e8:
    if (ctx->pc == 0x1BD8E8u) {
        ctx->pc = 0x1BD8E8u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        ctx->pc = 0x1BD8ECu;
        goto label_1bd8ec;
    }
    ctx->pc = 0x1BD8E4u;
    {
        const bool branch_taken_0x1bd8e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD8E8u;
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
        if (branch_taken_0x1bd8e4) {
            ctx->pc = 0x1BD8F4u;
            goto label_1bd8f4;
        }
    }
    ctx->pc = 0x1BD8ECu;
label_1bd8ec:
    // 0x1bd8ec: 0x246301ff
    ctx->pc = 0x1bd8ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 511));
label_1bd8f0:
    // 0x1bd8f0: 0x32243
    ctx->pc = 0x1bd8f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 9));
label_1bd8f4:
    // 0x1bd8f4: 0x8e030020
    ctx->pc = 0x1bd8f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1bd8f8:
    // 0x1bd8f8: 0x641821
    ctx->pc = 0x1bd8f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd8fc:
    // 0x1bd8fc: 0xae030020
    ctx->pc = 0x1bd8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1bd900:
    // 0x1bd900: 0xdfbf0010
    ctx->pc = 0x1bd900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd904:
    // 0x1bd904: 0x7bb00000
    ctx->pc = 0x1bd904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd908:
    // 0x1bd908: 0x3e00008
label_1bd90c:
    if (ctx->pc == 0x1BD90Cu) {
        ctx->pc = 0x1BD90Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BD910u;
        goto label_1bd910;
    }
    ctx->pc = 0x1BD908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD90Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD690u: goto label_1bd690;
            case 0x1BD694u: goto label_1bd694;
            case 0x1BD698u: goto label_1bd698;
            case 0x1BD69Cu: goto label_1bd69c;
            case 0x1BD6A0u: goto label_1bd6a0;
            case 0x1BD6A4u: goto label_1bd6a4;
            case 0x1BD6A8u: goto label_1bd6a8;
            case 0x1BD6ACu: goto label_1bd6ac;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6B4u: goto label_1bd6b4;
            case 0x1BD6B8u: goto label_1bd6b8;
            case 0x1BD6BCu: goto label_1bd6bc;
            case 0x1BD6C0u: goto label_1bd6c0;
            case 0x1BD6C4u: goto label_1bd6c4;
            case 0x1BD6C8u: goto label_1bd6c8;
            case 0x1BD6CCu: goto label_1bd6cc;
            case 0x1BD6D0u: goto label_1bd6d0;
            case 0x1BD6D4u: goto label_1bd6d4;
            case 0x1BD6D8u: goto label_1bd6d8;
            case 0x1BD6DCu: goto label_1bd6dc;
            case 0x1BD6E0u: goto label_1bd6e0;
            case 0x1BD6E4u: goto label_1bd6e4;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD6ECu: goto label_1bd6ec;
            case 0x1BD6F0u: goto label_1bd6f0;
            case 0x1BD6F4u: goto label_1bd6f4;
            case 0x1BD6F8u: goto label_1bd6f8;
            case 0x1BD6FCu: goto label_1bd6fc;
            case 0x1BD700u: goto label_1bd700;
            case 0x1BD704u: goto label_1bd704;
            case 0x1BD708u: goto label_1bd708;
            case 0x1BD70Cu: goto label_1bd70c;
            case 0x1BD710u: goto label_1bd710;
            case 0x1BD714u: goto label_1bd714;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD71Cu: goto label_1bd71c;
            case 0x1BD720u: goto label_1bd720;
            case 0x1BD724u: goto label_1bd724;
            case 0x1BD728u: goto label_1bd728;
            case 0x1BD72Cu: goto label_1bd72c;
            case 0x1BD730u: goto label_1bd730;
            case 0x1BD734u: goto label_1bd734;
            case 0x1BD738u: goto label_1bd738;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD740u: goto label_1bd740;
            case 0x1BD744u: goto label_1bd744;
            case 0x1BD748u: goto label_1bd748;
            case 0x1BD74Cu: goto label_1bd74c;
            case 0x1BD750u: goto label_1bd750;
            case 0x1BD754u: goto label_1bd754;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD75Cu: goto label_1bd75c;
            case 0x1BD760u: goto label_1bd760;
            case 0x1BD764u: goto label_1bd764;
            case 0x1BD768u: goto label_1bd768;
            case 0x1BD76Cu: goto label_1bd76c;
            case 0x1BD770u: goto label_1bd770;
            case 0x1BD774u: goto label_1bd774;
            case 0x1BD778u: goto label_1bd778;
            case 0x1BD77Cu: goto label_1bd77c;
            case 0x1BD780u: goto label_1bd780;
            case 0x1BD784u: goto label_1bd784;
            case 0x1BD788u: goto label_1bd788;
            case 0x1BD78Cu: goto label_1bd78c;
            case 0x1BD790u: goto label_1bd790;
            case 0x1BD794u: goto label_1bd794;
            case 0x1BD798u: goto label_1bd798;
            case 0x1BD79Cu: goto label_1bd79c;
            case 0x1BD7A0u: goto label_1bd7a0;
            case 0x1BD7A4u: goto label_1bd7a4;
            case 0x1BD7A8u: goto label_1bd7a8;
            case 0x1BD7ACu: goto label_1bd7ac;
            case 0x1BD7B0u: goto label_1bd7b0;
            case 0x1BD7B4u: goto label_1bd7b4;
            case 0x1BD7B8u: goto label_1bd7b8;
            case 0x1BD7BCu: goto label_1bd7bc;
            case 0x1BD7C0u: goto label_1bd7c0;
            case 0x1BD7C4u: goto label_1bd7c4;
            case 0x1BD7C8u: goto label_1bd7c8;
            case 0x1BD7CCu: goto label_1bd7cc;
            case 0x1BD7D0u: goto label_1bd7d0;
            case 0x1BD7D4u: goto label_1bd7d4;
            case 0x1BD7D8u: goto label_1bd7d8;
            case 0x1BD7DCu: goto label_1bd7dc;
            case 0x1BD7E0u: goto label_1bd7e0;
            case 0x1BD7E4u: goto label_1bd7e4;
            case 0x1BD7E8u: goto label_1bd7e8;
            case 0x1BD7ECu: goto label_1bd7ec;
            case 0x1BD7F0u: goto label_1bd7f0;
            case 0x1BD7F4u: goto label_1bd7f4;
            case 0x1BD7F8u: goto label_1bd7f8;
            case 0x1BD7FCu: goto label_1bd7fc;
            case 0x1BD800u: goto label_1bd800;
            case 0x1BD804u: goto label_1bd804;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD80Cu: goto label_1bd80c;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD814u: goto label_1bd814;
            case 0x1BD818u: goto label_1bd818;
            case 0x1BD81Cu: goto label_1bd81c;
            case 0x1BD820u: goto label_1bd820;
            case 0x1BD824u: goto label_1bd824;
            case 0x1BD828u: goto label_1bd828;
            case 0x1BD82Cu: goto label_1bd82c;
            case 0x1BD830u: goto label_1bd830;
            case 0x1BD834u: goto label_1bd834;
            case 0x1BD838u: goto label_1bd838;
            case 0x1BD83Cu: goto label_1bd83c;
            case 0x1BD840u: goto label_1bd840;
            case 0x1BD844u: goto label_1bd844;
            case 0x1BD848u: goto label_1bd848;
            case 0x1BD84Cu: goto label_1bd84c;
            case 0x1BD850u: goto label_1bd850;
            case 0x1BD854u: goto label_1bd854;
            case 0x1BD858u: goto label_1bd858;
            case 0x1BD85Cu: goto label_1bd85c;
            case 0x1BD860u: goto label_1bd860;
            case 0x1BD864u: goto label_1bd864;
            case 0x1BD868u: goto label_1bd868;
            case 0x1BD86Cu: goto label_1bd86c;
            case 0x1BD870u: goto label_1bd870;
            case 0x1BD874u: goto label_1bd874;
            case 0x1BD878u: goto label_1bd878;
            case 0x1BD87Cu: goto label_1bd87c;
            case 0x1BD880u: goto label_1bd880;
            case 0x1BD884u: goto label_1bd884;
            case 0x1BD888u: goto label_1bd888;
            case 0x1BD88Cu: goto label_1bd88c;
            case 0x1BD890u: goto label_1bd890;
            case 0x1BD894u: goto label_1bd894;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD89Cu: goto label_1bd89c;
            case 0x1BD8A0u: goto label_1bd8a0;
            case 0x1BD8A4u: goto label_1bd8a4;
            case 0x1BD8A8u: goto label_1bd8a8;
            case 0x1BD8ACu: goto label_1bd8ac;
            case 0x1BD8B0u: goto label_1bd8b0;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8B8u: goto label_1bd8b8;
            case 0x1BD8BCu: goto label_1bd8bc;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD8C4u: goto label_1bd8c4;
            case 0x1BD8C8u: goto label_1bd8c8;
            case 0x1BD8CCu: goto label_1bd8cc;
            case 0x1BD8D0u: goto label_1bd8d0;
            case 0x1BD8D4u: goto label_1bd8d4;
            case 0x1BD8D8u: goto label_1bd8d8;
            case 0x1BD8DCu: goto label_1bd8dc;
            case 0x1BD8E0u: goto label_1bd8e0;
            case 0x1BD8E4u: goto label_1bd8e4;
            case 0x1BD8E8u: goto label_1bd8e8;
            case 0x1BD8ECu: goto label_1bd8ec;
            case 0x1BD8F0u: goto label_1bd8f0;
            case 0x1BD8F4u: goto label_1bd8f4;
            case 0x1BD8F8u: goto label_1bd8f8;
            case 0x1BD8FCu: goto label_1bd8fc;
            case 0x1BD900u: goto label_1bd900;
            case 0x1BD904u: goto label_1bd904;
            case 0x1BD908u: goto label_1bd908;
            case 0x1BD90Cu: goto label_1bd90c;
            case 0x1BD910u: goto label_1bd910;
            case 0x1BD914u: goto label_1bd914;
            case 0x1BD918u: goto label_1bd918;
            case 0x1BD91Cu: goto label_1bd91c;
            case 0x1BD920u: goto label_1bd920;
            case 0x1BD924u: goto label_1bd924;
            case 0x1BD928u: goto label_1bd928;
            case 0x1BD92Cu: goto label_1bd92c;
            case 0x1BD930u: goto label_1bd930;
            case 0x1BD934u: goto label_1bd934;
            case 0x1BD938u: goto label_1bd938;
            case 0x1BD93Cu: goto label_1bd93c;
            case 0x1BD940u: goto label_1bd940;
            case 0x1BD944u: goto label_1bd944;
            case 0x1BD948u: goto label_1bd948;
            case 0x1BD94Cu: goto label_1bd94c;
            case 0x1BD950u: goto label_1bd950;
            case 0x1BD954u: goto label_1bd954;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD960u: goto label_1bd960;
            case 0x1BD964u: goto label_1bd964;
            case 0x1BD968u: goto label_1bd968;
            case 0x1BD96Cu: goto label_1bd96c;
            case 0x1BD970u: goto label_1bd970;
            case 0x1BD974u: goto label_1bd974;
            case 0x1BD978u: goto label_1bd978;
            case 0x1BD97Cu: goto label_1bd97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD910u;
label_1bd910:
    // 0x1bd910: 0x27bdffd0
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bd914:
    // 0x1bd914: 0x3c010032
    ctx->pc = 0x1bd914u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1bd918:
    // 0x1bd918: 0xffbf0020
    ctx->pc = 0x1bd918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bd91c:
    // 0x1bd91c: 0x7fb10010
    ctx->pc = 0x1bd91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bd920:
    // 0x1bd920: 0x7fb00000
    ctx->pc = 0x1bd920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bd924:
    // 0x1bd924: 0x8c3044f0
    ctx->pc = 0x1bd924u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 17648)));
label_1bd928:
    // 0x1bd928: 0x16000003
label_1bd92c:
    if (ctx->pc == 0x1BD92Cu) {
        ctx->pc = 0x1BD92Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD930u;
        goto label_1bd930;
    }
    ctx->pc = 0x1BD928u;
    {
        const bool branch_taken_0x1bd928 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BD92Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bd928) {
            ctx->pc = 0x1BD938u;
            goto label_1bd938;
        }
    }
    ctx->pc = 0x1BD930u;
label_1bd930:
    // 0x1bd930: 0x1000000c
label_1bd934:
    if (ctx->pc == 0x1BD934u) {
        ctx->pc = 0x1BD934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1BD938u;
        goto label_1bd938;
    }
    ctx->pc = 0x1BD930u;
    {
        const bool branch_taken_0x1bd930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD934u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1bd930) {
            ctx->pc = 0x1BD964u;
            goto label_1bd964;
        }
    }
    ctx->pc = 0x1BD938u;
label_1bd938:
    // 0x1bd938: 0x8e030000
    ctx->pc = 0x1bd938u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bd93c:
    // 0x1bd93c: 0x3c020023
    ctx->pc = 0x1bd93cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1bd940:
    // 0x1bd940: 0x24425020
    ctx->pc = 0x1bd940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20512));
label_1bd944:
    // 0x1bd944: 0x31880
    ctx->pc = 0x1bd944u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1bd948:
    // 0x1bd948: 0x431021
    ctx->pc = 0x1bd948u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd94c:
    // 0x1bd94c: 0x8c420000
    ctx->pc = 0x1bd94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd950:
    // 0x1bd950: 0x40f809
label_1bd954:
    if (ctx->pc == 0x1BD954u) {
        ctx->pc = 0x1BD954u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD958u;
        goto label_1bd958;
    }
    ctx->pc = 0x1BD950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD958u);
        ctx->pc = 0x1BD954u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD690u: goto label_1bd690;
            case 0x1BD694u: goto label_1bd694;
            case 0x1BD698u: goto label_1bd698;
            case 0x1BD69Cu: goto label_1bd69c;
            case 0x1BD6A0u: goto label_1bd6a0;
            case 0x1BD6A4u: goto label_1bd6a4;
            case 0x1BD6A8u: goto label_1bd6a8;
            case 0x1BD6ACu: goto label_1bd6ac;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6B4u: goto label_1bd6b4;
            case 0x1BD6B8u: goto label_1bd6b8;
            case 0x1BD6BCu: goto label_1bd6bc;
            case 0x1BD6C0u: goto label_1bd6c0;
            case 0x1BD6C4u: goto label_1bd6c4;
            case 0x1BD6C8u: goto label_1bd6c8;
            case 0x1BD6CCu: goto label_1bd6cc;
            case 0x1BD6D0u: goto label_1bd6d0;
            case 0x1BD6D4u: goto label_1bd6d4;
            case 0x1BD6D8u: goto label_1bd6d8;
            case 0x1BD6DCu: goto label_1bd6dc;
            case 0x1BD6E0u: goto label_1bd6e0;
            case 0x1BD6E4u: goto label_1bd6e4;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD6ECu: goto label_1bd6ec;
            case 0x1BD6F0u: goto label_1bd6f0;
            case 0x1BD6F4u: goto label_1bd6f4;
            case 0x1BD6F8u: goto label_1bd6f8;
            case 0x1BD6FCu: goto label_1bd6fc;
            case 0x1BD700u: goto label_1bd700;
            case 0x1BD704u: goto label_1bd704;
            case 0x1BD708u: goto label_1bd708;
            case 0x1BD70Cu: goto label_1bd70c;
            case 0x1BD710u: goto label_1bd710;
            case 0x1BD714u: goto label_1bd714;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD71Cu: goto label_1bd71c;
            case 0x1BD720u: goto label_1bd720;
            case 0x1BD724u: goto label_1bd724;
            case 0x1BD728u: goto label_1bd728;
            case 0x1BD72Cu: goto label_1bd72c;
            case 0x1BD730u: goto label_1bd730;
            case 0x1BD734u: goto label_1bd734;
            case 0x1BD738u: goto label_1bd738;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD740u: goto label_1bd740;
            case 0x1BD744u: goto label_1bd744;
            case 0x1BD748u: goto label_1bd748;
            case 0x1BD74Cu: goto label_1bd74c;
            case 0x1BD750u: goto label_1bd750;
            case 0x1BD754u: goto label_1bd754;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD75Cu: goto label_1bd75c;
            case 0x1BD760u: goto label_1bd760;
            case 0x1BD764u: goto label_1bd764;
            case 0x1BD768u: goto label_1bd768;
            case 0x1BD76Cu: goto label_1bd76c;
            case 0x1BD770u: goto label_1bd770;
            case 0x1BD774u: goto label_1bd774;
            case 0x1BD778u: goto label_1bd778;
            case 0x1BD77Cu: goto label_1bd77c;
            case 0x1BD780u: goto label_1bd780;
            case 0x1BD784u: goto label_1bd784;
            case 0x1BD788u: goto label_1bd788;
            case 0x1BD78Cu: goto label_1bd78c;
            case 0x1BD790u: goto label_1bd790;
            case 0x1BD794u: goto label_1bd794;
            case 0x1BD798u: goto label_1bd798;
            case 0x1BD79Cu: goto label_1bd79c;
            case 0x1BD7A0u: goto label_1bd7a0;
            case 0x1BD7A4u: goto label_1bd7a4;
            case 0x1BD7A8u: goto label_1bd7a8;
            case 0x1BD7ACu: goto label_1bd7ac;
            case 0x1BD7B0u: goto label_1bd7b0;
            case 0x1BD7B4u: goto label_1bd7b4;
            case 0x1BD7B8u: goto label_1bd7b8;
            case 0x1BD7BCu: goto label_1bd7bc;
            case 0x1BD7C0u: goto label_1bd7c0;
            case 0x1BD7C4u: goto label_1bd7c4;
            case 0x1BD7C8u: goto label_1bd7c8;
            case 0x1BD7CCu: goto label_1bd7cc;
            case 0x1BD7D0u: goto label_1bd7d0;
            case 0x1BD7D4u: goto label_1bd7d4;
            case 0x1BD7D8u: goto label_1bd7d8;
            case 0x1BD7DCu: goto label_1bd7dc;
            case 0x1BD7E0u: goto label_1bd7e0;
            case 0x1BD7E4u: goto label_1bd7e4;
            case 0x1BD7E8u: goto label_1bd7e8;
            case 0x1BD7ECu: goto label_1bd7ec;
            case 0x1BD7F0u: goto label_1bd7f0;
            case 0x1BD7F4u: goto label_1bd7f4;
            case 0x1BD7F8u: goto label_1bd7f8;
            case 0x1BD7FCu: goto label_1bd7fc;
            case 0x1BD800u: goto label_1bd800;
            case 0x1BD804u: goto label_1bd804;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD80Cu: goto label_1bd80c;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD814u: goto label_1bd814;
            case 0x1BD818u: goto label_1bd818;
            case 0x1BD81Cu: goto label_1bd81c;
            case 0x1BD820u: goto label_1bd820;
            case 0x1BD824u: goto label_1bd824;
            case 0x1BD828u: goto label_1bd828;
            case 0x1BD82Cu: goto label_1bd82c;
            case 0x1BD830u: goto label_1bd830;
            case 0x1BD834u: goto label_1bd834;
            case 0x1BD838u: goto label_1bd838;
            case 0x1BD83Cu: goto label_1bd83c;
            case 0x1BD840u: goto label_1bd840;
            case 0x1BD844u: goto label_1bd844;
            case 0x1BD848u: goto label_1bd848;
            case 0x1BD84Cu: goto label_1bd84c;
            case 0x1BD850u: goto label_1bd850;
            case 0x1BD854u: goto label_1bd854;
            case 0x1BD858u: goto label_1bd858;
            case 0x1BD85Cu: goto label_1bd85c;
            case 0x1BD860u: goto label_1bd860;
            case 0x1BD864u: goto label_1bd864;
            case 0x1BD868u: goto label_1bd868;
            case 0x1BD86Cu: goto label_1bd86c;
            case 0x1BD870u: goto label_1bd870;
            case 0x1BD874u: goto label_1bd874;
            case 0x1BD878u: goto label_1bd878;
            case 0x1BD87Cu: goto label_1bd87c;
            case 0x1BD880u: goto label_1bd880;
            case 0x1BD884u: goto label_1bd884;
            case 0x1BD888u: goto label_1bd888;
            case 0x1BD88Cu: goto label_1bd88c;
            case 0x1BD890u: goto label_1bd890;
            case 0x1BD894u: goto label_1bd894;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD89Cu: goto label_1bd89c;
            case 0x1BD8A0u: goto label_1bd8a0;
            case 0x1BD8A4u: goto label_1bd8a4;
            case 0x1BD8A8u: goto label_1bd8a8;
            case 0x1BD8ACu: goto label_1bd8ac;
            case 0x1BD8B0u: goto label_1bd8b0;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8B8u: goto label_1bd8b8;
            case 0x1BD8BCu: goto label_1bd8bc;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD8C4u: goto label_1bd8c4;
            case 0x1BD8C8u: goto label_1bd8c8;
            case 0x1BD8CCu: goto label_1bd8cc;
            case 0x1BD8D0u: goto label_1bd8d0;
            case 0x1BD8D4u: goto label_1bd8d4;
            case 0x1BD8D8u: goto label_1bd8d8;
            case 0x1BD8DCu: goto label_1bd8dc;
            case 0x1BD8E0u: goto label_1bd8e0;
            case 0x1BD8E4u: goto label_1bd8e4;
            case 0x1BD8E8u: goto label_1bd8e8;
            case 0x1BD8ECu: goto label_1bd8ec;
            case 0x1BD8F0u: goto label_1bd8f0;
            case 0x1BD8F4u: goto label_1bd8f4;
            case 0x1BD8F8u: goto label_1bd8f8;
            case 0x1BD8FCu: goto label_1bd8fc;
            case 0x1BD900u: goto label_1bd900;
            case 0x1BD904u: goto label_1bd904;
            case 0x1BD908u: goto label_1bd908;
            case 0x1BD90Cu: goto label_1bd90c;
            case 0x1BD910u: goto label_1bd910;
            case 0x1BD914u: goto label_1bd914;
            case 0x1BD918u: goto label_1bd918;
            case 0x1BD91Cu: goto label_1bd91c;
            case 0x1BD920u: goto label_1bd920;
            case 0x1BD924u: goto label_1bd924;
            case 0x1BD928u: goto label_1bd928;
            case 0x1BD92Cu: goto label_1bd92c;
            case 0x1BD930u: goto label_1bd930;
            case 0x1BD934u: goto label_1bd934;
            case 0x1BD938u: goto label_1bd938;
            case 0x1BD93Cu: goto label_1bd93c;
            case 0x1BD940u: goto label_1bd940;
            case 0x1BD944u: goto label_1bd944;
            case 0x1BD948u: goto label_1bd948;
            case 0x1BD94Cu: goto label_1bd94c;
            case 0x1BD950u: goto label_1bd950;
            case 0x1BD954u: goto label_1bd954;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD960u: goto label_1bd960;
            case 0x1BD964u: goto label_1bd964;
            case 0x1BD968u: goto label_1bd968;
            case 0x1BD96Cu: goto label_1bd96c;
            case 0x1BD970u: goto label_1bd970;
            case 0x1BD974u: goto label_1bd974;
            case 0x1BD978u: goto label_1bd978;
            case 0x1BD97Cu: goto label_1bd97c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD958u; }
            if (ctx->pc != 0x1BD958u) { return; }
        }
    }
    ctx->pc = 0x1BD958u;
label_1bd958:
    // 0x1bd958: 0xc6000038
    ctx->pc = 0x1bd958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd95c:
    // 0x1bd95c: 0xe6200000
    ctx->pc = 0x1bd95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1bd960:
    // 0x1bd960: 0x8e020008
    ctx->pc = 0x1bd960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bd964:
    // 0x1bd964: 0xdfbf0020
    ctx->pc = 0x1bd964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd968:
    // 0x1bd968: 0x7bb10010
    ctx->pc = 0x1bd968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd96c:
    // 0x1bd96c: 0x7bb00000
    ctx->pc = 0x1bd96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd970:
    // 0x1bd970: 0x3e00008
label_1bd974:
    if (ctx->pc == 0x1BD974u) {
        ctx->pc = 0x1BD974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1BD978u;
        goto label_1bd978;
    }
    ctx->pc = 0x1BD970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD690u: goto label_1bd690;
            case 0x1BD694u: goto label_1bd694;
            case 0x1BD698u: goto label_1bd698;
            case 0x1BD69Cu: goto label_1bd69c;
            case 0x1BD6A0u: goto label_1bd6a0;
            case 0x1BD6A4u: goto label_1bd6a4;
            case 0x1BD6A8u: goto label_1bd6a8;
            case 0x1BD6ACu: goto label_1bd6ac;
            case 0x1BD6B0u: goto label_1bd6b0;
            case 0x1BD6B4u: goto label_1bd6b4;
            case 0x1BD6B8u: goto label_1bd6b8;
            case 0x1BD6BCu: goto label_1bd6bc;
            case 0x1BD6C0u: goto label_1bd6c0;
            case 0x1BD6C4u: goto label_1bd6c4;
            case 0x1BD6C8u: goto label_1bd6c8;
            case 0x1BD6CCu: goto label_1bd6cc;
            case 0x1BD6D0u: goto label_1bd6d0;
            case 0x1BD6D4u: goto label_1bd6d4;
            case 0x1BD6D8u: goto label_1bd6d8;
            case 0x1BD6DCu: goto label_1bd6dc;
            case 0x1BD6E0u: goto label_1bd6e0;
            case 0x1BD6E4u: goto label_1bd6e4;
            case 0x1BD6E8u: goto label_1bd6e8;
            case 0x1BD6ECu: goto label_1bd6ec;
            case 0x1BD6F0u: goto label_1bd6f0;
            case 0x1BD6F4u: goto label_1bd6f4;
            case 0x1BD6F8u: goto label_1bd6f8;
            case 0x1BD6FCu: goto label_1bd6fc;
            case 0x1BD700u: goto label_1bd700;
            case 0x1BD704u: goto label_1bd704;
            case 0x1BD708u: goto label_1bd708;
            case 0x1BD70Cu: goto label_1bd70c;
            case 0x1BD710u: goto label_1bd710;
            case 0x1BD714u: goto label_1bd714;
            case 0x1BD718u: goto label_1bd718;
            case 0x1BD71Cu: goto label_1bd71c;
            case 0x1BD720u: goto label_1bd720;
            case 0x1BD724u: goto label_1bd724;
            case 0x1BD728u: goto label_1bd728;
            case 0x1BD72Cu: goto label_1bd72c;
            case 0x1BD730u: goto label_1bd730;
            case 0x1BD734u: goto label_1bd734;
            case 0x1BD738u: goto label_1bd738;
            case 0x1BD73Cu: goto label_1bd73c;
            case 0x1BD740u: goto label_1bd740;
            case 0x1BD744u: goto label_1bd744;
            case 0x1BD748u: goto label_1bd748;
            case 0x1BD74Cu: goto label_1bd74c;
            case 0x1BD750u: goto label_1bd750;
            case 0x1BD754u: goto label_1bd754;
            case 0x1BD758u: goto label_1bd758;
            case 0x1BD75Cu: goto label_1bd75c;
            case 0x1BD760u: goto label_1bd760;
            case 0x1BD764u: goto label_1bd764;
            case 0x1BD768u: goto label_1bd768;
            case 0x1BD76Cu: goto label_1bd76c;
            case 0x1BD770u: goto label_1bd770;
            case 0x1BD774u: goto label_1bd774;
            case 0x1BD778u: goto label_1bd778;
            case 0x1BD77Cu: goto label_1bd77c;
            case 0x1BD780u: goto label_1bd780;
            case 0x1BD784u: goto label_1bd784;
            case 0x1BD788u: goto label_1bd788;
            case 0x1BD78Cu: goto label_1bd78c;
            case 0x1BD790u: goto label_1bd790;
            case 0x1BD794u: goto label_1bd794;
            case 0x1BD798u: goto label_1bd798;
            case 0x1BD79Cu: goto label_1bd79c;
            case 0x1BD7A0u: goto label_1bd7a0;
            case 0x1BD7A4u: goto label_1bd7a4;
            case 0x1BD7A8u: goto label_1bd7a8;
            case 0x1BD7ACu: goto label_1bd7ac;
            case 0x1BD7B0u: goto label_1bd7b0;
            case 0x1BD7B4u: goto label_1bd7b4;
            case 0x1BD7B8u: goto label_1bd7b8;
            case 0x1BD7BCu: goto label_1bd7bc;
            case 0x1BD7C0u: goto label_1bd7c0;
            case 0x1BD7C4u: goto label_1bd7c4;
            case 0x1BD7C8u: goto label_1bd7c8;
            case 0x1BD7CCu: goto label_1bd7cc;
            case 0x1BD7D0u: goto label_1bd7d0;
            case 0x1BD7D4u: goto label_1bd7d4;
            case 0x1BD7D8u: goto label_1bd7d8;
            case 0x1BD7DCu: goto label_1bd7dc;
            case 0x1BD7E0u: goto label_1bd7e0;
            case 0x1BD7E4u: goto label_1bd7e4;
            case 0x1BD7E8u: goto label_1bd7e8;
            case 0x1BD7ECu: goto label_1bd7ec;
            case 0x1BD7F0u: goto label_1bd7f0;
            case 0x1BD7F4u: goto label_1bd7f4;
            case 0x1BD7F8u: goto label_1bd7f8;
            case 0x1BD7FCu: goto label_1bd7fc;
            case 0x1BD800u: goto label_1bd800;
            case 0x1BD804u: goto label_1bd804;
            case 0x1BD808u: goto label_1bd808;
            case 0x1BD80Cu: goto label_1bd80c;
            case 0x1BD810u: goto label_1bd810;
            case 0x1BD814u: goto label_1bd814;
            case 0x1BD818u: goto label_1bd818;
            case 0x1BD81Cu: goto label_1bd81c;
            case 0x1BD820u: goto label_1bd820;
            case 0x1BD824u: goto label_1bd824;
            case 0x1BD828u: goto label_1bd828;
            case 0x1BD82Cu: goto label_1bd82c;
            case 0x1BD830u: goto label_1bd830;
            case 0x1BD834u: goto label_1bd834;
            case 0x1BD838u: goto label_1bd838;
            case 0x1BD83Cu: goto label_1bd83c;
            case 0x1BD840u: goto label_1bd840;
            case 0x1BD844u: goto label_1bd844;
            case 0x1BD848u: goto label_1bd848;
            case 0x1BD84Cu: goto label_1bd84c;
            case 0x1BD850u: goto label_1bd850;
            case 0x1BD854u: goto label_1bd854;
            case 0x1BD858u: goto label_1bd858;
            case 0x1BD85Cu: goto label_1bd85c;
            case 0x1BD860u: goto label_1bd860;
            case 0x1BD864u: goto label_1bd864;
            case 0x1BD868u: goto label_1bd868;
            case 0x1BD86Cu: goto label_1bd86c;
            case 0x1BD870u: goto label_1bd870;
            case 0x1BD874u: goto label_1bd874;
            case 0x1BD878u: goto label_1bd878;
            case 0x1BD87Cu: goto label_1bd87c;
            case 0x1BD880u: goto label_1bd880;
            case 0x1BD884u: goto label_1bd884;
            case 0x1BD888u: goto label_1bd888;
            case 0x1BD88Cu: goto label_1bd88c;
            case 0x1BD890u: goto label_1bd890;
            case 0x1BD894u: goto label_1bd894;
            case 0x1BD898u: goto label_1bd898;
            case 0x1BD89Cu: goto label_1bd89c;
            case 0x1BD8A0u: goto label_1bd8a0;
            case 0x1BD8A4u: goto label_1bd8a4;
            case 0x1BD8A8u: goto label_1bd8a8;
            case 0x1BD8ACu: goto label_1bd8ac;
            case 0x1BD8B0u: goto label_1bd8b0;
            case 0x1BD8B4u: goto label_1bd8b4;
            case 0x1BD8B8u: goto label_1bd8b8;
            case 0x1BD8BCu: goto label_1bd8bc;
            case 0x1BD8C0u: goto label_1bd8c0;
            case 0x1BD8C4u: goto label_1bd8c4;
            case 0x1BD8C8u: goto label_1bd8c8;
            case 0x1BD8CCu: goto label_1bd8cc;
            case 0x1BD8D0u: goto label_1bd8d0;
            case 0x1BD8D4u: goto label_1bd8d4;
            case 0x1BD8D8u: goto label_1bd8d8;
            case 0x1BD8DCu: goto label_1bd8dc;
            case 0x1BD8E0u: goto label_1bd8e0;
            case 0x1BD8E4u: goto label_1bd8e4;
            case 0x1BD8E8u: goto label_1bd8e8;
            case 0x1BD8ECu: goto label_1bd8ec;
            case 0x1BD8F0u: goto label_1bd8f0;
            case 0x1BD8F4u: goto label_1bd8f4;
            case 0x1BD8F8u: goto label_1bd8f8;
            case 0x1BD8FCu: goto label_1bd8fc;
            case 0x1BD900u: goto label_1bd900;
            case 0x1BD904u: goto label_1bd904;
            case 0x1BD908u: goto label_1bd908;
            case 0x1BD90Cu: goto label_1bd90c;
            case 0x1BD910u: goto label_1bd910;
            case 0x1BD914u: goto label_1bd914;
            case 0x1BD918u: goto label_1bd918;
            case 0x1BD91Cu: goto label_1bd91c;
            case 0x1BD920u: goto label_1bd920;
            case 0x1BD924u: goto label_1bd924;
            case 0x1BD928u: goto label_1bd928;
            case 0x1BD92Cu: goto label_1bd92c;
            case 0x1BD930u: goto label_1bd930;
            case 0x1BD934u: goto label_1bd934;
            case 0x1BD938u: goto label_1bd938;
            case 0x1BD93Cu: goto label_1bd93c;
            case 0x1BD940u: goto label_1bd940;
            case 0x1BD944u: goto label_1bd944;
            case 0x1BD948u: goto label_1bd948;
            case 0x1BD94Cu: goto label_1bd94c;
            case 0x1BD950u: goto label_1bd950;
            case 0x1BD954u: goto label_1bd954;
            case 0x1BD958u: goto label_1bd958;
            case 0x1BD95Cu: goto label_1bd95c;
            case 0x1BD960u: goto label_1bd960;
            case 0x1BD964u: goto label_1bd964;
            case 0x1BD968u: goto label_1bd968;
            case 0x1BD96Cu: goto label_1bd96c;
            case 0x1BD970u: goto label_1bd970;
            case 0x1BD974u: goto label_1bd974;
            case 0x1BD978u: goto label_1bd978;
            case 0x1BD97Cu: goto label_1bd97c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD978u;
label_1bd978:
    // 0x1bd978: 0x0
    ctx->pc = 0x1bd978u;
    // NOP
label_1bd97c:
    // 0x1bd97c: 0x0
    ctx->pc = 0x1bd97cu;
    // NOP
}
