#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001228F0
// Address: 0x1228f0 - 0x122ae8
void sub_001228F0_0x1228f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1228f0u;

label_1228f0:
    // 0x1228f0: 0x27bdfff0
    ctx->pc = 0x1228f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1228f4:
    // 0x1228f4: 0xffb00000
    ctx->pc = 0x1228f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1228f8:
    // 0x1228f8: 0x80802d
    ctx->pc = 0x1228f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1228fc:
    // 0x1228fc: 0x1200000c
label_122900:
    if (ctx->pc == 0x122900u) {
        ctx->pc = 0x122900u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x122904u;
        goto label_122904;
    }
    ctx->pc = 0x1228FCu;
    {
        const bool branch_taken_0x1228fc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x122900u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x1228fc) {
            ctx->pc = 0x122930u;
            goto label_122930;
        }
    }
    ctx->pc = 0x122904u;
label_122904:
    // 0x122904: 0xc049938
label_122908:
    if (ctx->pc == 0x122908u) {
        ctx->pc = 0x12290Cu;
        goto label_12290c;
    }
    ctx->pc = 0x122904u;
    SET_GPR_U32(ctx, 31, 0x12290Cu);
    ctx->pc = 0x1264E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001264E0_0x1264e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12290Cu; }
    }
    if (ctx->pc != 0x12290Cu) { return; }
    ctx->pc = 0x12290Cu;
label_12290c:
    // 0x12290c: 0x200202d
    ctx->pc = 0x12290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122910:
    // 0x122910: 0x282d
    ctx->pc = 0x122910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122914:
    // 0x122914: 0xc041f1a
label_122918:
    if (ctx->pc == 0x122918u) {
        ctx->pc = 0x122918u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x12291Cu;
        goto label_12291c;
    }
    ctx->pc = 0x122914u;
    SET_GPR_U32(ctx, 31, 0x12291Cu);
    ctx->pc = 0x122918u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12291Cu; }
    }
    if (ctx->pc != 0x12291Cu) { return; }
    ctx->pc = 0x12291Cu;
label_12291c:
    // 0x12291c: 0xdfb00000
    ctx->pc = 0x12291cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122920:
    // 0x122920: 0xdfbf0008
    ctx->pc = 0x122920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_122924:
    // 0x122924: 0x804993e
label_122928:
    if (ctx->pc == 0x122928u) {
        ctx->pc = 0x122928u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12292Cu;
        goto label_12292c;
    }
    ctx->pc = 0x122924u;
    ctx->pc = 0x122928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1264F8u;
    sub_001264F8_0x1264f8(rdram, ctx, runtime); return;
    ctx->pc = 0x12292Cu;
label_12292c:
    // 0x12292c: 0x0
    ctx->pc = 0x12292cu;
    // NOP
label_122930:
    // 0x122930: 0xdfb00000
    ctx->pc = 0x122930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122934:
    // 0x122934: 0xdfbf0008
    ctx->pc = 0x122934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_122938:
    // 0x122938: 0x3e00008
label_12293c:
    if (ctx->pc == 0x12293Cu) {
        ctx->pc = 0x12293Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x122940u;
        goto label_122940;
    }
    ctx->pc = 0x122938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12293Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122940u;
label_122940:
    // 0x122940: 0x3e00008
label_122944:
    if (ctx->pc == 0x122944u) {
        ctx->pc = 0x122944u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = 0x122948u;
        goto label_122948;
    }
    ctx->pc = 0x122940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122944u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122948u;
label_122948:
    // 0x122948: 0x27bdffc0
    ctx->pc = 0x122948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_12294c:
    // 0x12294c: 0xffb10018
    ctx->pc = 0x12294cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_122950:
    // 0x122950: 0x80882d
    ctx->pc = 0x122950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122954:
    // 0x122954: 0xffb20020
    ctx->pc = 0x122954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_122958:
    // 0x122958: 0x902d
    ctx->pc = 0x122958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12295c:
    // 0x12295c: 0xffb00010
    ctx->pc = 0x12295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_122960:
    // 0x122960: 0xffb30028
    ctx->pc = 0x122960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_122964:
    // 0x122964: 0xffbf0030
    ctx->pc = 0x122964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_122968:
    // 0x122968: 0x82220002
    ctx->pc = 0x122968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_12296c:
    // 0x12296c: 0x18400009
