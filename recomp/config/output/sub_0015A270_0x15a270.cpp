#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015A270
// Address: 0x15a270 - 0x15a860
void sub_0015A270_0x15a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15a270u;

label_15a270:
    // 0x15a270: 0x27bdffd0
    ctx->pc = 0x15a270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_15a274:
    // 0x15a274: 0x24020003
    ctx->pc = 0x15a274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_15a278:
    // 0x15a278: 0xffb00010
    ctx->pc = 0x15a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15a27c:
    // 0x15a27c: 0x80802d
    ctx->pc = 0x15a27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15a280:
    // 0x15a280: 0xffb10018
    ctx->pc = 0x15a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15a284:
    // 0x15a284: 0xa0882d
    ctx->pc = 0x15a284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15a288:
    // 0x15a288: 0xffb20020
    ctx->pc = 0x15a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15a28c:
    // 0x15a28c: 0x26120348
    ctx->pc = 0x15a28cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 840));
label_15a290:
    // 0x15a290: 0xffbf0028
    ctx->pc = 0x15a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_15a294:
    // 0x15a294: 0x3c067fff
    ctx->pc = 0x15a294u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_15a298:
    // 0x15a298: 0xae020384
    ctx->pc = 0x15a298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
label_15a29c:
    // 0x15a29c: 0x24050001
    ctx->pc = 0x15a29cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15a2a0:
    // 0x15a2a0: 0x8e230000
    ctx->pc = 0x15a2a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a2a4:
    // 0x15a2a4: 0x220202d
    ctx->pc = 0x15a2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a2a8:
    // 0x15a2a8: 0x34c6ffff
    ctx->pc = 0x15a2a8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_15a2ac:
    // 0x15a2ac: 0x8c620018
    ctx->pc = 0x15a2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_15a2b0:
    // 0x15a2b0: 0x40f809
label_15a2b4:
    if (ctx->pc == 0x15A2B4u) {
        ctx->pc = 0x15A2B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A2B8u;
        goto label_15a2b8;
    }
    ctx->pc = 0x15A2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A2B8u);
        ctx->pc = 0x15A2B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A270u: goto label_15a270;
            case 0x15A274u: goto label_15a274;
            case 0x15A278u: goto label_15a278;
            case 0x15A27Cu: goto label_15a27c;
            case 0x15A280u: goto label_15a280;
            case 0x15A284u: goto label_15a284;
            case 0x15A288u: goto label_15a288;
            case 0x15A28Cu: goto label_15a28c;
            case 0x15A290u: goto label_15a290;
            case 0x15A294u: goto label_15a294;
            case 0x15A298u: goto label_15a298;
            case 0x15A29Cu: goto label_15a29c;
            case 0x15A2A0u: goto label_15a2a0;
            case 0x15A2A4u: goto label_15a2a4;
            case 0x15A2A8u: goto label_15a2a8;
            case 0x15A2ACu: goto label_15a2ac;
            case 0x15A2B0u: goto label_15a2b0;
            case 0x15A2B4u: goto label_15a2b4;
            case 0x15A2B8u: goto label_15a2b8;
            case 0x15A2BCu: goto label_15a2bc;
            case 0x15A2C0u: goto label_15a2c0;
            case 0x15A2C4u: goto label_15a2c4;
            case 0x15A2C8u: goto label_15a2c8;
            case 0x15A2CCu: goto label_15a2cc;
            case 0x15A2D0u: goto label_15a2d0;
            case 0x15A2D4u: goto label_15a2d4;
            case 0x15A2D8u: goto label_15a2d8;
            case 0x15A2DCu: goto label_15a2dc;
            case 0x15A2E0u: goto label_15a2e0;
            case 0x15A2E4u: goto label_15a2e4;
            case 0x15A2E8u: goto label_15a2e8;
            case 0x15A2ECu: goto label_15a2ec;
            case 0x15A2F0u: goto label_15a2f0;
            case 0x15A2F4u: goto label_15a2f4;
            case 0x15A2F8u: goto label_15a2f8;
            case 0x15A2FCu: goto label_15a2fc;
            case 0x15A300u: goto label_15a300;
            case 0x15A304u: goto label_15a304;
            case 0x15A308u: goto label_15a308;
            case 0x15A30Cu: goto label_15a30c;
            case 0x15A310u: goto label_15a310;
            case 0x15A314u: goto label_15a314;
            case 0x15A318u: goto label_15a318;
            case 0x15A31Cu: goto label_15a31c;
            case 0x15A320u: goto label_15a320;
            case 0x15A324u: goto label_15a324;
            case 0x15A328u: goto label_15a328;
            case 0x15A32Cu: goto label_15a32c;
            case 0x15A330u: goto label_15a330;
            case 0x15A334u: goto label_15a334;
            case 0x15A338u: goto label_15a338;
            case 0x15A33Cu: goto label_15a33c;
            case 0x15A340u: goto label_15a340;
            case 0x15A344u: goto label_15a344;
            case 0x15A348u: goto label_15a348;
            case 0x15A34Cu: goto label_15a34c;
            case 0x15A350u: goto label_15a350;
            case 0x15A354u: goto label_15a354;
            case 0x15A358u: goto label_15a358;
            case 0x15A35Cu: goto label_15a35c;
            case 0x15A360u: goto label_15a360;
            case 0x15A364u: goto label_15a364;
            case 0x15A368u: goto label_15a368;
            case 0x15A36Cu: goto label_15a36c;
            case 0x15A370u: goto label_15a370;
            case 0x15A374u: goto label_15a374;
            case 0x15A378u: goto label_15a378;
            case 0x15A37Cu: goto label_15a37c;
            case 0x15A380u: goto label_15a380;
            case 0x15A384u: goto label_15a384;
            case 0x15A388u: goto label_15a388;
            case 0x15A38Cu: goto label_15a38c;
            case 0x15A390u: goto label_15a390;
            case 0x15A394u: goto label_15a394;
            case 0x15A398u: goto label_15a398;
            case 0x15A39Cu: goto label_15a39c;
            case 0x15A3A0u: goto label_15a3a0;
            case 0x15A3A4u: goto label_15a3a4;
            case 0x15A3A8u: goto label_15a3a8;
            case 0x15A3ACu: goto label_15a3ac;
            case 0x15A3B0u: goto label_15a3b0;
            case 0x15A3B4u: goto label_15a3b4;
            case 0x15A3B8u: goto label_15a3b8;
            case 0x15A3BCu: goto label_15a3bc;
            case 0x15A3C0u: goto label_15a3c0;
            case 0x15A3C4u: goto label_15a3c4;
            case 0x15A3C8u: goto label_15a3c8;
            case 0x15A3CCu: goto label_15a3cc;
            case 0x15A3D0u: goto label_15a3d0;
            case 0x15A3D4u: goto label_15a3d4;
            case 0x15A3D8u: goto label_15a3d8;
            case 0x15A3DCu: goto label_15a3dc;
            case 0x15A3E0u: goto label_15a3e0;
            case 0x15A3E4u: goto label_15a3e4;
            case 0x15A3E8u: goto label_15a3e8;
            case 0x15A3ECu: goto label_15a3ec;
            case 0x15A3F0u: goto label_15a3f0;
            case 0x15A3F4u: goto label_15a3f4;
            case 0x15A3F8u: goto label_15a3f8;
            case 0x15A3FCu: goto label_15a3fc;
            case 0x15A400u: goto label_15a400;
            case 0x15A404u: goto label_15a404;
            case 0x15A408u: goto label_15a408;
            case 0x15A40Cu: goto label_15a40c;
            case 0x15A410u: goto label_15a410;
            case 0x15A414u: goto label_15a414;
            case 0x15A418u: goto label_15a418;
            case 0x15A41Cu: goto label_15a41c;
            case 0x15A420u: goto label_15a420;
            case 0x15A424u: goto label_15a424;
            case 0x15A428u: goto label_15a428;
            case 0x15A42Cu: goto label_15a42c;
            case 0x15A430u: goto label_15a430;
            case 0x15A434u: goto label_15a434;
            case 0x15A438u: goto label_15a438;
            case 0x15A43Cu: goto label_15a43c;
            case 0x15A440u: goto label_15a440;
            case 0x15A444u: goto label_15a444;
            case 0x15A448u: goto label_15a448;
            case 0x15A44Cu: goto label_15a44c;
            case 0x15A450u: goto label_15a450;
            case 0x15A454u: goto label_15a454;
            case 0x15A458u: goto label_15a458;
            case 0x15A45Cu: goto label_15a45c;
            case 0x15A460u: goto label_15a460;
            case 0x15A464u: goto label_15a464;
            case 0x15A468u: goto label_15a468;
            case 0x15A46Cu: goto label_15a46c;
            case 0x15A470u: goto label_15a470;
            case 0x15A474u: goto label_15a474;
            case 0x15A478u: goto label_15a478;
            case 0x15A47Cu: goto label_15a47c;
            case 0x15A480u: goto label_15a480;
            case 0x15A484u: goto label_15a484;
            case 0x15A488u: goto label_15a488;
            case 0x15A48Cu: goto label_15a48c;
            case 0x15A490u: goto label_15a490;
            case 0x15A494u: goto label_15a494;
            case 0x15A498u: goto label_15a498;
            case 0x15A49Cu: goto label_15a49c;
            case 0x15A4A0u: goto label_15a4a0;
            case 0x15A4A4u: goto label_15a4a4;
            case 0x15A4A8u: goto label_15a4a8;
            case 0x15A4ACu: goto label_15a4ac;
            case 0x15A4B0u: goto label_15a4b0;
            case 0x15A4B4u: goto label_15a4b4;
            case 0x15A4B8u: goto label_15a4b8;
            case 0x15A4BCu: goto label_15a4bc;
            case 0x15A4C0u: goto label_15a4c0;
            case 0x15A4C4u: goto label_15a4c4;
            case 0x15A4C8u: goto label_15a4c8;
            case 0x15A4CCu: goto label_15a4cc;
            case 0x15A4D0u: goto label_15a4d0;
            case 0x15A4D4u: goto label_15a4d4;
            case 0x15A4D8u: goto label_15a4d8;
            case 0x15A4DCu: goto label_15a4dc;
            case 0x15A4E0u: goto label_15a4e0;
            case 0x15A4E4u: goto label_15a4e4;
            case 0x15A4E8u: goto label_15a4e8;
            case 0x15A4ECu: goto label_15a4ec;
            case 0x15A4F0u: goto label_15a4f0;
            case 0x15A4F4u: goto label_15a4f4;
            case 0x15A4F8u: goto label_15a4f8;
            case 0x15A4FCu: goto label_15a4fc;
            case 0x15A500u: goto label_15a500;
            case 0x15A504u: goto label_15a504;
            case 0x15A508u: goto label_15a508;
            case 0x15A50Cu: goto label_15a50c;
            case 0x15A510u: goto label_15a510;
            case 0x15A514u: goto label_15a514;
            case 0x15A518u: goto label_15a518;
            case 0x15A51Cu: goto label_15a51c;
            case 0x15A520u: goto label_15a520;
            case 0x15A524u: goto label_15a524;
            case 0x15A528u: goto label_15a528;
            case 0x15A52Cu: goto label_15a52c;
            case 0x15A530u: goto label_15a530;
            case 0x15A534u: goto label_15a534;
            case 0x15A538u: goto label_15a538;
            case 0x15A53Cu: goto label_15a53c;
            case 0x15A540u: goto label_15a540;
            case 0x15A544u: goto label_15a544;
            case 0x15A548u: goto label_15a548;
            case 0x15A54Cu: goto label_15a54c;
            case 0x15A550u: goto label_15a550;
            case 0x15A554u: goto label_15a554;
            case 0x15A558u: goto label_15a558;
            case 0x15A55Cu: goto label_15a55c;
            case 0x15A560u: goto label_15a560;
            case 0x15A564u: goto label_15a564;
            case 0x15A568u: goto label_15a568;
            case 0x15A56Cu: goto label_15a56c;
            case 0x15A570u: goto label_15a570;
            case 0x15A574u: goto label_15a574;
            case 0x15A578u: goto label_15a578;
            case 0x15A57Cu: goto label_15a57c;
            case 0x15A580u: goto label_15a580;
            case 0x15A584u: goto label_15a584;
            case 0x15A588u: goto label_15a588;
            case 0x15A58Cu: goto label_15a58c;
            case 0x15A590u: goto label_15a590;
            case 0x15A594u: goto label_15a594;
            case 0x15A598u: goto label_15a598;
            case 0x15A59Cu: goto label_15a59c;
            case 0x15A5A0u: goto label_15a5a0;
            case 0x15A5A4u: goto label_15a5a4;
            case 0x15A5A8u: goto label_15a5a8;
            case 0x15A5ACu: goto label_15a5ac;
            case 0x15A5B0u: goto label_15a5b0;
            case 0x15A5B4u: goto label_15a5b4;
            case 0x15A5B8u: goto label_15a5b8;
            case 0x15A5BCu: goto label_15a5bc;
            case 0x15A5C0u: goto label_15a5c0;
            case 0x15A5C4u: goto label_15a5c4;
            case 0x15A5C8u: goto label_15a5c8;
            case 0x15A5CCu: goto label_15a5cc;
            case 0x15A5D0u: goto label_15a5d0;
            case 0x15A5D4u: goto label_15a5d4;
            case 0x15A5D8u: goto label_15a5d8;
            case 0x15A5DCu: goto label_15a5dc;
            case 0x15A5E0u: goto label_15a5e0;
            case 0x15A5E4u: goto label_15a5e4;
            case 0x15A5E8u: goto label_15a5e8;
            case 0x15A5ECu: goto label_15a5ec;
            case 0x15A5F0u: goto label_15a5f0;
            case 0x15A5F4u: goto label_15a5f4;
            case 0x15A5F8u: goto label_15a5f8;
            case 0x15A5FCu: goto label_15a5fc;
            case 0x15A600u: goto label_15a600;
            case 0x15A604u: goto label_15a604;
            case 0x15A608u: goto label_15a608;
            case 0x15A60Cu: goto label_15a60c;
            case 0x15A610u: goto label_15a610;
            case 0x15A614u: goto label_15a614;
            case 0x15A618u: goto label_15a618;
            case 0x15A61Cu: goto label_15a61c;
            case 0x15A620u: goto label_15a620;
            case 0x15A624u: goto label_15a624;
            case 0x15A628u: goto label_15a628;
            case 0x15A62Cu: goto label_15a62c;
            case 0x15A630u: goto label_15a630;
            case 0x15A634u: goto label_15a634;
            case 0x15A638u: goto label_15a638;
            case 0x15A63Cu: goto label_15a63c;
            case 0x15A640u: goto label_15a640;
            case 0x15A644u: goto label_15a644;
            case 0x15A648u: goto label_15a648;
            case 0x15A64Cu: goto label_15a64c;
            case 0x15A650u: goto label_15a650;
            case 0x15A654u: goto label_15a654;
            case 0x15A658u: goto label_15a658;
            case 0x15A65Cu: goto label_15a65c;
            case 0x15A660u: goto label_15a660;
            case 0x15A664u: goto label_15a664;
            case 0x15A668u: goto label_15a668;
            case 0x15A66Cu: goto label_15a66c;
            case 0x15A670u: goto label_15a670;
            case 0x15A674u: goto label_15a674;
            case 0x15A678u: goto label_15a678;
            case 0x15A67Cu: goto label_15a67c;
            case 0x15A680u: goto label_15a680;
            case 0x15A684u: goto label_15a684;
            case 0x15A688u: goto label_15a688;
            case 0x15A68Cu: goto label_15a68c;
            case 0x15A690u: goto label_15a690;
            case 0x15A694u: goto label_15a694;
            case 0x15A698u: goto label_15a698;
            case 0x15A69Cu: goto label_15a69c;
            case 0x15A6A0u: goto label_15a6a0;
            case 0x15A6A4u: goto label_15a6a4;
            case 0x15A6A8u: goto label_15a6a8;
            case 0x15A6ACu: goto label_15a6ac;
            case 0x15A6B0u: goto label_15a6b0;
            case 0x15A6B4u: goto label_15a6b4;
            case 0x15A6B8u: goto label_15a6b8;
            case 0x15A6BCu: goto label_15a6bc;
            case 0x15A6C0u: goto label_15a6c0;
            case 0x15A6C4u: goto label_15a6c4;
            case 0x15A6C8u: goto label_15a6c8;
            case 0x15A6CCu: goto label_15a6cc;
            case 0x15A6D0u: goto label_15a6d0;
            case 0x15A6D4u: goto label_15a6d4;
            case 0x15A6D8u: goto label_15a6d8;
            case 0x15A6DCu: goto label_15a6dc;
            case 0x15A6E0u: goto label_15a6e0;
            case 0x15A6E4u: goto label_15a6e4;
            case 0x15A6E8u: goto label_15a6e8;
            case 0x15A6ECu: goto label_15a6ec;
            case 0x15A6F0u: goto label_15a6f0;
            case 0x15A6F4u: goto label_15a6f4;
            case 0x15A6F8u: goto label_15a6f8;
            case 0x15A6FCu: goto label_15a6fc;
            case 0x15A700u: goto label_15a700;
            case 0x15A704u: goto label_15a704;
            case 0x15A708u: goto label_15a708;
            case 0x15A70Cu: goto label_15a70c;
            case 0x15A710u: goto label_15a710;
            case 0x15A714u: goto label_15a714;
            case 0x15A718u: goto label_15a718;
            case 0x15A71Cu: goto label_15a71c;
            case 0x15A720u: goto label_15a720;
            case 0x15A724u: goto label_15a724;
            case 0x15A728u: goto label_15a728;
            case 0x15A72Cu: goto label_15a72c;
            case 0x15A730u: goto label_15a730;
            case 0x15A734u: goto label_15a734;
            case 0x15A738u: goto label_15a738;
            case 0x15A73Cu: goto label_15a73c;
            case 0x15A740u: goto label_15a740;
            case 0x15A744u: goto label_15a744;
            case 0x15A748u: goto label_15a748;
            case 0x15A74Cu: goto label_15a74c;
            case 0x15A750u: goto label_15a750;
            case 0x15A754u: goto label_15a754;
            case 0x15A758u: goto label_15a758;
            case 0x15A75Cu: goto label_15a75c;
            case 0x15A760u: goto label_15a760;
            case 0x15A764u: goto label_15a764;
            case 0x15A768u: goto label_15a768;
            case 0x15A76Cu: goto label_15a76c;
            case 0x15A770u: goto label_15a770;
            case 0x15A774u: goto label_15a774;
            case 0x15A778u: goto label_15a778;
            case 0x15A77Cu: goto label_15a77c;
            case 0x15A780u: goto label_15a780;
            case 0x15A784u: goto label_15a784;
            case 0x15A788u: goto label_15a788;
            case 0x15A78Cu: goto label_15a78c;
            case 0x15A790u: goto label_15a790;
            case 0x15A794u: goto label_15a794;
            case 0x15A798u: goto label_15a798;
            case 0x15A79Cu: goto label_15a79c;
            case 0x15A7A0u: goto label_15a7a0;
            case 0x15A7A4u: goto label_15a7a4;
            case 0x15A7A8u: goto label_15a7a8;
            case 0x15A7ACu: goto label_15a7ac;
            case 0x15A7B0u: goto label_15a7b0;
            case 0x15A7B4u: goto label_15a7b4;
            case 0x15A7B8u: goto label_15a7b8;
            case 0x15A7BCu: goto label_15a7bc;
            case 0x15A7C0u: goto label_15a7c0;
            case 0x15A7C4u: goto label_15a7c4;
            case 0x15A7C8u: goto label_15a7c8;
            case 0x15A7CCu: goto label_15a7cc;
            case 0x15A7D0u: goto label_15a7d0;
            case 0x15A7D4u: goto label_15a7d4;
            case 0x15A7D8u: goto label_15a7d8;
            case 0x15A7DCu: goto label_15a7dc;
            case 0x15A7E0u: goto label_15a7e0;
            case 0x15A7E4u: goto label_15a7e4;
            case 0x15A7E8u: goto label_15a7e8;
            case 0x15A7ECu: goto label_15a7ec;
            case 0x15A7F0u: goto label_15a7f0;
            case 0x15A7F4u: goto label_15a7f4;
            case 0x15A7F8u: goto label_15a7f8;
            case 0x15A7FCu: goto label_15a7fc;
            case 0x15A800u: goto label_15a800;
            case 0x15A804u: goto label_15a804;
            case 0x15A808u: goto label_15a808;
            case 0x15A80Cu: goto label_15a80c;
            case 0x15A810u: goto label_15a810;
            case 0x15A814u: goto label_15a814;
            case 0x15A818u: goto label_15a818;
            case 0x15A81Cu: goto label_15a81c;
            case 0x15A820u: goto label_15a820;
            case 0x15A824u: goto label_15a824;
            case 0x15A828u: goto label_15a828;
            case 0x15A82Cu: goto label_15a82c;
            case 0x15A830u: goto label_15a830;
            case 0x15A834u: goto label_15a834;
            case 0x15A838u: goto label_15a838;
            case 0x15A83Cu: goto label_15a83c;
            case 0x15A840u: goto label_15a840;
            case 0x15A844u: goto label_15a844;
            case 0x15A848u: goto label_15a848;
            case 0x15A84Cu: goto label_15a84c;
            case 0x15A850u: goto label_15a850;
            case 0x15A854u: goto label_15a854;
            case 0x15A858u: goto label_15a858;
            case 0x15A85Cu: goto label_15a85c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A2B8u; }
            if (ctx->pc != 0x15A2B8u) { return; }
        }
    }
    ctx->pc = 0x15A2B8u;
