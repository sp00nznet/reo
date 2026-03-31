#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013E5C0
// Address: 0x13e5c0 - 0x13ebd8
void sub_0013E5C0_0x13e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13e5c0u;

label_13e5c0:
    // 0x13e5c0: 0x27bdfff0
    ctx->pc = 0x13e5c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13e5c4:
    // 0x13e5c4: 0x2404000d
    ctx->pc = 0x13e5c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13));
label_13e5c8:
    // 0x13e5c8: 0xffbf0000
    ctx->pc = 0x13e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13e5cc:
    // 0x13e5cc: 0x282d
    ctx->pc = 0x13e5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e5d0:
    // 0x13e5d0: 0x302d
    ctx->pc = 0x13e5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e5d4:
    // 0x13e5d4: 0x382d
    ctx->pc = 0x13e5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e5d8:
    // 0x13e5d8: 0xdfbf0000
    ctx->pc = 0x13e5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e5dc:
    // 0x13e5dc: 0x402d
    ctx->pc = 0x13e5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e5e0:
    // 0x13e5e0: 0x804e518
label_13e5e4:
    if (ctx->pc == 0x13E5E4u) {
        ctx->pc = 0x13E5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13E5E8u;
        goto label_13e5e8;
    }
    ctx->pc = 0x13E5E0u;
    ctx->pc = 0x13E5E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139460u;
    sub_00139460_0x139460(rdram, ctx, runtime); return;
    ctx->pc = 0x13E5E8u;
label_13e5e8:
    // 0x13e5e8: 0x27bdffe0
    ctx->pc = 0x13e5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e5ec:
    // 0x13e5ec: 0x3c030022
    ctx->pc = 0x13e5ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_13e5f0:
    // 0x13e5f0: 0xffb00000
    ctx->pc = 0x13e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e5f4:
    // 0x13e5f4: 0x24701468
    ctx->pc = 0x13e5f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 5224));
label_13e5f8:
    // 0x13e5f8: 0x8e020000
    ctx->pc = 0x13e5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13e5fc:
    // 0x13e5fc: 0xffb10008
    ctx->pc = 0x13e5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e600:
    // 0x13e600: 0x24110001
    ctx->pc = 0x13e600u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_13e604:
    // 0x13e604: 0x10510008
label_13e608:
    if (ctx->pc == 0x13E608u) {
        ctx->pc = 0x13E608u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x13E60Cu;
        goto label_13e60c;
    }
    ctx->pc = 0x13E604u;
    {
        const bool branch_taken_0x13e604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x13E608u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x13e604) {
            ctx->pc = 0x13E628u;
            goto label_13e628;
        }
    }
    ctx->pc = 0x13E60Cu;
label_13e60c:
    // 0x13e60c: 0x2404000e
    ctx->pc = 0x13e60cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
label_13e610:
    // 0x13e610: 0x282d
    ctx->pc = 0x13e610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e614:
    // 0x13e614: 0x302d
    ctx->pc = 0x13e614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e618:
    // 0x13e618: 0x382d
    ctx->pc = 0x13e618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e61c:
    // 0x13e61c: 0xc04e518
label_13e620:
    if (ctx->pc == 0x13E620u) {
        ctx->pc = 0x13E620u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E624u;
        goto label_13e624;
    }
    ctx->pc = 0x13E61Cu;
    SET_GPR_U32(ctx, 31, 0x13E624u);
    ctx->pc = 0x13E620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E624u; }
    }
    if (ctx->pc != 0x13E624u) { return; }
    ctx->pc = 0x13E624u;
label_13e624:
    // 0x13e624: 0xae110000
    ctx->pc = 0x13e624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_13e628:
    // 0x13e628: 0xdfb00000
    ctx->pc = 0x13e628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e62c:
    // 0x13e62c: 0xdfb10008
    ctx->pc = 0x13e62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e630:
    // 0x13e630: 0xdfbf0010
    ctx->pc = 0x13e630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e634:
    // 0x13e634: 0x3e00008
label_13e638:
    if (ctx->pc == 0x13E638u) {
        ctx->pc = 0x13E638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13E63Cu;
        goto label_13e63c;
    }
    ctx->pc = 0x13E634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E63Cu;
label_13e63c:
    // 0x13e63c: 0x0
    ctx->pc = 0x13e63cu;
    // NOP
label_13e640:
    // 0x13e640: 0x27bdfff0
    ctx->pc = 0x13e640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13e644:
    // 0x13e644: 0x3c020022
    ctx->pc = 0x13e644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13e648:
    // 0x13e648: 0xffb00000
    ctx->pc = 0x13e648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e64c:
    // 0x13e64c: 0x24501468
    ctx->pc = 0x13e64cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 5224));
label_13e650:
    // 0x13e650: 0x8e030000
    ctx->pc = 0x13e650u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13e654:
    // 0x13e654: 0x10600008
label_13e658:
    if (ctx->pc == 0x13E658u) {
        ctx->pc = 0x13E658u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x13E65Cu;
        goto label_13e65c;
    }
    ctx->pc = 0x13E654u;
    {
        const bool branch_taken_0x13e654 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E658u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x13e654) {
            ctx->pc = 0x13E678u;
            goto label_13e678;
        }
    }
    ctx->pc = 0x13E65Cu;
label_13e65c:
    // 0x13e65c: 0x2404000f
    ctx->pc = 0x13e65cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
label_13e660:
    // 0x13e660: 0x282d
    ctx->pc = 0x13e660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e664:
    // 0x13e664: 0x302d
    ctx->pc = 0x13e664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e668:
    // 0x13e668: 0x382d
    ctx->pc = 0x13e668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e66c:
    // 0x13e66c: 0xc04e518
label_13e670:
    if (ctx->pc == 0x13E670u) {
        ctx->pc = 0x13E670u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E674u;
        goto label_13e674;
    }
    ctx->pc = 0x13E66Cu;
    SET_GPR_U32(ctx, 31, 0x13E674u);
    ctx->pc = 0x13E670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E674u; }
    }
    if (ctx->pc != 0x13E674u) { return; }
    ctx->pc = 0x13E674u;
label_13e674:
    // 0x13e674: 0xae000000
    ctx->pc = 0x13e674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_13e678:
    // 0x13e678: 0xdfb00000
    ctx->pc = 0x13e678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e67c:
    // 0x13e67c: 0xdfbf0008
    ctx->pc = 0x13e67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e680:
    // 0x13e680: 0x3e00008
label_13e684:
    if (ctx->pc == 0x13E684u) {
        ctx->pc = 0x13E684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13E688u;
        goto label_13e688;
    }
    ctx->pc = 0x13E680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E688u;
label_13e688:
    // 0x13e688: 0x8c820048
    ctx->pc = 0x13e688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_13e68c:
    // 0x13e68c: 0x10450009
label_13e690:
    if (ctx->pc == 0x13E690u) {
        ctx->pc = 0x13E690u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        ctx->pc = 0x13E694u;
        goto label_13e694;
    }
    ctx->pc = 0x13E68Cu;
    {
        const bool branch_taken_0x13e68c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x13E690u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x13e68c) {
            ctx->pc = 0x13E6B4u;
            goto label_13e6b4;
        }
    }
    ctx->pc = 0x13E694u;
label_13e694:
    // 0x13e694: 0x8c431468
    ctx->pc = 0x13e694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 5224)));
label_13e698:
    // 0x13e698: 0x14600004
label_13e69c:
    if (ctx->pc == 0x13E69Cu) {
        ctx->pc = 0x13E69Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
        ctx->pc = 0x13E6A0u;
        goto label_13e6a0;
    }
    ctx->pc = 0x13E698u;
    {
        const bool branch_taken_0x13e698 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E69Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
        if (branch_taken_0x13e698) {
            ctx->pc = 0x13E6ACu;
            goto label_13e6ac;
        }
    }
    ctx->pc = 0x13E6A0u;
label_13e6a0:
    // 0x13e6a0: 0x24020001
    ctx->pc = 0x13e6a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_13e6a4:
    // 0x13e6a4: 0x10a20003
label_13e6a8:
    if (ctx->pc == 0x13E6A8u) {
        ctx->pc = 0x13E6A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
        ctx->pc = 0x13E6ACu;
        goto label_13e6ac;
    }
    ctx->pc = 0x13E6A4u;
    {
        const bool branch_taken_0x13e6a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13E6A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 24));
        if (branch_taken_0x13e6a4) {
            ctx->pc = 0x13E6B4u;
            goto label_13e6b4;
        }
    }
    ctx->pc = 0x13E6ACu;
label_13e6ac:
    // 0x13e6ac: 0x21603
    ctx->pc = 0x13e6acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_13e6b0:
    // 0x13e6b0: 0xac820048
    ctx->pc = 0x13e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_13e6b4:
    // 0x13e6b4: 0x3e00008
label_13e6b8:
    if (ctx->pc == 0x13E6B8u) {
        ctx->pc = 0x13E6BCu;
        goto label_13e6bc;
    }
    ctx->pc = 0x13E6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E6BCu;
label_13e6bc:
    // 0x13e6bc: 0x0
    ctx->pc = 0x13e6bcu;
    // NOP
label_13e6c0:
    // 0x13e6c0: 0x27bdffe0
    ctx->pc = 0x13e6c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e6c4:
    // 0x13e6c4: 0x3c030022
    ctx->pc = 0x13e6c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
label_13e6c8:
    // 0x13e6c8: 0xffb00000
    ctx->pc = 0x13e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e6cc:
    // 0x13e6cc: 0x2463146c
    ctx->pc = 0x13e6ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5228));
label_13e6d0:
    // 0x13e6d0: 0xffb10008
    ctx->pc = 0x13e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e6d4:
    // 0x13e6d4: 0xffbf0010
    ctx->pc = 0x13e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13e6d8:
    // 0x13e6d8: 0x8c620000
    ctx->pc = 0x13e6d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e6dc:
    // 0x13e6dc: 0x2442ffff
    ctx->pc = 0x13e6dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_13e6e0:
    // 0x13e6e0: 0x1440001d
