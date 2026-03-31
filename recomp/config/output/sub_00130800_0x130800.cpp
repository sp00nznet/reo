#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00130800
// Address: 0x130800 - 0x130b78
void sub_00130800_0x130800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130800u;

label_130800:
    // 0x130800: 0x27bdffb0
    ctx->pc = 0x130800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_130804:
    // 0x130804: 0xffb00020
    ctx->pc = 0x130804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_130808:
    // 0x130808: 0xffb10028
    ctx->pc = 0x130808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_13080c:
    // 0x13080c: 0x24110001
    ctx->pc = 0x13080cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_130810:
    // 0x130810: 0xffb30038
    ctx->pc = 0x130810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_130814:
    // 0x130814: 0x80982d
    ctx->pc = 0x130814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_130818:
    // 0x130818: 0xffb20030
    ctx->pc = 0x130818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_13081c:
    // 0x13081c: 0xffb40040
    ctx->pc = 0x13081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_130820:
    // 0x130820: 0xffbf0048
    ctx->pc = 0x130820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_130824:
    // 0x130824: 0x8e640008
    ctx->pc = 0x130824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_130828:
    // 0x130828: 0xc04d7d4
label_13082c:
    if (ctx->pc == 0x13082Cu) {
        ctx->pc = 0x13082Cu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x130830u;
        goto label_130830;
    }
    ctx->pc = 0x130828u;
    SET_GPR_U32(ctx, 31, 0x130830u);
    ctx->pc = 0x13082Cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->pc = 0x135F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F50_0x135f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130830u; }
    }
    if (ctx->pc != 0x130830u) { return; }
    ctx->pc = 0x130830u;
label_130830:
    // 0x130830: 0xc0505b4
label_130834:
    if (ctx->pc == 0x130834u) {
        ctx->pc = 0x130834u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130838u;
        goto label_130838;
    }
    ctx->pc = 0x130830u;
    SET_GPR_U32(ctx, 31, 0x130838u);
    ctx->pc = 0x130834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1416D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416D0_0x1416d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130838u; }
    }
    if (ctx->pc != 0x130838u) { return; }
    ctx->pc = 0x130838u;
label_130838:
    // 0x130838: 0x82620002
    ctx->pc = 0x130838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_13083c:
    // 0x13083c: 0x5451005a
label_130840:
    if (ctx->pc == 0x130840u) {
        ctx->pc = 0x130840u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 17));
        ctx->pc = 0x130844u;
        goto label_130844;
    }
    ctx->pc = 0x13083Cu;
    {
        const bool branch_taken_0x13083c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x13083c) {
            ctx->pc = 0x130840u;
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 17));
            ctx->pc = 0x1309A8u;
            goto label_1309a8;
        }
    }
    ctx->pc = 0x130844u;
label_130844:
    // 0x130844: 0x56110046
label_130848:
    if (ctx->pc == 0x130848u) {
        ctx->pc = 0x130848u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x13084Cu;
        goto label_13084c;
    }
    ctx->pc = 0x130844u;
    {
        const bool branch_taken_0x130844 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 17));
        if (branch_taken_0x130844) {
            ctx->pc = 0x130848u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x130960u;
            goto label_130960;
        }
    }
    ctx->pc = 0x13084Cu;
label_13084c:
    // 0x13084c: 0xa2600002
    ctx->pc = 0x13084cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_130850:
    // 0x130850: 0xc0505ba
label_130854:
    if (ctx->pc == 0x130854u) {
        ctx->pc = 0x130854u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x130858u;
        goto label_130858;
    }
    ctx->pc = 0x130850u;
    SET_GPR_U32(ctx, 31, 0x130858u);
    ctx->pc = 0x130854u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130858u; }
    }
    if (ctx->pc != 0x130858u) { return; }
    ctx->pc = 0x130858u;
label_130858:
    // 0x130858: 0x8e70001c
    ctx->pc = 0x130858u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_13085c:
    // 0x13085c: 0x27b10010
    ctx->pc = 0x13085cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
label_130860:
    // 0x130860: 0x3a0302d
    ctx->pc = 0x130860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130864:
    // 0x130864: 0x1082c0
    ctx->pc = 0x130864u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 11));
label_130868:
    // 0x130868: 0x220382d
    ctx->pc = 0x130868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13086c:
    // 0x13086c: 0x200282d
    ctx->pc = 0x13086cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130870:
    // 0x130870: 0xc0501f8
label_130874:
    if (ctx->pc == 0x130874u) {
        ctx->pc = 0x130874u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130878u;
        goto label_130878;
    }
    ctx->pc = 0x130870u;
    SET_GPR_U32(ctx, 31, 0x130878u);
    ctx->pc = 0x130874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130878u; }
    }
    if (ctx->pc != 0x130878u) { return; }
    ctx->pc = 0x130878u;
label_130878:
    // 0x130878: 0x8e830000
    ctx->pc = 0x130878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_13087c:
    // 0x13087c: 0x3a0302d
    ctx->pc = 0x13087cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_130880:
    // 0x130880: 0x280202d
    ctx->pc = 0x130880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130884:
    // 0x130884: 0x8c620020
    ctx->pc = 0x130884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_130888:
    // 0x130888: 0x40f809
label_13088c:
    if (ctx->pc == 0x13088Cu) {
        ctx->pc = 0x13088Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x130890u;
        goto label_130890;
    }
    ctx->pc = 0x130888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130890u);
        ctx->pc = 0x13088Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130890u; }
            if (ctx->pc != 0x130890u) { return; }
        }
    }
    ctx->pc = 0x130890u;
