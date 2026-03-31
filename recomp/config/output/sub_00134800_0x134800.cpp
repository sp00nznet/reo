#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00134800
// Address: 0x134800 - 0x134bc0
void sub_00134800_0x134800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x134800u;

label_134800:
    // 0x134800: 0x27bdffe0
    ctx->pc = 0x134800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_134804:
    // 0x134804: 0xffb10008
    ctx->pc = 0x134804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_134808:
    // 0x134808: 0xffb00000
    ctx->pc = 0x134808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13480c:
    // 0x13480c: 0xffb20010
    ctx->pc = 0x13480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_134810:
    // 0x134810: 0xffbf0018
    ctx->pc = 0x134810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_134814:
    // 0x134814: 0xc049938
label_134818:
    if (ctx->pc == 0x134818u) {
        ctx->pc = 0x134818u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13481Cu;
        goto label_13481c;
    }
    ctx->pc = 0x134814u;
    SET_GPR_U32(ctx, 31, 0x13481Cu);
    ctx->pc = 0x134818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13481Cu; }
    }
    if (ctx->pc != 0x13481Cu) { return; }
    ctx->pc = 0x13481Cu;
label_13481c:
    // 0x13481c: 0x8e24000c
    ctx->pc = 0x13481cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_134820:
    // 0x134820: 0xc04b1ba
label_134824:
    if (ctx->pc == 0x134824u) {
        ctx->pc = 0x134824u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134828u;
        goto label_134828;
    }
    ctx->pc = 0x134820u;
    SET_GPR_U32(ctx, 31, 0x134828u);
    ctx->pc = 0x134824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C6E8_0x12c6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134828u; }
    }
    if (ctx->pc != 0x134828u) { return; }
    ctx->pc = 0x134828u;
label_134828:
    // 0x134828: 0x8e24000c
    ctx->pc = 0x134828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13482c:
    // 0x13482c: 0xc04b1c0
label_134830:
    if (ctx->pc == 0x134830u) {
        ctx->pc = 0x134830u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134834u;
        goto label_134834;
    }
    ctx->pc = 0x13482Cu;
    SET_GPR_U32(ctx, 31, 0x134834u);
    ctx->pc = 0x134830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C700_0x12c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134834u; }
    }
    if (ctx->pc != 0x134834u) { return; }
    ctx->pc = 0x134834u;
label_134834:
    // 0x134834: 0xc04b32c
label_134838:
    if (ctx->pc == 0x134838u) {
        ctx->pc = 0x134838u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x13483Cu;
        goto label_13483c;
    }
    ctx->pc = 0x134834u;
    SET_GPR_U32(ctx, 31, 0x13483Cu);
    ctx->pc = 0x134838u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x12CCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CCB0_0x12ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13483Cu; }
    }
    if (ctx->pc != 0x13483Cu) { return; }
    ctx->pc = 0x13483Cu;
label_13483c:
    // 0x13483c: 0xc04993e
label_134840:
    if (ctx->pc == 0x134840u) {
        ctx->pc = 0x134844u;
        goto label_134844;
    }
    ctx->pc = 0x13483Cu;
    SET_GPR_U32(ctx, 31, 0x134844u);
    ctx->pc = 0x1264F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264F8_0x1264f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134844u; }
    }
    if (ctx->pc != 0x134844u) { return; }
    ctx->pc = 0x134844u;
label_134844:
    // 0x134844: 0x8e240008
    ctx->pc = 0x134844u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_134848:
    // 0x134848: 0x10800008
label_13484c:
    if (ctx->pc == 0x13484Cu) {
        ctx->pc = 0x134850u;
        goto label_134850;
    }
    ctx->pc = 0x134848u;
    {
        const bool branch_taken_0x134848 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x134848) {
            ctx->pc = 0x13486Cu;
            goto label_13486c;
        }
    }
    ctx->pc = 0x134850u;
label_134850:
    // 0x134850: 0xc04c1d2
label_134854:
    if (ctx->pc == 0x134854u) {
        ctx->pc = 0x134858u;
        goto label_134858;
    }
    ctx->pc = 0x134850u;
    SET_GPR_U32(ctx, 31, 0x134858u);
    ctx->pc = 0x130748u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130748_0x130748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134858u; }
    }
    if (ctx->pc != 0x134858u) { return; }
    ctx->pc = 0x134858u;
label_134858:
    // 0x134858: 0x8e240014
    ctx->pc = 0x134858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_13485c:
    // 0x13485c: 0x8c830000
    ctx->pc = 0x13485cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134860:
    // 0x134860: 0x8c620014
    ctx->pc = 0x134860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_134864:
    // 0x134864: 0x40f809
label_134868:
    if (ctx->pc == 0x134868u) {
        ctx->pc = 0x13486Cu;
        goto label_13486c;
    }
    ctx->pc = 0x134864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13486Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134800u: goto label_134800;
            case 0x134804u: goto label_134804;
            case 0x134808u: goto label_134808;
            case 0x13480Cu: goto label_13480c;
            case 0x134810u: goto label_134810;
            case 0x134814u: goto label_134814;
            case 0x134818u: goto label_134818;
            case 0x13481Cu: goto label_13481c;
            case 0x134820u: goto label_134820;
            case 0x134824u: goto label_134824;
            case 0x134828u: goto label_134828;
            case 0x13482Cu: goto label_13482c;
            case 0x134830u: goto label_134830;
            case 0x134834u: goto label_134834;
            case 0x134838u: goto label_134838;
            case 0x13483Cu: goto label_13483c;
            case 0x134840u: goto label_134840;
            case 0x134844u: goto label_134844;
            case 0x134848u: goto label_134848;
            case 0x13484Cu: goto label_13484c;
            case 0x134850u: goto label_134850;
            case 0x134854u: goto label_134854;
            case 0x134858u: goto label_134858;
            case 0x13485Cu: goto label_13485c;
            case 0x134860u: goto label_134860;
            case 0x134864u: goto label_134864;
            case 0x134868u: goto label_134868;
            case 0x13486Cu: goto label_13486c;
            case 0x134870u: goto label_134870;
            case 0x134874u: goto label_134874;
            case 0x134878u: goto label_134878;
            case 0x13487Cu: goto label_13487c;
            case 0x134880u: goto label_134880;
            case 0x134884u: goto label_134884;
            case 0x134888u: goto label_134888;
            case 0x13488Cu: goto label_13488c;
            case 0x134890u: goto label_134890;
            case 0x134894u: goto label_134894;
            case 0x134898u: goto label_134898;
            case 0x13489Cu: goto label_13489c;
            case 0x1348A0u: goto label_1348a0;
            case 0x1348A4u: goto label_1348a4;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348B0u: goto label_1348b0;
            case 0x1348B4u: goto label_1348b4;
            case 0x1348B8u: goto label_1348b8;
            case 0x1348BCu: goto label_1348bc;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348C4u: goto label_1348c4;
            case 0x1348C8u: goto label_1348c8;
            case 0x1348CCu: goto label_1348cc;
            case 0x1348D0u: goto label_1348d0;
            case 0x1348D4u: goto label_1348d4;
            case 0x1348D8u: goto label_1348d8;
            case 0x1348DCu: goto label_1348dc;
            case 0x1348E0u: goto label_1348e0;
            case 0x1348E4u: goto label_1348e4;
            case 0x1348E8u: goto label_1348e8;
            case 0x1348ECu: goto label_1348ec;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x1348F8u: goto label_1348f8;
            case 0x1348FCu: goto label_1348fc;
            case 0x134900u: goto label_134900;
            case 0x134904u: goto label_134904;
            case 0x134908u: goto label_134908;
            case 0x13490Cu: goto label_13490c;
            case 0x134910u: goto label_134910;
            case 0x134914u: goto label_134914;
            case 0x134918u: goto label_134918;
            case 0x13491Cu: goto label_13491c;
            case 0x134920u: goto label_134920;
            case 0x134924u: goto label_134924;
            case 0x134928u: goto label_134928;
            case 0x13492Cu: goto label_13492c;
            case 0x134930u: goto label_134930;
            case 0x134934u: goto label_134934;
            case 0x134938u: goto label_134938;
            case 0x13493Cu: goto label_13493c;
            case 0x134940u: goto label_134940;
            case 0x134944u: goto label_134944;
            case 0x134948u: goto label_134948;
            case 0x13494Cu: goto label_13494c;
            case 0x134950u: goto label_134950;
            case 0x134954u: goto label_134954;
            case 0x134958u: goto label_134958;
            case 0x13495Cu: goto label_13495c;
            case 0x134960u: goto label_134960;
            case 0x134964u: goto label_134964;
            case 0x134968u: goto label_134968;
            case 0x13496Cu: goto label_13496c;
            case 0x134970u: goto label_134970;
            case 0x134974u: goto label_134974;
            case 0x134978u: goto label_134978;
            case 0x13497Cu: goto label_13497c;
            case 0x134980u: goto label_134980;
            case 0x134984u: goto label_134984;
            case 0x134988u: goto label_134988;
            case 0x13498Cu: goto label_13498c;
            case 0x134990u: goto label_134990;
            case 0x134994u: goto label_134994;
            case 0x134998u: goto label_134998;
            case 0x13499Cu: goto label_13499c;
            case 0x1349A0u: goto label_1349a0;
            case 0x1349A4u: goto label_1349a4;
            case 0x1349A8u: goto label_1349a8;
            case 0x1349ACu: goto label_1349ac;
            case 0x1349B0u: goto label_1349b0;
            case 0x1349B4u: goto label_1349b4;
            case 0x1349B8u: goto label_1349b8;
            case 0x1349BCu: goto label_1349bc;
            case 0x1349C0u: goto label_1349c0;
            case 0x1349C4u: goto label_1349c4;
            case 0x1349C8u: goto label_1349c8;
            case 0x1349CCu: goto label_1349cc;
            case 0x1349D0u: goto label_1349d0;
            case 0x1349D4u: goto label_1349d4;
            case 0x1349D8u: goto label_1349d8;
            case 0x1349DCu: goto label_1349dc;
            case 0x1349E0u: goto label_1349e0;
            case 0x1349E4u: goto label_1349e4;
            case 0x1349E8u: goto label_1349e8;
            case 0x1349ECu: goto label_1349ec;
            case 0x1349F0u: goto label_1349f0;
            case 0x1349F4u: goto label_1349f4;
            case 0x1349F8u: goto label_1349f8;
            case 0x1349FCu: goto label_1349fc;
            case 0x134A00u: goto label_134a00;
            case 0x134A04u: goto label_134a04;
            case 0x134A08u: goto label_134a08;
            case 0x134A0Cu: goto label_134a0c;
            case 0x134A10u: goto label_134a10;
            case 0x134A14u: goto label_134a14;
            case 0x134A18u: goto label_134a18;
            case 0x134A1Cu: goto label_134a1c;
            case 0x134A20u: goto label_134a20;
            case 0x134A24u: goto label_134a24;
            case 0x134A28u: goto label_134a28;
            case 0x134A2Cu: goto label_134a2c;
            case 0x134A30u: goto label_134a30;
            case 0x134A34u: goto label_134a34;
            case 0x134A38u: goto label_134a38;
            case 0x134A3Cu: goto label_134a3c;
            case 0x134A40u: goto label_134a40;
            case 0x134A44u: goto label_134a44;
            case 0x134A48u: goto label_134a48;
            case 0x134A4Cu: goto label_134a4c;
            case 0x134A50u: goto label_134a50;
            case 0x134A54u: goto label_134a54;
            case 0x134A58u: goto label_134a58;
            case 0x134A5Cu: goto label_134a5c;
            case 0x134A60u: goto label_134a60;
            case 0x134A64u: goto label_134a64;
            case 0x134A68u: goto label_134a68;
            case 0x134A6Cu: goto label_134a6c;
            case 0x134A70u: goto label_134a70;
            case 0x134A74u: goto label_134a74;
            case 0x134A78u: goto label_134a78;
            case 0x134A7Cu: goto label_134a7c;
            case 0x134A80u: goto label_134a80;
            case 0x134A84u: goto label_134a84;
            case 0x134A88u: goto label_134a88;
            case 0x134A8Cu: goto label_134a8c;
            case 0x134A90u: goto label_134a90;
            case 0x134A94u: goto label_134a94;
            case 0x134A98u: goto label_134a98;
            case 0x134A9Cu: goto label_134a9c;
            case 0x134AA0u: goto label_134aa0;
            case 0x134AA4u: goto label_134aa4;
            case 0x134AA8u: goto label_134aa8;
            case 0x134AACu: goto label_134aac;
            case 0x134AB0u: goto label_134ab0;
            case 0x134AB4u: goto label_134ab4;
            case 0x134AB8u: goto label_134ab8;
            case 0x134ABCu: goto label_134abc;
            case 0x134AC0u: goto label_134ac0;
            case 0x134AC4u: goto label_134ac4;
            case 0x134AC8u: goto label_134ac8;
            case 0x134ACCu: goto label_134acc;
            case 0x134AD0u: goto label_134ad0;
            case 0x134AD4u: goto label_134ad4;
            case 0x134AD8u: goto label_134ad8;
            case 0x134ADCu: goto label_134adc;
            case 0x134AE0u: goto label_134ae0;
            case 0x134AE4u: goto label_134ae4;
            case 0x134AE8u: goto label_134ae8;
            case 0x134AECu: goto label_134aec;
            case 0x134AF0u: goto label_134af0;
            case 0x134AF4u: goto label_134af4;
            case 0x134AF8u: goto label_134af8;
            case 0x134AFCu: goto label_134afc;
            case 0x134B00u: goto label_134b00;
            case 0x134B04u: goto label_134b04;
            case 0x134B08u: goto label_134b08;
            case 0x134B0Cu: goto label_134b0c;
            case 0x134B10u: goto label_134b10;
            case 0x134B14u: goto label_134b14;
            case 0x134B18u: goto label_134b18;
            case 0x134B1Cu: goto label_134b1c;
            case 0x134B20u: goto label_134b20;
            case 0x134B24u: goto label_134b24;
            case 0x134B28u: goto label_134b28;
            case 0x134B2Cu: goto label_134b2c;
            case 0x134B30u: goto label_134b30;
            case 0x134B34u: goto label_134b34;
            case 0x134B38u: goto label_134b38;
            case 0x134B3Cu: goto label_134b3c;
            case 0x134B40u: goto label_134b40;
            case 0x134B44u: goto label_134b44;
            case 0x134B48u: goto label_134b48;
            case 0x134B4Cu: goto label_134b4c;
            case 0x134B50u: goto label_134b50;
            case 0x134B54u: goto label_134b54;
            case 0x134B58u: goto label_134b58;
            case 0x134B5Cu: goto label_134b5c;
            case 0x134B60u: goto label_134b60;
            case 0x134B64u: goto label_134b64;
            case 0x134B68u: goto label_134b68;
            case 0x134B6Cu: goto label_134b6c;
            case 0x134B70u: goto label_134b70;
            case 0x134B74u: goto label_134b74;
            case 0x134B78u: goto label_134b78;
            case 0x134B7Cu: goto label_134b7c;
            case 0x134B80u: goto label_134b80;
            case 0x134B84u: goto label_134b84;
            case 0x134B88u: goto label_134b88;
            case 0x134B8Cu: goto label_134b8c;
            case 0x134B90u: goto label_134b90;
            case 0x134B94u: goto label_134b94;
            case 0x134B98u: goto label_134b98;
            case 0x134B9Cu: goto label_134b9c;
            case 0x134BA0u: goto label_134ba0;
            case 0x134BA4u: goto label_134ba4;
            case 0x134BA8u: goto label_134ba8;
            case 0x134BACu: goto label_134bac;
            case 0x134BB0u: goto label_134bb0;
            case 0x134BB4u: goto label_134bb4;
            case 0x134BB8u: goto label_134bb8;
            case 0x134BBCu: goto label_134bbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13486Cu; }
            if (ctx->pc != 0x13486Cu) { return; }
        }
    }
    ctx->pc = 0x13486Cu;