label_13e6e4:
    if (ctx->pc == 0x13E6E4u) {
        ctx->pc = 0x13E6E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x13E6E8u;
        goto label_13e6e8;
    }
    ctx->pc = 0x13E6E0u;
    {
        const bool branch_taken_0x13e6e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E6E4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x13e6e0) {
            ctx->pc = 0x13E758u;
            goto label_13e758;
        }
    }
    ctx->pc = 0x13E6E8u;
label_13e6e8:
    // 0x13e6e8: 0x3c100022
    ctx->pc = 0x13e6e8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
label_13e6ec:
    // 0x13e6ec: 0x3c110022
    ctx->pc = 0x13e6ecu;
    SET_GPR_U32(ctx, 17, ((uint32_t)34 << 16));
label_13e6f0:
    // 0x13e6f0: 0x26101454
    ctx->pc = 0x13e6f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 5204));
label_13e6f4:
    // 0x13e6f4: 0x26313e80
    ctx->pc = 0x13e6f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16000));
label_13e6f8:
    // 0x13e6f8: 0xc046e86
label_13e6fc:
    if (ctx->pc == 0x13E6FCu) {
        ctx->pc = 0x13E6FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x13E700u;
        goto label_13e700;
    }
    ctx->pc = 0x13E6F8u;
    SET_GPR_U32(ctx, 31, 0x13E700u);
    ctx->pc = 0x13E6FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x11BA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA18_0x11ba18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E700u; }
    }
    if (ctx->pc != 0x13E700u) { return; }
    ctx->pc = 0x13E700u;
label_13e700:
    // 0x13e700: 0xae000000
    ctx->pc = 0x13e700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_13e704:
    // 0x13e704: 0x3c100022
    ctx->pc = 0x13e704u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
label_13e708:
    // 0x13e708: 0x8e240000
    ctx->pc = 0x13e708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e70c:
    // 0x13e70c: 0xc04e444
label_13e710:
    if (ctx->pc == 0x13E710u) {
        ctx->pc = 0x13E710u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 5236));
        ctx->pc = 0x13E714u;
        goto label_13e714;
    }
    ctx->pc = 0x13E70Cu;
    SET_GPR_U32(ctx, 31, 0x13E714u);
    ctx->pc = 0x13E710u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 5236));
    ctx->pc = 0x139110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139110_0x139110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E714u; }
    }
    if (ctx->pc != 0x13E714u) { return; }
    ctx->pc = 0x13E714u;
label_13e714:
    // 0x13e714: 0x0
    ctx->pc = 0x13e714u;
    // NOP
label_13e718:
    // 0x13e718: 0xc046e86
label_13e71c:
    if (ctx->pc == 0x13E71Cu) {
        ctx->pc = 0x13E71Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x13E720u;
        goto label_13e720;
    }
    ctx->pc = 0x13E718u;
    SET_GPR_U32(ctx, 31, 0x13E720u);
    ctx->pc = 0x13E71Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x11BA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA18_0x11ba18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E720u; }
    }
    if (ctx->pc != 0x13E720u) { return; }
    ctx->pc = 0x13E720u;
label_13e720:
    // 0x13e720: 0xc04f790
label_13e724:
    if (ctx->pc == 0x13E724u) {
        ctx->pc = 0x13E728u;
        goto label_13e728;
    }
    ctx->pc = 0x13E720u;
    SET_GPR_U32(ctx, 31, 0x13E728u);
    ctx->pc = 0x13DE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DE40_0x13de40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E728u; }
    }
    if (ctx->pc != 0x13E728u) { return; }
    ctx->pc = 0x13E728u;
label_13e728:
    // 0x13e728: 0xc04f970
label_13e72c:
    if (ctx->pc == 0x13E72Cu) {
        ctx->pc = 0x13E730u;
        goto label_13e730;
    }
    ctx->pc = 0x13E728u;
    SET_GPR_U32(ctx, 31, 0x13E730u);
    ctx->pc = 0x13E5C0u;
    goto label_13e5c0;
    ctx->pc = 0x13E730u;
label_13e730:
    // 0x13e730: 0xc04e4fa
label_13e734:
    if (ctx->pc == 0x13E734u) {
        ctx->pc = 0x13E738u;
        goto label_13e738;
    }
    ctx->pc = 0x13E730u;
    SET_GPR_U32(ctx, 31, 0x13E738u);
    ctx->pc = 0x1393E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001393E8_0x1393e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E738u; }
    }
    if (ctx->pc != 0x13E738u) { return; }
    ctx->pc = 0x13E738u;
label_13e738:
    // 0x13e738: 0xc050506
label_13e73c:
    if (ctx->pc == 0x13E73Cu) {
        ctx->pc = 0x13E740u;
        goto label_13e740;
    }
    ctx->pc = 0x13E738u;
    SET_GPR_U32(ctx, 31, 0x13E740u);
    ctx->pc = 0x141418u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141418_0x141418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E740u; }
    }
    if (ctx->pc != 0x13E740u) { return; }
    ctx->pc = 0x13E740u;
label_13e740:
    // 0x13e740: 0xdfb00000
    ctx->pc = 0x13e740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e744:
    // 0x13e744: 0xdfb10008
    ctx->pc = 0x13e744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e748:
    // 0x13e748: 0xdfbf0010
    ctx->pc = 0x13e748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e74c:
    // 0x13e74c: 0x80503b6
label_13e750:
    if (ctx->pc == 0x13E750u) {
        ctx->pc = 0x13E750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13E754u;
        goto label_13e754;
    }
    ctx->pc = 0x13E74Cu;
    ctx->pc = 0x13E750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x140ED8u;
    entry_140ed8_0x141268(rdram, ctx, runtime); return;
    ctx->pc = 0x13E754u;
label_13e754:
    // 0x13e754: 0x0
    ctx->pc = 0x13e754u;
    // NOP
label_13e758:
    // 0x13e758: 0xdfb00000
    ctx->pc = 0x13e758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e75c:
    // 0x13e75c: 0xdfb10008
    ctx->pc = 0x13e75cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e760:
    // 0x13e760: 0xdfbf0010
    ctx->pc = 0x13e760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e764:
    // 0x13e764: 0x3e00008
label_13e768:
    if (ctx->pc == 0x13E768u) {
        ctx->pc = 0x13E768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13E76Cu;
        goto label_13e76c;
    }
    ctx->pc = 0x13E764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E76Cu;
label_13e76c:
    // 0x13e76c: 0x0
    ctx->pc = 0x13e76cu;
    // NOP
label_13e770:
    // 0x13e770: 0x27bdffa0
    ctx->pc = 0x13e770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_13e774:
    // 0x13e774: 0x3c020022
    ctx->pc = 0x13e774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13e778:
    // 0x13e778: 0xffb10028
    ctx->pc = 0x13e778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_13e77c:
    // 0x13e77c: 0x882d
    ctx->pc = 0x13e77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e780:
    // 0x13e780: 0xffb20030
    ctx->pc = 0x13e780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_13e784:
    // 0x13e784: 0xa0902d
    ctx->pc = 0x13e784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13e788:
    // 0x13e788: 0xffb30038
    ctx->pc = 0x13e788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_13e78c:
    // 0x13e78c: 0x24533880
    ctx->pc = 0x13e78cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 14464));
label_13e790:
    // 0x13e790: 0xffb50048
    ctx->pc = 0x13e790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_13e794:
    // 0x13e794: 0xffb00020
    ctx->pc = 0x13e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_13e798:
    // 0x13e798: 0xffb40040
    ctx->pc = 0x13e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_13e79c:
    // 0x13e79c: 0xffb60050
    ctx->pc = 0x13e79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_13e7a0:
    // 0x13e7a0: 0xffbf0058
    ctx->pc = 0x13e7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_13e7a4:
    // 0x13e7a4: 0x82620000
    ctx->pc = 0x13e7a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_13e7a8:
    // 0x13e7a8: 0x1040000c
label_13e7ac:
    if (ctx->pc == 0x13E7ACu) {
        ctx->pc = 0x13E7ACu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E7B0u;
        goto label_13e7b0;
    }
    ctx->pc = 0x13E7A8u;
    {
        const bool branch_taken_0x13e7a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E7ACu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e7a8) {
            ctx->pc = 0x13E7DCu;
            goto label_13e7dc;
        }
    }
    ctx->pc = 0x13E7B0u;
label_13e7b0:
    // 0x13e7b0: 0x260202d
    ctx->pc = 0x13e7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e7b4:
    // 0x13e7b4: 0x260182d
    ctx->pc = 0x13e7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e7b8:
    // 0x13e7b8: 0x26310001
    ctx->pc = 0x13e7b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_13e7bc:
    // 0x13e7bc: 0x24840060
    ctx->pc = 0x13e7bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
label_13e7c0:
    // 0x13e7c0: 0x2a220010
    ctx->pc = 0x13e7c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
label_13e7c4:
    // 0x13e7c4: 0x10400005
label_13e7c8:
    if (ctx->pc == 0x13E7C8u) {
        ctx->pc = 0x13E7C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 96));
        ctx->pc = 0x13E7CCu;
        goto label_13e7cc;
    }
    ctx->pc = 0x13E7C4u;
    {
        const bool branch_taken_0x13e7c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E7C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 96));
        if (branch_taken_0x13e7c4) {
            ctx->pc = 0x13E7DCu;
            goto label_13e7dc;
        }
    }
    ctx->pc = 0x13E7CCu;
label_13e7cc:
    // 0x13e7cc: 0x80820000
    ctx->pc = 0x13e7ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_13e7d0:
    // 0x13e7d0: 0x0
    ctx->pc = 0x13e7d0u;
    // NOP
label_13e7d4:
    // 0x13e7d4: 0x1440fff8
label_13e7d8:
    if (ctx->pc == 0x13E7D8u) {
        ctx->pc = 0x13E7D8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E7DCu;
        goto label_13e7dc;
    }
    ctx->pc = 0x13E7D4u;
    {
        const bool branch_taken_0x13e7d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E7D8u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e7d4) {
            ctx->pc = 0x13E7B8u;
            goto label_13e7b8;
        }
    }
    ctx->pc = 0x13E7DCu;
