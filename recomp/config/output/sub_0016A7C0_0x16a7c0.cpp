#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016A7C0
// Address: 0x16a7c0 - 0x16ab80
void sub_0016A7C0_0x16a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16a7c0u;

label_16a7c0:
    // 0x16a7c0: 0x27bdffd0
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_16a7c4:
    // 0x16a7c4: 0xffb20010
    ctx->pc = 0x16a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16a7c8:
    // 0x16a7c8: 0xa0902d
    ctx->pc = 0x16a7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a7cc:
    // 0x16a7cc: 0xffb30018
    ctx->pc = 0x16a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16a7d0:
    // 0x16a7d0: 0xc0982d
    ctx->pc = 0x16a7d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16a7d4:
    // 0x16a7d4: 0x100282d
    ctx->pc = 0x16a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16a7d8:
    // 0x16a7d8: 0x120302d
    ctx->pc = 0x16a7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_16a7dc:
    // 0x16a7dc: 0xffb00000
    ctx->pc = 0x16a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a7e0:
    // 0x16a7e0: 0xffb10008
    ctx->pc = 0x16a7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16a7e4:
    // 0x16a7e4: 0xffbf0020
    ctx->pc = 0x16a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16a7e8:
    // 0x16a7e8: 0xc05ab60
label_16a7ec:
    if (ctx->pc == 0x16A7ECu) {
        ctx->pc = 0x16A7ECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A7F0u;
        goto label_16a7f0;
    }
    ctx->pc = 0x16A7E8u;
    SET_GPR_U32(ctx, 31, 0x16A7F0u);
    ctx->pc = 0x16A7ECu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16AD80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AD80_0x16ad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A7F0u; }
    }
    if (ctx->pc != 0x16A7F0u) { return; }
    ctx->pc = 0x16A7F0u;
label_16a7f0:
    // 0x16a7f0: 0x40802d
    ctx->pc = 0x16a7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a7f4:
    // 0x16a7f4: 0x24020001
    ctx->pc = 0x16a7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16a7f8:
    // 0x16a7f8: 0x56020006
label_16a7fc:
    if (ctx->pc == 0x16A7FCu) {
        ctx->pc = 0x16A7FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A800u;
        goto label_16a800;
    }
    ctx->pc = 0x16A7F8u;
    {
        const bool branch_taken_0x16a7f8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x16a7f8) {
            ctx->pc = 0x16A7FCu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16A814u;
            goto label_16a814;
        }
    }
    ctx->pc = 0x16A800u;
label_16a800:
    // 0x16a800: 0x12400003
label_16a804:
    if (ctx->pc == 0x16A804u) {
        ctx->pc = 0x16A804u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A808u;
        goto label_16a808;
    }
    ctx->pc = 0x16A800u;
    {
        const bool branch_taken_0x16a800 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A804u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a800) {
            ctx->pc = 0x16A810u;
            goto label_16a810;
        }
    }
    ctx->pc = 0x16A808u;
label_16a808:
    // 0x16a808: 0x240f809
label_16a80c:
    if (ctx->pc == 0x16A80Cu) {
        ctx->pc = 0x16A80Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A810u;
        goto label_16a810;
    }
    ctx->pc = 0x16A808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x16A810u);
        ctx->pc = 0x16A80Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A7C0u: goto label_16a7c0;
            case 0x16A7C4u: goto label_16a7c4;
            case 0x16A7C8u: goto label_16a7c8;
            case 0x16A7CCu: goto label_16a7cc;
            case 0x16A7D0u: goto label_16a7d0;
            case 0x16A7D4u: goto label_16a7d4;
            case 0x16A7D8u: goto label_16a7d8;
            case 0x16A7DCu: goto label_16a7dc;
            case 0x16A7E0u: goto label_16a7e0;
            case 0x16A7E4u: goto label_16a7e4;
            case 0x16A7E8u: goto label_16a7e8;
            case 0x16A7ECu: goto label_16a7ec;
            case 0x16A7F0u: goto label_16a7f0;
            case 0x16A7F4u: goto label_16a7f4;
            case 0x16A7F8u: goto label_16a7f8;
            case 0x16A7FCu: goto label_16a7fc;
            case 0x16A800u: goto label_16a800;
            case 0x16A804u: goto label_16a804;
            case 0x16A808u: goto label_16a808;
            case 0x16A80Cu: goto label_16a80c;
            case 0x16A810u: goto label_16a810;
            case 0x16A814u: goto label_16a814;
            case 0x16A818u: goto label_16a818;
            case 0x16A81Cu: goto label_16a81c;
            case 0x16A820u: goto label_16a820;
            case 0x16A824u: goto label_16a824;
            case 0x16A828u: goto label_16a828;
            case 0x16A82Cu: goto label_16a82c;
            case 0x16A830u: goto label_16a830;
            case 0x16A834u: goto label_16a834;
            case 0x16A838u: goto label_16a838;
            case 0x16A83Cu: goto label_16a83c;
            case 0x16A840u: goto label_16a840;
            case 0x16A844u: goto label_16a844;
            case 0x16A848u: goto label_16a848;
            case 0x16A84Cu: goto label_16a84c;
            case 0x16A850u: goto label_16a850;
            case 0x16A854u: goto label_16a854;
            case 0x16A858u: goto label_16a858;
            case 0x16A85Cu: goto label_16a85c;
            case 0x16A860u: goto label_16a860;
            case 0x16A864u: goto label_16a864;
            case 0x16A868u: goto label_16a868;
            case 0x16A86Cu: goto label_16a86c;
            case 0x16A870u: goto label_16a870;
            case 0x16A874u: goto label_16a874;
            case 0x16A878u: goto label_16a878;
            case 0x16A87Cu: goto label_16a87c;
            case 0x16A880u: goto label_16a880;
            case 0x16A884u: goto label_16a884;
            case 0x16A888u: goto label_16a888;
            case 0x16A88Cu: goto label_16a88c;
            case 0x16A890u: goto label_16a890;
            case 0x16A894u: goto label_16a894;
            case 0x16A898u: goto label_16a898;
            case 0x16A89Cu: goto label_16a89c;
            case 0x16A8A0u: goto label_16a8a0;
            case 0x16A8A4u: goto label_16a8a4;
            case 0x16A8A8u: goto label_16a8a8;
            case 0x16A8ACu: goto label_16a8ac;
            case 0x16A8B0u: goto label_16a8b0;
            case 0x16A8B4u: goto label_16a8b4;
            case 0x16A8B8u: goto label_16a8b8;
            case 0x16A8BCu: goto label_16a8bc;
            case 0x16A8C0u: goto label_16a8c0;
            case 0x16A8C4u: goto label_16a8c4;
            case 0x16A8C8u: goto label_16a8c8;
            case 0x16A8CCu: goto label_16a8cc;
            case 0x16A8D0u: goto label_16a8d0;
            case 0x16A8D4u: goto label_16a8d4;
            case 0x16A8D8u: goto label_16a8d8;
            case 0x16A8DCu: goto label_16a8dc;
            case 0x16A8E0u: goto label_16a8e0;
            case 0x16A8E4u: goto label_16a8e4;
            case 0x16A8E8u: goto label_16a8e8;
            case 0x16A8ECu: goto label_16a8ec;
            case 0x16A8F0u: goto label_16a8f0;
            case 0x16A8F4u: goto label_16a8f4;
            case 0x16A8F8u: goto label_16a8f8;
            case 0x16A8FCu: goto label_16a8fc;
            case 0x16A900u: goto label_16a900;
            case 0x16A904u: goto label_16a904;
            case 0x16A908u: goto label_16a908;
            case 0x16A90Cu: goto label_16a90c;
            case 0x16A910u: goto label_16a910;
            case 0x16A914u: goto label_16a914;
            case 0x16A918u: goto label_16a918;
            case 0x16A91Cu: goto label_16a91c;
            case 0x16A920u: goto label_16a920;
            case 0x16A924u: goto label_16a924;
            case 0x16A928u: goto label_16a928;
            case 0x16A92Cu: goto label_16a92c;
            case 0x16A930u: goto label_16a930;
            case 0x16A934u: goto label_16a934;
            case 0x16A938u: goto label_16a938;
            case 0x16A93Cu: goto label_16a93c;
            case 0x16A940u: goto label_16a940;
            case 0x16A944u: goto label_16a944;
            case 0x16A948u: goto label_16a948;
            case 0x16A94Cu: goto label_16a94c;
            case 0x16A950u: goto label_16a950;
            case 0x16A954u: goto label_16a954;
            case 0x16A958u: goto label_16a958;
            case 0x16A95Cu: goto label_16a95c;
            case 0x16A960u: goto label_16a960;
            case 0x16A964u: goto label_16a964;
            case 0x16A968u: goto label_16a968;
            case 0x16A96Cu: goto label_16a96c;
            case 0x16A970u: goto label_16a970;
            case 0x16A974u: goto label_16a974;
            case 0x16A978u: goto label_16a978;
            case 0x16A97Cu: goto label_16a97c;
            case 0x16A980u: goto label_16a980;
            case 0x16A984u: goto label_16a984;
            case 0x16A988u: goto label_16a988;
            case 0x16A98Cu: goto label_16a98c;
            case 0x16A990u: goto label_16a990;
            case 0x16A994u: goto label_16a994;
            case 0x16A998u: goto label_16a998;
            case 0x16A99Cu: goto label_16a99c;
            case 0x16A9A0u: goto label_16a9a0;
            case 0x16A9A4u: goto label_16a9a4;
            case 0x16A9A8u: goto label_16a9a8;
            case 0x16A9ACu: goto label_16a9ac;
            case 0x16A9B0u: goto label_16a9b0;
            case 0x16A9B4u: goto label_16a9b4;
            case 0x16A9B8u: goto label_16a9b8;
            case 0x16A9BCu: goto label_16a9bc;
            case 0x16A9C0u: goto label_16a9c0;
            case 0x16A9C4u: goto label_16a9c4;
            case 0x16A9C8u: goto label_16a9c8;
            case 0x16A9CCu: goto label_16a9cc;
            case 0x16A9D0u: goto label_16a9d0;
            case 0x16A9D4u: goto label_16a9d4;
            case 0x16A9D8u: goto label_16a9d8;
            case 0x16A9DCu: goto label_16a9dc;
            case 0x16A9E0u: goto label_16a9e0;
            case 0x16A9E4u: goto label_16a9e4;
            case 0x16A9E8u: goto label_16a9e8;
            case 0x16A9ECu: goto label_16a9ec;
            case 0x16A9F0u: goto label_16a9f0;
            case 0x16A9F4u: goto label_16a9f4;
            case 0x16A9F8u: goto label_16a9f8;
            case 0x16A9FCu: goto label_16a9fc;
            case 0x16AA00u: goto label_16aa00;
            case 0x16AA04u: goto label_16aa04;
            case 0x16AA08u: goto label_16aa08;
            case 0x16AA0Cu: goto label_16aa0c;
            case 0x16AA10u: goto label_16aa10;
            case 0x16AA14u: goto label_16aa14;
            case 0x16AA18u: goto label_16aa18;
            case 0x16AA1Cu: goto label_16aa1c;
            case 0x16AA20u: goto label_16aa20;
            case 0x16AA24u: goto label_16aa24;
            case 0x16AA28u: goto label_16aa28;
            case 0x16AA2Cu: goto label_16aa2c;
            case 0x16AA30u: goto label_16aa30;
            case 0x16AA34u: goto label_16aa34;
            case 0x16AA38u: goto label_16aa38;
            case 0x16AA3Cu: goto label_16aa3c;
            case 0x16AA40u: goto label_16aa40;
            case 0x16AA44u: goto label_16aa44;
            case 0x16AA48u: goto label_16aa48;
            case 0x16AA4Cu: goto label_16aa4c;
            case 0x16AA50u: goto label_16aa50;
            case 0x16AA54u: goto label_16aa54;
            case 0x16AA58u: goto label_16aa58;
            case 0x16AA5Cu: goto label_16aa5c;
            case 0x16AA60u: goto label_16aa60;
            case 0x16AA64u: goto label_16aa64;
            case 0x16AA68u: goto label_16aa68;
            case 0x16AA6Cu: goto label_16aa6c;
            case 0x16AA70u: goto label_16aa70;
            case 0x16AA74u: goto label_16aa74;
            case 0x16AA78u: goto label_16aa78;
            case 0x16AA7Cu: goto label_16aa7c;
            case 0x16AA80u: goto label_16aa80;
            case 0x16AA84u: goto label_16aa84;
            case 0x16AA88u: goto label_16aa88;
            case 0x16AA8Cu: goto label_16aa8c;
            case 0x16AA90u: goto label_16aa90;
            case 0x16AA94u: goto label_16aa94;
            case 0x16AA98u: goto label_16aa98;
            case 0x16AA9Cu: goto label_16aa9c;
            case 0x16AAA0u: goto label_16aaa0;
            case 0x16AAA4u: goto label_16aaa4;
            case 0x16AAA8u: goto label_16aaa8;
            case 0x16AAACu: goto label_16aaac;
            case 0x16AAB0u: goto label_16aab0;
            case 0x16AAB4u: goto label_16aab4;
            case 0x16AAB8u: goto label_16aab8;
            case 0x16AABCu: goto label_16aabc;
            case 0x16AAC0u: goto label_16aac0;
            case 0x16AAC4u: goto label_16aac4;
            case 0x16AAC8u: goto label_16aac8;
            case 0x16AACCu: goto label_16aacc;
            case 0x16AAD0u: goto label_16aad0;
            case 0x16AAD4u: goto label_16aad4;
            case 0x16AAD8u: goto label_16aad8;
            case 0x16AADCu: goto label_16aadc;
            case 0x16AAE0u: goto label_16aae0;
            case 0x16AAE4u: goto label_16aae4;
            case 0x16AAE8u: goto label_16aae8;
            case 0x16AAECu: goto label_16aaec;
            case 0x16AAF0u: goto label_16aaf0;
            case 0x16AAF4u: goto label_16aaf4;
            case 0x16AAF8u: goto label_16aaf8;
            case 0x16AAFCu: goto label_16aafc;
            case 0x16AB00u: goto label_16ab00;
            case 0x16AB04u: goto label_16ab04;
            case 0x16AB08u: goto label_16ab08;
            case 0x16AB0Cu: goto label_16ab0c;
            case 0x16AB10u: goto label_16ab10;
            case 0x16AB14u: goto label_16ab14;
            case 0x16AB18u: goto label_16ab18;
            case 0x16AB1Cu: goto label_16ab1c;
            case 0x16AB20u: goto label_16ab20;
            case 0x16AB24u: goto label_16ab24;
            case 0x16AB28u: goto label_16ab28;
            case 0x16AB2Cu: goto label_16ab2c;
            case 0x16AB30u: goto label_16ab30;
            case 0x16AB34u: goto label_16ab34;
            case 0x16AB38u: goto label_16ab38;
            case 0x16AB3Cu: goto label_16ab3c;
            case 0x16AB40u: goto label_16ab40;
            case 0x16AB44u: goto label_16ab44;
            case 0x16AB48u: goto label_16ab48;
            case 0x16AB4Cu: goto label_16ab4c;
            case 0x16AB50u: goto label_16ab50;
            case 0x16AB54u: goto label_16ab54;
            case 0x16AB58u: goto label_16ab58;
            case 0x16AB5Cu: goto label_16ab5c;
            case 0x16AB60u: goto label_16ab60;
            case 0x16AB64u: goto label_16ab64;
            case 0x16AB68u: goto label_16ab68;
            case 0x16AB6Cu: goto label_16ab6c;
            case 0x16AB70u: goto label_16ab70;
            case 0x16AB74u: goto label_16ab74;
            case 0x16AB78u: goto label_16ab78;
            case 0x16AB7Cu: goto label_16ab7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16A810u; }
            if (ctx->pc != 0x16A810u) { return; }
        }
    }
    ctx->pc = 0x16A810u;
