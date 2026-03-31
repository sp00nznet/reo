#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012A458
// Address: 0x12a458 - 0x12a658
void sub_0012A458_0x12a458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a458u;

label_12a458:
    // 0x12a458: 0x27bdff90
    ctx->pc = 0x12a458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_12a45c:
    // 0x12a45c: 0xffb00030
    ctx->pc = 0x12a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_12a460:
    // 0x12a460: 0x3c100021
    ctx->pc = 0x12a460u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
label_12a464:
    // 0x12a464: 0xffb10038
    ctx->pc = 0x12a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_12a468:
    // 0x12a468: 0x80882d
    ctx->pc = 0x12a468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12a46c:
    // 0x12a46c: 0xffb20040
    ctx->pc = 0x12a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_12a470:
    // 0x12a470: 0xa0902d
    ctx->pc = 0x12a470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12a474:
    // 0x12a474: 0xffb30048
    ctx->pc = 0x12a474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_12a478:
    // 0x12a478: 0xc0982d
    ctx->pc = 0x12a478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12a47c:
    // 0x12a47c: 0xffb40050
    ctx->pc = 0x12a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_12a480:
    // 0x12a480: 0xe0a02d
    ctx->pc = 0x12a480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12a484:
    // 0x12a484: 0xffb50058
    ctx->pc = 0x12a484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_12a488:
    // 0x12a488: 0xffbf0060
    ctx->pc = 0x12a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_12a48c:
    // 0x12a48c: 0xc04bdc8
label_12a490:
    if (ctx->pc == 0x12A490u) {
        ctx->pc = 0x12A490u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1032));
        ctx->pc = 0x12A494u;
        goto label_12a494;
    }
    ctx->pc = 0x12A48Cu;
    SET_GPR_U32(ctx, 31, 0x12A494u);
    ctx->pc = 0x12A490u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1032));
    ctx->pc = 0x12F720u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F720_0x12f720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A494u; }
    }
    if (ctx->pc != 0x12A494u) { return; }
    ctx->pc = 0x12A494u;
label_12a494:
    // 0x12a494: 0x3c040021
    ctx->pc = 0x12a494u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
label_12a498:
    // 0x12a498: 0x302d
    ctx->pc = 0x12a498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a49c:
    // 0x12a49c: 0x24840008
    ctx->pc = 0x12a49cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
label_12a4a0:
    // 0x12a4a0: 0xc04fe2a
label_12a4a4:
    if (ctx->pc == 0x12A4A4u) {
        ctx->pc = 0x12A4A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x12A4A8u;
        goto label_12a4a8;
    }
    ctx->pc = 0x12A4A0u;
    SET_GPR_U32(ctx, 31, 0x12A4A8u);
    ctx->pc = 0x12A4A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x13F8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A8_0x13f8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A4A8u; }
    }
    if (ctx->pc != 0x12A4A8u) { return; }
    ctx->pc = 0x12A4A8u;
label_12a4a8:
    // 0x12a4a8: 0x24050020
    ctx->pc = 0x12a4a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_12a4ac:
    // 0x12a4ac: 0x200202d
    ctx->pc = 0x12a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a4b0:
    // 0x12a4b0: 0xc04fcd8
label_12a4b4:
    if (ctx->pc == 0x12A4B4u) {
        ctx->pc = 0x12A4B4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A4B8u;
        goto label_12a4b8;
    }
    ctx->pc = 0x12A4B0u;
    SET_GPR_U32(ctx, 31, 0x12A4B8u);
    ctx->pc = 0x12A4B4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F360_0x13f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A4B8u; }
    }
    if (ctx->pc != 0x12A4B8u) { return; }
    ctx->pc = 0x12A4B8u;
label_12a4b8:
    // 0x12a4b8: 0x26040020
    ctx->pc = 0x12a4b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
label_12a4bc:
    // 0x12a4bc: 0x24050020
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_12a4c0:
    // 0x12a4c0: 0xc04fcd8
label_12a4c4:
    if (ctx->pc == 0x12A4C4u) {
        ctx->pc = 0x12A4C4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x12A4C8u;
        goto label_12a4c8;
    }
    ctx->pc = 0x12A4C0u;
    SET_GPR_U32(ctx, 31, 0x12A4C8u);
    ctx->pc = 0x12A4C4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13F360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F360_0x13f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A4C8u; }
    }
    if (ctx->pc != 0x12A4C8u) { return; }
    ctx->pc = 0x12A4C8u;