label_13486c:
    // 0x13486c: 0xc049938
label_134870:
    if (ctx->pc == 0x134870u) {
        ctx->pc = 0x134870u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134874u;
        goto label_134874;
    }
    ctx->pc = 0x13486Cu;
    SET_GPR_U32(ctx, 31, 0x134874u);
    ctx->pc = 0x134870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134874u; }
    }
    if (ctx->pc != 0x134874u) { return; }
    ctx->pc = 0x134874u;
label_134874:
    // 0x134874: 0x82220003
    ctx->pc = 0x134874u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_134878:
    // 0x134878: 0x5840000d
label_13487c:
    if (ctx->pc == 0x13487Cu) {
        ctx->pc = 0x13487Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x134880u;
        goto label_134880;
    }
    ctx->pc = 0x134878u;
    {
        const bool branch_taken_0x134878 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x134878) {
            ctx->pc = 0x13487Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x1348B0u;
            goto label_1348b0;
        }
    }
    ctx->pc = 0x134880u;
label_134880:
    // 0x134880: 0x26300018
    ctx->pc = 0x134880u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 24));
label_134884:
    // 0x134884: 0x8e040000
    ctx->pc = 0x134884u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_134888:
    // 0x134888: 0x26100004
    ctx->pc = 0x134888u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_13488c:
    // 0x13488c: 0x8c820000
    ctx->pc = 0x13488cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134890:
    // 0x134890: 0x8c430014
    ctx->pc = 0x134890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_134894:
    // 0x134894: 0x60f809
label_134898:
    if (ctx->pc == 0x134898u) {
        ctx->pc = 0x134898u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x13489Cu;
        goto label_13489c;
    }
    ctx->pc = 0x134894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13489Cu);
        ctx->pc = 0x134898u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134800u: goto label_134800;
            case 0x134804u: goto label_134804;
            case 0x134808u: goto label_134808;
            case 0x13480Cu: goto label_13480c;
            case 0x134810u: goto label_134810;
            case 0x134814u: goto label_134814;
            case 0x134818u: goto label_134818;
            case 0x13481Cu: goto label_13481c;
            case 0x134820u: goto label_134820;
            case 0x134824u: goto label_134824;
            case 0x134828u: goto label_134828;
            case 0x13482Cu: goto label_13482c;
            case 0x134830u: goto label_134830;
            case 0x134834u: goto label_134834;
            case 0x134838u: goto label_134838;
            case 0x13483Cu: goto label_13483c;
            case 0x134840u: goto label_134840;
            case 0x134844u: goto label_134844;
            case 0x134848u: goto label_134848;
            case 0x13484Cu: goto label_13484c;
            case 0x134850u: goto label_134850;
            case 0x134854u: goto label_134854;
            case 0x134858u: goto label_134858;
            case 0x13485Cu: goto label_13485c;
            case 0x134860u: goto label_134860;
            case 0x134864u: goto label_134864;
            case 0x134868u: goto label_134868;
            case 0x13486Cu: goto label_13486c;
            case 0x134870u: goto label_134870;
            case 0x134874u: goto label_134874;
            case 0x134878u: goto label_134878;
            case 0x13487Cu: goto label_13487c;
            case 0x134880u: goto label_134880;
            case 0x134884u: goto label_134884;
            case 0x134888u: goto label_134888;
            case 0x13488Cu: goto label_13488c;
            case 0x134890u: goto label_134890;
            case 0x134894u: goto label_134894;
            case 0x134898u: goto label_134898;
            case 0x13489Cu: goto label_13489c;
            case 0x1348A0u: goto label_1348a0;
            case 0x1348A4u: goto label_1348a4;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348B0u: goto label_1348b0;
            case 0x1348B4u: goto label_1348b4;
            case 0x1348B8u: goto label_1348b8;
            case 0x1348BCu: goto label_1348bc;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348C4u: goto label_1348c4;
            case 0x1348C8u: goto label_1348c8;
            case 0x1348CCu: goto label_1348cc;
            case 0x1348D0u: goto label_1348d0;
            case 0x1348D4u: goto label_1348d4;
            case 0x1348D8u: goto label_1348d8;
            case 0x1348DCu: goto label_1348dc;
            case 0x1348E0u: goto label_1348e0;
            case 0x1348E4u: goto label_1348e4;
            case 0x1348E8u: goto label_1348e8;
            case 0x1348ECu: goto label_1348ec;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x1348F8u: goto label_1348f8;
            case 0x1348FCu: goto label_1348fc;
            case 0x134900u: goto label_134900;
            case 0x134904u: goto label_134904;
            case 0x134908u: goto label_134908;
            case 0x13490Cu: goto label_13490c;
            case 0x134910u: goto label_134910;
            case 0x134914u: goto label_134914;
            case 0x134918u: goto label_134918;
            case 0x13491Cu: goto label_13491c;
            case 0x134920u: goto label_134920;
            case 0x134924u: goto label_134924;
            case 0x134928u: goto label_134928;
            case 0x13492Cu: goto label_13492c;
            case 0x134930u: goto label_134930;
            case 0x134934u: goto label_134934;
            case 0x134938u: goto label_134938;
            case 0x13493Cu: goto label_13493c;
            case 0x134940u: goto label_134940;
            case 0x134944u: goto label_134944;
            case 0x134948u: goto label_134948;
            case 0x13494Cu: goto label_13494c;
            case 0x134950u: goto label_134950;
            case 0x134954u: goto label_134954;
            case 0x134958u: goto label_134958;
            case 0x13495Cu: goto label_13495c;
            case 0x134960u: goto label_134960;
            case 0x134964u: goto label_134964;
            case 0x134968u: goto label_134968;
            case 0x13496Cu: goto label_13496c;
            case 0x134970u: goto label_134970;
            case 0x134974u: goto label_134974;
            case 0x134978u: goto label_134978;
            case 0x13497Cu: goto label_13497c;
            case 0x134980u: goto label_134980;
            case 0x134984u: goto label_134984;
            case 0x134988u: goto label_134988;
            case 0x13498Cu: goto label_13498c;
            case 0x134990u: goto label_134990;
            case 0x134994u: goto label_134994;
            case 0x134998u: goto label_134998;
            case 0x13499Cu: goto label_13499c;
            case 0x1349A0u: goto label_1349a0;
            case 0x1349A4u: goto label_1349a4;
            case 0x1349A8u: goto label_1349a8;
            case 0x1349ACu: goto label_1349ac;
            case 0x1349B0u: goto label_1349b0;
            case 0x1349B4u: goto label_1349b4;
            case 0x1349B8u: goto label_1349b8;
            case 0x1349BCu: goto label_1349bc;
            case 0x1349C0u: goto label_1349c0;
            case 0x1349C4u: goto label_1349c4;
            case 0x1349C8u: goto label_1349c8;
            case 0x1349CCu: goto label_1349cc;
            case 0x1349D0u: goto label_1349d0;
            case 0x1349D4u: goto label_1349d4;
            case 0x1349D8u: goto label_1349d8;
            case 0x1349DCu: goto label_1349dc;
            case 0x1349E0u: goto label_1349e0;
            case 0x1349E4u: goto label_1349e4;
            case 0x1349E8u: goto label_1349e8;
            case 0x1349ECu: goto label_1349ec;
            case 0x1349F0u: goto label_1349f0;
            case 0x1349F4u: goto label_1349f4;
            case 0x1349F8u: goto label_1349f8;
            case 0x1349FCu: goto label_1349fc;
            case 0x134A00u: goto label_134a00;
            case 0x134A04u: goto label_134a04;
            case 0x134A08u: goto label_134a08;
            case 0x134A0Cu: goto label_134a0c;
            case 0x134A10u: goto label_134a10;
            case 0x134A14u: goto label_134a14;
            case 0x134A18u: goto label_134a18;
            case 0x134A1Cu: goto label_134a1c;
            case 0x134A20u: goto label_134a20;
            case 0x134A24u: goto label_134a24;
            case 0x134A28u: goto label_134a28;
            case 0x134A2Cu: goto label_134a2c;
            case 0x134A30u: goto label_134a30;
            case 0x134A34u: goto label_134a34;
            case 0x134A38u: goto label_134a38;
            case 0x134A3Cu: goto label_134a3c;
            case 0x134A40u: goto label_134a40;
            case 0x134A44u: goto label_134a44;
            case 0x134A48u: goto label_134a48;
            case 0x134A4Cu: goto label_134a4c;
            case 0x134A50u: goto label_134a50;
            case 0x134A54u: goto label_134a54;
            case 0x134A58u: goto label_134a58;
            case 0x134A5Cu: goto label_134a5c;
            case 0x134A60u: goto label_134a60;
            case 0x134A64u: goto label_134a64;
            case 0x134A68u: goto label_134a68;
            case 0x134A6Cu: goto label_134a6c;
            case 0x134A70u: goto label_134a70;
            case 0x134A74u: goto label_134a74;
            case 0x134A78u: goto label_134a78;
            case 0x134A7Cu: goto label_134a7c;
            case 0x134A80u: goto label_134a80;
            case 0x134A84u: goto label_134a84;
            case 0x134A88u: goto label_134a88;
            case 0x134A8Cu: goto label_134a8c;
            case 0x134A90u: goto label_134a90;
            case 0x134A94u: goto label_134a94;
            case 0x134A98u: goto label_134a98;
            case 0x134A9Cu: goto label_134a9c;
            case 0x134AA0u: goto label_134aa0;
            case 0x134AA4u: goto label_134aa4;
            case 0x134AA8u: goto label_134aa8;
            case 0x134AACu: goto label_134aac;
            case 0x134AB0u: goto label_134ab0;
            case 0x134AB4u: goto label_134ab4;
            case 0x134AB8u: goto label_134ab8;
            case 0x134ABCu: goto label_134abc;
            case 0x134AC0u: goto label_134ac0;
            case 0x134AC4u: goto label_134ac4;
            case 0x134AC8u: goto label_134ac8;
            case 0x134ACCu: goto label_134acc;
            case 0x134AD0u: goto label_134ad0;
            case 0x134AD4u: goto label_134ad4;
            case 0x134AD8u: goto label_134ad8;
            case 0x134ADCu: goto label_134adc;
            case 0x134AE0u: goto label_134ae0;
            case 0x134AE4u: goto label_134ae4;
            case 0x134AE8u: goto label_134ae8;
            case 0x134AECu: goto label_134aec;
            case 0x134AF0u: goto label_134af0;
            case 0x134AF4u: goto label_134af4;
            case 0x134AF8u: goto label_134af8;
            case 0x134AFCu: goto label_134afc;
            case 0x134B00u: goto label_134b00;
            case 0x134B04u: goto label_134b04;
            case 0x134B08u: goto label_134b08;
            case 0x134B0Cu: goto label_134b0c;
            case 0x134B10u: goto label_134b10;
            case 0x134B14u: goto label_134b14;
            case 0x134B18u: goto label_134b18;
            case 0x134B1Cu: goto label_134b1c;
            case 0x134B20u: goto label_134b20;
            case 0x134B24u: goto label_134b24;
            case 0x134B28u: goto label_134b28;
            case 0x134B2Cu: goto label_134b2c;
            case 0x134B30u: goto label_134b30;
            case 0x134B34u: goto label_134b34;
            case 0x134B38u: goto label_134b38;
            case 0x134B3Cu: goto label_134b3c;
            case 0x134B40u: goto label_134b40;
            case 0x134B44u: goto label_134b44;
            case 0x134B48u: goto label_134b48;
            case 0x134B4Cu: goto label_134b4c;
            case 0x134B50u: goto label_134b50;
            case 0x134B54u: goto label_134b54;
            case 0x134B58u: goto label_134b58;
            case 0x134B5Cu: goto label_134b5c;
            case 0x134B60u: goto label_134b60;
            case 0x134B64u: goto label_134b64;
            case 0x134B68u: goto label_134b68;
            case 0x134B6Cu: goto label_134b6c;
            case 0x134B70u: goto label_134b70;
            case 0x134B74u: goto label_134b74;
            case 0x134B78u: goto label_134b78;
            case 0x134B7Cu: goto label_134b7c;
            case 0x134B80u: goto label_134b80;
            case 0x134B84u: goto label_134b84;
            case 0x134B88u: goto label_134b88;
            case 0x134B8Cu: goto label_134b8c;
            case 0x134B90u: goto label_134b90;
            case 0x134B94u: goto label_134b94;
            case 0x134B98u: goto label_134b98;
            case 0x134B9Cu: goto label_134b9c;
            case 0x134BA0u: goto label_134ba0;
            case 0x134BA4u: goto label_134ba4;
            case 0x134BA8u: goto label_134ba8;
            case 0x134BACu: goto label_134bac;
            case 0x134BB0u: goto label_134bb0;
            case 0x134BB4u: goto label_134bb4;
            case 0x134BB8u: goto label_134bb8;
            case 0x134BBCu: goto label_134bbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13489Cu; }
            if (ctx->pc != 0x13489Cu) { return; }
        }
    }
    ctx->pc = 0x13489Cu;