label_122970:
    if (ctx->pc == 0x122970u) {
        ctx->pc = 0x122970u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x122974u;
        goto label_122974;
    }
    ctx->pc = 0x12296Cu;
    {
        const bool branch_taken_0x12296c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x122970u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        if (branch_taken_0x12296c) {
            ctx->pc = 0x122994u;
            goto label_122994;
        }
    }
    ctx->pc = 0x122974u;
label_122974:
    // 0x122974: 0x26230014
    ctx->pc = 0x122974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 20));
label_122978:
    // 0x122978: 0xac600000
    ctx->pc = 0x122978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_12297c:
    // 0x12297c: 0x24630004
    ctx->pc = 0x12297cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_122980:
    // 0x122980: 0x26520001
    ctx->pc = 0x122980u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_122984:
    // 0x122984: 0x82220002
    ctx->pc = 0x122984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_122988:
    // 0x122988: 0x242102a
    ctx->pc = 0x122988u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_12298c:
    // 0x12298c: 0x1440fffa
label_122990:
    if (ctx->pc == 0x122990u) {
        ctx->pc = 0x122990u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x122994u;
        goto label_122994;
    }
    ctx->pc = 0x12298Cu;
    {
        const bool branch_taken_0x12298c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122990u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        if (branch_taken_0x12298c) {
            ctx->pc = 0x122978u;
            goto label_122978;
        }
    }
    ctx->pc = 0x122994u;
label_122994:
    // 0x122994: 0x41600
    ctx->pc = 0x122994u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_122998:
    // 0x122998: 0xae20002c
    ctx->pc = 0x122998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_12299c:
    // 0x12299c: 0x18400024
label_1229a0:
    if (ctx->pc == 0x1229A0u) {
        ctx->pc = 0x1229A0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1229A4u;
        goto label_1229a4;
    }
    ctx->pc = 0x12299Cu;
    {
        const bool branch_taken_0x12299c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1229A0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12299c) {
            ctx->pc = 0x122A30u;
            goto label_122a30;
        }
    }
    ctx->pc = 0x1229A4u;
label_1229a4:
    // 0x1229a4: 0x26330004
    ctx->pc = 0x1229a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 4));
label_1229a8:
    // 0x1229a8: 0x8e700000
    ctx->pc = 0x1229a8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1229ac:
    // 0x1229ac: 0x26730004
    ctx->pc = 0x1229acu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_1229b0:
    // 0x1229b0: 0x26520001
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1229b4:
    // 0x1229b4: 0x8e030000
    ctx->pc = 0x1229b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1229b8:
    // 0x1229b8: 0x8c620014
    ctx->pc = 0x1229b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1229bc:
    // 0x1229bc: 0x40f809
label_1229c0:
    if (ctx->pc == 0x1229C0u) {
        ctx->pc = 0x1229C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1229C4u;
        goto label_1229c4;
    }
    ctx->pc = 0x1229BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1229C4u);
        ctx->pc = 0x1229C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1229C4u; }
            if (ctx->pc != 0x1229C4u) { return; }
        }
    }
    ctx->pc = 0x1229C4u;
label_1229c4:
    // 0x1229c4: 0x8e030000
    ctx->pc = 0x1229c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1229c8:
    // 0x1229c8: 0x200202d
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1229cc:
    // 0x1229cc: 0x8c620024
    ctx->pc = 0x1229ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1229d0:
    // 0x1229d0: 0x40f809
label_1229d4:
    if (ctx->pc == 0x1229D4u) {
        ctx->pc = 0x1229D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1229D8u;
        goto label_1229d8;
    }
    ctx->pc = 0x1229D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1229D8u);
        ctx->pc = 0x1229D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1229D8u; }
            if (ctx->pc != 0x1229D8u) { return; }
        }
    }
    ctx->pc = 0x1229D8u;
