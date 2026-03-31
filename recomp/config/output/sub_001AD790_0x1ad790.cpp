#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AD790
// Address: 0x1ad790 - 0x1ada20
void sub_001AD790_0x1ad790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ad790u;

label_1ad790:
    // 0x1ad790: 0x90830001
    ctx->pc = 0x1ad790u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1ad794:
    // 0x1ad794: 0x14600003
label_1ad798:
    if (ctx->pc == 0x1AD798u) {
        ctx->pc = 0x1AD798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AD79Cu;
        goto label_1ad79c;
    }
    ctx->pc = 0x1AD794u;
    {
        const bool branch_taken_0x1ad794 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD798u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ad794) {
            ctx->pc = 0x1AD7A4u;
            goto label_1ad7a4;
        }
    }
    ctx->pc = 0x1AD79Cu;
label_1ad79c:
    // 0x1ad79c: 0x1000000c
label_1ad7a0:
    if (ctx->pc == 0x1AD7A0u) {
        ctx->pc = 0x1AD7A0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1AD7A4u;
        goto label_1ad7a4;
    }
    ctx->pc = 0x1AD79Cu;
    {
        const bool branch_taken_0x1ad79c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD7A0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1ad79c) {
            ctx->pc = 0x1AD7D0u;
            goto label_1ad7d0;
        }
    }
    ctx->pc = 0x1AD7A4u;
label_1ad7a4:
    // 0x1ad7a4: 0x90820002
    ctx->pc = 0x1ad7a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1ad7a8:
    // 0x1ad7a8: 0x24430001
    ctx->pc = 0x1ad7a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
label_1ad7ac:
    // 0x1ad7ac: 0xa0830002
    ctx->pc = 0x1ad7acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1ad7b0:
    // 0x1ad7b0: 0x90830002
    ctx->pc = 0x1ad7b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1ad7b4:
    // 0x1ad7b4: 0x28630008
    ctx->pc = 0x1ad7b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 8));
label_1ad7b8:
    // 0x1ad7b8: 0x14600002
label_1ad7bc:
    if (ctx->pc == 0x1AD7BCu) {
        ctx->pc = 0x1AD7C0u;
        goto label_1ad7c0;
    }
    ctx->pc = 0x1AD7B8u;
    {
        const bool branch_taken_0x1ad7b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ad7b8) {
            ctx->pc = 0x1AD7C4u;
            goto label_1ad7c4;
        }
    }
    ctx->pc = 0x1AD7C0u;
label_1ad7c0:
    // 0x1ad7c0: 0xa0800002
    ctx->pc = 0x1ad7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_1ad7c4:
    // 0x1ad7c4: 0x90830001
    ctx->pc = 0x1ad7c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1ad7c8:
    // 0x1ad7c8: 0x2463ffff
    ctx->pc = 0x1ad7c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ad7cc:
    // 0x1ad7cc: 0xa0830001
    ctx->pc = 0x1ad7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1ad7d0:
    // 0x1ad7d0: 0x3e00008
