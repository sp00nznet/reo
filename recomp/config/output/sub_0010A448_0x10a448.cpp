#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010A448
// Address: 0x10a448 - 0x10a6a8
void sub_0010A448_0x10a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10a448u;

label_10a448:
    // 0x10a448: 0x27bdfff0
    ctx->pc = 0x10a448u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_10a44c:
    // 0x10a44c: 0xffb00000
    ctx->pc = 0x10a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10a450:
    // 0x10a450: 0x80802d
    ctx->pc = 0x10a450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a454:
    // 0x10a454: 0xffbf0008
    ctx->pc = 0x10a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_10a458:
    // 0x10a458: 0x8e0201d4
    ctx->pc = 0x10a458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10a45c:
    // 0x10a45c: 0x54400012
label_10a460:
    if (ctx->pc == 0x10A460u) {
        ctx->pc = 0x10A460u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A464u;
        goto label_10a464;
    }
    ctx->pc = 0x10A45Cu;
    {
        const bool branch_taken_0x10a45c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a45c) {
            ctx->pc = 0x10A460u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x10A4A8u;
            goto label_10a4a8;
        }
    }
    ctx->pc = 0x10A464u;
label_10a464:
    // 0x10a464: 0xc041c76
label_10a468:
    if (ctx->pc == 0x10A468u) {
        ctx->pc = 0x10A468u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x10A46Cu;
        goto label_10a46c;
    }
    ctx->pc = 0x10A464u;
    SET_GPR_U32(ctx, 31, 0x10A46Cu);
    ctx->pc = 0x10A468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1071D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001071D8_0x1071d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A46Cu; }
    }
    if (ctx->pc != 0x10A46Cu) { return; }
    ctx->pc = 0x10A46Cu;
label_10a46c:
    // 0x10a46c: 0x40182d
    ctx->pc = 0x10a46cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a470:
    // 0x10a470: 0x2402ffff
    ctx->pc = 0x10a470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a474:
    // 0x10a474: 0x1060000c
label_10a478:
    if (ctx->pc == 0x10A478u) {
        ctx->pc = 0x10A478u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        ctx->pc = 0x10A47Cu;
        goto label_10a47c;
    }
    ctx->pc = 0x10A474u;
    {
        const bool branch_taken_0x10a474 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A478u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
        if (branch_taken_0x10a474) {
            ctx->pc = 0x10A4A8u;
            goto label_10a4a8;
        }
    }
    ctx->pc = 0x10A47Cu;
label_10a47c:
    // 0x10a47c: 0x2462007c
    ctx->pc = 0x10a47cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 124));
label_10a480:
    // 0x10a480: 0x2403001f
    ctx->pc = 0x10a480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_10a484:
    // 0x10a484: 0x0
    ctx->pc = 0x10a484u;
    // NOP
label_10a488:
    // 0x10a488: 0x2463ffff
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_10a48c:
    // 0x10a48c: 0xac400000
    ctx->pc = 0x10a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_10a490:
    // 0x10a490: 0x0
    ctx->pc = 0x10a490u;
    // NOP
label_10a494:
    // 0x10a494: 0x0
    ctx->pc = 0x10a494u;
    // NOP
label_10a498:
    // 0x10a498: 0x0
    ctx->pc = 0x10a498u;
    // NOP
label_10a49c:
    // 0x10a49c: 0x461fffa
label_10a4a0:
    if (ctx->pc == 0x10A4A0u) {
        ctx->pc = 0x10A4A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->pc = 0x10A4A4u;
        goto label_10a4a4;
    }
    ctx->pc = 0x10A49Cu;
    {
        const bool branch_taken_0x10a49c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10A4A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
        if (branch_taken_0x10a49c) {
            ctx->pc = 0x10A488u;
            goto label_10a488;
        }
    }
    ctx->pc = 0x10A4A4u;
label_10a4a4:
    // 0x10a4a4: 0x102d
    ctx->pc = 0x10a4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a4a8:
    // 0x10a4a8: 0xdfb00000
    ctx->pc = 0x10a4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a4ac:
    // 0x10a4ac: 0xdfbf0008
    ctx->pc = 0x10a4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a4b0:
    // 0x10a4b0: 0x3e00008