label_1229d8:
    // 0x1229d8: 0x8e030000
    ctx->pc = 0x1229d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1229dc:
    // 0x1229dc: 0x40302d
    ctx->pc = 0x1229dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1229e0:
    // 0x1229e0: 0x3a0382d
    ctx->pc = 0x1229e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1229e4:
    // 0x1229e4: 0x8c620018
    ctx->pc = 0x1229e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1229e8:
    // 0x1229e8: 0x200202d
    ctx->pc = 0x1229e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1229ec:
    // 0x1229ec: 0x40f809
label_1229f0:
    if (ctx->pc == 0x1229F0u) {
        ctx->pc = 0x1229F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1229F4u;
        goto label_1229f4;
    }
    ctx->pc = 0x1229ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1229F4u);
        ctx->pc = 0x1229F0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1229F4u; }
            if (ctx->pc != 0x1229F4u) { return; }
        }
    }
    ctx->pc = 0x1229F4u;
label_1229f4:
    // 0x1229f4: 0x282d
    ctx->pc = 0x1229f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1229f8:
    // 0x1229f8: 0x8fa40000
    ctx->pc = 0x1229f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1229fc:
    // 0x1229fc: 0xc041f1a
label_122a00:
    if (ctx->pc == 0x122A00u) {
        ctx->pc = 0x122A00u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x122A04u;
        goto label_122a04;
    }
    ctx->pc = 0x1229FCu;
    SET_GPR_U32(ctx, 31, 0x122A04u);
    ctx->pc = 0x122A00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A04u; }
    }
    if (ctx->pc != 0x122A04u) { return; }
    ctx->pc = 0x122A04u;
label_122a04:
    // 0x122a04: 0x8e030000
    ctx->pc = 0x122a04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122a08:
    // 0x122a08: 0x200202d
    ctx->pc = 0x122a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122a0c:
    // 0x122a0c: 0x282d
    ctx->pc = 0x122a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122a10:
    // 0x122a10: 0x8c62001c
    ctx->pc = 0x122a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_122a14:
    // 0x122a14: 0x40f809
label_122a18:
    if (ctx->pc == 0x122A18u) {
        ctx->pc = 0x122A18u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122A1Cu;
        goto label_122a1c;
    }
    ctx->pc = 0x122A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122A1Cu);
        ctx->pc = 0x122A18u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122A1Cu; }
            if (ctx->pc != 0x122A1Cu) { return; }
        }
    }
    ctx->pc = 0x122A1Cu;
label_122a1c:
    // 0x122a1c: 0x82220002
    ctx->pc = 0x122a1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_122a20:
    // 0x122a20: 0x242102a
    ctx->pc = 0x122a20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_122a24:
    // 0x122a24: 0x1440ffe0
label_122a28:
    if (ctx->pc == 0x122A28u) {
        ctx->pc = 0x122A28u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x122A2Cu;
        goto label_122a2c;
    }
    ctx->pc = 0x122A24u;
    {
        const bool branch_taken_0x122a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122A28u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        if (branch_taken_0x122a24) {
            ctx->pc = 0x1229A8u;
            goto label_1229a8;
        }
    }
    ctx->pc = 0x122A2Cu;
label_122a2c:
    // 0x122a2c: 0x41600
    ctx->pc = 0x122a2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_122a30:
    // 0x122a30: 0x18400023
label_122a34:
    if (ctx->pc == 0x122A34u) {
        ctx->pc = 0x122A34u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122A38u;
        goto label_122a38;
    }
    ctx->pc = 0x122A30u;
    {
        const bool branch_taken_0x122a30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x122A34u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122a30) {
            ctx->pc = 0x122AC0u;
            goto label_122ac0;
        }
    }
    ctx->pc = 0x122A38u;
label_122a38:
    // 0x122a38: 0x2633000c
    ctx->pc = 0x122a38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 12));
