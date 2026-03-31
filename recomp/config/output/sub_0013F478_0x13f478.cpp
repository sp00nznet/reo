#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F478
// Address: 0x13f478 - 0x13f7f8
void sub_0013F478_0x13f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f478u;

label_13f478:
    // 0x13f478: 0x8c820018
    ctx->pc = 0x13f478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_13f47c:
    // 0x13f47c: 0xac800010
    ctx->pc = 0x13f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_13f480:
    // 0x13f480: 0x3e00008
label_13f484:
    if (ctx->pc == 0x13F484u) {
        ctx->pc = 0x13F484u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x13F488u;
        goto label_13f488;
    }
    ctx->pc = 0x13F480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F484u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F488u;
label_13f488:
    // 0x13f488: 0x27bdfff0
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f48c:
    // 0x13f48c: 0x24020001
    ctx->pc = 0x13f48cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13f490:
    // 0x13f490: 0x14a20003
label_13f494:
    if (ctx->pc == 0x13F494u) {
        ctx->pc = 0x13F494u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x13F498u;
        goto label_13f498;
    }
    ctx->pc = 0x13F490u;
    {
        const bool branch_taken_0x13f490 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x13F494u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13f490) {
            ctx->pc = 0x13F4A0u;
            goto label_13f4a0;
        }
    }
    ctx->pc = 0x13F498u;
label_13f498:
    // 0x13f498: 0x1000000a
label_13f49c:
    if (ctx->pc == 0x13F49Cu) {
        ctx->pc = 0x13F49Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x13F4A0u;
        goto label_13f4a0;
    }
    ctx->pc = 0x13F498u;
    {
        const bool branch_taken_0x13f498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F49Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        if (branch_taken_0x13f498) {
            ctx->pc = 0x13F4C4u;
            goto label_13f4c4;
        }
    }
    ctx->pc = 0x13F4A0u;
label_13f4a0:
    // 0x13f4a0: 0x10a00008
label_13f4a4:
    if (ctx->pc == 0x13F4A4u) {
        ctx->pc = 0x13F4A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F4A8u;
        goto label_13f4a8;
    }
    ctx->pc = 0x13F4A0u;
    {
        const bool branch_taken_0x13f4a0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F4A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f4a0) {
            ctx->pc = 0x13F4C4u;
            goto label_13f4c4;
        }
    }
    ctx->pc = 0x13F4A8u;
label_13f4a8:
    // 0x13f4a8: 0x8c82001c
    ctx->pc = 0x13f4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_13f4ac:
    // 0x13f4ac: 0x50400005
label_13f4b0:
    if (ctx->pc == 0x13F4B0u) {
        ctx->pc = 0x13F4B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F4B4u;
        goto label_13f4b4;
    }
    ctx->pc = 0x13F4ACu;
    {
        const bool branch_taken_0x13f4ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13f4ac) {
            ctx->pc = 0x13F4B0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13F4C4u;
            goto label_13f4c4;
        }
    }
    ctx->pc = 0x13F4B4u;
label_13f4b4:
    // 0x13f4b4: 0x8c840020
    ctx->pc = 0x13f4b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_13f4b8:
    // 0x13f4b8: 0x40f809
label_13f4bc:
    if (ctx->pc == 0x13F4BCu) {
        ctx->pc = 0x13F4BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13F4C0u;
        goto label_13f4c0;
    }
    ctx->pc = 0x13F4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F4C0u);
        ctx->pc = 0x13F4BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F4C0u; }
            if (ctx->pc != 0x13F4C0u) { return; }
        }
    }
    ctx->pc = 0x13F4C0u;
label_13f4c0:
    // 0x13f4c0: 0x102d
    ctx->pc = 0x13f4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f4c4:
    // 0x13f4c4: 0xdfbf0000
    ctx->pc = 0x13f4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f4c8:
    // 0x13f4c8: 0x3e00008
label_13f4cc:
    if (ctx->pc == 0x13F4CCu) {
        ctx->pc = 0x13F4CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F4D0u;
        goto label_13f4d0;
    }
    ctx->pc = 0x13F4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F4CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F4D0u;
label_13f4d0:
    // 0x13f4d0: 0x27bdffd0
    ctx->pc = 0x13f4d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f4d4:
    // 0x13f4d4: 0xffb20010
    ctx->pc = 0x13f4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13f4d8:
    // 0x13f4d8: 0xa0902d
    ctx->pc = 0x13f4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f4dc:
    // 0x13f4dc: 0xffb00000
    ctx->pc = 0x13f4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f4e0:
    // 0x13f4e0: 0xe0802d
    ctx->pc = 0x13f4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13f4e4:
    // 0x13f4e4: 0xffb10008
    ctx->pc = 0x13f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f4e8:
    // 0x13f4e8: 0x80882d
    ctx->pc = 0x13f4e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f4ec:
    // 0x13f4ec: 0xffb30018
    ctx->pc = 0x13f4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13f4f0:
    // 0x13f4f0: 0xffbf0020
    ctx->pc = 0x13f4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13f4f4:
    // 0x13f4f4: 0xc04fc96
label_13f4f8:
    if (ctx->pc == 0x13F4F8u) {
        ctx->pc = 0x13F4F8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F4FCu;
        goto label_13f4fc;
    }
    ctx->pc = 0x13F4F4u;
    SET_GPR_U32(ctx, 31, 0x13F4FCu);
    ctx->pc = 0x13F4F8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F4FCu; }
    }
    if (ctx->pc != 0x13F4FCu) { return; }
    ctx->pc = 0x13F4FCu;
label_13f4fc:
    // 0x13f4fc: 0x16400004