label_10a4b4:
    if (ctx->pc == 0x10A4B4u) {
        ctx->pc = 0x10A4B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10A4B8u;
        goto label_10a4b8;
    }
    ctx->pc = 0x10A4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A4B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A448u: goto label_10a448;
            case 0x10A44Cu: goto label_10a44c;
            case 0x10A450u: goto label_10a450;
            case 0x10A454u: goto label_10a454;
            case 0x10A458u: goto label_10a458;
            case 0x10A45Cu: goto label_10a45c;
            case 0x10A460u: goto label_10a460;
            case 0x10A464u: goto label_10a464;
            case 0x10A468u: goto label_10a468;
            case 0x10A46Cu: goto label_10a46c;
            case 0x10A470u: goto label_10a470;
            case 0x10A474u: goto label_10a474;
            case 0x10A478u: goto label_10a478;
            case 0x10A47Cu: goto label_10a47c;
            case 0x10A480u: goto label_10a480;
            case 0x10A484u: goto label_10a484;
            case 0x10A488u: goto label_10a488;
            case 0x10A48Cu: goto label_10a48c;
            case 0x10A490u: goto label_10a490;
            case 0x10A494u: goto label_10a494;
            case 0x10A498u: goto label_10a498;
            case 0x10A49Cu: goto label_10a49c;
            case 0x10A4A0u: goto label_10a4a0;
            case 0x10A4A4u: goto label_10a4a4;
            case 0x10A4A8u: goto label_10a4a8;
            case 0x10A4ACu: goto label_10a4ac;
            case 0x10A4B0u: goto label_10a4b0;
            case 0x10A4B4u: goto label_10a4b4;
            case 0x10A4B8u: goto label_10a4b8;
            case 0x10A4BCu: goto label_10a4bc;
            case 0x10A4C0u: goto label_10a4c0;
            case 0x10A4C4u: goto label_10a4c4;
            case 0x10A4C8u: goto label_10a4c8;
            case 0x10A4CCu: goto label_10a4cc;
            case 0x10A4D0u: goto label_10a4d0;
            case 0x10A4D4u: goto label_10a4d4;
            case 0x10A4D8u: goto label_10a4d8;
            case 0x10A4DCu: goto label_10a4dc;
            case 0x10A4E0u: goto label_10a4e0;
            case 0x10A4E4u: goto label_10a4e4;
            case 0x10A4E8u: goto label_10a4e8;
            case 0x10A4ECu: goto label_10a4ec;
            case 0x10A4F0u: goto label_10a4f0;
            case 0x10A4F4u: goto label_10a4f4;
            case 0x10A4F8u: goto label_10a4f8;
            case 0x10A4FCu: goto label_10a4fc;
            case 0x10A500u: goto label_10a500;
            case 0x10A504u: goto label_10a504;
            case 0x10A508u: goto label_10a508;
            case 0x10A50Cu: goto label_10a50c;
            case 0x10A510u: goto label_10a510;
            case 0x10A514u: goto label_10a514;
            case 0x10A518u: goto label_10a518;
            case 0x10A51Cu: goto label_10a51c;
            case 0x10A520u: goto label_10a520;
            case 0x10A524u: goto label_10a524;
            case 0x10A528u: goto label_10a528;
            case 0x10A52Cu: goto label_10a52c;
            case 0x10A530u: goto label_10a530;
            case 0x10A534u: goto label_10a534;
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A4B8u;
label_10a4b8:
    // 0x10a4b8: 0x27bdffe0
    ctx->pc = 0x10a4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_10a4bc:
    // 0x10a4bc: 0xffb10008
    ctx->pc = 0x10a4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10a4c0:
    // 0x10a4c0: 0xa0882d
    ctx->pc = 0x10a4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a4c4:
    // 0x10a4c4: 0x2e220020
    ctx->pc = 0x10a4c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
label_10a4c8:
    // 0x10a4c8: 0xffb00000
    ctx->pc = 0x10a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10a4cc:
    // 0x10a4cc: 0xffb20010
    ctx->pc = 0x10a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_10a4d0:
    // 0x10a4d0: 0xc0902d
    ctx->pc = 0x10a4d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10a4d4:
    // 0x10a4d4: 0xffbf0018
    ctx->pc = 0x10a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_10a4d8:
    // 0x10a4d8: 0x14400005
label_10a4dc:
    if (ctx->pc == 0x10A4DCu) {
        ctx->pc = 0x10A4DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A4E0u;
        goto label_10a4e0;
    }
    ctx->pc = 0x10A4D8u;
    {
        const bool branch_taken_0x10a4d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A4DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a4d8) {
            ctx->pc = 0x10A4F0u;
            goto label_10a4f0;
        }
    }
    ctx->pc = 0x10A4E0u;
label_10a4e0:
    // 0x10a4e0: 0x24030016
    ctx->pc = 0x10a4e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
label_10a4e4:
    // 0x10a4e4: 0x2402ffff
    ctx->pc = 0x10a4e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a4e8:
    // 0x10a4e8: 0x1000000d
label_10a4ec:
    if (ctx->pc == 0x10A4ECu) {
        ctx->pc = 0x10A4ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10A4F0u;
        goto label_10a4f0;
    }
    ctx->pc = 0x10A4E8u;
    {
        const bool branch_taken_0x10a4e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A4ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10a4e8) {
            ctx->pc = 0x10A520u;
            goto label_10a520;
        }
    }
    ctx->pc = 0x10A4F0u;
label_10a4f0:
    // 0x10a4f0: 0x8e0201d4
    ctx->pc = 0x10a4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10a4f4:
    // 0x10a4f4: 0x14400007
label_10a4f8:
    if (ctx->pc == 0x10A4F8u) {
        ctx->pc = 0x10A4F8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x10A4FCu;
        goto label_10a4fc;
    }
    ctx->pc = 0x10A4F4u;
    {
        const bool branch_taken_0x10a4f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A4F8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x10a4f4) {
            ctx->pc = 0x10A514u;
            goto label_10a514;
        }
    }
    ctx->pc = 0x10A4FCu;
label_10a4fc:
    // 0x10a4fc: 0xc042912
label_10a500:
    if (ctx->pc == 0x10A500u) {
        ctx->pc = 0x10A504u;
        goto label_10a504;
    }
    ctx->pc = 0x10A4FCu;
    SET_GPR_U32(ctx, 31, 0x10A504u);
    ctx->pc = 0x10A448u;
    goto label_10a448;
    ctx->pc = 0x10A504u;
label_10a504:
    // 0x10a504: 0x14400006
label_10a508:
    if (ctx->pc == 0x10A508u) {
        ctx->pc = 0x10A508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10A50Cu;
        goto label_10a50c;
    }
    ctx->pc = 0x10A504u;
    {
        const bool branch_taken_0x10a504 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A508u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a504) {
            ctx->pc = 0x10A520u;
            goto label_10a520;
        }
    }
    ctx->pc = 0x10A50Cu;
label_10a50c:
    // 0x10a50c: 0x8e0201d4
    ctx->pc = 0x10a50cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10a510:
    // 0x10a510: 0x111880
    ctx->pc = 0x10a510u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_10a514:
    // 0x10a514: 0x621821
    ctx->pc = 0x10a514u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10a518:
    // 0x10a518: 0x8c620000
    ctx->pc = 0x10a518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a51c:
    // 0x10a51c: 0xac720000
    ctx->pc = 0x10a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_10a520:
    // 0x10a520: 0xdfb00000
    ctx->pc = 0x10a520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a524:
    // 0x10a524: 0xdfb10008
    ctx->pc = 0x10a524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a528:
    // 0x10a528: 0xdfb20010
    ctx->pc = 0x10a528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a52c:
    // 0x10a52c: 0xdfbf0018
    ctx->pc = 0x10a52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10a530:
    // 0x10a530: 0x3e00008