label_13489c:
    // 0x13489c: 0x82220003
    ctx->pc = 0x13489cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1348a0:
    // 0x1348a0: 0x242102a
    ctx->pc = 0x1348a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_1348a4:
    // 0x1348a4: 0x5440fff8
label_1348a8:
    if (ctx->pc == 0x1348A8u) {
        ctx->pc = 0x1348A8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1348ACu;
        goto label_1348ac;
    }
    ctx->pc = 0x1348A4u;
    {
        const bool branch_taken_0x1348a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1348a4) {
            ctx->pc = 0x1348A8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x134888u;
            goto label_134888;
        }
    }
    ctx->pc = 0x1348ACu;
label_1348ac:
    // 0x1348ac: 0x8e240008
    ctx->pc = 0x1348acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1348b0:
    // 0x1348b0: 0x50800006
label_1348b4:
    if (ctx->pc == 0x1348B4u) {
        ctx->pc = 0x1348B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1348B8u;
        goto label_1348b8;
    }
    ctx->pc = 0x1348B0u;
    {
        const bool branch_taken_0x1348b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1348b0) {
            ctx->pc = 0x1348B4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1348CCu;
            goto label_1348cc;
        }
    }
    ctx->pc = 0x1348B8u;
label_1348b8:
    // 0x1348b8: 0xc04c170
label_1348bc:
    if (ctx->pc == 0x1348BCu) {
        ctx->pc = 0x1348BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1348C0u;
        goto label_1348c0;
    }
    ctx->pc = 0x1348B8u;
    SET_GPR_U32(ctx, 31, 0x1348C0u);
    ctx->pc = 0x1348BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1305C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305C0_0x1305c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348C0u; }
    }
    if (ctx->pc != 0x1348C0u) { return; }
    ctx->pc = 0x1348C0u;
label_1348c0:
    // 0x1348c0: 0xc04c196
label_1348c4:
    if (ctx->pc == 0x1348C4u) {
        ctx->pc = 0x1348C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1348C8u;
        goto label_1348c8;
    }
    ctx->pc = 0x1348C0u;
    SET_GPR_U32(ctx, 31, 0x1348C8u);
    ctx->pc = 0x1348C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x130658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00130658_0x130658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348C8u; }
    }
    if (ctx->pc != 0x1348C8u) { return; }
    ctx->pc = 0x1348C8u;
label_1348c8:
    // 0x1348c8: 0x220202d
    ctx->pc = 0x1348c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1348cc:
    // 0x1348cc: 0xc04c6d8
label_1348d0:
    if (ctx->pc == 0x1348D0u) {
        ctx->pc = 0x1348D0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x1348D4u;
        goto label_1348d4;
    }
    ctx->pc = 0x1348CCu;
    SET_GPR_U32(ctx, 31, 0x1348D4u);
    ctx->pc = 0x1348D0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->pc = 0x131B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131B60_0x131b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1348D4u; }
    }
    if (ctx->pc != 0x1348D4u) { return; }
    ctx->pc = 0x1348D4u;
label_1348d4:
    // 0x1348d4: 0xdfb00000
    ctx->pc = 0x1348d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1348d8:
    // 0x1348d8: 0xdfb10008
    ctx->pc = 0x1348d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1348dc:
    // 0x1348dc: 0xdfb20010
    ctx->pc = 0x1348dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1348e0:
    // 0x1348e0: 0xdfbf0018
    ctx->pc = 0x1348e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1348e4:
    // 0x1348e4: 0x804993e
label_1348e8:
    if (ctx->pc == 0x1348E8u) {
        ctx->pc = 0x1348E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1348ECu;
        goto label_1348ec;
    }
    ctx->pc = 0x1348E4u;
    ctx->pc = 0x1348E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1348ECu;
label_1348ec:
    // 0x1348ec: 0x0
    ctx->pc = 0x1348ecu;
    // NOP
label_1348f0:
    // 0x1348f0: 0x27bdffe0
    ctx->pc = 0x1348f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1348f4:
    // 0x1348f4: 0x24020003
    ctx->pc = 0x1348f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1348f8:
    // 0x1348f8: 0xffb00000
    ctx->pc = 0x1348f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1348fc:
    // 0x1348fc: 0x80802d
    ctx->pc = 0x1348fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134900:
    // 0x134900: 0xffb10008
    ctx->pc = 0x134900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_134904:
    // 0x134904: 0xffbf0010
    ctx->pc = 0x134904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_134908:
    // 0x134908: 0x82110001
    ctx->pc = 0x134908u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_13490c:
    // 0x13490c: 0x56220029
label_134910:
    if (ctx->pc == 0x134910u) {
        ctx->pc = 0x134910u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x134914u;
        goto label_134914;
    }
    ctx->pc = 0x13490Cu;
    {
        const bool branch_taken_0x13490c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x13490c) {
            ctx->pc = 0x134910u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1349B4u;
            goto label_1349b4;
        }
    }
    ctx->pc = 0x134914u;
label_134914:
    // 0x134914: 0x82020072
    ctx->pc = 0x134914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_134918:
    // 0x134918: 0x54400026
label_13491c:
    if (ctx->pc == 0x13491Cu) {
        ctx->pc = 0x13491Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x134920u;
        goto label_134920;
    }
    ctx->pc = 0x134918u;
    {
        const bool branch_taken_0x134918 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x134918) {
            ctx->pc = 0x13491Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1349B4u;
            goto label_1349b4;
        }
    }
    ctx->pc = 0x134920u;
label_134920:
    // 0x134920: 0xc04b2ee
label_134924:
    if (ctx->pc == 0x134924u) {
        ctx->pc = 0x134924u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x134928u;
        goto label_134928;
    }
    ctx->pc = 0x134920u;
    SET_GPR_U32(ctx, 31, 0x134928u);
    ctx->pc = 0x134924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12CBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CBB8_0x12cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134928u; }
    }
    if (ctx->pc != 0x134928u) { return; }
    ctx->pc = 0x134928u;
label_134928:
    // 0x134928: 0x50510022
label_13492c:
    if (ctx->pc == 0x13492Cu) {
        ctx->pc = 0x13492Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x134930u;
        goto label_134930;
    }
    ctx->pc = 0x134928u;
    {
        const bool branch_taken_0x134928 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x134928) {
            ctx->pc = 0x13492Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1349B4u;
            goto label_1349b4;
        }
    }
    ctx->pc = 0x134930u;
label_134930:
    // 0x134930: 0xc04b5b8
label_134934:
    if (ctx->pc == 0x134934u) {
        ctx->pc = 0x134934u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x134938u;
        goto label_134938;
    }
    ctx->pc = 0x134930u;
    SET_GPR_U32(ctx, 31, 0x134938u);
    ctx->pc = 0x134934u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12D6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D6E0_0x12d6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134938u; }
    }
    if (ctx->pc != 0x134938u) { return; }
    ctx->pc = 0x134938u;