label_13f500:
    if (ctx->pc == 0x13F500u) {
        ctx->pc = 0x13F500u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13F504u;
        goto label_13f504;
    }
    ctx->pc = 0x13F4FCu;
    {
        const bool branch_taken_0x13f4fc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x13F500u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13f4fc) {
            ctx->pc = 0x13F510u;
            goto label_13f510;
        }
    }
    ctx->pc = 0x13F504u;
label_13f504:
    // 0x13f504: 0xae000000
    ctx->pc = 0x13f504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_13f508:
    // 0x13f508: 0x10000019
label_13f50c:
    if (ctx->pc == 0x13F50Cu) {
        ctx->pc = 0x13F50Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13F510u;
        goto label_13f510;
    }
    ctx->pc = 0x13F508u;
    {
        const bool branch_taken_0x13f508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F50Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13f508) {
            ctx->pc = 0x13F570u;
            goto label_13f570;
        }
    }
    ctx->pc = 0x13F510u;
label_13f510:
    // 0x13f510: 0x56420011
label_13f514:
    if (ctx->pc == 0x13F514u) {
        ctx->pc = 0x13F514u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x13F518u;
        goto label_13f518;
    }
    ctx->pc = 0x13F510u;
    {
        const bool branch_taken_0x13f510 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x13f510) {
            ctx->pc = 0x13F514u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x13F558u;
            goto label_13f558;
        }
    }
    ctx->pc = 0x13F518u;
label_13f518:
    // 0x13f518: 0x8e22000c
    ctx->pc = 0x13f518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13f51c:
    // 0x13f51c: 0x8e250014
    ctx->pc = 0x13f51cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_13f520:
    // 0x13f520: 0x53182a
    ctx->pc = 0x13f520u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
label_13f524:
    // 0x13f524: 0x263100a
    ctx->pc = 0x13f524u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 19));
label_13f528:
    // 0x13f528: 0xae020004
    ctx->pc = 0x13f528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_13f52c:
    // 0x13f52c: 0x8e240010
    ctx->pc = 0x13f52cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13f530:
    // 0x13f530: 0x8e23000c
    ctx->pc = 0x13f530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13f534:
    // 0x13f534: 0x821021
    ctx->pc = 0x13f534u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13f538:
    // 0x13f538: 0xa42821
    ctx->pc = 0x13f538u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_13f53c:
    // 0x13f53c: 0xae220010
    ctx->pc = 0x13f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_13f540:
    // 0x13f540: 0xae050000
    ctx->pc = 0x13f540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_13f544:
    // 0x13f544: 0x8e020004
    ctx->pc = 0x13f544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13f548:
    // 0x13f548: 0x621823
    ctx->pc = 0x13f548u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13f54c:
    // 0x13f54c: 0x10000008
label_13f550:
    if (ctx->pc == 0x13F550u) {
        ctx->pc = 0x13F550u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x13F554u;
        goto label_13f554;
    }
    ctx->pc = 0x13F54Cu;
    {
        const bool branch_taken_0x13f54c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F550u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x13f54c) {
            ctx->pc = 0x13F570u;
            goto label_13f570;
        }
    }
    ctx->pc = 0x13F554u;
label_13f554:
    // 0x13f554: 0x0
    ctx->pc = 0x13f554u;
    // NOP
label_13f558:
    // 0x13f558: 0xae000000
    ctx->pc = 0x13f558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_13f55c:
    // 0x13f55c: 0x10400004
label_13f560:
    if (ctx->pc == 0x13F560u) {
        ctx->pc = 0x13F560u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13F564u;
        goto label_13f564;
    }
    ctx->pc = 0x13F55Cu;
    {
        const bool branch_taken_0x13f55c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F560u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13f55c) {
            ctx->pc = 0x13F570u;
            goto label_13f570;
        }
    }
    ctx->pc = 0x13F564u;
label_13f564:
    // 0x13f564: 0x8e240020
    ctx->pc = 0x13f564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13f568:
    // 0x13f568: 0x40f809
label_13f56c:
    if (ctx->pc == 0x13F56Cu) {
        ctx->pc = 0x13F56Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13F570u;
        goto label_13f570;
    }
    ctx->pc = 0x13F568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F570u);
        ctx->pc = 0x13F56Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F570u; }
            if (ctx->pc != 0x13F570u) { return; }
        }
    }
    ctx->pc = 0x13F570u;
label_13f570:
    // 0x13f570: 0xdfb00000
    ctx->pc = 0x13f570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f574:
    // 0x13f574: 0xdfb10008
    ctx->pc = 0x13f574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f578:
    // 0x13f578: 0xdfb20010
    ctx->pc = 0x13f578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f57c:
    // 0x13f57c: 0xdfb30018
    ctx->pc = 0x13f57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13f580:
    // 0x13f580: 0xdfbf0020
    ctx->pc = 0x13f580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13f584:
    // 0x13f584: 0x804fc9c
label_13f588:
    if (ctx->pc == 0x13F588u) {
        ctx->pc = 0x13F588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13F58Cu;
        goto label_13f58c;
    }
    ctx->pc = 0x13F584u;
    ctx->pc = 0x13F588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13F58Cu;
label_13f58c:
    // 0x13f58c: 0x0
    ctx->pc = 0x13f58cu;
    // NOP
label_13f590:
    // 0x13f590: 0x27bdffe0
    ctx->pc = 0x13f590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13f594:
    // 0x13f594: 0xffb00000
    ctx->pc = 0x13f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f598:
    // 0x13f598: 0xc0802d
    ctx->pc = 0x13f598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f59c:
    // 0x13f59c: 0xffb10008
    ctx->pc = 0x13f59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f5a0:
    // 0x13f5a0: 0xa0882d
    ctx->pc = 0x13f5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f5a4:
    // 0x13f5a4: 0xffb20010
    ctx->pc = 0x13f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13f5a8:
    // 0x13f5a8: 0xffbf0018
    ctx->pc = 0x13f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13f5ac:
    // 0x13f5ac: 0x8e020004
    ctx->pc = 0x13f5acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13f5b0:
    // 0x13f5b0: 0x18400017