label_13e7dc:
    // 0x13e7dc: 0x24030010
    ctx->pc = 0x13e7dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
label_13e7e0:
    // 0x13e7e0: 0x122300ad
label_13e7e4:
    if (ctx->pc == 0x13E7E4u) {
        ctx->pc = 0x13E7E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E7E8u;
        goto label_13e7e8;
    }
    ctx->pc = 0x13E7E0u;
    {
        const bool branch_taken_0x13e7e0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        ctx->pc = 0x13E7E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e7e0) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13E7E8u;
label_13e7e8:
    // 0x13e7e8: 0x260202d
    ctx->pc = 0x13e7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13e7ec:
    // 0x13e7ec: 0x282d
    ctx->pc = 0x13e7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e7f0:
    // 0x13e7f0: 0x24060060
    ctx->pc = 0x13e7f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 96));
label_13e7f4:
    // 0x13e7f4: 0xc041f1a
label_13e7f8:
    if (ctx->pc == 0x13E7F8u) {
        ctx->pc = 0x13E7F8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E7FCu;
        goto label_13e7fc;
    }
    ctx->pc = 0x13E7F4u;
    SET_GPR_U32(ctx, 31, 0x13E7FCu);
    ctx->pc = 0x13E7F8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E7FCu; }
    }
    if (ctx->pc != 0x13E7FCu) { return; }
    ctx->pc = 0x13E7FCu;
label_13e7fc:
    // 0x13e7fc: 0x1a40001e
label_13e800:
    if (ctx->pc == 0x13E800u) {
        ctx->pc = 0x13E800u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->pc = 0x13E804u;
        goto label_13e804;
    }
    ctx->pc = 0x13E7FCu;
    {
        const bool branch_taken_0x13e7fc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13E800u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        if (branch_taken_0x13e7fc) {
            ctx->pc = 0x13E878u;
            goto label_13e878;
        }
    }
    ctx->pc = 0x13E804u;
label_13e804:
    // 0x13e804: 0x26740008
    ctx->pc = 0x13e804u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 8));
label_13e808:
    // 0x13e808: 0x3c160024
    ctx->pc = 0x13e808u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
label_13e80c:
    // 0x13e80c: 0x280802d
    ctx->pc = 0x13e80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e810:
    // 0x13e810: 0xc04f7c8
label_13e814:
    if (ctx->pc == 0x13E814u) {
        ctx->pc = 0x13E818u;
        goto label_13e818;
    }
    ctx->pc = 0x13E810u;
    SET_GPR_U32(ctx, 31, 0x13E818u);
    ctx->pc = 0x13DF20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF20_0x13df20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E818u; }
    }
    if (ctx->pc != 0x13E818u) { return; }
    ctx->pc = 0x13E818u;
label_13e818:
    // 0x13e818: 0xae020000
    ctx->pc = 0x13e818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_13e81c:
    // 0x13e81c: 0x14400012
label_13e820:
    if (ctx->pc == 0x13E820u) {
        ctx->pc = 0x13E820u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x13E824u;
        goto label_13e824;
    }
    ctx->pc = 0x13E81Cu;
    {
        const bool branch_taken_0x13e81c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E820u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x13e81c) {
            ctx->pc = 0x13E868u;
            goto label_13e868;
        }
    }
    ctx->pc = 0x13E824u;
label_13e824:
    // 0x13e824: 0xc045a12
label_13e828:
    if (ctx->pc == 0x13E828u) {
        ctx->pc = 0x13E828u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294956976));
        ctx->pc = 0x13E82Cu;
        goto label_13e82c;
    }
    ctx->pc = 0x13E824u;
    SET_GPR_U32(ctx, 31, 0x13E82Cu);
    ctx->pc = 0x13E828u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294956976));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E82Cu; }
    }
    if (ctx->pc != 0x13E82Cu) { return; }
    ctx->pc = 0x13E82Cu;
label_13e82c:
    // 0x13e82c: 0x1a40009a
label_13e830:
    if (ctx->pc == 0x13E830u) {
        ctx->pc = 0x13E830u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E834u;
        goto label_13e834;
    }
    ctx->pc = 0x13E82Cu;
    {
        const bool branch_taken_0x13e82c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13E830u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e82c) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13E834u;
label_13e834:
    // 0x13e834: 0x280882d
    ctx->pc = 0x13e834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e838:
    // 0x13e838: 0x240802d
    ctx->pc = 0x13e838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13e83c:
    // 0x13e83c: 0x8e220000
    ctx->pc = 0x13e83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e840:
    // 0x13e840: 0x26310004
    ctx->pc = 0x13e840u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
label_13e844:
    // 0x13e844: 0x10400003
label_13e848:
    if (ctx->pc == 0x13E848u) {
        ctx->pc = 0x13E848u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E84Cu;
        goto label_13e84c;
    }
    ctx->pc = 0x13E844u;
    {
        const bool branch_taken_0x13e844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E848u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e844) {
            ctx->pc = 0x13E854u;
            goto label_13e854;
        }
    }
    ctx->pc = 0x13E84Cu;
label_13e84c:
    // 0x13e84c: 0xc04f7e6
label_13e850:
    if (ctx->pc == 0x13E850u) {
        ctx->pc = 0x13E854u;
        goto label_13e854;
    }
    ctx->pc = 0x13E84Cu;
    SET_GPR_U32(ctx, 31, 0x13E854u);
    ctx->pc = 0x13DF98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF98_0x13df98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E854u; }
    }
    if (ctx->pc != 0x13E854u) { return; }
    ctx->pc = 0x13E854u;
label_13e854:
    // 0x13e854: 0x2610ffff
    ctx->pc = 0x13e854u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_13e858:
    // 0x13e858: 0x5600fff9
label_13e85c:
    if (ctx->pc == 0x13E85Cu) {
        ctx->pc = 0x13E85Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x13E860u;
        goto label_13e860;
    }
    ctx->pc = 0x13E858u;
    {
        const bool branch_taken_0x13e858 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x13e858) {
            ctx->pc = 0x13E85Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x13E840u;
            goto label_13e840;
        }
    }
    ctx->pc = 0x13E860u;
label_13e860:
    // 0x13e860: 0x1000008d
label_13e864:
    if (ctx->pc == 0x13E864u) {
        ctx->pc = 0x13E864u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E868u;
        goto label_13e868;
    }
    ctx->pc = 0x13E860u;
    {
        const bool branch_taken_0x13e860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E864u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e860) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13E868u;
label_13e868:
    // 0x13e868: 0x26310001
    ctx->pc = 0x13e868u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_13e86c:
    // 0x13e86c: 0x232102a
    ctx->pc = 0x13e86cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_13e870:
    // 0x13e870: 0x1440ffe7
label_13e874:
    if (ctx->pc == 0x13E874u) {
        ctx->pc = 0x13E878u;
        goto label_13e878;
    }
    ctx->pc = 0x13E870u;
    {
        const bool branch_taken_0x13e870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13e870) {
            ctx->pc = 0x13E810u;
            goto label_13e810;
        }
    }
    ctx->pc = 0x13E878u;
label_13e878:
    // 0x13e878: 0xafb20000
    ctx->pc = 0x13e878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_13e87c:
    // 0x13e87c: 0x882d
    ctx->pc = 0x13e87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e880:
    // 0x13e880: 0x1a40000b
label_13e884:
    if (ctx->pc == 0x13E884u) {
        ctx->pc = 0x13E884u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x13E888u;
        goto label_13e888;
    }
    ctx->pc = 0x13E880u;
    {
        const bool branch_taken_0x13e880 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13E884u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x13e880) {
            ctx->pc = 0x13E8B0u;
            goto label_13e8b0;
        }
    }
    ctx->pc = 0x13E888u;
label_13e888:
    // 0x13e888: 0x27a60008
    ctx->pc = 0x13e888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
label_13e88c:
    // 0x13e88c: 0x26650008
    ctx->pc = 0x13e88cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 8));
label_13e890:
    // 0x13e890: 0x8ca20000
    ctx->pc = 0x13e890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13e894:
    // 0x13e894: 0x24a50004
    ctx->pc = 0x13e894u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_13e898:
    // 0x13e898: 0x26310001
    ctx->pc = 0x13e898u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_13e89c:
    // 0x13e89c: 0x8c430004
    ctx->pc = 0x13e89cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13e8a0:
    // 0x13e8a0: 0x232202a
    ctx->pc = 0x13e8a0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_13e8a4:
    // 0x13e8a4: 0xacc30000
    ctx->pc = 0x13e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_13e8a8:
    // 0x13e8a8: 0x1480fff9
label_13e8ac:
    if (ctx->pc == 0x13E8ACu) {
        ctx->pc = 0x13E8ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x13E8B0u;
        goto label_13e8b0;
    }
    ctx->pc = 0x13E8A8u;
    {
        const bool branch_taken_0x13e8a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E8ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x13e8a8) {
            ctx->pc = 0x13E890u;
            goto label_13e890;
        }
    }
    ctx->pc = 0x13E8B0u;
label_13e8b0:
    // 0x13e8b0: 0x24040008
    ctx->pc = 0x13e8b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_13e8b4:
    // 0x13e8b4: 0x3a0282d
    ctx->pc = 0x13e8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e8b8:
    // 0x13e8b8: 0x24060004
    ctx->pc = 0x13e8b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_13e8bc:
    // 0x13e8bc: 0x27a70010
    ctx->pc = 0x13e8bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_13e8c0:
    // 0x13e8c0: 0xc04e518
label_13e8c4:
    if (ctx->pc == 0x13E8C4u) {
        ctx->pc = 0x13E8C4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13E8C8u;
        goto label_13e8c8;
    }
    ctx->pc = 0x13E8C0u;
    SET_GPR_U32(ctx, 31, 0x13E8C8u);
    ctx->pc = 0x13E8C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E8C8u; }
    }
    if (ctx->pc != 0x13E8C8u) { return; }
    ctx->pc = 0x13E8C8u;
label_13e8c8:
    // 0x13e8c8: 0x14400007