label_16a810:
    // 0x16a810: 0x200102d
    ctx->pc = 0x16a810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a814:
    // 0x16a814: 0xdfb00000
    ctx->pc = 0x16a814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a818:
    // 0x16a818: 0xdfb10008
    ctx->pc = 0x16a818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16a81c:
    // 0x16a81c: 0xdfb20010
    ctx->pc = 0x16a81cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a820:
    // 0x16a820: 0xdfb30018
    ctx->pc = 0x16a820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a824:
    // 0x16a824: 0xdfbf0020
    ctx->pc = 0x16a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a828:
    // 0x16a828: 0x3e00008
label_16a82c:
    if (ctx->pc == 0x16A82Cu) {
        ctx->pc = 0x16A82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16A830u;
        goto label_16a830;
    }
    ctx->pc = 0x16A828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A7C0u: goto label_16a7c0;
            case 0x16A7C4u: goto label_16a7c4;
            case 0x16A7C8u: goto label_16a7c8;
            case 0x16A7CCu: goto label_16a7cc;
            case 0x16A7D0u: goto label_16a7d0;
            case 0x16A7D4u: goto label_16a7d4;
            case 0x16A7D8u: goto label_16a7d8;
            case 0x16A7DCu: goto label_16a7dc;
            case 0x16A7E0u: goto label_16a7e0;
            case 0x16A7E4u: goto label_16a7e4;
            case 0x16A7E8u: goto label_16a7e8;
            case 0x16A7ECu: goto label_16a7ec;
            case 0x16A7F0u: goto label_16a7f0;
            case 0x16A7F4u: goto label_16a7f4;
            case 0x16A7F8u: goto label_16a7f8;
            case 0x16A7FCu: goto label_16a7fc;
            case 0x16A800u: goto label_16a800;
            case 0x16A804u: goto label_16a804;
            case 0x16A808u: goto label_16a808;
            case 0x16A80Cu: goto label_16a80c;
            case 0x16A810u: goto label_16a810;
            case 0x16A814u: goto label_16a814;
            case 0x16A818u: goto label_16a818;
            case 0x16A81Cu: goto label_16a81c;
            case 0x16A820u: goto label_16a820;
            case 0x16A824u: goto label_16a824;
            case 0x16A828u: goto label_16a828;
            case 0x16A82Cu: goto label_16a82c;
            case 0x16A830u: goto label_16a830;
            case 0x16A834u: goto label_16a834;
            case 0x16A838u: goto label_16a838;
            case 0x16A83Cu: goto label_16a83c;
            case 0x16A840u: goto label_16a840;
            case 0x16A844u: goto label_16a844;
            case 0x16A848u: goto label_16a848;
            case 0x16A84Cu: goto label_16a84c;
            case 0x16A850u: goto label_16a850;
            case 0x16A854u: goto label_16a854;
            case 0x16A858u: goto label_16a858;
            case 0x16A85Cu: goto label_16a85c;
            case 0x16A860u: goto label_16a860;
            case 0x16A864u: goto label_16a864;
            case 0x16A868u: goto label_16a868;
            case 0x16A86Cu: goto label_16a86c;
            case 0x16A870u: goto label_16a870;
            case 0x16A874u: goto label_16a874;
            case 0x16A878u: goto label_16a878;
            case 0x16A87Cu: goto label_16a87c;
            case 0x16A880u: goto label_16a880;
            case 0x16A884u: goto label_16a884;
            case 0x16A888u: goto label_16a888;
            case 0x16A88Cu: goto label_16a88c;
            case 0x16A890u: goto label_16a890;
            case 0x16A894u: goto label_16a894;
            case 0x16A898u: goto label_16a898;
            case 0x16A89Cu: goto label_16a89c;
            case 0x16A8A0u: goto label_16a8a0;
            case 0x16A8A4u: goto label_16a8a4;
            case 0x16A8A8u: goto label_16a8a8;
            case 0x16A8ACu: goto label_16a8ac;
            case 0x16A8B0u: goto label_16a8b0;
            case 0x16A8B4u: goto label_16a8b4;
            case 0x16A8B8u: goto label_16a8b8;
            case 0x16A8BCu: goto label_16a8bc;
            case 0x16A8C0u: goto label_16a8c0;
            case 0x16A8C4u: goto label_16a8c4;
            case 0x16A8C8u: goto label_16a8c8;
            case 0x16A8CCu: goto label_16a8cc;
            case 0x16A8D0u: goto label_16a8d0;
            case 0x16A8D4u: goto label_16a8d4;
            case 0x16A8D8u: goto label_16a8d8;
            case 0x16A8DCu: goto label_16a8dc;
            case 0x16A8E0u: goto label_16a8e0;
            case 0x16A8E4u: goto label_16a8e4;
            case 0x16A8E8u: goto label_16a8e8;
            case 0x16A8ECu: goto label_16a8ec;
            case 0x16A8F0u: goto label_16a8f0;
            case 0x16A8F4u: goto label_16a8f4;
            case 0x16A8F8u: goto label_16a8f8;
            case 0x16A8FCu: goto label_16a8fc;
            case 0x16A900u: goto label_16a900;
            case 0x16A904u: goto label_16a904;
            case 0x16A908u: goto label_16a908;
            case 0x16A90Cu: goto label_16a90c;
            case 0x16A910u: goto label_16a910;
            case 0x16A914u: goto label_16a914;
            case 0x16A918u: goto label_16a918;
            case 0x16A91Cu: goto label_16a91c;
            case 0x16A920u: goto label_16a920;
            case 0x16A924u: goto label_16a924;
            case 0x16A928u: goto label_16a928;
            case 0x16A92Cu: goto label_16a92c;
            case 0x16A930u: goto label_16a930;
            case 0x16A934u: goto label_16a934;
            case 0x16A938u: goto label_16a938;
            case 0x16A93Cu: goto label_16a93c;
            case 0x16A940u: goto label_16a940;
            case 0x16A944u: goto label_16a944;
            case 0x16A948u: goto label_16a948;
            case 0x16A94Cu: goto label_16a94c;
            case 0x16A950u: goto label_16a950;
            case 0x16A954u: goto label_16a954;
            case 0x16A958u: goto label_16a958;
            case 0x16A95Cu: goto label_16a95c;
            case 0x16A960u: goto label_16a960;
            case 0x16A964u: goto label_16a964;
            case 0x16A968u: goto label_16a968;
            case 0x16A96Cu: goto label_16a96c;
            case 0x16A970u: goto label_16a970;
            case 0x16A974u: goto label_16a974;
            case 0x16A978u: goto label_16a978;
            case 0x16A97Cu: goto label_16a97c;
            case 0x16A980u: goto label_16a980;
            case 0x16A984u: goto label_16a984;
            case 0x16A988u: goto label_16a988;
            case 0x16A98Cu: goto label_16a98c;
            case 0x16A990u: goto label_16a990;
            case 0x16A994u: goto label_16a994;
            case 0x16A998u: goto label_16a998;
            case 0x16A99Cu: goto label_16a99c;
            case 0x16A9A0u: goto label_16a9a0;
            case 0x16A9A4u: goto label_16a9a4;
            case 0x16A9A8u: goto label_16a9a8;
            case 0x16A9ACu: goto label_16a9ac;
            case 0x16A9B0u: goto label_16a9b0;
            case 0x16A9B4u: goto label_16a9b4;
            case 0x16A9B8u: goto label_16a9b8;
            case 0x16A9BCu: goto label_16a9bc;
            case 0x16A9C0u: goto label_16a9c0;
            case 0x16A9C4u: goto label_16a9c4;
            case 0x16A9C8u: goto label_16a9c8;
            case 0x16A9CCu: goto label_16a9cc;
            case 0x16A9D0u: goto label_16a9d0;
            case 0x16A9D4u: goto label_16a9d4;
            case 0x16A9D8u: goto label_16a9d8;
            case 0x16A9DCu: goto label_16a9dc;
            case 0x16A9E0u: goto label_16a9e0;
            case 0x16A9E4u: goto label_16a9e4;
            case 0x16A9E8u: goto label_16a9e8;
            case 0x16A9ECu: goto label_16a9ec;
            case 0x16A9F0u: goto label_16a9f0;
            case 0x16A9F4u: goto label_16a9f4;
            case 0x16A9F8u: goto label_16a9f8;
            case 0x16A9FCu: goto label_16a9fc;
            case 0x16AA00u: goto label_16aa00;
            case 0x16AA04u: goto label_16aa04;
            case 0x16AA08u: goto label_16aa08;
            case 0x16AA0Cu: goto label_16aa0c;
            case 0x16AA10u: goto label_16aa10;
            case 0x16AA14u: goto label_16aa14;
            case 0x16AA18u: goto label_16aa18;
            case 0x16AA1Cu: goto label_16aa1c;
            case 0x16AA20u: goto label_16aa20;
            case 0x16AA24u: goto label_16aa24;
            case 0x16AA28u: goto label_16aa28;
            case 0x16AA2Cu: goto label_16aa2c;
            case 0x16AA30u: goto label_16aa30;
            case 0x16AA34u: goto label_16aa34;
            case 0x16AA38u: goto label_16aa38;
            case 0x16AA3Cu: goto label_16aa3c;
            case 0x16AA40u: goto label_16aa40;
            case 0x16AA44u: goto label_16aa44;
            case 0x16AA48u: goto label_16aa48;
            case 0x16AA4Cu: goto label_16aa4c;
            case 0x16AA50u: goto label_16aa50;
            case 0x16AA54u: goto label_16aa54;
            case 0x16AA58u: goto label_16aa58;
            case 0x16AA5Cu: goto label_16aa5c;
            case 0x16AA60u: goto label_16aa60;
            case 0x16AA64u: goto label_16aa64;
            case 0x16AA68u: goto label_16aa68;
            case 0x16AA6Cu: goto label_16aa6c;
            case 0x16AA70u: goto label_16aa70;
            case 0x16AA74u: goto label_16aa74;
            case 0x16AA78u: goto label_16aa78;
            case 0x16AA7Cu: goto label_16aa7c;
            case 0x16AA80u: goto label_16aa80;
            case 0x16AA84u: goto label_16aa84;
            case 0x16AA88u: goto label_16aa88;
            case 0x16AA8Cu: goto label_16aa8c;
            case 0x16AA90u: goto label_16aa90;
            case 0x16AA94u: goto label_16aa94;
            case 0x16AA98u: goto label_16aa98;
            case 0x16AA9Cu: goto label_16aa9c;
            case 0x16AAA0u: goto label_16aaa0;
            case 0x16AAA4u: goto label_16aaa4;
            case 0x16AAA8u: goto label_16aaa8;
            case 0x16AAACu: goto label_16aaac;
            case 0x16AAB0u: goto label_16aab0;
            case 0x16AAB4u: goto label_16aab4;
            case 0x16AAB8u: goto label_16aab8;
            case 0x16AABCu: goto label_16aabc;
            case 0x16AAC0u: goto label_16aac0;
            case 0x16AAC4u: goto label_16aac4;
            case 0x16AAC8u: goto label_16aac8;
            case 0x16AACCu: goto label_16aacc;
            case 0x16AAD0u: goto label_16aad0;
            case 0x16AAD4u: goto label_16aad4;
            case 0x16AAD8u: goto label_16aad8;
            case 0x16AADCu: goto label_16aadc;
            case 0x16AAE0u: goto label_16aae0;
            case 0x16AAE4u: goto label_16aae4;
            case 0x16AAE8u: goto label_16aae8;
            case 0x16AAECu: goto label_16aaec;
            case 0x16AAF0u: goto label_16aaf0;
            case 0x16AAF4u: goto label_16aaf4;
            case 0x16AAF8u: goto label_16aaf8;
            case 0x16AAFCu: goto label_16aafc;
            case 0x16AB00u: goto label_16ab00;
            case 0x16AB04u: goto label_16ab04;
            case 0x16AB08u: goto label_16ab08;
            case 0x16AB0Cu: goto label_16ab0c;
            case 0x16AB10u: goto label_16ab10;
            case 0x16AB14u: goto label_16ab14;
            case 0x16AB18u: goto label_16ab18;
            case 0x16AB1Cu: goto label_16ab1c;
            case 0x16AB20u: goto label_16ab20;
            case 0x16AB24u: goto label_16ab24;
            case 0x16AB28u: goto label_16ab28;
            case 0x16AB2Cu: goto label_16ab2c;
            case 0x16AB30u: goto label_16ab30;
            case 0x16AB34u: goto label_16ab34;
            case 0x16AB38u: goto label_16ab38;
            case 0x16AB3Cu: goto label_16ab3c;
            case 0x16AB40u: goto label_16ab40;
            case 0x16AB44u: goto label_16ab44;
            case 0x16AB48u: goto label_16ab48;
            case 0x16AB4Cu: goto label_16ab4c;
            case 0x16AB50u: goto label_16ab50;
            case 0x16AB54u: goto label_16ab54;
            case 0x16AB58u: goto label_16ab58;
            case 0x16AB5Cu: goto label_16ab5c;
            case 0x16AB60u: goto label_16ab60;
            case 0x16AB64u: goto label_16ab64;
            case 0x16AB68u: goto label_16ab68;
            case 0x16AB6Cu: goto label_16ab6c;
            case 0x16AB70u: goto label_16ab70;
            case 0x16AB74u: goto label_16ab74;
            case 0x16AB78u: goto label_16ab78;
            case 0x16AB7Cu: goto label_16ab7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A830u;