label_130890:
    // 0x130890: 0x8e830000
    ctx->pc = 0x130890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_130894:
    // 0x130894: 0x280202d
    ctx->pc = 0x130894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130898:
    // 0x130898: 0x220302d
    ctx->pc = 0x130898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13089c:
    // 0x13089c: 0x8c62001c
    ctx->pc = 0x13089cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1308a0:
    // 0x1308a0: 0x40f809
label_1308a4:
    if (ctx->pc == 0x1308A4u) {
        ctx->pc = 0x1308A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1308A8u;
        goto label_1308a8;
    }
    ctx->pc = 0x1308A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1308A8u);
        ctx->pc = 0x1308A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1308A8u; }
            if (ctx->pc != 0x1308A8u) { return; }
        }
    }
    ctx->pc = 0x1308A8u;
label_1308a8:
    // 0x1308a8: 0x8e660054
    ctx->pc = 0x1308a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_1308ac:
    // 0x1308ac: 0x8e620010
    ctx->pc = 0x1308acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1308b0:
    // 0x1308b0: 0x8e650030
    ctx->pc = 0x1308b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1308b4:
    // 0x1308b4: 0x28440000
    ctx->pc = 0x1308b4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
label_1308b8:
    // 0x1308b8: 0x244707ff
    ctx->pc = 0x1308b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 2047));
label_1308bc:
    // 0x1308bc: 0x40182d
    ctx->pc = 0x1308bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1308c0:
    // 0x1308c0: 0x8e68001c
    ctx->pc = 0x1308c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1308c4:
    // 0x1308c4: 0xe4180b
    ctx->pc = 0x1308c4u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
label_1308c8:
    // 0x1308c8: 0x8e69002c
    ctx->pc = 0x1308c8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1308cc:
    // 0x1308cc: 0x31ac3
    ctx->pc = 0x1308ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1308d0:
    // 0x1308d0: 0xb02821
    ctx->pc = 0x1308d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1308d4:
    // 0x1308d4: 0x322c0
    ctx->pc = 0x1308d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 11));
label_1308d8:
    // 0x1308d8: 0xc83021
    ctx->pc = 0x1308d8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1308dc:
    // 0x1308dc: 0x441023
    ctx->pc = 0x1308dcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1308e0:
    // 0x1308e0: 0xae650030
    ctx->pc = 0x1308e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 5));
label_1308e4:
    // 0x1308e4: 0x2102a
    ctx->pc = 0x1308e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
label_1308e8:
    // 0x1308e8: 0xae400000
    ctx->pc = 0x1308e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1308ec:
    // 0x1308ec: 0x628021
    ctx->pc = 0x1308ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1308f0:
    // 0x1308f0: 0xae660054
    ctx->pc = 0x1308f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 6));
label_1308f4:
    // 0x1308f4: 0x14c90006
label_1308f8:
    if (ctx->pc == 0x1308F8u) {
        ctx->pc = 0x1308F8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1308FCu;
        goto label_1308fc;
    }
    ctx->pc = 0x1308F4u;
    {
        const bool branch_taken_0x1308f4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 9));
        ctx->pc = 0x1308F8u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x1308f4) {
            ctx->pc = 0x130910u;
            goto label_130910;
        }
    }
    ctx->pc = 0x1308FCu;
label_1308fc:
    // 0x1308fc: 0x8e620034
    ctx->pc = 0x1308fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_130900:
    // 0x130900: 0x50400004
label_130904:
    if (ctx->pc == 0x130904u) {
        ctx->pc = 0x130904u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x130908u;
        goto label_130908;
    }
    ctx->pc = 0x130900u;
    {
        const bool branch_taken_0x130900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x130900) {
            ctx->pc = 0x130904u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->pc = 0x130914u;
            goto label_130914;
        }
    }
    ctx->pc = 0x130908u;
label_130908:
    // 0x130908: 0x40f809
label_13090c:
    if (ctx->pc == 0x13090Cu) {
        ctx->pc = 0x13090Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->pc = 0x130910u;
        goto label_130910;
    }
    ctx->pc = 0x130908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130910u);
        ctx->pc = 0x13090Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130910u; }
            if (ctx->pc != 0x130910u) { return; }
        }
    }
    ctx->pc = 0x130910u;
label_130910:
    // 0x130910: 0x8e620054
    ctx->pc = 0x130910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_130914:
    // 0x130914: 0x50102a
    ctx->pc = 0x130914u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_130918:
    // 0x130918: 0x1040000d
label_13091c:
    if (ctx->pc == 0x13091Cu) {
        ctx->pc = 0x13091Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x130920u;
        goto label_130920;
    }
    ctx->pc = 0x130918u;
    {
        const bool branch_taken_0x130918 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13091Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x130918) {
            ctx->pc = 0x130950u;
            goto label_130950;
        }
    }
    ctx->pc = 0x130920u;
label_130920:
    // 0x130920: 0x8e620030
    ctx->pc = 0x130920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_130924:
    // 0x130924: 0x8e630058
    ctx->pc = 0x130924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_130928:
    // 0x130928: 0x212c2
    ctx->pc = 0x130928u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
label_13092c:
    // 0x13092c: 0x43102b
    ctx->pc = 0x13092cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_130930:
    // 0x130930: 0x54400089