label_15a2b8:
    // 0x15a2b8: 0x8e430000
    ctx->pc = 0x15a2b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15a2bc:
    // 0x15a2bc: 0x2402fffc
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_15a2c0:
    // 0x15a2c0: 0x260901d0
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 464));
label_15a2c4:
    // 0x15a2c4: 0x624024
    ctx->pc = 0x15a2c4u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15a2c8:
    // 0x15a2c8: 0x681823
    ctx->pc = 0x15a2c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15a2cc:
    // 0x15a2cc: 0x25080004
    ctx->pc = 0x15a2ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
label_15a2d0:
    // 0x15a2d0: 0x81060000
    ctx->pc = 0x15a2d0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a2d4:
    // 0x15a2d4: 0x25080001
    ctx->pc = 0x15a2d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a2d8:
    // 0x15a2d8: 0x91020000
    ctx->pc = 0x15a2d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a2dc:
    // 0x15a2dc: 0x25080001
    ctx->pc = 0x15a2dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a2e0:
    // 0x15a2e0: 0x63200
    ctx->pc = 0x15a2e0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a2e4:
    // 0x15a2e4: 0x91040000
    ctx->pc = 0x15a2e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a2e8:
    // 0x15a2e8: 0xc23025
    ctx->pc = 0x15a2e8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a2ec:
    // 0x15a2ec: 0x25080001
    ctx->pc = 0x15a2ecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a2f0:
    // 0x15a2f0: 0x63200
    ctx->pc = 0x15a2f0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a2f4:
    // 0x15a2f4: 0x91020000
    ctx->pc = 0x15a2f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a2f8:
    // 0x15a2f8: 0x328c0
    ctx->pc = 0x15a2f8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 3));
label_15a2fc:
    // 0x15a2fc: 0xc43025
    ctx->pc = 0x15a2fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_15a300:
    // 0x15a300: 0x63200
    ctx->pc = 0x15a300u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a304:
    // 0x15a304: 0x28a30020
    ctx->pc = 0x15a304u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 32));
label_15a308:
    // 0x15a308: 0xc23025
    ctx->pc = 0x15a308u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a30c:
    // 0x15a30c: 0x14600010
label_15a310:
    if (ctx->pc == 0x15A310u) {
        ctx->pc = 0x15A310u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x15A314u;
        goto label_15a314;
    }
    ctx->pc = 0x15A30Cu;
    {
        const bool branch_taken_0x15a30c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A310u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x15a30c) {
            ctx->pc = 0x15A350u;
            goto label_15a350;
        }
    }
    ctx->pc = 0x15A314u;
label_15a314:
    // 0x15a314: 0x81060000
    ctx->pc = 0x15a314u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a318:
    // 0x15a318: 0x25080001
    ctx->pc = 0x15a318u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a31c:
    // 0x15a31c: 0x91020000
    ctx->pc = 0x15a31cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a320:
    // 0x15a320: 0x25080001
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a324:
    // 0x15a324: 0x63200
    ctx->pc = 0x15a324u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a328:
    // 0x15a328: 0x91030000
    ctx->pc = 0x15a328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a32c:
    // 0x15a32c: 0xc23025
    ctx->pc = 0x15a32cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a330:
    // 0x15a330: 0x25080001
    ctx->pc = 0x15a330u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a334:
    // 0x15a334: 0x63200
    ctx->pc = 0x15a334u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a338:
    // 0x15a338: 0x91020000
    ctx->pc = 0x15a338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a33c:
    // 0x15a33c: 0xc33025
    ctx->pc = 0x15a33cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a340:
    // 0x15a340: 0x24a5ffe0
    ctx->pc = 0x15a340u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
label_15a344:
    // 0x15a344: 0x63200
    ctx->pc = 0x15a344u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a348:
    // 0x15a348: 0x25080001
    ctx->pc = 0x15a348u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a34c:
    // 0x15a34c: 0xc23025
    ctx->pc = 0x15a34cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a350:
    // 0x15a350: 0xa61804
    ctx->pc = 0x15a350u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_15a354:
    // 0x15a354: 0x38a20000
    ctx->pc = 0x15a354u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 0));
label_15a358:
    // 0x15a358: 0xc0382d
    ctx->pc = 0x15a358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a35c:
    // 0x15a35c: 0x81060000
    ctx->pc = 0x15a35cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a360:
    // 0x15a360: 0x25080001
    ctx->pc = 0x15a360u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a364:
    // 0x15a364: 0x62380b
    ctx->pc = 0x15a364u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
label_15a368:
    // 0x15a368: 0x91020000
    ctx->pc = 0x15a368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a36c:
    // 0x15a36c: 0x25080001
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a370:
    // 0x15a370: 0x63200
    ctx->pc = 0x15a370u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a374:
    // 0x15a374: 0x91030000
    ctx->pc = 0x15a374u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a378:
    // 0x15a378: 0xc23025
    ctx->pc = 0x15a378u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a37c:
    // 0x15a37c: 0x25080001
    ctx->pc = 0x15a37cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a380:
    // 0x15a380: 0x63200
    ctx->pc = 0x15a380u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a384:
    // 0x15a384: 0x91020000
    ctx->pc = 0x15a384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a388:
    // 0x15a388: 0xc33025
    ctx->pc = 0x15a388u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a38c:
    // 0x15a38c: 0x28a40016
    ctx->pc = 0x15a38cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 22));
label_15a390:
    // 0x15a390: 0x63200
    ctx->pc = 0x15a390u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a394:
    // 0x15a394: 0x25080001
    ctx->pc = 0x15a394u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a398:
    // 0x15a398: 0x1480001d
label_15a39c:
    if (ctx->pc == 0x15A39Cu) {
        ctx->pc = 0x15A39Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A3A0u;
        goto label_15a3a0;
    }
    ctx->pc = 0x15A398u;
    {
        const bool branch_taken_0x15a398 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A39Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a398) {
            ctx->pc = 0x15A410u;
            goto label_15a410;
        }
    }
    ctx->pc = 0x15A3A0u;
label_15a3a0:
    // 0x15a3a0: 0x24a5ffea
    ctx->pc = 0x15a3a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967274));
label_15a3a4:
    // 0x15a3a4: 0x10a00008
label_15a3a8:
    if (ctx->pc == 0x15A3A8u) {
        ctx->pc = 0x15A3A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x15A3ACu;
        goto label_15a3ac;
    }
    ctx->pc = 0x15A3A4u;
    {
        const bool branch_taken_0x15a3a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A3A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x15a3a4) {
            ctx->pc = 0x15A3C8u;
            goto label_15a3c8;
        }
    }
    ctx->pc = 0x15A3ACu;
label_15a3ac:
    // 0x15a3ac: 0x451023
    ctx->pc = 0x15a3acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15a3b0:
    // 0x15a3b0: 0x461006
    ctx->pc = 0x15a3b0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_15a3b4:
    // 0x15a3b4: 0xe23825
    ctx->pc = 0x15a3b4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15a3b8:
    // 0x15a3b8: 0x71d82
    ctx->pc = 0x15a3b8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), 22));
label_15a3bc:
    // 0x15a3bc: 0xa63804
    ctx->pc = 0x15a3bcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_15a3c0:
    // 0x15a3c0: 0x10000004
label_15a3c4:
    if (ctx->pc == 0x15A3C4u) {
        ctx->pc = 0x15A3C4u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x15A3C8u;
        goto label_15a3c8;
    }
    ctx->pc = 0x15A3C0u;
    {
        const bool branch_taken_0x15a3c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A3C4u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x15a3c0) {
            ctx->pc = 0x15A3D4u;
            goto label_15a3d4;
        }
    }
    ctx->pc = 0x15A3C8u;
label_15a3c8:
    // 0x15a3c8: 0x71582
    ctx->pc = 0x15a3c8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 22));
label_15a3cc:
    // 0x15a3cc: 0xc0382d
    ctx->pc = 0x15a3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a3d0:
    // 0x15a3d0: 0xad220014
    ctx->pc = 0x15a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_15a3d4:
    // 0x15a3d4: 0x81060000
    ctx->pc = 0x15a3d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a3d8:
    // 0x15a3d8: 0x25080001
    ctx->pc = 0x15a3d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a3dc:
    // 0x15a3dc: 0x91020000
    ctx->pc = 0x15a3dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a3e0:
    // 0x15a3e0: 0x25080001
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a3e4:
    // 0x15a3e4: 0x63200
    ctx->pc = 0x15a3e4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a3e8:
    // 0x15a3e8: 0x91030000
    ctx->pc = 0x15a3e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a3ec:
    // 0x15a3ec: 0xc23025
    ctx->pc = 0x15a3ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a3f0:
    // 0x15a3f0: 0x25080001
    ctx->pc = 0x15a3f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a3f4:
    // 0x15a3f4: 0x63200
    ctx->pc = 0x15a3f4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a3f8:
    // 0x15a3f8: 0x91020000
    ctx->pc = 0x15a3f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a3fc:
    // 0x15a3fc: 0xc33025
    ctx->pc = 0x15a3fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a400:
    // 0x15a400: 0x25080001
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a404:
    // 0x15a404: 0x63200
    ctx->pc = 0x15a404u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a408:
    // 0x15a408: 0x10000005
label_15a40c:
    if (ctx->pc == 0x15A40Cu) {
        ctx->pc = 0x15A40Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A410u;
        goto label_15a410;
    }
    ctx->pc = 0x15A408u;
    {
        const bool branch_taken_0x15a408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A40Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a408) {
            ctx->pc = 0x15A420u;
            goto label_15a420;
        }
    }
    ctx->pc = 0x15A410u;
label_15a410:
    // 0x15a410: 0x71582
    ctx->pc = 0x15a410u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 22));
label_15a414:
    // 0x15a414: 0x73a80
    ctx->pc = 0x15a414u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 10));