label_16a830:
    // 0x16a830: 0x27bdffb0
    ctx->pc = 0x16a830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_16a834:
    // 0x16a834: 0xffb20010
    ctx->pc = 0x16a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16a838:
    // 0x16a838: 0xa0902d
    ctx->pc = 0x16a838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a83c:
    // 0x16a83c: 0x24050006
    ctx->pc = 0x16a83cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_16a840:
    // 0x16a840: 0xffb10008
    ctx->pc = 0x16a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16a844:
    // 0x16a844: 0xffb50028
    ctx->pc = 0x16a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_16a848:
    // 0x16a848: 0x80a82d
    ctx->pc = 0x16a848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a84c:
    // 0x16a84c: 0xffb70038
    ctx->pc = 0x16a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_16a850:
    // 0x16a850: 0xc0b82d
    ctx->pc = 0x16a850u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16a854:
    // 0x16a854: 0xffbe0040
    ctx->pc = 0x16a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_16a858:
    // 0x16a858: 0xe0f02d
    ctx->pc = 0x16a858u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16a85c:
    // 0x16a85c: 0xffb00000
    ctx->pc = 0x16a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a860:
    // 0x16a860: 0xffb30018
    ctx->pc = 0x16a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16a864:
    // 0x16a864: 0xffb40020
    ctx->pc = 0x16a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16a868:
    // 0x16a868: 0xffb60030
    ctx->pc = 0x16a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_16a86c:
    // 0x16a86c: 0xffbf0048
    ctx->pc = 0x16a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_16a870:
    // 0x16a870: 0xc05d58a
label_16a874:
    if (ctx->pc == 0x16A874u) {
        ctx->pc = 0x16A874u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A878u;
        goto label_16a878;
    }
    ctx->pc = 0x16A870u;
    SET_GPR_U32(ctx, 31, 0x16A878u);
    ctx->pc = 0x16A874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A878u; }
    }
    if (ctx->pc != 0x16A878u) { return; }
    ctx->pc = 0x16A878u;
label_16a878:
    // 0x16a878: 0x14400003
label_16a87c:
    if (ctx->pc == 0x16A87Cu) {
        ctx->pc = 0x16A87Cu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 21), 6884));
        ctx->pc = 0x16A880u;
        goto label_16a880;
    }
    ctx->pc = 0x16A878u;
    {
        const bool branch_taken_0x16a878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A87Cu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 21), 6884));
        if (branch_taken_0x16a878) {
            ctx->pc = 0x16A888u;
            goto label_16a888;
        }
    }
    ctx->pc = 0x16A880u;
label_16a880:
    // 0x16a880: 0x1000003d
label_16a884:
    if (ctx->pc == 0x16A884u) {
        ctx->pc = 0x16A884u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16A888u;
        goto label_16a888;
    }
    ctx->pc = 0x16A880u;
    {
        const bool branch_taken_0x16a880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A884u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16a880) {
            ctx->pc = 0x16A978u;
            goto label_16a978;
        }
    }
    ctx->pc = 0x16A888u;
label_16a888:
    // 0x16a888: 0x2413ffff
    ctx->pc = 0x16a888u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a88c:
    // 0x16a88c: 0x8ed00008
    ctx->pc = 0x16a88cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_16a890:
    // 0x16a890: 0x8e02002c
    ctx->pc = 0x16a890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_16a894:
    // 0x16a894: 0x50530001
label_16a898:
    if (ctx->pc == 0x16A898u) {
        ctx->pc = 0x16A898u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
        ctx->pc = 0x16A89Cu;
        goto label_16a89c;
    }
    ctx->pc = 0x16A894u;
    {
        const bool branch_taken_0x16a894 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x16a894) {
            ctx->pc = 0x16A898u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
            ctx->pc = 0x16A89Cu;
            goto label_16a89c;
        }
    }
    ctx->pc = 0x16A89Cu;
label_16a89c:
    // 0x16a89c: 0x8e020024
    ctx->pc = 0x16a89cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_16a8a0:
    // 0x16a8a0: 0x50530001
label_16a8a4:
    if (ctx->pc == 0x16A8A4u) {
        ctx->pc = 0x16A8A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
        ctx->pc = 0x16A8A8u;
        goto label_16a8a8;
    }
    ctx->pc = 0x16A8A0u;
    {
        const bool branch_taken_0x16a8a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x16a8a0) {
            ctx->pc = 0x16A8A4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
            ctx->pc = 0x16A8A8u;
            goto label_16a8a8;
        }
    }
    ctx->pc = 0x16A8A8u;