label_10a534:
    if (ctx->pc == 0x10A534u) {
        ctx->pc = 0x10A534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10A538u;
        goto label_10a538;
    }
    ctx->pc = 0x10A530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A448u: goto label_10a448;
            case 0x10A44Cu: goto label_10a44c;
            case 0x10A450u: goto label_10a450;
            case 0x10A454u: goto label_10a454;
            case 0x10A458u: goto label_10a458;
            case 0x10A45Cu: goto label_10a45c;
            case 0x10A460u: goto label_10a460;
            case 0x10A464u: goto label_10a464;
            case 0x10A468u: goto label_10a468;
            case 0x10A46Cu: goto label_10a46c;
            case 0x10A470u: goto label_10a470;
            case 0x10A474u: goto label_10a474;
            case 0x10A478u: goto label_10a478;
            case 0x10A47Cu: goto label_10a47c;
            case 0x10A480u: goto label_10a480;
            case 0x10A484u: goto label_10a484;
            case 0x10A488u: goto label_10a488;
            case 0x10A48Cu: goto label_10a48c;
            case 0x10A490u: goto label_10a490;
            case 0x10A494u: goto label_10a494;
            case 0x10A498u: goto label_10a498;
            case 0x10A49Cu: goto label_10a49c;
            case 0x10A4A0u: goto label_10a4a0;
            case 0x10A4A4u: goto label_10a4a4;
            case 0x10A4A8u: goto label_10a4a8;
            case 0x10A4ACu: goto label_10a4ac;
            case 0x10A4B0u: goto label_10a4b0;
            case 0x10A4B4u: goto label_10a4b4;
            case 0x10A4B8u: goto label_10a4b8;
            case 0x10A4BCu: goto label_10a4bc;
            case 0x10A4C0u: goto label_10a4c0;
            case 0x10A4C4u: goto label_10a4c4;
            case 0x10A4C8u: goto label_10a4c8;
            case 0x10A4CCu: goto label_10a4cc;
            case 0x10A4D0u: goto label_10a4d0;
            case 0x10A4D4u: goto label_10a4d4;
            case 0x10A4D8u: goto label_10a4d8;
            case 0x10A4DCu: goto label_10a4dc;
            case 0x10A4E0u: goto label_10a4e0;
            case 0x10A4E4u: goto label_10a4e4;
            case 0x10A4E8u: goto label_10a4e8;
            case 0x10A4ECu: goto label_10a4ec;
            case 0x10A4F0u: goto label_10a4f0;
            case 0x10A4F4u: goto label_10a4f4;
            case 0x10A4F8u: goto label_10a4f8;
            case 0x10A4FCu: goto label_10a4fc;
            case 0x10A500u: goto label_10a500;
            case 0x10A504u: goto label_10a504;
            case 0x10A508u: goto label_10a508;
            case 0x10A50Cu: goto label_10a50c;
            case 0x10A510u: goto label_10a510;
            case 0x10A514u: goto label_10a514;
            case 0x10A518u: goto label_10a518;
            case 0x10A51Cu: goto label_10a51c;
            case 0x10A520u: goto label_10a520;
            case 0x10A524u: goto label_10a524;
            case 0x10A528u: goto label_10a528;
            case 0x10A52Cu: goto label_10a52c;
            case 0x10A530u: goto label_10a530;
            case 0x10A534u: goto label_10a534;
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A538u;
label_10a538:
    // 0x10a538: 0x27bdffe0
    ctx->pc = 0x10a538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_10a53c:
    // 0x10a53c: 0xffb10008
    ctx->pc = 0x10a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10a540:
    // 0x10a540: 0xa0882d
    ctx->pc = 0x10a540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a544:
    // 0x10a544: 0x2e220020
    ctx->pc = 0x10a544u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
label_10a548:
    // 0x10a548: 0xffb00000
    ctx->pc = 0x10a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10a54c:
    // 0x10a54c: 0xffbf0010
    ctx->pc = 0x10a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10a550:
    // 0x10a550: 0x14400005
label_10a554:
    if (ctx->pc == 0x10A554u) {
        ctx->pc = 0x10A554u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A558u;
        goto label_10a558;
    }
    ctx->pc = 0x10A550u;
    {
        const bool branch_taken_0x10a550 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A554u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a550) {
            ctx->pc = 0x10A568u;
            goto label_10a568;
        }
    }
    ctx->pc = 0x10A558u;
label_10a558:
    // 0x10a558: 0x24030016
    ctx->pc = 0x10a558u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
label_10a55c:
    // 0x10a55c: 0x2402ffff
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a560:
    // 0x10a560: 0x10000026
label_10a564:
    if (ctx->pc == 0x10A564u) {
        ctx->pc = 0x10A564u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10A568u;
        goto label_10a568;
    }
    ctx->pc = 0x10A560u;
    {
        const bool branch_taken_0x10a560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A564u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10a560) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A568u;
label_10a568:
    // 0x10a568: 0x8e0301d4
    ctx->pc = 0x10a568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10a56c:
    // 0x10a56c: 0x14600007
label_10a570:
    if (ctx->pc == 0x10A570u) {
        ctx->pc = 0x10A570u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x10A574u;
        goto label_10a574;
    }
    ctx->pc = 0x10A56Cu;
    {
        const bool branch_taken_0x10a56c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A570u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x10a56c) {
            ctx->pc = 0x10A58Cu;
            goto label_10a58c;
        }
    }
    ctx->pc = 0x10A574u;
label_10a574:
    // 0x10a574: 0xc042912