label_15a418:
    // 0x15a418: 0xad220014
    ctx->pc = 0x15a418u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 2));
label_15a41c:
    // 0x15a41c: 0x24a5000a
    ctx->pc = 0x15a41cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 10));
label_15a420:
    // 0x15a420: 0x28a2001d
    ctx->pc = 0x15a420u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 29));
label_15a424:
    // 0x15a424: 0x1440001a
label_15a428:
    if (ctx->pc == 0x15A428u) {
        ctx->pc = 0x15A428u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
        ctx->pc = 0x15A42Cu;
        goto label_15a42c;
    }
    ctx->pc = 0x15A424u;
    {
        const bool branch_taken_0x15a424 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A428u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
        if (branch_taken_0x15a424) {
            ctx->pc = 0x15A490u;
            goto label_15a490;
        }
    }
    ctx->pc = 0x15A42Cu;
label_15a42c:
    // 0x15a42c: 0x24a5ffe3
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967267));
label_15a430:
    // 0x15a430: 0x10a00007
label_15a434:
    if (ctx->pc == 0x15A434u) {
        ctx->pc = 0x15A434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15A438u;
        goto label_15a438;
    }
    ctx->pc = 0x15A430u;
    {
        const bool branch_taken_0x15a430 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A434u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15a430) {
            ctx->pc = 0x15A450u;
            goto label_15a450;
        }
    }
    ctx->pc = 0x15A438u;
label_15a438:
    // 0x15a438: 0x451023
    ctx->pc = 0x15a438u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15a43c:
    // 0x15a43c: 0x461006
    ctx->pc = 0x15a43cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_15a440:
    // 0x15a440: 0xe23825
    ctx->pc = 0x15a440u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15a444:
    // 0x15a444: 0x72742
    ctx->pc = 0x15a444u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
label_15a448:
    // 0x15a448: 0x10000002
label_15a44c:
    if (ctx->pc == 0x15A44Cu) {
        ctx->pc = 0x15A44Cu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x15A450u;
        goto label_15a450;
    }
    ctx->pc = 0x15A448u;
    {
        const bool branch_taken_0x15a448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A44Cu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x15a448) {
            ctx->pc = 0x15A454u;
            goto label_15a454;
        }
    }
    ctx->pc = 0x15A450u;
label_15a450:
    // 0x15a450: 0xc0382d
    ctx->pc = 0x15a450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a454:
    // 0x15a454: 0x81060000
    ctx->pc = 0x15a454u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a458:
    // 0x15a458: 0x25080001
    ctx->pc = 0x15a458u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a45c:
    // 0x15a45c: 0x91020000
    ctx->pc = 0x15a45cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a460:
    // 0x15a460: 0x25080001
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a464:
    // 0x15a464: 0x63200
    ctx->pc = 0x15a464u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a468:
    // 0x15a468: 0x91030000
    ctx->pc = 0x15a468u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a46c:
    // 0x15a46c: 0xc23025
    ctx->pc = 0x15a46cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a470:
    // 0x15a470: 0x25080001
    ctx->pc = 0x15a470u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a474:
    // 0x15a474: 0x63200
    ctx->pc = 0x15a474u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a478:
    // 0x15a478: 0x91020000
    ctx->pc = 0x15a478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a47c:
    // 0x15a47c: 0xc33025
    ctx->pc = 0x15a47cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a480:
    // 0x15a480: 0x25080001
    ctx->pc = 0x15a480u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a484:
    // 0x15a484: 0x63200
    ctx->pc = 0x15a484u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a488:
    // 0x15a488: 0x10000003
label_15a48c:
    if (ctx->pc == 0x15A48Cu) {
        ctx->pc = 0x15A48Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A490u;
        goto label_15a490;
    }
    ctx->pc = 0x15A488u;
    {
        const bool branch_taken_0x15a488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A48Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a488) {
            ctx->pc = 0x15A498u;
            goto label_15a498;
        }
    }
    ctx->pc = 0x15A490u;
label_15a490:
    // 0x15a490: 0x738c0
    ctx->pc = 0x15a490u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
label_15a494:
    // 0x15a494: 0x24a50003
    ctx->pc = 0x15a494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3));
label_15a498:
    // 0x15a498: 0x28a20010
    ctx->pc = 0x15a498u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 16));
label_15a49c:
    // 0x15a49c: 0x1440001e
label_15a4a0:
    if (ctx->pc == 0x15A4A0u) {
        ctx->pc = 0x15A4A0u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        ctx->pc = 0x15A4A4u;
        goto label_15a4a4;
    }
    ctx->pc = 0x15A49Cu;
    {
        const bool branch_taken_0x15a49c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A4A0u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 4));
        if (branch_taken_0x15a49c) {
            ctx->pc = 0x15A518u;
            goto label_15a518;
        }
    }
    ctx->pc = 0x15A4A4u;
label_15a4a4:
    // 0x15a4a4: 0x24a5fff0
    ctx->pc = 0x15a4a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967280));
label_15a4a8:
    // 0x15a4a8: 0x10a00009
label_15a4ac:
    if (ctx->pc == 0x15A4ACu) {
        ctx->pc = 0x15A4ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x15A4B0u;
        goto label_15a4b0;
    }
    ctx->pc = 0x15A4A8u;
    {
        const bool branch_taken_0x15a4a8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A4ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x15a4a8) {
            ctx->pc = 0x15A4D0u;
            goto label_15a4d0;
        }
    }
    ctx->pc = 0x15A4B0u;
label_15a4b0:
    // 0x15a4b0: 0x451023
    ctx->pc = 0x15a4b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15a4b4:
    // 0x15a4b4: 0x461006
    ctx->pc = 0x15a4b4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_15a4b8:
    // 0x15a4b8: 0xe23825
    ctx->pc = 0x15a4b8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15a4bc:
    // 0x15a4bc: 0x71c02
    ctx->pc = 0x15a4bcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), 16));
label_15a4c0:
    // 0x15a4c0: 0xa63804
    ctx->pc = 0x15a4c0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_15a4c4:
    // 0x15a4c4: 0x10000005
label_15a4c8:
    if (ctx->pc == 0x15A4C8u) {
        ctx->pc = 0x15A4C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
        ctx->pc = 0x15A4CCu;
        goto label_15a4cc;
    }
    ctx->pc = 0x15A4C4u;
    {
        const bool branch_taken_0x15a4c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A4C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
        if (branch_taken_0x15a4c4) {
            ctx->pc = 0x15A4DCu;
            goto label_15a4dc;
        }
    }
    ctx->pc = 0x15A4CCu;
label_15a4cc:
    // 0x15a4cc: 0x0
    ctx->pc = 0x15a4ccu;
    // NOP
label_15a4d0:
    // 0x15a4d0: 0x71402
    ctx->pc = 0x15a4d0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 16));
label_15a4d4:
    // 0x15a4d4: 0xc0382d
    ctx->pc = 0x15a4d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a4d8:
    // 0x15a4d8: 0xae020290
    ctx->pc = 0x15a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
label_15a4dc:
    // 0x15a4dc: 0x81060000
    ctx->pc = 0x15a4dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a4e0:
    // 0x15a4e0: 0x25080001
    ctx->pc = 0x15a4e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a4e4:
    // 0x15a4e4: 0x91020000
    ctx->pc = 0x15a4e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a4e8:
    // 0x15a4e8: 0x25080001
    ctx->pc = 0x15a4e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a4ec:
    // 0x15a4ec: 0x63200
    ctx->pc = 0x15a4ecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a4f0:
    // 0x15a4f0: 0x91030000
    ctx->pc = 0x15a4f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a4f4:
    // 0x15a4f4: 0xc23025
    ctx->pc = 0x15a4f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a4f8:
    // 0x15a4f8: 0x25080001
    ctx->pc = 0x15a4f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a4fc:
    // 0x15a4fc: 0x63200
    ctx->pc = 0x15a4fcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a500:
    // 0x15a500: 0x91020000
    ctx->pc = 0x15a500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a504:
    // 0x15a504: 0xc33025
    ctx->pc = 0x15a504u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a508:
    // 0x15a508: 0x25080001
    ctx->pc = 0x15a508u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a50c:
    // 0x15a50c: 0x63200
    ctx->pc = 0x15a50cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a510:
    // 0x15a510: 0x10000005
label_15a514:
    if (ctx->pc == 0x15A514u) {
        ctx->pc = 0x15A514u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A518u;
        goto label_15a518;
    }
    ctx->pc = 0x15A510u;
    {
        const bool branch_taken_0x15a510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A514u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a510) {
            ctx->pc = 0x15A528u;
            goto label_15a528;
        }
    }
    ctx->pc = 0x15A518u;
label_15a518:
    // 0x15a518: 0x71402
    ctx->pc = 0x15a518u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 16));
label_15a51c:
    // 0x15a51c: 0x73c00
    ctx->pc = 0x15a51cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
label_15a520:
    // 0x15a520: 0xae020290
    ctx->pc = 0x15a520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
label_15a524:
    // 0x15a524: 0x24a50010
    ctx->pc = 0x15a524u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
label_15a528:
    // 0x15a528: 0x8d2a0018
    ctx->pc = 0x15a528u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_15a52c:
    // 0x15a52c: 0x2542fffe
    ctx->pc = 0x15a52cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 4294967294));
label_15a530:
    // 0x15a530: 0x2c420002
    ctx->pc = 0x15a530u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_15a534:
    // 0x15a534: 0x10400041
label_15a538:
    if (ctx->pc == 0x15A538u) {
        ctx->pc = 0x15A538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15A53Cu;
        goto label_15a53c;
    }
    ctx->pc = 0x15A534u;
    {
        const bool branch_taken_0x15a534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15a534) {
            ctx->pc = 0x15A63Cu;
            goto label_15a63c;
        }
    }
    ctx->pc = 0x15A53Cu;
label_15a53c:
    // 0x15a53c: 0x260902c4
    ctx->pc = 0x15a53cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 708));
label_15a540:
    // 0x15a540: 0x717c2
    ctx->pc = 0x15a540u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 31));
label_15a544:
    // 0x15a544: 0x2403001f
    ctx->pc = 0x15a544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_15a548:
    // 0x15a548: 0x14a30013
label_15a54c:
    if (ctx->pc == 0x15A54Cu) {
        ctx->pc = 0x15A54Cu;
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x15A550u;
        goto label_15a550;
    }
    ctx->pc = 0x15A548u;
    {
        const bool branch_taken_0x15a548 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x15A54Cu;
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x15a548) {
            ctx->pc = 0x15A598u;
            goto label_15a598;
        }
    }
    ctx->pc = 0x15A550u;
label_15a550:
    // 0x15a550: 0xc0382d
    ctx->pc = 0x15a550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a554:
    // 0x15a554: 0x81060000
    ctx->pc = 0x15a554u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a558:
    // 0x15a558: 0x25080001
    ctx->pc = 0x15a558u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a55c:
    // 0x15a55c: 0x282d
    ctx->pc = 0x15a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a560:
    // 0x15a560: 0x91020000
    ctx->pc = 0x15a560u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a564:
    // 0x15a564: 0x25080001
    ctx->pc = 0x15a564u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a568:
    // 0x15a568: 0x63200
    ctx->pc = 0x15a568u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a56c:
    // 0x15a56c: 0x91030000
    ctx->pc = 0x15a56cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a570:
    // 0x15a570: 0xc23025
    ctx->pc = 0x15a570u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a574:
    // 0x15a574: 0x25080001
    ctx->pc = 0x15a574u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a578:
    // 0x15a578: 0x63200
    ctx->pc = 0x15a578u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a57c:
    // 0x15a57c: 0x91020000
    ctx->pc = 0x15a57cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a580:
    // 0x15a580: 0xc33025
    ctx->pc = 0x15a580u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a584:
    // 0x15a584: 0x25080001
    ctx->pc = 0x15a584u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a588:
    // 0x15a588: 0x63200
    ctx->pc = 0x15a588u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a58c:
    // 0x15a58c: 0x10000004
label_15a590:
    if (ctx->pc == 0x15A590u) {
        ctx->pc = 0x15A590u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A594u;
        goto label_15a594;
    }
    ctx->pc = 0x15A58Cu;
    {
        const bool branch_taken_0x15a58c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A590u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a58c) {
            ctx->pc = 0x15A5A0u;
            goto label_15a5a0;
        }
    }
    ctx->pc = 0x15A594u;
label_15a594:
    // 0x15a594: 0x0
    ctx->pc = 0x15a594u;
    // NOP
label_15a598:
    // 0x15a598: 0x24a50001
    ctx->pc = 0x15a598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_15a59c:
    // 0x15a59c: 0x73840
    ctx->pc = 0x15a59cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
label_15a5a0:
    // 0x15a5a0: 0x28a2001d
    ctx->pc = 0x15a5a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 29));
label_15a5a4:
    // 0x15a5a4: 0x1440001a
label_15a5a8:
    if (ctx->pc == 0x15A5A8u) {
        ctx->pc = 0x15A5A8u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
        ctx->pc = 0x15A5ACu;
        goto label_15a5ac;
    }
    ctx->pc = 0x15A5A4u;
    {
        const bool branch_taken_0x15a5a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A5A8u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
        if (branch_taken_0x15a5a4) {
            ctx->pc = 0x15A610u;
            goto label_15a610;
        }
    }
    ctx->pc = 0x15A5ACu;
label_15a5ac:
    // 0x15a5ac: 0x24a5ffe3
    ctx->pc = 0x15a5acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967267));
label_15a5b0:
    // 0x15a5b0: 0x10a00007
label_15a5b4:
    if (ctx->pc == 0x15A5B4u) {
        ctx->pc = 0x15A5B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15A5B8u;
        goto label_15a5b8;
    }
    ctx->pc = 0x15A5B0u;
    {
        const bool branch_taken_0x15a5b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A5B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15a5b0) {
            ctx->pc = 0x15A5D0u;
            goto label_15a5d0;
        }
    }
    ctx->pc = 0x15A5B8u;
label_15a5b8:
    // 0x15a5b8: 0x451023
    ctx->pc = 0x15a5b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15a5bc:
    // 0x15a5bc: 0x461006
    ctx->pc = 0x15a5bcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_15a5c0:
    // 0x15a5c0: 0xe23825
    ctx->pc = 0x15a5c0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15a5c4:
    // 0x15a5c4: 0x72742
    ctx->pc = 0x15a5c4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
label_15a5c8:
    // 0x15a5c8: 0x10000002
label_15a5cc:
    if (ctx->pc == 0x15A5CCu) {
        ctx->pc = 0x15A5CCu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x15A5D0u;
        goto label_15a5d0;
    }
    ctx->pc = 0x15A5C8u;
    {
        const bool branch_taken_0x15a5c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A5CCu;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x15a5c8) {
            ctx->pc = 0x15A5D4u;
            goto label_15a5d4;
        }
    }
    ctx->pc = 0x15A5D0u;
label_15a5d0:
    // 0x15a5d0: 0xc0382d
    ctx->pc = 0x15a5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a5d4:
    // 0x15a5d4: 0x81060000
    ctx->pc = 0x15a5d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a5d8:
    // 0x15a5d8: 0x25080001
    ctx->pc = 0x15a5d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a5dc:
    // 0x15a5dc: 0x91020000
    ctx->pc = 0x15a5dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a5e0:
    // 0x15a5e0: 0x25080001
    ctx->pc = 0x15a5e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a5e4:
    // 0x15a5e4: 0x63200
    ctx->pc = 0x15a5e4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a5e8:
    // 0x15a5e8: 0x91030000
    ctx->pc = 0x15a5e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a5ec:
    // 0x15a5ec: 0xc23025
    ctx->pc = 0x15a5ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a5f0:
    // 0x15a5f0: 0x25080001
    ctx->pc = 0x15a5f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a5f4:
    // 0x15a5f4: 0x63200
    ctx->pc = 0x15a5f4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a5f8:
    // 0x15a5f8: 0x91020000
    ctx->pc = 0x15a5f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a5fc:
    // 0x15a5fc: 0xc33025
    ctx->pc = 0x15a5fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a600:
    // 0x15a600: 0x25080001
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a604:
    // 0x15a604: 0x63200
    ctx->pc = 0x15a604u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a608:
    // 0x15a608: 0x10000003