label_134938:
    // 0x134938: 0x40302d
    ctx->pc = 0x134938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13493c:
    // 0x13493c: 0x8e020064
    ctx->pc = 0x13493cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_134940:
    // 0x134940: 0x5446000d
label_134944:
    if (ctx->pc == 0x134944u) {
        ctx->pc = 0x134944u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x134948u;
        goto label_134948;
    }
    ctx->pc = 0x134940u;
    {
        const bool branch_taken_0x134940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x134940) {
            ctx->pc = 0x134944u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x134978u;
            goto label_134978;
        }
    }
    ctx->pc = 0x134948u;
label_134948:
    // 0x134948: 0x96040068
    ctx->pc = 0x134948u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
label_13494c:
    // 0x13494c: 0x8e050038
    ctx->pc = 0x13494cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_134950:
    // 0x134950: 0x24840001
    ctx->pc = 0x134950u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_134954:
    // 0x134954: 0x41c00
    ctx->pc = 0x134954u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 16));
label_134958:
    // 0x134958: 0x51080
    ctx->pc = 0x134958u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_13495c:
    // 0x13495c: 0x451021
    ctx->pc = 0x13495cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_134960:
    // 0x134960: 0x31c03
    ctx->pc = 0x134960u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_134964:
    // 0x134964: 0x43102a
    ctx->pc = 0x134964u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_134968:
    // 0x134968: 0x10400003
label_13496c:
    if (ctx->pc == 0x13496Cu) {
        ctx->pc = 0x13496Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x134970u;
        goto label_134970;
    }
    ctx->pc = 0x134968u;
    {
        const bool branch_taken_0x134968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13496Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x134968) {
            ctx->pc = 0x134978u;
            goto label_134978;
        }
    }
    ctx->pc = 0x134970u;
label_134970:
    // 0x134970: 0x2402fffe
    ctx->pc = 0x134970u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_134974:
    // 0x134974: 0xa6020060
    ctx->pc = 0x134974u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_134978:
    // 0x134978: 0x86020060
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_13497c:
    // 0x13497c: 0x1040000d
label_134980:
    if (ctx->pc == 0x134980u) {
        ctx->pc = 0x134980u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->pc = 0x134984u;
        goto label_134984;
    }
    ctx->pc = 0x13497Cu;
    {
        const bool branch_taken_0x13497c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x134980u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        if (branch_taken_0x13497c) {
            ctx->pc = 0x1349B4u;
            goto label_1349b4;
        }
    }
    ctx->pc = 0x134984u;
label_134984:
    // 0x134984: 0x9203006d
    ctx->pc = 0x134984u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_134988:
    // 0x134988: 0x2462ffff
    ctx->pc = 0x134988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
label_13498c:
    // 0x13498c: 0x2c420002
    ctx->pc = 0x13498cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_134990:
    // 0x134990: 0x10400004
label_134994:
    if (ctx->pc == 0x134994u) {
        ctx->pc = 0x134998u;
        goto label_134998;
    }
    ctx->pc = 0x134990u;
    {
        const bool branch_taken_0x134990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134990) {
            ctx->pc = 0x1349A4u;
            goto label_1349a4;
        }
    }
    ctx->pc = 0x134998u;
label_134998:
    // 0x134998: 0xc04c78e
label_13499c:
    if (ctx->pc == 0x13499Cu) {
        ctx->pc = 0x13499Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1349A0u;
        goto label_1349a0;
    }
    ctx->pc = 0x134998u;
    SET_GPR_U32(ctx, 31, 0x1349A0u);
    ctx->pc = 0x13499Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1349A0u; }
    }
    if (ctx->pc != 0x1349A0u) { return; }
    ctx->pc = 0x1349A0u;
label_1349a0:
    // 0x1349a0: 0x9203006d
    ctx->pc = 0x1349a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_1349a4:
    // 0x1349a4: 0x10600004
label_1349a8:
    if (ctx->pc == 0x1349A8u) {
        ctx->pc = 0x1349A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1349ACu;
        goto label_1349ac;
    }
    ctx->pc = 0x1349A4u;
    {
        const bool branch_taken_0x1349a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1349A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x1349a4) {
            ctx->pc = 0x1349B8u;
            goto label_1349b8;
        }
    }
    ctx->pc = 0x1349ACu;
label_1349ac:
    // 0x1349ac: 0xa6000060
    ctx->pc = 0x1349acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_1349b0:
    // 0x1349b0: 0xa6000068
    ctx->pc = 0x1349b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
label_1349b4:
    // 0x1349b4: 0x2622ffff
    ctx->pc = 0x1349b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
label_1349b8:
    // 0x1349b8: 0x2c420003
    ctx->pc = 0x1349b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
label_1349bc:
    // 0x1349bc: 0x50400040
label_1349c0:
    if (ctx->pc == 0x1349C0u) {
        ctx->pc = 0x1349C0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1349C4u;
        goto label_1349c4;
    }
    ctx->pc = 0x1349BCu;
    {
        const bool branch_taken_0x1349bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1349bc) {
            ctx->pc = 0x1349C0u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x134AC0u;
            goto label_134ac0;
        }
    }
    ctx->pc = 0x1349C4u;
label_1349c4:
    // 0x1349c4: 0x82020072
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_1349c8:
    // 0x1349c8: 0x5440003d
label_1349cc:
    if (ctx->pc == 0x1349CCu) {
        ctx->pc = 0x1349CCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1349D0u;
        goto label_1349d0;
    }
    ctx->pc = 0x1349C8u;
    {
        const bool branch_taken_0x1349c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1349c8) {
            ctx->pc = 0x1349CCu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x134AC0u;
            goto label_134ac0;
        }
    }
    ctx->pc = 0x1349D0u;
label_1349d0:
    // 0x1349d0: 0xc04b2ee
label_1349d4:
    if (ctx->pc == 0x1349D4u) {
        ctx->pc = 0x1349D4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1349D8u;
        goto label_1349d8;
    }
    ctx->pc = 0x1349D0u;
    SET_GPR_U32(ctx, 31, 0x1349D8u);
    ctx->pc = 0x1349D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x12CBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CBB8_0x12cbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1349D8u; }
    }
    if (ctx->pc != 0x1349D8u) { return; }
    ctx->pc = 0x1349D8u;
label_1349d8:
    // 0x1349d8: 0x24030003
    ctx->pc = 0x1349d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1349dc:
    // 0x1349dc: 0x50430038
label_1349e0:
    if (ctx->pc == 0x1349E0u) {
        ctx->pc = 0x1349E0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1349E4u;
        goto label_1349e4;
    }
    ctx->pc = 0x1349DCu;
    {
        const bool branch_taken_0x1349dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1349dc) {
            ctx->pc = 0x1349E0u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x134AC0u;
            goto label_134ac0;
        }
    }
    ctx->pc = 0x1349E4u;
label_1349e4:
    // 0x1349e4: 0x8e040014
    ctx->pc = 0x1349e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1349e8:
    // 0x1349e8: 0x10800007
label_1349ec:
    if (ctx->pc == 0x1349ECu) {
        ctx->pc = 0x1349ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1349F0u;
        goto label_1349f0;
    }
    ctx->pc = 0x1349E8u;
    {
        const bool branch_taken_0x1349e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1349ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1349e8) {
            ctx->pc = 0x134A08u;
            goto label_134a08;
        }
    }
    ctx->pc = 0x1349F0u;
label_1349f0:
    // 0x1349f0: 0x8c830000
    ctx->pc = 0x1349f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1349f4:
    // 0x1349f4: 0x8c620024
    ctx->pc = 0x1349f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1349f8:
    // 0x1349f8: 0x40f809