label_16a8a8:
    // 0x16a8a8: 0x2a0202d
    ctx->pc = 0x16a8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16a8ac:
    // 0x16a8ac: 0xc05d58a
label_16a8b0:
    if (ctx->pc == 0x16A8B0u) {
        ctx->pc = 0x16A8B0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x16A8B4u;
        goto label_16a8b4;
    }
    ctx->pc = 0x16A8ACu;
    SET_GPR_U32(ctx, 31, 0x16A8B4u);
    ctx->pc = 0x16A8B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8B4u; }
    }
    if (ctx->pc != 0x16A8B4u) { return; }
    ctx->pc = 0x16A8B4u;
label_16a8b4:
    // 0x16a8b4: 0x40a02d
    ctx->pc = 0x16a8b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a8b8:
    // 0x16a8b8: 0x1293000e
label_16a8bc:
    if (ctx->pc == 0x16A8BCu) {
        ctx->pc = 0x16A8BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A8C0u;
        goto label_16a8c0;
    }
    ctx->pc = 0x16A8B8u;
    {
        const bool branch_taken_0x16a8b8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 19));
        ctx->pc = 0x16A8BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a8b8) {
            ctx->pc = 0x16A8F4u;
            goto label_16a8f4;
        }
    }
    ctx->pc = 0x16A8C0u;
label_16a8c0:
    // 0x16a8c0: 0xc05d58a
label_16a8c4:
    if (ctx->pc == 0x16A8C4u) {
        ctx->pc = 0x16A8C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x16A8C8u;
        goto label_16a8c8;
    }
    ctx->pc = 0x16A8C0u;
    SET_GPR_U32(ctx, 31, 0x16A8C8u);
    ctx->pc = 0x16A8C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 55));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A8C8u; }
    }
    if (ctx->pc != 0x16A8C8u) { return; }
    ctx->pc = 0x16A8C8u;
label_16a8c8:
    // 0x16a8c8: 0x50400007
label_16a8cc:
    if (ctx->pc == 0x16A8CCu) {
        ctx->pc = 0x16A8CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x16A8D0u;
        goto label_16a8d0;
    }
    ctx->pc = 0x16A8C8u;
    {
        const bool branch_taken_0x16a8c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16a8c8) {
            ctx->pc = 0x16A8CCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x16A8E8u;
            goto label_16a8e8;
        }
    }
    ctx->pc = 0x16A8D0u;
label_16a8d0:
    // 0x16a8d0: 0x8e02001c
    ctx->pc = 0x16a8d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_16a8d4:
    // 0x16a8d4: 0x242102a
    ctx->pc = 0x16a8d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_16a8d8:
    // 0x16a8d8: 0x54400006
label_16a8dc:
    if (ctx->pc == 0x16A8DCu) {
        ctx->pc = 0x16A8DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 20));
        ctx->pc = 0x16A8E0u;
        goto label_16a8e0;
    }
    ctx->pc = 0x16A8D8u;
    {
        const bool branch_taken_0x16a8d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a8d8) {
            ctx->pc = 0x16A8DCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 20));
            ctx->pc = 0x16A8F4u;
            goto label_16a8f4;
        }
    }
    ctx->pc = 0x16A8E0u;
label_16a8e0:
    // 0x16a8e0: 0x10000005
label_16a8e4:
    if (ctx->pc == 0x16A8E4u) {
        ctx->pc = 0x16A8E4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x16A8E8u;
        goto label_16a8e8;
    }
    ctx->pc = 0x16A8E0u;
    {
        const bool branch_taken_0x16a8e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A8E4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x16a8e0) {
            ctx->pc = 0x16A8F8u;
            goto label_16a8f8;
        }
    }
    ctx->pc = 0x16A8E8u;
label_16a8e8:
    // 0x16a8e8: 0x56420003
label_16a8ec:
    if (ctx->pc == 0x16A8ECu) {
        ctx->pc = 0x16A8ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x16A8F0u;
        goto label_16a8f0;
    }
    ctx->pc = 0x16A8E8u;
    {
        const bool branch_taken_0x16a8e8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x16a8e8) {
            ctx->pc = 0x16A8ECu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x16A8F8u;
            goto label_16a8f8;
        }
    }
    ctx->pc = 0x16A8F0u;
label_16a8f0:
    // 0x16a8f0: 0xae14002c
    ctx->pc = 0x16a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 20));
label_16a8f4:
    // 0x16a8f4: 0x8e03002c
    ctx->pc = 0x16a8f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_16a8f8:
    // 0x16a8f8: 0x24020001
    ctx->pc = 0x16a8f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16a8fc:
    // 0x16a8fc: 0x1472001e
label_16a900:
    if (ctx->pc == 0x16A900u) {
        ctx->pc = 0x16A900u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
        ctx->pc = 0x16A904u;
        goto label_16a904;
    }
    ctx->pc = 0x16A8FCu;
    {
        const bool branch_taken_0x16a8fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        ctx->pc = 0x16A900u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
        if (branch_taken_0x16a8fc) {
            ctx->pc = 0x16A978u;
            goto label_16a978;
        }
    }
    ctx->pc = 0x16A904u;
label_16a904:
    // 0x16a904: 0x622000b
label_16a908:
    if (ctx->pc == 0x16A908u) {
        ctx->pc = 0x16A908u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->pc = 0x16A90Cu;
        goto label_16a90c;
    }
    ctx->pc = 0x16A904u;
    {
        const bool branch_taken_0x16a904 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x16a904) {
            ctx->pc = 0x16A908u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 24)));
            ctx->pc = 0x16A934u;
            goto label_16a934;
        }
    }
    ctx->pc = 0x16A90Cu;
label_16a90c:
    // 0x16a90c: 0x8e03000c
    ctx->pc = 0x16a90cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16a910:
    // 0x16a910: 0x8e020010
    ctx->pc = 0x16a910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16a914:
    // 0x16a914: 0x223202a
    ctx->pc = 0x16a914u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
label_16a918:
    // 0x16a918: 0x222282a
    ctx->pc = 0x16a918u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_16a91c:
    // 0x16a91c: 0x224180b
    ctx->pc = 0x16a91cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 17));
label_16a920:
    // 0x16a920: 0x225100b
    ctx->pc = 0x16a920u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
label_16a924:
    // 0x16a924: 0x2238823
    ctx->pc = 0x16a924u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_16a928:
    // 0x16a928: 0xae020010
    ctx->pc = 0x16a928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_16a92c:
    // 0x16a92c: 0xae03000c
    ctx->pc = 0x16a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_16a930:
    // 0x16a930: 0x8ec50018
    ctx->pc = 0x16a930u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_16a934:
    // 0x16a934: 0x2a0202d
    ctx->pc = 0x16a934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16a938:
    // 0x16a938: 0x2e0302d
    ctx->pc = 0x16a938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16a93c:
    // 0x16a93c: 0xdfb70038
    ctx->pc = 0x16a93cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16a940:
    // 0x16a940: 0x3c0382d
    ctx->pc = 0x16a940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16a944:
    // 0x16a944: 0xdfbe0040
    ctx->pc = 0x16a944u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16a948:
    // 0x16a948: 0x220402d
    ctx->pc = 0x16a948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a94c:
    // 0x16a94c: 0xdfb10008
    ctx->pc = 0x16a94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16a950:
    // 0x16a950: 0xdfb00000
    ctx->pc = 0x16a950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a954:
    // 0x16a954: 0xdfb20010
    ctx->pc = 0x16a954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a958:
    // 0x16a958: 0xdfb30018
    ctx->pc = 0x16a958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a95c:
    // 0x16a95c: 0xdfb40020
    ctx->pc = 0x16a95cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a960:
    // 0x16a960: 0xdfb50028
    ctx->pc = 0x16a960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16a964:
    // 0x16a964: 0xdfb60030
    ctx->pc = 0x16a964u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a968:
    // 0x16a968: 0xdfbf0048
    ctx->pc = 0x16a968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16a96c:
    // 0x16a96c: 0x805aba8
label_16a970:
    if (ctx->pc == 0x16A970u) {
        ctx->pc = 0x16A970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16A974u;
        goto label_16a974;
    }
    ctx->pc = 0x16A96Cu;
    ctx->pc = 0x16A970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x16AEA0u;
    sub_0016AEA0_0x16aea0(rdram, ctx, runtime); return;
    ctx->pc = 0x16A974u;
label_16a974:
    // 0x16a974: 0x0
    ctx->pc = 0x16a974u;
    // NOP
label_16a978:
    // 0x16a978: 0xdfb00000
    ctx->pc = 0x16a978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a97c:
    // 0x16a97c: 0xdfb10008
    ctx->pc = 0x16a97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16a980:
    // 0x16a980: 0xdfb20010
    ctx->pc = 0x16a980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a984:
    // 0x16a984: 0xdfb30018
    ctx->pc = 0x16a984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16a988:
    // 0x16a988: 0xdfb40020
    ctx->pc = 0x16a988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a98c:
    // 0x16a98c: 0xdfb50028
    ctx->pc = 0x16a98cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16a990:
    // 0x16a990: 0xdfb60030
    ctx->pc = 0x16a990u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16a994:
    // 0x16a994: 0xdfb70038
    ctx->pc = 0x16a994u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16a998:
    // 0x16a998: 0xdfbe0040
    ctx->pc = 0x16a998u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16a99c:
    // 0x16a99c: 0xdfbf0048
    ctx->pc = 0x16a99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16a9a0:
    // 0x16a9a0: 0x3e00008