label_10a578:
    if (ctx->pc == 0x10A578u) {
        ctx->pc = 0x10A57Cu;
        goto label_10a57c;
    }
    ctx->pc = 0x10A574u;
    SET_GPR_U32(ctx, 31, 0x10A57Cu);
    ctx->pc = 0x10A448u;
    goto label_10a448;
    ctx->pc = 0x10A57Cu;
label_10a57c:
    // 0x10a57c: 0x1440001f
label_10a580:
    if (ctx->pc == 0x10A580u) {
        ctx->pc = 0x10A580u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10A584u;
        goto label_10a584;
    }
    ctx->pc = 0x10A57Cu;
    {
        const bool branch_taken_0x10a57c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A580u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a57c) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A584u;
label_10a584:
    // 0x10a584: 0x8e0301d4
    ctx->pc = 0x10a584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10a588:
    // 0x10a588: 0x111080
    ctx->pc = 0x10a588u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_10a58c:
    // 0x10a58c: 0x432021
    ctx->pc = 0x10a58cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a590:
    // 0x10a590: 0x8c850000
    ctx->pc = 0x10a590u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10a594:
    // 0x10a594: 0x54a0000c
label_10a598:
    if (ctx->pc == 0x10A598u) {
        ctx->pc = 0x10A598u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10A59Cu;
        goto label_10a59c;
    }
    ctx->pc = 0x10A594u;
    {
        const bool branch_taken_0x10a594 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x10a594) {
            ctx->pc = 0x10A598u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x10A5C8u;
            goto label_10a5c8;
        }
    }
    ctx->pc = 0x10A59Cu;
label_10a59c:
    // 0x10a59c: 0xc0429e4
label_10a5a0:
    if (ctx->pc == 0x10A5A0u) {
        ctx->pc = 0x10A5A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A5A4u;
        goto label_10a5a4;
    }
    ctx->pc = 0x10A59Cu;
    SET_GPR_U32(ctx, 31, 0x10A5A4u);
    ctx->pc = 0x10A5A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A790_0x10a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5A4u; }
    }
    if (ctx->pc != 0x10A5A4u) { return; }
    ctx->pc = 0x10A5A4u;
label_10a5a4:
    // 0x10a5a4: 0x200202d
    ctx->pc = 0x10a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a5a8:
    // 0x10a5a8: 0x220302d
    ctx->pc = 0x10a5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a5ac:
    // 0x10a5ac: 0xdfb10008
    ctx->pc = 0x10a5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a5b0:
    // 0x10a5b0: 0xdfb00000
    ctx->pc = 0x10a5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a5b4:
    // 0x10a5b4: 0x40282d
    ctx->pc = 0x10a5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a5b8:
    // 0x10a5b8: 0xdfbf0010
    ctx->pc = 0x10a5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a5bc:
    // 0x10a5bc: 0x80429cc
label_10a5c0:
    if (ctx->pc == 0x10A5C0u) {
        ctx->pc = 0x10A5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10A5C4u;
        goto label_10a5c4;
    }
    ctx->pc = 0x10A5BCu;
    ctx->pc = 0x10A5C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10A730u;
    entry_10a730_0x10a790(rdram, ctx, runtime); return;
    ctx->pc = 0x10A5C4u;
label_10a5c4:
    // 0x10a5c4: 0x0
    ctx->pc = 0x10a5c4u;
    // NOP
label_10a5c8:
    // 0x10a5c8: 0x10a3000c
label_10a5cc:
    if (ctx->pc == 0x10A5CCu) {
        ctx->pc = 0x10A5CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A5D0u;
        goto label_10a5d0;
    }
    ctx->pc = 0x10A5C8u;
    {
        const bool branch_taken_0x10a5c8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x10A5CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a5c8) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A5D0u;
label_10a5d0:
    // 0x10a5d0: 0x2402ffff
    ctx->pc = 0x10a5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a5d4:
    // 0x10a5d4: 0x54a20006
label_10a5d8:
    if (ctx->pc == 0x10A5D8u) {
        ctx->pc = 0x10A5D8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x10A5DCu;
        goto label_10a5dc;
    }
    ctx->pc = 0x10A5D4u;
    {
        const bool branch_taken_0x10a5d4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x10a5d4) {
            ctx->pc = 0x10A5D8u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x10A5F0u;
            goto label_10a5f0;
        }
    }
    ctx->pc = 0x10A5DCu;
label_10a5dc:
    // 0x10a5dc: 0x24030016
    ctx->pc = 0x10a5dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
label_10a5e0:
    // 0x10a5e0: 0x24020001
    ctx->pc = 0x10a5e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_10a5e4:
    // 0x10a5e4: 0x10000005
label_10a5e8:
    if (ctx->pc == 0x10A5E8u) {
        ctx->pc = 0x10A5E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x10A5ECu;
        goto label_10a5ec;
    }
    ctx->pc = 0x10A5E4u;
    {
        const bool branch_taken_0x10a5e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A5E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x10a5e4) {
            ctx->pc = 0x10A5FCu;
            goto label_10a5fc;
        }
    }
    ctx->pc = 0x10A5ECu;
label_10a5ec:
    // 0x10a5ec: 0x0
    ctx->pc = 0x10a5ecu;
    // NOP
label_10a5f0:
    // 0x10a5f0: 0xa0f809