label_15a60c:
    if (ctx->pc == 0x15A60Cu) {
        ctx->pc = 0x15A60Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A610u;
        goto label_15a610;
    }
    ctx->pc = 0x15A608u;
    {
        const bool branch_taken_0x15a608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A60Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a608) {
            ctx->pc = 0x15A618u;
            goto label_15a618;
        }
    }
    ctx->pc = 0x15A610u;
label_15a610:
    // 0x15a610: 0x738c0
    ctx->pc = 0x15a610u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
label_15a614:
    // 0x15a614: 0x24a50003
    ctx->pc = 0x15a614u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3));
label_15a618:
    // 0x15a618: 0x2484ffff
    ctx->pc = 0x15a618u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_15a61c:
    // 0x15a61c: 0x2402001b
    ctx->pc = 0x15a61cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_15a620:
    // 0x15a620: 0x24030001
    ctx->pc = 0x15a620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_15a624:
    // 0x15a624: 0x441023
    ctx->pc = 0x15a624u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15a628:
    // 0x15a628: 0x831804
    ctx->pc = 0x15a628u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_15a62c:
    // 0x15a62c: 0xad220008
    ctx->pc = 0x15a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_15a630:
    // 0x15a630: 0xad23000c
    ctx->pc = 0x15a630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_15a634:
    // 0x15a634: 0xad240004
    ctx->pc = 0x15a634u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_15a638:
    // 0x15a638: 0x24020003
    ctx->pc = 0x15a638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_15a63c:
    // 0x15a63c: 0x55420043
label_15a640:
    if (ctx->pc == 0x15A640u) {
        ctx->pc = 0x15A640u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->pc = 0x15A644u;
        goto label_15a644;
    }
    ctx->pc = 0x15A63Cu;
    {
        const bool branch_taken_0x15a63c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 2));
        if (branch_taken_0x15a63c) {
            ctx->pc = 0x15A640u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->pc = 0x15A74Cu;
            goto label_15a74c;
        }
    }
    ctx->pc = 0x15A644u;
label_15a644:
    // 0x15a644: 0x260902e8
    ctx->pc = 0x15a644u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 744));
label_15a648:
    // 0x15a648: 0x717c2
    ctx->pc = 0x15a648u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 31));
label_15a64c:
    // 0x15a64c: 0x2403001f
    ctx->pc = 0x15a64cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_15a650:
    // 0x15a650: 0x14a30013
label_15a654:
    if (ctx->pc == 0x15A654u) {
        ctx->pc = 0x15A654u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x15A658u;
        goto label_15a658;
    }
    ctx->pc = 0x15A650u;
    {
        const bool branch_taken_0x15a650 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x15A654u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x15a650) {
            ctx->pc = 0x15A6A0u;
            goto label_15a6a0;
        }
    }
    ctx->pc = 0x15A658u;
label_15a658:
    // 0x15a658: 0xc0382d
    ctx->pc = 0x15a658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a65c:
    // 0x15a65c: 0x81060000
    ctx->pc = 0x15a65cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a660:
    // 0x15a660: 0x25080001
    ctx->pc = 0x15a660u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a664:
    // 0x15a664: 0x282d
    ctx->pc = 0x15a664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a668:
    // 0x15a668: 0x91020000
    ctx->pc = 0x15a668u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a66c:
    // 0x15a66c: 0x25080001
    ctx->pc = 0x15a66cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a670:
    // 0x15a670: 0x63200
    ctx->pc = 0x15a670u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a674:
    // 0x15a674: 0x91030000
    ctx->pc = 0x15a674u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a678:
    // 0x15a678: 0xc23025
    ctx->pc = 0x15a678u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a67c:
    // 0x15a67c: 0x25080001
    ctx->pc = 0x15a67cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a680:
    // 0x15a680: 0x63200
    ctx->pc = 0x15a680u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a684:
    // 0x15a684: 0x91020000
    ctx->pc = 0x15a684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a688:
    // 0x15a688: 0xc33025
    ctx->pc = 0x15a688u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a68c:
    // 0x15a68c: 0x25080001
    ctx->pc = 0x15a68cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a690:
    // 0x15a690: 0x63200
    ctx->pc = 0x15a690u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a694:
    // 0x15a694: 0x10000004
label_15a698:
    if (ctx->pc == 0x15A698u) {
        ctx->pc = 0x15A698u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A69Cu;
        goto label_15a69c;
    }
    ctx->pc = 0x15A694u;
    {
        const bool branch_taken_0x15a694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A698u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a694) {
            ctx->pc = 0x15A6A8u;
            goto label_15a6a8;
        }
    }
    ctx->pc = 0x15A69Cu;
label_15a69c:
    // 0x15a69c: 0x0
    ctx->pc = 0x15a69cu;
    // NOP
label_15a6a0:
    // 0x15a6a0: 0x24a50001
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_15a6a4:
    // 0x15a6a4: 0x73840
    ctx->pc = 0x15a6a4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
label_15a6a8:
    // 0x15a6a8: 0x28a2001d
    ctx->pc = 0x15a6a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 29));
label_15a6ac:
    // 0x15a6ac: 0x1440001c
label_15a6b0:
    if (ctx->pc == 0x15A6B0u) {
        ctx->pc = 0x15A6B0u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
        ctx->pc = 0x15A6B4u;
        goto label_15a6b4;
    }
    ctx->pc = 0x15A6ACu;
    {
        const bool branch_taken_0x15a6ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15A6B0u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
        if (branch_taken_0x15a6ac) {
            ctx->pc = 0x15A720u;
            goto label_15a720;
        }
    }
    ctx->pc = 0x15A6B4u;
label_15a6b4:
    // 0x15a6b4: 0x24a5ffe3
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967267));
label_15a6b8:
    // 0x15a6b8: 0x10a00007
label_15a6bc:
    if (ctx->pc == 0x15A6BCu) {
        ctx->pc = 0x15A6BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15A6C0u;
        goto label_15a6c0;
    }
    ctx->pc = 0x15A6B8u;
    {
        const bool branch_taken_0x15a6b8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A6BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15a6b8) {
            ctx->pc = 0x15A6D8u;
            goto label_15a6d8;
        }
    }
    ctx->pc = 0x15A6C0u;
label_15a6c0:
    // 0x15a6c0: 0x451023
    ctx->pc = 0x15a6c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15a6c4:
    // 0x15a6c4: 0x461006
    ctx->pc = 0x15a6c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_15a6c8:
    // 0x15a6c8: 0xe23825
    ctx->pc = 0x15a6c8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_15a6cc:
    // 0x15a6cc: 0x72742
    ctx->pc = 0x15a6ccu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 7), 29));
label_15a6d0:
    // 0x15a6d0: 0x10000002
label_15a6d4:
    if (ctx->pc == 0x15A6D4u) {
        ctx->pc = 0x15A6D4u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x15A6D8u;
        goto label_15a6d8;
    }
    ctx->pc = 0x15A6D0u;
    {
        const bool branch_taken_0x15a6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A6D4u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x15a6d0) {
            ctx->pc = 0x15A6DCu;
            goto label_15a6dc;
        }
    }
    ctx->pc = 0x15A6D8u;
label_15a6d8:
    // 0x15a6d8: 0xc0382d
    ctx->pc = 0x15a6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a6dc:
    // 0x15a6dc: 0x81060000
    ctx->pc = 0x15a6dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a6e0:
    // 0x15a6e0: 0x25080001
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a6e4:
    // 0x15a6e4: 0x91020000
    ctx->pc = 0x15a6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a6e8:
    // 0x15a6e8: 0x25080001
    ctx->pc = 0x15a6e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a6ec:
    // 0x15a6ec: 0x63200
    ctx->pc = 0x15a6ecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a6f0:
    // 0x15a6f0: 0x91030000
    ctx->pc = 0x15a6f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a6f4:
    // 0x15a6f4: 0xc23025
    ctx->pc = 0x15a6f4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a6f8:
    // 0x15a6f8: 0x25080001
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a6fc:
    // 0x15a6fc: 0x63200
    ctx->pc = 0x15a6fcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a700:
    // 0x15a700: 0x91020000
    ctx->pc = 0x15a700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a704:
    // 0x15a704: 0xc33025
    ctx->pc = 0x15a704u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a708:
    // 0x15a708: 0x25080001
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a70c:
    // 0x15a70c: 0x63200
    ctx->pc = 0x15a70cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a710:
    // 0x15a710: 0x10000005
label_15a714:
    if (ctx->pc == 0x15A714u) {
        ctx->pc = 0x15A714u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x15A718u;
        goto label_15a718;
    }
    ctx->pc = 0x15A710u;
    {
        const bool branch_taken_0x15a710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A714u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x15a710) {
            ctx->pc = 0x15A728u;
            goto label_15a728;
        }
    }
    ctx->pc = 0x15A718u;
label_15a718:
    // 0x15a718: 0x10000031
label_15a71c:
    if (ctx->pc == 0x15A71Cu) {
        ctx->pc = 0x15A71Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x15A720u;
        goto label_15a720;
    }
    ctx->pc = 0x15A718u;
    {
        const bool branch_taken_0x15a718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A71Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x15a718) {
            ctx->pc = 0x15A7E0u;
            goto label_15a7e0;
        }
    }
    ctx->pc = 0x15A720u;
label_15a720:
    // 0x15a720: 0x738c0
    ctx->pc = 0x15a720u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 3));
label_15a724:
    // 0x15a724: 0x24a50003
    ctx->pc = 0x15a724u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3));
label_15a728:
    // 0x15a728: 0x2484ffff
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_15a72c:
    // 0x15a72c: 0x2402001b
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_15a730:
    // 0x15a730: 0x24030001
    ctx->pc = 0x15a730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_15a734:
    // 0x15a734: 0x441023
    ctx->pc = 0x15a734u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15a738:
    // 0x15a738: 0x831804
    ctx->pc = 0x15a738u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_15a73c:
    // 0x15a73c: 0xad220008
    ctx->pc = 0x15a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
label_15a740:
    // 0x15a740: 0xad23000c
    ctx->pc = 0x15a740u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
label_15a744:
    // 0x15a744: 0xad240004
    ctx->pc = 0x15a744u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_15a748:
    // 0x15a748: 0x8e0202b4
    ctx->pc = 0x15a748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_15a74c:
    // 0x15a74c: 0xae0202ac
    ctx->pc = 0x15a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_15a750:
    // 0x15a750: 0x1000001d
label_15a754:
    if (ctx->pc == 0x15A754u) {
        ctx->pc = 0x15A754u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->pc = 0x15A758u;
        goto label_15a758;
    }
    ctx->pc = 0x15A750u;
    {
        const bool branch_taken_0x15a750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A754u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 840)));
        if (branch_taken_0x15a750) {
            ctx->pc = 0x15A7C8u;
            goto label_15a7c8;
        }
    }
    ctx->pc = 0x15A758u;
label_15a758:
    // 0x15a758: 0x28a20020
    ctx->pc = 0x15a758u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
label_15a75c:
    // 0x15a75c: 0x54400011
label_15a760:
    if (ctx->pc == 0x15A760u) {
        ctx->pc = 0x15A760u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 9));
        ctx->pc = 0x15A764u;
        goto label_15a764;
    }
    ctx->pc = 0x15A75Cu;
    {
        const bool branch_taken_0x15a75c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15a75c) {
            ctx->pc = 0x15A760u;
            SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 9));
            ctx->pc = 0x15A7A4u;
            goto label_15a7a4;
        }
    }
    ctx->pc = 0x15A764u;
label_15a764:
    // 0x15a764: 0x24a5ffe0
    ctx->pc = 0x15a764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
label_15a768:
    // 0x15a768: 0xa63804
    ctx->pc = 0x15a768u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_15a76c:
    // 0x15a76c: 0x81060000
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a770:
    // 0x15a770: 0x25080001
    ctx->pc = 0x15a770u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a774:
    // 0x15a774: 0x91020000
    ctx->pc = 0x15a774u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a778:
    // 0x15a778: 0x25080001
    ctx->pc = 0x15a778u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a77c:
    // 0x15a77c: 0x63200
    ctx->pc = 0x15a77cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a780:
    // 0x15a780: 0x91030000
    ctx->pc = 0x15a780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a784:
    // 0x15a784: 0xc23025
    ctx->pc = 0x15a784u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a788:
    // 0x15a788: 0x25080001
    ctx->pc = 0x15a788u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a78c:
    // 0x15a78c: 0x63200
    ctx->pc = 0x15a78cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a790:
    // 0x15a790: 0x91020000
    ctx->pc = 0x15a790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a794:
    // 0x15a794: 0xc33025
    ctx->pc = 0x15a794u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_15a798:
    // 0x15a798: 0x25080001
    ctx->pc = 0x15a798u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_15a79c:
    // 0x15a79c: 0x63200
    ctx->pc = 0x15a79cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15a7a0:
    // 0x15a7a0: 0xc23025
    ctx->pc = 0x15a7a0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15a7a4:
    // 0x15a7a4: 0x24a30007
    ctx->pc = 0x15a7a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 7));
label_15a7a8:
    // 0x15a7a8: 0x8e04034c
    ctx->pc = 0x15a7a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 844)));
label_15a7ac:
    // 0x15a7ac: 0x318c3
    ctx->pc = 0x15a7acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_15a7b0:
    // 0x15a7b0: 0x1031821
    ctx->pc = 0x15a7b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_15a7b4:
    // 0x15a7b4: 0x2463fff8
    ctx->pc = 0x15a7b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967288));
label_15a7b8:
    // 0x15a7b8: 0x691823
    ctx->pc = 0x15a7b8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_15a7bc:
    // 0x15a7bc: 0x64182a
    ctx->pc = 0x15a7bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_15a7c0:
    // 0x15a7c0: 0x10600020
label_15a7c4:
    if (ctx->pc == 0x15A7C4u) {
        ctx->pc = 0x15A7C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x15A7C8u;
        goto label_15a7c8;
    }
    ctx->pc = 0x15A7C0u;
    {
        const bool branch_taken_0x15a7c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15A7C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x15a7c0) {
            ctx->pc = 0x15A844u;
            goto label_15a844;
        }
    }
    ctx->pc = 0x15A7C8u;
label_15a7c8:
    // 0x15a7c8: 0x4e2ffe3
label_15a7cc:
    if (ctx->pc == 0x15A7CCu) {
        ctx->pc = 0x15A7CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9));
        ctx->pc = 0x15A7D0u;
        goto label_15a7d0;
    }
    ctx->pc = 0x15A7C8u;
    {
        const bool branch_taken_0x15a7c8 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x15a7c8) {
            ctx->pc = 0x15A7CCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9));
            ctx->pc = 0x15A758u;
            goto label_15a758;
        }
    }
    ctx->pc = 0x15A7D0u;
label_15a7d0:
    // 0x15a7d0: 0x24a50001
    ctx->pc = 0x15a7d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_15a7d4:
    // 0x15a7d4: 0x28a20020
    ctx->pc = 0x15a7d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
label_15a7d8:
    // 0x15a7d8: 0x5040ffcf