label_16a9a4:
    if (ctx->pc == 0x16A9A4u) {
        ctx->pc = 0x16A9A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16A9A8u;
        goto label_16a9a8;
    }
    ctx->pc = 0x16A9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A9A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A7C0u: goto label_16a7c0;
            case 0x16A7C4u: goto label_16a7c4;
            case 0x16A7C8u: goto label_16a7c8;
            case 0x16A7CCu: goto label_16a7cc;
            case 0x16A7D0u: goto label_16a7d0;
            case 0x16A7D4u: goto label_16a7d4;
            case 0x16A7D8u: goto label_16a7d8;
            case 0x16A7DCu: goto label_16a7dc;
            case 0x16A7E0u: goto label_16a7e0;
            case 0x16A7E4u: goto label_16a7e4;
            case 0x16A7E8u: goto label_16a7e8;
            case 0x16A7ECu: goto label_16a7ec;
            case 0x16A7F0u: goto label_16a7f0;
            case 0x16A7F4u: goto label_16a7f4;
            case 0x16A7F8u: goto label_16a7f8;
            case 0x16A7FCu: goto label_16a7fc;
            case 0x16A800u: goto label_16a800;
            case 0x16A804u: goto label_16a804;
            case 0x16A808u: goto label_16a808;
            case 0x16A80Cu: goto label_16a80c;
            case 0x16A810u: goto label_16a810;
            case 0x16A814u: goto label_16a814;
            case 0x16A818u: goto label_16a818;
            case 0x16A81Cu: goto label_16a81c;
            case 0x16A820u: goto label_16a820;
            case 0x16A824u: goto label_16a824;
            case 0x16A828u: goto label_16a828;
            case 0x16A82Cu: goto label_16a82c;
            case 0x16A830u: goto label_16a830;
            case 0x16A834u: goto label_16a834;
            case 0x16A838u: goto label_16a838;
            case 0x16A83Cu: goto label_16a83c;
            case 0x16A840u: goto label_16a840;
            case 0x16A844u: goto label_16a844;
            case 0x16A848u: goto label_16a848;
            case 0x16A84Cu: goto label_16a84c;
            case 0x16A850u: goto label_16a850;
            case 0x16A854u: goto label_16a854;
            case 0x16A858u: goto label_16a858;
            case 0x16A85Cu: goto label_16a85c;
            case 0x16A860u: goto label_16a860;
            case 0x16A864u: goto label_16a864;
            case 0x16A868u: goto label_16a868;
            case 0x16A86Cu: goto label_16a86c;
            case 0x16A870u: goto label_16a870;
            case 0x16A874u: goto label_16a874;
            case 0x16A878u: goto label_16a878;
            case 0x16A87Cu: goto label_16a87c;
            case 0x16A880u: goto label_16a880;
            case 0x16A884u: goto label_16a884;
            case 0x16A888u: goto label_16a888;
            case 0x16A88Cu: goto label_16a88c;
            case 0x16A890u: goto label_16a890;
            case 0x16A894u: goto label_16a894;
            case 0x16A898u: goto label_16a898;
            case 0x16A89Cu: goto label_16a89c;
            case 0x16A8A0u: goto label_16a8a0;
            case 0x16A8A4u: goto label_16a8a4;
            case 0x16A8A8u: goto label_16a8a8;
            case 0x16A8ACu: goto label_16a8ac;
            case 0x16A8B0u: goto label_16a8b0;
            case 0x16A8B4u: goto label_16a8b4;
            case 0x16A8B8u: goto label_16a8b8;
            case 0x16A8BCu: goto label_16a8bc;
            case 0x16A8C0u: goto label_16a8c0;
            case 0x16A8C4u: goto label_16a8c4;
            case 0x16A8C8u: goto label_16a8c8;
            case 0x16A8CCu: goto label_16a8cc;
            case 0x16A8D0u: goto label_16a8d0;
            case 0x16A8D4u: goto label_16a8d4;
            case 0x16A8D8u: goto label_16a8d8;
            case 0x16A8DCu: goto label_16a8dc;
            case 0x16A8E0u: goto label_16a8e0;
            case 0x16A8E4u: goto label_16a8e4;
            case 0x16A8E8u: goto label_16a8e8;
            case 0x16A8ECu: goto label_16a8ec;
            case 0x16A8F0u: goto label_16a8f0;
            case 0x16A8F4u: goto label_16a8f4;
            case 0x16A8F8u: goto label_16a8f8;
            case 0x16A8FCu: goto label_16a8fc;
            case 0x16A900u: goto label_16a900;
            case 0x16A904u: goto label_16a904;
            case 0x16A908u: goto label_16a908;
            case 0x16A90Cu: goto label_16a90c;
            case 0x16A910u: goto label_16a910;
            case 0x16A914u: goto label_16a914;
            case 0x16A918u: goto label_16a918;
            case 0x16A91Cu: goto label_16a91c;
            case 0x16A920u: goto label_16a920;
            case 0x16A924u: goto label_16a924;
            case 0x16A928u: goto label_16a928;
            case 0x16A92Cu: goto label_16a92c;
            case 0x16A930u: goto label_16a930;
            case 0x16A934u: goto label_16a934;
            case 0x16A938u: goto label_16a938;
            case 0x16A93Cu: goto label_16a93c;
            case 0x16A940u: goto label_16a940;
            case 0x16A944u: goto label_16a944;
            case 0x16A948u: goto label_16a948;
            case 0x16A94Cu: goto label_16a94c;
            case 0x16A950u: goto label_16a950;
            case 0x16A954u: goto label_16a954;
            case 0x16A958u: goto label_16a958;
            case 0x16A95Cu: goto label_16a95c;
            case 0x16A960u: goto label_16a960;
            case 0x16A964u: goto label_16a964;
            case 0x16A968u: goto label_16a968;
            case 0x16A96Cu: goto label_16a96c;
            case 0x16A970u: goto label_16a970;
            case 0x16A974u: goto label_16a974;
            case 0x16A978u: goto label_16a978;
            case 0x16A97Cu: goto label_16a97c;
            case 0x16A980u: goto label_16a980;
            case 0x16A984u: goto label_16a984;
            case 0x16A988u: goto label_16a988;
            case 0x16A98Cu: goto label_16a98c;
            case 0x16A990u: goto label_16a990;
            case 0x16A994u: goto label_16a994;
            case 0x16A998u: goto label_16a998;
            case 0x16A99Cu: goto label_16a99c;
            case 0x16A9A0u: goto label_16a9a0;
            case 0x16A9A4u: goto label_16a9a4;
            case 0x16A9A8u: goto label_16a9a8;
            case 0x16A9ACu: goto label_16a9ac;
            case 0x16A9B0u: goto label_16a9b0;
            case 0x16A9B4u: goto label_16a9b4;
            case 0x16A9B8u: goto label_16a9b8;
            case 0x16A9BCu: goto label_16a9bc;
            case 0x16A9C0u: goto label_16a9c0;
            case 0x16A9C4u: goto label_16a9c4;
            case 0x16A9C8u: goto label_16a9c8;
            case 0x16A9CCu: goto label_16a9cc;
            case 0x16A9D0u: goto label_16a9d0;
            case 0x16A9D4u: goto label_16a9d4;
            case 0x16A9D8u: goto label_16a9d8;
            case 0x16A9DCu: goto label_16a9dc;
            case 0x16A9E0u: goto label_16a9e0;
            case 0x16A9E4u: goto label_16a9e4;
            case 0x16A9E8u: goto label_16a9e8;
            case 0x16A9ECu: goto label_16a9ec;
            case 0x16A9F0u: goto label_16a9f0;
            case 0x16A9F4u: goto label_16a9f4;
            case 0x16A9F8u: goto label_16a9f8;
            case 0x16A9FCu: goto label_16a9fc;
            case 0x16AA00u: goto label_16aa00;
            case 0x16AA04u: goto label_16aa04;
            case 0x16AA08u: goto label_16aa08;
            case 0x16AA0Cu: goto label_16aa0c;
            case 0x16AA10u: goto label_16aa10;
            case 0x16AA14u: goto label_16aa14;
            case 0x16AA18u: goto label_16aa18;
            case 0x16AA1Cu: goto label_16aa1c;
            case 0x16AA20u: goto label_16aa20;
            case 0x16AA24u: goto label_16aa24;
            case 0x16AA28u: goto label_16aa28;
            case 0x16AA2Cu: goto label_16aa2c;
            case 0x16AA30u: goto label_16aa30;
            case 0x16AA34u: goto label_16aa34;
            case 0x16AA38u: goto label_16aa38;
            case 0x16AA3Cu: goto label_16aa3c;
            case 0x16AA40u: goto label_16aa40;
            case 0x16AA44u: goto label_16aa44;
            case 0x16AA48u: goto label_16aa48;
            case 0x16AA4Cu: goto label_16aa4c;
            case 0x16AA50u: goto label_16aa50;
            case 0x16AA54u: goto label_16aa54;
            case 0x16AA58u: goto label_16aa58;
            case 0x16AA5Cu: goto label_16aa5c;
            case 0x16AA60u: goto label_16aa60;
            case 0x16AA64u: goto label_16aa64;
            case 0x16AA68u: goto label_16aa68;
            case 0x16AA6Cu: goto label_16aa6c;
            case 0x16AA70u: goto label_16aa70;
            case 0x16AA74u: goto label_16aa74;
            case 0x16AA78u: goto label_16aa78;
            case 0x16AA7Cu: goto label_16aa7c;
            case 0x16AA80u: goto label_16aa80;
            case 0x16AA84u: goto label_16aa84;
            case 0x16AA88u: goto label_16aa88;
            case 0x16AA8Cu: goto label_16aa8c;
            case 0x16AA90u: goto label_16aa90;
            case 0x16AA94u: goto label_16aa94;
            case 0x16AA98u: goto label_16aa98;
            case 0x16AA9Cu: goto label_16aa9c;
            case 0x16AAA0u: goto label_16aaa0;
            case 0x16AAA4u: goto label_16aaa4;
            case 0x16AAA8u: goto label_16aaa8;
            case 0x16AAACu: goto label_16aaac;
            case 0x16AAB0u: goto label_16aab0;
            case 0x16AAB4u: goto label_16aab4;
            case 0x16AAB8u: goto label_16aab8;
            case 0x16AABCu: goto label_16aabc;
            case 0x16AAC0u: goto label_16aac0;
            case 0x16AAC4u: goto label_16aac4;
            case 0x16AAC8u: goto label_16aac8;
            case 0x16AACCu: goto label_16aacc;
            case 0x16AAD0u: goto label_16aad0;
            case 0x16AAD4u: goto label_16aad4;
            case 0x16AAD8u: goto label_16aad8;
            case 0x16AADCu: goto label_16aadc;
            case 0x16AAE0u: goto label_16aae0;
            case 0x16AAE4u: goto label_16aae4;
            case 0x16AAE8u: goto label_16aae8;
            case 0x16AAECu: goto label_16aaec;
            case 0x16AAF0u: goto label_16aaf0;
            case 0x16AAF4u: goto label_16aaf4;
            case 0x16AAF8u: goto label_16aaf8;
            case 0x16AAFCu: goto label_16aafc;
            case 0x16AB00u: goto label_16ab00;
            case 0x16AB04u: goto label_16ab04;
            case 0x16AB08u: goto label_16ab08;
            case 0x16AB0Cu: goto label_16ab0c;
            case 0x16AB10u: goto label_16ab10;
            case 0x16AB14u: goto label_16ab14;
            case 0x16AB18u: goto label_16ab18;
            case 0x16AB1Cu: goto label_16ab1c;
            case 0x16AB20u: goto label_16ab20;
            case 0x16AB24u: goto label_16ab24;
            case 0x16AB28u: goto label_16ab28;
            case 0x16AB2Cu: goto label_16ab2c;
            case 0x16AB30u: goto label_16ab30;
            case 0x16AB34u: goto label_16ab34;
            case 0x16AB38u: goto label_16ab38;
            case 0x16AB3Cu: goto label_16ab3c;
            case 0x16AB40u: goto label_16ab40;
            case 0x16AB44u: goto label_16ab44;
            case 0x16AB48u: goto label_16ab48;
            case 0x16AB4Cu: goto label_16ab4c;
            case 0x16AB50u: goto label_16ab50;
            case 0x16AB54u: goto label_16ab54;
            case 0x16AB58u: goto label_16ab58;
            case 0x16AB5Cu: goto label_16ab5c;
            case 0x16AB60u: goto label_16ab60;
            case 0x16AB64u: goto label_16ab64;
            case 0x16AB68u: goto label_16ab68;
            case 0x16AB6Cu: goto label_16ab6c;
            case 0x16AB70u: goto label_16ab70;
            case 0x16AB74u: goto label_16ab74;
            case 0x16AB78u: goto label_16ab78;
            case 0x16AB7Cu: goto label_16ab7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A9A8u;