label_1ad7d4:
    if (ctx->pc == 0x1AD7D4u) {
        ctx->pc = 0x1AD7D8u;
        goto label_1ad7d8;
    }
    ctx->pc = 0x1AD7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD794u: goto label_1ad794;
            case 0x1AD798u: goto label_1ad798;
            case 0x1AD79Cu: goto label_1ad79c;
            case 0x1AD7A0u: goto label_1ad7a0;
            case 0x1AD7A4u: goto label_1ad7a4;
            case 0x1AD7A8u: goto label_1ad7a8;
            case 0x1AD7ACu: goto label_1ad7ac;
            case 0x1AD7B0u: goto label_1ad7b0;
            case 0x1AD7B4u: goto label_1ad7b4;
            case 0x1AD7B8u: goto label_1ad7b8;
            case 0x1AD7BCu: goto label_1ad7bc;
            case 0x1AD7C0u: goto label_1ad7c0;
            case 0x1AD7C4u: goto label_1ad7c4;
            case 0x1AD7C8u: goto label_1ad7c8;
            case 0x1AD7CCu: goto label_1ad7cc;
            case 0x1AD7D0u: goto label_1ad7d0;
            case 0x1AD7D4u: goto label_1ad7d4;
            case 0x1AD7D8u: goto label_1ad7d8;
            case 0x1AD7DCu: goto label_1ad7dc;
            case 0x1AD7E0u: goto label_1ad7e0;
            case 0x1AD7E4u: goto label_1ad7e4;
            case 0x1AD7E8u: goto label_1ad7e8;
            case 0x1AD7ECu: goto label_1ad7ec;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD7F4u: goto label_1ad7f4;
            case 0x1AD7F8u: goto label_1ad7f8;
            case 0x1AD7FCu: goto label_1ad7fc;
            case 0x1AD800u: goto label_1ad800;
            case 0x1AD804u: goto label_1ad804;
            case 0x1AD808u: goto label_1ad808;
            case 0x1AD80Cu: goto label_1ad80c;
            case 0x1AD810u: goto label_1ad810;
            case 0x1AD814u: goto label_1ad814;
            case 0x1AD818u: goto label_1ad818;
            case 0x1AD81Cu: goto label_1ad81c;
            case 0x1AD820u: goto label_1ad820;
            case 0x1AD824u: goto label_1ad824;
            case 0x1AD828u: goto label_1ad828;
            case 0x1AD82Cu: goto label_1ad82c;
            case 0x1AD830u: goto label_1ad830;
            case 0x1AD834u: goto label_1ad834;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD840u: goto label_1ad840;
            case 0x1AD844u: goto label_1ad844;
            case 0x1AD848u: goto label_1ad848;
            case 0x1AD84Cu: goto label_1ad84c;
            case 0x1AD850u: goto label_1ad850;
            case 0x1AD854u: goto label_1ad854;
            case 0x1AD858u: goto label_1ad858;
            case 0x1AD85Cu: goto label_1ad85c;
            case 0x1AD860u: goto label_1ad860;
            case 0x1AD864u: goto label_1ad864;
            case 0x1AD868u: goto label_1ad868;
            case 0x1AD86Cu: goto label_1ad86c;
            case 0x1AD870u: goto label_1ad870;
            case 0x1AD874u: goto label_1ad874;
            case 0x1AD878u: goto label_1ad878;
            case 0x1AD87Cu: goto label_1ad87c;
            case 0x1AD880u: goto label_1ad880;
            case 0x1AD884u: goto label_1ad884;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD88Cu: goto label_1ad88c;
            case 0x1AD890u: goto label_1ad890;
            case 0x1AD894u: goto label_1ad894;
            case 0x1AD898u: goto label_1ad898;
            case 0x1AD89Cu: goto label_1ad89c;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8A4u: goto label_1ad8a4;
            case 0x1AD8A8u: goto label_1ad8a8;
            case 0x1AD8ACu: goto label_1ad8ac;
            case 0x1AD8B0u: goto label_1ad8b0;
            case 0x1AD8B4u: goto label_1ad8b4;
            case 0x1AD8B8u: goto label_1ad8b8;
            case 0x1AD8BCu: goto label_1ad8bc;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            case 0x1AD8C8u: goto label_1ad8c8;
            case 0x1AD8CCu: goto label_1ad8cc;
            case 0x1AD8D0u: goto label_1ad8d0;
            case 0x1AD8D4u: goto label_1ad8d4;
            case 0x1AD8D8u: goto label_1ad8d8;
            case 0x1AD8DCu: goto label_1ad8dc;
            case 0x1AD8E0u: goto label_1ad8e0;
            case 0x1AD8E4u: goto label_1ad8e4;
            case 0x1AD8E8u: goto label_1ad8e8;
            case 0x1AD8ECu: goto label_1ad8ec;
            case 0x1AD8F0u: goto label_1ad8f0;
            case 0x1AD8F4u: goto label_1ad8f4;
            case 0x1AD8F8u: goto label_1ad8f8;
            case 0x1AD8FCu: goto label_1ad8fc;
            case 0x1AD900u: goto label_1ad900;
            case 0x1AD904u: goto label_1ad904;
            case 0x1AD908u: goto label_1ad908;
            case 0x1AD90Cu: goto label_1ad90c;
            case 0x1AD910u: goto label_1ad910;
            case 0x1AD914u: goto label_1ad914;
            case 0x1AD918u: goto label_1ad918;
            case 0x1AD91Cu: goto label_1ad91c;
            case 0x1AD920u: goto label_1ad920;
            case 0x1AD924u: goto label_1ad924;
            case 0x1AD928u: goto label_1ad928;
            case 0x1AD92Cu: goto label_1ad92c;
            case 0x1AD930u: goto label_1ad930;
            case 0x1AD934u: goto label_1ad934;
            case 0x1AD938u: goto label_1ad938;
            case 0x1AD93Cu: goto label_1ad93c;
            case 0x1AD940u: goto label_1ad940;
            case 0x1AD944u: goto label_1ad944;
            case 0x1AD948u: goto label_1ad948;
            case 0x1AD94Cu: goto label_1ad94c;
            case 0x1AD950u: goto label_1ad950;
            case 0x1AD954u: goto label_1ad954;
            case 0x1AD958u: goto label_1ad958;
            case 0x1AD95Cu: goto label_1ad95c;
            case 0x1AD960u: goto label_1ad960;
            case 0x1AD964u: goto label_1ad964;
            case 0x1AD968u: goto label_1ad968;
            case 0x1AD96Cu: goto label_1ad96c;
            case 0x1AD970u: goto label_1ad970;
            case 0x1AD974u: goto label_1ad974;
            case 0x1AD978u: goto label_1ad978;
            case 0x1AD97Cu: goto label_1ad97c;
            case 0x1AD980u: goto label_1ad980;
            case 0x1AD984u: goto label_1ad984;
            case 0x1AD988u: goto label_1ad988;
            case 0x1AD98Cu: goto label_1ad98c;
            case 0x1AD990u: goto label_1ad990;
            case 0x1AD994u: goto label_1ad994;
            case 0x1AD998u: goto label_1ad998;
            case 0x1AD99Cu: goto label_1ad99c;
            case 0x1AD9A0u: goto label_1ad9a0;
            case 0x1AD9A4u: goto label_1ad9a4;
            case 0x1AD9A8u: goto label_1ad9a8;
            case 0x1AD9ACu: goto label_1ad9ac;
            case 0x1AD9B0u: goto label_1ad9b0;
            case 0x1AD9B4u: goto label_1ad9b4;
            case 0x1AD9B8u: goto label_1ad9b8;
            case 0x1AD9BCu: goto label_1ad9bc;
            case 0x1AD9C0u: goto label_1ad9c0;
            case 0x1AD9C4u: goto label_1ad9c4;
            case 0x1AD9C8u: goto label_1ad9c8;
            case 0x1AD9CCu: goto label_1ad9cc;
            case 0x1AD9D0u: goto label_1ad9d0;
            case 0x1AD9D4u: goto label_1ad9d4;
            case 0x1AD9D8u: goto label_1ad9d8;
            case 0x1AD9DCu: goto label_1ad9dc;
            case 0x1AD9E0u: goto label_1ad9e0;
            case 0x1AD9E4u: goto label_1ad9e4;
            case 0x1AD9E8u: goto label_1ad9e8;
            case 0x1AD9ECu: goto label_1ad9ec;
            case 0x1AD9F0u: goto label_1ad9f0;
            case 0x1AD9F4u: goto label_1ad9f4;
            case 0x1AD9F8u: goto label_1ad9f8;
            case 0x1AD9FCu: goto label_1ad9fc;
            case 0x1ADA00u: goto label_1ada00;
            case 0x1ADA04u: goto label_1ada04;
            case 0x1ADA08u: goto label_1ada08;
            case 0x1ADA0Cu: goto label_1ada0c;
            case 0x1ADA10u: goto label_1ada10;
            case 0x1ADA14u: goto label_1ada14;
            case 0x1ADA18u: goto label_1ada18;
            case 0x1ADA1Cu: goto label_1ada1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD7D8u;
label_1ad7d8:
    // 0x1ad7d8: 0x0
    ctx->pc = 0x1ad7d8u;
    // NOP
label_1ad7dc:
    // 0x1ad7dc: 0x0
    ctx->pc = 0x1ad7dcu;
    // NOP
label_1ad7e0:
    // 0x1ad7e0: 0x27bdfed0
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
label_1ad7e4:
    // 0x1ad7e4: 0x3c01002b
    ctx->pc = 0x1ad7e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
label_1ad7e8:
    // 0x1ad7e8: 0xffbf0020
    ctx->pc = 0x1ad7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ad7ec:
    // 0x1ad7ec: 0x7fb10010
    ctx->pc = 0x1ad7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ad7f0:
    // 0x1ad7f0: 0x7fb00000
    ctx->pc = 0x1ad7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ad7f4:
    // 0x1ad7f4: 0x3c11002b
    ctx->pc = 0x1ad7f4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)43 << 16));
label_1ad7f8:
    // 0x1ad7f8: 0x90233840
    ctx->pc = 0x1ad7f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14400)));
label_1ad7fc:
    // 0x1ad7fc: 0x2c610006
    ctx->pc = 0x1ad7fcu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 6));
label_1ad800:
    // 0x1ad800: 0x10200080
