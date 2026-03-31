#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00132A08
// Address: 0x132a08 - 0x132bc8
void sub_00132A08_0x132a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x132a08u;

label_132a08:
    // 0x132a08: 0x27bdfff0
    ctx->pc = 0x132a08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_132a0c:
    // 0x132a0c: 0x10800003
label_132a10:
    if (ctx->pc == 0x132A10u) {
        ctx->pc = 0x132A10u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x132A14u;
        goto label_132a14;
    }
    ctx->pc = 0x132A0Cu;
    {
        const bool branch_taken_0x132a0c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x132A10u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x132a0c) {
            ctx->pc = 0x132A1Cu;
            goto label_132a1c;
        }
    }
    ctx->pc = 0x132A14u;
label_132a14:
    // 0x132a14: 0x4a10006
label_132a18:
    if (ctx->pc == 0x132A18u) {
        ctx->pc = 0x132A18u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x132A1Cu;
        goto label_132a1c;
    }
    ctx->pc = 0x132A14u;
    {
        const bool branch_taken_0x132a14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x132A18u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x132a14) {
            ctx->pc = 0x132A30u;
            goto label_132a30;
        }
    }
    ctx->pc = 0x132A1Cu;
label_132a1c:
    // 0x132a1c: 0x3c040024
    ctx->pc = 0x132a1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_132a20:
    // 0x132a20: 0xc04a034
label_132a24:
    if (ctx->pc == 0x132A24u) {
        ctx->pc = 0x132A24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947480));
        ctx->pc = 0x132A28u;
        goto label_132a28;
    }
    ctx->pc = 0x132A20u;
    SET_GPR_U32(ctx, 31, 0x132A28u);
    ctx->pc = 0x132A24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947480));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132A28u; }
    }
    if (ctx->pc != 0x132A28u) { return; }
    ctx->pc = 0x132A28u;
label_132a28:
    // 0x132a28: 0x1000000e
label_132a2c:
    if (ctx->pc == 0x132A2Cu) {
        ctx->pc = 0x132A2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x132A30u;
        goto label_132a30;
    }
    ctx->pc = 0x132A28u;
    {
        const bool branch_taken_0x132a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132A2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x132a28) {
            ctx->pc = 0x132A64u;
            goto label_132a64;
        }
    }
    ctx->pc = 0x132A30u;
label_132a30:
    // 0x132a30: 0x441021
    ctx->pc = 0x132a30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_132a34:
    // 0x132a34: 0x8c420018
    ctx->pc = 0x132a34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_132a38:
    // 0x132a38: 0x10400009
label_132a3c:
    if (ctx->pc == 0x132A3Cu) {
        ctx->pc = 0x132A3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x132A40u;
        goto label_132a40;
    }
    ctx->pc = 0x132A38u;
    {
        const bool branch_taken_0x132a38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x132A3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x132a38) {
            ctx->pc = 0x132A60u;
            goto label_132a60;
        }
    }
    ctx->pc = 0x132A40u;
label_132a40:
    // 0x132a40: 0x8c430000
    ctx->pc = 0x132a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_132a44:
    // 0x132a44: 0x8c620024
    ctx->pc = 0x132a44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_132a48:
    // 0x132a48: 0x40f809
label_132a4c:
    if (ctx->pc == 0x132A4Cu) {
        ctx->pc = 0x132A4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x132A50u;
        goto label_132a50;
    }
    ctx->pc = 0x132A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132A50u);
        ctx->pc = 0x132A4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132A08u: goto label_132a08;
            case 0x132A0Cu: goto label_132a0c;
            case 0x132A10u: goto label_132a10;
            case 0x132A14u: goto label_132a14;
            case 0x132A18u: goto label_132a18;
            case 0x132A1Cu: goto label_132a1c;
            case 0x132A20u: goto label_132a20;
            case 0x132A24u: goto label_132a24;
            case 0x132A28u: goto label_132a28;
            case 0x132A2Cu: goto label_132a2c;
            case 0x132A30u: goto label_132a30;
            case 0x132A34u: goto label_132a34;
            case 0x132A38u: goto label_132a38;
            case 0x132A3Cu: goto label_132a3c;
            case 0x132A40u: goto label_132a40;
            case 0x132A44u: goto label_132a44;
            case 0x132A48u: goto label_132a48;
            case 0x132A4Cu: goto label_132a4c;
            case 0x132A50u: goto label_132a50;
            case 0x132A54u: goto label_132a54;
            case 0x132A58u: goto label_132a58;
            case 0x132A5Cu: goto label_132a5c;
            case 0x132A60u: goto label_132a60;
            case 0x132A64u: goto label_132a64;
            case 0x132A68u: goto label_132a68;
            case 0x132A6Cu: goto label_132a6c;
            case 0x132A70u: goto label_132a70;
            case 0x132A74u: goto label_132a74;
            case 0x132A78u: goto label_132a78;
            case 0x132A7Cu: goto label_132a7c;
            case 0x132A80u: goto label_132a80;
            case 0x132A84u: goto label_132a84;
            case 0x132A88u: goto label_132a88;
            case 0x132A8Cu: goto label_132a8c;
            case 0x132A90u: goto label_132a90;
            case 0x132A94u: goto label_132a94;
            case 0x132A98u: goto label_132a98;
            case 0x132A9Cu: goto label_132a9c;
            case 0x132AA0u: goto label_132aa0;
            case 0x132AA4u: goto label_132aa4;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AACu: goto label_132aac;
            case 0x132AB0u: goto label_132ab0;
            case 0x132AB4u: goto label_132ab4;
            case 0x132AB8u: goto label_132ab8;
            case 0x132ABCu: goto label_132abc;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AC4u: goto label_132ac4;
            case 0x132AC8u: goto label_132ac8;
            case 0x132ACCu: goto label_132acc;
            case 0x132AD0u: goto label_132ad0;
            case 0x132AD4u: goto label_132ad4;
            case 0x132AD8u: goto label_132ad8;
            case 0x132ADCu: goto label_132adc;
            case 0x132AE0u: goto label_132ae0;
            case 0x132AE4u: goto label_132ae4;
            case 0x132AE8u: goto label_132ae8;
            case 0x132AECu: goto label_132aec;
            case 0x132AF0u: goto label_132af0;
            case 0x132AF4u: goto label_132af4;
            case 0x132AF8u: goto label_132af8;
            case 0x132AFCu: goto label_132afc;
            case 0x132B00u: goto label_132b00;
            case 0x132B04u: goto label_132b04;
            case 0x132B08u: goto label_132b08;
            case 0x132B0Cu: goto label_132b0c;
            case 0x132B10u: goto label_132b10;
            case 0x132B14u: goto label_132b14;
            case 0x132B18u: goto label_132b18;
            case 0x132B1Cu: goto label_132b1c;
            case 0x132B20u: goto label_132b20;
            case 0x132B24u: goto label_132b24;
            case 0x132B28u: goto label_132b28;
            case 0x132B2Cu: goto label_132b2c;
            case 0x132B30u: goto label_132b30;
            case 0x132B34u: goto label_132b34;
            case 0x132B38u: goto label_132b38;
            case 0x132B3Cu: goto label_132b3c;
            case 0x132B40u: goto label_132b40;
            case 0x132B44u: goto label_132b44;
            case 0x132B48u: goto label_132b48;
            case 0x132B4Cu: goto label_132b4c;
            case 0x132B50u: goto label_132b50;
            case 0x132B54u: goto label_132b54;
            case 0x132B58u: goto label_132b58;
            case 0x132B5Cu: goto label_132b5c;
            case 0x132B60u: goto label_132b60;
            case 0x132B64u: goto label_132b64;
            case 0x132B68u: goto label_132b68;
            case 0x132B6Cu: goto label_132b6c;
            case 0x132B70u: goto label_132b70;
            case 0x132B74u: goto label_132b74;
            case 0x132B78u: goto label_132b78;
            case 0x132B7Cu: goto label_132b7c;
            case 0x132B80u: goto label_132b80;
            case 0x132B84u: goto label_132b84;
            case 0x132B88u: goto label_132b88;
            case 0x132B8Cu: goto label_132b8c;
            case 0x132B90u: goto label_132b90;
            case 0x132B94u: goto label_132b94;
            case 0x132B98u: goto label_132b98;
            case 0x132B9Cu: goto label_132b9c;
            case 0x132BA0u: goto label_132ba0;
            case 0x132BA4u: goto label_132ba4;
            case 0x132BA8u: goto label_132ba8;
            case 0x132BACu: goto label_132bac;
            case 0x132BB0u: goto label_132bb0;
            case 0x132BB4u: goto label_132bb4;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BBCu: goto label_132bbc;
            case 0x132BC0u: goto label_132bc0;
            case 0x132BC4u: goto label_132bc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132A50u; }
            if (ctx->pc != 0x132A50u) { return; }
        }
    }
    ctx->pc = 0x132A50u;