label_13f5b4:
    if (ctx->pc == 0x13F5B4u) {
        ctx->pc = 0x13F5B4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F5B8u;
        goto label_13f5b8;
    }
    ctx->pc = 0x13F5B0u;
    {
        const bool branch_taken_0x13f5b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13F5B4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f5b0) {
            ctx->pc = 0x13F610u;
            goto label_13f610;
        }
    }
    ctx->pc = 0x13F5B8u;
label_13f5b8:
    // 0x13f5b8: 0x8e020000
    ctx->pc = 0x13f5b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13f5bc:
    // 0x13f5bc: 0x50400015
label_13f5c0:
    if (ctx->pc == 0x13F5C0u) {
        ctx->pc = 0x13F5C0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13F5C4u;
        goto label_13f5c4;
    }
    ctx->pc = 0x13F5BCu;
    {
        const bool branch_taken_0x13f5bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13f5bc) {
            ctx->pc = 0x13F5C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13F614u;
            goto label_13f614;
        }
    }
    ctx->pc = 0x13F5C4u;
label_13f5c4:
    // 0x13f5c4: 0xc04fc96
label_13f5c8:
    if (ctx->pc == 0x13F5C8u) {
        ctx->pc = 0x13F5CCu;
        goto label_13f5cc;
    }
    ctx->pc = 0x13F5C4u;
    SET_GPR_U32(ctx, 31, 0x13F5CCu);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F5CCu; }
    }
    if (ctx->pc != 0x13F5CCu) { return; }
    ctx->pc = 0x13F5CCu;
label_13f5cc:
    // 0x13f5cc: 0x1220000a
label_13f5d0:
    if (ctx->pc == 0x13F5D0u) {
        ctx->pc = 0x13F5D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13F5D4u;
        goto label_13f5d4;
    }
    ctx->pc = 0x13F5CCu;
    {
        const bool branch_taken_0x13f5cc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F5D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13f5cc) {
            ctx->pc = 0x13F5F8u;
            goto label_13f5f8;
        }
    }
    ctx->pc = 0x13F5D4u;
label_13f5d4:
    // 0x13f5d4: 0x52220009
label_13f5d8:
    if (ctx->pc == 0x13F5D8u) {
        ctx->pc = 0x13F5D8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13F5DCu;
        goto label_13f5dc;
    }
    ctx->pc = 0x13F5D4u;
    {
        const bool branch_taken_0x13f5d4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x13f5d4) {
            ctx->pc = 0x13F5D8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13F5FCu;
            goto label_13f5fc;
        }
    }
    ctx->pc = 0x13F5DCu;
label_13f5dc:
    // 0x13f5dc: 0x8e42001c
    ctx->pc = 0x13f5dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13f5e0:
    // 0x13f5e0: 0xae000000
    ctx->pc = 0x13f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_13f5e4:
    // 0x13f5e4: 0x10400004
label_13f5e8:
    if (ctx->pc == 0x13F5E8u) {
        ctx->pc = 0x13F5E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13F5ECu;
        goto label_13f5ec;
    }
    ctx->pc = 0x13F5E4u;
    {
        const bool branch_taken_0x13f5e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F5E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13f5e4) {
            ctx->pc = 0x13F5F8u;
            goto label_13f5f8;
        }
    }
    ctx->pc = 0x13F5ECu;
label_13f5ec:
    // 0x13f5ec: 0x8e440020
    ctx->pc = 0x13f5ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_13f5f0:
    // 0x13f5f0: 0x40f809
label_13f5f4:
    if (ctx->pc == 0x13F5F4u) {
        ctx->pc = 0x13F5F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13F5F8u;
        goto label_13f5f8;
    }
    ctx->pc = 0x13F5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F5F8u);
        ctx->pc = 0x13F5F4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F5F8u; }
            if (ctx->pc != 0x13F5F8u) { return; }
        }
    }
    ctx->pc = 0x13F5F8u;
label_13f5f8:
    // 0x13f5f8: 0xdfb00000
    ctx->pc = 0x13f5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f5fc:
    // 0x13f5fc: 0xdfb10008
    ctx->pc = 0x13f5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f600:
    // 0x13f600: 0xdfb20010
    ctx->pc = 0x13f600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f604:
    // 0x13f604: 0xdfbf0018
    ctx->pc = 0x13f604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13f608:
    // 0x13f608: 0x804fc9c
label_13f60c:
    if (ctx->pc == 0x13F60Cu) {
        ctx->pc = 0x13F60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13F610u;
        goto label_13f610;
    }
    ctx->pc = 0x13F608u;
    ctx->pc = 0x13F60Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13F610u;
label_13f610:
    // 0x13f610: 0xdfb00000
    ctx->pc = 0x13f610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f614:
    // 0x13f614: 0xdfb10008
    ctx->pc = 0x13f614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f618:
    // 0x13f618: 0xdfb20010
    ctx->pc = 0x13f618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f61c:
    // 0x13f61c: 0xdfbf0018
    ctx->pc = 0x13f61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13f620:
    // 0x13f620: 0x3e00008
label_13f624:
    if (ctx->pc == 0x13F624u) {
        ctx->pc = 0x13F624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13F628u;
        goto label_13f628;
    }
    ctx->pc = 0x13F620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F628u;
label_13f628:
    // 0x13f628: 0x27bdffe0
    ctx->pc = 0x13f628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13f62c:
    // 0x13f62c: 0xffb00000
    ctx->pc = 0x13f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f630:
    // 0x13f630: 0x80802d
    ctx->pc = 0x13f630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f634:
    // 0x13f634: 0xffb10008
    ctx->pc = 0x13f634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f638:
    // 0x13f638: 0xc0882d
    ctx->pc = 0x13f638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f63c:
    // 0x13f63c: 0xffb20010
    ctx->pc = 0x13f63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13f640:
    // 0x13f640: 0xffbf0018
    ctx->pc = 0x13f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13f644:
    // 0x13f644: 0x8e220004
    ctx->pc = 0x13f644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13f648:
    // 0x13f648: 0x1840002f