label_1ad804:
    if (ctx->pc == 0x1AD804u) {
        ctx->pc = 0x1AD804u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 14400));
        ctx->pc = 0x1AD808u;
        goto label_1ad808;
    }
    ctx->pc = 0x1AD800u;
    {
        const bool branch_taken_0x1ad800 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD804u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 14400));
        if (branch_taken_0x1ad800) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD808u;
label_1ad808:
    // 0x1ad808: 0x3c040025
    ctx->pc = 0x1ad808u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
label_1ad80c:
    // 0x1ad80c: 0x31880
    ctx->pc = 0x1ad80cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1ad810:
    // 0x1ad810: 0x2484fe00
    ctx->pc = 0x1ad810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966784));
label_1ad814:
    // 0x1ad814: 0x641821
    ctx->pc = 0x1ad814u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ad818:
    // 0x1ad818: 0x8c630000
    ctx->pc = 0x1ad818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ad81c:
    // 0x1ad81c: 0x600008
label_1ad820:
    if (ctx->pc == 0x1AD820u) {
        ctx->pc = 0x1AD824u;
        goto label_1ad824;
    }
    ctx->pc = 0x1AD81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD794u: goto label_1ad794;
            case 0x1AD798u: goto label_1ad798;
            case 0x1AD79Cu: goto label_1ad79c;
            case 0x1AD7A0u: goto label_1ad7a0;
            case 0x1AD7A4u: goto label_1ad7a4;
            case 0x1AD7A8u: goto label_1ad7a8;
            case 0x1AD7ACu: goto label_1ad7ac;
            case 0x1AD7B0u: goto label_1ad7b0;
            case 0x1AD7B4u: goto label_1ad7b4;
            case 0x1AD7B8u: goto label_1ad7b8;
            case 0x1AD7BCu: goto label_1ad7bc;
            case 0x1AD7C0u: goto label_1ad7c0;
            case 0x1AD7C4u: goto label_1ad7c4;
            case 0x1AD7C8u: goto label_1ad7c8;
            case 0x1AD7CCu: goto label_1ad7cc;
            case 0x1AD7D0u: goto label_1ad7d0;
            case 0x1AD7D4u: goto label_1ad7d4;
            case 0x1AD7D8u: goto label_1ad7d8;
            case 0x1AD7DCu: goto label_1ad7dc;
            case 0x1AD7E0u: goto label_1ad7e0;
            case 0x1AD7E4u: goto label_1ad7e4;
            case 0x1AD7E8u: goto label_1ad7e8;
            case 0x1AD7ECu: goto label_1ad7ec;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD7F4u: goto label_1ad7f4;
            case 0x1AD7F8u: goto label_1ad7f8;
            case 0x1AD7FCu: goto label_1ad7fc;
            case 0x1AD800u: goto label_1ad800;
            case 0x1AD804u: goto label_1ad804;
            case 0x1AD808u: goto label_1ad808;
            case 0x1AD80Cu: goto label_1ad80c;
            case 0x1AD810u: goto label_1ad810;
            case 0x1AD814u: goto label_1ad814;
            case 0x1AD818u: goto label_1ad818;
            case 0x1AD81Cu: goto label_1ad81c;
            case 0x1AD820u: goto label_1ad820;
            case 0x1AD824u: goto label_1ad824;
            case 0x1AD828u: goto label_1ad828;
            case 0x1AD82Cu: goto label_1ad82c;
            case 0x1AD830u: goto label_1ad830;
            case 0x1AD834u: goto label_1ad834;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD840u: goto label_1ad840;
            case 0x1AD844u: goto label_1ad844;
            case 0x1AD848u: goto label_1ad848;
            case 0x1AD84Cu: goto label_1ad84c;
            case 0x1AD850u: goto label_1ad850;
            case 0x1AD854u: goto label_1ad854;
            case 0x1AD858u: goto label_1ad858;
            case 0x1AD85Cu: goto label_1ad85c;
            case 0x1AD860u: goto label_1ad860;
            case 0x1AD864u: goto label_1ad864;
            case 0x1AD868u: goto label_1ad868;
            case 0x1AD86Cu: goto label_1ad86c;
            case 0x1AD870u: goto label_1ad870;
            case 0x1AD874u: goto label_1ad874;
            case 0x1AD878u: goto label_1ad878;
            case 0x1AD87Cu: goto label_1ad87c;
            case 0x1AD880u: goto label_1ad880;
            case 0x1AD884u: goto label_1ad884;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD88Cu: goto label_1ad88c;
            case 0x1AD890u: goto label_1ad890;
            case 0x1AD894u: goto label_1ad894;
            case 0x1AD898u: goto label_1ad898;
            case 0x1AD89Cu: goto label_1ad89c;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8A4u: goto label_1ad8a4;
            case 0x1AD8A8u: goto label_1ad8a8;
            case 0x1AD8ACu: goto label_1ad8ac;
            case 0x1AD8B0u: goto label_1ad8b0;
            case 0x1AD8B4u: goto label_1ad8b4;
            case 0x1AD8B8u: goto label_1ad8b8;
            case 0x1AD8BCu: goto label_1ad8bc;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            case 0x1AD8C8u: goto label_1ad8c8;
            case 0x1AD8CCu: goto label_1ad8cc;
            case 0x1AD8D0u: goto label_1ad8d0;
            case 0x1AD8D4u: goto label_1ad8d4;
            case 0x1AD8D8u: goto label_1ad8d8;
            case 0x1AD8DCu: goto label_1ad8dc;
            case 0x1AD8E0u: goto label_1ad8e0;
            case 0x1AD8E4u: goto label_1ad8e4;
            case 0x1AD8E8u: goto label_1ad8e8;
            case 0x1AD8ECu: goto label_1ad8ec;
            case 0x1AD8F0u: goto label_1ad8f0;
            case 0x1AD8F4u: goto label_1ad8f4;
            case 0x1AD8F8u: goto label_1ad8f8;
            case 0x1AD8FCu: goto label_1ad8fc;
            case 0x1AD900u: goto label_1ad900;
            case 0x1AD904u: goto label_1ad904;
            case 0x1AD908u: goto label_1ad908;
            case 0x1AD90Cu: goto label_1ad90c;
            case 0x1AD910u: goto label_1ad910;
            case 0x1AD914u: goto label_1ad914;
            case 0x1AD918u: goto label_1ad918;
            case 0x1AD91Cu: goto label_1ad91c;
            case 0x1AD920u: goto label_1ad920;
            case 0x1AD924u: goto label_1ad924;
            case 0x1AD928u: goto label_1ad928;
            case 0x1AD92Cu: goto label_1ad92c;
            case 0x1AD930u: goto label_1ad930;
            case 0x1AD934u: goto label_1ad934;
            case 0x1AD938u: goto label_1ad938;
            case 0x1AD93Cu: goto label_1ad93c;
            case 0x1AD940u: goto label_1ad940;
            case 0x1AD944u: goto label_1ad944;
            case 0x1AD948u: goto label_1ad948;
            case 0x1AD94Cu: goto label_1ad94c;
            case 0x1AD950u: goto label_1ad950;
            case 0x1AD954u: goto label_1ad954;
            case 0x1AD958u: goto label_1ad958;
            case 0x1AD95Cu: goto label_1ad95c;
            case 0x1AD960u: goto label_1ad960;
            case 0x1AD964u: goto label_1ad964;
            case 0x1AD968u: goto label_1ad968;
            case 0x1AD96Cu: goto label_1ad96c;
            case 0x1AD970u: goto label_1ad970;
            case 0x1AD974u: goto label_1ad974;
            case 0x1AD978u: goto label_1ad978;
            case 0x1AD97Cu: goto label_1ad97c;
            case 0x1AD980u: goto label_1ad980;
            case 0x1AD984u: goto label_1ad984;
            case 0x1AD988u: goto label_1ad988;
            case 0x1AD98Cu: goto label_1ad98c;
            case 0x1AD990u: goto label_1ad990;
            case 0x1AD994u: goto label_1ad994;
            case 0x1AD998u: goto label_1ad998;
            case 0x1AD99Cu: goto label_1ad99c;
            case 0x1AD9A0u: goto label_1ad9a0;
            case 0x1AD9A4u: goto label_1ad9a4;
            case 0x1AD9A8u: goto label_1ad9a8;
            case 0x1AD9ACu: goto label_1ad9ac;
            case 0x1AD9B0u: goto label_1ad9b0;
            case 0x1AD9B4u: goto label_1ad9b4;
            case 0x1AD9B8u: goto label_1ad9b8;
            case 0x1AD9BCu: goto label_1ad9bc;
            case 0x1AD9C0u: goto label_1ad9c0;
            case 0x1AD9C4u: goto label_1ad9c4;
            case 0x1AD9C8u: goto label_1ad9c8;
            case 0x1AD9CCu: goto label_1ad9cc;
            case 0x1AD9D0u: goto label_1ad9d0;
            case 0x1AD9D4u: goto label_1ad9d4;
            case 0x1AD9D8u: goto label_1ad9d8;
            case 0x1AD9DCu: goto label_1ad9dc;
            case 0x1AD9E0u: goto label_1ad9e0;
            case 0x1AD9E4u: goto label_1ad9e4;
            case 0x1AD9E8u: goto label_1ad9e8;
            case 0x1AD9ECu: goto label_1ad9ec;
            case 0x1AD9F0u: goto label_1ad9f0;
            case 0x1AD9F4u: goto label_1ad9f4;
            case 0x1AD9F8u: goto label_1ad9f8;
            case 0x1AD9FCu: goto label_1ad9fc;
            case 0x1ADA00u: goto label_1ada00;
            case 0x1ADA04u: goto label_1ada04;
            case 0x1ADA08u: goto label_1ada08;
            case 0x1ADA0Cu: goto label_1ada0c;
            case 0x1ADA10u: goto label_1ada10;
            case 0x1ADA14u: goto label_1ada14;
            case 0x1ADA18u: goto label_1ada18;
            case 0x1ADA1Cu: goto label_1ada1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD824u;
