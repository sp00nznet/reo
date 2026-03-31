#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163988
// Address: 0x163988 - 0x163b30
void sub_00163988_0x163988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163988u;

label_163988:
    // 0x163988: 0x27bdfff0
    ctx->pc = 0x163988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_16398c:
    // 0x16398c: 0x24020001
    ctx->pc = 0x16398cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_163990:
    // 0x163990: 0xffbf0000
    ctx->pc = 0x163990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_163994:
    // 0x163994: 0x8c8301ec
    ctx->pc = 0x163994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 492)));
label_163998:
    // 0x163998: 0x14620003
label_16399c:
    if (ctx->pc == 0x16399Cu) {
        ctx->pc = 0x16399Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1639A0u;
        goto label_1639a0;
    }
    ctx->pc = 0x163998u;
    {
        const bool branch_taken_0x163998 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16399Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x163998) {
            ctx->pc = 0x1639A8u;
            goto label_1639a8;
        }
    }
    ctx->pc = 0x1639A0u;
label_1639a0:
    // 0x1639a0: 0x8058e6c
label_1639a4:
    if (ctx->pc == 0x1639A4u) {
        ctx->pc = 0x1639A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1639A8u;
        goto label_1639a8;
    }
    ctx->pc = 0x1639A0u;
    ctx->pc = 0x1639A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1639B0u;
    goto label_1639b0;
    ctx->pc = 0x1639A8u;
label_1639a8:
    // 0x1639a8: 0x8058eaa
label_1639ac:
    if (ctx->pc == 0x1639ACu) {
        ctx->pc = 0x1639ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1639B0u;
        goto label_1639b0;
    }
    ctx->pc = 0x1639A8u;
    ctx->pc = 0x1639ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163AA8u;
    goto label_163aa8;
    ctx->pc = 0x1639B0u;
label_1639b0:
    // 0x1639b0: 0x27bdffe0
    ctx->pc = 0x1639b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1639b4:
    // 0x1639b4: 0xffb00000
    ctx->pc = 0x1639b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1639b8:
    // 0x1639b8: 0xffb10008
    ctx->pc = 0x1639b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1639bc:
    // 0x1639bc: 0x80882d
    ctx->pc = 0x1639bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1639c0:
    // 0x1639c0: 0xffb20010
    ctx->pc = 0x1639c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1639c4:
    // 0x1639c4: 0x263201ec
    ctx->pc = 0x1639c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 492));
label_1639c8:
    // 0x1639c8: 0xffbf0018
    ctx->pc = 0x1639c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1639cc:
    // 0x1639cc: 0xc05d4be
label_1639d0:
    if (ctx->pc == 0x1639D0u) {
        ctx->pc = 0x1639D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x1639D4u;
        goto label_1639d4;
    }
    ctx->pc = 0x1639CCu;
    SET_GPR_U32(ctx, 31, 0x1639D4u);
    ctx->pc = 0x1639D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x1752F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001752F8_0x1752f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639D4u; }
    }
    if (ctx->pc != 0x1639D4u) { return; }
    ctx->pc = 0x1639D4u;
label_1639d4:
    // 0x1639d4: 0x240202d
    ctx->pc = 0x1639d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1639d8:
    // 0x1639d8: 0xc058be8
label_1639dc:
    if (ctx->pc == 0x1639DCu) {
        ctx->pc = 0x1639DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1639E0u;
        goto label_1639e0;
    }
    ctx->pc = 0x1639D8u;
    SET_GPR_U32(ctx, 31, 0x1639E0u);
    ctx->pc = 0x1639DCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162FA0_0x162fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639E0u; }
    }
    if (ctx->pc != 0x1639E0u) { return; }
    ctx->pc = 0x1639E0u;
label_1639e0:
    // 0x1639e0: 0x40182d
    ctx->pc = 0x1639e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1639e4:
    // 0x1639e4: 0x24020003
    ctx->pc = 0x1639e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1639e8:
    // 0x1639e8: 0x56020029
label_1639ec:
    if (ctx->pc == 0x1639ECu) {
        ctx->pc = 0x1639ECu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1639F0u;
        goto label_1639f0;
    }
    ctx->pc = 0x1639E8u;
    {
        const bool branch_taken_0x1639e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x1639e8) {
            ctx->pc = 0x1639ECu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163A90u;
            goto label_163a90;
        }
    }
    ctx->pc = 0x1639F0u;