label_16a9a8:
    // 0x16a9a8: 0x27bdffb0
    ctx->pc = 0x16a9a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_16a9ac:
    // 0x16a9ac: 0xffb60030
    ctx->pc = 0x16a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_16a9b0:
    // 0x16a9b0: 0xa0b02d
    ctx->pc = 0x16a9b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a9b4:
    // 0x16a9b4: 0x24050005
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
label_16a9b8:
    // 0x16a9b8: 0xffb10008
    ctx->pc = 0x16a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16a9bc:
    // 0x16a9bc: 0xffb30018
    ctx->pc = 0x16a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_16a9c0:
    // 0x16a9c0: 0xe0982d
    ctx->pc = 0x16a9c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16a9c4:
    // 0x16a9c4: 0xffb40020
    ctx->pc = 0x16a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_16a9c8:
    // 0x16a9c8: 0xc0a02d
    ctx->pc = 0x16a9c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16a9cc:
    // 0x16a9cc: 0xffbe0040
    ctx->pc = 0x16a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_16a9d0:
    // 0x16a9d0: 0x100f02d
    ctx->pc = 0x16a9d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16a9d4:
    // 0x16a9d4: 0xffb00000
    ctx->pc = 0x16a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a9d8:
    // 0x16a9d8: 0xffb20010
    ctx->pc = 0x16a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16a9dc:
    // 0x16a9dc: 0xffb50028
    ctx->pc = 0x16a9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_16a9e0:
    // 0x16a9e0: 0xffb70038
    ctx->pc = 0x16a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_16a9e4:
    // 0x16a9e4: 0xffbf0048
    ctx->pc = 0x16a9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_16a9e8:
    // 0x16a9e8: 0xc05d58a
label_16a9ec:
    if (ctx->pc == 0x16A9ECu) {
        ctx->pc = 0x16A9ECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A9F0u;
        goto label_16a9f0;
    }
    ctx->pc = 0x16A9E8u;
    SET_GPR_U32(ctx, 31, 0x16A9F0u);
    ctx->pc = 0x16A9ECu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A9F0u; }
    }
    if (ctx->pc != 0x16A9F0u) { return; }
    ctx->pc = 0x16A9F0u;
label_16a9f0:
    // 0x16a9f0: 0x14400003
label_16a9f4:
    if (ctx->pc == 0x16A9F4u) {
        ctx->pc = 0x16A9F4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 17), 6884));
        ctx->pc = 0x16A9F8u;
        goto label_16a9f8;
    }
    ctx->pc = 0x16A9F0u;
    {
        const bool branch_taken_0x16a9f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A9F4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 17), 6884));
        if (branch_taken_0x16a9f0) {
            ctx->pc = 0x16AA00u;
            goto label_16aa00;
        }
    }
    ctx->pc = 0x16A9F8u;
label_16a9f8:
    // 0x16a9f8: 0x10000055
label_16a9fc:
    if (ctx->pc == 0x16A9FCu) {
        ctx->pc = 0x16A9FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16AA00u;
        goto label_16aa00;
    }
    ctx->pc = 0x16A9F8u;
    {
        const bool branch_taken_0x16a9f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A9FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16a9f8) {
            ctx->pc = 0x16AB50u;
            goto label_16ab50;
        }
    }
    ctx->pc = 0x16AA00u;
label_16aa00:
    // 0x16aa00: 0x2415ffff
    ctx->pc = 0x16aa00u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
label_16aa04:
    // 0x16aa04: 0x8ef00008
    ctx->pc = 0x16aa04u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_16aa08:
    // 0x16aa08: 0x8e020028
    ctx->pc = 0x16aa08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_16aa0c:
    // 0x16aa0c: 0x54550006
label_16aa10:
    if (ctx->pc == 0x16AA10u) {
        ctx->pc = 0x16AA10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x16AA14u;
        goto label_16aa14;
    }
    ctx->pc = 0x16AA0Cu;
    {
        const bool branch_taken_0x16aa0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x16aa0c) {
            ctx->pc = 0x16AA10u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->pc = 0x16AA28u;
            goto label_16aa28;
        }
    }
    ctx->pc = 0x16AA14u;
label_16aa14:
    // 0x16aa14: 0x220202d
    ctx->pc = 0x16aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16aa18:
    // 0x16aa18: 0xc05aae0
label_16aa1c:
    if (ctx->pc == 0x16AA1Cu) {
        ctx->pc = 0x16AA1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AA20u;
        goto label_16aa20;
    }
    ctx->pc = 0x16AA18u;
    SET_GPR_U32(ctx, 31, 0x16AA20u);
    ctx->pc = 0x16AA1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16AB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AB80_0x16ab80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA20u; }
    }
    if (ctx->pc != 0x16AA20u) { return; }
    ctx->pc = 0x16AA20u;
label_16aa20:
    // 0x16aa20: 0xae020028
    ctx->pc = 0x16aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_16aa24:
    // 0x16aa24: 0x8e020020
    ctx->pc = 0x16aa24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_16aa28:
    // 0x16aa28: 0x50550001
label_16aa2c:
    if (ctx->pc == 0x16AA2Cu) {
        ctx->pc = 0x16AA2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
        ctx->pc = 0x16AA30u;
        goto label_16aa30;
    }
    ctx->pc = 0x16AA28u;
    {
        const bool branch_taken_0x16aa28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 21));
        if (branch_taken_0x16aa28) {
            ctx->pc = 0x16AA2Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
            ctx->pc = 0x16AA30u;
            goto label_16aa30;
        }
    }
    ctx->pc = 0x16AA30u;
label_16aa30:
    // 0x16aa30: 0x220202d
    ctx->pc = 0x16aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16aa34:
    // 0x16aa34: 0xc05d58a
label_16aa38:
    if (ctx->pc == 0x16AA38u) {
        ctx->pc = 0x16AA38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x16AA3Cu;
        goto label_16aa3c;
    }
    ctx->pc = 0x16AA34u;
    SET_GPR_U32(ctx, 31, 0x16AA3Cu);
    ctx->pc = 0x16AA38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA3Cu; }
    }
    if (ctx->pc != 0x16AA3Cu) { return; }
    ctx->pc = 0x16AA3Cu;
label_16aa3c:
    // 0x16aa3c: 0x40902d
    ctx->pc = 0x16aa3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16aa40:
    // 0x16aa40: 0x12550025
label_16aa44:
    if (ctx->pc == 0x16AA44u) {
        ctx->pc = 0x16AA44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AA48u;
        goto label_16aa48;
    }
    ctx->pc = 0x16AA40u;
    {
        const bool branch_taken_0x16aa40 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 21));
        ctx->pc = 0x16AA44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16aa40) {
            ctx->pc = 0x16AAD8u;
            goto label_16aad8;
        }
    }
    ctx->pc = 0x16AA48u;
label_16aa48:
    // 0x16aa48: 0xc05d58a
label_16aa4c:
    if (ctx->pc == 0x16AA4Cu) {
        ctx->pc = 0x16AA4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 55));
        ctx->pc = 0x16AA50u;
        goto label_16aa50;
    }
    ctx->pc = 0x16AA48u;
    SET_GPR_U32(ctx, 31, 0x16AA50u);
    ctx->pc = 0x16AA4Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 55));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA50u; }
    }
    if (ctx->pc != 0x16AA50u) { return; }
    ctx->pc = 0x16AA50u;
label_16aa50:
    // 0x16aa50: 0x50400007
label_16aa54:
    if (ctx->pc == 0x16AA54u) {
        ctx->pc = 0x16AA54u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x16AA58u;
        goto label_16aa58;
    }
    ctx->pc = 0x16AA50u;
    {
        const bool branch_taken_0x16aa50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16aa50) {
            ctx->pc = 0x16AA54u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->pc = 0x16AA70u;
            goto label_16aa70;
        }
    }
    ctx->pc = 0x16AA58u;
label_16aa58:
    // 0x16aa58: 0x8e020018
    ctx->pc = 0x16aa58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_16aa5c:
    // 0x16aa5c: 0x2c2102a
    ctx->pc = 0x16aa5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 2)));
label_16aa60:
    // 0x16aa60: 0x14400005
label_16aa64:
    if (ctx->pc == 0x16AA64u) {
        ctx->pc = 0x16AA64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x16AA68u;
        goto label_16aa68;
    }
    ctx->pc = 0x16AA60u;
    {
        const bool branch_taken_0x16aa60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16AA64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x16aa60) {
            ctx->pc = 0x16AA78u;
            goto label_16aa78;
        }
    }
    ctx->pc = 0x16AA68u;
label_16aa68:
    // 0x16aa68: 0x1000001d
label_16aa6c:
    if (ctx->pc == 0x16AA6Cu) {
        ctx->pc = 0x16AA6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x16AA70u;
        goto label_16aa70;
    }
    ctx->pc = 0x16AA68u;
    {
        const bool branch_taken_0x16aa68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AA6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        if (branch_taken_0x16aa68) {
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AA70u;
label_16aa70:
    // 0x16aa70: 0x16c2001a
label_16aa74:
    if (ctx->pc == 0x16AA74u) {
        ctx->pc = 0x16AA74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x16AA78u;
        goto label_16aa78;
    }
    ctx->pc = 0x16AA70u;
    {
        const bool branch_taken_0x16aa70 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x16AA74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x16aa70) {
            ctx->pc = 0x16AADCu;
            goto label_16aadc;
        }
    }
    ctx->pc = 0x16AA78u;
label_16aa78:
    // 0x16aa78: 0x10920018
label_16aa7c:
    if (ctx->pc == 0x16AA7Cu) {
        ctx->pc = 0x16AA7Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        ctx->pc = 0x16AA80u;
        goto label_16aa80;
    }
    ctx->pc = 0x16AA78u;
    {
        const bool branch_taken_0x16aa78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 18));
        ctx->pc = 0x16AA7Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x16aa78) {
            ctx->pc = 0x16AADCu;
            goto label_16aadc;
        }
    }
    ctx->pc = 0x16AA80u;
label_16aa80:
    // 0x16aa80: 0x54400017