label_1ad824:
    // 0x1ad824: 0xc06b5e4
label_1ad828:
    if (ctx->pc == 0x1AD828u) {
        ctx->pc = 0x1AD828u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD82Cu;
        goto label_1ad82c;
    }
    ctx->pc = 0x1AD824u;
    SET_GPR_U32(ctx, 31, 0x1AD82Cu);
    ctx->pc = 0x1AD828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AD790u;
    goto label_1ad790;
    ctx->pc = 0x1AD82Cu;
label_1ad82c:
    // 0x1ad82c: 0xae220004
    ctx->pc = 0x1ad82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1ad830:
    // 0x1ad830: 0x8e230004
    ctx->pc = 0x1ad830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ad834:
    // 0x1ad834: 0x4600073
label_1ad838:
    if (ctx->pc == 0x1AD838u) {
        ctx->pc = 0x1AD83Cu;
        goto label_1ad83c;
    }
    ctx->pc = 0x1AD834u;
    {
        const bool branch_taken_0x1ad834 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ad834) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD83Cu;
label_1ad83c:
    // 0x1ad83c: 0x711021
    ctx->pc = 0x1ad83cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1ad840:
    // 0x1ad840: 0x9050000c
    ctx->pc = 0x1ad840u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1ad844:
    // 0x1ad844: 0x2a01000f
    ctx->pc = 0x1ad844u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 15));
label_1ad848:
    // 0x1ad848: 0x1020000c
label_1ad84c:
    if (ctx->pc == 0x1AD84Cu) {
        ctx->pc = 0x1AD84Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD850u;
        goto label_1ad850;
    }
    ctx->pc = 0x1AD848u;
    {
        const bool branch_taken_0x1ad848 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD84Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ad848) {
            ctx->pc = 0x1AD87Cu;
            goto label_1ad87c;
        }
    }
    ctx->pc = 0x1AD850u;
label_1ad850:
    // 0x1ad850: 0x101080
    ctx->pc = 0x1ad850u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_1ad854:
    // 0x1ad854: 0x511021
    ctx->pc = 0x1ad854u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ad858:
    // 0x1ad858: 0x8c4500a4
    ctx->pc = 0x1ad858u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1ad85c:
    // 0x1ad85c: 0x10a00006
label_1ad860:
    if (ctx->pc == 0x1AD860u) {
        ctx->pc = 0x1AD860u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1AD864u;
        goto label_1ad864;
    }
    ctx->pc = 0x1AD85Cu;
    {
        const bool branch_taken_0x1ad85c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD860u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1ad85c) {
            ctx->pc = 0x1AD878u;
            goto label_1ad878;
        }
    }
    ctx->pc = 0x1AD864u;
label_1ad864:
    // 0x1ad864: 0x2221021
    ctx->pc = 0x1ad864u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad868:
    // 0x1ad868: 0xc042b9e
label_1ad86c:
    if (ctx->pc == 0x1AD86Cu) {
        ctx->pc = 0x1AD86Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x1AD870u;
        goto label_1ad870;
    }
    ctx->pc = 0x1AD868u;
    SET_GPR_U32(ctx, 31, 0x1AD870u);
    ctx->pc = 0x1AD86Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 36));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD870u; }
    }
    if (ctx->pc != 0x1AD870u) { return; }
    ctx->pc = 0x1AD870u;
label_1ad870:
    // 0x1ad870: 0x10400064