label_130934:
    if (ctx->pc == 0x130934u) {
        ctx->pc = 0x130934u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x130938u;
        goto label_130938;
    }
    ctx->pc = 0x130930u;
    {
        const bool branch_taken_0x130930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130930) {
            ctx->pc = 0x130934u;
            WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x130938u;
label_130938:
    // 0x130938: 0x3c02000f
    ctx->pc = 0x130938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
label_13093c:
    // 0x13093c: 0x3442fffe
    ctx->pc = 0x13093cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
label_130940:
    // 0x130940: 0x43102b
    ctx->pc = 0x130940u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_130944:
    // 0x130944: 0x54400084
label_130948:
    if (ctx->pc == 0x130948u) {
        ctx->pc = 0x130948u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x13094Cu;
        goto label_13094c;
    }
    ctx->pc = 0x130944u;
    {
        const bool branch_taken_0x130944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130944) {
            ctx->pc = 0x130948u;
            WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x13094Cu;
label_13094c:
    // 0x13094c: 0x24020003
    ctx->pc = 0x13094cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_130950:
    // 0x130950: 0xa2620001
    ctx->pc = 0x130950u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_130954:
    // 0x130954: 0x10000080
label_130958:
    if (ctx->pc == 0x130958u) {
        ctx->pc = 0x130958u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x13095Cu;
        goto label_13095c;
    }
    ctx->pc = 0x130954u;
    {
        const bool branch_taken_0x130954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130958u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x130954) {
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x13095Cu;
label_13095c:
    // 0x13095c: 0x0
    ctx->pc = 0x13095cu;
    // NOP
label_130960:
    // 0x130960: 0x1602000d
label_130964:
    if (ctx->pc == 0x130964u) {
        ctx->pc = 0x130968u;
        goto label_130968;
    }
    ctx->pc = 0x130960u;
    {
        const bool branch_taken_0x130960 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x130960) {
            ctx->pc = 0x130998u;
            goto label_130998;
        }
    }
    ctx->pc = 0x130968u;
label_130968:
    // 0x130968: 0xa2600002
    ctx->pc = 0x130968u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_13096c:
    // 0x13096c: 0xc0505ba
label_130970:
    if (ctx->pc == 0x130970u) {
        ctx->pc = 0x130970u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x130974u;
        goto label_130974;
    }
    ctx->pc = 0x13096Cu;
    SET_GPR_U32(ctx, 31, 0x130974u);
    ctx->pc = 0x130970u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 32));
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130974u; }
    }
    if (ctx->pc != 0x130974u) { return; }
    ctx->pc = 0x130974u;
label_130974:
    // 0x130974: 0x8e830000
    ctx->pc = 0x130974u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_130978:
    // 0x130978: 0x280202d
    ctx->pc = 0x130978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13097c:
    // 0x13097c: 0x282d
    ctx->pc = 0x13097cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130980:
    // 0x130980: 0x8c62001c
    ctx->pc = 0x130980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_130984:
    // 0x130984: 0x40f809
label_130988:
    if (ctx->pc == 0x130988u) {
        ctx->pc = 0x130988u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13098Cu;
        goto label_13098c;
    }
    ctx->pc = 0x130984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13098Cu);
        ctx->pc = 0x130988u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13098Cu; }
            if (ctx->pc != 0x13098Cu) { return; }
        }
    }
    ctx->pc = 0x13098Cu;
label_13098c:
    // 0x13098c: 0xae000000
    ctx->pc = 0x13098cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_130990:
    // 0x130990: 0x10000064
label_130994:
    if (ctx->pc == 0x130994u) {
        ctx->pc = 0x130994u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x130998u;
        goto label_130998;
    }
    ctx->pc = 0x130990u;
    {
        const bool branch_taken_0x130990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130994u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x130990) {
            ctx->pc = 0x130B24u;
            goto label_130b24;
        }
    }
    ctx->pc = 0x130998u;
label_130998:
    // 0x130998: 0xc0505ba
label_13099c:
    if (ctx->pc == 0x13099Cu) {
        ctx->pc = 0x1309A0u;
        goto label_1309a0;
    }
    ctx->pc = 0x130998u;
    SET_GPR_U32(ctx, 31, 0x1309A0u);
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309A0u; }
    }
    if (ctx->pc != 0x1309A0u) { return; }
    ctx->pc = 0x1309A0u;
label_1309a0:
    // 0x1309a0: 0x1000006e
label_1309a4:
    if (ctx->pc == 0x1309A4u) {
        ctx->pc = 0x1309A4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1309A8u;
        goto label_1309a8;
    }
    ctx->pc = 0x1309A0u;
    {
        const bool branch_taken_0x1309a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1309A4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1309a0) {
            ctx->pc = 0x130B5Cu;
            goto label_130b5c;
        }
    }
    ctx->pc = 0x1309A8u;
label_1309a8:
    // 0x1309a8: 0xae600020
    ctx->pc = 0x1309a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_1309ac:
    // 0x1309ac: 0xc0505ba
label_1309b0:
    if (ctx->pc == 0x1309B0u) {
        ctx->pc = 0x1309B0u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1309B4u;
        goto label_1309b4;
    }
    ctx->pc = 0x1309ACu;
    SET_GPR_U32(ctx, 31, 0x1309B4u);
    ctx->pc = 0x1309B0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1416E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001416E8_0x1416e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1309B4u; }
    }
    if (ctx->pc != 0x1309B4u) { return; }
    ctx->pc = 0x1309B4u;
label_1309b4:
    // 0x1309b4: 0x82620040
    ctx->pc = 0x1309b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
label_1309b8:
    // 0x1309b8: 0x50510067