label_16aa84:
    if (ctx->pc == 0x16AA84u) {
        ctx->pc = 0x16AA84u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x16AA88u;
        goto label_16aa88;
    }
    ctx->pc = 0x16AA80u;
    {
        const bool branch_taken_0x16aa80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16aa80) {
            ctx->pc = 0x16AA84u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AA88u;
label_16aa88:
    // 0x16aa88: 0x82820000
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_16aa8c:
    // 0x16aa8c: 0x54400014
label_16aa90:
    if (ctx->pc == 0x16AA90u) {
        ctx->pc = 0x16AA90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x16AA94u;
        goto label_16aa94;
    }
    ctx->pc = 0x16AA8Cu;
    {
        const bool branch_taken_0x16aa8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16aa8c) {
            ctx->pc = 0x16AA90u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AA94u;
label_16aa94:
    // 0x16aa94: 0x82820001
    ctx->pc = 0x16aa94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_16aa98:
    // 0x16aa98: 0x54400011
label_16aa9c:
    if (ctx->pc == 0x16AA9Cu) {
        ctx->pc = 0x16AA9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x16AAA0u;
        goto label_16aaa0;
    }
    ctx->pc = 0x16AA98u;
    {
        const bool branch_taken_0x16aa98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16aa98) {
            ctx->pc = 0x16AA9Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AAA0u;
label_16aaa0:
    // 0x16aaa0: 0x92830002
    ctx->pc = 0x16aaa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_16aaa4:
    // 0x16aaa4: 0x24020001
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16aaa8:
    // 0x16aaa8: 0x5462000d
label_16aaac:
    if (ctx->pc == 0x16AAACu) {
        ctx->pc = 0x16AAACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x16AAB0u;
        goto label_16aab0;
    }
    ctx->pc = 0x16AAA8u;
    {
        const bool branch_taken_0x16aaa8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16aaa8) {
            ctx->pc = 0x16AAACu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AAB0u;
label_16aab0:
    // 0x16aab0: 0x92830003
    ctx->pc = 0x16aab0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_16aab4:
    // 0x16aab4: 0x240200b3
    ctx->pc = 0x16aab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 179));
label_16aab8:
    // 0x16aab8: 0x10620003
label_16aabc:
    if (ctx->pc == 0x16AABCu) {
        ctx->pc = 0x16AABCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 184));
        ctx->pc = 0x16AAC0u;
        goto label_16aac0;
    }
    ctx->pc = 0x16AAB8u;
    {
        const bool branch_taken_0x16aab8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16AABCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 184));
        if (branch_taken_0x16aab8) {
            ctx->pc = 0x16AAC8u;
            goto label_16aac8;
        }
    }
    ctx->pc = 0x16AAC0u;
label_16aac0:
    // 0x16aac0: 0x54620007
label_16aac4:
    if (ctx->pc == 0x16AAC4u) {
        ctx->pc = 0x16AAC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
        ctx->pc = 0x16AAC8u;
        goto label_16aac8;
    }
    ctx->pc = 0x16AAC0u;
    {
        const bool branch_taken_0x16aac0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16aac0) {
            ctx->pc = 0x16AAC4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
            ctx->pc = 0x16AAE0u;
            goto label_16aae0;
        }
    }
    ctx->pc = 0x16AAC8u;
label_16aac8:
    // 0x16aac8: 0xae120028
    ctx->pc = 0x16aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
label_16aacc:
    // 0x16aacc: 0x10000003
label_16aad0:
    if (ctx->pc == 0x16AAD0u) {
        ctx->pc = 0x16AAD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AAD4u;
        goto label_16aad4;
    }
    ctx->pc = 0x16AACCu;
    {
        const bool branch_taken_0x16aacc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AAD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16aacc) {
            ctx->pc = 0x16AADCu;
            goto label_16aadc;
        }
    }
    ctx->pc = 0x16AAD4u;
label_16aad4:
    // 0x16aad4: 0x0
    ctx->pc = 0x16aad4u;
    // NOP
label_16aad8:
    // 0x16aad8: 0x8e040028
    ctx->pc = 0x16aad8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_16aadc:
    // 0x16aadc: 0xae160018
    ctx->pc = 0x16aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
label_16aae0:
    // 0x16aae0: 0x1496001b
label_16aae4:
    if (ctx->pc == 0x16AAE4u) {
        ctx->pc = 0x16AAE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16AAE8u;
        goto label_16aae8;
    }
    ctx->pc = 0x16AAE0u;
    {
        const bool branch_taken_0x16aae0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 22));
        ctx->pc = 0x16AAE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16aae0) {
            ctx->pc = 0x16AB50u;
            goto label_16ab50;
        }
    }
    ctx->pc = 0x16AAE8u;
label_16aae8:
    // 0x16aae8: 0x260302d
    ctx->pc = 0x16aae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16aaec:
    // 0x16aaec: 0x220202d
    ctx->pc = 0x16aaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16aaf0:
    // 0x16aaf0: 0xc05c6b2
label_16aaf4:
    if (ctx->pc == 0x16AAF4u) {
        ctx->pc = 0x16AAF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AAF8u;
        goto label_16aaf8;
    }
    ctx->pc = 0x16AAF0u;
    SET_GPR_U32(ctx, 31, 0x16AAF8u);
    ctx->pc = 0x16AAF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AC8_0x171ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAF8u; }
    }
    if (ctx->pc != 0x16AAF8u) { return; }
    ctx->pc = 0x16AAF8u;
label_16aaf8:
    // 0x16aaf8: 0x40982d
    ctx->pc = 0x16aaf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16aafc:
    // 0x16aafc: 0x1a600014
label_16ab00:
    if (ctx->pc == 0x16AB00u) {
        ctx->pc = 0x16AB00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AB04u;
        goto label_16ab04;
    }
    ctx->pc = 0x16AAFCu;
    {
        const bool branch_taken_0x16aafc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16AB00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16aafc) {
            ctx->pc = 0x16AB50u;
            goto label_16ab50;
        }
    }
    ctx->pc = 0x16AB04u;
label_16ab04:
    // 0x16ab04: 0x8ee50014
    ctx->pc = 0x16ab04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_16ab08:
    // 0x16ab08: 0x3c0402d
    ctx->pc = 0x16ab08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_16ab0c:
    // 0x16ab0c: 0x220202d
    ctx->pc = 0x16ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ab10:
    // 0x16ab10: 0x280302d
    ctx->pc = 0x16ab10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16ab14:
    // 0x16ab14: 0xc05aba8
label_16ab18:
    if (ctx->pc == 0x16AB18u) {
        ctx->pc = 0x16AB18u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AB1Cu;
        goto label_16ab1c;
    }
    ctx->pc = 0x16AB14u;
    SET_GPR_U32(ctx, 31, 0x16AB1Cu);
    ctx->pc = 0x16AB18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16AEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AEA0_0x16aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB1Cu; }
    }
    if (ctx->pc != 0x16AB1Cu) { return; }
    ctx->pc = 0x16AB1Cu;
label_16ab1c:
    // 0x16ab1c: 0x40802d
    ctx->pc = 0x16ab1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16ab20:
    // 0x16ab20: 0x24020001
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16ab24:
    // 0x16ab24: 0x12020006
label_16ab28:
    if (ctx->pc == 0x16AB28u) {
        ctx->pc = 0x16AB28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AB2Cu;
        goto label_16ab2c;
    }
    ctx->pc = 0x16AB24u;
    {
        const bool branch_taken_0x16ab24 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x16AB28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ab24) {
            ctx->pc = 0x16AB40u;
            goto label_16ab40;
        }
    }
    ctx->pc = 0x16AB2Cu;
label_16ab2c:
    // 0x16ab2c: 0xc05c6ce
label_16ab30:
    if (ctx->pc == 0x16AB30u) {
        ctx->pc = 0x16AB30u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AB34u;
        goto label_16ab34;
    }
    ctx->pc = 0x16AB2Cu;
    SET_GPR_U32(ctx, 31, 0x16AB34u);
    ctx->pc = 0x16AB30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171B38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171B38_0x171b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB34u; }
    }
    if (ctx->pc != 0x16AB34u) { return; }
    ctx->pc = 0x16AB34u;
label_16ab34:
    // 0x16ab34: 0x10000006
label_16ab38:
    if (ctx->pc == 0x16AB38u) {
        ctx->pc = 0x16AB38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AB3Cu;
        goto label_16ab3c;
    }
    ctx->pc = 0x16AB34u;
    {
        const bool branch_taken_0x16ab34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AB38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ab34) {
            ctx->pc = 0x16AB50u;
            goto label_16ab50;
        }
    }
    ctx->pc = 0x16AB3Cu;
label_16ab3c:
    // 0x16ab3c: 0x0
    ctx->pc = 0x16ab3cu;
    // NOP
label_16ab40:
    // 0x16ab40: 0x280282d
    ctx->pc = 0x16ab40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16ab44:
    // 0x16ab44: 0xc05c79a
label_16ab48:
    if (ctx->pc == 0x16AB48u) {
        ctx->pc = 0x16AB48u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AB4Cu;
        goto label_16ab4c;
    }
    ctx->pc = 0x16AB44u;
    SET_GPR_U32(ctx, 31, 0x16AB4Cu);
    ctx->pc = 0x16AB48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171E68_0x171e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB4Cu; }
    }
    if (ctx->pc != 0x16AB4Cu) { return; }
    ctx->pc = 0x16AB4Cu;
label_16ab4c:
    // 0x16ab4c: 0x200102d
    ctx->pc = 0x16ab4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16ab50:
    // 0x16ab50: 0xdfb00000
    ctx->pc = 0x16ab50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ab54:
    // 0x16ab54: 0xdfb10008
    ctx->pc = 0x16ab54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16ab58:
    // 0x16ab58: 0xdfb20010
    ctx->pc = 0x16ab58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ab5c:
    // 0x16ab5c: 0xdfb30018
    ctx->pc = 0x16ab5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16ab60:
    // 0x16ab60: 0xdfb40020
    ctx->pc = 0x16ab60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16ab64:
    // 0x16ab64: 0xdfb50028
    ctx->pc = 0x16ab64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16ab68:
    // 0x16ab68: 0xdfb60030
    ctx->pc = 0x16ab68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16ab6c:
    // 0x16ab6c: 0xdfb70038
    ctx->pc = 0x16ab6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16ab70:
    // 0x16ab70: 0xdfbe0040
    ctx->pc = 0x16ab70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16ab74:
    // 0x16ab74: 0xdfbf0048
    ctx->pc = 0x16ab74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_16ab78:
    // 0x16ab78: 0x3e00008