label_122a3c:
    // 0x122a3c: 0x8e700000
    ctx->pc = 0x122a3cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_122a40:
    // 0x122a40: 0x26730004
    ctx->pc = 0x122a40u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
label_122a44:
    // 0x122a44: 0x26520001
    ctx->pc = 0x122a44u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_122a48:
    // 0x122a48: 0x8e030000
    ctx->pc = 0x122a48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122a4c:
    // 0x122a4c: 0x8c620014
    ctx->pc = 0x122a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_122a50:
    // 0x122a50: 0x40f809
label_122a54:
    if (ctx->pc == 0x122A54u) {
        ctx->pc = 0x122A54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122A58u;
        goto label_122a58;
    }
    ctx->pc = 0x122A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122A58u);
        ctx->pc = 0x122A54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122A58u; }
            if (ctx->pc != 0x122A58u) { return; }
        }
    }
    ctx->pc = 0x122A58u;
label_122a58:
    // 0x122a58: 0x8e030000
    ctx->pc = 0x122a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122a5c:
    // 0x122a5c: 0x200202d
    ctx->pc = 0x122a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122a60:
    // 0x122a60: 0x8c620024
    ctx->pc = 0x122a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_122a64:
    // 0x122a64: 0x40f809
label_122a68:
    if (ctx->pc == 0x122A68u) {
        ctx->pc = 0x122A68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122A6Cu;
        goto label_122a6c;
    }
    ctx->pc = 0x122A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122A6Cu);
        ctx->pc = 0x122A68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122A6Cu; }
            if (ctx->pc != 0x122A6Cu) { return; }
        }
    }
    ctx->pc = 0x122A6Cu;
label_122a6c:
    // 0x122a6c: 0x8e030000
    ctx->pc = 0x122a6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122a70:
    // 0x122a70: 0x40302d
    ctx->pc = 0x122a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a74:
    // 0x122a74: 0x3a0382d
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122a78:
    // 0x122a78: 0x8c620018
    ctx->pc = 0x122a78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_122a7c:
    // 0x122a7c: 0x200202d
    ctx->pc = 0x122a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122a80:
    // 0x122a80: 0x40f809
label_122a84:
    if (ctx->pc == 0x122A84u) {
        ctx->pc = 0x122A84u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122A88u;
        goto label_122a88;
    }
    ctx->pc = 0x122A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122A88u);
        ctx->pc = 0x122A84u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122A88u; }
            if (ctx->pc != 0x122A88u) { return; }
        }
    }
    ctx->pc = 0x122A88u;
label_122a88:
    // 0x122a88: 0x282d
    ctx->pc = 0x122a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122a8c:
    // 0x122a8c: 0x8fa40000
    ctx->pc = 0x122a8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_122a90:
    // 0x122a90: 0xc041f1a
label_122a94:
    if (ctx->pc == 0x122A94u) {
        ctx->pc = 0x122A94u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x122A98u;
        goto label_122a98;
    }
    ctx->pc = 0x122A90u;
    SET_GPR_U32(ctx, 31, 0x122A98u);
    ctx->pc = 0x122A94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122A98u; }
    }
    if (ctx->pc != 0x122A98u) { return; }
    ctx->pc = 0x122A98u;
label_122a98:
    // 0x122a98: 0x8e060000
    ctx->pc = 0x122a98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122a9c:
    // 0x122a9c: 0x200202d
    ctx->pc = 0x122a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122aa0:
    // 0x122aa0: 0x282d
    ctx->pc = 0x122aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122aa4:
    // 0x122aa4: 0x8cc3001c
    ctx->pc = 0x122aa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_122aa8:
    // 0x122aa8: 0x60f809
label_122aac:
    if (ctx->pc == 0x122AACu) {
        ctx->pc = 0x122AACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x122AB0u;
        goto label_122ab0;
    }
    ctx->pc = 0x122AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122AB0u);
        ctx->pc = 0x122AACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x122AB0u; }
            if (ctx->pc != 0x122AB0u) { return; }
        }
    }
    ctx->pc = 0x122AB0u;