label_1639f0:
    // 0x1639f0: 0x24020002
    ctx->pc = 0x1639f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1639f4:
    // 0x1639f4: 0x10620008
label_1639f8:
    if (ctx->pc == 0x1639F8u) {
        ctx->pc = 0x1639FCu;
        goto label_1639fc;
    }
    ctx->pc = 0x1639F4u;
    {
        const bool branch_taken_0x1639f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1639f4) {
            ctx->pc = 0x163A18u;
            goto label_163a18;
        }
    }
    ctx->pc = 0x1639FCu;
label_1639fc:
    // 0x1639fc: 0x8e44000c
    ctx->pc = 0x1639fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_163a00:
    // 0x163a00: 0x8c830000
    ctx->pc = 0x163a00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_163a04:
    // 0x163a04: 0x8c620024
    ctx->pc = 0x163a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_163a08:
    // 0x163a08: 0x40f809
label_163a0c:
    if (ctx->pc == 0x163A0Cu) {
        ctx->pc = 0x163A0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x163A10u;
        goto label_163a10;
    }
    ctx->pc = 0x163A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163A10u);
        ctx->pc = 0x163A0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163988u: goto label_163988;
            case 0x16398Cu: goto label_16398c;
            case 0x163990u: goto label_163990;
            case 0x163994u: goto label_163994;
            case 0x163998u: goto label_163998;
            case 0x16399Cu: goto label_16399c;
            case 0x1639A0u: goto label_1639a0;
            case 0x1639A4u: goto label_1639a4;
            case 0x1639A8u: goto label_1639a8;
            case 0x1639ACu: goto label_1639ac;
            case 0x1639B0u: goto label_1639b0;
            case 0x1639B4u: goto label_1639b4;
            case 0x1639B8u: goto label_1639b8;
            case 0x1639BCu: goto label_1639bc;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639C4u: goto label_1639c4;
            case 0x1639C8u: goto label_1639c8;
            case 0x1639CCu: goto label_1639cc;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639D8u: goto label_1639d8;
            case 0x1639DCu: goto label_1639dc;
            case 0x1639E0u: goto label_1639e0;
            case 0x1639E4u: goto label_1639e4;
            case 0x1639E8u: goto label_1639e8;
            case 0x1639ECu: goto label_1639ec;
            case 0x1639F0u: goto label_1639f0;
            case 0x1639F4u: goto label_1639f4;
            case 0x1639F8u: goto label_1639f8;
            case 0x1639FCu: goto label_1639fc;
            case 0x163A00u: goto label_163a00;
            case 0x163A04u: goto label_163a04;
            case 0x163A08u: goto label_163a08;
            case 0x163A0Cu: goto label_163a0c;
            case 0x163A10u: goto label_163a10;
            case 0x163A14u: goto label_163a14;
            case 0x163A18u: goto label_163a18;
            case 0x163A1Cu: goto label_163a1c;
            case 0x163A20u: goto label_163a20;
            case 0x163A24u: goto label_163a24;
            case 0x163A28u: goto label_163a28;
            case 0x163A2Cu: goto label_163a2c;
            case 0x163A30u: goto label_163a30;
            case 0x163A34u: goto label_163a34;
            case 0x163A38u: goto label_163a38;
            case 0x163A3Cu: goto label_163a3c;
            case 0x163A40u: goto label_163a40;
            case 0x163A44u: goto label_163a44;
            case 0x163A48u: goto label_163a48;
            case 0x163A4Cu: goto label_163a4c;
            case 0x163A50u: goto label_163a50;
            case 0x163A54u: goto label_163a54;
            case 0x163A58u: goto label_163a58;
            case 0x163A5Cu: goto label_163a5c;
            case 0x163A60u: goto label_163a60;
            case 0x163A64u: goto label_163a64;
            case 0x163A68u: goto label_163a68;
            case 0x163A6Cu: goto label_163a6c;
            case 0x163A70u: goto label_163a70;
            case 0x163A74u: goto label_163a74;
            case 0x163A78u: goto label_163a78;
            case 0x163A7Cu: goto label_163a7c;
            case 0x163A80u: goto label_163a80;
            case 0x163A84u: goto label_163a84;
            case 0x163A88u: goto label_163a88;
            case 0x163A8Cu: goto label_163a8c;
            case 0x163A90u: goto label_163a90;
            case 0x163A94u: goto label_163a94;
            case 0x163A98u: goto label_163a98;
            case 0x163A9Cu: goto label_163a9c;
            case 0x163AA0u: goto label_163aa0;
            case 0x163AA4u: goto label_163aa4;
            case 0x163AA8u: goto label_163aa8;
            case 0x163AACu: goto label_163aac;
            case 0x163AB0u: goto label_163ab0;
            case 0x163AB4u: goto label_163ab4;
            case 0x163AB8u: goto label_163ab8;
            case 0x163ABCu: goto label_163abc;
            case 0x163AC0u: goto label_163ac0;
            case 0x163AC4u: goto label_163ac4;
            case 0x163AC8u: goto label_163ac8;
            case 0x163ACCu: goto label_163acc;
            case 0x163AD0u: goto label_163ad0;
            case 0x163AD4u: goto label_163ad4;
            case 0x163AD8u: goto label_163ad8;
            case 0x163ADCu: goto label_163adc;
            case 0x163AE0u: goto label_163ae0;
            case 0x163AE4u: goto label_163ae4;
            case 0x163AE8u: goto label_163ae8;
            case 0x163AECu: goto label_163aec;
            case 0x163AF0u: goto label_163af0;
            case 0x163AF4u: goto label_163af4;
            case 0x163AF8u: goto label_163af8;
            case 0x163AFCu: goto label_163afc;
            case 0x163B00u: goto label_163b00;
            case 0x163B04u: goto label_163b04;
            case 0x163B08u: goto label_163b08;
            case 0x163B0Cu: goto label_163b0c;
            case 0x163B10u: goto label_163b10;
            case 0x163B14u: goto label_163b14;
            case 0x163B18u: goto label_163b18;
            case 0x163B1Cu: goto label_163b1c;
            case 0x163B20u: goto label_163b20;
            case 0x163B24u: goto label_163b24;
            case 0x163B28u: goto label_163b28;
            case 0x163B2Cu: goto label_163b2c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163A10u; }
            if (ctx->pc != 0x163A10u) { return; }
        }
    }
    ctx->pc = 0x163A10u;