label_1349fc:
    if (ctx->pc == 0x1349FCu) {
        ctx->pc = 0x1349FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x134A00u;
        goto label_134a00;
    }
    ctx->pc = 0x1349F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134A00u);
        ctx->pc = 0x1349FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134800u: goto label_134800;
            case 0x134804u: goto label_134804;
            case 0x134808u: goto label_134808;
            case 0x13480Cu: goto label_13480c;
            case 0x134810u: goto label_134810;
            case 0x134814u: goto label_134814;
            case 0x134818u: goto label_134818;
            case 0x13481Cu: goto label_13481c;
            case 0x134820u: goto label_134820;
            case 0x134824u: goto label_134824;
            case 0x134828u: goto label_134828;
            case 0x13482Cu: goto label_13482c;
            case 0x134830u: goto label_134830;
            case 0x134834u: goto label_134834;
            case 0x134838u: goto label_134838;
            case 0x13483Cu: goto label_13483c;
            case 0x134840u: goto label_134840;
            case 0x134844u: goto label_134844;
            case 0x134848u: goto label_134848;
            case 0x13484Cu: goto label_13484c;
            case 0x134850u: goto label_134850;
            case 0x134854u: goto label_134854;
            case 0x134858u: goto label_134858;
            case 0x13485Cu: goto label_13485c;
            case 0x134860u: goto label_134860;
            case 0x134864u: goto label_134864;
            case 0x134868u: goto label_134868;
            case 0x13486Cu: goto label_13486c;
            case 0x134870u: goto label_134870;
            case 0x134874u: goto label_134874;
            case 0x134878u: goto label_134878;
            case 0x13487Cu: goto label_13487c;
            case 0x134880u: goto label_134880;
            case 0x134884u: goto label_134884;
            case 0x134888u: goto label_134888;
            case 0x13488Cu: goto label_13488c;
            case 0x134890u: goto label_134890;
            case 0x134894u: goto label_134894;
            case 0x134898u: goto label_134898;
            case 0x13489Cu: goto label_13489c;
            case 0x1348A0u: goto label_1348a0;
            case 0x1348A4u: goto label_1348a4;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348B0u: goto label_1348b0;
            case 0x1348B4u: goto label_1348b4;
            case 0x1348B8u: goto label_1348b8;
            case 0x1348BCu: goto label_1348bc;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348C4u: goto label_1348c4;
            case 0x1348C8u: goto label_1348c8;
            case 0x1348CCu: goto label_1348cc;
            case 0x1348D0u: goto label_1348d0;
            case 0x1348D4u: goto label_1348d4;
            case 0x1348D8u: goto label_1348d8;
            case 0x1348DCu: goto label_1348dc;
            case 0x1348E0u: goto label_1348e0;
            case 0x1348E4u: goto label_1348e4;
            case 0x1348E8u: goto label_1348e8;
            case 0x1348ECu: goto label_1348ec;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x1348F8u: goto label_1348f8;
            case 0x1348FCu: goto label_1348fc;
            case 0x134900u: goto label_134900;
            case 0x134904u: goto label_134904;
            case 0x134908u: goto label_134908;
            case 0x13490Cu: goto label_13490c;
            case 0x134910u: goto label_134910;
            case 0x134914u: goto label_134914;
            case 0x134918u: goto label_134918;
            case 0x13491Cu: goto label_13491c;
            case 0x134920u: goto label_134920;
            case 0x134924u: goto label_134924;
            case 0x134928u: goto label_134928;
            case 0x13492Cu: goto label_13492c;
            case 0x134930u: goto label_134930;
            case 0x134934u: goto label_134934;
            case 0x134938u: goto label_134938;
            case 0x13493Cu: goto label_13493c;
            case 0x134940u: goto label_134940;
            case 0x134944u: goto label_134944;
            case 0x134948u: goto label_134948;
            case 0x13494Cu: goto label_13494c;
            case 0x134950u: goto label_134950;
            case 0x134954u: goto label_134954;
            case 0x134958u: goto label_134958;
            case 0x13495Cu: goto label_13495c;
            case 0x134960u: goto label_134960;
            case 0x134964u: goto label_134964;
            case 0x134968u: goto label_134968;
            case 0x13496Cu: goto label_13496c;
            case 0x134970u: goto label_134970;
            case 0x134974u: goto label_134974;
            case 0x134978u: goto label_134978;
            case 0x13497Cu: goto label_13497c;
            case 0x134980u: goto label_134980;
            case 0x134984u: goto label_134984;
            case 0x134988u: goto label_134988;
            case 0x13498Cu: goto label_13498c;
            case 0x134990u: goto label_134990;
            case 0x134994u: goto label_134994;
            case 0x134998u: goto label_134998;
            case 0x13499Cu: goto label_13499c;
            case 0x1349A0u: goto label_1349a0;
            case 0x1349A4u: goto label_1349a4;
            case 0x1349A8u: goto label_1349a8;
            case 0x1349ACu: goto label_1349ac;
            case 0x1349B0u: goto label_1349b0;
            case 0x1349B4u: goto label_1349b4;
            case 0x1349B8u: goto label_1349b8;
            case 0x1349BCu: goto label_1349bc;
            case 0x1349C0u: goto label_1349c0;
            case 0x1349C4u: goto label_1349c4;
            case 0x1349C8u: goto label_1349c8;
            case 0x1349CCu: goto label_1349cc;
            case 0x1349D0u: goto label_1349d0;
            case 0x1349D4u: goto label_1349d4;
            case 0x1349D8u: goto label_1349d8;
            case 0x1349DCu: goto label_1349dc;
            case 0x1349E0u: goto label_1349e0;
            case 0x1349E4u: goto label_1349e4;
            case 0x1349E8u: goto label_1349e8;
            case 0x1349ECu: goto label_1349ec;
            case 0x1349F0u: goto label_1349f0;
            case 0x1349F4u: goto label_1349f4;
            case 0x1349F8u: goto label_1349f8;
            case 0x1349FCu: goto label_1349fc;
            case 0x134A00u: goto label_134a00;
            case 0x134A04u: goto label_134a04;
            case 0x134A08u: goto label_134a08;
            case 0x134A0Cu: goto label_134a0c;
            case 0x134A10u: goto label_134a10;
            case 0x134A14u: goto label_134a14;
            case 0x134A18u: goto label_134a18;
            case 0x134A1Cu: goto label_134a1c;
            case 0x134A20u: goto label_134a20;
            case 0x134A24u: goto label_134a24;
            case 0x134A28u: goto label_134a28;
            case 0x134A2Cu: goto label_134a2c;
            case 0x134A30u: goto label_134a30;
            case 0x134A34u: goto label_134a34;
            case 0x134A38u: goto label_134a38;
            case 0x134A3Cu: goto label_134a3c;
            case 0x134A40u: goto label_134a40;
            case 0x134A44u: goto label_134a44;
            case 0x134A48u: goto label_134a48;
            case 0x134A4Cu: goto label_134a4c;
            case 0x134A50u: goto label_134a50;
            case 0x134A54u: goto label_134a54;
            case 0x134A58u: goto label_134a58;
            case 0x134A5Cu: goto label_134a5c;
            case 0x134A60u: goto label_134a60;
            case 0x134A64u: goto label_134a64;
            case 0x134A68u: goto label_134a68;
            case 0x134A6Cu: goto label_134a6c;
            case 0x134A70u: goto label_134a70;
            case 0x134A74u: goto label_134a74;
            case 0x134A78u: goto label_134a78;
            case 0x134A7Cu: goto label_134a7c;
            case 0x134A80u: goto label_134a80;
            case 0x134A84u: goto label_134a84;
            case 0x134A88u: goto label_134a88;
            case 0x134A8Cu: goto label_134a8c;
            case 0x134A90u: goto label_134a90;
            case 0x134A94u: goto label_134a94;
            case 0x134A98u: goto label_134a98;
            case 0x134A9Cu: goto label_134a9c;
            case 0x134AA0u: goto label_134aa0;
            case 0x134AA4u: goto label_134aa4;
            case 0x134AA8u: goto label_134aa8;
            case 0x134AACu: goto label_134aac;
            case 0x134AB0u: goto label_134ab0;
            case 0x134AB4u: goto label_134ab4;
            case 0x134AB8u: goto label_134ab8;
            case 0x134ABCu: goto label_134abc;
            case 0x134AC0u: goto label_134ac0;
            case 0x134AC4u: goto label_134ac4;
            case 0x134AC8u: goto label_134ac8;
            case 0x134ACCu: goto label_134acc;
            case 0x134AD0u: goto label_134ad0;
            case 0x134AD4u: goto label_134ad4;
            case 0x134AD8u: goto label_134ad8;
            case 0x134ADCu: goto label_134adc;
            case 0x134AE0u: goto label_134ae0;
            case 0x134AE4u: goto label_134ae4;
            case 0x134AE8u: goto label_134ae8;
            case 0x134AECu: goto label_134aec;
            case 0x134AF0u: goto label_134af0;
            case 0x134AF4u: goto label_134af4;
            case 0x134AF8u: goto label_134af8;
            case 0x134AFCu: goto label_134afc;
            case 0x134B00u: goto label_134b00;
            case 0x134B04u: goto label_134b04;
            case 0x134B08u: goto label_134b08;
            case 0x134B0Cu: goto label_134b0c;
            case 0x134B10u: goto label_134b10;
            case 0x134B14u: goto label_134b14;
            case 0x134B18u: goto label_134b18;
            case 0x134B1Cu: goto label_134b1c;
            case 0x134B20u: goto label_134b20;
            case 0x134B24u: goto label_134b24;
            case 0x134B28u: goto label_134b28;
            case 0x134B2Cu: goto label_134b2c;
            case 0x134B30u: goto label_134b30;
            case 0x134B34u: goto label_134b34;
            case 0x134B38u: goto label_134b38;
            case 0x134B3Cu: goto label_134b3c;
            case 0x134B40u: goto label_134b40;
            case 0x134B44u: goto label_134b44;
            case 0x134B48u: goto label_134b48;
            case 0x134B4Cu: goto label_134b4c;
            case 0x134B50u: goto label_134b50;
            case 0x134B54u: goto label_134b54;
            case 0x134B58u: goto label_134b58;
            case 0x134B5Cu: goto label_134b5c;
            case 0x134B60u: goto label_134b60;
            case 0x134B64u: goto label_134b64;
            case 0x134B68u: goto label_134b68;
            case 0x134B6Cu: goto label_134b6c;
            case 0x134B70u: goto label_134b70;
            case 0x134B74u: goto label_134b74;
            case 0x134B78u: goto label_134b78;
            case 0x134B7Cu: goto label_134b7c;
            case 0x134B80u: goto label_134b80;
            case 0x134B84u: goto label_134b84;
            case 0x134B88u: goto label_134b88;
            case 0x134B8Cu: goto label_134b8c;
            case 0x134B90u: goto label_134b90;
            case 0x134B94u: goto label_134b94;
            case 0x134B98u: goto label_134b98;
            case 0x134B9Cu: goto label_134b9c;
            case 0x134BA0u: goto label_134ba0;
            case 0x134BA4u: goto label_134ba4;
            case 0x134BA8u: goto label_134ba8;
            case 0x134BACu: goto label_134bac;
            case 0x134BB0u: goto label_134bb0;
            case 0x134BB4u: goto label_134bb4;
            case 0x134BB8u: goto label_134bb8;
            case 0x134BBCu: goto label_134bbc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x134A00u; }
            if (ctx->pc != 0x134A00u) { return; }
        }
    }
    ctx->pc = 0x134A00u;
label_134a00:
    // 0x134a00: 0x10000002
label_134a04:
    if (ctx->pc == 0x134A04u) {
        ctx->pc = 0x134A04u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
        ctx->pc = 0x134A08u;
        goto label_134a08;
    }
    ctx->pc = 0x134A00u;
    {
        const bool branch_taken_0x134a00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134A04u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
        if (branch_taken_0x134a00) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134A08u;
label_134a08:
    // 0x134a08: 0x28420040
    ctx->pc = 0x134a08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
label_134a0c:
    // 0x134a0c: 0x5040002c
label_134a10:
    if (ctx->pc == 0x134A10u) {
        ctx->pc = 0x134A10u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x134A14u;
        goto label_134a14;
    }
    ctx->pc = 0x134A0Cu;
    {
        const bool branch_taken_0x134a0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134a0c) {
            ctx->pc = 0x134A10u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x134AC0u;
            goto label_134ac0;
        }
    }
    ctx->pc = 0x134A14u;
label_134a14:
    // 0x134a14: 0x9602006a
    ctx->pc = 0x134a14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
label_134a18:
    // 0x134a18: 0x24030003
    ctx->pc = 0x134a18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_134a1c:
    // 0x134a1c: 0x24420001
    ctx->pc = 0x134a1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_134a20:
    // 0x134a20: 0x16230007
label_134a24:
    if (ctx->pc == 0x134A24u) {
        ctx->pc = 0x134A24u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x134A28u;
        goto label_134a28;
    }
    ctx->pc = 0x134A20u;
    {
        const bool branch_taken_0x134a20 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x134A24u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x134a20) {
            ctx->pc = 0x134A40u;
            goto label_134a40;
        }
    }
    ctx->pc = 0x134A28u;
label_134a28:
    // 0x134a28: 0x8e040038
    ctx->pc = 0x134a28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_134a2c:
    // 0x134a2c: 0x21c00
    ctx->pc = 0x134a2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 16));
label_134a30:
    // 0x134a30: 0x31c03
    ctx->pc = 0x134a30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_134a34:
    // 0x134a34: 0x41080
    ctx->pc = 0x134a34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_134a38:
    // 0x134a38: 0x10000007
label_134a3c:
    if (ctx->pc == 0x134A3Cu) {
        ctx->pc = 0x134A3Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x134A40u;
        goto label_134a40;
    }
    ctx->pc = 0x134A38u;
    {
        const bool branch_taken_0x134a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134A3Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x134a38) {
            ctx->pc = 0x134A58u;
            goto label_134a58;
        }
    }
    ctx->pc = 0x134A40u;
label_134a40:
    // 0x134a40: 0x8e040038
    ctx->pc = 0x134a40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_134a44:
    // 0x134a44: 0x21c00
    ctx->pc = 0x134a44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 16));
label_134a48:
    // 0x134a48: 0x31c03
    ctx->pc = 0x134a48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_134a4c:
    // 0x134a4c: 0x41080
    ctx->pc = 0x134a4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_134a50:
    // 0x134a50: 0x441021
    ctx->pc = 0x134a50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_134a54:
    // 0x134a54: 0x21080
    ctx->pc = 0x134a54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_134a58:
    // 0x134a58: 0x43102a
    ctx->pc = 0x134a58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_134a5c:
    // 0x134a5c: 0x50400004
label_134a60:
    if (ctx->pc == 0x134A60u) {
        ctx->pc = 0x134A60u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x134A64u;
        goto label_134a64;
    }
    ctx->pc = 0x134A5Cu;
    {
        const bool branch_taken_0x134a5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x134a5c) {
            ctx->pc = 0x134A60u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->pc = 0x134A70u;
            goto label_134a70;
        }
    }
    ctx->pc = 0x134A64u;
label_134a64:
    // 0x134a64: 0x2402ffff
    ctx->pc = 0x134a64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_134a68:
    // 0x134a68: 0xa6020060
    ctx->pc = 0x134a68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_134a6c:
    // 0x134a6c: 0x86020060
    ctx->pc = 0x134a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_134a70:
    // 0x134a70: 0x10400013
label_134a74:
    if (ctx->pc == 0x134A74u) {
        ctx->pc = 0x134A74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x134A78u;
        goto label_134a78;
    }
    ctx->pc = 0x134A70u;
    {
        const bool branch_taken_0x134a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x134A74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x134a70) {
            ctx->pc = 0x134AC0u;
            goto label_134ac0;
        }
    }
    ctx->pc = 0x134A78u;
label_134a78:
    // 0x134a78: 0x8204006d
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_134a7c:
    // 0x134a7c: 0x14820006