label_132a50:
    // 0x132a50: 0x21fc2
    ctx->pc = 0x132a50u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_132a54:
    // 0x132a54: 0x621821
    ctx->pc = 0x132a54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_132a58:
    // 0x132a58: 0x10000002
label_132a5c:
    if (ctx->pc == 0x132A5Cu) {
        ctx->pc = 0x132A5Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x132A60u;
        goto label_132a60;
    }
    ctx->pc = 0x132A58u;
    {
        const bool branch_taken_0x132a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132A5Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x132a58) {
            ctx->pc = 0x132A64u;
            goto label_132a64;
        }
    }
    ctx->pc = 0x132A60u;
label_132a60:
    // 0x132a60: 0x102d
    ctx->pc = 0x132a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132a64:
    // 0x132a64: 0xdfbf0000
    ctx->pc = 0x132a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132a68:
    // 0x132a68: 0x3e00008
label_132a6c:
    if (ctx->pc == 0x132A6Cu) {
        ctx->pc = 0x132A6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x132A70u;
        goto label_132a70;
    }
    ctx->pc = 0x132A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132A6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132A08u: goto label_132a08;
            case 0x132A0Cu: goto label_132a0c;
            case 0x132A10u: goto label_132a10;
            case 0x132A14u: goto label_132a14;
            case 0x132A18u: goto label_132a18;
            case 0x132A1Cu: goto label_132a1c;
            case 0x132A20u: goto label_132a20;
            case 0x132A24u: goto label_132a24;
            case 0x132A28u: goto label_132a28;
            case 0x132A2Cu: goto label_132a2c;
            case 0x132A30u: goto label_132a30;
            case 0x132A34u: goto label_132a34;
            case 0x132A38u: goto label_132a38;
            case 0x132A3Cu: goto label_132a3c;
            case 0x132A40u: goto label_132a40;
            case 0x132A44u: goto label_132a44;
            case 0x132A48u: goto label_132a48;
            case 0x132A4Cu: goto label_132a4c;
            case 0x132A50u: goto label_132a50;
            case 0x132A54u: goto label_132a54;
            case 0x132A58u: goto label_132a58;
            case 0x132A5Cu: goto label_132a5c;
            case 0x132A60u: goto label_132a60;
            case 0x132A64u: goto label_132a64;
            case 0x132A68u: goto label_132a68;
            case 0x132A6Cu: goto label_132a6c;
            case 0x132A70u: goto label_132a70;
            case 0x132A74u: goto label_132a74;
            case 0x132A78u: goto label_132a78;
            case 0x132A7Cu: goto label_132a7c;
            case 0x132A80u: goto label_132a80;
            case 0x132A84u: goto label_132a84;
            case 0x132A88u: goto label_132a88;
            case 0x132A8Cu: goto label_132a8c;
            case 0x132A90u: goto label_132a90;
            case 0x132A94u: goto label_132a94;
            case 0x132A98u: goto label_132a98;
            case 0x132A9Cu: goto label_132a9c;
            case 0x132AA0u: goto label_132aa0;
            case 0x132AA4u: goto label_132aa4;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AACu: goto label_132aac;
            case 0x132AB0u: goto label_132ab0;
            case 0x132AB4u: goto label_132ab4;
            case 0x132AB8u: goto label_132ab8;
            case 0x132ABCu: goto label_132abc;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AC4u: goto label_132ac4;
            case 0x132AC8u: goto label_132ac8;
            case 0x132ACCu: goto label_132acc;
            case 0x132AD0u: goto label_132ad0;
            case 0x132AD4u: goto label_132ad4;
            case 0x132AD8u: goto label_132ad8;
            case 0x132ADCu: goto label_132adc;
            case 0x132AE0u: goto label_132ae0;
            case 0x132AE4u: goto label_132ae4;
            case 0x132AE8u: goto label_132ae8;
            case 0x132AECu: goto label_132aec;
            case 0x132AF0u: goto label_132af0;
            case 0x132AF4u: goto label_132af4;
            case 0x132AF8u: goto label_132af8;
            case 0x132AFCu: goto label_132afc;
            case 0x132B00u: goto label_132b00;
            case 0x132B04u: goto label_132b04;
            case 0x132B08u: goto label_132b08;
            case 0x132B0Cu: goto label_132b0c;
            case 0x132B10u: goto label_132b10;
            case 0x132B14u: goto label_132b14;
            case 0x132B18u: goto label_132b18;
            case 0x132B1Cu: goto label_132b1c;
            case 0x132B20u: goto label_132b20;
            case 0x132B24u: goto label_132b24;
            case 0x132B28u: goto label_132b28;
            case 0x132B2Cu: goto label_132b2c;
            case 0x132B30u: goto label_132b30;
            case 0x132B34u: goto label_132b34;
            case 0x132B38u: goto label_132b38;
            case 0x132B3Cu: goto label_132b3c;
            case 0x132B40u: goto label_132b40;
            case 0x132B44u: goto label_132b44;
            case 0x132B48u: goto label_132b48;
            case 0x132B4Cu: goto label_132b4c;
            case 0x132B50u: goto label_132b50;
            case 0x132B54u: goto label_132b54;
            case 0x132B58u: goto label_132b58;
            case 0x132B5Cu: goto label_132b5c;
            case 0x132B60u: goto label_132b60;
            case 0x132B64u: goto label_132b64;
            case 0x132B68u: goto label_132b68;
            case 0x132B6Cu: goto label_132b6c;
            case 0x132B70u: goto label_132b70;
            case 0x132B74u: goto label_132b74;
            case 0x132B78u: goto label_132b78;
            case 0x132B7Cu: goto label_132b7c;
            case 0x132B80u: goto label_132b80;
            case 0x132B84u: goto label_132b84;
            case 0x132B88u: goto label_132b88;
            case 0x132B8Cu: goto label_132b8c;
            case 0x132B90u: goto label_132b90;
            case 0x132B94u: goto label_132b94;
            case 0x132B98u: goto label_132b98;
            case 0x132B9Cu: goto label_132b9c;
            case 0x132BA0u: goto label_132ba0;
            case 0x132BA4u: goto label_132ba4;
            case 0x132BA8u: goto label_132ba8;
            case 0x132BACu: goto label_132bac;
            case 0x132BB0u: goto label_132bb0;
            case 0x132BB4u: goto label_132bb4;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BBCu: goto label_132bbc;
            case 0x132BC0u: goto label_132bc0;
            case 0x132BC4u: goto label_132bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132A70u;