label_12a4c8:
    // 0x12a4c8: 0x8e300014
    ctx->pc = 0x12a4c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_12a4cc:
    // 0x12a4cc: 0x3a0282d
    ctx->pc = 0x12a4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12a4d0:
    // 0x12a4d0: 0x24040002
    ctx->pc = 0x12a4d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_12a4d4:
    // 0x12a4d4: 0x2a0302d
    ctx->pc = 0x12a4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12a4d8:
    // 0x12a4d8: 0xc04bde0
label_12a4dc:
    if (ctx->pc == 0x12A4DCu) {
        ctx->pc = 0x12A4DCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x12A4E0u;
        goto label_12a4e0;
    }
    ctx->pc = 0x12A4D8u;
    SET_GPR_U32(ctx, 31, 0x12A4E0u);
    ctx->pc = 0x12A4DCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x12F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F780_0x12f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A4E0u; }
    }
    if (ctx->pc != 0x12A4E0u) { return; }
    ctx->pc = 0x12A4E0u;
label_12a4e0:
    // 0x12a4e0: 0x240282d
    ctx->pc = 0x12a4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a4e4:
    // 0x12a4e4: 0x40882d
    ctx->pc = 0x12a4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a4e8:
    // 0x12a4e8: 0x260302d
    ctx->pc = 0x12a4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12a4ec:
    // 0x12a4ec: 0x280382d
    ctx->pc = 0x12a4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12a4f0:
    // 0x12a4f0: 0xc04bf38
label_12a4f4:
    if (ctx->pc == 0x12A4F4u) {
        ctx->pc = 0x12A4F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A4F8u;
        goto label_12a4f8;
    }
    ctx->pc = 0x12A4F0u;
    SET_GPR_U32(ctx, 31, 0x12A4F8u);
    ctx->pc = 0x12A4F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FCE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FCE0_0x12fce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A4F8u; }
    }
    if (ctx->pc != 0x12A4F8u) { return; }
    ctx->pc = 0x12A4F8u;
label_12a4f8:
    // 0x12a4f8: 0xc04be70
label_12a4fc:
    if (ctx->pc == 0x12A4FCu) {
        ctx->pc = 0x12A4FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A500u;
        goto label_12a500;
    }
    ctx->pc = 0x12A4F8u;
    SET_GPR_U32(ctx, 31, 0x12A500u);
    ctx->pc = 0x12A4FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12F9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A500u; }
    }
    if (ctx->pc != 0x12A500u) { return; }
    ctx->pc = 0x12A500u;
label_12a500:
    // 0x12a500: 0xc04c00e
label_12a504:
    if (ctx->pc == 0x12A504u) {
        ctx->pc = 0x12A508u;
        goto label_12a508;
    }
    ctx->pc = 0x12A500u;
    SET_GPR_U32(ctx, 31, 0x12A508u);
    ctx->pc = 0x130038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130038_0x130038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A508u; }
    }
    if (ctx->pc != 0x12A508u) { return; }
    ctx->pc = 0x12A508u;
label_12a508:
    // 0x12a508: 0x8ea30000
    ctx->pc = 0x12a508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12a50c:
    // 0x12a50c: 0x27b30010
    ctx->pc = 0x12a50cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
label_12a510:
    // 0x12a510: 0x24060400
    ctx->pc = 0x12a510u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
label_12a514:
    // 0x12a514: 0x2a0202d
    ctx->pc = 0x12a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12a518:
    // 0x12a518: 0x8c620018
    ctx->pc = 0x12a518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_12a51c:
    // 0x12a51c: 0x24050001
    ctx->pc = 0x12a51cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12a520:
    // 0x12a520: 0x40f809
label_12a524:
    if (ctx->pc == 0x12A524u) {
        ctx->pc = 0x12A524u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A528u;
        goto label_12a528;
    }
    ctx->pc = 0x12A520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A528u);
        ctx->pc = 0x12A524u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A528u; }
            if (ctx->pc != 0x12A528u) { return; }
        }
    }
    ctx->pc = 0x12A528u;
label_12a528:
    // 0x12a528: 0x8fa60014
    ctx->pc = 0x12a528u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12a52c:
    // 0x12a52c: 0x54c0000a
label_12a530:
    if (ctx->pc == 0x12A530u) {
        ctx->pc = 0x12A530u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x12A534u;
        goto label_12a534;
    }
    ctx->pc = 0x12A52Cu;
    {
        const bool branch_taken_0x12a52c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x12a52c) {
            ctx->pc = 0x12A530u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x12A558u;
            goto label_12a558;
        }
    }
    ctx->pc = 0x12A534u;