label_13e8cc:
    if (ctx->pc == 0x13E8CCu) {
        ctx->pc = 0x13E8CCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x13E8D0u;
        goto label_13e8d0;
    }
    ctx->pc = 0x13E8C8u;
    {
        const bool branch_taken_0x13e8c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E8CCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x13e8c8) {
            ctx->pc = 0x13E8E8u;
            goto label_13e8e8;
        }
    }
    ctx->pc = 0x13E8D0u;
label_13e8d0:
    // 0x13e8d0: 0x3c040024
    ctx->pc = 0x13e8d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13e8d4:
    // 0x13e8d4: 0xc045a12
label_13e8d8:
    if (ctx->pc == 0x13E8D8u) {
        ctx->pc = 0x13E8D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957016));
        ctx->pc = 0x13E8DCu;
        goto label_13e8dc;
    }
    ctx->pc = 0x13E8D4u;
    SET_GPR_U32(ctx, 31, 0x13E8DCu);
    ctx->pc = 0x13E8D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957016));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E8DCu; }
    }
    if (ctx->pc != 0x13E8DCu) { return; }
    ctx->pc = 0x13E8DCu;
label_13e8dc:
    // 0x13e8dc: 0x1000006e
label_13e8e0:
    if (ctx->pc == 0x13E8E0u) {
        ctx->pc = 0x13E8E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E8E4u;
        goto label_13e8e4;
    }
    ctx->pc = 0x13E8DCu;
    {
        const bool branch_taken_0x13e8dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E8E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e8dc) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13E8E4u;
label_13e8e4:
    // 0x13e8e4: 0x0
    ctx->pc = 0x13e8e4u;
    // NOP
label_13e8e8:
    // 0x13e8e8: 0x1a400035
label_13e8ec:
    if (ctx->pc == 0x13E8ECu) {
        ctx->pc = 0x13E8ECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E8F0u;
        goto label_13e8f0;
    }
    ctx->pc = 0x13E8E8u;
    {
        const bool branch_taken_0x13e8e8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13E8ECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e8e8) {
            ctx->pc = 0x13E9C0u;
            goto label_13e9c0;
        }
    }
    ctx->pc = 0x13E8F0u;
label_13e8f0:
    // 0x13e8f0: 0x26740008
    ctx->pc = 0x13e8f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 19), 8));
label_13e8f4:
    // 0x13e8f4: 0x3c160024
    ctx->pc = 0x13e8f4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
label_13e8f8:
    // 0x13e8f8: 0x26700010
    ctx->pc = 0x13e8f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 16));
label_13e8fc:
    // 0x13e8fc: 0x111080
    ctx->pc = 0x13e8fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_13e900:
    // 0x13e900: 0x26310001
    ctx->pc = 0x13e900u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_13e904:
    // 0x13e904: 0x2821821
    ctx->pc = 0x13e904u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_13e908:
    // 0x13e908: 0x551021
    ctx->pc = 0x13e908u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_13e90c:
    // 0x13e90c: 0x8c660000
    ctx->pc = 0x13e90cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e910:
    // 0x13e910: 0x8c440000
    ctx->pc = 0x13e910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e914:
    // 0x13e914: 0xc04e2ae
label_13e918:
    if (ctx->pc == 0x13E918u) {
        ctx->pc = 0x13E918u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x13E91Cu;
        goto label_13e91c;
    }
    ctx->pc = 0x13E914u;
    SET_GPR_U32(ctx, 31, 0x13E91Cu);
    ctx->pc = 0x13E918u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->pc = 0x138AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138AB8_0x138ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E91Cu; }
    }
    if (ctx->pc != 0x13E91Cu) { return; }
    ctx->pc = 0x13E91Cu;
label_13e91c:
    // 0x13e91c: 0x232182a
    ctx->pc = 0x13e91cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_13e920:
    // 0x13e920: 0xae020000
    ctx->pc = 0x13e920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_13e924:
    // 0x13e924: 0x14400024
label_13e928:
    if (ctx->pc == 0x13E928u) {
        ctx->pc = 0x13E928u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x13E92Cu;
        goto label_13e92c;
    }
    ctx->pc = 0x13E924u;
    {
        const bool branch_taken_0x13e924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E928u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x13e924) {
            ctx->pc = 0x13E9B8u;
            goto label_13e9b8;
        }
    }
    ctx->pc = 0x13E92Cu;
label_13e92c:
    // 0x13e92c: 0x26c4d800
    ctx->pc = 0x13e92cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294957056));
label_13e930:
    // 0x13e930: 0xc045a12
label_13e934:
    if (ctx->pc == 0x13E934u) {
        ctx->pc = 0x13E934u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E938u;
        goto label_13e938;
    }
    ctx->pc = 0x13E930u;
    SET_GPR_U32(ctx, 31, 0x13E938u);
    ctx->pc = 0x13E934u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E938u; }
    }
    if (ctx->pc != 0x13E938u) { return; }
    ctx->pc = 0x13E938u;
label_13e938:
    // 0x13e938: 0x1a400057
label_13e93c:
    if (ctx->pc == 0x13E93Cu) {
        ctx->pc = 0x13E93Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E940u;
        goto label_13e940;
    }
    ctx->pc = 0x13E938u;
    {
        const bool branch_taken_0x13e938 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13E93Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e938) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13E940u;
label_13e940:
    // 0x13e940: 0x280882d
    ctx->pc = 0x13e940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13e944:
    // 0x13e944: 0x26700010
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 16));
label_13e948:
    // 0x13e948: 0x8e020000
    ctx->pc = 0x13e948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13e94c:
    // 0x13e94c: 0x0
    ctx->pc = 0x13e94cu;
    // NOP
label_13e950:
    // 0x13e950: 0x26100004
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_13e954:
    // 0x13e954: 0x10400003
label_13e958:
    if (ctx->pc == 0x13E958u) {
        ctx->pc = 0x13E958u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E95Cu;
        goto label_13e95c;
    }
    ctx->pc = 0x13E954u;
    {
        const bool branch_taken_0x13e954 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E958u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e954) {
            ctx->pc = 0x13E964u;
            goto label_13e964;
        }
    }
    ctx->pc = 0x13E95Cu;
label_13e95c:
    // 0x13e95c: 0xc04e2ea
label_13e960:
    if (ctx->pc == 0x13E960u) {
        ctx->pc = 0x13E964u;
        goto label_13e964;
    }
    ctx->pc = 0x13E95Cu;
    SET_GPR_U32(ctx, 31, 0x13E964u);
    ctx->pc = 0x138BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138BA8_0x138ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E964u; }
    }
    if (ctx->pc != 0x13E964u) { return; }
    ctx->pc = 0x13E964u;
label_13e964:
    // 0x13e964: 0x8e620020
    ctx->pc = 0x13e964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_13e968:
    // 0x13e968: 0x10400007
label_13e96c:
    if (ctx->pc == 0x13E96Cu) {
        ctx->pc = 0x13E96Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x13E970u;
        goto label_13e970;
    }
    ctx->pc = 0x13E968u;
    {
        const bool branch_taken_0x13e968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E96Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x13e968) {
            ctx->pc = 0x13E988u;
            goto label_13e988;
        }
    }
    ctx->pc = 0x13E970u;
label_13e970:
    // 0x13e970: 0x3a0282d
    ctx->pc = 0x13e970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13e974:
    // 0x13e974: 0x24060001
    ctx->pc = 0x13e974u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_13e978:
    // 0x13e978: 0x382d
    ctx->pc = 0x13e978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e97c:
    // 0x13e97c: 0x402d
    ctx->pc = 0x13e97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e980:
    // 0x13e980: 0xc04e518
label_13e984:
    if (ctx->pc == 0x13E984u) {
        ctx->pc = 0x13E984u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x13E988u;
        goto label_13e988;
    }
    ctx->pc = 0x13E980u;
    SET_GPR_U32(ctx, 31, 0x13E988u);
    ctx->pc = 0x13E984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E988u; }
    }
    if (ctx->pc != 0x13E988u) { return; }
    ctx->pc = 0x13E988u;
label_13e988:
    // 0x13e988: 0x8e240000
    ctx->pc = 0x13e988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e98c:
    // 0x13e98c: 0x10800003
label_13e990:
    if (ctx->pc == 0x13E990u) {
        ctx->pc = 0x13E990u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x13E994u;
        goto label_13e994;
    }
    ctx->pc = 0x13E98Cu;
    {
        const bool branch_taken_0x13e98c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E990u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x13e98c) {
            ctx->pc = 0x13E99Cu;
            goto label_13e99c;
        }
    }
    ctx->pc = 0x13E994u;
label_13e994:
    // 0x13e994: 0xc04f7e6
label_13e998:
    if (ctx->pc == 0x13E998u) {
        ctx->pc = 0x13E99Cu;
        goto label_13e99c;
    }
    ctx->pc = 0x13E994u;
    SET_GPR_U32(ctx, 31, 0x13E99Cu);
    ctx->pc = 0x13DF98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF98_0x13df98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E99Cu; }
    }
    if (ctx->pc != 0x13E99Cu) { return; }
    ctx->pc = 0x13E99Cu;
label_13e99c:
    // 0x13e99c: 0x26b50001
    ctx->pc = 0x13e99cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_13e9a0:
    // 0x13e9a0: 0x2b2102a
    ctx->pc = 0x13e9a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 18)));
label_13e9a4:
    // 0x13e9a4: 0x5440ffea
label_13e9a8:
    if (ctx->pc == 0x13E9A8u) {
        ctx->pc = 0x13E9A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x13E9ACu;
        goto label_13e9ac;
    }
    ctx->pc = 0x13E9A4u;
    {
        const bool branch_taken_0x13e9a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13e9a4) {
            ctx->pc = 0x13E9A8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x13E950u;
            goto label_13e950;
        }
    }
    ctx->pc = 0x13E9ACu;
label_13e9ac:
    // 0x13e9ac: 0x1000003a
label_13e9b0:
    if (ctx->pc == 0x13E9B0u) {
        ctx->pc = 0x13E9B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E9B4u;
        goto label_13e9b4;
    }
    ctx->pc = 0x13E9ACu;
    {
        const bool branch_taken_0x13e9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13E9B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e9ac) {
            ctx->pc = 0x13EA98u;
            goto label_13ea98;
        }
    }
    ctx->pc = 0x13E9B4u;