label_132a70:
    // 0x132a70: 0x27bdffd0
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_132a74:
    // 0x132a74: 0xffb20010
    ctx->pc = 0x132a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_132a78:
    // 0x132a78: 0x80902d
    ctx->pc = 0x132a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132a7c:
    // 0x132a7c: 0xe7b40020
    ctx->pc = 0x132a7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_132a80:
    // 0x132a80: 0xffb00000
    ctx->pc = 0x132a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132a84:
    // 0x132a84: 0xffb10008
    ctx->pc = 0x132a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_132a88:
    // 0x132a88: 0x4480a000
    ctx->pc = 0x132a88u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_132a8c:
    // 0x132a8c: 0x16400008
label_132a90:
    if (ctx->pc == 0x132A90u) {
        ctx->pc = 0x132A90u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x132A94u;
        goto label_132a94;
    }
    ctx->pc = 0x132A8Cu;
    {
        const bool branch_taken_0x132a8c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x132A90u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x132a8c) {
            ctx->pc = 0x132AB0u;
            goto label_132ab0;
        }
    }
    ctx->pc = 0x132A94u;
label_132a94:
    // 0x132a94: 0x3c040024
    ctx->pc = 0x132a94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_132a98:
    // 0x132a98: 0xc04a034
label_132a9c:
    if (ctx->pc == 0x132A9Cu) {
        ctx->pc = 0x132A9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947528));
        ctx->pc = 0x132AA0u;
        goto label_132aa0;
    }
    ctx->pc = 0x132A98u;
    SET_GPR_U32(ctx, 31, 0x132AA0u);
    ctx->pc = 0x132A9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947528));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AA0u; }
    }
    if (ctx->pc != 0x132AA0u) { return; }
    ctx->pc = 0x132AA0u;
label_132aa0:
    // 0x132aa0: 0x3c01bf80
    ctx->pc = 0x132aa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_132aa4:
    // 0x132aa4: 0x44810000
    ctx->pc = 0x132aa4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_132aa8:
    // 0x132aa8: 0x10000024
label_132aac:
    if (ctx->pc == 0x132AACu) {
        ctx->pc = 0x132AACu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x132AB0u;
        goto label_132ab0;
    }
    ctx->pc = 0x132AA8u;
    {
        const bool branch_taken_0x132aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132AACu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x132aa8) {
            ctx->pc = 0x132B3Cu;
            goto label_132b3c;
        }
    }
    ctx->pc = 0x132AB0u;
label_132ab0:
    // 0x132ab0: 0xc04c7be
label_132ab4:
    if (ctx->pc == 0x132AB4u) {
        ctx->pc = 0x132AB8u;
        goto label_132ab8;
    }
    ctx->pc = 0x132AB0u;
    SET_GPR_U32(ctx, 31, 0x132AB8u);
    ctx->pc = 0x131EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00131EF8_0x131ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AB8u; }
    }
    if (ctx->pc != 0x132AB8u) { return; }
    ctx->pc = 0x132AB8u;
label_132ab8:
    // 0x132ab8: 0x28420002
    ctx->pc = 0x132ab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_132abc:
    // 0x132abc: 0x1440001e
label_132ac0:
    if (ctx->pc == 0x132AC0u) {
        ctx->pc = 0x132AC0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x132AC4u;
        goto label_132ac4;
    }
    ctx->pc = 0x132ABCu;
    {
        const bool branch_taken_0x132abc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x132AC0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x132abc) {
            ctx->pc = 0x132B38u;
            goto label_132b38;
        }
    }
    ctx->pc = 0x132AC4u;