label_15a7dc:
    if (ctx->pc == 0x15A7DCu) {
        ctx->pc = 0x15A7DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->pc = 0x15A7E0u;
        goto label_15a7e0;
    }
    ctx->pc = 0x15A7D8u;
    {
        const bool branch_taken_0x15a7d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x15a7d8) {
            ctx->pc = 0x15A7DCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
            ctx->pc = 0x15A718u;
            goto label_15a718;
        }
    }
    ctx->pc = 0x15A7E0u;
label_15a7e0:
    // 0x15a7e0: 0x30a20007
    ctx->pc = 0x15a7e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 7));
label_15a7e4:
    // 0x15a7e4: 0x3a0382d
    ctx->pc = 0x15a7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15a7e8:
    // 0x15a7e8: 0xa22823
    ctx->pc = 0x15a7e8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_15a7ec:
    // 0x15a7ec: 0xae020350
    ctx->pc = 0x15a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
label_15a7f0:
    // 0x15a7f0: 0x24a50007
    ctx->pc = 0x15a7f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7));
label_15a7f4:
    // 0x15a7f4: 0x240202d
    ctx->pc = 0x15a7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a7f8:
    // 0x15a7f8: 0x528c3
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_15a7fc:
    // 0x15a7fc: 0x240302d
    ctx->pc = 0x15a7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a800:
    // 0x15a800: 0x1052821
    ctx->pc = 0x15a800u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_15a804:
    // 0x15a804: 0x24a5fff8
    ctx->pc = 0x15a804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967288));
label_15a808:
    // 0x15a808: 0xc0501f8
label_15a80c:
    if (ctx->pc == 0x15A80Cu) {
        ctx->pc = 0x15A80Cu;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->pc = 0x15A810u;
        goto label_15a810;
    }
    ctx->pc = 0x15A808u;
    SET_GPR_U32(ctx, 31, 0x15A810u);
    ctx->pc = 0x15A80Cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A810u; }
    }
    if (ctx->pc != 0x15A810u) { return; }
    ctx->pc = 0x15A810u;
label_15a810:
    // 0x15a810: 0x8e230000
    ctx->pc = 0x15a810u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a814:
    // 0x15a814: 0x240302d
    ctx->pc = 0x15a814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a818:
    // 0x15a818: 0x220202d
    ctx->pc = 0x15a818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a81c:
    // 0x15a81c: 0x8c620020
    ctx->pc = 0x15a81cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_15a820:
    // 0x15a820: 0x40f809
label_15a824:
    if (ctx->pc == 0x15A824u) {
        ctx->pc = 0x15A824u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A828u;
        goto label_15a828;
    }
    ctx->pc = 0x15A820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A828u);
        ctx->pc = 0x15A824u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A270u: goto label_15a270;
            case 0x15A274u: goto label_15a274;
            case 0x15A278u: goto label_15a278;
            case 0x15A27Cu: goto label_15a27c;
            case 0x15A280u: goto label_15a280;
            case 0x15A284u: goto label_15a284;
            case 0x15A288u: goto label_15a288;
            case 0x15A28Cu: goto label_15a28c;
            case 0x15A290u: goto label_15a290;
            case 0x15A294u: goto label_15a294;
            case 0x15A298u: goto label_15a298;
            case 0x15A29Cu: goto label_15a29c;
            case 0x15A2A0u: goto label_15a2a0;
            case 0x15A2A4u: goto label_15a2a4;
            case 0x15A2A8u: goto label_15a2a8;
            case 0x15A2ACu: goto label_15a2ac;
            case 0x15A2B0u: goto label_15a2b0;
            case 0x15A2B4u: goto label_15a2b4;
            case 0x15A2B8u: goto label_15a2b8;
            case 0x15A2BCu: goto label_15a2bc;
            case 0x15A2C0u: goto label_15a2c0;
            case 0x15A2C4u: goto label_15a2c4;
            case 0x15A2C8u: goto label_15a2c8;
            case 0x15A2CCu: goto label_15a2cc;
            case 0x15A2D0u: goto label_15a2d0;
            case 0x15A2D4u: goto label_15a2d4;
            case 0x15A2D8u: goto label_15a2d8;
            case 0x15A2DCu: goto label_15a2dc;
            case 0x15A2E0u: goto label_15a2e0;
            case 0x15A2E4u: goto label_15a2e4;
            case 0x15A2E8u: goto label_15a2e8;
            case 0x15A2ECu: goto label_15a2ec;
            case 0x15A2F0u: goto label_15a2f0;
            case 0x15A2F4u: goto label_15a2f4;
            case 0x15A2F8u: goto label_15a2f8;
            case 0x15A2FCu: goto label_15a2fc;
            case 0x15A300u: goto label_15a300;
            case 0x15A304u: goto label_15a304;
            case 0x15A308u: goto label_15a308;
            case 0x15A30Cu: goto label_15a30c;
            case 0x15A310u: goto label_15a310;
            case 0x15A314u: goto label_15a314;
            case 0x15A318u: goto label_15a318;
            case 0x15A31Cu: goto label_15a31c;
            case 0x15A320u: goto label_15a320;
            case 0x15A324u: goto label_15a324;
            case 0x15A328u: goto label_15a328;
            case 0x15A32Cu: goto label_15a32c;
            case 0x15A330u: goto label_15a330;
            case 0x15A334u: goto label_15a334;
            case 0x15A338u: goto label_15a338;
            case 0x15A33Cu: goto label_15a33c;
            case 0x15A340u: goto label_15a340;
            case 0x15A344u: goto label_15a344;
            case 0x15A348u: goto label_15a348;
            case 0x15A34Cu: goto label_15a34c;
            case 0x15A350u: goto label_15a350;
            case 0x15A354u: goto label_15a354;
            case 0x15A358u: goto label_15a358;
            case 0x15A35Cu: goto label_15a35c;
            case 0x15A360u: goto label_15a360;
            case 0x15A364u: goto label_15a364;
            case 0x15A368u: goto label_15a368;
            case 0x15A36Cu: goto label_15a36c;
            case 0x15A370u: goto label_15a370;
            case 0x15A374u: goto label_15a374;
            case 0x15A378u: goto label_15a378;
            case 0x15A37Cu: goto label_15a37c;
            case 0x15A380u: goto label_15a380;
            case 0x15A384u: goto label_15a384;
            case 0x15A388u: goto label_15a388;
            case 0x15A38Cu: goto label_15a38c;
            case 0x15A390u: goto label_15a390;
            case 0x15A394u: goto label_15a394;
            case 0x15A398u: goto label_15a398;
            case 0x15A39Cu: goto label_15a39c;
            case 0x15A3A0u: goto label_15a3a0;
            case 0x15A3A4u: goto label_15a3a4;
            case 0x15A3A8u: goto label_15a3a8;
            case 0x15A3ACu: goto label_15a3ac;
            case 0x15A3B0u: goto label_15a3b0;
            case 0x15A3B4u: goto label_15a3b4;
            case 0x15A3B8u: goto label_15a3b8;
            case 0x15A3BCu: goto label_15a3bc;
            case 0x15A3C0u: goto label_15a3c0;
            case 0x15A3C4u: goto label_15a3c4;
            case 0x15A3C8u: goto label_15a3c8;
            case 0x15A3CCu: goto label_15a3cc;
            case 0x15A3D0u: goto label_15a3d0;
            case 0x15A3D4u: goto label_15a3d4;
            case 0x15A3D8u: goto label_15a3d8;
            case 0x15A3DCu: goto label_15a3dc;
            case 0x15A3E0u: goto label_15a3e0;
            case 0x15A3E4u: goto label_15a3e4;
            case 0x15A3E8u: goto label_15a3e8;
            case 0x15A3ECu: goto label_15a3ec;
            case 0x15A3F0u: goto label_15a3f0;
            case 0x15A3F4u: goto label_15a3f4;
            case 0x15A3F8u: goto label_15a3f8;
            case 0x15A3FCu: goto label_15a3fc;
            case 0x15A400u: goto label_15a400;
            case 0x15A404u: goto label_15a404;
            case 0x15A408u: goto label_15a408;
            case 0x15A40Cu: goto label_15a40c;
            case 0x15A410u: goto label_15a410;
            case 0x15A414u: goto label_15a414;
            case 0x15A418u: goto label_15a418;
            case 0x15A41Cu: goto label_15a41c;
            case 0x15A420u: goto label_15a420;
            case 0x15A424u: goto label_15a424;
            case 0x15A428u: goto label_15a428;
            case 0x15A42Cu: goto label_15a42c;
            case 0x15A430u: goto label_15a430;
            case 0x15A434u: goto label_15a434;
            case 0x15A438u: goto label_15a438;
            case 0x15A43Cu: goto label_15a43c;
            case 0x15A440u: goto label_15a440;
            case 0x15A444u: goto label_15a444;
            case 0x15A448u: goto label_15a448;
            case 0x15A44Cu: goto label_15a44c;
            case 0x15A450u: goto label_15a450;
            case 0x15A454u: goto label_15a454;
            case 0x15A458u: goto label_15a458;
            case 0x15A45Cu: goto label_15a45c;
            case 0x15A460u: goto label_15a460;
            case 0x15A464u: goto label_15a464;
            case 0x15A468u: goto label_15a468;
            case 0x15A46Cu: goto label_15a46c;
            case 0x15A470u: goto label_15a470;
            case 0x15A474u: goto label_15a474;
            case 0x15A478u: goto label_15a478;
            case 0x15A47Cu: goto label_15a47c;
            case 0x15A480u: goto label_15a480;
            case 0x15A484u: goto label_15a484;
            case 0x15A488u: goto label_15a488;
            case 0x15A48Cu: goto label_15a48c;
            case 0x15A490u: goto label_15a490;
            case 0x15A494u: goto label_15a494;
            case 0x15A498u: goto label_15a498;
            case 0x15A49Cu: goto label_15a49c;
            case 0x15A4A0u: goto label_15a4a0;
            case 0x15A4A4u: goto label_15a4a4;
            case 0x15A4A8u: goto label_15a4a8;
            case 0x15A4ACu: goto label_15a4ac;
            case 0x15A4B0u: goto label_15a4b0;
            case 0x15A4B4u: goto label_15a4b4;
            case 0x15A4B8u: goto label_15a4b8;
            case 0x15A4BCu: goto label_15a4bc;
            case 0x15A4C0u: goto label_15a4c0;
            case 0x15A4C4u: goto label_15a4c4;
            case 0x15A4C8u: goto label_15a4c8;
            case 0x15A4CCu: goto label_15a4cc;
            case 0x15A4D0u: goto label_15a4d0;
            case 0x15A4D4u: goto label_15a4d4;
            case 0x15A4D8u: goto label_15a4d8;
            case 0x15A4DCu: goto label_15a4dc;
            case 0x15A4E0u: goto label_15a4e0;
            case 0x15A4E4u: goto label_15a4e4;
            case 0x15A4E8u: goto label_15a4e8;
            case 0x15A4ECu: goto label_15a4ec;
            case 0x15A4F0u: goto label_15a4f0;
            case 0x15A4F4u: goto label_15a4f4;
            case 0x15A4F8u: goto label_15a4f8;
            case 0x15A4FCu: goto label_15a4fc;
            case 0x15A500u: goto label_15a500;
            case 0x15A504u: goto label_15a504;
            case 0x15A508u: goto label_15a508;
            case 0x15A50Cu: goto label_15a50c;
            case 0x15A510u: goto label_15a510;
            case 0x15A514u: goto label_15a514;
            case 0x15A518u: goto label_15a518;
            case 0x15A51Cu: goto label_15a51c;
            case 0x15A520u: goto label_15a520;
            case 0x15A524u: goto label_15a524;
            case 0x15A528u: goto label_15a528;
            case 0x15A52Cu: goto label_15a52c;
            case 0x15A530u: goto label_15a530;
            case 0x15A534u: goto label_15a534;
            case 0x15A538u: goto label_15a538;
            case 0x15A53Cu: goto label_15a53c;
            case 0x15A540u: goto label_15a540;
            case 0x15A544u: goto label_15a544;
            case 0x15A548u: goto label_15a548;
            case 0x15A54Cu: goto label_15a54c;
            case 0x15A550u: goto label_15a550;
            case 0x15A554u: goto label_15a554;
            case 0x15A558u: goto label_15a558;
            case 0x15A55Cu: goto label_15a55c;
            case 0x15A560u: goto label_15a560;
            case 0x15A564u: goto label_15a564;
            case 0x15A568u: goto label_15a568;
            case 0x15A56Cu: goto label_15a56c;
            case 0x15A570u: goto label_15a570;
            case 0x15A574u: goto label_15a574;
            case 0x15A578u: goto label_15a578;
            case 0x15A57Cu: goto label_15a57c;
            case 0x15A580u: goto label_15a580;
            case 0x15A584u: goto label_15a584;
            case 0x15A588u: goto label_15a588;
            case 0x15A58Cu: goto label_15a58c;
            case 0x15A590u: goto label_15a590;
            case 0x15A594u: goto label_15a594;
            case 0x15A598u: goto label_15a598;
            case 0x15A59Cu: goto label_15a59c;
            case 0x15A5A0u: goto label_15a5a0;
            case 0x15A5A4u: goto label_15a5a4;
            case 0x15A5A8u: goto label_15a5a8;
            case 0x15A5ACu: goto label_15a5ac;
            case 0x15A5B0u: goto label_15a5b0;
            case 0x15A5B4u: goto label_15a5b4;
            case 0x15A5B8u: goto label_15a5b8;
            case 0x15A5BCu: goto label_15a5bc;
            case 0x15A5C0u: goto label_15a5c0;
            case 0x15A5C4u: goto label_15a5c4;
            case 0x15A5C8u: goto label_15a5c8;
            case 0x15A5CCu: goto label_15a5cc;
            case 0x15A5D0u: goto label_15a5d0;
            case 0x15A5D4u: goto label_15a5d4;
            case 0x15A5D8u: goto label_15a5d8;
            case 0x15A5DCu: goto label_15a5dc;
            case 0x15A5E0u: goto label_15a5e0;
            case 0x15A5E4u: goto label_15a5e4;
            case 0x15A5E8u: goto label_15a5e8;
            case 0x15A5ECu: goto label_15a5ec;
            case 0x15A5F0u: goto label_15a5f0;
            case 0x15A5F4u: goto label_15a5f4;
            case 0x15A5F8u: goto label_15a5f8;
            case 0x15A5FCu: goto label_15a5fc;
            case 0x15A600u: goto label_15a600;
            case 0x15A604u: goto label_15a604;
            case 0x15A608u: goto label_15a608;
            case 0x15A60Cu: goto label_15a60c;
            case 0x15A610u: goto label_15a610;
            case 0x15A614u: goto label_15a614;
            case 0x15A618u: goto label_15a618;
            case 0x15A61Cu: goto label_15a61c;
            case 0x15A620u: goto label_15a620;
            case 0x15A624u: goto label_15a624;
            case 0x15A628u: goto label_15a628;
            case 0x15A62Cu: goto label_15a62c;
            case 0x15A630u: goto label_15a630;
            case 0x15A634u: goto label_15a634;
            case 0x15A638u: goto label_15a638;
            case 0x15A63Cu: goto label_15a63c;
            case 0x15A640u: goto label_15a640;
            case 0x15A644u: goto label_15a644;
            case 0x15A648u: goto label_15a648;
            case 0x15A64Cu: goto label_15a64c;
            case 0x15A650u: goto label_15a650;
            case 0x15A654u: goto label_15a654;
            case 0x15A658u: goto label_15a658;
            case 0x15A65Cu: goto label_15a65c;
            case 0x15A660u: goto label_15a660;
            case 0x15A664u: goto label_15a664;
            case 0x15A668u: goto label_15a668;
            case 0x15A66Cu: goto label_15a66c;
            case 0x15A670u: goto label_15a670;
            case 0x15A674u: goto label_15a674;
            case 0x15A678u: goto label_15a678;
            case 0x15A67Cu: goto label_15a67c;
            case 0x15A680u: goto label_15a680;
            case 0x15A684u: goto label_15a684;
            case 0x15A688u: goto label_15a688;
            case 0x15A68Cu: goto label_15a68c;
            case 0x15A690u: goto label_15a690;
            case 0x15A694u: goto label_15a694;
            case 0x15A698u: goto label_15a698;
            case 0x15A69Cu: goto label_15a69c;
            case 0x15A6A0u: goto label_15a6a0;
            case 0x15A6A4u: goto label_15a6a4;
            case 0x15A6A8u: goto label_15a6a8;
            case 0x15A6ACu: goto label_15a6ac;
            case 0x15A6B0u: goto label_15a6b0;
            case 0x15A6B4u: goto label_15a6b4;
            case 0x15A6B8u: goto label_15a6b8;
            case 0x15A6BCu: goto label_15a6bc;
            case 0x15A6C0u: goto label_15a6c0;
            case 0x15A6C4u: goto label_15a6c4;
            case 0x15A6C8u: goto label_15a6c8;
            case 0x15A6CCu: goto label_15a6cc;
            case 0x15A6D0u: goto label_15a6d0;
            case 0x15A6D4u: goto label_15a6d4;
            case 0x15A6D8u: goto label_15a6d8;
            case 0x15A6DCu: goto label_15a6dc;
            case 0x15A6E0u: goto label_15a6e0;
            case 0x15A6E4u: goto label_15a6e4;
            case 0x15A6E8u: goto label_15a6e8;
            case 0x15A6ECu: goto label_15a6ec;
            case 0x15A6F0u: goto label_15a6f0;
            case 0x15A6F4u: goto label_15a6f4;
            case 0x15A6F8u: goto label_15a6f8;
            case 0x15A6FCu: goto label_15a6fc;
            case 0x15A700u: goto label_15a700;
            case 0x15A704u: goto label_15a704;
            case 0x15A708u: goto label_15a708;
            case 0x15A70Cu: goto label_15a70c;
            case 0x15A710u: goto label_15a710;
            case 0x15A714u: goto label_15a714;
            case 0x15A718u: goto label_15a718;
            case 0x15A71Cu: goto label_15a71c;
            case 0x15A720u: goto label_15a720;
            case 0x15A724u: goto label_15a724;
            case 0x15A728u: goto label_15a728;
            case 0x15A72Cu: goto label_15a72c;
            case 0x15A730u: goto label_15a730;
            case 0x15A734u: goto label_15a734;
            case 0x15A738u: goto label_15a738;
            case 0x15A73Cu: goto label_15a73c;
            case 0x15A740u: goto label_15a740;
            case 0x15A744u: goto label_15a744;
            case 0x15A748u: goto label_15a748;
            case 0x15A74Cu: goto label_15a74c;
            case 0x15A750u: goto label_15a750;
            case 0x15A754u: goto label_15a754;
            case 0x15A758u: goto label_15a758;
            case 0x15A75Cu: goto label_15a75c;
            case 0x15A760u: goto label_15a760;
            case 0x15A764u: goto label_15a764;
            case 0x15A768u: goto label_15a768;
            case 0x15A76Cu: goto label_15a76c;
            case 0x15A770u: goto label_15a770;
            case 0x15A774u: goto label_15a774;
            case 0x15A778u: goto label_15a778;
            case 0x15A77Cu: goto label_15a77c;
            case 0x15A780u: goto label_15a780;
            case 0x15A784u: goto label_15a784;
            case 0x15A788u: goto label_15a788;
            case 0x15A78Cu: goto label_15a78c;
            case 0x15A790u: goto label_15a790;
            case 0x15A794u: goto label_15a794;
            case 0x15A798u: goto label_15a798;
            case 0x15A79Cu: goto label_15a79c;
            case 0x15A7A0u: goto label_15a7a0;
            case 0x15A7A4u: goto label_15a7a4;
            case 0x15A7A8u: goto label_15a7a8;
            case 0x15A7ACu: goto label_15a7ac;
            case 0x15A7B0u: goto label_15a7b0;
            case 0x15A7B4u: goto label_15a7b4;
            case 0x15A7B8u: goto label_15a7b8;
            case 0x15A7BCu: goto label_15a7bc;
            case 0x15A7C0u: goto label_15a7c0;
            case 0x15A7C4u: goto label_15a7c4;
            case 0x15A7C8u: goto label_15a7c8;
            case 0x15A7CCu: goto label_15a7cc;
            case 0x15A7D0u: goto label_15a7d0;
            case 0x15A7D4u: goto label_15a7d4;
            case 0x15A7D8u: goto label_15a7d8;
            case 0x15A7DCu: goto label_15a7dc;
            case 0x15A7E0u: goto label_15a7e0;
            case 0x15A7E4u: goto label_15a7e4;
            case 0x15A7E8u: goto label_15a7e8;
            case 0x15A7ECu: goto label_15a7ec;
            case 0x15A7F0u: goto label_15a7f0;
            case 0x15A7F4u: goto label_15a7f4;
            case 0x15A7F8u: goto label_15a7f8;
            case 0x15A7FCu: goto label_15a7fc;
            case 0x15A800u: goto label_15a800;
            case 0x15A804u: goto label_15a804;
            case 0x15A808u: goto label_15a808;
            case 0x15A80Cu: goto label_15a80c;
            case 0x15A810u: goto label_15a810;
            case 0x15A814u: goto label_15a814;
            case 0x15A818u: goto label_15a818;
            case 0x15A81Cu: goto label_15a81c;
            case 0x15A820u: goto label_15a820;
            case 0x15A824u: goto label_15a824;
            case 0x15A828u: goto label_15a828;
            case 0x15A82Cu: goto label_15a82c;
            case 0x15A830u: goto label_15a830;
            case 0x15A834u: goto label_15a834;
            case 0x15A838u: goto label_15a838;
            case 0x15A83Cu: goto label_15a83c;
            case 0x15A840u: goto label_15a840;
            case 0x15A844u: goto label_15a844;
            case 0x15A848u: goto label_15a848;
            case 0x15A84Cu: goto label_15a84c;
            case 0x15A850u: goto label_15a850;
            case 0x15A854u: goto label_15a854;
            case 0x15A858u: goto label_15a858;
            case 0x15A85Cu: goto label_15a85c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A828u; }
            if (ctx->pc != 0x15A828u) { return; }
        }
    }
    ctx->pc = 0x15A828u;