label_10a5f4:
    if (ctx->pc == 0x10A5F4u) {
        ctx->pc = 0x10A5F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A5F8u;
        goto label_10a5f8;
    }
    ctx->pc = 0x10A5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x10A5F8u);
        ctx->pc = 0x10A5F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A448u: goto label_10a448;
            case 0x10A44Cu: goto label_10a44c;
            case 0x10A450u: goto label_10a450;
            case 0x10A454u: goto label_10a454;
            case 0x10A458u: goto label_10a458;
            case 0x10A45Cu: goto label_10a45c;
            case 0x10A460u: goto label_10a460;
            case 0x10A464u: goto label_10a464;
            case 0x10A468u: goto label_10a468;
            case 0x10A46Cu: goto label_10a46c;
            case 0x10A470u: goto label_10a470;
            case 0x10A474u: goto label_10a474;
            case 0x10A478u: goto label_10a478;
            case 0x10A47Cu: goto label_10a47c;
            case 0x10A480u: goto label_10a480;
            case 0x10A484u: goto label_10a484;
            case 0x10A488u: goto label_10a488;
            case 0x10A48Cu: goto label_10a48c;
            case 0x10A490u: goto label_10a490;
            case 0x10A494u: goto label_10a494;
            case 0x10A498u: goto label_10a498;
            case 0x10A49Cu: goto label_10a49c;
            case 0x10A4A0u: goto label_10a4a0;
            case 0x10A4A4u: goto label_10a4a4;
            case 0x10A4A8u: goto label_10a4a8;
            case 0x10A4ACu: goto label_10a4ac;
            case 0x10A4B0u: goto label_10a4b0;
            case 0x10A4B4u: goto label_10a4b4;
            case 0x10A4B8u: goto label_10a4b8;
            case 0x10A4BCu: goto label_10a4bc;
            case 0x10A4C0u: goto label_10a4c0;
            case 0x10A4C4u: goto label_10a4c4;
            case 0x10A4C8u: goto label_10a4c8;
            case 0x10A4CCu: goto label_10a4cc;
            case 0x10A4D0u: goto label_10a4d0;
            case 0x10A4D4u: goto label_10a4d4;
            case 0x10A4D8u: goto label_10a4d8;
            case 0x10A4DCu: goto label_10a4dc;
            case 0x10A4E0u: goto label_10a4e0;
            case 0x10A4E4u: goto label_10a4e4;
            case 0x10A4E8u: goto label_10a4e8;
            case 0x10A4ECu: goto label_10a4ec;
            case 0x10A4F0u: goto label_10a4f0;
            case 0x10A4F4u: goto label_10a4f4;
            case 0x10A4F8u: goto label_10a4f8;
            case 0x10A4FCu: goto label_10a4fc;
            case 0x10A500u: goto label_10a500;
            case 0x10A504u: goto label_10a504;
            case 0x10A508u: goto label_10a508;
            case 0x10A50Cu: goto label_10a50c;
            case 0x10A510u: goto label_10a510;
            case 0x10A514u: goto label_10a514;
            case 0x10A518u: goto label_10a518;
            case 0x10A51Cu: goto label_10a51c;
            case 0x10A520u: goto label_10a520;
            case 0x10A524u: goto label_10a524;
            case 0x10A528u: goto label_10a528;
            case 0x10A52Cu: goto label_10a52c;
            case 0x10A530u: goto label_10a530;
            case 0x10A534u: goto label_10a534;
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A5F8u; }
            if (ctx->pc != 0x10A5F8u) { return; }
        }
    }
    ctx->pc = 0x10A5F8u;
label_10a5f8:
    // 0x10a5f8: 0x102d
    ctx->pc = 0x10a5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a5fc:
    // 0x10a5fc: 0xdfb00000
    ctx->pc = 0x10a5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a600:
    // 0x10a600: 0xdfb10008
    ctx->pc = 0x10a600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a604:
    // 0x10a604: 0xdfbf0010
    ctx->pc = 0x10a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a608:
    // 0x10a608: 0x3e00008
label_10a60c:
    if (ctx->pc == 0x10A60Cu) {
        ctx->pc = 0x10A60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10A610u;
        goto label_10a610;
    }
    ctx->pc = 0x10A608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A448u: goto label_10a448;
            case 0x10A44Cu: goto label_10a44c;
            case 0x10A450u: goto label_10a450;
            case 0x10A454u: goto label_10a454;
            case 0x10A458u: goto label_10a458;
            case 0x10A45Cu: goto label_10a45c;
            case 0x10A460u: goto label_10a460;
            case 0x10A464u: goto label_10a464;
            case 0x10A468u: goto label_10a468;
            case 0x10A46Cu: goto label_10a46c;
            case 0x10A470u: goto label_10a470;
            case 0x10A474u: goto label_10a474;
            case 0x10A478u: goto label_10a478;
            case 0x10A47Cu: goto label_10a47c;
            case 0x10A480u: goto label_10a480;
            case 0x10A484u: goto label_10a484;
            case 0x10A488u: goto label_10a488;
            case 0x10A48Cu: goto label_10a48c;
            case 0x10A490u: goto label_10a490;
            case 0x10A494u: goto label_10a494;
            case 0x10A498u: goto label_10a498;
            case 0x10A49Cu: goto label_10a49c;
            case 0x10A4A0u: goto label_10a4a0;
            case 0x10A4A4u: goto label_10a4a4;
            case 0x10A4A8u: goto label_10a4a8;
            case 0x10A4ACu: goto label_10a4ac;
            case 0x10A4B0u: goto label_10a4b0;
            case 0x10A4B4u: goto label_10a4b4;
            case 0x10A4B8u: goto label_10a4b8;
            case 0x10A4BCu: goto label_10a4bc;
            case 0x10A4C0u: goto label_10a4c0;
            case 0x10A4C4u: goto label_10a4c4;
            case 0x10A4C8u: goto label_10a4c8;
            case 0x10A4CCu: goto label_10a4cc;
            case 0x10A4D0u: goto label_10a4d0;
            case 0x10A4D4u: goto label_10a4d4;
            case 0x10A4D8u: goto label_10a4d8;
            case 0x10A4DCu: goto label_10a4dc;
            case 0x10A4E0u: goto label_10a4e0;
            case 0x10A4E4u: goto label_10a4e4;
            case 0x10A4E8u: goto label_10a4e8;
            case 0x10A4ECu: goto label_10a4ec;
            case 0x10A4F0u: goto label_10a4f0;
            case 0x10A4F4u: goto label_10a4f4;
            case 0x10A4F8u: goto label_10a4f8;
            case 0x10A4FCu: goto label_10a4fc;
            case 0x10A500u: goto label_10a500;
            case 0x10A504u: goto label_10a504;
            case 0x10A508u: goto label_10a508;
            case 0x10A50Cu: goto label_10a50c;
            case 0x10A510u: goto label_10a510;
            case 0x10A514u: goto label_10a514;
            case 0x10A518u: goto label_10a518;
            case 0x10A51Cu: goto label_10a51c;
            case 0x10A520u: goto label_10a520;
            case 0x10A524u: goto label_10a524;
            case 0x10A528u: goto label_10a528;
            case 0x10A52Cu: goto label_10a52c;
            case 0x10A530u: goto label_10a530;
            case 0x10A534u: goto label_10a534;
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10A610u;
label_10a610:
    // 0x10a610: 0x27bdffe0
    ctx->pc = 0x10a610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_10a614:
    // 0x10a614: 0x2402ffff
    ctx->pc = 0x10a614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a618:
    // 0x10a618: 0xffb00000
    ctx->pc = 0x10a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10a61c:
    // 0x10a61c: 0xa0802d
    ctx->pc = 0x10a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10a620:
    // 0x10a620: 0x2e030020
    ctx->pc = 0x10a620u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 16), 32));