label_1309bc:
    if (ctx->pc == 0x1309BCu) {
        ctx->pc = 0x1309BCu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1309C0u;
        goto label_1309c0;
    }
    ctx->pc = 0x1309B8u;
    {
        const bool branch_taken_0x1309b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x1309b8) {
            ctx->pc = 0x1309BCu;
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x1309C0u;
label_1309c0:
    // 0x1309c0: 0x82620044
    ctx->pc = 0x1309c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
label_1309c4:
    // 0x1309c4: 0x50510064
label_1309c8:
    if (ctx->pc == 0x1309C8u) {
        ctx->pc = 0x1309C8u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1309CCu;
        goto label_1309cc;
    }
    ctx->pc = 0x1309C4u;
    {
        const bool branch_taken_0x1309c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x1309c4) {
            ctx->pc = 0x1309C8u;
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x1309CCu;
label_1309cc:
    // 0x1309cc: 0x8e620010
    ctx->pc = 0x1309ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1309d0:
    // 0x1309d0: 0x14400005
label_1309d4:
    if (ctx->pc == 0x1309D4u) {
        ctx->pc = 0x1309D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1309D8u;
        goto label_1309d8;
    }
    ctx->pc = 0x1309D0u;
    {
        const bool branch_taken_0x1309d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1309D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1309d0) {
            ctx->pc = 0x1309E8u;
            goto label_1309e8;
        }
    }
    ctx->pc = 0x1309D8u;
label_1309d8:
    // 0x1309d8: 0xa2600002
    ctx->pc = 0x1309d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1309dc:
    // 0x1309dc: 0xa2620001
    ctx->pc = 0x1309dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1309e0:
    // 0x1309e0: 0x1000005d
label_1309e4:
    if (ctx->pc == 0x1309E4u) {
        ctx->pc = 0x1309E4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x1309E8u;
        goto label_1309e8;
    }
    ctx->pc = 0x1309E0u;
    {
        const bool branch_taken_0x1309e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1309E4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        if (branch_taken_0x1309e0) {
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x1309E8u;
label_1309e8:
    // 0x1309e8: 0x12800004
label_1309ec:
    if (ctx->pc == 0x1309ECu) {
        ctx->pc = 0x1309F0u;
        goto label_1309f0;
    }
    ctx->pc = 0x1309E8u;
    {
        const bool branch_taken_0x1309e8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x1309e8) {
            ctx->pc = 0x1309FCu;
            goto label_1309fc;
        }
    }
    ctx->pc = 0x1309F0u;
label_1309f0:
    // 0x1309f0: 0x8e820000
    ctx->pc = 0x1309f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1309f4:
    // 0x1309f4: 0x54400006
label_1309f8:
    if (ctx->pc == 0x1309F8u) {
        ctx->pc = 0x1309F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->pc = 0x1309FCu;
        goto label_1309fc;
    }
    ctx->pc = 0x1309F4u;
    {
        const bool branch_taken_0x1309f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1309f4) {
            ctx->pc = 0x1309F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->pc = 0x130A10u;
            goto label_130a10;
        }
    }
    ctx->pc = 0x1309FCu;
label_1309fc:
    // 0x1309fc: 0xc04c1fa
label_130a00:
    if (ctx->pc == 0x130A00u) {
        ctx->pc = 0x130A00u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x130A04u;
        goto label_130a04;
    }
    ctx->pc = 0x1309FCu;
    SET_GPR_U32(ctx, 31, 0x130A04u);
    ctx->pc = 0x130A00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1307E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001307E8_0x1307e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130A04u; }
    }
    if (ctx->pc != 0x130A04u) { return; }
    ctx->pc = 0x130A04u;
label_130a04:
    // 0x130a04: 0x10000055
label_130a08:
    if (ctx->pc == 0x130A08u) {
        ctx->pc = 0x130A08u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x130A0Cu;
        goto label_130a0c;
    }
    ctx->pc = 0x130A04u;
    {
        const bool branch_taken_0x130a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130A08u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x130a04) {
            ctx->pc = 0x130B5Cu;
            goto label_130b5c;
        }
    }
    ctx->pc = 0x130A0Cu;
label_130a0c:
    // 0x130a0c: 0x0
    ctx->pc = 0x130a0cu;
    // NOP
label_130a10:
    // 0x130a10: 0x280202d
    ctx->pc = 0x130a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a14:
    // 0x130a14: 0x40f809
label_130a18:
    if (ctx->pc == 0x130A18u) {
        ctx->pc = 0x130A18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130A1Cu;
        goto label_130a1c;
    }
    ctx->pc = 0x130A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130A1Cu);
        ctx->pc = 0x130A18u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130A1Cu; }
            if (ctx->pc != 0x130A1Cu) { return; }
        }
    }
    ctx->pc = 0x130A1Cu;
label_130a1c:
    // 0x130a1c: 0x8e63003c
    ctx->pc = 0x130a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_130a20:
    // 0x130a20: 0x8e640018
    ctx->pc = 0x130a20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_130a24:
    // 0x130a24: 0x621823
    ctx->pc = 0x130a24u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_130a28:
    // 0x130a28: 0x64182a
    ctx->pc = 0x130a28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_130a2c:
    // 0x130a2c: 0x54600004
label_130a30:
    if (ctx->pc == 0x130A30u) {
        ctx->pc = 0x130A30u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x130A34u;
        goto label_130a34;
    }
    ctx->pc = 0x130A2Cu;
    {
        const bool branch_taken_0x130a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x130a2c) {
            ctx->pc = 0x130A30u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->pc = 0x130A40u;
            goto label_130a40;
        }
    }
    ctx->pc = 0x130A34u;