label_15a828:
    // 0x15a828: 0x8e230000
    ctx->pc = 0x15a828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15a82c:
    // 0x15a82c: 0x220202d
    ctx->pc = 0x15a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a830:
    // 0x15a830: 0x24050001
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_15a834:
    // 0x15a834: 0x8c62001c
    ctx->pc = 0x15a834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15a838:
    // 0x15a838: 0x40f809
label_15a83c:
    if (ctx->pc == 0x15A83Cu) {
        ctx->pc = 0x15A83Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15A840u;
        goto label_15a840;
    }
    ctx->pc = 0x15A838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15A840u);
        ctx->pc = 0x15A83Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A270u: goto label_15a270;
            case 0x15A274u: goto label_15a274;
            case 0x15A278u: goto label_15a278;
            case 0x15A27Cu: goto label_15a27c;
            case 0x15A280u: goto label_15a280;
            case 0x15A284u: goto label_15a284;
            case 0x15A288u: goto label_15a288;
            case 0x15A28Cu: goto label_15a28c;
            case 0x15A290u: goto label_15a290;
            case 0x15A294u: goto label_15a294;
            case 0x15A298u: goto label_15a298;
            case 0x15A29Cu: goto label_15a29c;
            case 0x15A2A0u: goto label_15a2a0;
            case 0x15A2A4u: goto label_15a2a4;
            case 0x15A2A8u: goto label_15a2a8;
            case 0x15A2ACu: goto label_15a2ac;
            case 0x15A2B0u: goto label_15a2b0;
            case 0x15A2B4u: goto label_15a2b4;
            case 0x15A2B8u: goto label_15a2b8;
            case 0x15A2BCu: goto label_15a2bc;
            case 0x15A2C0u: goto label_15a2c0;
            case 0x15A2C4u: goto label_15a2c4;
            case 0x15A2C8u: goto label_15a2c8;
            case 0x15A2CCu: goto label_15a2cc;
            case 0x15A2D0u: goto label_15a2d0;
            case 0x15A2D4u: goto label_15a2d4;
            case 0x15A2D8u: goto label_15a2d8;
            case 0x15A2DCu: goto label_15a2dc;
            case 0x15A2E0u: goto label_15a2e0;
            case 0x15A2E4u: goto label_15a2e4;
            case 0x15A2E8u: goto label_15a2e8;
            case 0x15A2ECu: goto label_15a2ec;
            case 0x15A2F0u: goto label_15a2f0;
            case 0x15A2F4u: goto label_15a2f4;
            case 0x15A2F8u: goto label_15a2f8;
            case 0x15A2FCu: goto label_15a2fc;
            case 0x15A300u: goto label_15a300;
            case 0x15A304u: goto label_15a304;
            case 0x15A308u: goto label_15a308;
            case 0x15A30Cu: goto label_15a30c;
            case 0x15A310u: goto label_15a310;
            case 0x15A314u: goto label_15a314;
            case 0x15A318u: goto label_15a318;
            case 0x15A31Cu: goto label_15a31c;
            case 0x15A320u: goto label_15a320;
            case 0x15A324u: goto label_15a324;
            case 0x15A328u: goto label_15a328;
            case 0x15A32Cu: goto label_15a32c;
            case 0x15A330u: goto label_15a330;
            case 0x15A334u: goto label_15a334;
            case 0x15A338u: goto label_15a338;
            case 0x15A33Cu: goto label_15a33c;
            case 0x15A340u: goto label_15a340;
            case 0x15A344u: goto label_15a344;
            case 0x15A348u: goto label_15a348;
            case 0x15A34Cu: goto label_15a34c;
            case 0x15A350u: goto label_15a350;
            case 0x15A354u: goto label_15a354;
            case 0x15A358u: goto label_15a358;
            case 0x15A35Cu: goto label_15a35c;
            case 0x15A360u: goto label_15a360;
            case 0x15A364u: goto label_15a364;
            case 0x15A368u: goto label_15a368;
            case 0x15A36Cu: goto label_15a36c;
            case 0x15A370u: goto label_15a370;
            case 0x15A374u: goto label_15a374;
            case 0x15A378u: goto label_15a378;
            case 0x15A37Cu: goto label_15a37c;
            case 0x15A380u: goto label_15a380;
            case 0x15A384u: goto label_15a384;
            case 0x15A388u: goto label_15a388;
            case 0x15A38Cu: goto label_15a38c;
            case 0x15A390u: goto label_15a390;
            case 0x15A394u: goto label_15a394;
            case 0x15A398u: goto label_15a398;
            case 0x15A39Cu: goto label_15a39c;
            case 0x15A3A0u: goto label_15a3a0;
            case 0x15A3A4u: goto label_15a3a4;
            case 0x15A3A8u: goto label_15a3a8;
            case 0x15A3ACu: goto label_15a3ac;
            case 0x15A3B0u: goto label_15a3b0;
            case 0x15A3B4u: goto label_15a3b4;
            case 0x15A3B8u: goto label_15a3b8;
            case 0x15A3BCu: goto label_15a3bc;
            case 0x15A3C0u: goto label_15a3c0;
            case 0x15A3C4u: goto label_15a3c4;
            case 0x15A3C8u: goto label_15a3c8;
            case 0x15A3CCu: goto label_15a3cc;
            case 0x15A3D0u: goto label_15a3d0;
            case 0x15A3D4u: goto label_15a3d4;
            case 0x15A3D8u: goto label_15a3d8;
            case 0x15A3DCu: goto label_15a3dc;
            case 0x15A3E0u: goto label_15a3e0;
            case 0x15A3E4u: goto label_15a3e4;
            case 0x15A3E8u: goto label_15a3e8;
            case 0x15A3ECu: goto label_15a3ec;
            case 0x15A3F0u: goto label_15a3f0;
            case 0x15A3F4u: goto label_15a3f4;
            case 0x15A3F8u: goto label_15a3f8;
            case 0x15A3FCu: goto label_15a3fc;
            case 0x15A400u: goto label_15a400;
            case 0x15A404u: goto label_15a404;
            case 0x15A408u: goto label_15a408;
            case 0x15A40Cu: goto label_15a40c;
            case 0x15A410u: goto label_15a410;
            case 0x15A414u: goto label_15a414;
            case 0x15A418u: goto label_15a418;
            case 0x15A41Cu: goto label_15a41c;
            case 0x15A420u: goto label_15a420;
            case 0x15A424u: goto label_15a424;
            case 0x15A428u: goto label_15a428;
            case 0x15A42Cu: goto label_15a42c;
            case 0x15A430u: goto label_15a430;
            case 0x15A434u: goto label_15a434;
            case 0x15A438u: goto label_15a438;
            case 0x15A43Cu: goto label_15a43c;
            case 0x15A440u: goto label_15a440;
            case 0x15A444u: goto label_15a444;
            case 0x15A448u: goto label_15a448;
            case 0x15A44Cu: goto label_15a44c;
            case 0x15A450u: goto label_15a450;
            case 0x15A454u: goto label_15a454;
            case 0x15A458u: goto label_15a458;
            case 0x15A45Cu: goto label_15a45c;
            case 0x15A460u: goto label_15a460;
            case 0x15A464u: goto label_15a464;
            case 0x15A468u: goto label_15a468;
            case 0x15A46Cu: goto label_15a46c;
            case 0x15A470u: goto label_15a470;
            case 0x15A474u: goto label_15a474;
            case 0x15A478u: goto label_15a478;
            case 0x15A47Cu: goto label_15a47c;
            case 0x15A480u: goto label_15a480;
            case 0x15A484u: goto label_15a484;
            case 0x15A488u: goto label_15a488;
            case 0x15A48Cu: goto label_15a48c;
            case 0x15A490u: goto label_15a490;
            case 0x15A494u: goto label_15a494;
            case 0x15A498u: goto label_15a498;
            case 0x15A49Cu: goto label_15a49c;
            case 0x15A4A0u: goto label_15a4a0;
            case 0x15A4A4u: goto label_15a4a4;
            case 0x15A4A8u: goto label_15a4a8;
            case 0x15A4ACu: goto label_15a4ac;
            case 0x15A4B0u: goto label_15a4b0;
            case 0x15A4B4u: goto label_15a4b4;
            case 0x15A4B8u: goto label_15a4b8;
            case 0x15A4BCu: goto label_15a4bc;
            case 0x15A4C0u: goto label_15a4c0;
            case 0x15A4C4u: goto label_15a4c4;
            case 0x15A4C8u: goto label_15a4c8;
            case 0x15A4CCu: goto label_15a4cc;
            case 0x15A4D0u: goto label_15a4d0;
            case 0x15A4D4u: goto label_15a4d4;
            case 0x15A4D8u: goto label_15a4d8;
            case 0x15A4DCu: goto label_15a4dc;
            case 0x15A4E0u: goto label_15a4e0;
            case 0x15A4E4u: goto label_15a4e4;
            case 0x15A4E8u: goto label_15a4e8;
            case 0x15A4ECu: goto label_15a4ec;
            case 0x15A4F0u: goto label_15a4f0;
            case 0x15A4F4u: goto label_15a4f4;
            case 0x15A4F8u: goto label_15a4f8;
            case 0x15A4FCu: goto label_15a4fc;
            case 0x15A500u: goto label_15a500;
            case 0x15A504u: goto label_15a504;
            case 0x15A508u: goto label_15a508;
            case 0x15A50Cu: goto label_15a50c;
            case 0x15A510u: goto label_15a510;
            case 0x15A514u: goto label_15a514;
            case 0x15A518u: goto label_15a518;
            case 0x15A51Cu: goto label_15a51c;
            case 0x15A520u: goto label_15a520;
            case 0x15A524u: goto label_15a524;
            case 0x15A528u: goto label_15a528;
            case 0x15A52Cu: goto label_15a52c;
            case 0x15A530u: goto label_15a530;
            case 0x15A534u: goto label_15a534;
            case 0x15A538u: goto label_15a538;
            case 0x15A53Cu: goto label_15a53c;
            case 0x15A540u: goto label_15a540;
            case 0x15A544u: goto label_15a544;
            case 0x15A548u: goto label_15a548;
            case 0x15A54Cu: goto label_15a54c;
            case 0x15A550u: goto label_15a550;
            case 0x15A554u: goto label_15a554;
            case 0x15A558u: goto label_15a558;
            case 0x15A55Cu: goto label_15a55c;
            case 0x15A560u: goto label_15a560;
            case 0x15A564u: goto label_15a564;
            case 0x15A568u: goto label_15a568;
            case 0x15A56Cu: goto label_15a56c;
            case 0x15A570u: goto label_15a570;
            case 0x15A574u: goto label_15a574;
            case 0x15A578u: goto label_15a578;
            case 0x15A57Cu: goto label_15a57c;
            case 0x15A580u: goto label_15a580;
            case 0x15A584u: goto label_15a584;
            case 0x15A588u: goto label_15a588;
            case 0x15A58Cu: goto label_15a58c;
            case 0x15A590u: goto label_15a590;
            case 0x15A594u: goto label_15a594;
            case 0x15A598u: goto label_15a598;
            case 0x15A59Cu: goto label_15a59c;
            case 0x15A5A0u: goto label_15a5a0;
            case 0x15A5A4u: goto label_15a5a4;
            case 0x15A5A8u: goto label_15a5a8;
            case 0x15A5ACu: goto label_15a5ac;
            case 0x15A5B0u: goto label_15a5b0;
            case 0x15A5B4u: goto label_15a5b4;
            case 0x15A5B8u: goto label_15a5b8;
            case 0x15A5BCu: goto label_15a5bc;
            case 0x15A5C0u: goto label_15a5c0;
            case 0x15A5C4u: goto label_15a5c4;
            case 0x15A5C8u: goto label_15a5c8;
            case 0x15A5CCu: goto label_15a5cc;
            case 0x15A5D0u: goto label_15a5d0;
            case 0x15A5D4u: goto label_15a5d4;
            case 0x15A5D8u: goto label_15a5d8;
            case 0x15A5DCu: goto label_15a5dc;
            case 0x15A5E0u: goto label_15a5e0;
            case 0x15A5E4u: goto label_15a5e4;
            case 0x15A5E8u: goto label_15a5e8;
            case 0x15A5ECu: goto label_15a5ec;
            case 0x15A5F0u: goto label_15a5f0;
            case 0x15A5F4u: goto label_15a5f4;
            case 0x15A5F8u: goto label_15a5f8;
            case 0x15A5FCu: goto label_15a5fc;
            case 0x15A600u: goto label_15a600;
            case 0x15A604u: goto label_15a604;
            case 0x15A608u: goto label_15a608;
            case 0x15A60Cu: goto label_15a60c;
            case 0x15A610u: goto label_15a610;
            case 0x15A614u: goto label_15a614;
            case 0x15A618u: goto label_15a618;
            case 0x15A61Cu: goto label_15a61c;
            case 0x15A620u: goto label_15a620;
            case 0x15A624u: goto label_15a624;
            case 0x15A628u: goto label_15a628;
            case 0x15A62Cu: goto label_15a62c;
            case 0x15A630u: goto label_15a630;
            case 0x15A634u: goto label_15a634;
            case 0x15A638u: goto label_15a638;
            case 0x15A63Cu: goto label_15a63c;
            case 0x15A640u: goto label_15a640;
            case 0x15A644u: goto label_15a644;
            case 0x15A648u: goto label_15a648;
            case 0x15A64Cu: goto label_15a64c;
            case 0x15A650u: goto label_15a650;
            case 0x15A654u: goto label_15a654;
            case 0x15A658u: goto label_15a658;
            case 0x15A65Cu: goto label_15a65c;
            case 0x15A660u: goto label_15a660;
            case 0x15A664u: goto label_15a664;
            case 0x15A668u: goto label_15a668;
            case 0x15A66Cu: goto label_15a66c;
            case 0x15A670u: goto label_15a670;
            case 0x15A674u: goto label_15a674;
            case 0x15A678u: goto label_15a678;
            case 0x15A67Cu: goto label_15a67c;
            case 0x15A680u: goto label_15a680;
            case 0x15A684u: goto label_15a684;
            case 0x15A688u: goto label_15a688;
            case 0x15A68Cu: goto label_15a68c;
            case 0x15A690u: goto label_15a690;
            case 0x15A694u: goto label_15a694;
            case 0x15A698u: goto label_15a698;
            case 0x15A69Cu: goto label_15a69c;
            case 0x15A6A0u: goto label_15a6a0;
            case 0x15A6A4u: goto label_15a6a4;
            case 0x15A6A8u: goto label_15a6a8;
            case 0x15A6ACu: goto label_15a6ac;
            case 0x15A6B0u: goto label_15a6b0;
            case 0x15A6B4u: goto label_15a6b4;
            case 0x15A6B8u: goto label_15a6b8;
            case 0x15A6BCu: goto label_15a6bc;
            case 0x15A6C0u: goto label_15a6c0;
            case 0x15A6C4u: goto label_15a6c4;
            case 0x15A6C8u: goto label_15a6c8;
            case 0x15A6CCu: goto label_15a6cc;
            case 0x15A6D0u: goto label_15a6d0;
            case 0x15A6D4u: goto label_15a6d4;
            case 0x15A6D8u: goto label_15a6d8;
            case 0x15A6DCu: goto label_15a6dc;
            case 0x15A6E0u: goto label_15a6e0;
            case 0x15A6E4u: goto label_15a6e4;
            case 0x15A6E8u: goto label_15a6e8;
            case 0x15A6ECu: goto label_15a6ec;
            case 0x15A6F0u: goto label_15a6f0;
            case 0x15A6F4u: goto label_15a6f4;
            case 0x15A6F8u: goto label_15a6f8;
            case 0x15A6FCu: goto label_15a6fc;
            case 0x15A700u: goto label_15a700;
            case 0x15A704u: goto label_15a704;
            case 0x15A708u: goto label_15a708;
            case 0x15A70Cu: goto label_15a70c;
            case 0x15A710u: goto label_15a710;
            case 0x15A714u: goto label_15a714;
            case 0x15A718u: goto label_15a718;
            case 0x15A71Cu: goto label_15a71c;
            case 0x15A720u: goto label_15a720;
            case 0x15A724u: goto label_15a724;
            case 0x15A728u: goto label_15a728;
            case 0x15A72Cu: goto label_15a72c;
            case 0x15A730u: goto label_15a730;
            case 0x15A734u: goto label_15a734;
            case 0x15A738u: goto label_15a738;
            case 0x15A73Cu: goto label_15a73c;
            case 0x15A740u: goto label_15a740;
            case 0x15A744u: goto label_15a744;
            case 0x15A748u: goto label_15a748;
            case 0x15A74Cu: goto label_15a74c;
            case 0x15A750u: goto label_15a750;
            case 0x15A754u: goto label_15a754;
            case 0x15A758u: goto label_15a758;
            case 0x15A75Cu: goto label_15a75c;
            case 0x15A760u: goto label_15a760;
            case 0x15A764u: goto label_15a764;
            case 0x15A768u: goto label_15a768;
            case 0x15A76Cu: goto label_15a76c;
            case 0x15A770u: goto label_15a770;
            case 0x15A774u: goto label_15a774;
            case 0x15A778u: goto label_15a778;
            case 0x15A77Cu: goto label_15a77c;
            case 0x15A780u: goto label_15a780;
            case 0x15A784u: goto label_15a784;
            case 0x15A788u: goto label_15a788;
            case 0x15A78Cu: goto label_15a78c;
            case 0x15A790u: goto label_15a790;
            case 0x15A794u: goto label_15a794;
            case 0x15A798u: goto label_15a798;
            case 0x15A79Cu: goto label_15a79c;
            case 0x15A7A0u: goto label_15a7a0;
            case 0x15A7A4u: goto label_15a7a4;
            case 0x15A7A8u: goto label_15a7a8;
            case 0x15A7ACu: goto label_15a7ac;
            case 0x15A7B0u: goto label_15a7b0;
            case 0x15A7B4u: goto label_15a7b4;
            case 0x15A7B8u: goto label_15a7b8;
            case 0x15A7BCu: goto label_15a7bc;
            case 0x15A7C0u: goto label_15a7c0;
            case 0x15A7C4u: goto label_15a7c4;
            case 0x15A7C8u: goto label_15a7c8;
            case 0x15A7CCu: goto label_15a7cc;
            case 0x15A7D0u: goto label_15a7d0;
            case 0x15A7D4u: goto label_15a7d4;
            case 0x15A7D8u: goto label_15a7d8;
            case 0x15A7DCu: goto label_15a7dc;
            case 0x15A7E0u: goto label_15a7e0;
            case 0x15A7E4u: goto label_15a7e4;
            case 0x15A7E8u: goto label_15a7e8;
            case 0x15A7ECu: goto label_15a7ec;
            case 0x15A7F0u: goto label_15a7f0;
            case 0x15A7F4u: goto label_15a7f4;
            case 0x15A7F8u: goto label_15a7f8;
            case 0x15A7FCu: goto label_15a7fc;
            case 0x15A800u: goto label_15a800;
            case 0x15A804u: goto label_15a804;
            case 0x15A808u: goto label_15a808;
            case 0x15A80Cu: goto label_15a80c;
            case 0x15A810u: goto label_15a810;
            case 0x15A814u: goto label_15a814;
            case 0x15A818u: goto label_15a818;
            case 0x15A81Cu: goto label_15a81c;
            case 0x15A820u: goto label_15a820;
            case 0x15A824u: goto label_15a824;
            case 0x15A828u: goto label_15a828;
            case 0x15A82Cu: goto label_15a82c;
            case 0x15A830u: goto label_15a830;
            case 0x15A834u: goto label_15a834;
            case 0x15A838u: goto label_15a838;
            case 0x15A83Cu: goto label_15a83c;
            case 0x15A840u: goto label_15a840;
            case 0x15A844u: goto label_15a844;
            case 0x15A848u: goto label_15a848;
            case 0x15A84Cu: goto label_15a84c;
            case 0x15A850u: goto label_15a850;
            case 0x15A854u: goto label_15a854;
            case 0x15A858u: goto label_15a858;
            case 0x15A85Cu: goto label_15a85c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15A840u; }
            if (ctx->pc != 0x15A840u) { return; }
        }
    }
    ctx->pc = 0x15A840u;