label_1ad874:
    if (ctx->pc == 0x1AD874u) {
        ctx->pc = 0x1AD878u;
        goto label_1ad878;
    }
    ctx->pc = 0x1AD870u;
    {
        const bool branch_taken_0x1ad870 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad870) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD878u;
label_1ad878:
    // 0x1ad878: 0x200202d
    ctx->pc = 0x1ad878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad87c:
    // 0x1ad87c: 0xc06b3a8
label_1ad880:
    if (ctx->pc == 0x1AD880u) {
        ctx->pc = 0x1AD884u;
        goto label_1ad884;
    }
    ctx->pc = 0x1AD87Cu;
    SET_GPR_U32(ctx, 31, 0x1AD884u);
    ctx->pc = 0x1ACEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACEA0_0x1acea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD884u; }
    }
    if (ctx->pc != 0x1AD884u) { return; }
    ctx->pc = 0x1AD884u;
label_1ad884:
    // 0x1ad884: 0x8e220004
    ctx->pc = 0x1ad884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ad888:
    // 0x1ad888: 0x3c050025
    ctx->pc = 0x1ad888u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1ad88c:
    // 0x1ad88c: 0x27a40030
    ctx->pc = 0x1ad88cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
label_1ad890:
    // 0x1ad890: 0x24a5fdf8
    ctx->pc = 0x1ad890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966776));
label_1ad894:
    // 0x1ad894: 0x21100
    ctx->pc = 0x1ad894u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1ad898:
    // 0x1ad898: 0x2221021
    ctx->pc = 0x1ad898u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1ad89c:
    // 0x1ad89c: 0xc042a0c
label_1ad8a0:
    if (ctx->pc == 0x1AD8A0u) {
        ctx->pc = 0x1AD8A0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x1AD8A4u;
        goto label_1ad8a4;
    }
    ctx->pc = 0x1AD89Cu;
    SET_GPR_U32(ctx, 31, 0x1AD8A4u);
    ctx->pc = 0x1AD8A0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 36));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8A4u; }
    }
    if (ctx->pc != 0x1AD8A4u) { return; }
    ctx->pc = 0x1AD8A4u;
label_1ad8a4:
    // 0x1ad8a4: 0xc06acc4
label_1ad8a8:
    if (ctx->pc == 0x1AD8A8u) {
        ctx->pc = 0x1AD8A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AD8ACu;
        goto label_1ad8ac;
    }
    ctx->pc = 0x1AD8A4u;
    SET_GPR_U32(ctx, 31, 0x1AD8ACu);
    ctx->pc = 0x1AD8A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1AB310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB310_0x1ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8ACu; }
    }
    if (ctx->pc != 0x1AD8ACu) { return; }
    ctx->pc = 0x1AD8ACu;
label_1ad8ac:
    // 0x1ad8ac: 0x40282d
    ctx->pc = 0x1ad8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8b0:
    // 0x1ad8b0: 0x4a00054
label_1ad8b4:
    if (ctx->pc == 0x1AD8B4u) {
        ctx->pc = 0x1AD8B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1AD8B8u;
        goto label_1ad8b8;
    }
    ctx->pc = 0x1AD8B0u;
    {
        const bool branch_taken_0x1ad8b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1AD8B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1ad8b0) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD8B8u;
label_1ad8b8:
    // 0x1ad8b8: 0xc04a490
label_1ad8bc:
    if (ctx->pc == 0x1AD8BCu) {
        ctx->pc = 0x1AD8C0u;
        goto label_1ad8c0;
    }
    ctx->pc = 0x1AD8B8u;
    SET_GPR_U32(ctx, 31, 0x1AD8C0u);
    ctx->pc = 0x129240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129240_0x129240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8C0u; }
    }
    if (ctx->pc != 0x1AD8C0u) { return; }
    ctx->pc = 0x1AD8C0u;
label_1ad8c0:
    // 0x1ad8c0: 0xae220104
    ctx->pc = 0x1ad8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
label_1ad8c4:
    // 0x1ad8c4: 0x8e240104
    ctx->pc = 0x1ad8c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1ad8c8:
    // 0x1ad8c8: 0x1080004e
label_1ad8cc:
    if (ctx->pc == 0x1AD8CCu) {
        ctx->pc = 0x1AD8D0u;
        goto label_1ad8d0;
    }
    ctx->pc = 0x1AD8C8u;
    {
        const bool branch_taken_0x1ad8c8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad8c8) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD8D0u;
label_1ad8d0:
    // 0x1ad8d0: 0xc04a702
label_1ad8d4:
    if (ctx->pc == 0x1AD8D4u) {
        ctx->pc = 0x1AD8D8u;
        goto label_1ad8d8;
    }
    ctx->pc = 0x1AD8D0u;
    SET_GPR_U32(ctx, 31, 0x1AD8D8u);
    ctx->pc = 0x129C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C08_0x129c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8D8u; }
    }
    if (ctx->pc != 0x1AD8D8u) { return; }
    ctx->pc = 0x1AD8D8u;
label_1ad8d8:
    // 0x1ad8d8: 0x8e240104
    ctx->pc = 0x1ad8d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1ad8dc:
    // 0x1ad8dc: 0x8e260008
    ctx->pc = 0x1ad8dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ad8e0:
    // 0x1ad8e0: 0xc04a5e8
label_1ad8e4:
    if (ctx->pc == 0x1AD8E4u) {
        ctx->pc = 0x1AD8E4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8E8u;
        goto label_1ad8e8;
    }
    ctx->pc = 0x1AD8E0u;
    SET_GPR_U32(ctx, 31, 0x1AD8E8u);
    ctx->pc = 0x1AD8E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1297A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297A0_0x1297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD8E8u; }
    }
    if (ctx->pc != 0x1AD8E8u) { return; }
    ctx->pc = 0x1AD8E8u;
label_1ad8e8:
    // 0x1ad8e8: 0x92250000
    ctx->pc = 0x1ad8e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad8ec:
    // 0x1ad8ec: 0x2111821
    ctx->pc = 0x1ad8ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1ad8f0:
    // 0x1ad8f0: 0x24040001
    ctx->pc = 0x1ad8f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1ad8f4:
    // 0x1ad8f4: 0x24a50001
    ctx->pc = 0x1ad8f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1ad8f8:
    // 0x1ad8f8: 0xa2250000
    ctx->pc = 0x1ad8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_1ad8fc:
    // 0x1ad8fc: 0xa06400e4
    ctx->pc = 0x1ad8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 4));
label_1ad900:
    // 0x1ad900: 0x10000040
label_1ad904:
    if (ctx->pc == 0x1AD904u) {
        ctx->pc = 0x1AD904u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 244), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1AD908u;
        goto label_1ad908;
    }
    ctx->pc = 0x1AD900u;
    {
        const bool branch_taken_0x1ad900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD904u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 244), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1ad900) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD908u;