label_13e9b4:
    // 0x13e9b4: 0x0
    ctx->pc = 0x13e9b4u;
    // NOP
label_13e9b8:
    // 0x13e9b8: 0x1460ffd1
label_13e9bc:
    if (ctx->pc == 0x13E9BCu) {
        ctx->pc = 0x13E9BCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x13E9C0u;
        goto label_13e9c0;
    }
    ctx->pc = 0x13E9B8u;
    {
        const bool branch_taken_0x13e9b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E9BCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x13e9b8) {
            ctx->pc = 0x13E900u;
            goto label_13e900;
        }
    }
    ctx->pc = 0x13E9C0u;
label_13e9c0:
    // 0x13e9c0: 0x1a40000a
label_13e9c4:
    if (ctx->pc == 0x13E9C4u) {
        ctx->pc = 0x13E9C4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13E9C8u;
        goto label_13e9c8;
    }
    ctx->pc = 0x13E9C0u;
    {
        const bool branch_taken_0x13e9c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13E9C4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13e9c0) {
            ctx->pc = 0x13E9ECu;
            goto label_13e9ec;
        }
    }
    ctx->pc = 0x13E9C8u;
label_13e9c8:
    // 0x13e9c8: 0x26650018
    ctx->pc = 0x13e9c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 24));
label_13e9cc:
    // 0x13e9cc: 0x2a0202d
    ctx->pc = 0x13e9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13e9d0:
    // 0x13e9d0: 0x8c830000
    ctx->pc = 0x13e9d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e9d4:
    // 0x13e9d4: 0x24840004
    ctx->pc = 0x13e9d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_13e9d8:
    // 0x13e9d8: 0x26310001
    ctx->pc = 0x13e9d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_13e9dc:
    // 0x13e9dc: 0x232102a
    ctx->pc = 0x13e9dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_13e9e0:
    // 0x13e9e0: 0xaca30000
    ctx->pc = 0x13e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_13e9e4:
    // 0x13e9e4: 0x1440fffa
label_13e9e8:
    if (ctx->pc == 0x13E9E8u) {
        ctx->pc = 0x13E9E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x13E9ECu;
        goto label_13e9ec;
    }
    ctx->pc = 0x13E9E4u;
    {
        const bool branch_taken_0x13e9e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13E9E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x13e9e4) {
            ctx->pc = 0x13E9D0u;
            goto label_13e9d0;
        }
    }
    ctx->pc = 0x13E9ECu;
label_13e9ec:
    // 0x13e9ec: 0xa2600024
    ctx->pc = 0x13e9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 36), (uint8_t)GPR_U32(ctx, 0));
label_13e9f0:
    // 0x13e9f0: 0xa2600025
    ctx->pc = 0x13e9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 37), (uint8_t)GPR_U32(ctx, 0));
label_13e9f4:
    // 0x13e9f4: 0xa2720026
    ctx->pc = 0x13e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 38), (uint8_t)GPR_U32(ctx, 18));
label_13e9f8:
    // 0x13e9f8: 0xa2720027
    ctx->pc = 0x13e9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 39), (uint8_t)GPR_U32(ctx, 18));
label_13e9fc:
    // 0x13e9fc: 0xae600030
    ctx->pc = 0x13e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_13ea00:
    // 0x13ea00: 0xae600034
    ctx->pc = 0x13ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_13ea04:
    // 0x13ea04: 0xae600048
    ctx->pc = 0x13ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
label_13ea08:
    // 0x13ea08: 0xae60004c
    ctx->pc = 0x13ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_13ea0c:
    // 0x13ea0c: 0xa2600053
    ctx->pc = 0x13ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 0));
label_13ea10:
    // 0x13ea10: 0x1a40000c
label_13ea14:
    if (ctx->pc == 0x13EA14u) {
        ctx->pc = 0x13EA14u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x13EA18u;
        goto label_13ea18;
    }
    ctx->pc = 0x13EA10u;
    {
        const bool branch_taken_0x13ea10 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13EA14u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x13ea10) {
            ctx->pc = 0x13EA44u;
            goto label_13ea44;
        }
    }
    ctx->pc = 0x13EA18u;
label_13ea18:
    // 0x13ea18: 0x240882d
    ctx->pc = 0x13ea18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13ea1c:
    // 0x13ea1c: 0x26630040
    ctx->pc = 0x13ea1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 64));
label_13ea20:
    // 0x13ea20: 0x26620038
    ctx->pc = 0x13ea20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 56));
label_13ea24:
    // 0x13ea24: 0x0
    ctx->pc = 0x13ea24u;
    // NOP
label_13ea28:
    // 0x13ea28: 0x2631ffff
    ctx->pc = 0x13ea28u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_13ea2c:
    // 0x13ea2c: 0xac400000
    ctx->pc = 0x13ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_13ea30:
    // 0x13ea30: 0xac600000
    ctx->pc = 0x13ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_13ea34:
    // 0x13ea34: 0x24630004
    ctx->pc = 0x13ea34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_13ea38:
    // 0x13ea38: 0x0
    ctx->pc = 0x13ea38u;
    // NOP
label_13ea3c:
    // 0x13ea3c: 0x1620fffa
label_13ea40:
    if (ctx->pc == 0x13EA40u) {
        ctx->pc = 0x13EA40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x13EA44u;
        goto label_13ea44;
    }
    ctx->pc = 0x13EA3Cu;
    {
        const bool branch_taken_0x13ea3c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13EA40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x13ea3c) {
            ctx->pc = 0x13EA28u;
            goto label_13ea28;
        }
    }
    ctx->pc = 0x13EA44u;
label_13ea44:
    // 0x13ea44: 0x24110001
    ctx->pc = 0x13ea44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_13ea48:
    // 0x13ea48: 0xa2600050
    ctx->pc = 0x13ea48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
label_13ea4c:
    // 0x13ea4c: 0xa2710051
    ctx->pc = 0x13ea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 17));
label_13ea50:
    // 0x13ea50: 0xae600054
    ctx->pc = 0x13ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_13ea54:
    // 0x13ea54: 0x8ea40000
    ctx->pc = 0x13ea54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_13ea58:
    // 0x13ea58: 0x8c830000
    ctx->pc = 0x13ea58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ea5c:
    // 0x13ea5c: 0x8c620024
    ctx->pc = 0x13ea5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13ea60:
    // 0x13ea60: 0x40f809
label_13ea64:
    if (ctx->pc == 0x13EA64u) {
        ctx->pc = 0x13EA64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13EA68u;
        goto label_13ea68;
    }
    ctx->pc = 0x13EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EA68u);
        ctx->pc = 0x13EA64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EA68u; }
            if (ctx->pc != 0x13EA68u) { return; }
        }
    }
    ctx->pc = 0x13EA68u;
label_13ea68:
    // 0x13ea68: 0x8ea40000
    ctx->pc = 0x13ea68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_13ea6c:
    // 0x13ea6c: 0x40802d
    ctx->pc = 0x13ea6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ea70:
    // 0x13ea70: 0x8c830000
    ctx->pc = 0x13ea70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ea74:
    // 0x13ea74: 0x8c620024
    ctx->pc = 0x13ea74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13ea78:
    // 0x13ea78: 0x40f809
label_13ea7c:
    if (ctx->pc == 0x13EA7Cu) {
        ctx->pc = 0x13EA7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EA80u;
        goto label_13ea80;
    }
    ctx->pc = 0x13EA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EA80u);
        ctx->pc = 0x13EA7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EA80u; }
            if (ctx->pc != 0x13EA80u) { return; }
        }
    }
    ctx->pc = 0x13EA80u;
label_13ea80:
    // 0x13ea80: 0x24034000
    ctx->pc = 0x13ea80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
label_13ea84:
    // 0x13ea84: 0x2028021
    ctx->pc = 0x13ea84u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13ea88:
    // 0x13ea88: 0x260102d
    ctx->pc = 0x13ea88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13ea8c:
    // 0x13ea8c: 0xae700058
    ctx->pc = 0x13ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_13ea90:
    // 0x13ea90: 0xae63005c
    ctx->pc = 0x13ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
label_13ea94:
    // 0x13ea94: 0xa2710000
    ctx->pc = 0x13ea94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
label_13ea98:
    // 0x13ea98: 0xdfb00020
    ctx->pc = 0x13ea98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13ea9c:
    // 0x13ea9c: 0xdfb10028
    ctx->pc = 0x13ea9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13eaa0:
    // 0x13eaa0: 0xdfb20030
    ctx->pc = 0x13eaa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13eaa4:
    // 0x13eaa4: 0xdfb30038
    ctx->pc = 0x13eaa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_13eaa8:
    // 0x13eaa8: 0xdfb40040
    ctx->pc = 0x13eaa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13eaac:
    // 0x13eaac: 0xdfb50048
    ctx->pc = 0x13eaacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_13eab0:
    // 0x13eab0: 0xdfb60050
    ctx->pc = 0x13eab0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13eab4:
    // 0x13eab4: 0xdfbf0058
    ctx->pc = 0x13eab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_13eab8:
    // 0x13eab8: 0x3e00008
label_13eabc:
    if (ctx->pc == 0x13EABCu) {
        ctx->pc = 0x13EABCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x13EAC0u;
        goto label_13eac0;
    }
    ctx->pc = 0x13EAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EABCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EAC0u;
label_13eac0:
    // 0x13eac0: 0x27bdffd0
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_13eac4:
    // 0x13eac4: 0xffb10018
    ctx->pc = 0x13eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13eac8:
    // 0x13eac8: 0x80882d
    ctx->pc = 0x13eac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13eacc:
    // 0x13eacc: 0xffb20020
    ctx->pc = 0x13eaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13ead0:
    // 0x13ead0: 0xffb00010
    ctx->pc = 0x13ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_13ead4:
    // 0x13ead4: 0xffbf0028
    ctx->pc = 0x13ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_13ead8:
    // 0x13ead8: 0x8e230004
    ctx->pc = 0x13ead8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13eadc:
    // 0x13eadc: 0x1860000d