label_163a10:
    // 0x163a10: 0x1440001f
label_163a14:
    if (ctx->pc == 0x163A14u) {
        ctx->pc = 0x163A14u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163A18u;
        goto label_163a18;
    }
    ctx->pc = 0x163A10u;
    {
        const bool branch_taken_0x163a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x163A14u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x163a10) {
            ctx->pc = 0x163A90u;
            goto label_163a90;
        }
    }
    ctx->pc = 0x163A18u;
label_163a18:
    // 0x163a18: 0xc057ba2
label_163a1c:
    if (ctx->pc == 0x163A1Cu) {
        ctx->pc = 0x163A1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163A20u;
        goto label_163a20;
    }
    ctx->pc = 0x163A18u;
    SET_GPR_U32(ctx, 31, 0x163A20u);
    ctx->pc = 0x163A1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15EE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EE88_0x15ee88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A20u; }
    }
    if (ctx->pc != 0x163A20u) { return; }
    ctx->pc = 0x163A20u;
label_163a20:
    // 0x163a20: 0x82230072
    ctx->pc = 0x163a20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_163a24:
    // 0x163a24: 0x54600005
label_163a28:
    if (ctx->pc == 0x163A28u) {
        ctx->pc = 0x163A28u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x163A2Cu;
        goto label_163a2c;
    }
    ctx->pc = 0x163A24u;
    {
        const bool branch_taken_0x163a24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x163a24) {
            ctx->pc = 0x163A28u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->pc = 0x163A3Cu;
            goto label_163a3c;
        }
    }
    ctx->pc = 0x163A2Cu;
label_163a2c:
    // 0x163a2c: 0x220202d
    ctx->pc = 0x163a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163a30:
    // 0x163a30: 0xc057cfc
label_163a34:
    if (ctx->pc == 0x163A34u) {
        ctx->pc = 0x163A34u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163A38u;
        goto label_163a38;
    }
    ctx->pc = 0x163A30u;
    SET_GPR_U32(ctx, 31, 0x163A38u);
    ctx->pc = 0x163A34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15F3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F3F0_0x15f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A38u; }
    }
    if (ctx->pc != 0x163A38u) { return; }
    ctx->pc = 0x163A38u;