label_12a534:
    // 0x12a534: 0x0
    ctx->pc = 0x12a534u;
    // NOP
label_12a538:
    // 0x12a538: 0x0
    ctx->pc = 0x12a538u;
    // NOP
label_12a53c:
    // 0x12a53c: 0x0
    ctx->pc = 0x12a53cu;
    // NOP
label_12a540:
    // 0x12a540: 0x0
    ctx->pc = 0x12a540u;
    // NOP
label_12a544:
    // 0x12a544: 0x0
    ctx->pc = 0x12a544u;
    // NOP
label_12a548:
    // 0x12a548: 0x0
    ctx->pc = 0x12a548u;
    // NOP
label_12a54c:
    // 0x12a54c: 0x1000fffa
label_12a550:
    if (ctx->pc == 0x12A550u) {
        ctx->pc = 0x12A554u;
        goto label_12a554;
    }
    ctx->pc = 0x12A54Cu;
    {
        const bool branch_taken_0x12a54c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12a54c) {
            ctx->pc = 0x12A538u;
            goto label_12a538;
        }
    }
    ctx->pc = 0x12A554u;
label_12a554:
    // 0x12a554: 0x0
    ctx->pc = 0x12a554u;
    // NOP
label_12a558:
    // 0x12a558: 0x27b20020
    ctx->pc = 0x12a558u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 32));
label_12a55c:
    // 0x12a55c: 0x200202d
    ctx->pc = 0x12a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a560:
    // 0x12a560: 0x282d
    ctx->pc = 0x12a560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a564:
    // 0x12a564: 0x8c430018
    ctx->pc = 0x12a564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_12a568:
    // 0x12a568: 0x60f809
label_12a56c:
    if (ctx->pc == 0x12A56Cu) {
        ctx->pc = 0x12A56Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A570u;
        goto label_12a570;
    }
    ctx->pc = 0x12A568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12A570u);
        ctx->pc = 0x12A56Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A570u; }
            if (ctx->pc != 0x12A570u) { return; }
        }
    }
    ctx->pc = 0x12A570u;
label_12a570:
    // 0x12a570: 0x8fa20024
    ctx->pc = 0x12a570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_12a574:
    // 0x12a574: 0x8fa60014
    ctx->pc = 0x12a574u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12a578:
    // 0x12a578: 0x46102a
    ctx->pc = 0x12a578u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
label_12a57c:
    // 0x12a57c: 0x1040000a
label_12a580:
    if (ctx->pc == 0x12A580u) {
        ctx->pc = 0x12A580u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12A584u;
        goto label_12a584;
    }
    ctx->pc = 0x12A57Cu;
    {
        const bool branch_taken_0x12a57c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12A580u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12a57c) {
            ctx->pc = 0x12A5A8u;
            goto label_12a5a8;
        }
    }
    ctx->pc = 0x12A584u;
label_12a584:
    // 0x12a584: 0x0
    ctx->pc = 0x12a584u;
    // NOP
label_12a588:
    // 0x12a588: 0x0
    ctx->pc = 0x12a588u;
    // NOP
label_12a58c:
    // 0x12a58c: 0x0
    ctx->pc = 0x12a58cu;
    // NOP
label_12a590:
    // 0x12a590: 0x0
    ctx->pc = 0x12a590u;
    // NOP
label_12a594:
    // 0x12a594: 0x0
    ctx->pc = 0x12a594u;
    // NOP
label_12a598:
    // 0x12a598: 0x0
    ctx->pc = 0x12a598u;
    // NOP
label_12a59c:
    // 0x12a59c: 0x1000fffa
label_12a5a0:
    if (ctx->pc == 0x12A5A0u) {
        ctx->pc = 0x12A5A4u;
        goto label_12a5a4;
    }
    ctx->pc = 0x12A59Cu;
    {
        const bool branch_taken_0x12a59c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12a59c) {
            ctx->pc = 0x12A588u;
            goto label_12a588;
        }
    }
    ctx->pc = 0x12A5A4u;
label_12a5a4:
    // 0x12a5a4: 0x0
    ctx->pc = 0x12a5a4u;
    // NOP
label_12a5a8:
    // 0x12a5a8: 0xc041eac