label_1ad908:
    // 0x1ad908: 0xc04a752
label_1ad90c:
    if (ctx->pc == 0x1AD90Cu) {
        ctx->pc = 0x1AD90Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->pc = 0x1AD910u;
        goto label_1ad910;
    }
    ctx->pc = 0x1AD908u;
    SET_GPR_U32(ctx, 31, 0x1AD910u);
    ctx->pc = 0x1AD90Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->pc = 0x129D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D48_0x129d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD910u; }
    }
    if (ctx->pc != 0x1AD910u) { return; }
    ctx->pc = 0x1AD910u;
label_1ad910:
    // 0x1ad910: 0x24030003
    ctx->pc = 0x1ad910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1ad914:
    // 0x1ad914: 0x1443003b
label_1ad918:
    if (ctx->pc == 0x1AD918u) {
        ctx->pc = 0x1AD91Cu;
        goto label_1ad91c;
    }
    ctx->pc = 0x1AD914u;
    {
        const bool branch_taken_0x1ad914 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ad914) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD91Cu;
label_1ad91c:
    // 0x1ad91c: 0xc04a4d4
label_1ad920:
    if (ctx->pc == 0x1AD920u) {
        ctx->pc = 0x1AD920u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->pc = 0x1AD924u;
        goto label_1ad924;
    }
    ctx->pc = 0x1AD91Cu;
    SET_GPR_U32(ctx, 31, 0x1AD924u);
    ctx->pc = 0x1AD920u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD924u; }
    }
    if (ctx->pc != 0x1AD924u) { return; }
    ctx->pc = 0x1AD924u;
label_1ad924:
    // 0x1ad924: 0xae200104
    ctx->pc = 0x1ad924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_1ad928:
    // 0x1ad928: 0x8e220004
    ctx->pc = 0x1ad928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ad92c:
    // 0x1ad92c: 0x8e240008
    ctx->pc = 0x1ad92cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ad930:
    // 0x1ad930: 0x511021
    ctx->pc = 0x1ad930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ad934:
    // 0x1ad934: 0x9050000c
    ctx->pc = 0x1ad934u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_1ad938:
    // 0x1ad938: 0xc06b3ec
label_1ad93c:
    if (ctx->pc == 0x1AD93Cu) {
        ctx->pc = 0x1AD93Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AD940u;
        goto label_1ad940;
    }
    ctx->pc = 0x1AD938u;
    SET_GPR_U32(ctx, 31, 0x1AD940u);
    ctx->pc = 0x1AD93Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ACFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACFB0_0x1acfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD940u; }
    }
    if (ctx->pc != 0x1AD940u) { return; }
    ctx->pc = 0x1AD940u;
label_1ad940:
    // 0x1ad940: 0x8e230004
    ctx->pc = 0x1ad940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ad944:
    // 0x1ad944: 0x31840
    ctx->pc = 0x1ad944u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_1ad948:
    // 0x1ad948: 0x711821
    ctx->pc = 0x1ad948u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1ad94c:
    // 0x1ad94c: 0xa4620014
    ctx->pc = 0x1ad94cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
label_1ad950:
    // 0x1ad950: 0x8e240004
    ctx->pc = 0x1ad950u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ad954:
    // 0x1ad954: 0x41840
    ctx->pc = 0x1ad954u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
label_1ad958:
    // 0x1ad958: 0x711821
    ctx->pc = 0x1ad958u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1ad95c:
    // 0x1ad95c: 0x84630014
    ctx->pc = 0x1ad95cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_1ad960:
    // 0x1ad960: 0x4610006
label_1ad964:
    if (ctx->pc == 0x1AD964u) {
        ctx->pc = 0x1AD964u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 16));
        ctx->pc = 0x1AD968u;
        goto label_1ad968;
    }
    ctx->pc = 0x1AD960u;
    {
        const bool branch_taken_0x1ad960 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AD964u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 16));
        if (branch_taken_0x1ad960) {
            ctx->pc = 0x1AD97Cu;
            goto label_1ad97c;
        }
    }
    ctx->pc = 0x1AD968u;
label_1ad968:
    // 0x1ad968: 0x24040001
    ctx->pc = 0x1ad968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1ad96c:
    // 0x1ad96c: 0x2111821
    ctx->pc = 0x1ad96cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1ad970:
    // 0x1ad970: 0xa2240000
    ctx->pc = 0x1ad970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
label_1ad974:
    // 0x1ad974: 0x10000023
label_1ad978:
    if (ctx->pc == 0x1AD978u) {
        ctx->pc = 0x1AD978u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1AD97Cu;
        goto label_1ad97c;
    }
    ctx->pc = 0x1AD974u;
    {
        const bool branch_taken_0x1ad974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD978u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1ad974) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD97Cu;
label_1ad97c:
    // 0x1ad97c: 0x10200006
label_1ad980:
    if (ctx->pc == 0x1AD980u) {
        ctx->pc = 0x1AD980u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x1AD984u;
        goto label_1ad984;
    }
    ctx->pc = 0x1AD97Cu;
    {
        const bool branch_taken_0x1ad97c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD980u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x1ad97c) {
            ctx->pc = 0x1AD998u;
            goto label_1ad998;
        }
    }
    ctx->pc = 0x1AD984u;
label_1ad984:
    // 0x1ad984: 0x101080
    ctx->pc = 0x1ad984u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_1ad988:
    // 0x1ad988: 0x2231821
    ctx->pc = 0x1ad988u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1ad98c:
    // 0x1ad98c: 0x511021
    ctx->pc = 0x1ad98cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ad990:
    // 0x1ad990: 0x24630024
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 36));
label_1ad994:
    // 0x1ad994: 0xac4300a4
    ctx->pc = 0x1ad994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
label_1ad998:
    // 0x1ad998: 0x92220000
    ctx->pc = 0x1ad998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad99c:
    // 0x1ad99c: 0x24420001
    ctx->pc = 0x1ad99cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1ad9a0:
    // 0x1ad9a0: 0xa2220000
    ctx->pc = 0x1ad9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ad9a4:
    // 0x1ad9a4: 0xc069fd4
label_1ad9a8:
    if (ctx->pc == 0x1AD9A8u) {
        ctx->pc = 0x1AD9A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AD9ACu;
        goto label_1ad9ac;
    }
    ctx->pc = 0x1AD9A4u;
    SET_GPR_U32(ctx, 31, 0x1AD9ACu);
    ctx->pc = 0x1AD9A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A7F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F50_0x1a7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9ACu; }
    }
    if (ctx->pc != 0x1AD9ACu) { return; }
    ctx->pc = 0x1AD9ACu;
label_1ad9ac:
    // 0x1ad9ac: 0x1c400015