label_13f64c:
    if (ctx->pc == 0x13F64Cu) {
        ctx->pc = 0x13F64Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F650u;
        goto label_13f650;
    }
    ctx->pc = 0x13F648u;
    {
        const bool branch_taken_0x13f648 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13F64Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f648) {
            ctx->pc = 0x13F708u;
            goto label_13f708;
        }
    }
    ctx->pc = 0x13F650u;
label_13f650:
    // 0x13f650: 0x8e220000
    ctx->pc = 0x13f650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f654:
    // 0x13f654: 0x5040002d
label_13f658:
    if (ctx->pc == 0x13F658u) {
        ctx->pc = 0x13F658u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13F65Cu;
        goto label_13f65c;
    }
    ctx->pc = 0x13F654u;
    {
        const bool branch_taken_0x13f654 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13f654) {
            ctx->pc = 0x13F658u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13F70Cu;
            goto label_13f70c;
        }
    }
    ctx->pc = 0x13F65Cu;
label_13f65c:
    // 0x13f65c: 0xc04fc96
label_13f660:
    if (ctx->pc == 0x13F660u) {
        ctx->pc = 0x13F664u;
        goto label_13f664;
    }
    ctx->pc = 0x13F65Cu;
    SET_GPR_U32(ctx, 31, 0x13F664u);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F664u; }
    }
    if (ctx->pc != 0x13F664u) { return; }
    ctx->pc = 0x13F664u;
label_13f664:
    // 0x13f664: 0x12400014
label_13f668:
    if (ctx->pc == 0x13F668u) {
        ctx->pc = 0x13F668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13F66Cu;
        goto label_13f66c;
    }
    ctx->pc = 0x13F664u;
    {
        const bool branch_taken_0x13f664 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13f664) {
            ctx->pc = 0x13F6B8u;
            goto label_13f6b8;
        }
    }
    ctx->pc = 0x13F66Cu;
label_13f66c:
    // 0x13f66c: 0x5642001a
label_13f670:
    if (ctx->pc == 0x13F670u) {
        ctx->pc = 0x13F670u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x13F674u;
        goto label_13f674;
    }
    ctx->pc = 0x13F66Cu;
    {
        const bool branch_taken_0x13f66c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x13f66c) {
            ctx->pc = 0x13F670u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x13F6D8u;
            goto label_13f6d8;
        }
    }
    ctx->pc = 0x13F674u;
label_13f674:
    // 0x13f674: 0x8e220004
    ctx->pc = 0x13f674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13f678:
    // 0x13f678: 0x8e040010
    ctx->pc = 0x13f678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13f67c:
    // 0x13f67c: 0x8e05000c
    ctx->pc = 0x13f67cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13f680:
    // 0x13f680: 0x822023
    ctx->pc = 0x13f680u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13f684:
    // 0x13f684: 0x8e070018
    ctx->pc = 0x13f684u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_13f688:
    // 0x13f688: 0x28820000
    ctx->pc = 0x13f688u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 0));
label_13f68c:
    // 0x13f68c: 0x8e030014
    ctx->pc = 0x13f68cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_13f690:
    // 0x13f690: 0x2200b
    ctx->pc = 0x13f690u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_13f694:
    // 0x13f694: 0x8e260000
    ctx->pc = 0x13f694u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f698:
    // 0x13f698: 0xae040010
    ctx->pc = 0x13f698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_13f69c:
    // 0x13f69c: 0xc33023
    ctx->pc = 0x13f69cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_13f6a0:
    // 0x13f6a0: 0x8e220004
    ctx->pc = 0x13f6a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13f6a4:
    // 0x13f6a4: 0xa22821
    ctx->pc = 0x13f6a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_13f6a8:
    // 0x13f6a8: 0xe5182a
    ctx->pc = 0x13f6a8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
label_13f6ac:
    // 0x13f6ac: 0xe3280b
    ctx->pc = 0x13f6acu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
label_13f6b0:
    // 0x13f6b0: 0x1086000f
label_13f6b4:
    if (ctx->pc == 0x13F6B4u) {
        ctx->pc = 0x13F6B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x13F6B8u;
        goto label_13f6b8;
    }
    ctx->pc = 0x13F6B0u;
    {
        const bool branch_taken_0x13f6b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        ctx->pc = 0x13F6B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x13f6b0) {
            ctx->pc = 0x13F6F0u;
            goto label_13f6f0;
        }
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0x8e02001c
    ctx->pc = 0x13f6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13f6bc:
    // 0x13f6bc: 0x5040000d
label_13f6c0:
    if (ctx->pc == 0x13F6C0u) {
        ctx->pc = 0x13F6C0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13F6C4u;
        goto label_13f6c4;
    }
    ctx->pc = 0x13F6BCu;
    {
        const bool branch_taken_0x13f6bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13f6bc) {
            ctx->pc = 0x13F6C0u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x13F6F4u;
            goto label_13f6f4;
        }
    }
    ctx->pc = 0x13F6C4u;
label_13f6c4:
    // 0x13f6c4: 0x8e040020
    ctx->pc = 0x13f6c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13f6c8:
    // 0x13f6c8: 0x40f809
label_13f6cc:
    if (ctx->pc == 0x13F6CCu) {
        ctx->pc = 0x13F6CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13F6D0u;
        goto label_13f6d0;
    }
    ctx->pc = 0x13F6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F6D0u);
        ctx->pc = 0x13F6CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F6D0u; }
            if (ctx->pc != 0x13F6D0u) { return; }
        }
    }
    ctx->pc = 0x13F6D0u;