label_12a5ac:
    if (ctx->pc == 0x12A5ACu) {
        ctx->pc = 0x12A5ACu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x12A5B0u;
        goto label_12a5b0;
    }
    ctx->pc = 0x12A5A8u;
    SET_GPR_U32(ctx, 31, 0x12A5B0u);
    ctx->pc = 0x12A5ACu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5B0u; }
    }
    if (ctx->pc != 0x12A5B0u) { return; }
    ctx->pc = 0x12A5B0u;
label_12a5b0:
    // 0x12a5b0: 0x8ea30000
    ctx->pc = 0x12a5b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12a5b4:
    // 0x12a5b4: 0x260302d
    ctx->pc = 0x12a5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12a5b8:
    // 0x12a5b8: 0x2a0202d
    ctx->pc = 0x12a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12a5bc:
    // 0x12a5bc: 0x8c620020
    ctx->pc = 0x12a5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12a5c0:
    // 0x12a5c0: 0x40f809
label_12a5c4:
    if (ctx->pc == 0x12A5C4u) {
        ctx->pc = 0x12A5C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A5C8u;
        goto label_12a5c8;
    }
    ctx->pc = 0x12A5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A5C8u);
        ctx->pc = 0x12A5C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A5C8u; }
            if (ctx->pc != 0x12A5C8u) { return; }
        }
    }
    ctx->pc = 0x12A5C8u;
label_12a5c8:
    // 0x12a5c8: 0x8e030000
    ctx->pc = 0x12a5c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12a5cc:
    // 0x12a5cc: 0x240302d
    ctx->pc = 0x12a5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a5d0:
    // 0x12a5d0: 0x24050001
    ctx->pc = 0x12a5d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12a5d4:
    // 0x12a5d4: 0x8c620020
    ctx->pc = 0x12a5d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12a5d8:
    // 0x12a5d8: 0x40f809
label_12a5dc:
    if (ctx->pc == 0x12A5DCu) {
        ctx->pc = 0x12A5DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A5E0u;
        goto label_12a5e0;
    }
    ctx->pc = 0x12A5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A5E0u);
        ctx->pc = 0x12A5DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A5E0u; }
            if (ctx->pc != 0x12A5E0u) { return; }
        }
    }
    ctx->pc = 0x12A5E0u;
label_12a5e0:
    // 0x12a5e0: 0xc04beba
label_12a5e4:
    if (ctx->pc == 0x12A5E4u) {
        ctx->pc = 0x12A5E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A5E8u;
        goto label_12a5e8;
    }
    ctx->pc = 0x12A5E0u;
    SET_GPR_U32(ctx, 31, 0x12A5E8u);
    ctx->pc = 0x12A5E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FAE8_0x12fae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5E8u; }
    }
    if (ctx->pc != 0x12A5E8u) { return; }
    ctx->pc = 0x12A5E8u;
label_12a5e8:
    // 0x12a5e8: 0xc04be54
label_12a5ec:
    if (ctx->pc == 0x12A5ECu) {
        ctx->pc = 0x12A5ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A5F0u;
        goto label_12a5f0;
    }
    ctx->pc = 0x12A5E8u;
    SET_GPR_U32(ctx, 31, 0x12A5F0u);
    ctx->pc = 0x12A5ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12F950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F950_0x12f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5F0u; }
    }
    if (ctx->pc != 0x12A5F0u) { return; }
    ctx->pc = 0x12A5F0u;
label_12a5f0:
    // 0x12a5f0: 0x8ea30000
    ctx->pc = 0x12a5f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12a5f4:
    // 0x12a5f4: 0x8c62000c
    ctx->pc = 0x12a5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12a5f8:
    // 0x12a5f8: 0x40f809
label_12a5fc:
    if (ctx->pc == 0x12A5FCu) {
        ctx->pc = 0x12A5FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12A600u;
        goto label_12a600;
    }
    ctx->pc = 0x12A5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A600u);
        ctx->pc = 0x12A5FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A600u; }
            if (ctx->pc != 0x12A600u) { return; }
        }
    }
    ctx->pc = 0x12A600u;
label_12a600:
    // 0x12a600: 0x8fa40004
    ctx->pc = 0x12a600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12a604:
    // 0x12a604: 0x8c830000
    ctx->pc = 0x12a604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a608:
    // 0x12a608: 0x8c62000c
    ctx->pc = 0x12a608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12a60c:
    // 0x12a60c: 0x40f809
label_12a610:
    if (ctx->pc == 0x12A610u) {
        ctx->pc = 0x12A614u;
        goto label_12a614;
    }
    ctx->pc = 0x12A60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A614u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A614u; }
            if (ctx->pc != 0x12A614u) { return; }
        }
    }
    ctx->pc = 0x12A614u;