label_134a80:
    if (ctx->pc == 0x134A80u) {
        ctx->pc = 0x134A80u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x134A84u;
        goto label_134a84;
    }
    ctx->pc = 0x134A7Cu;
    {
        const bool branch_taken_0x134a7c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x134A80u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x134a7c) {
            ctx->pc = 0x134A98u;
            goto label_134a98;
        }
    }
    ctx->pc = 0x134A84u;
label_134a84:
    // 0x134a84: 0xc04c78e
label_134a88:
    if (ctx->pc == 0x134A88u) {
        ctx->pc = 0x134A88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134A8Cu;
        goto label_134a8c;
    }
    ctx->pc = 0x134A84u;
    SET_GPR_U32(ctx, 31, 0x134A8Cu);
    ctx->pc = 0x134A88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A8Cu; }
    }
    if (ctx->pc != 0x134A8Cu) { return; }
    ctx->pc = 0x134A8Cu;
label_134a8c:
    // 0x134a8c: 0x10000008
label_134a90:
    if (ctx->pc == 0x134A90u) {
        ctx->pc = 0x134A90u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x134A94u;
        goto label_134a94;
    }
    ctx->pc = 0x134A8Cu;
    {
        const bool branch_taken_0x134a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134A90u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x134a8c) {
            ctx->pc = 0x134AB0u;
            goto label_134ab0;
        }
    }
    ctx->pc = 0x134A94u;
label_134a94:
    // 0x134a94: 0x0
    ctx->pc = 0x134a94u;
    // NOP
label_134a98:
    // 0x134a98: 0x24020002
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_134a9c:
    // 0x134a9c: 0x14820004
label_134aa0:
    if (ctx->pc == 0x134AA0u) {
        ctx->pc = 0x134AA4u;
        goto label_134aa4;
    }
    ctx->pc = 0x134A9Cu;
    {
        const bool branch_taken_0x134a9c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x134a9c) {
            ctx->pc = 0x134AB0u;
            goto label_134ab0;
        }
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0xc04d200
label_134aa8:
    if (ctx->pc == 0x134AA8u) {
        ctx->pc = 0x134AA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134AACu;
        goto label_134aac;
    }
    ctx->pc = 0x134AA4u;
    SET_GPR_U32(ctx, 31, 0x134AACu);
    ctx->pc = 0x134AA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134800u;
    goto label_134800;
    ctx->pc = 0x134AACu;
label_134aac:
    // 0x134aac: 0x9203006d
    ctx->pc = 0x134aacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_134ab0:
    // 0x134ab0: 0x50600004
label_134ab4:
    if (ctx->pc == 0x134AB4u) {
        ctx->pc = 0x134AB4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x134AB8u;
        goto label_134ab8;
    }
    ctx->pc = 0x134AB0u;
    {
        const bool branch_taken_0x134ab0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x134ab0) {
            ctx->pc = 0x134AB4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x134AC4u;
            goto label_134ac4;
        }
    }
    ctx->pc = 0x134AB8u;
label_134ab8:
    // 0x134ab8: 0xa6000060
    ctx->pc = 0x134ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_134abc:
    // 0x134abc: 0xa600006a
    ctx->pc = 0x134abcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_134ac0:
    // 0x134ac0: 0x8e040008
    ctx->pc = 0x134ac0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_134ac4:
    // 0x134ac4: 0x50800019
label_134ac8:
    if (ctx->pc == 0x134AC8u) {
        ctx->pc = 0x134AC8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134ACCu;
        goto label_134acc;
    }
    ctx->pc = 0x134AC4u;
    {
        const bool branch_taken_0x134ac4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x134ac4) {
            ctx->pc = 0x134AC8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134B2Cu;
            goto label_134b2c;
        }
    }
    ctx->pc = 0x134ACCu;
label_134acc:
    // 0x134acc: 0xc04c16e
label_134ad0:
    if (ctx->pc == 0x134AD0u) {
        ctx->pc = 0x134AD4u;
        goto label_134ad4;
    }
    ctx->pc = 0x134ACCu;
    SET_GPR_U32(ctx, 31, 0x134AD4u);
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AD4u; }
    }
    if (ctx->pc != 0x134AD4u) { return; }
    ctx->pc = 0x134AD4u;
label_134ad4:
    // 0x134ad4: 0x24030004
    ctx->pc = 0x134ad4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_134ad8:
    // 0x134ad8: 0x54430014
label_134adc:
    if (ctx->pc == 0x134ADCu) {
        ctx->pc = 0x134ADCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134AE0u;
        goto label_134ae0;
    }
    ctx->pc = 0x134AD8u;
    {
        const bool branch_taken_0x134ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x134ad8) {
            ctx->pc = 0x134ADCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134B2Cu;
            goto label_134b2c;
        }
    }
    ctx->pc = 0x134AE0u;
label_134ae0:
    // 0x134ae0: 0x8204006d
    ctx->pc = 0x134ae0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_134ae4:
    // 0x134ae4: 0x24020001
    ctx->pc = 0x134ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_134ae8:
    // 0x134ae8: 0x14820005
label_134aec:
    if (ctx->pc == 0x134AECu) {
        ctx->pc = 0x134AECu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x134AF0u;
        goto label_134af0;
    }
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x134AECu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134B00u;
            goto label_134b00;
        }
    }
    ctx->pc = 0x134AF0u;
label_134af0:
    // 0x134af0: 0xc04c78e
label_134af4:
    if (ctx->pc == 0x134AF4u) {
        ctx->pc = 0x134AF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134AF8u;
        goto label_134af8;
    }
    ctx->pc = 0x134AF0u;
    SET_GPR_U32(ctx, 31, 0x134AF8u);
    ctx->pc = 0x134AF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x131E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E38_0x131e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AF8u; }
    }
    if (ctx->pc != 0x134AF8u) { return; }
    ctx->pc = 0x134AF8u;
label_134af8:
    // 0x134af8: 0x10000007
label_134afc:
    if (ctx->pc == 0x134AFCu) {
        ctx->pc = 0x134AFCu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x134B00u;
        goto label_134b00;
    }
    ctx->pc = 0x134AF8u;
    {
        const bool branch_taken_0x134af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x134AFCu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x134af8) {
            ctx->pc = 0x134B18u;
            goto label_134b18;
        }
    }
    ctx->pc = 0x134B00u;
label_134b00:
    // 0x134b00: 0x24020002
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_134b04:
    // 0x134b04: 0x14820004
label_134b08:
    if (ctx->pc == 0x134B08u) {
        ctx->pc = 0x134B0Cu;
        goto label_134b0c;
    }
    ctx->pc = 0x134B04u;
    {
        const bool branch_taken_0x134b04 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x134b04) {
            ctx->pc = 0x134B18u;
            goto label_134b18;
        }
    }
    ctx->pc = 0x134B0Cu;
label_134b0c:
    // 0x134b0c: 0xc04d200
label_134b10:
    if (ctx->pc == 0x134B10u) {
        ctx->pc = 0x134B10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134B14u;
        goto label_134b14;
    }
    ctx->pc = 0x134B0Cu;
    SET_GPR_U32(ctx, 31, 0x134B14u);
    ctx->pc = 0x134B10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134800u;
    goto label_134800;
    ctx->pc = 0x134B14u;
label_134b14:
    // 0x134b14: 0x9203006d
    ctx->pc = 0x134b14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_134b18:
    // 0x134b18: 0x50600004
label_134b1c:
    if (ctx->pc == 0x134B1Cu) {
        ctx->pc = 0x134B1Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134B20u;
        goto label_134b20;
    }
    ctx->pc = 0x134B18u;
    {
        const bool branch_taken_0x134b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x134b18) {
            ctx->pc = 0x134B1Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134B2Cu;
            goto label_134b2c;
        }
    }
    ctx->pc = 0x134B20u;
label_134b20:
    // 0x134b20: 0xa600006a
    ctx->pc = 0x134b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_134b24:
    // 0x134b24: 0xa6000060
    ctx->pc = 0x134b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_134b28:
    // 0x134b28: 0xdfb00000
    ctx->pc = 0x134b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134b2c:
    // 0x134b2c: 0xdfb10008
    ctx->pc = 0x134b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_134b30:
    // 0x134b30: 0xdfbf0010
    ctx->pc = 0x134b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_134b34:
    // 0x134b34: 0x3e00008