label_130a34:
    // 0x130a34: 0x10000048
label_130a38:
    if (ctx->pc == 0x130A38u) {
        ctx->pc = 0x130A38u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x130A3Cu;
        goto label_130a3c;
    }
    ctx->pc = 0x130A34u;
    {
        const bool branch_taken_0x130a34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130A38u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x130a34) {
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x130A3Cu;
label_130a3c:
    // 0x130a3c: 0x0
    ctx->pc = 0x130a3cu;
    // NOP
label_130a40:
    // 0x130a40: 0x27a70010
    ctx->pc = 0x130a40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
label_130a44:
    // 0x130a44: 0x8e660014
    ctx->pc = 0x130a44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_130a48:
    // 0x130a48: 0x280202d
    ctx->pc = 0x130a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130a4c:
    // 0x130a4c: 0x8c620018
    ctx->pc = 0x130a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_130a50:
    // 0x130a50: 0x40f809
label_130a54:
    if (ctx->pc == 0x130A54u) {
        ctx->pc = 0x130A54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130A58u;
        goto label_130a58;
    }
    ctx->pc = 0x130A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130A58u);
        ctx->pc = 0x130A54u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130A58u; }
            if (ctx->pc != 0x130A58u) { return; }
        }
    }
    ctx->pc = 0x130A58u;
label_130a58:
    // 0x130a58: 0x8e67002c
    ctx->pc = 0x130a58u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_130a5c:
    // 0x130a5c: 0x8fa40014
    ctx->pc = 0x130a5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_130a60:
    // 0x130a60: 0x302d
    ctx->pc = 0x130a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130a64:
    // 0x130a64: 0x8e620010
    ctx->pc = 0x130a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_130a68:
    // 0x130a68: 0x8e6a0054
    ctx->pc = 0x130a68u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_130a6c:
    // 0x130a6c: 0x248807ff
    ctx->pc = 0x130a6cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 2047));
label_130a70:
    // 0x130a70: 0x28850000
    ctx->pc = 0x130a70u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 4), 0));
label_130a74:
    // 0x130a74: 0x244907ff
    ctx->pc = 0x130a74u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 2047));
label_130a78:
    // 0x130a78: 0x105200b
    ctx->pc = 0x130a78u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 8));
label_130a7c:
    // 0x130a7c: 0x8e65000c
    ctx->pc = 0x130a7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_130a80:
    // 0x130a80: 0x28430000
    ctx->pc = 0x130a80u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
label_130a84:
    // 0x130a84: 0xea3823
    ctx->pc = 0x130a84u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
label_130a88:
    // 0x130a88: 0x123100b
    ctx->pc = 0x130a88u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 9));
label_130a8c:
    // 0x130a8c: 0x422c3
    ctx->pc = 0x130a8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
label_130a90:
    // 0x130a90: 0x87182a
    ctx->pc = 0x130a90u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_130a94:
    // 0x130a94: 0x212c3
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_130a98:
    // 0x130a98: 0x83380b
    ctx->pc = 0x130a98u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
label_130a9c:
    // 0x130a9c: 0x8e640008
    ctx->pc = 0x130a9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_130aa0:
    // 0x130aa0: 0x4a1023
    ctx->pc = 0x130aa0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_130aa4:
    // 0x130aa4: 0x8e700028
    ctx->pc = 0x130aa4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_130aa8:
    // 0x130aa8: 0xe2182a
    ctx->pc = 0x130aa8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
label_130aac:
    // 0x130aac: 0xaa2821
    ctx->pc = 0x130aacu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_130ab0:
    // 0x130ab0: 0xe3100b
    ctx->pc = 0x130ab0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
label_130ab4:
    // 0x130ab4: 0x50182a
    ctx->pc = 0x130ab4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_130ab8:
    // 0x130ab8: 0xc04d758
label_130abc:
    if (ctx->pc == 0x130ABCu) {
        ctx->pc = 0x130ABCu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
        ctx->pc = 0x130AC0u;
        goto label_130ac0;
    }
    ctx->pc = 0x130AB8u;
    SET_GPR_U32(ctx, 31, 0x130AC0u);
    ctx->pc = 0x130ABCu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    ctx->pc = 0x135D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135D60_0x135d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AC0u; }
    }
    if (ctx->pc != 0x130AC0u) { return; }
    ctx->pc = 0x130AC0u;
label_130ac0:
    // 0x130ac0: 0x8fa60010
    ctx->pc = 0x130ac0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_130ac4:
    // 0x130ac4: 0x200282d
    ctx->pc = 0x130ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130ac8:
    // 0x130ac8: 0xc04d772
label_130acc:
    if (ctx->pc == 0x130ACCu) {
        ctx->pc = 0x130ACCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x130AD0u;
        goto label_130ad0;
    }
    ctx->pc = 0x130AC8u;
    SET_GPR_U32(ctx, 31, 0x130AD0u);
    ctx->pc = 0x130ACCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x135DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135DC8_0x135dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130AD0u; }
    }
    if (ctx->pc != 0x130AD0u) { return; }
    ctx->pc = 0x130AD0u;
label_130ad0:
    // 0x130ad0: 0x8fa40014
    ctx->pc = 0x130ad0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_130ad4:
    // 0x130ad4: 0x8fa30010
    ctx->pc = 0x130ad4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_130ad8:
    // 0x130ad8: 0xae640024
    ctx->pc = 0x130ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
label_130adc:
    // 0x130adc: 0xae630020
    ctx->pc = 0x130adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_130ae0:
    // 0x130ae0: 0x1c40001d