label_163a38:
    // 0x163a38: 0x82230070
    ctx->pc = 0x163a38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_163a3c:
    // 0x163a3c: 0x24020001
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_163a40:
    // 0x163a40: 0x54620009
label_163a44:
    if (ctx->pc == 0x163A44u) {
        ctx->pc = 0x163A44u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->pc = 0x163A48u;
        goto label_163a48;
    }
    ctx->pc = 0x163A40u;
    {
        const bool branch_taken_0x163a40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x163a40) {
            ctx->pc = 0x163A44u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->pc = 0x163A68u;
            goto label_163a68;
        }
    }
    ctx->pc = 0x163A48u;
label_163a48:
    // 0x163a48: 0xc059f5c
label_163a4c:
    if (ctx->pc == 0x163A4Cu) {
        ctx->pc = 0x163A4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x163A50u;
        goto label_163a50;
    }
    ctx->pc = 0x163A48u;
    SET_GPR_U32(ctx, 31, 0x163A50u);
    ctx->pc = 0x163A4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x167D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D70_0x167d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A50u; }
    }
    if (ctx->pc != 0x163A50u) { return; }
    ctx->pc = 0x163A50u;
label_163a50:
    // 0x163a50: 0x50400005
label_163a54:
    if (ctx->pc == 0x163A54u) {
        ctx->pc = 0x163A54u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->pc = 0x163A58u;
        goto label_163a58;
    }
    ctx->pc = 0x163A50u;
    {
        const bool branch_taken_0x163a50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x163a50) {
            ctx->pc = 0x163A54u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->pc = 0x163A68u;
            goto label_163a68;
        }
    }
    ctx->pc = 0x163A58u;
label_163a58:
    // 0x163a58: 0x3c040024
    ctx->pc = 0x163a58u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_163a5c:
    // 0x163a5c: 0xc058dd4
label_163a60:
    if (ctx->pc == 0x163A60u) {
        ctx->pc = 0x163A60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1184));
        ctx->pc = 0x163A64u;
        goto label_163a64;
    }
    ctx->pc = 0x163A5Cu;
    SET_GPR_U32(ctx, 31, 0x163A64u);
    ctx->pc = 0x163A60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1184));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A64u; }
    }
    if (ctx->pc != 0x163A64u) { return; }
    ctx->pc = 0x163A64u;
label_163a64:
    // 0x163a64: 0x82220072
    ctx->pc = 0x163a64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_163a68:
    // 0x163a68: 0x14400009
label_163a6c:
    if (ctx->pc == 0x163A6Cu) {
        ctx->pc = 0x163A6Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163A70u;
        goto label_163a70;
    }
    ctx->pc = 0x163A68u;
    {
        const bool branch_taken_0x163a68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x163A6Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x163a68) {
            ctx->pc = 0x163A90u;
            goto label_163a90;
        }
    }
    ctx->pc = 0x163A70u;
label_163a70:
    // 0x163a70: 0x240202d
    ctx->pc = 0x163a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163a74:
    // 0x163a74: 0xdfb20010
    ctx->pc = 0x163a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163a78:
    // 0x163a78: 0x282d
    ctx->pc = 0x163a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a7c:
    // 0x163a7c: 0xdfb10008
    ctx->pc = 0x163a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163a80:
    // 0x163a80: 0xdfbf0018
    ctx->pc = 0x163a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163a84:
    // 0x163a84: 0x8058c1e
label_163a88:
    if (ctx->pc == 0x163A88u) {
        ctx->pc = 0x163A88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x163A8Cu;
        goto label_163a8c;
    }
    ctx->pc = 0x163A84u;
    ctx->pc = 0x163A88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163078u;
    sub_00163078_0x163078(rdram, ctx, runtime); return;
    ctx->pc = 0x163A8Cu;
label_163a8c:
    // 0x163a8c: 0x0
    ctx->pc = 0x163a8cu;
    // NOP
label_163a90:
    // 0x163a90: 0xdfb10008
    ctx->pc = 0x163a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163a94:
    // 0x163a94: 0xdfb20010
    ctx->pc = 0x163a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163a98:
    // 0x163a98: 0xdfbf0018
    ctx->pc = 0x163a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_163a9c:
    // 0x163a9c: 0x3e00008