label_10a624:
    // 0x10a624: 0xffb10008
    ctx->pc = 0x10a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10a628:
    // 0x10a628: 0xffbf0010
    ctx->pc = 0x10a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10a62c:
    // 0x10a62c: 0x10600019
label_10a630:
    if (ctx->pc == 0x10A630u) {
        ctx->pc = 0x10A630u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A634u;
        goto label_10a634;
    }
    ctx->pc = 0x10A62Cu;
    {
        const bool branch_taken_0x10a62c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A630u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10a62c) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A634u;
label_10a634:
    // 0x10a634: 0x8e2501d4
    ctx->pc = 0x10a634u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_10a638:
    // 0x10a638: 0x14a00008
label_10a63c:
    if (ctx->pc == 0x10A63Cu) {
        ctx->pc = 0x10A63Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x10A640u;
        goto label_10a640;
    }
    ctx->pc = 0x10A638u;
    {
        const bool branch_taken_0x10a638 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x10A63Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x10a638) {
            ctx->pc = 0x10A65Cu;
            goto label_10a65c;
        }
    }
    ctx->pc = 0x10A640u;
label_10a640:
    // 0x10a640: 0xc042912
label_10a644:
    if (ctx->pc == 0x10A644u) {
        ctx->pc = 0x10A648u;
        goto label_10a648;
    }
    ctx->pc = 0x10A640u;
    SET_GPR_U32(ctx, 31, 0x10A648u);
    ctx->pc = 0x10A448u;
    goto label_10a448;
    ctx->pc = 0x10A648u;
label_10a648:
    // 0x10a648: 0x50400003
label_10a64c:
    if (ctx->pc == 0x10A64Cu) {
        ctx->pc = 0x10A64Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->pc = 0x10A650u;
        goto label_10a650;
    }
    ctx->pc = 0x10A648u;
    {
        const bool branch_taken_0x10a648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10a648) {
            ctx->pc = 0x10A64Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 468)));
            ctx->pc = 0x10A658u;
            goto label_10a658;
        }
    }
    ctx->pc = 0x10A650u;
label_10a650:
    // 0x10a650: 0x10000010
label_10a654:
    if (ctx->pc == 0x10A654u) {
        ctx->pc = 0x10A654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x10A658u;
        goto label_10a658;
    }
    ctx->pc = 0x10A650u;
    {
        const bool branch_taken_0x10a650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x10a650) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A658u;
label_10a658:
    // 0x10a658: 0x101880
    ctx->pc = 0x10a658u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_10a65c:
    // 0x10a65c: 0x652021
    ctx->pc = 0x10a65cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_10a660:
    // 0x10a660: 0x8c850000
    ctx->pc = 0x10a660u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10a664:
    // 0x10a664: 0x10a0000b
label_10a668:
    if (ctx->pc == 0x10A668u) {
        ctx->pc = 0x10A668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10A66Cu;
        goto label_10a66c;
    }
    ctx->pc = 0x10A664u;
    {
        const bool branch_taken_0x10a664 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10A668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10a664) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A66Cu;
label_10a66c:
    // 0x10a66c: 0x2403ffff
    ctx->pc = 0x10a66cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a670:
    // 0x10a670: 0x10a30008
label_10a674:
    if (ctx->pc == 0x10A674u) {
        ctx->pc = 0x10A674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x10A678u;
        goto label_10a678;
    }
    ctx->pc = 0x10A670u;
    {
        const bool branch_taken_0x10a670 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x10A674u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x10a670) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A678u;
label_10a678:
    // 0x10a678: 0x24030001
    ctx->pc = 0x10a678u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_10a67c:
    // 0x10a67c: 0x10a30005
label_10a680:
    if (ctx->pc == 0x10A680u) {
        ctx->pc = 0x10A680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x10A684u;
        goto label_10a684;
    }
    ctx->pc = 0x10A67Cu;
    {
        const bool branch_taken_0x10a67c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x10A680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x10a67c) {
            ctx->pc = 0x10A694u;
            goto label_10a694;
        }
    }
    ctx->pc = 0x10A684u;
label_10a684:
    // 0x10a684: 0xac800000
    ctx->pc = 0x10a684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_10a688:
    // 0x10a688: 0xa0f809