label_130ae4:
    if (ctx->pc == 0x130AE4u) {
        ctx->pc = 0x130AE4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x130AE8u;
        goto label_130ae8;
    }
    ctx->pc = 0x130AE0u;
    {
        const bool branch_taken_0x130ae0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x130AE4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x130ae0) {
            ctx->pc = 0x130B58u;
            goto label_130b58;
        }
    }
    ctx->pc = 0x130AE8u;
label_130ae8:
    // 0x130ae8: 0x8e830000
    ctx->pc = 0x130ae8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_130aec:
    // 0x130aec: 0x26700020
    ctx->pc = 0x130aecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 32));
label_130af0:
    // 0x130af0: 0x280202d
    ctx->pc = 0x130af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_130af4:
    // 0x130af4: 0x282d
    ctx->pc = 0x130af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130af8:
    // 0x130af8: 0x8c62001c
    ctx->pc = 0x130af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_130afc:
    // 0x130afc: 0x40f809
label_130b00:
    if (ctx->pc == 0x130B00u) {
        ctx->pc = 0x130B00u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130B04u;
        goto label_130b04;
    }
    ctx->pc = 0x130AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x130B04u);
        ctx->pc = 0x130B00u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x130B04u; }
            if (ctx->pc != 0x130B04u) { return; }
        }
    }
    ctx->pc = 0x130B04u;
label_130b04:
    // 0x130b04: 0xae000000
    ctx->pc = 0x130b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_130b08:
    // 0x130b08: 0xae600024
    ctx->pc = 0x130b08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_130b0c:
    // 0x130b0c: 0xa2600002
    ctx->pc = 0x130b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_130b10:
    // 0x130b10: 0xc04d7d4
label_130b14:
    if (ctx->pc == 0x130B14u) {
        ctx->pc = 0x130B14u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x130B18u;
        goto label_130b18;
    }
    ctx->pc = 0x130B10u;
    SET_GPR_U32(ctx, 31, 0x130B18u);
    ctx->pc = 0x130B14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x135F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F50_0x135f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130B18u; }
    }
    if (ctx->pc != 0x130B18u) { return; }
    ctx->pc = 0x130B18u;
label_130b18:
    // 0x130b18: 0x24030003
    ctx->pc = 0x130b18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_130b1c:
    // 0x130b1c: 0x1443000f
label_130b20:
    if (ctx->pc == 0x130B20u) {
        ctx->pc = 0x130B20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x130B24u;
        goto label_130b24;
    }
    ctx->pc = 0x130B1Cu;
    {
        const bool branch_taken_0x130b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x130B20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x130b1c) {
            ctx->pc = 0x130B5Cu;
            goto label_130b5c;
        }
    }
    ctx->pc = 0x130B24u;
label_130b24:
    // 0x130b24: 0x3c020022
    ctx->pc = 0x130b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_130b28:
    // 0x130b28: 0x8c43a8b4
    ctx->pc = 0x130b28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294944948)));
label_130b2c:
    // 0x130b2c: 0x460000b
label_130b30:
    if (ctx->pc == 0x130B30u) {
        ctx->pc = 0x130B30u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x130B34u;
        goto label_130b34;
    }
    ctx->pc = 0x130B2Cu;
    {
        const bool branch_taken_0x130b2c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x130B30u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x130b2c) {
            ctx->pc = 0x130B5Cu;
            goto label_130b5c;
        }
    }
    ctx->pc = 0x130B34u;
label_130b34:
    // 0x130b34: 0x82620003
    ctx->pc = 0x130b34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_130b38:
    // 0x130b38: 0x43102a
    ctx->pc = 0x130b38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_130b3c:
    // 0x130b3c: 0x14400004
label_130b40:
    if (ctx->pc == 0x130B40u) {
        ctx->pc = 0x130B40u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
        ctx->pc = 0x130B44u;
        goto label_130b44;
    }
    ctx->pc = 0x130B3Cu;
    {
        const bool branch_taken_0x130b3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130B40u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
        if (branch_taken_0x130b3c) {
            ctx->pc = 0x130B50u;
            goto label_130b50;
        }
    }
    ctx->pc = 0x130B44u;
label_130b44:
    // 0x130b44: 0x24020004
    ctx->pc = 0x130b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_130b48:
    // 0x130b48: 0x10000004
label_130b4c:
    if (ctx->pc == 0x130B4Cu) {
        ctx->pc = 0x130B4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x130B50u;
        goto label_130b50;
    }
    ctx->pc = 0x130B48u;
    {
        const bool branch_taken_0x130b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130B4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x130b48) {
            ctx->pc = 0x130B5Cu;
            goto label_130b5c;
        }
    }
    ctx->pc = 0x130B50u;
label_130b50:
    // 0x130b50: 0x24820001
    ctx->pc = 0x130b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_130b54:
    // 0x130b54: 0xa2620003
    ctx->pc = 0x130b54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_130b58:
    // 0x130b58: 0xdfb00020
    ctx->pc = 0x130b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_130b5c:
    // 0x130b5c: 0xdfb10028
    ctx->pc = 0x130b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_130b60:
    // 0x130b60: 0xdfb20030
    ctx->pc = 0x130b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_130b64:
    // 0x130b64: 0xdfb30038
    ctx->pc = 0x130b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_130b68:
    // 0x130b68: 0xdfb40040
    ctx->pc = 0x130b68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_130b6c:
    // 0x130b6c: 0xdfbf0048
    ctx->pc = 0x130b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_130b70:
    // 0x130b70: 0x3e00008