label_132ac4:
    // 0x132ac4: 0x8e430014
    ctx->pc = 0x132ac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_132ac8:
    // 0x132ac8: 0x1060001b
label_132acc:
    if (ctx->pc == 0x132ACCu) {
        ctx->pc = 0x132ACCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x132AD0u;
        goto label_132ad0;
    }
    ctx->pc = 0x132AC8u;
    {
        const bool branch_taken_0x132ac8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x132ACCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x132ac8) {
            ctx->pc = 0x132B38u;
            goto label_132b38;
        }
    }
    ctx->pc = 0x132AD0u;
label_132ad0:
    // 0x132ad0: 0x8c630000
    ctx->pc = 0x132ad0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_132ad4:
    // 0x132ad4: 0x8c620024
    ctx->pc = 0x132ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_132ad8:
    // 0x132ad8: 0x40f809
label_132adc:
    if (ctx->pc == 0x132ADCu) {
        ctx->pc = 0x132ADCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x132AE0u;
        goto label_132ae0;
    }
    ctx->pc = 0x132AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132AE0u);
        ctx->pc = 0x132ADCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132A08u: goto label_132a08;
            case 0x132A0Cu: goto label_132a0c;
            case 0x132A10u: goto label_132a10;
            case 0x132A14u: goto label_132a14;
            case 0x132A18u: goto label_132a18;
            case 0x132A1Cu: goto label_132a1c;
            case 0x132A20u: goto label_132a20;
            case 0x132A24u: goto label_132a24;
            case 0x132A28u: goto label_132a28;
            case 0x132A2Cu: goto label_132a2c;
            case 0x132A30u: goto label_132a30;
            case 0x132A34u: goto label_132a34;
            case 0x132A38u: goto label_132a38;
            case 0x132A3Cu: goto label_132a3c;
            case 0x132A40u: goto label_132a40;
            case 0x132A44u: goto label_132a44;
            case 0x132A48u: goto label_132a48;
            case 0x132A4Cu: goto label_132a4c;
            case 0x132A50u: goto label_132a50;
            case 0x132A54u: goto label_132a54;
            case 0x132A58u: goto label_132a58;
            case 0x132A5Cu: goto label_132a5c;
            case 0x132A60u: goto label_132a60;
            case 0x132A64u: goto label_132a64;
            case 0x132A68u: goto label_132a68;
            case 0x132A6Cu: goto label_132a6c;
            case 0x132A70u: goto label_132a70;
            case 0x132A74u: goto label_132a74;
            case 0x132A78u: goto label_132a78;
            case 0x132A7Cu: goto label_132a7c;
            case 0x132A80u: goto label_132a80;
            case 0x132A84u: goto label_132a84;
            case 0x132A88u: goto label_132a88;
            case 0x132A8Cu: goto label_132a8c;
            case 0x132A90u: goto label_132a90;
            case 0x132A94u: goto label_132a94;
            case 0x132A98u: goto label_132a98;
            case 0x132A9Cu: goto label_132a9c;
            case 0x132AA0u: goto label_132aa0;
            case 0x132AA4u: goto label_132aa4;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AACu: goto label_132aac;
            case 0x132AB0u: goto label_132ab0;
            case 0x132AB4u: goto label_132ab4;
            case 0x132AB8u: goto label_132ab8;
            case 0x132ABCu: goto label_132abc;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AC4u: goto label_132ac4;
            case 0x132AC8u: goto label_132ac8;
            case 0x132ACCu: goto label_132acc;
            case 0x132AD0u: goto label_132ad0;
            case 0x132AD4u: goto label_132ad4;
            case 0x132AD8u: goto label_132ad8;
            case 0x132ADCu: goto label_132adc;
            case 0x132AE0u: goto label_132ae0;
            case 0x132AE4u: goto label_132ae4;
            case 0x132AE8u: goto label_132ae8;
            case 0x132AECu: goto label_132aec;
            case 0x132AF0u: goto label_132af0;
            case 0x132AF4u: goto label_132af4;
            case 0x132AF8u: goto label_132af8;
            case 0x132AFCu: goto label_132afc;
            case 0x132B00u: goto label_132b00;
            case 0x132B04u: goto label_132b04;
            case 0x132B08u: goto label_132b08;
            case 0x132B0Cu: goto label_132b0c;
            case 0x132B10u: goto label_132b10;
            case 0x132B14u: goto label_132b14;
            case 0x132B18u: goto label_132b18;
            case 0x132B1Cu: goto label_132b1c;
            case 0x132B20u: goto label_132b20;
            case 0x132B24u: goto label_132b24;
            case 0x132B28u: goto label_132b28;
            case 0x132B2Cu: goto label_132b2c;
            case 0x132B30u: goto label_132b30;
            case 0x132B34u: goto label_132b34;
            case 0x132B38u: goto label_132b38;
            case 0x132B3Cu: goto label_132b3c;
            case 0x132B40u: goto label_132b40;
            case 0x132B44u: goto label_132b44;
            case 0x132B48u: goto label_132b48;
            case 0x132B4Cu: goto label_132b4c;
            case 0x132B50u: goto label_132b50;
            case 0x132B54u: goto label_132b54;
            case 0x132B58u: goto label_132b58;
            case 0x132B5Cu: goto label_132b5c;
            case 0x132B60u: goto label_132b60;
            case 0x132B64u: goto label_132b64;
            case 0x132B68u: goto label_132b68;
            case 0x132B6Cu: goto label_132b6c;
            case 0x132B70u: goto label_132b70;
            case 0x132B74u: goto label_132b74;
            case 0x132B78u: goto label_132b78;
            case 0x132B7Cu: goto label_132b7c;
            case 0x132B80u: goto label_132b80;
            case 0x132B84u: goto label_132b84;
            case 0x132B88u: goto label_132b88;
            case 0x132B8Cu: goto label_132b8c;
            case 0x132B90u: goto label_132b90;
            case 0x132B94u: goto label_132b94;
            case 0x132B98u: goto label_132b98;
            case 0x132B9Cu: goto label_132b9c;
            case 0x132BA0u: goto label_132ba0;
            case 0x132BA4u: goto label_132ba4;
            case 0x132BA8u: goto label_132ba8;
            case 0x132BACu: goto label_132bac;
            case 0x132BB0u: goto label_132bb0;
            case 0x132BB4u: goto label_132bb4;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BBCu: goto label_132bbc;
            case 0x132BC0u: goto label_132bc0;
            case 0x132BC4u: goto label_132bc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132AE0u; }
            if (ctx->pc != 0x132AE0u) { return; }
        }
    }
    ctx->pc = 0x132AE0u;