label_163aa0:
    if (ctx->pc == 0x163AA0u) {
        ctx->pc = 0x163AA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x163AA4u;
        goto label_163aa4;
    }
    ctx->pc = 0x163A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163AA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163988u: goto label_163988;
            case 0x16398Cu: goto label_16398c;
            case 0x163990u: goto label_163990;
            case 0x163994u: goto label_163994;
            case 0x163998u: goto label_163998;
            case 0x16399Cu: goto label_16399c;
            case 0x1639A0u: goto label_1639a0;
            case 0x1639A4u: goto label_1639a4;
            case 0x1639A8u: goto label_1639a8;
            case 0x1639ACu: goto label_1639ac;
            case 0x1639B0u: goto label_1639b0;
            case 0x1639B4u: goto label_1639b4;
            case 0x1639B8u: goto label_1639b8;
            case 0x1639BCu: goto label_1639bc;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639C4u: goto label_1639c4;
            case 0x1639C8u: goto label_1639c8;
            case 0x1639CCu: goto label_1639cc;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639D8u: goto label_1639d8;
            case 0x1639DCu: goto label_1639dc;
            case 0x1639E0u: goto label_1639e0;
            case 0x1639E4u: goto label_1639e4;
            case 0x1639E8u: goto label_1639e8;
            case 0x1639ECu: goto label_1639ec;
            case 0x1639F0u: goto label_1639f0;
            case 0x1639F4u: goto label_1639f4;
            case 0x1639F8u: goto label_1639f8;
            case 0x1639FCu: goto label_1639fc;
            case 0x163A00u: goto label_163a00;
            case 0x163A04u: goto label_163a04;
            case 0x163A08u: goto label_163a08;
            case 0x163A0Cu: goto label_163a0c;
            case 0x163A10u: goto label_163a10;
            case 0x163A14u: goto label_163a14;
            case 0x163A18u: goto label_163a18;
            case 0x163A1Cu: goto label_163a1c;
            case 0x163A20u: goto label_163a20;
            case 0x163A24u: goto label_163a24;
            case 0x163A28u: goto label_163a28;
            case 0x163A2Cu: goto label_163a2c;
            case 0x163A30u: goto label_163a30;
            case 0x163A34u: goto label_163a34;
            case 0x163A38u: goto label_163a38;
            case 0x163A3Cu: goto label_163a3c;
            case 0x163A40u: goto label_163a40;
            case 0x163A44u: goto label_163a44;
            case 0x163A48u: goto label_163a48;
            case 0x163A4Cu: goto label_163a4c;
            case 0x163A50u: goto label_163a50;
            case 0x163A54u: goto label_163a54;
            case 0x163A58u: goto label_163a58;
            case 0x163A5Cu: goto label_163a5c;
            case 0x163A60u: goto label_163a60;
            case 0x163A64u: goto label_163a64;
            case 0x163A68u: goto label_163a68;
            case 0x163A6Cu: goto label_163a6c;
            case 0x163A70u: goto label_163a70;
            case 0x163A74u: goto label_163a74;
            case 0x163A78u: goto label_163a78;
            case 0x163A7Cu: goto label_163a7c;
            case 0x163A80u: goto label_163a80;
            case 0x163A84u: goto label_163a84;
            case 0x163A88u: goto label_163a88;
            case 0x163A8Cu: goto label_163a8c;
            case 0x163A90u: goto label_163a90;
            case 0x163A94u: goto label_163a94;
            case 0x163A98u: goto label_163a98;
            case 0x163A9Cu: goto label_163a9c;
            case 0x163AA0u: goto label_163aa0;
            case 0x163AA4u: goto label_163aa4;
            case 0x163AA8u: goto label_163aa8;
            case 0x163AACu: goto label_163aac;
            case 0x163AB0u: goto label_163ab0;
            case 0x163AB4u: goto label_163ab4;
            case 0x163AB8u: goto label_163ab8;
            case 0x163ABCu: goto label_163abc;
            case 0x163AC0u: goto label_163ac0;
            case 0x163AC4u: goto label_163ac4;
            case 0x163AC8u: goto label_163ac8;
            case 0x163ACCu: goto label_163acc;
            case 0x163AD0u: goto label_163ad0;
            case 0x163AD4u: goto label_163ad4;
            case 0x163AD8u: goto label_163ad8;
            case 0x163ADCu: goto label_163adc;
            case 0x163AE0u: goto label_163ae0;
            case 0x163AE4u: goto label_163ae4;
            case 0x163AE8u: goto label_163ae8;
            case 0x163AECu: goto label_163aec;
            case 0x163AF0u: goto label_163af0;
            case 0x163AF4u: goto label_163af4;
            case 0x163AF8u: goto label_163af8;
            case 0x163AFCu: goto label_163afc;
            case 0x163B00u: goto label_163b00;
            case 0x163B04u: goto label_163b04;
            case 0x163B08u: goto label_163b08;
            case 0x163B0Cu: goto label_163b0c;
            case 0x163B10u: goto label_163b10;
            case 0x163B14u: goto label_163b14;
            case 0x163B18u: goto label_163b18;
            case 0x163B1Cu: goto label_163b1c;
            case 0x163B20u: goto label_163b20;
            case 0x163B24u: goto label_163b24;
            case 0x163B28u: goto label_163b28;
            case 0x163B2Cu: goto label_163b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163AA4u;