label_130b74:
    if (ctx->pc == 0x130B74u) {
        ctx->pc = 0x130B74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x130B78u;
        goto label_fallthrough_0x130b70;
    }
    ctx->pc = 0x130B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130800u: goto label_130800;
            case 0x130804u: goto label_130804;
            case 0x130808u: goto label_130808;
            case 0x13080Cu: goto label_13080c;
            case 0x130810u: goto label_130810;
            case 0x130814u: goto label_130814;
            case 0x130818u: goto label_130818;
            case 0x13081Cu: goto label_13081c;
            case 0x130820u: goto label_130820;
            case 0x130824u: goto label_130824;
            case 0x130828u: goto label_130828;
            case 0x13082Cu: goto label_13082c;
            case 0x130830u: goto label_130830;
            case 0x130834u: goto label_130834;
            case 0x130838u: goto label_130838;
            case 0x13083Cu: goto label_13083c;
            case 0x130840u: goto label_130840;
            case 0x130844u: goto label_130844;
            case 0x130848u: goto label_130848;
            case 0x13084Cu: goto label_13084c;
            case 0x130850u: goto label_130850;
            case 0x130854u: goto label_130854;
            case 0x130858u: goto label_130858;
            case 0x13085Cu: goto label_13085c;
            case 0x130860u: goto label_130860;
            case 0x130864u: goto label_130864;
            case 0x130868u: goto label_130868;
            case 0x13086Cu: goto label_13086c;
            case 0x130870u: goto label_130870;
            case 0x130874u: goto label_130874;
            case 0x130878u: goto label_130878;
            case 0x13087Cu: goto label_13087c;
            case 0x130880u: goto label_130880;
            case 0x130884u: goto label_130884;
            case 0x130888u: goto label_130888;
            case 0x13088Cu: goto label_13088c;
            case 0x130890u: goto label_130890;
            case 0x130894u: goto label_130894;
            case 0x130898u: goto label_130898;
            case 0x13089Cu: goto label_13089c;
            case 0x1308A0u: goto label_1308a0;
            case 0x1308A4u: goto label_1308a4;
            case 0x1308A8u: goto label_1308a8;
            case 0x1308ACu: goto label_1308ac;
            case 0x1308B0u: goto label_1308b0;
            case 0x1308B4u: goto label_1308b4;
            case 0x1308B8u: goto label_1308b8;
            case 0x1308BCu: goto label_1308bc;
            case 0x1308C0u: goto label_1308c0;
            case 0x1308C4u: goto label_1308c4;
            case 0x1308C8u: goto label_1308c8;
            case 0x1308CCu: goto label_1308cc;
            case 0x1308D0u: goto label_1308d0;
            case 0x1308D4u: goto label_1308d4;
            case 0x1308D8u: goto label_1308d8;
            case 0x1308DCu: goto label_1308dc;
            case 0x1308E0u: goto label_1308e0;
            case 0x1308E4u: goto label_1308e4;
            case 0x1308E8u: goto label_1308e8;
            case 0x1308ECu: goto label_1308ec;
            case 0x1308F0u: goto label_1308f0;
            case 0x1308F4u: goto label_1308f4;
            case 0x1308F8u: goto label_1308f8;
            case 0x1308FCu: goto label_1308fc;
            case 0x130900u: goto label_130900;
            case 0x130904u: goto label_130904;
            case 0x130908u: goto label_130908;
            case 0x13090Cu: goto label_13090c;
            case 0x130910u: goto label_130910;
            case 0x130914u: goto label_130914;
            case 0x130918u: goto label_130918;
            case 0x13091Cu: goto label_13091c;
            case 0x130920u: goto label_130920;
            case 0x130924u: goto label_130924;
            case 0x130928u: goto label_130928;
            case 0x13092Cu: goto label_13092c;
            case 0x130930u: goto label_130930;
            case 0x130934u: goto label_130934;
            case 0x130938u: goto label_130938;
            case 0x13093Cu: goto label_13093c;
            case 0x130940u: goto label_130940;
            case 0x130944u: goto label_130944;
            case 0x130948u: goto label_130948;
            case 0x13094Cu: goto label_13094c;
            case 0x130950u: goto label_130950;
            case 0x130954u: goto label_130954;
            case 0x130958u: goto label_130958;
            case 0x13095Cu: goto label_13095c;
            case 0x130960u: goto label_130960;
            case 0x130964u: goto label_130964;
            case 0x130968u: goto label_130968;
            case 0x13096Cu: goto label_13096c;
            case 0x130970u: goto label_130970;
            case 0x130974u: goto label_130974;
            case 0x130978u: goto label_130978;
            case 0x13097Cu: goto label_13097c;
            case 0x130980u: goto label_130980;
            case 0x130984u: goto label_130984;
            case 0x130988u: goto label_130988;
            case 0x13098Cu: goto label_13098c;
            case 0x130990u: goto label_130990;
            case 0x130994u: goto label_130994;
            case 0x130998u: goto label_130998;
            case 0x13099Cu: goto label_13099c;
            case 0x1309A0u: goto label_1309a0;
            case 0x1309A4u: goto label_1309a4;
            case 0x1309A8u: goto label_1309a8;
            case 0x1309ACu: goto label_1309ac;
            case 0x1309B0u: goto label_1309b0;
            case 0x1309B4u: goto label_1309b4;
            case 0x1309B8u: goto label_1309b8;
            case 0x1309BCu: goto label_1309bc;
            case 0x1309C0u: goto label_1309c0;
            case 0x1309C4u: goto label_1309c4;
            case 0x1309C8u: goto label_1309c8;
            case 0x1309CCu: goto label_1309cc;
            case 0x1309D0u: goto label_1309d0;
            case 0x1309D4u: goto label_1309d4;
            case 0x1309D8u: goto label_1309d8;
            case 0x1309DCu: goto label_1309dc;
            case 0x1309E0u: goto label_1309e0;
            case 0x1309E4u: goto label_1309e4;
            case 0x1309E8u: goto label_1309e8;
            case 0x1309ECu: goto label_1309ec;
            case 0x1309F0u: goto label_1309f0;
            case 0x1309F4u: goto label_1309f4;
            case 0x1309F8u: goto label_1309f8;
            case 0x1309FCu: goto label_1309fc;
            case 0x130A00u: goto label_130a00;
            case 0x130A04u: goto label_130a04;
            case 0x130A08u: goto label_130a08;
            case 0x130A0Cu: goto label_130a0c;
            case 0x130A10u: goto label_130a10;
            case 0x130A14u: goto label_130a14;
            case 0x130A18u: goto label_130a18;
            case 0x130A1Cu: goto label_130a1c;
            case 0x130A20u: goto label_130a20;
            case 0x130A24u: goto label_130a24;
            case 0x130A28u: goto label_130a28;
            case 0x130A2Cu: goto label_130a2c;
            case 0x130A30u: goto label_130a30;
            case 0x130A34u: goto label_130a34;
            case 0x130A38u: goto label_130a38;
            case 0x130A3Cu: goto label_130a3c;
            case 0x130A40u: goto label_130a40;
            case 0x130A44u: goto label_130a44;
            case 0x130A48u: goto label_130a48;
            case 0x130A4Cu: goto label_130a4c;
            case 0x130A50u: goto label_130a50;
            case 0x130A54u: goto label_130a54;
            case 0x130A58u: goto label_130a58;
            case 0x130A5Cu: goto label_130a5c;
            case 0x130A60u: goto label_130a60;
            case 0x130A64u: goto label_130a64;
            case 0x130A68u: goto label_130a68;
            case 0x130A6Cu: goto label_130a6c;
            case 0x130A70u: goto label_130a70;
            case 0x130A74u: goto label_130a74;
            case 0x130A78u: goto label_130a78;
            case 0x130A7Cu: goto label_130a7c;
            case 0x130A80u: goto label_130a80;
            case 0x130A84u: goto label_130a84;
            case 0x130A88u: goto label_130a88;
            case 0x130A8Cu: goto label_130a8c;
            case 0x130A90u: goto label_130a90;
            case 0x130A94u: goto label_130a94;
            case 0x130A98u: goto label_130a98;
            case 0x130A9Cu: goto label_130a9c;
            case 0x130AA0u: goto label_130aa0;
            case 0x130AA4u: goto label_130aa4;
            case 0x130AA8u: goto label_130aa8;
            case 0x130AACu: goto label_130aac;
            case 0x130AB0u: goto label_130ab0;
            case 0x130AB4u: goto label_130ab4;
            case 0x130AB8u: goto label_130ab8;
            case 0x130ABCu: goto label_130abc;
            case 0x130AC0u: goto label_130ac0;
            case 0x130AC4u: goto label_130ac4;
            case 0x130AC8u: goto label_130ac8;
            case 0x130ACCu: goto label_130acc;
            case 0x130AD0u: goto label_130ad0;
            case 0x130AD4u: goto label_130ad4;
            case 0x130AD8u: goto label_130ad8;
            case 0x130ADCu: goto label_130adc;
            case 0x130AE0u: goto label_130ae0;
            case 0x130AE4u: goto label_130ae4;
            case 0x130AE8u: goto label_130ae8;
            case 0x130AECu: goto label_130aec;
            case 0x130AF0u: goto label_130af0;
            case 0x130AF4u: goto label_130af4;
            case 0x130AF8u: goto label_130af8;
            case 0x130AFCu: goto label_130afc;
            case 0x130B00u: goto label_130b00;
            case 0x130B04u: goto label_130b04;
            case 0x130B08u: goto label_130b08;
            case 0x130B0Cu: goto label_130b0c;
            case 0x130B10u: goto label_130b10;
            case 0x130B14u: goto label_130b14;
            case 0x130B18u: goto label_130b18;
            case 0x130B1Cu: goto label_130b1c;
            case 0x130B20u: goto label_130b20;
            case 0x130B24u: goto label_130b24;
            case 0x130B28u: goto label_130b28;
            case 0x130B2Cu: goto label_130b2c;
            case 0x130B30u: goto label_130b30;
            case 0x130B34u: goto label_130b34;
            case 0x130B38u: goto label_130b38;
            case 0x130B3Cu: goto label_130b3c;
            case 0x130B40u: goto label_130b40;
            case 0x130B44u: goto label_130b44;
            case 0x130B48u: goto label_130b48;
            case 0x130B4Cu: goto label_130b4c;
            case 0x130B50u: goto label_130b50;
            case 0x130B54u: goto label_130b54;
            case 0x130B58u: goto label_130b58;
            case 0x130B5Cu: goto label_130b5c;
            case 0x130B60u: goto label_130b60;
            case 0x130B64u: goto label_130b64;
            case 0x130B68u: goto label_130b68;
            case 0x130B6Cu: goto label_130b6c;
            case 0x130B70u: goto label_130b70;
            case 0x130B74u: goto label_130b74;
            default: break;
        }
        return;
    }
label_fallthrough_0x130b70:
    ctx->pc = 0x130B78u;
}