label_12a614:
    // 0x12a614: 0x8fa40000
    ctx->pc = 0x12a614u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_12a618:
    // 0x12a618: 0x8c830000
    ctx->pc = 0x12a618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a61c:
    // 0x12a61c: 0x8c62000c
    ctx->pc = 0x12a61cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12a620:
    // 0x12a620: 0x40f809
label_12a624:
    if (ctx->pc == 0x12A624u) {
        ctx->pc = 0x12A628u;
        goto label_12a628;
    }
    ctx->pc = 0x12A620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A628u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A628u; }
            if (ctx->pc != 0x12A628u) { return; }
        }
    }
    ctx->pc = 0x12A628u;
label_12a628:
    // 0x12a628: 0xc04bdd4
label_12a62c:
    if (ctx->pc == 0x12A62Cu) {
        ctx->pc = 0x12A630u;
        goto label_12a630;
    }
    ctx->pc = 0x12A628u;
    SET_GPR_U32(ctx, 31, 0x12A630u);
    ctx->pc = 0x12F750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F750_0x12f750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A630u; }
    }
    if (ctx->pc != 0x12A630u) { return; }
    ctx->pc = 0x12A630u;
label_12a630:
    // 0x12a630: 0xdfb00030
    ctx->pc = 0x12a630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12a634:
    // 0x12a634: 0xdfb10038
    ctx->pc = 0x12a634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12a638:
    // 0x12a638: 0xdfb20040
    ctx->pc = 0x12a638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12a63c:
    // 0x12a63c: 0xdfb30048
    ctx->pc = 0x12a63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_12a640:
    // 0x12a640: 0xdfb40050
    ctx->pc = 0x12a640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12a644:
    // 0x12a644: 0xdfb50058
    ctx->pc = 0x12a644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_12a648:
    // 0x12a648: 0xdfbf0060
    ctx->pc = 0x12a648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12a64c:
    // 0x12a64c: 0x3e00008