label_163aa4:
    // 0x163aa4: 0x0
    ctx->pc = 0x163aa4u;
    // NOP
label_163aa8:
    // 0x163aa8: 0x27bdfff0
    ctx->pc = 0x163aa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_163aac:
    // 0x163aac: 0xffb00000
    ctx->pc = 0x163aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163ab0:
    // 0x163ab0: 0x80802d
    ctx->pc = 0x163ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163ab4:
    // 0x163ab4: 0xffbf0008
    ctx->pc = 0x163ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_163ab8:
    // 0x163ab8: 0xc05d4be
label_163abc:
    if (ctx->pc == 0x163ABCu) {
        ctx->pc = 0x163ABCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x163AC0u;
        goto label_163ac0;
    }
    ctx->pc = 0x163AB8u;
    SET_GPR_U32(ctx, 31, 0x163AC0u);
    ctx->pc = 0x163ABCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x1752F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001752F8_0x1752f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163AC0u; }
    }
    if (ctx->pc != 0x163AC0u) { return; }
    ctx->pc = 0x163AC0u;
label_163ac0:
    // 0x163ac0: 0x24030003
    ctx->pc = 0x163ac0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_163ac4:
    // 0x163ac4: 0x14430016
label_163ac8:
    if (ctx->pc == 0x163AC8u) {
        ctx->pc = 0x163AC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163ACCu;
        goto label_163acc;
    }
    ctx->pc = 0x163AC4u;
    {
        const bool branch_taken_0x163ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x163AC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163ac4) {
            ctx->pc = 0x163B20u;
            goto label_163b20;
        }
    }
    ctx->pc = 0x163ACCu;
label_163acc:
    // 0x163acc: 0xc057ba2
label_163ad0:
    if (ctx->pc == 0x163AD0u) {
        ctx->pc = 0x163AD4u;
        goto label_163ad4;
    }
    ctx->pc = 0x163ACCu;
    SET_GPR_U32(ctx, 31, 0x163AD4u);
    ctx->pc = 0x15EE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EE88_0x15ee88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163AD4u; }
    }
    if (ctx->pc != 0x163AD4u) { return; }
    ctx->pc = 0x163AD4u;
label_163ad4:
    // 0x163ad4: 0x82030072
    ctx->pc = 0x163ad4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_163ad8:
    // 0x163ad8: 0x200202d
    ctx->pc = 0x163ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163adc:
    // 0x163adc: 0x14600003
label_163ae0:
    if (ctx->pc == 0x163AE0u) {
        ctx->pc = 0x163AE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163AE4u;
        goto label_163ae4;
    }
    ctx->pc = 0x163ADCu;
    {
        const bool branch_taken_0x163adc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x163AE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163adc) {
            ctx->pc = 0x163AECu;
            goto label_163aec;
        }
    }
    ctx->pc = 0x163AE4u;
label_163ae4:
    // 0x163ae4: 0xc057cfc