label_132ae0:
    // 0x132ae0: 0x240202d
    ctx->pc = 0x132ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132ae4:
    // 0x132ae4: 0xc04c952
label_132ae8:
    if (ctx->pc == 0x132AE8u) {
        ctx->pc = 0x132AE8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x132AECu;
        goto label_132aec;
    }
    ctx->pc = 0x132AE4u;
    SET_GPR_U32(ctx, 31, 0x132AECu);
    ctx->pc = 0x132AE8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132548u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132548_0x132548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AECu; }
    }
    if (ctx->pc != 0x132AECu) { return; }
    ctx->pc = 0x132AECu;
label_132aec:
    // 0x132aec: 0x40882d
    ctx->pc = 0x132aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132af0:
    // 0x132af0: 0xc04c93e
label_132af4:
    if (ctx->pc == 0x132AF4u) {
        ctx->pc = 0x132AF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x132AF8u;
        goto label_132af8;
    }
    ctx->pc = 0x132AF0u;
    SET_GPR_U32(ctx, 31, 0x132AF8u);
    ctx->pc = 0x132AF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1324F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001324F8_0x1324f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132AF8u; }
    }
    if (ctx->pc != 0x132AF8u) { return; }
    ctx->pc = 0x132AF8u;
label_132af8:
    // 0x132af8: 0x1118c0
    ctx->pc = 0x132af8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
label_132afc:
    // 0x132afc: 0x711821
    ctx->pc = 0x132afcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_132b00:
    // 0x132b00: 0x44820800
    ctx->pc = 0x132b00u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_132b04:
    // 0x132b04: 0x46800860
    ctx->pc = 0x132b04u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_132b08:
    // 0x132b08: 0x31840
    ctx->pc = 0x132b08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_132b0c:
    // 0x132b0c: 0x203001a
    ctx->pc = 0x132b0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_132b10:
    // 0x132b10: 0x50600001
label_132b14:
    if (ctx->pc == 0x132B14u) {
        ctx->pc = 0x132B14u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x132B18u;
        goto label_132b18;
    }
    ctx->pc = 0x132B10u;
    {
        const bool branch_taken_0x132b10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x132b10) {
            ctx->pc = 0x132B14u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x132B18u;
            goto label_132b18;
        }
    }
    ctx->pc = 0x132B18u;
label_132b18:
    // 0x132b18: 0x8012
    ctx->pc = 0x132b18u;
    SET_GPR_U32(ctx, 16, ctx->lo);
label_132b1c:
    // 0x132b1c: 0x108140
    ctx->pc = 0x132b1cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 5));
label_132b20:
    // 0x132b20: 0x44900000
    ctx->pc = 0x132b20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 16);
label_132b24:
    // 0x132b24: 0x46800020
    ctx->pc = 0x132b24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_132b28:
    // 0x132b28: 0x0
    ctx->pc = 0x132b28u;
    // NOP
label_132b2c:
    // 0x132b2c: 0x0
    ctx->pc = 0x132b2cu;
    // NOP
label_132b30:
    // 0x132b30: 0x46010503
    ctx->pc = 0x132b30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_132b34:
    // 0x132b34: 0x4600a006
    ctx->pc = 0x132b34u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_132b38:
    // 0x132b38: 0xdfb00000
    ctx->pc = 0x132b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132b3c:
    // 0x132b3c: 0xdfb10008
    ctx->pc = 0x132b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_132b40:
    // 0x132b40: 0xdfb20010
    ctx->pc = 0x132b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_132b44:
    // 0x132b44: 0xdfbf0018
    ctx->pc = 0x132b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_132b48:
    // 0x132b48: 0xc7b40020
    ctx->pc = 0x132b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_132b4c:
    // 0x132b4c: 0x3e00008