label_1ad9b0:
    if (ctx->pc == 0x1AD9B0u) {
        ctx->pc = 0x1AD9B4u;
        goto label_1ad9b4;
    }
    ctx->pc = 0x1AD9ACu;
    {
        const bool branch_taken_0x1ad9ac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ad9ac) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD9B4u;
label_1ad9b4:
    // 0x1ad9b4: 0x92220000
    ctx->pc = 0x1ad9b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad9b8:
    // 0x1ad9b8: 0x24420001
    ctx->pc = 0x1ad9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1ad9bc:
    // 0x1ad9bc: 0xa2220000
    ctx->pc = 0x1ad9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1ad9c0:
    // 0x1ad9c0: 0x3c028000
    ctx->pc = 0x1ad9c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_1ad9c4:
    // 0x1ad9c4: 0x24050001
    ctx->pc = 0x1ad9c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1ad9c8:
    // 0x1ad9c8: 0xc06a030
label_1ad9cc:
    if (ctx->pc == 0x1AD9CCu) {
        ctx->pc = 0x1AD9CCu;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x1AD9D0u;
        goto label_1ad9d0;
    }
    ctx->pc = 0x1AD9C8u;
    SET_GPR_U32(ctx, 31, 0x1AD9D0u);
    ctx->pc = 0x1AD9CCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x1A80C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A80C0_0x1a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD9D0u; }
    }
    if (ctx->pc != 0x1AD9D0u) { return; }
    ctx->pc = 0x1AD9D0u;
label_1ad9d0:
    // 0x1ad9d0: 0x1c40000c
label_1ad9d4:
    if (ctx->pc == 0x1AD9D4u) {
        ctx->pc = 0x1AD9D8u;
        goto label_1ad9d8;
    }
    ctx->pc = 0x1AD9D0u;
    {
        const bool branch_taken_0x1ad9d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ad9d0) {
            ctx->pc = 0x1ADA04u;
            goto label_1ada04;
        }
    }
    ctx->pc = 0x1AD9D8u;
label_1ad9d8:
    // 0x1ad9d8: 0x92230000
    ctx->pc = 0x1ad9d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad9dc:
    // 0x1ad9dc: 0x24630001
    ctx->pc = 0x1ad9dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1ad9e0:
    // 0x1ad9e0: 0xa2230000
    ctx->pc = 0x1ad9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1ad9e4:
    // 0x1ad9e4: 0x8e240004
    ctx->pc = 0x1ad9e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ad9e8:
    // 0x1ad9e8: 0x24050002
    ctx->pc = 0x1ad9e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_1ad9ec:
    // 0x1ad9ec: 0x24030001
    ctx->pc = 0x1ad9ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ad9f0:
    // 0x1ad9f0: 0x912021
    ctx->pc = 0x1ad9f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1ad9f4:
    // 0x1ad9f4: 0x9084000c
    ctx->pc = 0x1ad9f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_1ad9f8:
    // 0x1ad9f8: 0x912021
    ctx->pc = 0x1ad9f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1ad9fc:
    // 0x1ad9fc: 0xa08500e4
    ctx->pc = 0x1ad9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 228), (uint8_t)GPR_U32(ctx, 5));
label_1ada00:
    // 0x1ada00: 0xa2230000
    ctx->pc = 0x1ada00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_1ada04:
    // 0x1ada04: 0xdfbf0020
    ctx->pc = 0x1ada04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ada08:
    // 0x1ada08: 0x7bb10010
    ctx->pc = 0x1ada08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ada0c:
    // 0x1ada0c: 0x7bb00000
    ctx->pc = 0x1ada0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ada10:
    // 0x1ada10: 0x3e00008