label_122ab0:
    // 0x122ab0: 0x82220002
    ctx->pc = 0x122ab0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_122ab4:
    // 0x122ab4: 0x242102a
    ctx->pc = 0x122ab4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_122ab8:
    // 0x122ab8: 0x5440ffe1
label_122abc:
    if (ctx->pc == 0x122ABCu) {
        ctx->pc = 0x122ABCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x122AC0u;
        goto label_122ac0;
    }
    ctx->pc = 0x122AB8u;
    {
        const bool branch_taken_0x122ab8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x122ab8) {
            ctx->pc = 0x122ABCu;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x122A40u;
            goto label_122a40;
        }
    }
    ctx->pc = 0x122AC0u;
label_122ac0:
    // 0x122ac0: 0x24020002
    ctx->pc = 0x122ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_122ac4:
    // 0x122ac4: 0xdfb00010
    ctx->pc = 0x122ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_122ac8:
    // 0x122ac8: 0xa2220001
    ctx->pc = 0x122ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_122acc:
    // 0x122acc: 0xdfb20020
    ctx->pc = 0x122accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_122ad0:
    // 0x122ad0: 0xdfb10018
    ctx->pc = 0x122ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_122ad4:
    // 0x122ad4: 0xdfb30028
    ctx->pc = 0x122ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_122ad8:
    // 0x122ad8: 0xdfbf0030
    ctx->pc = 0x122ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_122adc:
    // 0x122adc: 0x3e00008