label_132b50:
    if (ctx->pc == 0x132B50u) {
        ctx->pc = 0x132B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x132B54u;
        goto label_132b54;
    }
    ctx->pc = 0x132B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132B50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132A08u: goto label_132a08;
            case 0x132A0Cu: goto label_132a0c;
            case 0x132A10u: goto label_132a10;
            case 0x132A14u: goto label_132a14;
            case 0x132A18u: goto label_132a18;
            case 0x132A1Cu: goto label_132a1c;
            case 0x132A20u: goto label_132a20;
            case 0x132A24u: goto label_132a24;
            case 0x132A28u: goto label_132a28;
            case 0x132A2Cu: goto label_132a2c;
            case 0x132A30u: goto label_132a30;
            case 0x132A34u: goto label_132a34;
            case 0x132A38u: goto label_132a38;
            case 0x132A3Cu: goto label_132a3c;
            case 0x132A40u: goto label_132a40;
            case 0x132A44u: goto label_132a44;
            case 0x132A48u: goto label_132a48;
            case 0x132A4Cu: goto label_132a4c;
            case 0x132A50u: goto label_132a50;
            case 0x132A54u: goto label_132a54;
            case 0x132A58u: goto label_132a58;
            case 0x132A5Cu: goto label_132a5c;
            case 0x132A60u: goto label_132a60;
            case 0x132A64u: goto label_132a64;
            case 0x132A68u: goto label_132a68;
            case 0x132A6Cu: goto label_132a6c;
            case 0x132A70u: goto label_132a70;
            case 0x132A74u: goto label_132a74;
            case 0x132A78u: goto label_132a78;
            case 0x132A7Cu: goto label_132a7c;
            case 0x132A80u: goto label_132a80;
            case 0x132A84u: goto label_132a84;
            case 0x132A88u: goto label_132a88;
            case 0x132A8Cu: goto label_132a8c;
            case 0x132A90u: goto label_132a90;
            case 0x132A94u: goto label_132a94;
            case 0x132A98u: goto label_132a98;
            case 0x132A9Cu: goto label_132a9c;
            case 0x132AA0u: goto label_132aa0;
            case 0x132AA4u: goto label_132aa4;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AACu: goto label_132aac;
            case 0x132AB0u: goto label_132ab0;
            case 0x132AB4u: goto label_132ab4;
            case 0x132AB8u: goto label_132ab8;
            case 0x132ABCu: goto label_132abc;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AC4u: goto label_132ac4;
            case 0x132AC8u: goto label_132ac8;
            case 0x132ACCu: goto label_132acc;
            case 0x132AD0u: goto label_132ad0;
            case 0x132AD4u: goto label_132ad4;
            case 0x132AD8u: goto label_132ad8;
            case 0x132ADCu: goto label_132adc;
            case 0x132AE0u: goto label_132ae0;
            case 0x132AE4u: goto label_132ae4;
            case 0x132AE8u: goto label_132ae8;
            case 0x132AECu: goto label_132aec;
            case 0x132AF0u: goto label_132af0;
            case 0x132AF4u: goto label_132af4;
            case 0x132AF8u: goto label_132af8;
            case 0x132AFCu: goto label_132afc;
            case 0x132B00u: goto label_132b00;
            case 0x132B04u: goto label_132b04;
            case 0x132B08u: goto label_132b08;
            case 0x132B0Cu: goto label_132b0c;
            case 0x132B10u: goto label_132b10;
            case 0x132B14u: goto label_132b14;
            case 0x132B18u: goto label_132b18;
            case 0x132B1Cu: goto label_132b1c;
            case 0x132B20u: goto label_132b20;
            case 0x132B24u: goto label_132b24;
            case 0x132B28u: goto label_132b28;
            case 0x132B2Cu: goto label_132b2c;
            case 0x132B30u: goto label_132b30;
            case 0x132B34u: goto label_132b34;
            case 0x132B38u: goto label_132b38;
            case 0x132B3Cu: goto label_132b3c;
            case 0x132B40u: goto label_132b40;
            case 0x132B44u: goto label_132b44;
            case 0x132B48u: goto label_132b48;
            case 0x132B4Cu: goto label_132b4c;
            case 0x132B50u: goto label_132b50;
            case 0x132B54u: goto label_132b54;
            case 0x132B58u: goto label_132b58;
            case 0x132B5Cu: goto label_132b5c;
            case 0x132B60u: goto label_132b60;
            case 0x132B64u: goto label_132b64;
            case 0x132B68u: goto label_132b68;
            case 0x132B6Cu: goto label_132b6c;
            case 0x132B70u: goto label_132b70;
            case 0x132B74u: goto label_132b74;
            case 0x132B78u: goto label_132b78;
            case 0x132B7Cu: goto label_132b7c;
            case 0x132B80u: goto label_132b80;
            case 0x132B84u: goto label_132b84;
            case 0x132B88u: goto label_132b88;
            case 0x132B8Cu: goto label_132b8c;
            case 0x132B90u: goto label_132b90;
            case 0x132B94u: goto label_132b94;
            case 0x132B98u: goto label_132b98;
            case 0x132B9Cu: goto label_132b9c;
            case 0x132BA0u: goto label_132ba0;
            case 0x132BA4u: goto label_132ba4;
            case 0x132BA8u: goto label_132ba8;
            case 0x132BACu: goto label_132bac;
            case 0x132BB0u: goto label_132bb0;
            case 0x132BB4u: goto label_132bb4;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BBCu: goto label_132bbc;
            case 0x132BC0u: goto label_132bc0;
            case 0x132BC4u: goto label_132bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132B54u;
label_132b54:
    // 0x132b54: 0x0
    ctx->pc = 0x132b54u;
    // NOP
label_132b58:
    // 0x132b58: 0x27bdfff0
    ctx->pc = 0x132b58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_132b5c:
    // 0x132b5c: 0xffb00000
    ctx->pc = 0x132b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132b60:
    // 0x132b60: 0x80802d
    ctx->pc = 0x132b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132b64:
    // 0x132b64: 0x16000006
label_132b68:
    if (ctx->pc == 0x132B68u) {
        ctx->pc = 0x132B68u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x132B6Cu;
        goto label_132b6c;
    }
    ctx->pc = 0x132B64u;
    {
        const bool branch_taken_0x132b64 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x132B68u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x132b64) {
            ctx->pc = 0x132B80u;
            goto label_132b80;
        }
    }
    ctx->pc = 0x132B6Cu;
label_132b6c:
    // 0x132b6c: 0x3c040024
    ctx->pc = 0x132b6cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_132b70:
    // 0x132b70: 0xc04a034
label_132b74:
    if (ctx->pc == 0x132B74u) {
        ctx->pc = 0x132B74u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947584));
        ctx->pc = 0x132B78u;
        goto label_132b78;
    }
    ctx->pc = 0x132B70u;
    SET_GPR_U32(ctx, 31, 0x132B78u);
    ctx->pc = 0x132B74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947584));
    ctx->pc = 0x1280D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001280D0_0x1280d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132B78u; }
    }
    if (ctx->pc != 0x132B78u) { return; }
    ctx->pc = 0x132B78u;
label_132b78:
    // 0x132b78: 0x1000000e
label_132b7c:
    if (ctx->pc == 0x132B7Cu) {
        ctx->pc = 0x132B7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x132B80u;
        goto label_132b80;
    }
    ctx->pc = 0x132B78u;
    {
        const bool branch_taken_0x132b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132B7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x132b78) {
            ctx->pc = 0x132BB4u;
            goto label_132bb4;
        }
    }
    ctx->pc = 0x132B80u;
label_132b80:
    // 0x132b80: 0x8e030014
    ctx->pc = 0x132b80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_132b84:
    // 0x132b84: 0x1060000a
label_132b88:
    if (ctx->pc == 0x132B88u) {
        ctx->pc = 0x132B88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x132B8Cu;
        goto label_132b8c;
    }
    ctx->pc = 0x132B84u;
    {
        const bool branch_taken_0x132b84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x132B88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x132b84) {
            ctx->pc = 0x132BB0u;
            goto label_132bb0;
        }
    }
    ctx->pc = 0x132B8Cu;
label_132b8c:
    // 0x132b8c: 0x8c630000
    ctx->pc = 0x132b8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_132b90:
    // 0x132b90: 0x8c620024
    ctx->pc = 0x132b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_132b94:
    // 0x132b94: 0x40f809