label_13eae0:
    if (ctx->pc == 0x13EAE0u) {
        ctx->pc = 0x13EAE0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EAE4u;
        goto label_13eae4;
    }
    ctx->pc = 0x13EADCu;
    {
        const bool branch_taken_0x13eadc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13EAE0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13eadc) {
            ctx->pc = 0x13EB14u;
            goto label_13eb14;
        }
    }
    ctx->pc = 0x13EAE4u;
label_13eae4:
    // 0x13eae4: 0x26300010
    ctx->pc = 0x13eae4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
label_13eae8:
    // 0x13eae8: 0x8e040000
    ctx->pc = 0x13eae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13eaec:
    // 0x13eaec: 0x0
    ctx->pc = 0x13eaecu;
    // NOP
label_13eaf0:
    // 0x13eaf0: 0x10800004
label_13eaf4:
    if (ctx->pc == 0x13EAF4u) {
        ctx->pc = 0x13EAF4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x13EAF8u;
        goto label_13eaf8;
    }
    ctx->pc = 0x13EAF0u;
    {
        const bool branch_taken_0x13eaf0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13EAF4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x13eaf0) {
            ctx->pc = 0x13EB04u;
            goto label_13eb04;
        }
    }
    ctx->pc = 0x13EAF8u;
label_13eaf8:
    // 0x13eaf8: 0xc04e2ea
label_13eafc:
    if (ctx->pc == 0x13EAFCu) {
        ctx->pc = 0x13EB00u;
        goto label_13eb00;
    }
    ctx->pc = 0x13EAF8u;
    SET_GPR_U32(ctx, 31, 0x13EB00u);
    ctx->pc = 0x138BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138BA8_0x138ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB00u; }
    }
    if (ctx->pc != 0x13EB00u) { return; }
    ctx->pc = 0x13EB00u;
label_13eb00:
    // 0x13eb00: 0x8e230004
    ctx->pc = 0x13eb00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13eb04:
    // 0x13eb04: 0x26520001
    ctx->pc = 0x13eb04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_13eb08:
    // 0x13eb08: 0x243102a
    ctx->pc = 0x13eb08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
label_13eb0c:
    // 0x13eb0c: 0x5440fff8
label_13eb10:
    if (ctx->pc == 0x13EB10u) {
        ctx->pc = 0x13EB10u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x13EB14u;
        goto label_13eb14;
    }
    ctx->pc = 0x13EB0Cu;
    {
        const bool branch_taken_0x13eb0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13eb0c) {
            ctx->pc = 0x13EB10u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x13EAF0u;
            goto label_13eaf0;
        }
    }
    ctx->pc = 0x13EB14u;
label_13eb14:
    // 0x13eb14: 0x8e220020
    ctx->pc = 0x13eb14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13eb18:
    // 0x13eb18: 0x24040009
    ctx->pc = 0x13eb18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
label_13eb1c:
    // 0x13eb1c: 0x3a0282d
    ctx->pc = 0x13eb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13eb20:
    // 0x13eb20: 0x24060001
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_13eb24:
    // 0x13eb24: 0x382d
    ctx->pc = 0x13eb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13eb28:
    // 0x13eb28: 0x402d
    ctx->pc = 0x13eb28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13eb2c:
    // 0x13eb2c: 0xc04e518
label_13eb30:
    if (ctx->pc == 0x13EB30u) {
        ctx->pc = 0x13EB30u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x13EB34u;
        goto label_13eb34;
    }
    ctx->pc = 0x13EB2Cu;
    SET_GPR_U32(ctx, 31, 0x13EB34u);
    ctx->pc = 0x13EB30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB34u; }
    }
    if (ctx->pc != 0x13EB34u) { return; }
    ctx->pc = 0x13EB34u;
label_13eb34:
    // 0x13eb34: 0x8e230004
    ctx->pc = 0x13eb34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13eb38:
    // 0x13eb38: 0x1860000c
label_13eb3c:
    if (ctx->pc == 0x13EB3Cu) {
        ctx->pc = 0x13EB3Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EB40u;
        goto label_13eb40;
    }
    ctx->pc = 0x13EB38u;
    {
        const bool branch_taken_0x13eb38 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13EB3Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13eb38) {
            ctx->pc = 0x13EB6Cu;
            goto label_13eb6c;
        }
    }
    ctx->pc = 0x13EB40u;
label_13eb40:
    // 0x13eb40: 0x26300008
    ctx->pc = 0x13eb40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 8));
label_13eb44:
    // 0x13eb44: 0x8e040000
    ctx->pc = 0x13eb44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13eb48:
    // 0x13eb48: 0x10800004
label_13eb4c:
    if (ctx->pc == 0x13EB4Cu) {
        ctx->pc = 0x13EB4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x13EB50u;
        goto label_13eb50;
    }
    ctx->pc = 0x13EB48u;
    {
        const bool branch_taken_0x13eb48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13EB4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x13eb48) {
            ctx->pc = 0x13EB5Cu;
            goto label_13eb5c;
        }
    }
    ctx->pc = 0x13EB50u;
label_13eb50:
    // 0x13eb50: 0xc04f7e6
label_13eb54:
    if (ctx->pc == 0x13EB54u) {
        ctx->pc = 0x13EB58u;
        goto label_13eb58;
    }
    ctx->pc = 0x13EB50u;
    SET_GPR_U32(ctx, 31, 0x13EB58u);
    ctx->pc = 0x13DF98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF98_0x13df98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB58u; }
    }
    if (ctx->pc != 0x13EB58u) { return; }
    ctx->pc = 0x13EB58u;
label_13eb58:
    // 0x13eb58: 0x8e230004
    ctx->pc = 0x13eb58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13eb5c:
    // 0x13eb5c: 0x26520001
    ctx->pc = 0x13eb5cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_13eb60:
    // 0x13eb60: 0x243102a
    ctx->pc = 0x13eb60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
label_13eb64:
    // 0x13eb64: 0x5440fff8
label_13eb68:
    if (ctx->pc == 0x13EB68u) {
        ctx->pc = 0x13EB68u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x13EB6Cu;
        goto label_13eb6c;
    }
    ctx->pc = 0x13EB64u;
    {
        const bool branch_taken_0x13eb64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13eb64) {
            ctx->pc = 0x13EB68u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x13EB48u;
            goto label_13eb48;
        }
    }
    ctx->pc = 0x13EB6Cu;
label_13eb6c:
    // 0x13eb6c: 0xa2200000
    ctx->pc = 0x13eb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_13eb70:
    // 0x13eb70: 0xdfb00010
    ctx->pc = 0x13eb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13eb74:
    // 0x13eb74: 0xdfb10018
    ctx->pc = 0x13eb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13eb78:
    // 0x13eb78: 0xdfb20020
    ctx->pc = 0x13eb78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13eb7c:
    // 0x13eb7c: 0xdfbf0028
    ctx->pc = 0x13eb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13eb80:
    // 0x13eb80: 0x3e00008