label_122ae0:
    if (ctx->pc == 0x122AE0u) {
        ctx->pc = 0x122AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x122AE4u;
        goto label_122ae4;
    }
    ctx->pc = 0x122ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1228F0u: goto label_1228f0;
            case 0x1228F4u: goto label_1228f4;
            case 0x1228F8u: goto label_1228f8;
            case 0x1228FCu: goto label_1228fc;
            case 0x122900u: goto label_122900;
            case 0x122904u: goto label_122904;
            case 0x122908u: goto label_122908;
            case 0x12290Cu: goto label_12290c;
            case 0x122910u: goto label_122910;
            case 0x122914u: goto label_122914;
            case 0x122918u: goto label_122918;
            case 0x12291Cu: goto label_12291c;
            case 0x122920u: goto label_122920;
            case 0x122924u: goto label_122924;
            case 0x122928u: goto label_122928;
            case 0x12292Cu: goto label_12292c;
            case 0x122930u: goto label_122930;
            case 0x122934u: goto label_122934;
            case 0x122938u: goto label_122938;
            case 0x12293Cu: goto label_12293c;
            case 0x122940u: goto label_122940;
            case 0x122944u: goto label_122944;
            case 0x122948u: goto label_122948;
            case 0x12294Cu: goto label_12294c;
            case 0x122950u: goto label_122950;
            case 0x122954u: goto label_122954;
            case 0x122958u: goto label_122958;
            case 0x12295Cu: goto label_12295c;
            case 0x122960u: goto label_122960;
            case 0x122964u: goto label_122964;
            case 0x122968u: goto label_122968;
            case 0x12296Cu: goto label_12296c;
            case 0x122970u: goto label_122970;
            case 0x122974u: goto label_122974;
            case 0x122978u: goto label_122978;
            case 0x12297Cu: goto label_12297c;
            case 0x122980u: goto label_122980;
            case 0x122984u: goto label_122984;
            case 0x122988u: goto label_122988;
            case 0x12298Cu: goto label_12298c;
            case 0x122990u: goto label_122990;
            case 0x122994u: goto label_122994;
            case 0x122998u: goto label_122998;
            case 0x12299Cu: goto label_12299c;
            case 0x1229A0u: goto label_1229a0;
            case 0x1229A4u: goto label_1229a4;
            case 0x1229A8u: goto label_1229a8;
            case 0x1229ACu: goto label_1229ac;
            case 0x1229B0u: goto label_1229b0;
            case 0x1229B4u: goto label_1229b4;
            case 0x1229B8u: goto label_1229b8;
            case 0x1229BCu: goto label_1229bc;
            case 0x1229C0u: goto label_1229c0;
            case 0x1229C4u: goto label_1229c4;
            case 0x1229C8u: goto label_1229c8;
            case 0x1229CCu: goto label_1229cc;
            case 0x1229D0u: goto label_1229d0;
            case 0x1229D4u: goto label_1229d4;
            case 0x1229D8u: goto label_1229d8;
            case 0x1229DCu: goto label_1229dc;
            case 0x1229E0u: goto label_1229e0;
            case 0x1229E4u: goto label_1229e4;
            case 0x1229E8u: goto label_1229e8;
            case 0x1229ECu: goto label_1229ec;
            case 0x1229F0u: goto label_1229f0;
            case 0x1229F4u: goto label_1229f4;
            case 0x1229F8u: goto label_1229f8;
            case 0x1229FCu: goto label_1229fc;
            case 0x122A00u: goto label_122a00;
            case 0x122A04u: goto label_122a04;
            case 0x122A08u: goto label_122a08;
            case 0x122A0Cu: goto label_122a0c;
            case 0x122A10u: goto label_122a10;
            case 0x122A14u: goto label_122a14;
            case 0x122A18u: goto label_122a18;
            case 0x122A1Cu: goto label_122a1c;
            case 0x122A20u: goto label_122a20;
            case 0x122A24u: goto label_122a24;
            case 0x122A28u: goto label_122a28;
            case 0x122A2Cu: goto label_122a2c;
            case 0x122A30u: goto label_122a30;
            case 0x122A34u: goto label_122a34;
            case 0x122A38u: goto label_122a38;
            case 0x122A3Cu: goto label_122a3c;
            case 0x122A40u: goto label_122a40;
            case 0x122A44u: goto label_122a44;
            case 0x122A48u: goto label_122a48;
            case 0x122A4Cu: goto label_122a4c;
            case 0x122A50u: goto label_122a50;
            case 0x122A54u: goto label_122a54;
            case 0x122A58u: goto label_122a58;
            case 0x122A5Cu: goto label_122a5c;
            case 0x122A60u: goto label_122a60;
            case 0x122A64u: goto label_122a64;
            case 0x122A68u: goto label_122a68;
            case 0x122A6Cu: goto label_122a6c;
            case 0x122A70u: goto label_122a70;
            case 0x122A74u: goto label_122a74;
            case 0x122A78u: goto label_122a78;
            case 0x122A7Cu: goto label_122a7c;
            case 0x122A80u: goto label_122a80;
            case 0x122A84u: goto label_122a84;
            case 0x122A88u: goto label_122a88;
            case 0x122A8Cu: goto label_122a8c;
            case 0x122A90u: goto label_122a90;
            case 0x122A94u: goto label_122a94;
            case 0x122A98u: goto label_122a98;
            case 0x122A9Cu: goto label_122a9c;
            case 0x122AA0u: goto label_122aa0;
            case 0x122AA4u: goto label_122aa4;
            case 0x122AA8u: goto label_122aa8;
            case 0x122AACu: goto label_122aac;
            case 0x122AB0u: goto label_122ab0;
            case 0x122AB4u: goto label_122ab4;
            case 0x122AB8u: goto label_122ab8;
            case 0x122ABCu: goto label_122abc;
            case 0x122AC0u: goto label_122ac0;
            case 0x122AC4u: goto label_122ac4;
            case 0x122AC8u: goto label_122ac8;
            case 0x122ACCu: goto label_122acc;
            case 0x122AD0u: goto label_122ad0;
            case 0x122AD4u: goto label_122ad4;
            case 0x122AD8u: goto label_122ad8;
            case 0x122ADCu: goto label_122adc;
            case 0x122AE0u: goto label_122ae0;
            case 0x122AE4u: goto label_122ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122AE4u;
label_122ae4:
    // 0x122ae4: 0x0
    ctx->pc = 0x122ae4u;
    // NOP
}