label_163ae8:
    if (ctx->pc == 0x163AE8u) {
        ctx->pc = 0x163AECu;
        goto label_163aec;
    }
    ctx->pc = 0x163AE4u;
    SET_GPR_U32(ctx, 31, 0x163AECu);
    ctx->pc = 0x15F3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F3F0_0x15f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163AECu; }
    }
    if (ctx->pc != 0x163AECu) { return; }
    ctx->pc = 0x163AECu;
label_163aec:
    // 0x163aec: 0x82030070
    ctx->pc = 0x163aecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_163af0:
    // 0x163af0: 0x24020001
    ctx->pc = 0x163af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_163af4:
    // 0x163af4: 0x5462000b
label_163af8:
    if (ctx->pc == 0x163AF8u) {
        ctx->pc = 0x163AF8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163AFCu;
        goto label_163afc;
    }
    ctx->pc = 0x163AF4u;
    {
        const bool branch_taken_0x163af4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x163af4) {
            ctx->pc = 0x163AF8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163B24u;
            goto label_163b24;
        }
    }
    ctx->pc = 0x163AFCu;
label_163afc:
    // 0x163afc: 0xc059f5c
label_163b00:
    if (ctx->pc == 0x163B00u) {
        ctx->pc = 0x163B00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x163B04u;
        goto label_163b04;
    }
    ctx->pc = 0x163AFCu;
    SET_GPR_U32(ctx, 31, 0x163B04u);
    ctx->pc = 0x163B00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x167D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D70_0x167d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163B04u; }
    }
    if (ctx->pc != 0x163B04u) { return; }
    ctx->pc = 0x163B04u;
label_163b04:
    // 0x163b04: 0x3c040024
    ctx->pc = 0x163b04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_163b08:
    // 0x163b08: 0x10400005
label_163b0c:
    if (ctx->pc == 0x163B0Cu) {
        ctx->pc = 0x163B0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1184));
        ctx->pc = 0x163B10u;
        goto label_163b10;
    }
    ctx->pc = 0x163B08u;
    {
        const bool branch_taken_0x163b08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163B0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1184));
        if (branch_taken_0x163b08) {
            ctx->pc = 0x163B20u;
            goto label_163b20;
        }
    }
    ctx->pc = 0x163B10u;
label_163b10:
    // 0x163b10: 0xdfb00000
    ctx->pc = 0x163b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163b14:
    // 0x163b14: 0xdfbf0008
    ctx->pc = 0x163b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163b18:
    // 0x163b18: 0x8058dd4
label_163b1c:
    if (ctx->pc == 0x163B1Cu) {
        ctx->pc = 0x163B1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x163B20u;
        goto label_163b20;
    }
    ctx->pc = 0x163B18u;
    ctx->pc = 0x163B1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x163B20u;
label_163b20:
    // 0x163b20: 0xdfb00000
    ctx->pc = 0x163b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163b24:
    // 0x163b24: 0xdfbf0008
    ctx->pc = 0x163b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163b28:
    // 0x163b28: 0x3e00008