label_15a840:
    // 0x15a840: 0x102d
    ctx->pc = 0x15a840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a844:
    // 0x15a844: 0xdfb00010
    ctx->pc = 0x15a844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a848:
    // 0x15a848: 0xdfb10018
    ctx->pc = 0x15a848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15a84c:
    // 0x15a84c: 0xdfb20020
    ctx->pc = 0x15a84cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15a850:
    // 0x15a850: 0xdfbf0028
    ctx->pc = 0x15a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15a854:
    // 0x15a854: 0x3e00008
label_15a858:
    if (ctx->pc == 0x15A858u) {
        ctx->pc = 0x15A858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x15A85Cu;
        goto label_15a85c;
    }
    ctx->pc = 0x15A854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A270u: goto label_15a270;
            case 0x15A274u: goto label_15a274;
            case 0x15A278u: goto label_15a278;
            case 0x15A27Cu: goto label_15a27c;
            case 0x15A280u: goto label_15a280;
            case 0x15A284u: goto label_15a284;
            case 0x15A288u: goto label_15a288;
            case 0x15A28Cu: goto label_15a28c;
            case 0x15A290u: goto label_15a290;
            case 0x15A294u: goto label_15a294;
            case 0x15A298u: goto label_15a298;
            case 0x15A29Cu: goto label_15a29c;
            case 0x15A2A0u: goto label_15a2a0;
            case 0x15A2A4u: goto label_15a2a4;
            case 0x15A2A8u: goto label_15a2a8;
            case 0x15A2ACu: goto label_15a2ac;
            case 0x15A2B0u: goto label_15a2b0;
            case 0x15A2B4u: goto label_15a2b4;
            case 0x15A2B8u: goto label_15a2b8;
            case 0x15A2BCu: goto label_15a2bc;
            case 0x15A2C0u: goto label_15a2c0;
            case 0x15A2C4u: goto label_15a2c4;
            case 0x15A2C8u: goto label_15a2c8;
            case 0x15A2CCu: goto label_15a2cc;
            case 0x15A2D0u: goto label_15a2d0;
            case 0x15A2D4u: goto label_15a2d4;
            case 0x15A2D8u: goto label_15a2d8;
            case 0x15A2DCu: goto label_15a2dc;
            case 0x15A2E0u: goto label_15a2e0;
            case 0x15A2E4u: goto label_15a2e4;
            case 0x15A2E8u: goto label_15a2e8;
            case 0x15A2ECu: goto label_15a2ec;
            case 0x15A2F0u: goto label_15a2f0;
            case 0x15A2F4u: goto label_15a2f4;
            case 0x15A2F8u: goto label_15a2f8;
            case 0x15A2FCu: goto label_15a2fc;
            case 0x15A300u: goto label_15a300;
            case 0x15A304u: goto label_15a304;
            case 0x15A308u: goto label_15a308;
            case 0x15A30Cu: goto label_15a30c;
            case 0x15A310u: goto label_15a310;
            case 0x15A314u: goto label_15a314;
            case 0x15A318u: goto label_15a318;
            case 0x15A31Cu: goto label_15a31c;
            case 0x15A320u: goto label_15a320;
            case 0x15A324u: goto label_15a324;
            case 0x15A328u: goto label_15a328;
            case 0x15A32Cu: goto label_15a32c;
            case 0x15A330u: goto label_15a330;
            case 0x15A334u: goto label_15a334;
            case 0x15A338u: goto label_15a338;
            case 0x15A33Cu: goto label_15a33c;
            case 0x15A340u: goto label_15a340;
            case 0x15A344u: goto label_15a344;
            case 0x15A348u: goto label_15a348;
            case 0x15A34Cu: goto label_15a34c;
            case 0x15A350u: goto label_15a350;
            case 0x15A354u: goto label_15a354;
            case 0x15A358u: goto label_15a358;
            case 0x15A35Cu: goto label_15a35c;
            case 0x15A360u: goto label_15a360;
            case 0x15A364u: goto label_15a364;
            case 0x15A368u: goto label_15a368;
            case 0x15A36Cu: goto label_15a36c;
            case 0x15A370u: goto label_15a370;
            case 0x15A374u: goto label_15a374;
            case 0x15A378u: goto label_15a378;
            case 0x15A37Cu: goto label_15a37c;
            case 0x15A380u: goto label_15a380;
            case 0x15A384u: goto label_15a384;
            case 0x15A388u: goto label_15a388;
            case 0x15A38Cu: goto label_15a38c;
            case 0x15A390u: goto label_15a390;
            case 0x15A394u: goto label_15a394;
            case 0x15A398u: goto label_15a398;
            case 0x15A39Cu: goto label_15a39c;
            case 0x15A3A0u: goto label_15a3a0;
            case 0x15A3A4u: goto label_15a3a4;
            case 0x15A3A8u: goto label_15a3a8;
            case 0x15A3ACu: goto label_15a3ac;
            case 0x15A3B0u: goto label_15a3b0;
            case 0x15A3B4u: goto label_15a3b4;
            case 0x15A3B8u: goto label_15a3b8;
            case 0x15A3BCu: goto label_15a3bc;
            case 0x15A3C0u: goto label_15a3c0;
            case 0x15A3C4u: goto label_15a3c4;
            case 0x15A3C8u: goto label_15a3c8;
            case 0x15A3CCu: goto label_15a3cc;
            case 0x15A3D0u: goto label_15a3d0;
            case 0x15A3D4u: goto label_15a3d4;
            case 0x15A3D8u: goto label_15a3d8;
            case 0x15A3DCu: goto label_15a3dc;
            case 0x15A3E0u: goto label_15a3e0;
            case 0x15A3E4u: goto label_15a3e4;
            case 0x15A3E8u: goto label_15a3e8;
            case 0x15A3ECu: goto label_15a3ec;
            case 0x15A3F0u: goto label_15a3f0;
            case 0x15A3F4u: goto label_15a3f4;
            case 0x15A3F8u: goto label_15a3f8;
            case 0x15A3FCu: goto label_15a3fc;
            case 0x15A400u: goto label_15a400;
            case 0x15A404u: goto label_15a404;
            case 0x15A408u: goto label_15a408;
            case 0x15A40Cu: goto label_15a40c;
            case 0x15A410u: goto label_15a410;
            case 0x15A414u: goto label_15a414;
            case 0x15A418u: goto label_15a418;
            case 0x15A41Cu: goto label_15a41c;
            case 0x15A420u: goto label_15a420;
            case 0x15A424u: goto label_15a424;
            case 0x15A428u: goto label_15a428;
            case 0x15A42Cu: goto label_15a42c;
            case 0x15A430u: goto label_15a430;
            case 0x15A434u: goto label_15a434;
            case 0x15A438u: goto label_15a438;
            case 0x15A43Cu: goto label_15a43c;
            case 0x15A440u: goto label_15a440;
            case 0x15A444u: goto label_15a444;
            case 0x15A448u: goto label_15a448;
            case 0x15A44Cu: goto label_15a44c;
            case 0x15A450u: goto label_15a450;
            case 0x15A454u: goto label_15a454;
            case 0x15A458u: goto label_15a458;
            case 0x15A45Cu: goto label_15a45c;
            case 0x15A460u: goto label_15a460;
            case 0x15A464u: goto label_15a464;
            case 0x15A468u: goto label_15a468;
            case 0x15A46Cu: goto label_15a46c;
            case 0x15A470u: goto label_15a470;
            case 0x15A474u: goto label_15a474;
            case 0x15A478u: goto label_15a478;
            case 0x15A47Cu: goto label_15a47c;
            case 0x15A480u: goto label_15a480;
            case 0x15A484u: goto label_15a484;
            case 0x15A488u: goto label_15a488;
            case 0x15A48Cu: goto label_15a48c;
            case 0x15A490u: goto label_15a490;
            case 0x15A494u: goto label_15a494;
            case 0x15A498u: goto label_15a498;
            case 0x15A49Cu: goto label_15a49c;
            case 0x15A4A0u: goto label_15a4a0;
            case 0x15A4A4u: goto label_15a4a4;
            case 0x15A4A8u: goto label_15a4a8;
            case 0x15A4ACu: goto label_15a4ac;
            case 0x15A4B0u: goto label_15a4b0;
            case 0x15A4B4u: goto label_15a4b4;
            case 0x15A4B8u: goto label_15a4b8;
            case 0x15A4BCu: goto label_15a4bc;
            case 0x15A4C0u: goto label_15a4c0;
            case 0x15A4C4u: goto label_15a4c4;
            case 0x15A4C8u: goto label_15a4c8;
            case 0x15A4CCu: goto label_15a4cc;
            case 0x15A4D0u: goto label_15a4d0;
            case 0x15A4D4u: goto label_15a4d4;
            case 0x15A4D8u: goto label_15a4d8;
            case 0x15A4DCu: goto label_15a4dc;
            case 0x15A4E0u: goto label_15a4e0;
            case 0x15A4E4u: goto label_15a4e4;
            case 0x15A4E8u: goto label_15a4e8;
            case 0x15A4ECu: goto label_15a4ec;
            case 0x15A4F0u: goto label_15a4f0;
            case 0x15A4F4u: goto label_15a4f4;
            case 0x15A4F8u: goto label_15a4f8;
            case 0x15A4FCu: goto label_15a4fc;
            case 0x15A500u: goto label_15a500;
            case 0x15A504u: goto label_15a504;
            case 0x15A508u: goto label_15a508;
            case 0x15A50Cu: goto label_15a50c;
            case 0x15A510u: goto label_15a510;
            case 0x15A514u: goto label_15a514;
            case 0x15A518u: goto label_15a518;
            case 0x15A51Cu: goto label_15a51c;
            case 0x15A520u: goto label_15a520;
            case 0x15A524u: goto label_15a524;
            case 0x15A528u: goto label_15a528;
            case 0x15A52Cu: goto label_15a52c;
            case 0x15A530u: goto label_15a530;
            case 0x15A534u: goto label_15a534;
            case 0x15A538u: goto label_15a538;
            case 0x15A53Cu: goto label_15a53c;
            case 0x15A540u: goto label_15a540;
            case 0x15A544u: goto label_15a544;
            case 0x15A548u: goto label_15a548;
            case 0x15A54Cu: goto label_15a54c;
            case 0x15A550u: goto label_15a550;
            case 0x15A554u: goto label_15a554;
            case 0x15A558u: goto label_15a558;
            case 0x15A55Cu: goto label_15a55c;
            case 0x15A560u: goto label_15a560;
            case 0x15A564u: goto label_15a564;
            case 0x15A568u: goto label_15a568;
            case 0x15A56Cu: goto label_15a56c;
            case 0x15A570u: goto label_15a570;
            case 0x15A574u: goto label_15a574;
            case 0x15A578u: goto label_15a578;
            case 0x15A57Cu: goto label_15a57c;
            case 0x15A580u: goto label_15a580;
            case 0x15A584u: goto label_15a584;
            case 0x15A588u: goto label_15a588;
            case 0x15A58Cu: goto label_15a58c;
            case 0x15A590u: goto label_15a590;
            case 0x15A594u: goto label_15a594;
            case 0x15A598u: goto label_15a598;
            case 0x15A59Cu: goto label_15a59c;
            case 0x15A5A0u: goto label_15a5a0;
            case 0x15A5A4u: goto label_15a5a4;
            case 0x15A5A8u: goto label_15a5a8;
            case 0x15A5ACu: goto label_15a5ac;
            case 0x15A5B0u: goto label_15a5b0;
            case 0x15A5B4u: goto label_15a5b4;
            case 0x15A5B8u: goto label_15a5b8;
            case 0x15A5BCu: goto label_15a5bc;
            case 0x15A5C0u: goto label_15a5c0;
            case 0x15A5C4u: goto label_15a5c4;
            case 0x15A5C8u: goto label_15a5c8;
            case 0x15A5CCu: goto label_15a5cc;
            case 0x15A5D0u: goto label_15a5d0;
            case 0x15A5D4u: goto label_15a5d4;
            case 0x15A5D8u: goto label_15a5d8;
            case 0x15A5DCu: goto label_15a5dc;
            case 0x15A5E0u: goto label_15a5e0;
            case 0x15A5E4u: goto label_15a5e4;
            case 0x15A5E8u: goto label_15a5e8;
            case 0x15A5ECu: goto label_15a5ec;
            case 0x15A5F0u: goto label_15a5f0;
            case 0x15A5F4u: goto label_15a5f4;
            case 0x15A5F8u: goto label_15a5f8;
            case 0x15A5FCu: goto label_15a5fc;
            case 0x15A600u: goto label_15a600;
            case 0x15A604u: goto label_15a604;
            case 0x15A608u: goto label_15a608;
            case 0x15A60Cu: goto label_15a60c;
            case 0x15A610u: goto label_15a610;
            case 0x15A614u: goto label_15a614;
            case 0x15A618u: goto label_15a618;
            case 0x15A61Cu: goto label_15a61c;
            case 0x15A620u: goto label_15a620;
            case 0x15A624u: goto label_15a624;
            case 0x15A628u: goto label_15a628;
            case 0x15A62Cu: goto label_15a62c;
            case 0x15A630u: goto label_15a630;
            case 0x15A634u: goto label_15a634;
            case 0x15A638u: goto label_15a638;
            case 0x15A63Cu: goto label_15a63c;
            case 0x15A640u: goto label_15a640;
            case 0x15A644u: goto label_15a644;
            case 0x15A648u: goto label_15a648;
            case 0x15A64Cu: goto label_15a64c;
            case 0x15A650u: goto label_15a650;
            case 0x15A654u: goto label_15a654;
            case 0x15A658u: goto label_15a658;
            case 0x15A65Cu: goto label_15a65c;
            case 0x15A660u: goto label_15a660;
            case 0x15A664u: goto label_15a664;
            case 0x15A668u: goto label_15a668;
            case 0x15A66Cu: goto label_15a66c;
            case 0x15A670u: goto label_15a670;
            case 0x15A674u: goto label_15a674;
            case 0x15A678u: goto label_15a678;
            case 0x15A67Cu: goto label_15a67c;
            case 0x15A680u: goto label_15a680;
            case 0x15A684u: goto label_15a684;
            case 0x15A688u: goto label_15a688;
            case 0x15A68Cu: goto label_15a68c;
            case 0x15A690u: goto label_15a690;
            case 0x15A694u: goto label_15a694;
            case 0x15A698u: goto label_15a698;
            case 0x15A69Cu: goto label_15a69c;
            case 0x15A6A0u: goto label_15a6a0;
            case 0x15A6A4u: goto label_15a6a4;
            case 0x15A6A8u: goto label_15a6a8;
            case 0x15A6ACu: goto label_15a6ac;
            case 0x15A6B0u: goto label_15a6b0;
            case 0x15A6B4u: goto label_15a6b4;
            case 0x15A6B8u: goto label_15a6b8;
            case 0x15A6BCu: goto label_15a6bc;
            case 0x15A6C0u: goto label_15a6c0;
            case 0x15A6C4u: goto label_15a6c4;
            case 0x15A6C8u: goto label_15a6c8;
            case 0x15A6CCu: goto label_15a6cc;
            case 0x15A6D0u: goto label_15a6d0;
            case 0x15A6D4u: goto label_15a6d4;
            case 0x15A6D8u: goto label_15a6d8;
            case 0x15A6DCu: goto label_15a6dc;
            case 0x15A6E0u: goto label_15a6e0;
            case 0x15A6E4u: goto label_15a6e4;
            case 0x15A6E8u: goto label_15a6e8;
            case 0x15A6ECu: goto label_15a6ec;
            case 0x15A6F0u: goto label_15a6f0;
            case 0x15A6F4u: goto label_15a6f4;
            case 0x15A6F8u: goto label_15a6f8;
            case 0x15A6FCu: goto label_15a6fc;
            case 0x15A700u: goto label_15a700;
            case 0x15A704u: goto label_15a704;
            case 0x15A708u: goto label_15a708;
            case 0x15A70Cu: goto label_15a70c;
            case 0x15A710u: goto label_15a710;
            case 0x15A714u: goto label_15a714;
            case 0x15A718u: goto label_15a718;
            case 0x15A71Cu: goto label_15a71c;
            case 0x15A720u: goto label_15a720;
            case 0x15A724u: goto label_15a724;
            case 0x15A728u: goto label_15a728;
            case 0x15A72Cu: goto label_15a72c;
            case 0x15A730u: goto label_15a730;
            case 0x15A734u: goto label_15a734;
            case 0x15A738u: goto label_15a738;
            case 0x15A73Cu: goto label_15a73c;
            case 0x15A740u: goto label_15a740;
            case 0x15A744u: goto label_15a744;
            case 0x15A748u: goto label_15a748;
            case 0x15A74Cu: goto label_15a74c;
            case 0x15A750u: goto label_15a750;
            case 0x15A754u: goto label_15a754;
            case 0x15A758u: goto label_15a758;
            case 0x15A75Cu: goto label_15a75c;
            case 0x15A760u: goto label_15a760;
            case 0x15A764u: goto label_15a764;
            case 0x15A768u: goto label_15a768;
            case 0x15A76Cu: goto label_15a76c;
            case 0x15A770u: goto label_15a770;
            case 0x15A774u: goto label_15a774;
            case 0x15A778u: goto label_15a778;
            case 0x15A77Cu: goto label_15a77c;
            case 0x15A780u: goto label_15a780;
            case 0x15A784u: goto label_15a784;
            case 0x15A788u: goto label_15a788;
            case 0x15A78Cu: goto label_15a78c;
            case 0x15A790u: goto label_15a790;
            case 0x15A794u: goto label_15a794;
            case 0x15A798u: goto label_15a798;
            case 0x15A79Cu: goto label_15a79c;
            case 0x15A7A0u: goto label_15a7a0;
            case 0x15A7A4u: goto label_15a7a4;
            case 0x15A7A8u: goto label_15a7a8;
            case 0x15A7ACu: goto label_15a7ac;
            case 0x15A7B0u: goto label_15a7b0;
            case 0x15A7B4u: goto label_15a7b4;
            case 0x15A7B8u: goto label_15a7b8;
            case 0x15A7BCu: goto label_15a7bc;
            case 0x15A7C0u: goto label_15a7c0;
            case 0x15A7C4u: goto label_15a7c4;
            case 0x15A7C8u: goto label_15a7c8;
            case 0x15A7CCu: goto label_15a7cc;
            case 0x15A7D0u: goto label_15a7d0;
            case 0x15A7D4u: goto label_15a7d4;
            case 0x15A7D8u: goto label_15a7d8;
            case 0x15A7DCu: goto label_15a7dc;
            case 0x15A7E0u: goto label_15a7e0;
            case 0x15A7E4u: goto label_15a7e4;
            case 0x15A7E8u: goto label_15a7e8;
            case 0x15A7ECu: goto label_15a7ec;
            case 0x15A7F0u: goto label_15a7f0;
            case 0x15A7F4u: goto label_15a7f4;
            case 0x15A7F8u: goto label_15a7f8;
            case 0x15A7FCu: goto label_15a7fc;
            case 0x15A800u: goto label_15a800;
            case 0x15A804u: goto label_15a804;
            case 0x15A808u: goto label_15a808;
            case 0x15A80Cu: goto label_15a80c;
            case 0x15A810u: goto label_15a810;
            case 0x15A814u: goto label_15a814;
            case 0x15A818u: goto label_15a818;
            case 0x15A81Cu: goto label_15a81c;
            case 0x15A820u: goto label_15a820;
            case 0x15A824u: goto label_15a824;
            case 0x15A828u: goto label_15a828;
            case 0x15A82Cu: goto label_15a82c;
            case 0x15A830u: goto label_15a830;
            case 0x15A834u: goto label_15a834;
            case 0x15A838u: goto label_15a838;
            case 0x15A83Cu: goto label_15a83c;
            case 0x15A840u: goto label_15a840;
            case 0x15A844u: goto label_15a844;
            case 0x15A848u: goto label_15a848;
            case 0x15A84Cu: goto label_15a84c;
            case 0x15A850u: goto label_15a850;
            case 0x15A854u: goto label_15a854;
            case 0x15A858u: goto label_15a858;
            case 0x15A85Cu: goto label_15a85c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A85Cu;
label_15a85c:
    // 0x15a85c: 0x0
    ctx->pc = 0x15a85cu;
    // NOP
}