label_132b98:
    if (ctx->pc == 0x132B98u) {
        ctx->pc = 0x132B98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x132B9Cu;
        goto label_132b9c;
    }
    ctx->pc = 0x132B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132B9Cu);
        ctx->pc = 0x132B98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132A08u: goto label_132a08;
            case 0x132A0Cu: goto label_132a0c;
            case 0x132A10u: goto label_132a10;
            case 0x132A14u: goto label_132a14;
            case 0x132A18u: goto label_132a18;
            case 0x132A1Cu: goto label_132a1c;
            case 0x132A20u: goto label_132a20;
            case 0x132A24u: goto label_132a24;
            case 0x132A28u: goto label_132a28;
            case 0x132A2Cu: goto label_132a2c;
            case 0x132A30u: goto label_132a30;
            case 0x132A34u: goto label_132a34;
            case 0x132A38u: goto label_132a38;
            case 0x132A3Cu: goto label_132a3c;
            case 0x132A40u: goto label_132a40;
            case 0x132A44u: goto label_132a44;
            case 0x132A48u: goto label_132a48;
            case 0x132A4Cu: goto label_132a4c;
            case 0x132A50u: goto label_132a50;
            case 0x132A54u: goto label_132a54;
            case 0x132A58u: goto label_132a58;
            case 0x132A5Cu: goto label_132a5c;
            case 0x132A60u: goto label_132a60;
            case 0x132A64u: goto label_132a64;
            case 0x132A68u: goto label_132a68;
            case 0x132A6Cu: goto label_132a6c;
            case 0x132A70u: goto label_132a70;
            case 0x132A74u: goto label_132a74;
            case 0x132A78u: goto label_132a78;
            case 0x132A7Cu: goto label_132a7c;
            case 0x132A80u: goto label_132a80;
            case 0x132A84u: goto label_132a84;
            case 0x132A88u: goto label_132a88;
            case 0x132A8Cu: goto label_132a8c;
            case 0x132A90u: goto label_132a90;
            case 0x132A94u: goto label_132a94;
            case 0x132A98u: goto label_132a98;
            case 0x132A9Cu: goto label_132a9c;
            case 0x132AA0u: goto label_132aa0;
            case 0x132AA4u: goto label_132aa4;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AACu: goto label_132aac;
            case 0x132AB0u: goto label_132ab0;
            case 0x132AB4u: goto label_132ab4;
            case 0x132AB8u: goto label_132ab8;
            case 0x132ABCu: goto label_132abc;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AC4u: goto label_132ac4;
            case 0x132AC8u: goto label_132ac8;
            case 0x132ACCu: goto label_132acc;
            case 0x132AD0u: goto label_132ad0;
            case 0x132AD4u: goto label_132ad4;
            case 0x132AD8u: goto label_132ad8;
            case 0x132ADCu: goto label_132adc;
            case 0x132AE0u: goto label_132ae0;
            case 0x132AE4u: goto label_132ae4;
            case 0x132AE8u: goto label_132ae8;
            case 0x132AECu: goto label_132aec;
            case 0x132AF0u: goto label_132af0;
            case 0x132AF4u: goto label_132af4;
            case 0x132AF8u: goto label_132af8;
            case 0x132AFCu: goto label_132afc;
            case 0x132B00u: goto label_132b00;
            case 0x132B04u: goto label_132b04;
            case 0x132B08u: goto label_132b08;
            case 0x132B0Cu: goto label_132b0c;
            case 0x132B10u: goto label_132b10;
            case 0x132B14u: goto label_132b14;
            case 0x132B18u: goto label_132b18;
            case 0x132B1Cu: goto label_132b1c;
            case 0x132B20u: goto label_132b20;
            case 0x132B24u: goto label_132b24;
            case 0x132B28u: goto label_132b28;
            case 0x132B2Cu: goto label_132b2c;
            case 0x132B30u: goto label_132b30;
            case 0x132B34u: goto label_132b34;
            case 0x132B38u: goto label_132b38;
            case 0x132B3Cu: goto label_132b3c;
            case 0x132B40u: goto label_132b40;
            case 0x132B44u: goto label_132b44;
            case 0x132B48u: goto label_132b48;
            case 0x132B4Cu: goto label_132b4c;
            case 0x132B50u: goto label_132b50;
            case 0x132B54u: goto label_132b54;
            case 0x132B58u: goto label_132b58;
            case 0x132B5Cu: goto label_132b5c;
            case 0x132B60u: goto label_132b60;
            case 0x132B64u: goto label_132b64;
            case 0x132B68u: goto label_132b68;
            case 0x132B6Cu: goto label_132b6c;
            case 0x132B70u: goto label_132b70;
            case 0x132B74u: goto label_132b74;
            case 0x132B78u: goto label_132b78;
            case 0x132B7Cu: goto label_132b7c;
            case 0x132B80u: goto label_132b80;
            case 0x132B84u: goto label_132b84;
            case 0x132B88u: goto label_132b88;
            case 0x132B8Cu: goto label_132b8c;
            case 0x132B90u: goto label_132b90;
            case 0x132B94u: goto label_132b94;
            case 0x132B98u: goto label_132b98;
            case 0x132B9Cu: goto label_132b9c;
            case 0x132BA0u: goto label_132ba0;
            case 0x132BA4u: goto label_132ba4;
            case 0x132BA8u: goto label_132ba8;
            case 0x132BACu: goto label_132bac;
            case 0x132BB0u: goto label_132bb0;
            case 0x132BB4u: goto label_132bb4;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BBCu: goto label_132bbc;
            case 0x132BC0u: goto label_132bc0;
            case 0x132BC4u: goto label_132bc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132B9Cu; }
            if (ctx->pc != 0x132B9Cu) { return; }
        }
    }
    ctx->pc = 0x132B9Cu;
label_132b9c:
    // 0x132b9c: 0x8603003e
    ctx->pc = 0x132b9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_132ba0:
    // 0x132ba0: 0x31ac0
    ctx->pc = 0x132ba0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
label_132ba4:
    // 0x132ba4: 0x43102a
    ctx->pc = 0x132ba4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_132ba8:
    // 0x132ba8: 0x10000002
label_132bac:
    if (ctx->pc == 0x132BACu) {
        ctx->pc = 0x132BACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x132BB0u;
        goto label_132bb0;
    }
    ctx->pc = 0x132BA8u;
    {
        const bool branch_taken_0x132ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x132BACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x132ba8) {
            ctx->pc = 0x132BB4u;
            goto label_132bb4;
        }
    }
    ctx->pc = 0x132BB0u;