label_16ab7c:
    if (ctx->pc == 0x16AB7Cu) {
        ctx->pc = 0x16AB7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16AB80u;
        goto label_fallthrough_0x16ab78;
    }
    ctx->pc = 0x16AB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A7C0u: goto label_16a7c0;
            case 0x16A7C4u: goto label_16a7c4;
            case 0x16A7C8u: goto label_16a7c8;
            case 0x16A7CCu: goto label_16a7cc;
            case 0x16A7D0u: goto label_16a7d0;
            case 0x16A7D4u: goto label_16a7d4;
            case 0x16A7D8u: goto label_16a7d8;
            case 0x16A7DCu: goto label_16a7dc;
            case 0x16A7E0u: goto label_16a7e0;
            case 0x16A7E4u: goto label_16a7e4;
            case 0x16A7E8u: goto label_16a7e8;
            case 0x16A7ECu: goto label_16a7ec;
            case 0x16A7F0u: goto label_16a7f0;
            case 0x16A7F4u: goto label_16a7f4;
            case 0x16A7F8u: goto label_16a7f8;
            case 0x16A7FCu: goto label_16a7fc;
            case 0x16A800u: goto label_16a800;
            case 0x16A804u: goto label_16a804;
            case 0x16A808u: goto label_16a808;
            case 0x16A80Cu: goto label_16a80c;
            case 0x16A810u: goto label_16a810;
            case 0x16A814u: goto label_16a814;
            case 0x16A818u: goto label_16a818;
            case 0x16A81Cu: goto label_16a81c;
            case 0x16A820u: goto label_16a820;
            case 0x16A824u: goto label_16a824;
            case 0x16A828u: goto label_16a828;
            case 0x16A82Cu: goto label_16a82c;
            case 0x16A830u: goto label_16a830;
            case 0x16A834u: goto label_16a834;
            case 0x16A838u: goto label_16a838;
            case 0x16A83Cu: goto label_16a83c;
            case 0x16A840u: goto label_16a840;
            case 0x16A844u: goto label_16a844;
            case 0x16A848u: goto label_16a848;
            case 0x16A84Cu: goto label_16a84c;
            case 0x16A850u: goto label_16a850;
            case 0x16A854u: goto label_16a854;
            case 0x16A858u: goto label_16a858;
            case 0x16A85Cu: goto label_16a85c;
            case 0x16A860u: goto label_16a860;
            case 0x16A864u: goto label_16a864;
            case 0x16A868u: goto label_16a868;
            case 0x16A86Cu: goto label_16a86c;
            case 0x16A870u: goto label_16a870;
            case 0x16A874u: goto label_16a874;
            case 0x16A878u: goto label_16a878;
            case 0x16A87Cu: goto label_16a87c;
            case 0x16A880u: goto label_16a880;
            case 0x16A884u: goto label_16a884;
            case 0x16A888u: goto label_16a888;
            case 0x16A88Cu: goto label_16a88c;
            case 0x16A890u: goto label_16a890;
            case 0x16A894u: goto label_16a894;
            case 0x16A898u: goto label_16a898;
            case 0x16A89Cu: goto label_16a89c;
            case 0x16A8A0u: goto label_16a8a0;
            case 0x16A8A4u: goto label_16a8a4;
            case 0x16A8A8u: goto label_16a8a8;
            case 0x16A8ACu: goto label_16a8ac;
            case 0x16A8B0u: goto label_16a8b0;
            case 0x16A8B4u: goto label_16a8b4;
            case 0x16A8B8u: goto label_16a8b8;
            case 0x16A8BCu: goto label_16a8bc;
            case 0x16A8C0u: goto label_16a8c0;
            case 0x16A8C4u: goto label_16a8c4;
            case 0x16A8C8u: goto label_16a8c8;
            case 0x16A8CCu: goto label_16a8cc;
            case 0x16A8D0u: goto label_16a8d0;
            case 0x16A8D4u: goto label_16a8d4;
            case 0x16A8D8u: goto label_16a8d8;
            case 0x16A8DCu: goto label_16a8dc;
            case 0x16A8E0u: goto label_16a8e0;
            case 0x16A8E4u: goto label_16a8e4;
            case 0x16A8E8u: goto label_16a8e8;
            case 0x16A8ECu: goto label_16a8ec;
            case 0x16A8F0u: goto label_16a8f0;
            case 0x16A8F4u: goto label_16a8f4;
            case 0x16A8F8u: goto label_16a8f8;
            case 0x16A8FCu: goto label_16a8fc;
            case 0x16A900u: goto label_16a900;
            case 0x16A904u: goto label_16a904;
            case 0x16A908u: goto label_16a908;
            case 0x16A90Cu: goto label_16a90c;
            case 0x16A910u: goto label_16a910;
            case 0x16A914u: goto label_16a914;
            case 0x16A918u: goto label_16a918;
            case 0x16A91Cu: goto label_16a91c;
            case 0x16A920u: goto label_16a920;
            case 0x16A924u: goto label_16a924;
            case 0x16A928u: goto label_16a928;
            case 0x16A92Cu: goto label_16a92c;
            case 0x16A930u: goto label_16a930;
            case 0x16A934u: goto label_16a934;
            case 0x16A938u: goto label_16a938;
            case 0x16A93Cu: goto label_16a93c;
            case 0x16A940u: goto label_16a940;
            case 0x16A944u: goto label_16a944;
            case 0x16A948u: goto label_16a948;
            case 0x16A94Cu: goto label_16a94c;
            case 0x16A950u: goto label_16a950;
            case 0x16A954u: goto label_16a954;
            case 0x16A958u: goto label_16a958;
            case 0x16A95Cu: goto label_16a95c;
            case 0x16A960u: goto label_16a960;
            case 0x16A964u: goto label_16a964;
            case 0x16A968u: goto label_16a968;
            case 0x16A96Cu: goto label_16a96c;
            case 0x16A970u: goto label_16a970;
            case 0x16A974u: goto label_16a974;
            case 0x16A978u: goto label_16a978;
            case 0x16A97Cu: goto label_16a97c;
            case 0x16A980u: goto label_16a980;
            case 0x16A984u: goto label_16a984;
            case 0x16A988u: goto label_16a988;
            case 0x16A98Cu: goto label_16a98c;
            case 0x16A990u: goto label_16a990;
            case 0x16A994u: goto label_16a994;
            case 0x16A998u: goto label_16a998;
            case 0x16A99Cu: goto label_16a99c;
            case 0x16A9A0u: goto label_16a9a0;
            case 0x16A9A4u: goto label_16a9a4;
            case 0x16A9A8u: goto label_16a9a8;
            case 0x16A9ACu: goto label_16a9ac;
            case 0x16A9B0u: goto label_16a9b0;
            case 0x16A9B4u: goto label_16a9b4;
            case 0x16A9B8u: goto label_16a9b8;
            case 0x16A9BCu: goto label_16a9bc;
            case 0x16A9C0u: goto label_16a9c0;
            case 0x16A9C4u: goto label_16a9c4;
            case 0x16A9C8u: goto label_16a9c8;
            case 0x16A9CCu: goto label_16a9cc;
            case 0x16A9D0u: goto label_16a9d0;
            case 0x16A9D4u: goto label_16a9d4;
            case 0x16A9D8u: goto label_16a9d8;
            case 0x16A9DCu: goto label_16a9dc;
            case 0x16A9E0u: goto label_16a9e0;
            case 0x16A9E4u: goto label_16a9e4;
            case 0x16A9E8u: goto label_16a9e8;
            case 0x16A9ECu: goto label_16a9ec;
            case 0x16A9F0u: goto label_16a9f0;
            case 0x16A9F4u: goto label_16a9f4;
            case 0x16A9F8u: goto label_16a9f8;
            case 0x16A9FCu: goto label_16a9fc;
            case 0x16AA00u: goto label_16aa00;
            case 0x16AA04u: goto label_16aa04;
            case 0x16AA08u: goto label_16aa08;
            case 0x16AA0Cu: goto label_16aa0c;
            case 0x16AA10u: goto label_16aa10;
            case 0x16AA14u: goto label_16aa14;
            case 0x16AA18u: goto label_16aa18;
            case 0x16AA1Cu: goto label_16aa1c;
            case 0x16AA20u: goto label_16aa20;
            case 0x16AA24u: goto label_16aa24;
            case 0x16AA28u: goto label_16aa28;
            case 0x16AA2Cu: goto label_16aa2c;
            case 0x16AA30u: goto label_16aa30;
            case 0x16AA34u: goto label_16aa34;
            case 0x16AA38u: goto label_16aa38;
            case 0x16AA3Cu: goto label_16aa3c;
            case 0x16AA40u: goto label_16aa40;
            case 0x16AA44u: goto label_16aa44;
            case 0x16AA48u: goto label_16aa48;
            case 0x16AA4Cu: goto label_16aa4c;
            case 0x16AA50u: goto label_16aa50;
            case 0x16AA54u: goto label_16aa54;
            case 0x16AA58u: goto label_16aa58;
            case 0x16AA5Cu: goto label_16aa5c;
            case 0x16AA60u: goto label_16aa60;
            case 0x16AA64u: goto label_16aa64;
            case 0x16AA68u: goto label_16aa68;
            case 0x16AA6Cu: goto label_16aa6c;
            case 0x16AA70u: goto label_16aa70;
            case 0x16AA74u: goto label_16aa74;
            case 0x16AA78u: goto label_16aa78;
            case 0x16AA7Cu: goto label_16aa7c;
            case 0x16AA80u: goto label_16aa80;
            case 0x16AA84u: goto label_16aa84;
            case 0x16AA88u: goto label_16aa88;
            case 0x16AA8Cu: goto label_16aa8c;
            case 0x16AA90u: goto label_16aa90;
            case 0x16AA94u: goto label_16aa94;
            case 0x16AA98u: goto label_16aa98;
            case 0x16AA9Cu: goto label_16aa9c;
            case 0x16AAA0u: goto label_16aaa0;
            case 0x16AAA4u: goto label_16aaa4;
            case 0x16AAA8u: goto label_16aaa8;
            case 0x16AAACu: goto label_16aaac;
            case 0x16AAB0u: goto label_16aab0;
            case 0x16AAB4u: goto label_16aab4;
            case 0x16AAB8u: goto label_16aab8;
            case 0x16AABCu: goto label_16aabc;
            case 0x16AAC0u: goto label_16aac0;
            case 0x16AAC4u: goto label_16aac4;
            case 0x16AAC8u: goto label_16aac8;
            case 0x16AACCu: goto label_16aacc;
            case 0x16AAD0u: goto label_16aad0;
            case 0x16AAD4u: goto label_16aad4;
            case 0x16AAD8u: goto label_16aad8;
            case 0x16AADCu: goto label_16aadc;
            case 0x16AAE0u: goto label_16aae0;
            case 0x16AAE4u: goto label_16aae4;
            case 0x16AAE8u: goto label_16aae8;
            case 0x16AAECu: goto label_16aaec;
            case 0x16AAF0u: goto label_16aaf0;
            case 0x16AAF4u: goto label_16aaf4;
            case 0x16AAF8u: goto label_16aaf8;
            case 0x16AAFCu: goto label_16aafc;
            case 0x16AB00u: goto label_16ab00;
            case 0x16AB04u: goto label_16ab04;
            case 0x16AB08u: goto label_16ab08;
            case 0x16AB0Cu: goto label_16ab0c;
            case 0x16AB10u: goto label_16ab10;
            case 0x16AB14u: goto label_16ab14;
            case 0x16AB18u: goto label_16ab18;
            case 0x16AB1Cu: goto label_16ab1c;
            case 0x16AB20u: goto label_16ab20;
            case 0x16AB24u: goto label_16ab24;
            case 0x16AB28u: goto label_16ab28;
            case 0x16AB2Cu: goto label_16ab2c;
            case 0x16AB30u: goto label_16ab30;
            case 0x16AB34u: goto label_16ab34;
            case 0x16AB38u: goto label_16ab38;
            case 0x16AB3Cu: goto label_16ab3c;
            case 0x16AB40u: goto label_16ab40;
            case 0x16AB44u: goto label_16ab44;
            case 0x16AB48u: goto label_16ab48;
            case 0x16AB4Cu: goto label_16ab4c;
            case 0x16AB50u: goto label_16ab50;
            case 0x16AB54u: goto label_16ab54;
            case 0x16AB58u: goto label_16ab58;
            case 0x16AB5Cu: goto label_16ab5c;
            case 0x16AB60u: goto label_16ab60;
            case 0x16AB64u: goto label_16ab64;
            case 0x16AB68u: goto label_16ab68;
            case 0x16AB6Cu: goto label_16ab6c;
            case 0x16AB70u: goto label_16ab70;
            case 0x16AB74u: goto label_16ab74;
            case 0x16AB78u: goto label_16ab78;
            case 0x16AB7Cu: goto label_16ab7c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16ab78:
    ctx->pc = 0x16AB80u;
}