label_12a650:
    if (ctx->pc == 0x12A650u) {
        ctx->pc = 0x12A650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x12A654u;
        goto label_12a654;
    }
    ctx->pc = 0x12A64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A650u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A458u: goto label_12a458;
            case 0x12A45Cu: goto label_12a45c;
            case 0x12A460u: goto label_12a460;
            case 0x12A464u: goto label_12a464;
            case 0x12A468u: goto label_12a468;
            case 0x12A46Cu: goto label_12a46c;
            case 0x12A470u: goto label_12a470;
            case 0x12A474u: goto label_12a474;
            case 0x12A478u: goto label_12a478;
            case 0x12A47Cu: goto label_12a47c;
            case 0x12A480u: goto label_12a480;
            case 0x12A484u: goto label_12a484;
            case 0x12A488u: goto label_12a488;
            case 0x12A48Cu: goto label_12a48c;
            case 0x12A490u: goto label_12a490;
            case 0x12A494u: goto label_12a494;
            case 0x12A498u: goto label_12a498;
            case 0x12A49Cu: goto label_12a49c;
            case 0x12A4A0u: goto label_12a4a0;
            case 0x12A4A4u: goto label_12a4a4;
            case 0x12A4A8u: goto label_12a4a8;
            case 0x12A4ACu: goto label_12a4ac;
            case 0x12A4B0u: goto label_12a4b0;
            case 0x12A4B4u: goto label_12a4b4;
            case 0x12A4B8u: goto label_12a4b8;
            case 0x12A4BCu: goto label_12a4bc;
            case 0x12A4C0u: goto label_12a4c0;
            case 0x12A4C4u: goto label_12a4c4;
            case 0x12A4C8u: goto label_12a4c8;
            case 0x12A4CCu: goto label_12a4cc;
            case 0x12A4D0u: goto label_12a4d0;
            case 0x12A4D4u: goto label_12a4d4;
            case 0x12A4D8u: goto label_12a4d8;
            case 0x12A4DCu: goto label_12a4dc;
            case 0x12A4E0u: goto label_12a4e0;
            case 0x12A4E4u: goto label_12a4e4;
            case 0x12A4E8u: goto label_12a4e8;
            case 0x12A4ECu: goto label_12a4ec;
            case 0x12A4F0u: goto label_12a4f0;
            case 0x12A4F4u: goto label_12a4f4;
            case 0x12A4F8u: goto label_12a4f8;
            case 0x12A4FCu: goto label_12a4fc;
            case 0x12A500u: goto label_12a500;
            case 0x12A504u: goto label_12a504;
            case 0x12A508u: goto label_12a508;
            case 0x12A50Cu: goto label_12a50c;
            case 0x12A510u: goto label_12a510;
            case 0x12A514u: goto label_12a514;
            case 0x12A518u: goto label_12a518;
            case 0x12A51Cu: goto label_12a51c;
            case 0x12A520u: goto label_12a520;
            case 0x12A524u: goto label_12a524;
            case 0x12A528u: goto label_12a528;
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A530u: goto label_12a530;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A53Cu: goto label_12a53c;
            case 0x12A540u: goto label_12a540;
            case 0x12A544u: goto label_12a544;
            case 0x12A548u: goto label_12a548;
            case 0x12A54Cu: goto label_12a54c;
            case 0x12A550u: goto label_12a550;
            case 0x12A554u: goto label_12a554;
            case 0x12A558u: goto label_12a558;
            case 0x12A55Cu: goto label_12a55c;
            case 0x12A560u: goto label_12a560;
            case 0x12A564u: goto label_12a564;
            case 0x12A568u: goto label_12a568;
            case 0x12A56Cu: goto label_12a56c;
            case 0x12A570u: goto label_12a570;
            case 0x12A574u: goto label_12a574;
            case 0x12A578u: goto label_12a578;
            case 0x12A57Cu: goto label_12a57c;
            case 0x12A580u: goto label_12a580;
            case 0x12A584u: goto label_12a584;
            case 0x12A588u: goto label_12a588;
            case 0x12A58Cu: goto label_12a58c;
            case 0x12A590u: goto label_12a590;
            case 0x12A594u: goto label_12a594;
            case 0x12A598u: goto label_12a598;
            case 0x12A59Cu: goto label_12a59c;
            case 0x12A5A0u: goto label_12a5a0;
            case 0x12A5A4u: goto label_12a5a4;
            case 0x12A5A8u: goto label_12a5a8;
            case 0x12A5ACu: goto label_12a5ac;
            case 0x12A5B0u: goto label_12a5b0;
            case 0x12A5B4u: goto label_12a5b4;
            case 0x12A5B8u: goto label_12a5b8;
            case 0x12A5BCu: goto label_12a5bc;
            case 0x12A5C0u: goto label_12a5c0;
            case 0x12A5C4u: goto label_12a5c4;
            case 0x12A5C8u: goto label_12a5c8;
            case 0x12A5CCu: goto label_12a5cc;
            case 0x12A5D0u: goto label_12a5d0;
            case 0x12A5D4u: goto label_12a5d4;
            case 0x12A5D8u: goto label_12a5d8;
            case 0x12A5DCu: goto label_12a5dc;
            case 0x12A5E0u: goto label_12a5e0;
            case 0x12A5E4u: goto label_12a5e4;
            case 0x12A5E8u: goto label_12a5e8;
            case 0x12A5ECu: goto label_12a5ec;
            case 0x12A5F0u: goto label_12a5f0;
            case 0x12A5F4u: goto label_12a5f4;
            case 0x12A5F8u: goto label_12a5f8;
            case 0x12A5FCu: goto label_12a5fc;
            case 0x12A600u: goto label_12a600;
            case 0x12A604u: goto label_12a604;
            case 0x12A608u: goto label_12a608;
            case 0x12A60Cu: goto label_12a60c;
            case 0x12A610u: goto label_12a610;
            case 0x12A614u: goto label_12a614;
            case 0x12A618u: goto label_12a618;
            case 0x12A61Cu: goto label_12a61c;
            case 0x12A620u: goto label_12a620;
            case 0x12A624u: goto label_12a624;
            case 0x12A628u: goto label_12a628;
            case 0x12A62Cu: goto label_12a62c;
            case 0x12A630u: goto label_12a630;
            case 0x12A634u: goto label_12a634;
            case 0x12A638u: goto label_12a638;
            case 0x12A63Cu: goto label_12a63c;
            case 0x12A640u: goto label_12a640;
            case 0x12A644u: goto label_12a644;
            case 0x12A648u: goto label_12a648;
            case 0x12A64Cu: goto label_12a64c;
            case 0x12A650u: goto label_12a650;
            case 0x12A654u: goto label_12a654;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A654u;
label_12a654:
    // 0x12a654: 0x0
    ctx->pc = 0x12a654u;
    // NOP
}