label_132bb0:
    // 0x132bb0: 0x102d
    ctx->pc = 0x132bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132bb4:
    // 0x132bb4: 0xdfb00000
    ctx->pc = 0x132bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132bb8:
    // 0x132bb8: 0xdfbf0008
    ctx->pc = 0x132bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_132bbc:
    // 0x132bbc: 0x3e00008
label_132bc0:
    if (ctx->pc == 0x132BC0u) {
        ctx->pc = 0x132BC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x132BC4u;
        goto label_132bc4;
    }
    ctx->pc = 0x132BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132BC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132A08u: goto label_132a08;
            case 0x132A0Cu: goto label_132a0c;
            case 0x132A10u: goto label_132a10;
            case 0x132A14u: goto label_132a14;
            case 0x132A18u: goto label_132a18;
            case 0x132A1Cu: goto label_132a1c;
            case 0x132A20u: goto label_132a20;
            case 0x132A24u: goto label_132a24;
            case 0x132A28u: goto label_132a28;
            case 0x132A2Cu: goto label_132a2c;
            case 0x132A30u: goto label_132a30;
            case 0x132A34u: goto label_132a34;
            case 0x132A38u: goto label_132a38;
            case 0x132A3Cu: goto label_132a3c;
            case 0x132A40u: goto label_132a40;
            case 0x132A44u: goto label_132a44;
            case 0x132A48u: goto label_132a48;
            case 0x132A4Cu: goto label_132a4c;
            case 0x132A50u: goto label_132a50;
            case 0x132A54u: goto label_132a54;
            case 0x132A58u: goto label_132a58;
            case 0x132A5Cu: goto label_132a5c;
            case 0x132A60u: goto label_132a60;
            case 0x132A64u: goto label_132a64;
            case 0x132A68u: goto label_132a68;
            case 0x132A6Cu: goto label_132a6c;
            case 0x132A70u: goto label_132a70;
            case 0x132A74u: goto label_132a74;
            case 0x132A78u: goto label_132a78;
            case 0x132A7Cu: goto label_132a7c;
            case 0x132A80u: goto label_132a80;
            case 0x132A84u: goto label_132a84;
            case 0x132A88u: goto label_132a88;
            case 0x132A8Cu: goto label_132a8c;
            case 0x132A90u: goto label_132a90;
            case 0x132A94u: goto label_132a94;
            case 0x132A98u: goto label_132a98;
            case 0x132A9Cu: goto label_132a9c;
            case 0x132AA0u: goto label_132aa0;
            case 0x132AA4u: goto label_132aa4;
            case 0x132AA8u: goto label_132aa8;
            case 0x132AACu: goto label_132aac;
            case 0x132AB0u: goto label_132ab0;
            case 0x132AB4u: goto label_132ab4;
            case 0x132AB8u: goto label_132ab8;
            case 0x132ABCu: goto label_132abc;
            case 0x132AC0u: goto label_132ac0;
            case 0x132AC4u: goto label_132ac4;
            case 0x132AC8u: goto label_132ac8;
            case 0x132ACCu: goto label_132acc;
            case 0x132AD0u: goto label_132ad0;
            case 0x132AD4u: goto label_132ad4;
            case 0x132AD8u: goto label_132ad8;
            case 0x132ADCu: goto label_132adc;
            case 0x132AE0u: goto label_132ae0;
            case 0x132AE4u: goto label_132ae4;
            case 0x132AE8u: goto label_132ae8;
            case 0x132AECu: goto label_132aec;
            case 0x132AF0u: goto label_132af0;
            case 0x132AF4u: goto label_132af4;
            case 0x132AF8u: goto label_132af8;
            case 0x132AFCu: goto label_132afc;
            case 0x132B00u: goto label_132b00;
            case 0x132B04u: goto label_132b04;
            case 0x132B08u: goto label_132b08;
            case 0x132B0Cu: goto label_132b0c;
            case 0x132B10u: goto label_132b10;
            case 0x132B14u: goto label_132b14;
            case 0x132B18u: goto label_132b18;
            case 0x132B1Cu: goto label_132b1c;
            case 0x132B20u: goto label_132b20;
            case 0x132B24u: goto label_132b24;
            case 0x132B28u: goto label_132b28;
            case 0x132B2Cu: goto label_132b2c;
            case 0x132B30u: goto label_132b30;
            case 0x132B34u: goto label_132b34;
            case 0x132B38u: goto label_132b38;
            case 0x132B3Cu: goto label_132b3c;
            case 0x132B40u: goto label_132b40;
            case 0x132B44u: goto label_132b44;
            case 0x132B48u: goto label_132b48;
            case 0x132B4Cu: goto label_132b4c;
            case 0x132B50u: goto label_132b50;
            case 0x132B54u: goto label_132b54;
            case 0x132B58u: goto label_132b58;
            case 0x132B5Cu: goto label_132b5c;
            case 0x132B60u: goto label_132b60;
            case 0x132B64u: goto label_132b64;
            case 0x132B68u: goto label_132b68;
            case 0x132B6Cu: goto label_132b6c;
            case 0x132B70u: goto label_132b70;
            case 0x132B74u: goto label_132b74;
            case 0x132B78u: goto label_132b78;
            case 0x132B7Cu: goto label_132b7c;
            case 0x132B80u: goto label_132b80;
            case 0x132B84u: goto label_132b84;
            case 0x132B88u: goto label_132b88;
            case 0x132B8Cu: goto label_132b8c;
            case 0x132B90u: goto label_132b90;
            case 0x132B94u: goto label_132b94;
            case 0x132B98u: goto label_132b98;
            case 0x132B9Cu: goto label_132b9c;
            case 0x132BA0u: goto label_132ba0;
            case 0x132BA4u: goto label_132ba4;
            case 0x132BA8u: goto label_132ba8;
            case 0x132BACu: goto label_132bac;
            case 0x132BB0u: goto label_132bb0;
            case 0x132BB4u: goto label_132bb4;
            case 0x132BB8u: goto label_132bb8;
            case 0x132BBCu: goto label_132bbc;
            case 0x132BC0u: goto label_132bc0;
            case 0x132BC4u: goto label_132bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132BC4u;
label_132bc4:
    // 0x132bc4: 0x0
    ctx->pc = 0x132bc4u;
    // NOP
}