label_134b38:
    if (ctx->pc == 0x134B38u) {
        ctx->pc = 0x134B38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x134B3Cu;
        goto label_134b3c;
    }
    ctx->pc = 0x134B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134800u: goto label_134800;
            case 0x134804u: goto label_134804;
            case 0x134808u: goto label_134808;
            case 0x13480Cu: goto label_13480c;
            case 0x134810u: goto label_134810;
            case 0x134814u: goto label_134814;
            case 0x134818u: goto label_134818;
            case 0x13481Cu: goto label_13481c;
            case 0x134820u: goto label_134820;
            case 0x134824u: goto label_134824;
            case 0x134828u: goto label_134828;
            case 0x13482Cu: goto label_13482c;
            case 0x134830u: goto label_134830;
            case 0x134834u: goto label_134834;
            case 0x134838u: goto label_134838;
            case 0x13483Cu: goto label_13483c;
            case 0x134840u: goto label_134840;
            case 0x134844u: goto label_134844;
            case 0x134848u: goto label_134848;
            case 0x13484Cu: goto label_13484c;
            case 0x134850u: goto label_134850;
            case 0x134854u: goto label_134854;
            case 0x134858u: goto label_134858;
            case 0x13485Cu: goto label_13485c;
            case 0x134860u: goto label_134860;
            case 0x134864u: goto label_134864;
            case 0x134868u: goto label_134868;
            case 0x13486Cu: goto label_13486c;
            case 0x134870u: goto label_134870;
            case 0x134874u: goto label_134874;
            case 0x134878u: goto label_134878;
            case 0x13487Cu: goto label_13487c;
            case 0x134880u: goto label_134880;
            case 0x134884u: goto label_134884;
            case 0x134888u: goto label_134888;
            case 0x13488Cu: goto label_13488c;
            case 0x134890u: goto label_134890;
            case 0x134894u: goto label_134894;
            case 0x134898u: goto label_134898;
            case 0x13489Cu: goto label_13489c;
            case 0x1348A0u: goto label_1348a0;
            case 0x1348A4u: goto label_1348a4;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348B0u: goto label_1348b0;
            case 0x1348B4u: goto label_1348b4;
            case 0x1348B8u: goto label_1348b8;
            case 0x1348BCu: goto label_1348bc;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348C4u: goto label_1348c4;
            case 0x1348C8u: goto label_1348c8;
            case 0x1348CCu: goto label_1348cc;
            case 0x1348D0u: goto label_1348d0;
            case 0x1348D4u: goto label_1348d4;
            case 0x1348D8u: goto label_1348d8;
            case 0x1348DCu: goto label_1348dc;
            case 0x1348E0u: goto label_1348e0;
            case 0x1348E4u: goto label_1348e4;
            case 0x1348E8u: goto label_1348e8;
            case 0x1348ECu: goto label_1348ec;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x1348F8u: goto label_1348f8;
            case 0x1348FCu: goto label_1348fc;
            case 0x134900u: goto label_134900;
            case 0x134904u: goto label_134904;
            case 0x134908u: goto label_134908;
            case 0x13490Cu: goto label_13490c;
            case 0x134910u: goto label_134910;
            case 0x134914u: goto label_134914;
            case 0x134918u: goto label_134918;
            case 0x13491Cu: goto label_13491c;
            case 0x134920u: goto label_134920;
            case 0x134924u: goto label_134924;
            case 0x134928u: goto label_134928;
            case 0x13492Cu: goto label_13492c;
            case 0x134930u: goto label_134930;
            case 0x134934u: goto label_134934;
            case 0x134938u: goto label_134938;
            case 0x13493Cu: goto label_13493c;
            case 0x134940u: goto label_134940;
            case 0x134944u: goto label_134944;
            case 0x134948u: goto label_134948;
            case 0x13494Cu: goto label_13494c;
            case 0x134950u: goto label_134950;
            case 0x134954u: goto label_134954;
            case 0x134958u: goto label_134958;
            case 0x13495Cu: goto label_13495c;
            case 0x134960u: goto label_134960;
            case 0x134964u: goto label_134964;
            case 0x134968u: goto label_134968;
            case 0x13496Cu: goto label_13496c;
            case 0x134970u: goto label_134970;
            case 0x134974u: goto label_134974;
            case 0x134978u: goto label_134978;
            case 0x13497Cu: goto label_13497c;
            case 0x134980u: goto label_134980;
            case 0x134984u: goto label_134984;
            case 0x134988u: goto label_134988;
            case 0x13498Cu: goto label_13498c;
            case 0x134990u: goto label_134990;
            case 0x134994u: goto label_134994;
            case 0x134998u: goto label_134998;
            case 0x13499Cu: goto label_13499c;
            case 0x1349A0u: goto label_1349a0;
            case 0x1349A4u: goto label_1349a4;
            case 0x1349A8u: goto label_1349a8;
            case 0x1349ACu: goto label_1349ac;
            case 0x1349B0u: goto label_1349b0;
            case 0x1349B4u: goto label_1349b4;
            case 0x1349B8u: goto label_1349b8;
            case 0x1349BCu: goto label_1349bc;
            case 0x1349C0u: goto label_1349c0;
            case 0x1349C4u: goto label_1349c4;
            case 0x1349C8u: goto label_1349c8;
            case 0x1349CCu: goto label_1349cc;
            case 0x1349D0u: goto label_1349d0;
            case 0x1349D4u: goto label_1349d4;
            case 0x1349D8u: goto label_1349d8;
            case 0x1349DCu: goto label_1349dc;
            case 0x1349E0u: goto label_1349e0;
            case 0x1349E4u: goto label_1349e4;
            case 0x1349E8u: goto label_1349e8;
            case 0x1349ECu: goto label_1349ec;
            case 0x1349F0u: goto label_1349f0;
            case 0x1349F4u: goto label_1349f4;
            case 0x1349F8u: goto label_1349f8;
            case 0x1349FCu: goto label_1349fc;
            case 0x134A00u: goto label_134a00;
            case 0x134A04u: goto label_134a04;
            case 0x134A08u: goto label_134a08;
            case 0x134A0Cu: goto label_134a0c;
            case 0x134A10u: goto label_134a10;
            case 0x134A14u: goto label_134a14;
            case 0x134A18u: goto label_134a18;
            case 0x134A1Cu: goto label_134a1c;
            case 0x134A20u: goto label_134a20;
            case 0x134A24u: goto label_134a24;
            case 0x134A28u: goto label_134a28;
            case 0x134A2Cu: goto label_134a2c;
            case 0x134A30u: goto label_134a30;
            case 0x134A34u: goto label_134a34;
            case 0x134A38u: goto label_134a38;
            case 0x134A3Cu: goto label_134a3c;
            case 0x134A40u: goto label_134a40;
            case 0x134A44u: goto label_134a44;
            case 0x134A48u: goto label_134a48;
            case 0x134A4Cu: goto label_134a4c;
            case 0x134A50u: goto label_134a50;
            case 0x134A54u: goto label_134a54;
            case 0x134A58u: goto label_134a58;
            case 0x134A5Cu: goto label_134a5c;
            case 0x134A60u: goto label_134a60;
            case 0x134A64u: goto label_134a64;
            case 0x134A68u: goto label_134a68;
            case 0x134A6Cu: goto label_134a6c;
            case 0x134A70u: goto label_134a70;
            case 0x134A74u: goto label_134a74;
            case 0x134A78u: goto label_134a78;
            case 0x134A7Cu: goto label_134a7c;
            case 0x134A80u: goto label_134a80;
            case 0x134A84u: goto label_134a84;
            case 0x134A88u: goto label_134a88;
            case 0x134A8Cu: goto label_134a8c;
            case 0x134A90u: goto label_134a90;
            case 0x134A94u: goto label_134a94;
            case 0x134A98u: goto label_134a98;
            case 0x134A9Cu: goto label_134a9c;
            case 0x134AA0u: goto label_134aa0;
            case 0x134AA4u: goto label_134aa4;
            case 0x134AA8u: goto label_134aa8;
            case 0x134AACu: goto label_134aac;
            case 0x134AB0u: goto label_134ab0;
            case 0x134AB4u: goto label_134ab4;
            case 0x134AB8u: goto label_134ab8;
            case 0x134ABCu: goto label_134abc;
            case 0x134AC0u: goto label_134ac0;
            case 0x134AC4u: goto label_134ac4;
            case 0x134AC8u: goto label_134ac8;
            case 0x134ACCu: goto label_134acc;
            case 0x134AD0u: goto label_134ad0;
            case 0x134AD4u: goto label_134ad4;
            case 0x134AD8u: goto label_134ad8;
            case 0x134ADCu: goto label_134adc;
            case 0x134AE0u: goto label_134ae0;
            case 0x134AE4u: goto label_134ae4;
            case 0x134AE8u: goto label_134ae8;
            case 0x134AECu: goto label_134aec;
            case 0x134AF0u: goto label_134af0;
            case 0x134AF4u: goto label_134af4;
            case 0x134AF8u: goto label_134af8;
            case 0x134AFCu: goto label_134afc;
            case 0x134B00u: goto label_134b00;
            case 0x134B04u: goto label_134b04;
            case 0x134B08u: goto label_134b08;
            case 0x134B0Cu: goto label_134b0c;
            case 0x134B10u: goto label_134b10;
            case 0x134B14u: goto label_134b14;
            case 0x134B18u: goto label_134b18;
            case 0x134B1Cu: goto label_134b1c;
            case 0x134B20u: goto label_134b20;
            case 0x134B24u: goto label_134b24;
            case 0x134B28u: goto label_134b28;
            case 0x134B2Cu: goto label_134b2c;
            case 0x134B30u: goto label_134b30;
            case 0x134B34u: goto label_134b34;
            case 0x134B38u: goto label_134b38;
            case 0x134B3Cu: goto label_134b3c;
            case 0x134B40u: goto label_134b40;
            case 0x134B44u: goto label_134b44;
            case 0x134B48u: goto label_134b48;
            case 0x134B4Cu: goto label_134b4c;
            case 0x134B50u: goto label_134b50;
            case 0x134B54u: goto label_134b54;
            case 0x134B58u: goto label_134b58;
            case 0x134B5Cu: goto label_134b5c;
            case 0x134B60u: goto label_134b60;
            case 0x134B64u: goto label_134b64;
            case 0x134B68u: goto label_134b68;
            case 0x134B6Cu: goto label_134b6c;
            case 0x134B70u: goto label_134b70;
            case 0x134B74u: goto label_134b74;
            case 0x134B78u: goto label_134b78;
            case 0x134B7Cu: goto label_134b7c;
            case 0x134B80u: goto label_134b80;
            case 0x134B84u: goto label_134b84;
            case 0x134B88u: goto label_134b88;
            case 0x134B8Cu: goto label_134b8c;
            case 0x134B90u: goto label_134b90;
            case 0x134B94u: goto label_134b94;
            case 0x134B98u: goto label_134b98;
            case 0x134B9Cu: goto label_134b9c;
            case 0x134BA0u: goto label_134ba0;
            case 0x134BA4u: goto label_134ba4;
            case 0x134BA8u: goto label_134ba8;
            case 0x134BACu: goto label_134bac;
            case 0x134BB0u: goto label_134bb0;
            case 0x134BB4u: goto label_134bb4;
            case 0x134BB8u: goto label_134bb8;
            case 0x134BBCu: goto label_134bbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134B3Cu;
label_134b3c:
    // 0x134b3c: 0x0
    ctx->pc = 0x134b3cu;
    // NOP
label_134b40:
    // 0x134b40: 0x27bdfff0
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_134b44:
    // 0x134b44: 0xffb00000
    ctx->pc = 0x134b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_134b48:
    // 0x134b48: 0x80802d
    ctx->pc = 0x134b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134b4c:
    // 0x134b4c: 0xffbf0008
    ctx->pc = 0x134b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_134b50:
    // 0x134b50: 0x8e020008
    ctx->pc = 0x134b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_134b54:
    // 0x134b54: 0x1040000a
label_134b58:
    if (ctx->pc == 0x134B58u) {
        ctx->pc = 0x134B58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x134B5Cu;
        goto label_134b5c;
    }
    ctx->pc = 0x134B54u;
    {
        const bool branch_taken_0x134b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x134B58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x134b54) {
            ctx->pc = 0x134B80u;
            goto label_134b80;
        }
    }
    ctx->pc = 0x134B5Cu;
label_134b5c:
    // 0x134b5c: 0xc04c16e
label_134b60:
    if (ctx->pc == 0x134B60u) {
        ctx->pc = 0x134B64u;
        goto label_134b64;
    }
    ctx->pc = 0x134B5Cu;
    SET_GPR_U32(ctx, 31, 0x134B64u);
    ctx->pc = 0x1305B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001305B8_0x1305b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B64u; }
    }
    if (ctx->pc != 0x134B64u) { return; }
    ctx->pc = 0x134B64u;
label_134b64:
    // 0x134b64: 0x24030004
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_134b68:
    // 0x134b68: 0x54430006
label_134b6c:
    if (ctx->pc == 0x134B6Cu) {
        ctx->pc = 0x134B6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x134B70u;
        goto label_134b70;
    }
    ctx->pc = 0x134B68u;
    {
        const bool branch_taken_0x134b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x134b68) {
            ctx->pc = 0x134B6Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->pc = 0x134B84u;
            goto label_134b84;
        }
    }
    ctx->pc = 0x134B70u;
label_134b70:
    // 0x134b70: 0x2402ffff
    ctx->pc = 0x134b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_134b74:
    // 0x134b74: 0x24030006
    ctx->pc = 0x134b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
label_134b78:
    // 0x134b78: 0xa6020060
    ctx->pc = 0x134b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_134b7c:
    // 0x134b7c: 0xa2030001
    ctx->pc = 0x134b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_134b80:
    // 0x134b80: 0x8e040094
    ctx->pc = 0x134b80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_134b84:
    // 0x134b84: 0x5080000b
label_134b88:
    if (ctx->pc == 0x134B88u) {
        ctx->pc = 0x134B88u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134B8Cu;
        goto label_134b8c;
    }
    ctx->pc = 0x134B84u;
    {
        const bool branch_taken_0x134b84 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x134b84) {
            ctx->pc = 0x134B88u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134BB4u;
            goto label_134bb4;
        }
    }
    ctx->pc = 0x134B8Cu;
label_134b8c:
    // 0x134b8c: 0xc04f428
label_134b90:
    if (ctx->pc == 0x134B90u) {
        ctx->pc = 0x134B94u;
        goto label_134b94;
    }
    ctx->pc = 0x134B8Cu;
    SET_GPR_U32(ctx, 31, 0x134B94u);
    ctx->pc = 0x13D0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D0A0_0x13d0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B94u; }
    }
    if (ctx->pc != 0x134B94u) { return; }
    ctx->pc = 0x134B94u;
label_134b94:
    // 0x134b94: 0x24030003
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_134b98:
    // 0x134b98: 0x54430006
label_134b9c:
    if (ctx->pc == 0x134B9Cu) {
        ctx->pc = 0x134B9Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x134BA0u;
        goto label_134ba0;
    }
    ctx->pc = 0x134B98u;
    {
        const bool branch_taken_0x134b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x134b98) {
            ctx->pc = 0x134B9Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x134BB4u;
            goto label_134bb4;
        }
    }
    ctx->pc = 0x134BA0u;
label_134ba0:
    // 0x134ba0: 0x24020006
    ctx->pc = 0x134ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_134ba4:
    // 0x134ba4: 0x2403ffff
    ctx->pc = 0x134ba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_134ba8:
    // 0x134ba8: 0xa2020001
    ctx->pc = 0x134ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_134bac:
    // 0x134bac: 0xa6030060
    ctx->pc = 0x134bacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