label_13f6d0:
    // 0x13f6d0: 0x10000008
label_13f6d4:
    if (ctx->pc == 0x13F6D4u) {
        ctx->pc = 0x13F6D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13F6D8u;
        goto label_13f6d8;
    }
    ctx->pc = 0x13F6D0u;
    {
        const bool branch_taken_0x13f6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F6D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13f6d0) {
            ctx->pc = 0x13F6F4u;
            goto label_13f6f4;
        }
    }
    ctx->pc = 0x13F6D8u;
label_13f6d8:
    // 0x13f6d8: 0xae200000
    ctx->pc = 0x13f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_13f6dc:
    // 0x13f6dc: 0x10400004
label_13f6e0:
    if (ctx->pc == 0x13F6E0u) {
        ctx->pc = 0x13F6E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13F6E4u;
        goto label_13f6e4;
    }
    ctx->pc = 0x13F6DCu;
    {
        const bool branch_taken_0x13f6dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F6E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13f6dc) {
            ctx->pc = 0x13F6F0u;
            goto label_13f6f0;
        }
    }
    ctx->pc = 0x13F6E4u;
label_13f6e4:
    // 0x13f6e4: 0x8e040020
    ctx->pc = 0x13f6e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13f6e8:
    // 0x13f6e8: 0x40f809
label_13f6ec:
    if (ctx->pc == 0x13F6ECu) {
        ctx->pc = 0x13F6ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13F6F0u;
        goto label_13f6f0;
    }
    ctx->pc = 0x13F6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F6F0u);
        ctx->pc = 0x13F6ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F6F0u; }
            if (ctx->pc != 0x13F6F0u) { return; }
        }
    }
    ctx->pc = 0x13F6F0u;
label_13f6f0:
    // 0x13f6f0: 0xdfb00000
    ctx->pc = 0x13f6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f6f4:
    // 0x13f6f4: 0xdfb10008
    ctx->pc = 0x13f6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f6f8:
    // 0x13f6f8: 0xdfb20010
    ctx->pc = 0x13f6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f6fc:
    // 0x13f6fc: 0xdfbf0018
    ctx->pc = 0x13f6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13f700:
    // 0x13f700: 0x804fc9c
label_13f704:
    if (ctx->pc == 0x13F704u) {
        ctx->pc = 0x13F704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13F708u;
        goto label_13f708;
    }
    ctx->pc = 0x13F700u;
    ctx->pc = 0x13F704u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x13F708u;
label_13f708:
    // 0x13f708: 0xdfb00000
    ctx->pc = 0x13f708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f70c:
    // 0x13f70c: 0xdfb10008
    ctx->pc = 0x13f70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f710:
    // 0x13f710: 0xdfb20010
    ctx->pc = 0x13f710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f714:
    // 0x13f714: 0xdfbf0018
    ctx->pc = 0x13f714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13f718:
    // 0x13f718: 0x3e00008
label_13f71c:
    if (ctx->pc == 0x13F71Cu) {
        ctx->pc = 0x13F71Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13F720u;
        goto label_13f720;
    }
    ctx->pc = 0x13F718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F71Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F720u;
label_13f720:
    // 0x13f720: 0x27bdffd0
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13f724:
    // 0x13f724: 0xffb30018
    ctx->pc = 0x13f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13f728:
    // 0x13f728: 0xa0982d
    ctx->pc = 0x13f728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f72c:
    // 0x13f72c: 0xffb00000
    ctx->pc = 0x13f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13f730:
    // 0x13f730: 0x80802d
    ctx->pc = 0x13f730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f734:
    // 0x13f734: 0xffb10008
    ctx->pc = 0x13f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13f738:
    // 0x13f738: 0x882d
    ctx->pc = 0x13f738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f73c:
    // 0x13f73c: 0xffb20010
    ctx->pc = 0x13f73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13f740:
    // 0x13f740: 0xc0902d
    ctx->pc = 0x13f740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13f744:
    // 0x13f744: 0xffb40020
    ctx->pc = 0x13f744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_13f748:
    // 0x13f748: 0xffbf0028
    ctx->pc = 0x13f748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_13f74c:
    // 0x13f74c: 0xc04fc96
label_13f750:
    if (ctx->pc == 0x13F750u) {
        ctx->pc = 0x13F750u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F754u;
        goto label_13f754;
    }
    ctx->pc = 0x13F74Cu;
    SET_GPR_U32(ctx, 31, 0x13F754u);
    ctx->pc = 0x13F750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F754u; }
    }
    if (ctx->pc != 0x13F754u) { return; }
    ctx->pc = 0x13F754u;
label_13f754:
    // 0x13f754: 0x1260000f
label_13f758:
    if (ctx->pc == 0x13F758u) {
        ctx->pc = 0x13F758u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13F75Cu;
        goto label_13f75c;
    }
    ctx->pc = 0x13F754u;
    {
        const bool branch_taken_0x13f754 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F758u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x13f754) {
            ctx->pc = 0x13F794u;
            goto label_13f794;
        }
    }
    ctx->pc = 0x13F75Cu;
label_13f75c:
    // 0x13f75c: 0x56620008
label_13f760:
    if (ctx->pc == 0x13F760u) {
        ctx->pc = 0x13F760u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x13F764u;
        goto label_13f764;
    }
    ctx->pc = 0x13F75Cu;
    {
        const bool branch_taken_0x13f75c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x13f75c) {
            ctx->pc = 0x13F760u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x13F780u;
            goto label_13f780;
        }
    }
    ctx->pc = 0x13F764u;
label_13f764:
    // 0x13f764: 0x8e04000c
    ctx->pc = 0x13f764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13f768:
    // 0x13f768: 0x92102a
    ctx->pc = 0x13f768u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