label_163b2c:
    if (ctx->pc == 0x163B2Cu) {
        ctx->pc = 0x163B2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x163B30u;
        goto label_fallthrough_0x163b28;
    }
    ctx->pc = 0x163B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163B2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163988u: goto label_163988;
            case 0x16398Cu: goto label_16398c;
            case 0x163990u: goto label_163990;
            case 0x163994u: goto label_163994;
            case 0x163998u: goto label_163998;
            case 0x16399Cu: goto label_16399c;
            case 0x1639A0u: goto label_1639a0;
            case 0x1639A4u: goto label_1639a4;
            case 0x1639A8u: goto label_1639a8;
            case 0x1639ACu: goto label_1639ac;
            case 0x1639B0u: goto label_1639b0;
            case 0x1639B4u: goto label_1639b4;
            case 0x1639B8u: goto label_1639b8;
            case 0x1639BCu: goto label_1639bc;
            case 0x1639C0u: goto label_1639c0;
            case 0x1639C4u: goto label_1639c4;
            case 0x1639C8u: goto label_1639c8;
            case 0x1639CCu: goto label_1639cc;
            case 0x1639D0u: goto label_1639d0;
            case 0x1639D4u: goto label_1639d4;
            case 0x1639D8u: goto label_1639d8;
            case 0x1639DCu: goto label_1639dc;
            case 0x1639E0u: goto label_1639e0;
            case 0x1639E4u: goto label_1639e4;
            case 0x1639E8u: goto label_1639e8;
            case 0x1639ECu: goto label_1639ec;
            case 0x1639F0u: goto label_1639f0;
            case 0x1639F4u: goto label_1639f4;
            case 0x1639F8u: goto label_1639f8;
            case 0x1639FCu: goto label_1639fc;
            case 0x163A00u: goto label_163a00;
            case 0x163A04u: goto label_163a04;
            case 0x163A08u: goto label_163a08;
            case 0x163A0Cu: goto label_163a0c;
            case 0x163A10u: goto label_163a10;
            case 0x163A14u: goto label_163a14;
            case 0x163A18u: goto label_163a18;
            case 0x163A1Cu: goto label_163a1c;
            case 0x163A20u: goto label_163a20;
            case 0x163A24u: goto label_163a24;
            case 0x163A28u: goto label_163a28;
            case 0x163A2Cu: goto label_163a2c;
            case 0x163A30u: goto label_163a30;
            case 0x163A34u: goto label_163a34;
            case 0x163A38u: goto label_163a38;
            case 0x163A3Cu: goto label_163a3c;
            case 0x163A40u: goto label_163a40;
            case 0x163A44u: goto label_163a44;
            case 0x163A48u: goto label_163a48;
            case 0x163A4Cu: goto label_163a4c;
            case 0x163A50u: goto label_163a50;
            case 0x163A54u: goto label_163a54;
            case 0x163A58u: goto label_163a58;
            case 0x163A5Cu: goto label_163a5c;
            case 0x163A60u: goto label_163a60;
            case 0x163A64u: goto label_163a64;
            case 0x163A68u: goto label_163a68;
            case 0x163A6Cu: goto label_163a6c;
            case 0x163A70u: goto label_163a70;
            case 0x163A74u: goto label_163a74;
            case 0x163A78u: goto label_163a78;
            case 0x163A7Cu: goto label_163a7c;
            case 0x163A80u: goto label_163a80;
            case 0x163A84u: goto label_163a84;
            case 0x163A88u: goto label_163a88;
            case 0x163A8Cu: goto label_163a8c;
            case 0x163A90u: goto label_163a90;
            case 0x163A94u: goto label_163a94;
            case 0x163A98u: goto label_163a98;
            case 0x163A9Cu: goto label_163a9c;
            case 0x163AA0u: goto label_163aa0;
            case 0x163AA4u: goto label_163aa4;
            case 0x163AA8u: goto label_163aa8;
            case 0x163AACu: goto label_163aac;
            case 0x163AB0u: goto label_163ab0;
            case 0x163AB4u: goto label_163ab4;
            case 0x163AB8u: goto label_163ab8;
            case 0x163ABCu: goto label_163abc;
            case 0x163AC0u: goto label_163ac0;
            case 0x163AC4u: goto label_163ac4;
            case 0x163AC8u: goto label_163ac8;
            case 0x163ACCu: goto label_163acc;
            case 0x163AD0u: goto label_163ad0;
            case 0x163AD4u: goto label_163ad4;
            case 0x163AD8u: goto label_163ad8;
            case 0x163ADCu: goto label_163adc;
            case 0x163AE0u: goto label_163ae0;
            case 0x163AE4u: goto label_163ae4;
            case 0x163AE8u: goto label_163ae8;
            case 0x163AECu: goto label_163aec;
            case 0x163AF0u: goto label_163af0;
            case 0x163AF4u: goto label_163af4;
            case 0x163AF8u: goto label_163af8;
            case 0x163AFCu: goto label_163afc;
            case 0x163B00u: goto label_163b00;
            case 0x163B04u: goto label_163b04;
            case 0x163B08u: goto label_163b08;
            case 0x163B0Cu: goto label_163b0c;
            case 0x163B10u: goto label_163b10;
            case 0x163B14u: goto label_163b14;
            case 0x163B18u: goto label_163b18;
            case 0x163B1Cu: goto label_163b1c;
            case 0x163B20u: goto label_163b20;
            case 0x163B24u: goto label_163b24;
            case 0x163B28u: goto label_163b28;
            case 0x163B2Cu: goto label_163b2c;
            default: break;
        }
        return;
    }
label_fallthrough_0x163b28:
    ctx->pc = 0x163B30u;
}