label_10a68c:
    if (ctx->pc == 0x10A68Cu) {
        ctx->pc = 0x10A68Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10A690u;
        goto label_10a690;
    }
    ctx->pc = 0x10A688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x10A690u);
        ctx->pc = 0x10A68Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A448u: goto label_10a448;
            case 0x10A44Cu: goto label_10a44c;
            case 0x10A450u: goto label_10a450;
            case 0x10A454u: goto label_10a454;
            case 0x10A458u: goto label_10a458;
            case 0x10A45Cu: goto label_10a45c;
            case 0x10A460u: goto label_10a460;
            case 0x10A464u: goto label_10a464;
            case 0x10A468u: goto label_10a468;
            case 0x10A46Cu: goto label_10a46c;
            case 0x10A470u: goto label_10a470;
            case 0x10A474u: goto label_10a474;
            case 0x10A478u: goto label_10a478;
            case 0x10A47Cu: goto label_10a47c;
            case 0x10A480u: goto label_10a480;
            case 0x10A484u: goto label_10a484;
            case 0x10A488u: goto label_10a488;
            case 0x10A48Cu: goto label_10a48c;
            case 0x10A490u: goto label_10a490;
            case 0x10A494u: goto label_10a494;
            case 0x10A498u: goto label_10a498;
            case 0x10A49Cu: goto label_10a49c;
            case 0x10A4A0u: goto label_10a4a0;
            case 0x10A4A4u: goto label_10a4a4;
            case 0x10A4A8u: goto label_10a4a8;
            case 0x10A4ACu: goto label_10a4ac;
            case 0x10A4B0u: goto label_10a4b0;
            case 0x10A4B4u: goto label_10a4b4;
            case 0x10A4B8u: goto label_10a4b8;
            case 0x10A4BCu: goto label_10a4bc;
            case 0x10A4C0u: goto label_10a4c0;
            case 0x10A4C4u: goto label_10a4c4;
            case 0x10A4C8u: goto label_10a4c8;
            case 0x10A4CCu: goto label_10a4cc;
            case 0x10A4D0u: goto label_10a4d0;
            case 0x10A4D4u: goto label_10a4d4;
            case 0x10A4D8u: goto label_10a4d8;
            case 0x10A4DCu: goto label_10a4dc;
            case 0x10A4E0u: goto label_10a4e0;
            case 0x10A4E4u: goto label_10a4e4;
            case 0x10A4E8u: goto label_10a4e8;
            case 0x10A4ECu: goto label_10a4ec;
            case 0x10A4F0u: goto label_10a4f0;
            case 0x10A4F4u: goto label_10a4f4;
            case 0x10A4F8u: goto label_10a4f8;
            case 0x10A4FCu: goto label_10a4fc;
            case 0x10A500u: goto label_10a500;
            case 0x10A504u: goto label_10a504;
            case 0x10A508u: goto label_10a508;
            case 0x10A50Cu: goto label_10a50c;
            case 0x10A510u: goto label_10a510;
            case 0x10A514u: goto label_10a514;
            case 0x10A518u: goto label_10a518;
            case 0x10A51Cu: goto label_10a51c;
            case 0x10A520u: goto label_10a520;
            case 0x10A524u: goto label_10a524;
            case 0x10A528u: goto label_10a528;
            case 0x10A52Cu: goto label_10a52c;
            case 0x10A530u: goto label_10a530;
            case 0x10A534u: goto label_10a534;
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10A690u; }
            if (ctx->pc != 0x10A690u) { return; }
        }
    }
    ctx->pc = 0x10A690u;
label_10a690:
    // 0x10a690: 0x102d
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a694:
    // 0x10a694: 0xdfb00000
    ctx->pc = 0x10a694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a698:
    // 0x10a698: 0xdfb10008
    ctx->pc = 0x10a698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10a69c:
    // 0x10a69c: 0xdfbf0010
    ctx->pc = 0x10a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a6a0:
    // 0x10a6a0: 0x3e00008