label_13eb84:
    if (ctx->pc == 0x13EB84u) {
        ctx->pc = 0x13EB84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13EB88u;
        goto label_13eb88;
    }
    ctx->pc = 0x13EB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E5C0u: goto label_13e5c0;
            case 0x13E5C4u: goto label_13e5c4;
            case 0x13E5C8u: goto label_13e5c8;
            case 0x13E5CCu: goto label_13e5cc;
            case 0x13E5D0u: goto label_13e5d0;
            case 0x13E5D4u: goto label_13e5d4;
            case 0x13E5D8u: goto label_13e5d8;
            case 0x13E5DCu: goto label_13e5dc;
            case 0x13E5E0u: goto label_13e5e0;
            case 0x13E5E4u: goto label_13e5e4;
            case 0x13E5E8u: goto label_13e5e8;
            case 0x13E5ECu: goto label_13e5ec;
            case 0x13E5F0u: goto label_13e5f0;
            case 0x13E5F4u: goto label_13e5f4;
            case 0x13E5F8u: goto label_13e5f8;
            case 0x13E5FCu: goto label_13e5fc;
            case 0x13E600u: goto label_13e600;
            case 0x13E604u: goto label_13e604;
            case 0x13E608u: goto label_13e608;
            case 0x13E60Cu: goto label_13e60c;
            case 0x13E610u: goto label_13e610;
            case 0x13E614u: goto label_13e614;
            case 0x13E618u: goto label_13e618;
            case 0x13E61Cu: goto label_13e61c;
            case 0x13E620u: goto label_13e620;
            case 0x13E624u: goto label_13e624;
            case 0x13E628u: goto label_13e628;
            case 0x13E62Cu: goto label_13e62c;
            case 0x13E630u: goto label_13e630;
            case 0x13E634u: goto label_13e634;
            case 0x13E638u: goto label_13e638;
            case 0x13E63Cu: goto label_13e63c;
            case 0x13E640u: goto label_13e640;
            case 0x13E644u: goto label_13e644;
            case 0x13E648u: goto label_13e648;
            case 0x13E64Cu: goto label_13e64c;
            case 0x13E650u: goto label_13e650;
            case 0x13E654u: goto label_13e654;
            case 0x13E658u: goto label_13e658;
            case 0x13E65Cu: goto label_13e65c;
            case 0x13E660u: goto label_13e660;
            case 0x13E664u: goto label_13e664;
            case 0x13E668u: goto label_13e668;
            case 0x13E66Cu: goto label_13e66c;
            case 0x13E670u: goto label_13e670;
            case 0x13E674u: goto label_13e674;
            case 0x13E678u: goto label_13e678;
            case 0x13E67Cu: goto label_13e67c;
            case 0x13E680u: goto label_13e680;
            case 0x13E684u: goto label_13e684;
            case 0x13E688u: goto label_13e688;
            case 0x13E68Cu: goto label_13e68c;
            case 0x13E690u: goto label_13e690;
            case 0x13E694u: goto label_13e694;
            case 0x13E698u: goto label_13e698;
            case 0x13E69Cu: goto label_13e69c;
            case 0x13E6A0u: goto label_13e6a0;
            case 0x13E6A4u: goto label_13e6a4;
            case 0x13E6A8u: goto label_13e6a8;
            case 0x13E6ACu: goto label_13e6ac;
            case 0x13E6B0u: goto label_13e6b0;
            case 0x13E6B4u: goto label_13e6b4;
            case 0x13E6B8u: goto label_13e6b8;
            case 0x13E6BCu: goto label_13e6bc;
            case 0x13E6C0u: goto label_13e6c0;
            case 0x13E6C4u: goto label_13e6c4;
            case 0x13E6C8u: goto label_13e6c8;
            case 0x13E6CCu: goto label_13e6cc;
            case 0x13E6D0u: goto label_13e6d0;
            case 0x13E6D4u: goto label_13e6d4;
            case 0x13E6D8u: goto label_13e6d8;
            case 0x13E6DCu: goto label_13e6dc;
            case 0x13E6E0u: goto label_13e6e0;
            case 0x13E6E4u: goto label_13e6e4;
            case 0x13E6E8u: goto label_13e6e8;
            case 0x13E6ECu: goto label_13e6ec;
            case 0x13E6F0u: goto label_13e6f0;
            case 0x13E6F4u: goto label_13e6f4;
            case 0x13E6F8u: goto label_13e6f8;
            case 0x13E6FCu: goto label_13e6fc;
            case 0x13E700u: goto label_13e700;
            case 0x13E704u: goto label_13e704;
            case 0x13E708u: goto label_13e708;
            case 0x13E70Cu: goto label_13e70c;
            case 0x13E710u: goto label_13e710;
            case 0x13E714u: goto label_13e714;
            case 0x13E718u: goto label_13e718;
            case 0x13E71Cu: goto label_13e71c;
            case 0x13E720u: goto label_13e720;
            case 0x13E724u: goto label_13e724;
            case 0x13E728u: goto label_13e728;
            case 0x13E72Cu: goto label_13e72c;
            case 0x13E730u: goto label_13e730;
            case 0x13E734u: goto label_13e734;
            case 0x13E738u: goto label_13e738;
            case 0x13E73Cu: goto label_13e73c;
            case 0x13E740u: goto label_13e740;
            case 0x13E744u: goto label_13e744;
            case 0x13E748u: goto label_13e748;
            case 0x13E74Cu: goto label_13e74c;
            case 0x13E750u: goto label_13e750;
            case 0x13E754u: goto label_13e754;
            case 0x13E758u: goto label_13e758;
            case 0x13E75Cu: goto label_13e75c;
            case 0x13E760u: goto label_13e760;
            case 0x13E764u: goto label_13e764;
            case 0x13E768u: goto label_13e768;
            case 0x13E76Cu: goto label_13e76c;
            case 0x13E770u: goto label_13e770;
            case 0x13E774u: goto label_13e774;
            case 0x13E778u: goto label_13e778;
            case 0x13E77Cu: goto label_13e77c;
            case 0x13E780u: goto label_13e780;
            case 0x13E784u: goto label_13e784;
            case 0x13E788u: goto label_13e788;
            case 0x13E78Cu: goto label_13e78c;
            case 0x13E790u: goto label_13e790;
            case 0x13E794u: goto label_13e794;
            case 0x13E798u: goto label_13e798;
            case 0x13E79Cu: goto label_13e79c;
            case 0x13E7A0u: goto label_13e7a0;
            case 0x13E7A4u: goto label_13e7a4;
            case 0x13E7A8u: goto label_13e7a8;
            case 0x13E7ACu: goto label_13e7ac;
            case 0x13E7B0u: goto label_13e7b0;
            case 0x13E7B4u: goto label_13e7b4;
            case 0x13E7B8u: goto label_13e7b8;
            case 0x13E7BCu: goto label_13e7bc;
            case 0x13E7C0u: goto label_13e7c0;
            case 0x13E7C4u: goto label_13e7c4;
            case 0x13E7C8u: goto label_13e7c8;
            case 0x13E7CCu: goto label_13e7cc;
            case 0x13E7D0u: goto label_13e7d0;
            case 0x13E7D4u: goto label_13e7d4;
            case 0x13E7D8u: goto label_13e7d8;
            case 0x13E7DCu: goto label_13e7dc;
            case 0x13E7E0u: goto label_13e7e0;
            case 0x13E7E4u: goto label_13e7e4;
            case 0x13E7E8u: goto label_13e7e8;
            case 0x13E7ECu: goto label_13e7ec;
            case 0x13E7F0u: goto label_13e7f0;
            case 0x13E7F4u: goto label_13e7f4;
            case 0x13E7F8u: goto label_13e7f8;
            case 0x13E7FCu: goto label_13e7fc;
            case 0x13E800u: goto label_13e800;
            case 0x13E804u: goto label_13e804;
            case 0x13E808u: goto label_13e808;
            case 0x13E80Cu: goto label_13e80c;
            case 0x13E810u: goto label_13e810;
            case 0x13E814u: goto label_13e814;
            case 0x13E818u: goto label_13e818;
            case 0x13E81Cu: goto label_13e81c;
            case 0x13E820u: goto label_13e820;
            case 0x13E824u: goto label_13e824;
            case 0x13E828u: goto label_13e828;
            case 0x13E82Cu: goto label_13e82c;
            case 0x13E830u: goto label_13e830;
            case 0x13E834u: goto label_13e834;
            case 0x13E838u: goto label_13e838;
            case 0x13E83Cu: goto label_13e83c;
            case 0x13E840u: goto label_13e840;
            case 0x13E844u: goto label_13e844;
            case 0x13E848u: goto label_13e848;
            case 0x13E84Cu: goto label_13e84c;
            case 0x13E850u: goto label_13e850;
            case 0x13E854u: goto label_13e854;
            case 0x13E858u: goto label_13e858;
            case 0x13E85Cu: goto label_13e85c;
            case 0x13E860u: goto label_13e860;
            case 0x13E864u: goto label_13e864;
            case 0x13E868u: goto label_13e868;
            case 0x13E86Cu: goto label_13e86c;
            case 0x13E870u: goto label_13e870;
            case 0x13E874u: goto label_13e874;
            case 0x13E878u: goto label_13e878;
            case 0x13E87Cu: goto label_13e87c;
            case 0x13E880u: goto label_13e880;
            case 0x13E884u: goto label_13e884;
            case 0x13E888u: goto label_13e888;
            case 0x13E88Cu: goto label_13e88c;
            case 0x13E890u: goto label_13e890;
            case 0x13E894u: goto label_13e894;
            case 0x13E898u: goto label_13e898;
            case 0x13E89Cu: goto label_13e89c;
            case 0x13E8A0u: goto label_13e8a0;
            case 0x13E8A4u: goto label_13e8a4;
            case 0x13E8A8u: goto label_13e8a8;
            case 0x13E8ACu: goto label_13e8ac;
            case 0x13E8B0u: goto label_13e8b0;
            case 0x13E8B4u: goto label_13e8b4;
            case 0x13E8B8u: goto label_13e8b8;
            case 0x13E8BCu: goto label_13e8bc;
            case 0x13E8C0u: goto label_13e8c0;
            case 0x13E8C4u: goto label_13e8c4;
            case 0x13E8C8u: goto label_13e8c8;
            case 0x13E8CCu: goto label_13e8cc;
            case 0x13E8D0u: goto label_13e8d0;
            case 0x13E8D4u: goto label_13e8d4;
            case 0x13E8D8u: goto label_13e8d8;
            case 0x13E8DCu: goto label_13e8dc;
            case 0x13E8E0u: goto label_13e8e0;
            case 0x13E8E4u: goto label_13e8e4;
            case 0x13E8E8u: goto label_13e8e8;
            case 0x13E8ECu: goto label_13e8ec;
            case 0x13E8F0u: goto label_13e8f0;
            case 0x13E8F4u: goto label_13e8f4;
            case 0x13E8F8u: goto label_13e8f8;
            case 0x13E8FCu: goto label_13e8fc;
            case 0x13E900u: goto label_13e900;
            case 0x13E904u: goto label_13e904;
            case 0x13E908u: goto label_13e908;
            case 0x13E90Cu: goto label_13e90c;
            case 0x13E910u: goto label_13e910;
            case 0x13E914u: goto label_13e914;
            case 0x13E918u: goto label_13e918;
            case 0x13E91Cu: goto label_13e91c;
            case 0x13E920u: goto label_13e920;
            case 0x13E924u: goto label_13e924;
            case 0x13E928u: goto label_13e928;
            case 0x13E92Cu: goto label_13e92c;
            case 0x13E930u: goto label_13e930;
            case 0x13E934u: goto label_13e934;
            case 0x13E938u: goto label_13e938;
            case 0x13E93Cu: goto label_13e93c;
            case 0x13E940u: goto label_13e940;
            case 0x13E944u: goto label_13e944;
            case 0x13E948u: goto label_13e948;
            case 0x13E94Cu: goto label_13e94c;
            case 0x13E950u: goto label_13e950;
            case 0x13E954u: goto label_13e954;
            case 0x13E958u: goto label_13e958;
            case 0x13E95Cu: goto label_13e95c;
            case 0x13E960u: goto label_13e960;
            case 0x13E964u: goto label_13e964;
            case 0x13E968u: goto label_13e968;
            case 0x13E96Cu: goto label_13e96c;
            case 0x13E970u: goto label_13e970;
            case 0x13E974u: goto label_13e974;
            case 0x13E978u: goto label_13e978;
            case 0x13E97Cu: goto label_13e97c;
            case 0x13E980u: goto label_13e980;
            case 0x13E984u: goto label_13e984;
            case 0x13E988u: goto label_13e988;
            case 0x13E98Cu: goto label_13e98c;
            case 0x13E990u: goto label_13e990;
            case 0x13E994u: goto label_13e994;
            case 0x13E998u: goto label_13e998;
            case 0x13E99Cu: goto label_13e99c;
            case 0x13E9A0u: goto label_13e9a0;
            case 0x13E9A4u: goto label_13e9a4;
            case 0x13E9A8u: goto label_13e9a8;
            case 0x13E9ACu: goto label_13e9ac;
            case 0x13E9B0u: goto label_13e9b0;
            case 0x13E9B4u: goto label_13e9b4;
            case 0x13E9B8u: goto label_13e9b8;
            case 0x13E9BCu: goto label_13e9bc;
            case 0x13E9C0u: goto label_13e9c0;
            case 0x13E9C4u: goto label_13e9c4;
            case 0x13E9C8u: goto label_13e9c8;
            case 0x13E9CCu: goto label_13e9cc;
            case 0x13E9D0u: goto label_13e9d0;
            case 0x13E9D4u: goto label_13e9d4;
            case 0x13E9D8u: goto label_13e9d8;
            case 0x13E9DCu: goto label_13e9dc;
            case 0x13E9E0u: goto label_13e9e0;
            case 0x13E9E4u: goto label_13e9e4;
            case 0x13E9E8u: goto label_13e9e8;
            case 0x13E9ECu: goto label_13e9ec;
            case 0x13E9F0u: goto label_13e9f0;
            case 0x13E9F4u: goto label_13e9f4;
            case 0x13E9F8u: goto label_13e9f8;
            case 0x13E9FCu: goto label_13e9fc;
            case 0x13EA00u: goto label_13ea00;
            case 0x13EA04u: goto label_13ea04;
            case 0x13EA08u: goto label_13ea08;
            case 0x13EA0Cu: goto label_13ea0c;
            case 0x13EA10u: goto label_13ea10;
            case 0x13EA14u: goto label_13ea14;
            case 0x13EA18u: goto label_13ea18;
            case 0x13EA1Cu: goto label_13ea1c;
            case 0x13EA20u: goto label_13ea20;
            case 0x13EA24u: goto label_13ea24;
            case 0x13EA28u: goto label_13ea28;
            case 0x13EA2Cu: goto label_13ea2c;
            case 0x13EA30u: goto label_13ea30;
            case 0x13EA34u: goto label_13ea34;
            case 0x13EA38u: goto label_13ea38;
            case 0x13EA3Cu: goto label_13ea3c;
            case 0x13EA40u: goto label_13ea40;
            case 0x13EA44u: goto label_13ea44;
            case 0x13EA48u: goto label_13ea48;
            case 0x13EA4Cu: goto label_13ea4c;
            case 0x13EA50u: goto label_13ea50;
            case 0x13EA54u: goto label_13ea54;
            case 0x13EA58u: goto label_13ea58;
            case 0x13EA5Cu: goto label_13ea5c;
            case 0x13EA60u: goto label_13ea60;
            case 0x13EA64u: goto label_13ea64;
            case 0x13EA68u: goto label_13ea68;
            case 0x13EA6Cu: goto label_13ea6c;
            case 0x13EA70u: goto label_13ea70;
            case 0x13EA74u: goto label_13ea74;
            case 0x13EA78u: goto label_13ea78;
            case 0x13EA7Cu: goto label_13ea7c;
            case 0x13EA80u: goto label_13ea80;
            case 0x13EA84u: goto label_13ea84;
            case 0x13EA88u: goto label_13ea88;
            case 0x13EA8Cu: goto label_13ea8c;
            case 0x13EA90u: goto label_13ea90;
            case 0x13EA94u: goto label_13ea94;
            case 0x13EA98u: goto label_13ea98;
            case 0x13EA9Cu: goto label_13ea9c;
            case 0x13EAA0u: goto label_13eaa0;
            case 0x13EAA4u: goto label_13eaa4;
            case 0x13EAA8u: goto label_13eaa8;
            case 0x13EAACu: goto label_13eaac;
            case 0x13EAB0u: goto label_13eab0;
            case 0x13EAB4u: goto label_13eab4;
            case 0x13EAB8u: goto label_13eab8;
            case 0x13EABCu: goto label_13eabc;
            case 0x13EAC0u: goto label_13eac0;
            case 0x13EAC4u: goto label_13eac4;
            case 0x13EAC8u: goto label_13eac8;
            case 0x13EACCu: goto label_13eacc;
            case 0x13EAD0u: goto label_13ead0;
            case 0x13EAD4u: goto label_13ead4;
            case 0x13EAD8u: goto label_13ead8;
            case 0x13EADCu: goto label_13eadc;
            case 0x13EAE0u: goto label_13eae0;
            case 0x13EAE4u: goto label_13eae4;
            case 0x13EAE8u: goto label_13eae8;
            case 0x13EAECu: goto label_13eaec;
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EAF4u: goto label_13eaf4;
            case 0x13EAF8u: goto label_13eaf8;
            case 0x13EAFCu: goto label_13eafc;
            case 0x13EB00u: goto label_13eb00;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB08u: goto label_13eb08;
            case 0x13EB0Cu: goto label_13eb0c;
            case 0x13EB10u: goto label_13eb10;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB18u: goto label_13eb18;
            case 0x13EB1Cu: goto label_13eb1c;
            case 0x13EB20u: goto label_13eb20;
            case 0x13EB24u: goto label_13eb24;
            case 0x13EB28u: goto label_13eb28;
            case 0x13EB2Cu: goto label_13eb2c;
            case 0x13EB30u: goto label_13eb30;
            case 0x13EB34u: goto label_13eb34;
            case 0x13EB38u: goto label_13eb38;
            case 0x13EB3Cu: goto label_13eb3c;
            case 0x13EB40u: goto label_13eb40;
            case 0x13EB44u: goto label_13eb44;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB4Cu: goto label_13eb4c;
            case 0x13EB50u: goto label_13eb50;
            case 0x13EB54u: goto label_13eb54;
            case 0x13EB58u: goto label_13eb58;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB60u: goto label_13eb60;
            case 0x13EB64u: goto label_13eb64;
            case 0x13EB68u: goto label_13eb68;
            case 0x13EB6Cu: goto label_13eb6c;
            case 0x13EB70u: goto label_13eb70;
            case 0x13EB74u: goto label_13eb74;
            case 0x13EB78u: goto label_13eb78;
            case 0x13EB7Cu: goto label_13eb7c;
            case 0x13EB80u: goto label_13eb80;
            case 0x13EB84u: goto label_13eb84;
            case 0x13EB88u: goto label_13eb88;
            case 0x13EB8Cu: goto label_13eb8c;
            case 0x13EB90u: goto label_13eb90;
            case 0x13EB94u: goto label_13eb94;
            case 0x13EB98u: goto label_13eb98;
            case 0x13EB9Cu: goto label_13eb9c;
            case 0x13EBA0u: goto label_13eba0;
            case 0x13EBA4u: goto label_13eba4;
            case 0x13EBA8u: goto label_13eba8;
            case 0x13EBACu: goto label_13ebac;
            case 0x13EBB0u: goto label_13ebb0;
            case 0x13EBB4u: goto label_13ebb4;
            case 0x13EBB8u: goto label_13ebb8;
            case 0x13EBBCu: goto label_13ebbc;
            case 0x13EBC0u: goto label_13ebc0;
            case 0x13EBC4u: goto label_13ebc4;
            case 0x13EBC8u: goto label_13ebc8;
            case 0x13EBCCu: goto label_13ebcc;
            case 0x13EBD0u: goto label_13ebd0;
            case 0x13EBD4u: goto label_13ebd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EB88u;