label_13f76c:
    // 0x13f76c: 0x10400009
label_13f770:
    if (ctx->pc == 0x13F770u) {
        ctx->pc = 0x13F770u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F774u;
        goto label_13f774;
    }
    ctx->pc = 0x13F76Cu;
    {
        const bool branch_taken_0x13f76c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F770u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f76c) {
            ctx->pc = 0x13F794u;
            goto label_13f794;
        }
    }
    ctx->pc = 0x13F774u;
label_13f774:
    // 0x13f774: 0x10000007
label_13f778:
    if (ctx->pc == 0x13F778u) {
        ctx->pc = 0x13F778u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F77Cu;
        goto label_13f77c;
    }
    ctx->pc = 0x13F774u;
    {
        const bool branch_taken_0x13f774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F778u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f774) {
            ctx->pc = 0x13F794u;
            goto label_13f794;
        }
    }
    ctx->pc = 0x13F77Cu;
label_13f77c:
    // 0x13f77c: 0x0
    ctx->pc = 0x13f77cu;
    // NOP
label_13f780:
    // 0x13f780: 0x10400004
label_13f784:
    if (ctx->pc == 0x13F784u) {
        ctx->pc = 0x13F784u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F788u;
        goto label_13f788;
    }
    ctx->pc = 0x13F780u;
    {
        const bool branch_taken_0x13f780 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13F784u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13f780) {
            ctx->pc = 0x13F794u;
            goto label_13f794;
        }
    }
    ctx->pc = 0x13F788u;
label_13f788:
    // 0x13f788: 0x8e040020
    ctx->pc = 0x13f788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13f78c:
    // 0x13f78c: 0x40f809
label_13f790:
    if (ctx->pc == 0x13F790u) {
        ctx->pc = 0x13F790u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x13F794u;
        goto label_13f794;
    }
    ctx->pc = 0x13F78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13F794u);
        ctx->pc = 0x13F790u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F794u; }
            if (ctx->pc != 0x13F794u) { return; }
        }
    }
    ctx->pc = 0x13F794u;
label_13f794:
    // 0x13f794: 0xc04fc9c
label_13f798:
    if (ctx->pc == 0x13F798u) {
        ctx->pc = 0x13F798u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x13F79Cu;
        goto label_13f79c;
    }
    ctx->pc = 0x13F794u;
    SET_GPR_U32(ctx, 31, 0x13F79Cu);
    ctx->pc = 0x13F798u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x13F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F270_0x13f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F79Cu; }
    }
    if (ctx->pc != 0x13F79Cu) { return; }
    ctx->pc = 0x13F79Cu;
label_13f79c:
    // 0x13f79c: 0x2321026
    ctx->pc = 0x13f79cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_13f7a0:
    // 0x13f7a0: 0xdfb00000
    ctx->pc = 0x13f7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f7a4:
    // 0x13f7a4: 0x2c420001
    ctx->pc = 0x13f7a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_13f7a8:
    // 0x13f7a8: 0xdfb10008
    ctx->pc = 0x13f7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13f7ac:
    // 0x13f7ac: 0xdfb20010
    ctx->pc = 0x13f7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f7b0:
    // 0x13f7b0: 0xdfb30018
    ctx->pc = 0x13f7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13f7b4:
    // 0x13f7b4: 0xdfb40020
    ctx->pc = 0x13f7b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13f7b8:
    // 0x13f7b8: 0xdfbf0028
    ctx->pc = 0x13f7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13f7bc:
    // 0x13f7bc: 0x3e00008
label_13f7c0:
    if (ctx->pc == 0x13F7C0u) {
        ctx->pc = 0x13F7C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13F7C4u;
        goto label_13f7c4;
    }
    ctx->pc = 0x13F7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F7C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F7C4u;
label_13f7c4:
    // 0x13f7c4: 0x0
    ctx->pc = 0x13f7c4u;
    // NOP
label_13f7c8:
    // 0x13f7c8: 0x3e00008
label_13f7cc:
    if (ctx->pc == 0x13F7CCu) {
        ctx->pc = 0x13F7CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x13F7D0u;
        goto label_13f7d0;
    }
    ctx->pc = 0x13F7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F7CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F7D0u;
label_13f7d0:
    // 0x13f7d0: 0x3e00008