label_134bb0:
    // 0x134bb0: 0xdfb00000
    ctx->pc = 0x134bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134bb4:
    // 0x134bb4: 0xdfbf0008
    ctx->pc = 0x134bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_134bb8:
    // 0x134bb8: 0x3e00008
label_134bbc:
    if (ctx->pc == 0x134BBCu) {
        ctx->pc = 0x134BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x134BC0u;
        goto label_fallthrough_0x134bb8;
    }
    ctx->pc = 0x134BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134800u: goto label_134800;
            case 0x134804u: goto label_134804;
            case 0x134808u: goto label_134808;
            case 0x13480Cu: goto label_13480c;
            case 0x134810u: goto label_134810;
            case 0x134814u: goto label_134814;
            case 0x134818u: goto label_134818;
            case 0x13481Cu: goto label_13481c;
            case 0x134820u: goto label_134820;
            case 0x134824u: goto label_134824;
            case 0x134828u: goto label_134828;
            case 0x13482Cu: goto label_13482c;
            case 0x134830u: goto label_134830;
            case 0x134834u: goto label_134834;
            case 0x134838u: goto label_134838;
            case 0x13483Cu: goto label_13483c;
            case 0x134840u: goto label_134840;
            case 0x134844u: goto label_134844;
            case 0x134848u: goto label_134848;
            case 0x13484Cu: goto label_13484c;
            case 0x134850u: goto label_134850;
            case 0x134854u: goto label_134854;
            case 0x134858u: goto label_134858;
            case 0x13485Cu: goto label_13485c;
            case 0x134860u: goto label_134860;
            case 0x134864u: goto label_134864;
            case 0x134868u: goto label_134868;
            case 0x13486Cu: goto label_13486c;
            case 0x134870u: goto label_134870;
            case 0x134874u: goto label_134874;
            case 0x134878u: goto label_134878;
            case 0x13487Cu: goto label_13487c;
            case 0x134880u: goto label_134880;
            case 0x134884u: goto label_134884;
            case 0x134888u: goto label_134888;
            case 0x13488Cu: goto label_13488c;
            case 0x134890u: goto label_134890;
            case 0x134894u: goto label_134894;
            case 0x134898u: goto label_134898;
            case 0x13489Cu: goto label_13489c;
            case 0x1348A0u: goto label_1348a0;
            case 0x1348A4u: goto label_1348a4;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348ACu: goto label_1348ac;
            case 0x1348B0u: goto label_1348b0;
            case 0x1348B4u: goto label_1348b4;
            case 0x1348B8u: goto label_1348b8;
            case 0x1348BCu: goto label_1348bc;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348C4u: goto label_1348c4;
            case 0x1348C8u: goto label_1348c8;
            case 0x1348CCu: goto label_1348cc;
            case 0x1348D0u: goto label_1348d0;
            case 0x1348D4u: goto label_1348d4;
            case 0x1348D8u: goto label_1348d8;
            case 0x1348DCu: goto label_1348dc;
            case 0x1348E0u: goto label_1348e0;
            case 0x1348E4u: goto label_1348e4;
            case 0x1348E8u: goto label_1348e8;
            case 0x1348ECu: goto label_1348ec;
            case 0x1348F0u: goto label_1348f0;
            case 0x1348F4u: goto label_1348f4;
            case 0x1348F8u: goto label_1348f8;
            case 0x1348FCu: goto label_1348fc;
            case 0x134900u: goto label_134900;
            case 0x134904u: goto label_134904;
            case 0x134908u: goto label_134908;
            case 0x13490Cu: goto label_13490c;
            case 0x134910u: goto label_134910;
            case 0x134914u: goto label_134914;
            case 0x134918u: goto label_134918;
            case 0x13491Cu: goto label_13491c;
            case 0x134920u: goto label_134920;
            case 0x134924u: goto label_134924;
            case 0x134928u: goto label_134928;
            case 0x13492Cu: goto label_13492c;
            case 0x134930u: goto label_134930;
            case 0x134934u: goto label_134934;
            case 0x134938u: goto label_134938;
            case 0x13493Cu: goto label_13493c;
            case 0x134940u: goto label_134940;
            case 0x134944u: goto label_134944;
            case 0x134948u: goto label_134948;
            case 0x13494Cu: goto label_13494c;
            case 0x134950u: goto label_134950;
            case 0x134954u: goto label_134954;
            case 0x134958u: goto label_134958;
            case 0x13495Cu: goto label_13495c;
            case 0x134960u: goto label_134960;
            case 0x134964u: goto label_134964;
            case 0x134968u: goto label_134968;
            case 0x13496Cu: goto label_13496c;
            case 0x134970u: goto label_134970;
            case 0x134974u: goto label_134974;
            case 0x134978u: goto label_134978;
            case 0x13497Cu: goto label_13497c;
            case 0x134980u: goto label_134980;
            case 0x134984u: goto label_134984;
            case 0x134988u: goto label_134988;
            case 0x13498Cu: goto label_13498c;
            case 0x134990u: goto label_134990;
            case 0x134994u: goto label_134994;
            case 0x134998u: goto label_134998;
            case 0x13499Cu: goto label_13499c;
            case 0x1349A0u: goto label_1349a0;
            case 0x1349A4u: goto label_1349a4;
            case 0x1349A8u: goto label_1349a8;
            case 0x1349ACu: goto label_1349ac;
            case 0x1349B0u: goto label_1349b0;
            case 0x1349B4u: goto label_1349b4;
            case 0x1349B8u: goto label_1349b8;
            case 0x1349BCu: goto label_1349bc;
            case 0x1349C0u: goto label_1349c0;
            case 0x1349C4u: goto label_1349c4;
            case 0x1349C8u: goto label_1349c8;
            case 0x1349CCu: goto label_1349cc;
            case 0x1349D0u: goto label_1349d0;
            case 0x1349D4u: goto label_1349d4;
            case 0x1349D8u: goto label_1349d8;
            case 0x1349DCu: goto label_1349dc;
            case 0x1349E0u: goto label_1349e0;
            case 0x1349E4u: goto label_1349e4;
            case 0x1349E8u: goto label_1349e8;
            case 0x1349ECu: goto label_1349ec;
            case 0x1349F0u: goto label_1349f0;
            case 0x1349F4u: goto label_1349f4;
            case 0x1349F8u: goto label_1349f8;
            case 0x1349FCu: goto label_1349fc;
            case 0x134A00u: goto label_134a00;
            case 0x134A04u: goto label_134a04;
            case 0x134A08u: goto label_134a08;
            case 0x134A0Cu: goto label_134a0c;
            case 0x134A10u: goto label_134a10;
            case 0x134A14u: goto label_134a14;
            case 0x134A18u: goto label_134a18;
            case 0x134A1Cu: goto label_134a1c;
            case 0x134A20u: goto label_134a20;
            case 0x134A24u: goto label_134a24;
            case 0x134A28u: goto label_134a28;
            case 0x134A2Cu: goto label_134a2c;
            case 0x134A30u: goto label_134a30;
            case 0x134A34u: goto label_134a34;
            case 0x134A38u: goto label_134a38;
            case 0x134A3Cu: goto label_134a3c;
            case 0x134A40u: goto label_134a40;
            case 0x134A44u: goto label_134a44;
            case 0x134A48u: goto label_134a48;
            case 0x134A4Cu: goto label_134a4c;
            case 0x134A50u: goto label_134a50;
            case 0x134A54u: goto label_134a54;
            case 0x134A58u: goto label_134a58;
            case 0x134A5Cu: goto label_134a5c;
            case 0x134A60u: goto label_134a60;
            case 0x134A64u: goto label_134a64;
            case 0x134A68u: goto label_134a68;
            case 0x134A6Cu: goto label_134a6c;
            case 0x134A70u: goto label_134a70;
            case 0x134A74u: goto label_134a74;
            case 0x134A78u: goto label_134a78;
            case 0x134A7Cu: goto label_134a7c;
            case 0x134A80u: goto label_134a80;
            case 0x134A84u: goto label_134a84;
            case 0x134A88u: goto label_134a88;
            case 0x134A8Cu: goto label_134a8c;
            case 0x134A90u: goto label_134a90;
            case 0x134A94u: goto label_134a94;
            case 0x134A98u: goto label_134a98;
            case 0x134A9Cu: goto label_134a9c;
            case 0x134AA0u: goto label_134aa0;
            case 0x134AA4u: goto label_134aa4;
            case 0x134AA8u: goto label_134aa8;
            case 0x134AACu: goto label_134aac;
            case 0x134AB0u: goto label_134ab0;
            case 0x134AB4u: goto label_134ab4;
            case 0x134AB8u: goto label_134ab8;
            case 0x134ABCu: goto label_134abc;
            case 0x134AC0u: goto label_134ac0;
            case 0x134AC4u: goto label_134ac4;
            case 0x134AC8u: goto label_134ac8;
            case 0x134ACCu: goto label_134acc;
            case 0x134AD0u: goto label_134ad0;
            case 0x134AD4u: goto label_134ad4;
            case 0x134AD8u: goto label_134ad8;
            case 0x134ADCu: goto label_134adc;
            case 0x134AE0u: goto label_134ae0;
            case 0x134AE4u: goto label_134ae4;
            case 0x134AE8u: goto label_134ae8;
            case 0x134AECu: goto label_134aec;
            case 0x134AF0u: goto label_134af0;
            case 0x134AF4u: goto label_134af4;
            case 0x134AF8u: goto label_134af8;
            case 0x134AFCu: goto label_134afc;
            case 0x134B00u: goto label_134b00;
            case 0x134B04u: goto label_134b04;
            case 0x134B08u: goto label_134b08;
            case 0x134B0Cu: goto label_134b0c;
            case 0x134B10u: goto label_134b10;
            case 0x134B14u: goto label_134b14;
            case 0x134B18u: goto label_134b18;
            case 0x134B1Cu: goto label_134b1c;
            case 0x134B20u: goto label_134b20;
            case 0x134B24u: goto label_134b24;
            case 0x134B28u: goto label_134b28;
            case 0x134B2Cu: goto label_134b2c;
            case 0x134B30u: goto label_134b30;
            case 0x134B34u: goto label_134b34;
            case 0x134B38u: goto label_134b38;
            case 0x134B3Cu: goto label_134b3c;
            case 0x134B40u: goto label_134b40;
            case 0x134B44u: goto label_134b44;
            case 0x134B48u: goto label_134b48;
            case 0x134B4Cu: goto label_134b4c;
            case 0x134B50u: goto label_134b50;
            case 0x134B54u: goto label_134b54;
            case 0x134B58u: goto label_134b58;
            case 0x134B5Cu: goto label_134b5c;
            case 0x134B60u: goto label_134b60;
            case 0x134B64u: goto label_134b64;
            case 0x134B68u: goto label_134b68;
            case 0x134B6Cu: goto label_134b6c;
            case 0x134B70u: goto label_134b70;
            case 0x134B74u: goto label_134b74;
            case 0x134B78u: goto label_134b78;
            case 0x134B7Cu: goto label_134b7c;
            case 0x134B80u: goto label_134b80;
            case 0x134B84u: goto label_134b84;
            case 0x134B88u: goto label_134b88;
            case 0x134B8Cu: goto label_134b8c;
            case 0x134B90u: goto label_134b90;
            case 0x134B94u: goto label_134b94;
            case 0x134B98u: goto label_134b98;
            case 0x134B9Cu: goto label_134b9c;
            case 0x134BA0u: goto label_134ba0;
            case 0x134BA4u: goto label_134ba4;
            case 0x134BA8u: goto label_134ba8;
            case 0x134BACu: goto label_134bac;
            case 0x134BB0u: goto label_134bb0;
            case 0x134BB4u: goto label_134bb4;
            case 0x134BB8u: goto label_134bb8;
            case 0x134BBCu: goto label_134bbc;
            default: break;
        }
        return;
    }
label_fallthrough_0x134bb8:
    ctx->pc = 0x134BC0u;
}