label_13eb88:
    // 0x13eb88: 0x27bdfff0
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13eb8c:
    // 0x13eb8c: 0x3c040024
    ctx->pc = 0x13eb8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13eb90:
    // 0x13eb90: 0xffbf0000
    ctx->pc = 0x13eb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13eb94:
    // 0x13eb94: 0x2484d828
    ctx->pc = 0x13eb94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957096));
label_13eb98:
    // 0x13eb98: 0xdfbf0000
    ctx->pc = 0x13eb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13eb9c:
    // 0x13eb9c: 0x8045a12
label_13eba0:
    if (ctx->pc == 0x13EBA0u) {
        ctx->pc = 0x13EBA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13EBA4u;
        goto label_13eba4;
    }
    ctx->pc = 0x13EB9Cu;
    ctx->pc = 0x13EBA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13EBA4u;
label_13eba4:
    // 0x13eba4: 0x0
    ctx->pc = 0x13eba4u;
    // NOP
label_13eba8:
    // 0x13eba8: 0x27bdfff0
    ctx->pc = 0x13eba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ebac:
    // 0x13ebac: 0x282d
    ctx->pc = 0x13ebacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ebb0:
    // 0x13ebb0: 0xffb00000
    ctx->pc = 0x13ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13ebb4:
    // 0x13ebb4: 0xffbf0008
    ctx->pc = 0x13ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_13ebb8:
    // 0x13ebb8: 0xc04faf6
label_13ebbc:
    if (ctx->pc == 0x13EBBCu) {
        ctx->pc = 0x13EBBCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC0u;
        goto label_13ebc0;
    }
    ctx->pc = 0x13EBB8u;
    SET_GPR_U32(ctx, 31, 0x13EBC0u);
    ctx->pc = 0x13EBBCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13EBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EBD8_0x13ebd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EBC0u; }
    }
    if (ctx->pc != 0x13EBC0u) { return; }
    ctx->pc = 0x13EBC0u;
label_13ebc0:
    // 0x13ebc0: 0xdfbf0008
    ctx->pc = 0x13ebc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13ebc4:
    // 0x13ebc4: 0x200202d
    ctx->pc = 0x13ebc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ebc8:
    // 0x13ebc8: 0xdfb00000
    ctx->pc = 0x13ebc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ebcc:
    // 0x13ebcc: 0x282d
    ctx->pc = 0x13ebccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ebd0:
    // 0x13ebd0: 0x804fb14
label_13ebd4:
    if (ctx->pc == 0x13EBD4u) {
        ctx->pc = 0x13EBD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13EBD8u;
        goto label_fallthrough_0x13ebd0;
    }
    ctx->pc = 0x13EBD0u;
    ctx->pc = 0x13EBD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EC50u;
    sub_0013EC50_0x13ec50(rdram, ctx, runtime); return;
label_fallthrough_0x13ebd0:
    ctx->pc = 0x13EBD8u;
}