label_13f7d4:
    if (ctx->pc == 0x13F7D4u) {
        ctx->pc = 0x13F7D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->pc = 0x13F7D8u;
        goto label_13f7d8;
    }
    ctx->pc = 0x13F7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F7D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F478u: goto label_13f478;
            case 0x13F47Cu: goto label_13f47c;
            case 0x13F480u: goto label_13f480;
            case 0x13F484u: goto label_13f484;
            case 0x13F488u: goto label_13f488;
            case 0x13F48Cu: goto label_13f48c;
            case 0x13F490u: goto label_13f490;
            case 0x13F494u: goto label_13f494;
            case 0x13F498u: goto label_13f498;
            case 0x13F49Cu: goto label_13f49c;
            case 0x13F4A0u: goto label_13f4a0;
            case 0x13F4A4u: goto label_13f4a4;
            case 0x13F4A8u: goto label_13f4a8;
            case 0x13F4ACu: goto label_13f4ac;
            case 0x13F4B0u: goto label_13f4b0;
            case 0x13F4B4u: goto label_13f4b4;
            case 0x13F4B8u: goto label_13f4b8;
            case 0x13F4BCu: goto label_13f4bc;
            case 0x13F4C0u: goto label_13f4c0;
            case 0x13F4C4u: goto label_13f4c4;
            case 0x13F4C8u: goto label_13f4c8;
            case 0x13F4CCu: goto label_13f4cc;
            case 0x13F4D0u: goto label_13f4d0;
            case 0x13F4D4u: goto label_13f4d4;
            case 0x13F4D8u: goto label_13f4d8;
            case 0x13F4DCu: goto label_13f4dc;
            case 0x13F4E0u: goto label_13f4e0;
            case 0x13F4E4u: goto label_13f4e4;
            case 0x13F4E8u: goto label_13f4e8;
            case 0x13F4ECu: goto label_13f4ec;
            case 0x13F4F0u: goto label_13f4f0;
            case 0x13F4F4u: goto label_13f4f4;
            case 0x13F4F8u: goto label_13f4f8;
            case 0x13F4FCu: goto label_13f4fc;
            case 0x13F500u: goto label_13f500;
            case 0x13F504u: goto label_13f504;
            case 0x13F508u: goto label_13f508;
            case 0x13F50Cu: goto label_13f50c;
            case 0x13F510u: goto label_13f510;
            case 0x13F514u: goto label_13f514;
            case 0x13F518u: goto label_13f518;
            case 0x13F51Cu: goto label_13f51c;
            case 0x13F520u: goto label_13f520;
            case 0x13F524u: goto label_13f524;
            case 0x13F528u: goto label_13f528;
            case 0x13F52Cu: goto label_13f52c;
            case 0x13F530u: goto label_13f530;
            case 0x13F534u: goto label_13f534;
            case 0x13F538u: goto label_13f538;
            case 0x13F53Cu: goto label_13f53c;
            case 0x13F540u: goto label_13f540;
            case 0x13F544u: goto label_13f544;
            case 0x13F548u: goto label_13f548;
            case 0x13F54Cu: goto label_13f54c;
            case 0x13F550u: goto label_13f550;
            case 0x13F554u: goto label_13f554;
            case 0x13F558u: goto label_13f558;
            case 0x13F55Cu: goto label_13f55c;
            case 0x13F560u: goto label_13f560;
            case 0x13F564u: goto label_13f564;
            case 0x13F568u: goto label_13f568;
            case 0x13F56Cu: goto label_13f56c;
            case 0x13F570u: goto label_13f570;
            case 0x13F574u: goto label_13f574;
            case 0x13F578u: goto label_13f578;
            case 0x13F57Cu: goto label_13f57c;
            case 0x13F580u: goto label_13f580;
            case 0x13F584u: goto label_13f584;
            case 0x13F588u: goto label_13f588;
            case 0x13F58Cu: goto label_13f58c;
            case 0x13F590u: goto label_13f590;
            case 0x13F594u: goto label_13f594;
            case 0x13F598u: goto label_13f598;
            case 0x13F59Cu: goto label_13f59c;
            case 0x13F5A0u: goto label_13f5a0;
            case 0x13F5A4u: goto label_13f5a4;
            case 0x13F5A8u: goto label_13f5a8;
            case 0x13F5ACu: goto label_13f5ac;
            case 0x13F5B0u: goto label_13f5b0;
            case 0x13F5B4u: goto label_13f5b4;
            case 0x13F5B8u: goto label_13f5b8;
            case 0x13F5BCu: goto label_13f5bc;
            case 0x13F5C0u: goto label_13f5c0;
            case 0x13F5C4u: goto label_13f5c4;
            case 0x13F5C8u: goto label_13f5c8;
            case 0x13F5CCu: goto label_13f5cc;
            case 0x13F5D0u: goto label_13f5d0;
            case 0x13F5D4u: goto label_13f5d4;
            case 0x13F5D8u: goto label_13f5d8;
            case 0x13F5DCu: goto label_13f5dc;
            case 0x13F5E0u: goto label_13f5e0;
            case 0x13F5E4u: goto label_13f5e4;
            case 0x13F5E8u: goto label_13f5e8;
            case 0x13F5ECu: goto label_13f5ec;
            case 0x13F5F0u: goto label_13f5f0;
            case 0x13F5F4u: goto label_13f5f4;
            case 0x13F5F8u: goto label_13f5f8;
            case 0x13F5FCu: goto label_13f5fc;
            case 0x13F600u: goto label_13f600;
            case 0x13F604u: goto label_13f604;
            case 0x13F608u: goto label_13f608;
            case 0x13F60Cu: goto label_13f60c;
            case 0x13F610u: goto label_13f610;
            case 0x13F614u: goto label_13f614;
            case 0x13F618u: goto label_13f618;
            case 0x13F61Cu: goto label_13f61c;
            case 0x13F620u: goto label_13f620;
            case 0x13F624u: goto label_13f624;
            case 0x13F628u: goto label_13f628;
            case 0x13F62Cu: goto label_13f62c;
            case 0x13F630u: goto label_13f630;
            case 0x13F634u: goto label_13f634;
            case 0x13F638u: goto label_13f638;
            case 0x13F63Cu: goto label_13f63c;
            case 0x13F640u: goto label_13f640;
            case 0x13F644u: goto label_13f644;
            case 0x13F648u: goto label_13f648;
            case 0x13F64Cu: goto label_13f64c;
            case 0x13F650u: goto label_13f650;
            case 0x13F654u: goto label_13f654;
            case 0x13F658u: goto label_13f658;
            case 0x13F65Cu: goto label_13f65c;
            case 0x13F660u: goto label_13f660;
            case 0x13F664u: goto label_13f664;
            case 0x13F668u: goto label_13f668;
            case 0x13F66Cu: goto label_13f66c;
            case 0x13F670u: goto label_13f670;
            case 0x13F674u: goto label_13f674;
            case 0x13F678u: goto label_13f678;
            case 0x13F67Cu: goto label_13f67c;
            case 0x13F680u: goto label_13f680;
            case 0x13F684u: goto label_13f684;
            case 0x13F688u: goto label_13f688;
            case 0x13F68Cu: goto label_13f68c;
            case 0x13F690u: goto label_13f690;
            case 0x13F694u: goto label_13f694;
            case 0x13F698u: goto label_13f698;
            case 0x13F69Cu: goto label_13f69c;
            case 0x13F6A0u: goto label_13f6a0;
            case 0x13F6A4u: goto label_13f6a4;
            case 0x13F6A8u: goto label_13f6a8;
            case 0x13F6ACu: goto label_13f6ac;
            case 0x13F6B0u: goto label_13f6b0;
            case 0x13F6B4u: goto label_13f6b4;
            case 0x13F6B8u: goto label_13f6b8;
            case 0x13F6BCu: goto label_13f6bc;
            case 0x13F6C0u: goto label_13f6c0;
            case 0x13F6C4u: goto label_13f6c4;
            case 0x13F6C8u: goto label_13f6c8;
            case 0x13F6CCu: goto label_13f6cc;
            case 0x13F6D0u: goto label_13f6d0;
            case 0x13F6D4u: goto label_13f6d4;
            case 0x13F6D8u: goto label_13f6d8;
            case 0x13F6DCu: goto label_13f6dc;
            case 0x13F6E0u: goto label_13f6e0;
            case 0x13F6E4u: goto label_13f6e4;
            case 0x13F6E8u: goto label_13f6e8;
            case 0x13F6ECu: goto label_13f6ec;
            case 0x13F6F0u: goto label_13f6f0;
            case 0x13F6F4u: goto label_13f6f4;
            case 0x13F6F8u: goto label_13f6f8;
            case 0x13F6FCu: goto label_13f6fc;
            case 0x13F700u: goto label_13f700;
            case 0x13F704u: goto label_13f704;
            case 0x13F708u: goto label_13f708;
            case 0x13F70Cu: goto label_13f70c;
            case 0x13F710u: goto label_13f710;
            case 0x13F714u: goto label_13f714;
            case 0x13F718u: goto label_13f718;
            case 0x13F71Cu: goto label_13f71c;
            case 0x13F720u: goto label_13f720;
            case 0x13F724u: goto label_13f724;
            case 0x13F728u: goto label_13f728;
            case 0x13F72Cu: goto label_13f72c;
            case 0x13F730u: goto label_13f730;
            case 0x13F734u: goto label_13f734;
            case 0x13F738u: goto label_13f738;
            case 0x13F73Cu: goto label_13f73c;
            case 0x13F740u: goto label_13f740;
            case 0x13F744u: goto label_13f744;
            case 0x13F748u: goto label_13f748;
            case 0x13F74Cu: goto label_13f74c;
            case 0x13F750u: goto label_13f750;
            case 0x13F754u: goto label_13f754;
            case 0x13F758u: goto label_13f758;
            case 0x13F75Cu: goto label_13f75c;
            case 0x13F760u: goto label_13f760;
            case 0x13F764u: goto label_13f764;
            case 0x13F768u: goto label_13f768;
            case 0x13F76Cu: goto label_13f76c;
            case 0x13F770u: goto label_13f770;
            case 0x13F774u: goto label_13f774;
            case 0x13F778u: goto label_13f778;
            case 0x13F77Cu: goto label_13f77c;
            case 0x13F780u: goto label_13f780;
            case 0x13F784u: goto label_13f784;
            case 0x13F788u: goto label_13f788;
            case 0x13F78Cu: goto label_13f78c;
            case 0x13F790u: goto label_13f790;
            case 0x13F794u: goto label_13f794;
            case 0x13F798u: goto label_13f798;
            case 0x13F79Cu: goto label_13f79c;
            case 0x13F7A0u: goto label_13f7a0;
            case 0x13F7A4u: goto label_13f7a4;
            case 0x13F7A8u: goto label_13f7a8;
            case 0x13F7ACu: goto label_13f7ac;
            case 0x13F7B0u: goto label_13f7b0;
            case 0x13F7B4u: goto label_13f7b4;
            case 0x13F7B8u: goto label_13f7b8;
            case 0x13F7BCu: goto label_13f7bc;
            case 0x13F7C0u: goto label_13f7c0;
            case 0x13F7C4u: goto label_13f7c4;
            case 0x13F7C8u: goto label_13f7c8;
            case 0x13F7CCu: goto label_13f7cc;
            case 0x13F7D0u: goto label_13f7d0;
            case 0x13F7D4u: goto label_13f7d4;
            case 0x13F7D8u: goto label_13f7d8;
            case 0x13F7DCu: goto label_13f7dc;
            case 0x13F7E0u: goto label_13f7e0;
            case 0x13F7E4u: goto label_13f7e4;
            case 0x13F7E8u: goto label_13f7e8;
            case 0x13F7ECu: goto label_13f7ec;
            case 0x13F7F0u: goto label_13f7f0;
            case 0x13F7F4u: goto label_13f7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F7D8u;
label_13f7d8:
    // 0x13f7d8: 0x27bdfff0
    ctx->pc = 0x13f7d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f7dc:
    // 0x13f7dc: 0x3c040024
    ctx->pc = 0x13f7dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f7e0:
    // 0x13f7e0: 0xffbf0000
    ctx->pc = 0x13f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f7e4:
    // 0x13f7e4: 0x2484da68
    ctx->pc = 0x13f7e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957672));
label_13f7e8:
    // 0x13f7e8: 0xdfbf0000
    ctx->pc = 0x13f7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f7ec:
    // 0x13f7ec: 0x804fca2
label_13f7f0:
    if (ctx->pc == 0x13F7F0u) {
        ctx->pc = 0x13F7F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F7F4u;
        goto label_13f7f4;
    }
    ctx->pc = 0x13F7ECu;
    ctx->pc = 0x13F7F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13F288u;
    entry_13f288_0x13f2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x13F7F4u;
label_13f7f4:
    // 0x13f7f4: 0x0
    ctx->pc = 0x13f7f4u;
    // NOP
}