label_1ada14:
    if (ctx->pc == 0x1ADA14u) {
        ctx->pc = 0x1ADA14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1ADA18u;
        goto label_1ada18;
    }
    ctx->pc = 0x1ADA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD790u: goto label_1ad790;
            case 0x1AD794u: goto label_1ad794;
            case 0x1AD798u: goto label_1ad798;
            case 0x1AD79Cu: goto label_1ad79c;
            case 0x1AD7A0u: goto label_1ad7a0;
            case 0x1AD7A4u: goto label_1ad7a4;
            case 0x1AD7A8u: goto label_1ad7a8;
            case 0x1AD7ACu: goto label_1ad7ac;
            case 0x1AD7B0u: goto label_1ad7b0;
            case 0x1AD7B4u: goto label_1ad7b4;
            case 0x1AD7B8u: goto label_1ad7b8;
            case 0x1AD7BCu: goto label_1ad7bc;
            case 0x1AD7C0u: goto label_1ad7c0;
            case 0x1AD7C4u: goto label_1ad7c4;
            case 0x1AD7C8u: goto label_1ad7c8;
            case 0x1AD7CCu: goto label_1ad7cc;
            case 0x1AD7D0u: goto label_1ad7d0;
            case 0x1AD7D4u: goto label_1ad7d4;
            case 0x1AD7D8u: goto label_1ad7d8;
            case 0x1AD7DCu: goto label_1ad7dc;
            case 0x1AD7E0u: goto label_1ad7e0;
            case 0x1AD7E4u: goto label_1ad7e4;
            case 0x1AD7E8u: goto label_1ad7e8;
            case 0x1AD7ECu: goto label_1ad7ec;
            case 0x1AD7F0u: goto label_1ad7f0;
            case 0x1AD7F4u: goto label_1ad7f4;
            case 0x1AD7F8u: goto label_1ad7f8;
            case 0x1AD7FCu: goto label_1ad7fc;
            case 0x1AD800u: goto label_1ad800;
            case 0x1AD804u: goto label_1ad804;
            case 0x1AD808u: goto label_1ad808;
            case 0x1AD80Cu: goto label_1ad80c;
            case 0x1AD810u: goto label_1ad810;
            case 0x1AD814u: goto label_1ad814;
            case 0x1AD818u: goto label_1ad818;
            case 0x1AD81Cu: goto label_1ad81c;
            case 0x1AD820u: goto label_1ad820;
            case 0x1AD824u: goto label_1ad824;
            case 0x1AD828u: goto label_1ad828;
            case 0x1AD82Cu: goto label_1ad82c;
            case 0x1AD830u: goto label_1ad830;
            case 0x1AD834u: goto label_1ad834;
            case 0x1AD838u: goto label_1ad838;
            case 0x1AD83Cu: goto label_1ad83c;
            case 0x1AD840u: goto label_1ad840;
            case 0x1AD844u: goto label_1ad844;
            case 0x1AD848u: goto label_1ad848;
            case 0x1AD84Cu: goto label_1ad84c;
            case 0x1AD850u: goto label_1ad850;
            case 0x1AD854u: goto label_1ad854;
            case 0x1AD858u: goto label_1ad858;
            case 0x1AD85Cu: goto label_1ad85c;
            case 0x1AD860u: goto label_1ad860;
            case 0x1AD864u: goto label_1ad864;
            case 0x1AD868u: goto label_1ad868;
            case 0x1AD86Cu: goto label_1ad86c;
            case 0x1AD870u: goto label_1ad870;
            case 0x1AD874u: goto label_1ad874;
            case 0x1AD878u: goto label_1ad878;
            case 0x1AD87Cu: goto label_1ad87c;
            case 0x1AD880u: goto label_1ad880;
            case 0x1AD884u: goto label_1ad884;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD88Cu: goto label_1ad88c;
            case 0x1AD890u: goto label_1ad890;
            case 0x1AD894u: goto label_1ad894;
            case 0x1AD898u: goto label_1ad898;
            case 0x1AD89Cu: goto label_1ad89c;
            case 0x1AD8A0u: goto label_1ad8a0;
            case 0x1AD8A4u: goto label_1ad8a4;
            case 0x1AD8A8u: goto label_1ad8a8;
            case 0x1AD8ACu: goto label_1ad8ac;
            case 0x1AD8B0u: goto label_1ad8b0;
            case 0x1AD8B4u: goto label_1ad8b4;
            case 0x1AD8B8u: goto label_1ad8b8;
            case 0x1AD8BCu: goto label_1ad8bc;
            case 0x1AD8C0u: goto label_1ad8c0;
            case 0x1AD8C4u: goto label_1ad8c4;
            case 0x1AD8C8u: goto label_1ad8c8;
            case 0x1AD8CCu: goto label_1ad8cc;
            case 0x1AD8D0u: goto label_1ad8d0;
            case 0x1AD8D4u: goto label_1ad8d4;
            case 0x1AD8D8u: goto label_1ad8d8;
            case 0x1AD8DCu: goto label_1ad8dc;
            case 0x1AD8E0u: goto label_1ad8e0;
            case 0x1AD8E4u: goto label_1ad8e4;
            case 0x1AD8E8u: goto label_1ad8e8;
            case 0x1AD8ECu: goto label_1ad8ec;
            case 0x1AD8F0u: goto label_1ad8f0;
            case 0x1AD8F4u: goto label_1ad8f4;
            case 0x1AD8F8u: goto label_1ad8f8;
            case 0x1AD8FCu: goto label_1ad8fc;
            case 0x1AD900u: goto label_1ad900;
            case 0x1AD904u: goto label_1ad904;
            case 0x1AD908u: goto label_1ad908;
            case 0x1AD90Cu: goto label_1ad90c;
            case 0x1AD910u: goto label_1ad910;
            case 0x1AD914u: goto label_1ad914;
            case 0x1AD918u: goto label_1ad918;
            case 0x1AD91Cu: goto label_1ad91c;
            case 0x1AD920u: goto label_1ad920;
            case 0x1AD924u: goto label_1ad924;
            case 0x1AD928u: goto label_1ad928;
            case 0x1AD92Cu: goto label_1ad92c;
            case 0x1AD930u: goto label_1ad930;
            case 0x1AD934u: goto label_1ad934;
            case 0x1AD938u: goto label_1ad938;
            case 0x1AD93Cu: goto label_1ad93c;
            case 0x1AD940u: goto label_1ad940;
            case 0x1AD944u: goto label_1ad944;
            case 0x1AD948u: goto label_1ad948;
            case 0x1AD94Cu: goto label_1ad94c;
            case 0x1AD950u: goto label_1ad950;
            case 0x1AD954u: goto label_1ad954;
            case 0x1AD958u: goto label_1ad958;
            case 0x1AD95Cu: goto label_1ad95c;
            case 0x1AD960u: goto label_1ad960;
            case 0x1AD964u: goto label_1ad964;
            case 0x1AD968u: goto label_1ad968;
            case 0x1AD96Cu: goto label_1ad96c;
            case 0x1AD970u: goto label_1ad970;
            case 0x1AD974u: goto label_1ad974;
            case 0x1AD978u: goto label_1ad978;
            case 0x1AD97Cu: goto label_1ad97c;
            case 0x1AD980u: goto label_1ad980;
            case 0x1AD984u: goto label_1ad984;
            case 0x1AD988u: goto label_1ad988;
            case 0x1AD98Cu: goto label_1ad98c;
            case 0x1AD990u: goto label_1ad990;
            case 0x1AD994u: goto label_1ad994;
            case 0x1AD998u: goto label_1ad998;
            case 0x1AD99Cu: goto label_1ad99c;
            case 0x1AD9A0u: goto label_1ad9a0;
            case 0x1AD9A4u: goto label_1ad9a4;
            case 0x1AD9A8u: goto label_1ad9a8;
            case 0x1AD9ACu: goto label_1ad9ac;
            case 0x1AD9B0u: goto label_1ad9b0;
            case 0x1AD9B4u: goto label_1ad9b4;
            case 0x1AD9B8u: goto label_1ad9b8;
            case 0x1AD9BCu: goto label_1ad9bc;
            case 0x1AD9C0u: goto label_1ad9c0;
            case 0x1AD9C4u: goto label_1ad9c4;
            case 0x1AD9C8u: goto label_1ad9c8;
            case 0x1AD9CCu: goto label_1ad9cc;
            case 0x1AD9D0u: goto label_1ad9d0;
            case 0x1AD9D4u: goto label_1ad9d4;
            case 0x1AD9D8u: goto label_1ad9d8;
            case 0x1AD9DCu: goto label_1ad9dc;
            case 0x1AD9E0u: goto label_1ad9e0;
            case 0x1AD9E4u: goto label_1ad9e4;
            case 0x1AD9E8u: goto label_1ad9e8;
            case 0x1AD9ECu: goto label_1ad9ec;
            case 0x1AD9F0u: goto label_1ad9f0;
            case 0x1AD9F4u: goto label_1ad9f4;
            case 0x1AD9F8u: goto label_1ad9f8;
            case 0x1AD9FCu: goto label_1ad9fc;
            case 0x1ADA00u: goto label_1ada00;
            case 0x1ADA04u: goto label_1ada04;
            case 0x1ADA08u: goto label_1ada08;
            case 0x1ADA0Cu: goto label_1ada0c;
            case 0x1ADA10u: goto label_1ada10;
            case 0x1ADA14u: goto label_1ada14;
            case 0x1ADA18u: goto label_1ada18;
            case 0x1ADA1Cu: goto label_1ada1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADA18u;
label_1ada18:
    // 0x1ada18: 0x0
    ctx->pc = 0x1ada18u;
    // NOP
label_1ada1c:
    // 0x1ada1c: 0x0
    ctx->pc = 0x1ada1cu;
    // NOP
}