label_10a6a4:
    if (ctx->pc == 0x10A6A4u) {
        ctx->pc = 0x10A6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10A6A8u;
        goto label_fallthrough_0x10a6a0;
    }
    ctx->pc = 0x10A6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A6A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10A448u: goto label_10a448;
            case 0x10A44Cu: goto label_10a44c;
            case 0x10A450u: goto label_10a450;
            case 0x10A454u: goto label_10a454;
            case 0x10A458u: goto label_10a458;
            case 0x10A45Cu: goto label_10a45c;
            case 0x10A460u: goto label_10a460;
            case 0x10A464u: goto label_10a464;
            case 0x10A468u: goto label_10a468;
            case 0x10A46Cu: goto label_10a46c;
            case 0x10A470u: goto label_10a470;
            case 0x10A474u: goto label_10a474;
            case 0x10A478u: goto label_10a478;
            case 0x10A47Cu: goto label_10a47c;
            case 0x10A480u: goto label_10a480;
            case 0x10A484u: goto label_10a484;
            case 0x10A488u: goto label_10a488;
            case 0x10A48Cu: goto label_10a48c;
            case 0x10A490u: goto label_10a490;
            case 0x10A494u: goto label_10a494;
            case 0x10A498u: goto label_10a498;
            case 0x10A49Cu: goto label_10a49c;
            case 0x10A4A0u: goto label_10a4a0;
            case 0x10A4A4u: goto label_10a4a4;
            case 0x10A4A8u: goto label_10a4a8;
            case 0x10A4ACu: goto label_10a4ac;
            case 0x10A4B0u: goto label_10a4b0;
            case 0x10A4B4u: goto label_10a4b4;
            case 0x10A4B8u: goto label_10a4b8;
            case 0x10A4BCu: goto label_10a4bc;
            case 0x10A4C0u: goto label_10a4c0;
            case 0x10A4C4u: goto label_10a4c4;
            case 0x10A4C8u: goto label_10a4c8;
            case 0x10A4CCu: goto label_10a4cc;
            case 0x10A4D0u: goto label_10a4d0;
            case 0x10A4D4u: goto label_10a4d4;
            case 0x10A4D8u: goto label_10a4d8;
            case 0x10A4DCu: goto label_10a4dc;
            case 0x10A4E0u: goto label_10a4e0;
            case 0x10A4E4u: goto label_10a4e4;
            case 0x10A4E8u: goto label_10a4e8;
            case 0x10A4ECu: goto label_10a4ec;
            case 0x10A4F0u: goto label_10a4f0;
            case 0x10A4F4u: goto label_10a4f4;
            case 0x10A4F8u: goto label_10a4f8;
            case 0x10A4FCu: goto label_10a4fc;
            case 0x10A500u: goto label_10a500;
            case 0x10A504u: goto label_10a504;
            case 0x10A508u: goto label_10a508;
            case 0x10A50Cu: goto label_10a50c;
            case 0x10A510u: goto label_10a510;
            case 0x10A514u: goto label_10a514;
            case 0x10A518u: goto label_10a518;
            case 0x10A51Cu: goto label_10a51c;
            case 0x10A520u: goto label_10a520;
            case 0x10A524u: goto label_10a524;
            case 0x10A528u: goto label_10a528;
            case 0x10A52Cu: goto label_10a52c;
            case 0x10A530u: goto label_10a530;
            case 0x10A534u: goto label_10a534;
            case 0x10A538u: goto label_10a538;
            case 0x10A53Cu: goto label_10a53c;
            case 0x10A540u: goto label_10a540;
            case 0x10A544u: goto label_10a544;
            case 0x10A548u: goto label_10a548;
            case 0x10A54Cu: goto label_10a54c;
            case 0x10A550u: goto label_10a550;
            case 0x10A554u: goto label_10a554;
            case 0x10A558u: goto label_10a558;
            case 0x10A55Cu: goto label_10a55c;
            case 0x10A560u: goto label_10a560;
            case 0x10A564u: goto label_10a564;
            case 0x10A568u: goto label_10a568;
            case 0x10A56Cu: goto label_10a56c;
            case 0x10A570u: goto label_10a570;
            case 0x10A574u: goto label_10a574;
            case 0x10A578u: goto label_10a578;
            case 0x10A57Cu: goto label_10a57c;
            case 0x10A580u: goto label_10a580;
            case 0x10A584u: goto label_10a584;
            case 0x10A588u: goto label_10a588;
            case 0x10A58Cu: goto label_10a58c;
            case 0x10A590u: goto label_10a590;
            case 0x10A594u: goto label_10a594;
            case 0x10A598u: goto label_10a598;
            case 0x10A59Cu: goto label_10a59c;
            case 0x10A5A0u: goto label_10a5a0;
            case 0x10A5A4u: goto label_10a5a4;
            case 0x10A5A8u: goto label_10a5a8;
            case 0x10A5ACu: goto label_10a5ac;
            case 0x10A5B0u: goto label_10a5b0;
            case 0x10A5B4u: goto label_10a5b4;
            case 0x10A5B8u: goto label_10a5b8;
            case 0x10A5BCu: goto label_10a5bc;
            case 0x10A5C0u: goto label_10a5c0;
            case 0x10A5C4u: goto label_10a5c4;
            case 0x10A5C8u: goto label_10a5c8;
            case 0x10A5CCu: goto label_10a5cc;
            case 0x10A5D0u: goto label_10a5d0;
            case 0x10A5D4u: goto label_10a5d4;
            case 0x10A5D8u: goto label_10a5d8;
            case 0x10A5DCu: goto label_10a5dc;
            case 0x10A5E0u: goto label_10a5e0;
            case 0x10A5E4u: goto label_10a5e4;
            case 0x10A5E8u: goto label_10a5e8;
            case 0x10A5ECu: goto label_10a5ec;
            case 0x10A5F0u: goto label_10a5f0;
            case 0x10A5F4u: goto label_10a5f4;
            case 0x10A5F8u: goto label_10a5f8;
            case 0x10A5FCu: goto label_10a5fc;
            case 0x10A600u: goto label_10a600;
            case 0x10A604u: goto label_10a604;
            case 0x10A608u: goto label_10a608;
            case 0x10A60Cu: goto label_10a60c;
            case 0x10A610u: goto label_10a610;
            case 0x10A614u: goto label_10a614;
            case 0x10A618u: goto label_10a618;
            case 0x10A61Cu: goto label_10a61c;
            case 0x10A620u: goto label_10a620;
            case 0x10A624u: goto label_10a624;
            case 0x10A628u: goto label_10a628;
            case 0x10A62Cu: goto label_10a62c;
            case 0x10A630u: goto label_10a630;
            case 0x10A634u: goto label_10a634;
            case 0x10A638u: goto label_10a638;
            case 0x10A63Cu: goto label_10a63c;
            case 0x10A640u: goto label_10a640;
            case 0x10A644u: goto label_10a644;
            case 0x10A648u: goto label_10a648;
            case 0x10A64Cu: goto label_10a64c;
            case 0x10A650u: goto label_10a650;
            case 0x10A654u: goto label_10a654;
            case 0x10A658u: goto label_10a658;
            case 0x10A65Cu: goto label_10a65c;
            case 0x10A660u: goto label_10a660;
            case 0x10A664u: goto label_10a664;
            case 0x10A668u: goto label_10a668;
            case 0x10A66Cu: goto label_10a66c;
            case 0x10A670u: goto label_10a670;
            case 0x10A674u: goto label_10a674;
            case 0x10A678u: goto label_10a678;
            case 0x10A67Cu: goto label_10a67c;
            case 0x10A680u: goto label_10a680;
            case 0x10A684u: goto label_10a684;
            case 0x10A688u: goto label_10a688;
            case 0x10A68Cu: goto label_10a68c;
            case 0x10A690u: goto label_10a690;
            case 0x10A694u: goto label_10a694;
            case 0x10A698u: goto label_10a698;
            case 0x10A69Cu: goto label_10a69c;
            case 0x10A6A0u: goto label_10a6a0;
            case 0x10A6A4u: goto label_10a6a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x10a6a0:
    ctx->pc = 0x10A6A8u;
}
