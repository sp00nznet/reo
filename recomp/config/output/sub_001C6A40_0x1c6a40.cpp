#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C6A40
// Address: 0x1c6a40 - 0x1c6c90
void sub_001C6A40_0x1c6a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c6a40u;

label_1c6a40:
    // 0x1c6a40: 0x27bdfff0
    ctx->pc = 0x1c6a40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c6a44:
    // 0x1c6a44: 0xffbf0000
    ctx->pc = 0x1c6a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6a48:
    // 0x1c6a48: 0xc072214
label_1c6a4c:
    if (ctx->pc == 0x1C6A4Cu) {
        ctx->pc = 0x1C6A50u;
        goto label_1c6a50;
    }
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C8850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8850_0x1c8850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A50u; }
    }
    if (ctx->pc != 0x1C6A50u) { return; }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0x3c010033
    ctx->pc = 0x1c6a50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6a54:
    // 0x1c6a54: 0xe420506c
    ctx->pc = 0x1c6a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20588), bits); }
label_1c6a58:
    // 0x1c6a58: 0x3c010033
    ctx->pc = 0x1c6a58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6a5c:
    // 0x1c6a5c: 0xc4225068
    ctx->pc = 0x1c6a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6a60:
    // 0x1c6a60: 0x3c010033
    ctx->pc = 0x1c6a60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6a64:
    // 0x1c6a64: 0xc4215060
    ctx->pc = 0x1c6a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6a68:
    // 0x1c6a68: 0x46020081
    ctx->pc = 0x1c6a68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1c6a6c:
    // 0x1c6a6c: 0x3c010033
    ctx->pc = 0x1c6a6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6a70:
    // 0x1c6a70: 0xe4205068
    ctx->pc = 0x1c6a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20584), bits); }
label_1c6a74:
    // 0x1c6a74: 0x46001006
    ctx->pc = 0x1c6a74u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_1c6a78:
    // 0x1c6a78: 0x3c010033
    ctx->pc = 0x1c6a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6a7c:
    // 0x1c6a7c: 0x46000800
    ctx->pc = 0x1c6a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c6a80:
    // 0x1c6a80: 0xe4225064
    ctx->pc = 0x1c6a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20580), bits); }
label_1c6a84:
    // 0x1c6a84: 0x3c010033
    ctx->pc = 0x1c6a84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6a88:
    // 0x1c6a88: 0xc071db8
label_1c6a8c:
    if (ctx->pc == 0x1C6A8Cu) {
        ctx->pc = 0x1C6A8Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20576), bits); }
        ctx->pc = 0x1C6A90u;
        goto label_1c6a90;
    }
    ctx->pc = 0x1C6A88u;
    SET_GPR_U32(ctx, 31, 0x1C6A90u);
    ctx->pc = 0x1C6A8Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20576), bits); }
    ctx->pc = 0x1C76E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C76E0_0x1c76e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A90u; }
    }
    if (ctx->pc != 0x1C6A90u) { return; }
    ctx->pc = 0x1C6A90u;
label_1c6a90:
    // 0x1c6a90: 0x3c010033
    ctx->pc = 0x1c6a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6a94:
    // 0x1c6a94: 0x3c020023
    ctx->pc = 0x1c6a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1c6a98:
    // 0x1c6a98: 0x90235056
    ctx->pc = 0x1c6a98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20566)));
label_1c6a9c:
    // 0x1c6a9c: 0x24425f70
    ctx->pc = 0x1c6a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 24432));
label_1c6aa0:
    // 0x1c6aa0: 0x31880
    ctx->pc = 0x1c6aa0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1c6aa4:
    // 0x1c6aa4: 0x431021
    ctx->pc = 0x1c6aa4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c6aa8:
    // 0x1c6aa8: 0x8c420000
    ctx->pc = 0x1c6aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c6aac:
    // 0x1c6aac: 0x40f809
label_1c6ab0:
    if (ctx->pc == 0x1C6AB0u) {
        ctx->pc = 0x1C6AB4u;
        goto label_1c6ab4;
    }
    ctx->pc = 0x1C6AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C6AB4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6A40u: goto label_1c6a40;
            case 0x1C6A44u: goto label_1c6a44;
            case 0x1C6A48u: goto label_1c6a48;
            case 0x1C6A4Cu: goto label_1c6a4c;
            case 0x1C6A50u: goto label_1c6a50;
            case 0x1C6A54u: goto label_1c6a54;
            case 0x1C6A58u: goto label_1c6a58;
            case 0x1C6A5Cu: goto label_1c6a5c;
            case 0x1C6A60u: goto label_1c6a60;
            case 0x1C6A64u: goto label_1c6a64;
            case 0x1C6A68u: goto label_1c6a68;
            case 0x1C6A6Cu: goto label_1c6a6c;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6A74u: goto label_1c6a74;
            case 0x1C6A78u: goto label_1c6a78;
            case 0x1C6A7Cu: goto label_1c6a7c;
            case 0x1C6A80u: goto label_1c6a80;
            case 0x1C6A84u: goto label_1c6a84;
            case 0x1C6A88u: goto label_1c6a88;
            case 0x1C6A8Cu: goto label_1c6a8c;
            case 0x1C6A90u: goto label_1c6a90;
            case 0x1C6A94u: goto label_1c6a94;
            case 0x1C6A98u: goto label_1c6a98;
            case 0x1C6A9Cu: goto label_1c6a9c;
            case 0x1C6AA0u: goto label_1c6aa0;
            case 0x1C6AA4u: goto label_1c6aa4;
            case 0x1C6AA8u: goto label_1c6aa8;
            case 0x1C6AACu: goto label_1c6aac;
            case 0x1C6AB0u: goto label_1c6ab0;
            case 0x1C6AB4u: goto label_1c6ab4;
            case 0x1C6AB8u: goto label_1c6ab8;
            case 0x1C6ABCu: goto label_1c6abc;
            case 0x1C6AC0u: goto label_1c6ac0;
            case 0x1C6AC4u: goto label_1c6ac4;
            case 0x1C6AC8u: goto label_1c6ac8;
            case 0x1C6ACCu: goto label_1c6acc;
            case 0x1C6AD0u: goto label_1c6ad0;
            case 0x1C6AD4u: goto label_1c6ad4;
            case 0x1C6AD8u: goto label_1c6ad8;
            case 0x1C6ADCu: goto label_1c6adc;
            case 0x1C6AE0u: goto label_1c6ae0;
            case 0x1C6AE4u: goto label_1c6ae4;
            case 0x1C6AE8u: goto label_1c6ae8;
            case 0x1C6AECu: goto label_1c6aec;
            case 0x1C6AF0u: goto label_1c6af0;
            case 0x1C6AF4u: goto label_1c6af4;
            case 0x1C6AF8u: goto label_1c6af8;
            case 0x1C6AFCu: goto label_1c6afc;
            case 0x1C6B00u: goto label_1c6b00;
            case 0x1C6B04u: goto label_1c6b04;
            case 0x1C6B08u: goto label_1c6b08;
            case 0x1C6B0Cu: goto label_1c6b0c;
            case 0x1C6B10u: goto label_1c6b10;
            case 0x1C6B14u: goto label_1c6b14;
            case 0x1C6B18u: goto label_1c6b18;
            case 0x1C6B1Cu: goto label_1c6b1c;
            case 0x1C6B20u: goto label_1c6b20;
            case 0x1C6B24u: goto label_1c6b24;
            case 0x1C6B28u: goto label_1c6b28;
            case 0x1C6B2Cu: goto label_1c6b2c;
            case 0x1C6B30u: goto label_1c6b30;
            case 0x1C6B34u: goto label_1c6b34;
            case 0x1C6B38u: goto label_1c6b38;
            case 0x1C6B3Cu: goto label_1c6b3c;
            case 0x1C6B40u: goto label_1c6b40;
            case 0x1C6B44u: goto label_1c6b44;
            case 0x1C6B48u: goto label_1c6b48;
            case 0x1C6B4Cu: goto label_1c6b4c;
            case 0x1C6B50u: goto label_1c6b50;
            case 0x1C6B54u: goto label_1c6b54;
            case 0x1C6B58u: goto label_1c6b58;
            case 0x1C6B5Cu: goto label_1c6b5c;
            case 0x1C6B60u: goto label_1c6b60;
            case 0x1C6B64u: goto label_1c6b64;
            case 0x1C6B68u: goto label_1c6b68;
            case 0x1C6B6Cu: goto label_1c6b6c;
            case 0x1C6B70u: goto label_1c6b70;
            case 0x1C6B74u: goto label_1c6b74;
            case 0x1C6B78u: goto label_1c6b78;
            case 0x1C6B7Cu: goto label_1c6b7c;
            case 0x1C6B80u: goto label_1c6b80;
            case 0x1C6B84u: goto label_1c6b84;
            case 0x1C6B88u: goto label_1c6b88;
            case 0x1C6B8Cu: goto label_1c6b8c;
            case 0x1C6B90u: goto label_1c6b90;
            case 0x1C6B94u: goto label_1c6b94;
            case 0x1C6B98u: goto label_1c6b98;
            case 0x1C6B9Cu: goto label_1c6b9c;
            case 0x1C6BA0u: goto label_1c6ba0;
            case 0x1C6BA4u: goto label_1c6ba4;
            case 0x1C6BA8u: goto label_1c6ba8;
            case 0x1C6BACu: goto label_1c6bac;
            case 0x1C6BB0u: goto label_1c6bb0;
            case 0x1C6BB4u: goto label_1c6bb4;
            case 0x1C6BB8u: goto label_1c6bb8;
            case 0x1C6BBCu: goto label_1c6bbc;
            case 0x1C6BC0u: goto label_1c6bc0;
            case 0x1C6BC4u: goto label_1c6bc4;
            case 0x1C6BC8u: goto label_1c6bc8;
            case 0x1C6BCCu: goto label_1c6bcc;
            case 0x1C6BD0u: goto label_1c6bd0;
            case 0x1C6BD4u: goto label_1c6bd4;
            case 0x1C6BD8u: goto label_1c6bd8;
            case 0x1C6BDCu: goto label_1c6bdc;
            case 0x1C6BE0u: goto label_1c6be0;
            case 0x1C6BE4u: goto label_1c6be4;
            case 0x1C6BE8u: goto label_1c6be8;
            case 0x1C6BECu: goto label_1c6bec;
            case 0x1C6BF0u: goto label_1c6bf0;
            case 0x1C6BF4u: goto label_1c6bf4;
            case 0x1C6BF8u: goto label_1c6bf8;
            case 0x1C6BFCu: goto label_1c6bfc;
            case 0x1C6C00u: goto label_1c6c00;
            case 0x1C6C04u: goto label_1c6c04;
            case 0x1C6C08u: goto label_1c6c08;
            case 0x1C6C0Cu: goto label_1c6c0c;
            case 0x1C6C10u: goto label_1c6c10;
            case 0x1C6C14u: goto label_1c6c14;
            case 0x1C6C18u: goto label_1c6c18;
            case 0x1C6C1Cu: goto label_1c6c1c;
            case 0x1C6C20u: goto label_1c6c20;
            case 0x1C6C24u: goto label_1c6c24;
            case 0x1C6C28u: goto label_1c6c28;
            case 0x1C6C2Cu: goto label_1c6c2c;
            case 0x1C6C30u: goto label_1c6c30;
            case 0x1C6C34u: goto label_1c6c34;
            case 0x1C6C38u: goto label_1c6c38;
            case 0x1C6C3Cu: goto label_1c6c3c;
            case 0x1C6C40u: goto label_1c6c40;
            case 0x1C6C44u: goto label_1c6c44;
            case 0x1C6C48u: goto label_1c6c48;
            case 0x1C6C4Cu: goto label_1c6c4c;
            case 0x1C6C50u: goto label_1c6c50;
            case 0x1C6C54u: goto label_1c6c54;
            case 0x1C6C58u: goto label_1c6c58;
            case 0x1C6C5Cu: goto label_1c6c5c;
            case 0x1C6C60u: goto label_1c6c60;
            case 0x1C6C64u: goto label_1c6c64;
            case 0x1C6C68u: goto label_1c6c68;
            case 0x1C6C6Cu: goto label_1c6c6c;
            case 0x1C6C70u: goto label_1c6c70;
            case 0x1C6C74u: goto label_1c6c74;
            case 0x1C6C78u: goto label_1c6c78;
            case 0x1C6C7Cu: goto label_1c6c7c;
            case 0x1C6C80u: goto label_1c6c80;
            case 0x1C6C84u: goto label_1c6c84;
            case 0x1C6C88u: goto label_1c6c88;
            case 0x1C6C8Cu: goto label_1c6c8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AB4u; }
            if (ctx->pc != 0x1C6AB4u) { return; }
        }
    }
    ctx->pc = 0x1C6AB4u;
label_1c6ab4:
    // 0x1c6ab4: 0xc071d44
label_1c6ab8:
    if (ctx->pc == 0x1C6AB8u) {
        ctx->pc = 0x1C6ABCu;
        goto label_1c6abc;
    }
    ctx->pc = 0x1C6AB4u;
    SET_GPR_U32(ctx, 31, 0x1C6ABCu);
    ctx->pc = 0x1C7510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7510_0x1c7510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6ABCu; }
    }
    if (ctx->pc != 0x1C6ABCu) { return; }
    ctx->pc = 0x1C6ABCu;
label_1c6abc:
    // 0x1c6abc: 0x3c010033
    ctx->pc = 0x1c6abcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6ac0:
    // 0x1c6ac0: 0x3c023f80
    ctx->pc = 0x1c6ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_1c6ac4:
    // 0x1c6ac4: 0xc4225078
    ctx->pc = 0x1c6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6ac8:
    // 0x1c6ac8: 0x44820000
    ctx->pc = 0x1c6ac8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_1c6acc:
    // 0x1c6acc: 0x3c010033
    ctx->pc = 0x1c6accu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6ad0:
    // 0x1c6ad0: 0xc4215064
    ctx->pc = 0x1c6ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6ad4:
    // 0x1c6ad4: 0x46011040
    ctx->pc = 0x1c6ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1c6ad8:
    // 0x1c6ad8: 0x3c010033
    ctx->pc = 0x1c6ad8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6adc:
    // 0x1c6adc: 0x46000836
    ctx->pc = 0x1c6adcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6ae0:
    // 0x1c6ae0: 0x45010010
label_1c6ae4:
    if (ctx->pc == 0x1C6AE4u) {
        ctx->pc = 0x1C6AE4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20600), bits); }
        ctx->pc = 0x1C6AE8u;
        goto label_1c6ae8;
    }
    ctx->pc = 0x1C6AE0u;
    {
        const bool branch_taken_0x1c6ae0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6AE4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20600), bits); }
        if (branch_taken_0x1c6ae0) {
            ctx->pc = 0x1C6B24u;
            goto label_1c6b24;
        }
    }
    ctx->pc = 0x1C6AE8u;
label_1c6ae8:
    // 0x1c6ae8: 0x3c010033
    ctx->pc = 0x1c6ae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6aec:
    // 0x1c6aec: 0x9423508e
    ctx->pc = 0x1c6aecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20622)));
label_1c6af0:
    // 0x1c6af0: 0x46000801
    ctx->pc = 0x1c6af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c6af4:
    // 0x1c6af4: 0x3c010033
    ctx->pc = 0x1c6af4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6af8:
    // 0x1c6af8: 0x94225096
    ctx->pc = 0x1c6af8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20630)));
label_1c6afc:
    // 0x1c6afc: 0x3c010033
    ctx->pc = 0x1c6afcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b00:
    // 0x1c6b00: 0xe4205078
    ctx->pc = 0x1c6b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20600), bits); }
label_1c6b04:
    // 0x1c6b04: 0x3c010033
    ctx->pc = 0x1c6b04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b08:
    // 0x1c6b08: 0xa423508c
    ctx->pc = 0x1c6b08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20620), (uint16_t)GPR_U32(ctx, 3));
label_1c6b0c:
    // 0x1c6b0c: 0x3c010033
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b10:
    // 0x1c6b10: 0xa4225094
    ctx->pc = 0x1c6b10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20628), (uint16_t)GPR_U32(ctx, 2));
label_1c6b14:
    // 0x1c6b14: 0x3c010033
    ctx->pc = 0x1c6b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b18:
    // 0x1c6b18: 0xa420508e
    ctx->pc = 0x1c6b18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20622), (uint16_t)GPR_U32(ctx, 0));
label_1c6b1c:
    // 0x1c6b1c: 0x3c010033
    ctx->pc = 0x1c6b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b20:
    // 0x1c6b20: 0xa4205096
    ctx->pc = 0x1c6b20u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20630), (uint16_t)GPR_U32(ctx, 0));
label_1c6b24:
    // 0x1c6b24: 0x3c010033
    ctx->pc = 0x1c6b24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b28:
    // 0x1c6b28: 0xc4225074
    ctx->pc = 0x1c6b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6b2c:
    // 0x1c6b2c: 0x3c010033
    ctx->pc = 0x1c6b2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b30:
    // 0x1c6b30: 0xc4215064
    ctx->pc = 0x1c6b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6b34:
    // 0x1c6b34: 0x3c010023
    ctx->pc = 0x1c6b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1c6b38:
    // 0x1c6b38: 0xc4205f68
    ctx->pc = 0x1c6b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 24424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6b3c:
    // 0x1c6b3c: 0x46011040
    ctx->pc = 0x1c6b3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1c6b40:
    // 0x1c6b40: 0x46000836
    ctx->pc = 0x1c6b40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6b44:
    // 0x1c6b44: 0x3c010033
    ctx->pc = 0x1c6b44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b48:
    // 0x1c6b48: 0x45010014
label_1c6b4c:
    if (ctx->pc == 0x1C6B4Cu) {
        ctx->pc = 0x1C6B4Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20596), bits); }
        ctx->pc = 0x1C6B50u;
        goto label_1c6b50;
    }
    ctx->pc = 0x1C6B48u;
    {
        const bool branch_taken_0x1c6b48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6B4Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 20596), bits); }
        if (branch_taken_0x1c6b48) {
            ctx->pc = 0x1C6B9Cu;
            goto label_1c6b9c;
        }
    }
    ctx->pc = 0x1C6B50u;
label_1c6b50:
    // 0x1c6b50: 0x3c010033
    ctx->pc = 0x1c6b50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b54:
    // 0x1c6b54: 0x90255056
    ctx->pc = 0x1c6b54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20566)));
label_1c6b58:
    // 0x1c6b58: 0x3c010033
    ctx->pc = 0x1c6b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b5c:
    // 0x1c6b5c: 0x90265057
    ctx->pc = 0x1c6b5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20567)));
label_1c6b60:
    // 0x1c6b60: 0xc071eb0
label_1c6b64:
    if (ctx->pc == 0x1C6B64u) {
        ctx->pc = 0x1C6B64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1C6B68u;
        goto label_1c6b68;
    }
    ctx->pc = 0x1C6B60u;
    SET_GPR_U32(ctx, 31, 0x1C6B68u);
    ctx->pc = 0x1C6B64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1C7AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7AC0_0x1c7ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B68u; }
    }
    if (ctx->pc != 0x1C6B68u) { return; }
    ctx->pc = 0x1C6B68u;
label_1c6b68:
    // 0x1c6b68: 0x3c010033
    ctx->pc = 0x1c6b68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b6c:
    // 0x1c6b6c: 0x24020012
    ctx->pc = 0x1c6b6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
label_1c6b70:
    // 0x1c6b70: 0x942351b8
    ctx->pc = 0x1c6b70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20920)));
label_1c6b74:
    // 0x1c6b74: 0x3c010033
    ctx->pc = 0x1c6b74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b78:
    // 0x1c6b78: 0xac2251b0
    ctx->pc = 0x1c6b78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 2));
label_1c6b7c:
    // 0x1c6b7c: 0x3c010023
    ctx->pc = 0x1c6b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1c6b80:
    // 0x1c6b80: 0x8c225f58
    ctx->pc = 0x1c6b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 24408)));
label_1c6b84:
    // 0x1c6b84: 0x62102a
    ctx->pc = 0x1c6b84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_1c6b88:
    // 0x1c6b88: 0x14400004
label_1c6b8c:
    if (ctx->pc == 0x1C6B8Cu) {
        ctx->pc = 0x1C6B90u;
        goto label_1c6b90;
    }
    ctx->pc = 0x1C6B88u;
    {
        const bool branch_taken_0x1c6b88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6b88) {
            ctx->pc = 0x1C6B9Cu;
            goto label_1c6b9c;
        }
    }
    ctx->pc = 0x1C6B90u;
label_1c6b90:
    // 0x1c6b90: 0x24020010
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_1c6b94:
    // 0x1c6b94: 0x3c010033
    ctx->pc = 0x1c6b94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6b98:
    // 0x1c6b98: 0xac2251b0
    ctx->pc = 0x1c6b98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20912), GPR_U32(ctx, 2));
label_1c6b9c:
    // 0x1c6b9c: 0x3c010033
    ctx->pc = 0x1c6b9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6ba0:
    // 0x1c6ba0: 0xdfbf0000
    ctx->pc = 0x1c6ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6ba4:
    // 0x1c6ba4: 0x90225056
    ctx->pc = 0x1c6ba4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20566)));
label_1c6ba8:
    // 0x1c6ba8: 0x38420007
    ctx->pc = 0x1c6ba8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 7));
label_1c6bac:
    // 0x1c6bac: 0x2c420001
    ctx->pc = 0x1c6bacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1c6bb0:
    // 0x1c6bb0: 0x21023
    ctx->pc = 0x1c6bb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1c6bb4:
    // 0x1c6bb4: 0x3e00008
label_1c6bb8:
    if (ctx->pc == 0x1C6BB8u) {
        ctx->pc = 0x1C6BB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C6BBCu;
        goto label_1c6bbc;
    }
    ctx->pc = 0x1C6BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6A40u: goto label_1c6a40;
            case 0x1C6A44u: goto label_1c6a44;
            case 0x1C6A48u: goto label_1c6a48;
            case 0x1C6A4Cu: goto label_1c6a4c;
            case 0x1C6A50u: goto label_1c6a50;
            case 0x1C6A54u: goto label_1c6a54;
            case 0x1C6A58u: goto label_1c6a58;
            case 0x1C6A5Cu: goto label_1c6a5c;
            case 0x1C6A60u: goto label_1c6a60;
            case 0x1C6A64u: goto label_1c6a64;
            case 0x1C6A68u: goto label_1c6a68;
            case 0x1C6A6Cu: goto label_1c6a6c;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6A74u: goto label_1c6a74;
            case 0x1C6A78u: goto label_1c6a78;
            case 0x1C6A7Cu: goto label_1c6a7c;
            case 0x1C6A80u: goto label_1c6a80;
            case 0x1C6A84u: goto label_1c6a84;
            case 0x1C6A88u: goto label_1c6a88;
            case 0x1C6A8Cu: goto label_1c6a8c;
            case 0x1C6A90u: goto label_1c6a90;
            case 0x1C6A94u: goto label_1c6a94;
            case 0x1C6A98u: goto label_1c6a98;
            case 0x1C6A9Cu: goto label_1c6a9c;
            case 0x1C6AA0u: goto label_1c6aa0;
            case 0x1C6AA4u: goto label_1c6aa4;
            case 0x1C6AA8u: goto label_1c6aa8;
            case 0x1C6AACu: goto label_1c6aac;
            case 0x1C6AB0u: goto label_1c6ab0;
            case 0x1C6AB4u: goto label_1c6ab4;
            case 0x1C6AB8u: goto label_1c6ab8;
            case 0x1C6ABCu: goto label_1c6abc;
            case 0x1C6AC0u: goto label_1c6ac0;
            case 0x1C6AC4u: goto label_1c6ac4;
            case 0x1C6AC8u: goto label_1c6ac8;
            case 0x1C6ACCu: goto label_1c6acc;
            case 0x1C6AD0u: goto label_1c6ad0;
            case 0x1C6AD4u: goto label_1c6ad4;
            case 0x1C6AD8u: goto label_1c6ad8;
            case 0x1C6ADCu: goto label_1c6adc;
            case 0x1C6AE0u: goto label_1c6ae0;
            case 0x1C6AE4u: goto label_1c6ae4;
            case 0x1C6AE8u: goto label_1c6ae8;
            case 0x1C6AECu: goto label_1c6aec;
            case 0x1C6AF0u: goto label_1c6af0;
            case 0x1C6AF4u: goto label_1c6af4;
            case 0x1C6AF8u: goto label_1c6af8;
            case 0x1C6AFCu: goto label_1c6afc;
            case 0x1C6B00u: goto label_1c6b00;
            case 0x1C6B04u: goto label_1c6b04;
            case 0x1C6B08u: goto label_1c6b08;
            case 0x1C6B0Cu: goto label_1c6b0c;
            case 0x1C6B10u: goto label_1c6b10;
            case 0x1C6B14u: goto label_1c6b14;
            case 0x1C6B18u: goto label_1c6b18;
            case 0x1C6B1Cu: goto label_1c6b1c;
            case 0x1C6B20u: goto label_1c6b20;
            case 0x1C6B24u: goto label_1c6b24;
            case 0x1C6B28u: goto label_1c6b28;
            case 0x1C6B2Cu: goto label_1c6b2c;
            case 0x1C6B30u: goto label_1c6b30;
            case 0x1C6B34u: goto label_1c6b34;
            case 0x1C6B38u: goto label_1c6b38;
            case 0x1C6B3Cu: goto label_1c6b3c;
            case 0x1C6B40u: goto label_1c6b40;
            case 0x1C6B44u: goto label_1c6b44;
            case 0x1C6B48u: goto label_1c6b48;
            case 0x1C6B4Cu: goto label_1c6b4c;
            case 0x1C6B50u: goto label_1c6b50;
            case 0x1C6B54u: goto label_1c6b54;
            case 0x1C6B58u: goto label_1c6b58;
            case 0x1C6B5Cu: goto label_1c6b5c;
            case 0x1C6B60u: goto label_1c6b60;
            case 0x1C6B64u: goto label_1c6b64;
            case 0x1C6B68u: goto label_1c6b68;
            case 0x1C6B6Cu: goto label_1c6b6c;
            case 0x1C6B70u: goto label_1c6b70;
            case 0x1C6B74u: goto label_1c6b74;
            case 0x1C6B78u: goto label_1c6b78;
            case 0x1C6B7Cu: goto label_1c6b7c;
            case 0x1C6B80u: goto label_1c6b80;
            case 0x1C6B84u: goto label_1c6b84;
            case 0x1C6B88u: goto label_1c6b88;
            case 0x1C6B8Cu: goto label_1c6b8c;
            case 0x1C6B90u: goto label_1c6b90;
            case 0x1C6B94u: goto label_1c6b94;
            case 0x1C6B98u: goto label_1c6b98;
            case 0x1C6B9Cu: goto label_1c6b9c;
            case 0x1C6BA0u: goto label_1c6ba0;
            case 0x1C6BA4u: goto label_1c6ba4;
            case 0x1C6BA8u: goto label_1c6ba8;
            case 0x1C6BACu: goto label_1c6bac;
            case 0x1C6BB0u: goto label_1c6bb0;
            case 0x1C6BB4u: goto label_1c6bb4;
            case 0x1C6BB8u: goto label_1c6bb8;
            case 0x1C6BBCu: goto label_1c6bbc;
            case 0x1C6BC0u: goto label_1c6bc0;
            case 0x1C6BC4u: goto label_1c6bc4;
            case 0x1C6BC8u: goto label_1c6bc8;
            case 0x1C6BCCu: goto label_1c6bcc;
            case 0x1C6BD0u: goto label_1c6bd0;
            case 0x1C6BD4u: goto label_1c6bd4;
            case 0x1C6BD8u: goto label_1c6bd8;
            case 0x1C6BDCu: goto label_1c6bdc;
            case 0x1C6BE0u: goto label_1c6be0;
            case 0x1C6BE4u: goto label_1c6be4;
            case 0x1C6BE8u: goto label_1c6be8;
            case 0x1C6BECu: goto label_1c6bec;
            case 0x1C6BF0u: goto label_1c6bf0;
            case 0x1C6BF4u: goto label_1c6bf4;
            case 0x1C6BF8u: goto label_1c6bf8;
            case 0x1C6BFCu: goto label_1c6bfc;
            case 0x1C6C00u: goto label_1c6c00;
            case 0x1C6C04u: goto label_1c6c04;
            case 0x1C6C08u: goto label_1c6c08;
            case 0x1C6C0Cu: goto label_1c6c0c;
            case 0x1C6C10u: goto label_1c6c10;
            case 0x1C6C14u: goto label_1c6c14;
            case 0x1C6C18u: goto label_1c6c18;
            case 0x1C6C1Cu: goto label_1c6c1c;
            case 0x1C6C20u: goto label_1c6c20;
            case 0x1C6C24u: goto label_1c6c24;
            case 0x1C6C28u: goto label_1c6c28;
            case 0x1C6C2Cu: goto label_1c6c2c;
            case 0x1C6C30u: goto label_1c6c30;
            case 0x1C6C34u: goto label_1c6c34;
            case 0x1C6C38u: goto label_1c6c38;
            case 0x1C6C3Cu: goto label_1c6c3c;
            case 0x1C6C40u: goto label_1c6c40;
            case 0x1C6C44u: goto label_1c6c44;
            case 0x1C6C48u: goto label_1c6c48;
            case 0x1C6C4Cu: goto label_1c6c4c;
            case 0x1C6C50u: goto label_1c6c50;
            case 0x1C6C54u: goto label_1c6c54;
            case 0x1C6C58u: goto label_1c6c58;
            case 0x1C6C5Cu: goto label_1c6c5c;
            case 0x1C6C60u: goto label_1c6c60;
            case 0x1C6C64u: goto label_1c6c64;
            case 0x1C6C68u: goto label_1c6c68;
            case 0x1C6C6Cu: goto label_1c6c6c;
            case 0x1C6C70u: goto label_1c6c70;
            case 0x1C6C74u: goto label_1c6c74;
            case 0x1C6C78u: goto label_1c6c78;
            case 0x1C6C7Cu: goto label_1c6c7c;
            case 0x1C6C80u: goto label_1c6c80;
            case 0x1C6C84u: goto label_1c6c84;
            case 0x1C6C88u: goto label_1c6c88;
            case 0x1C6C8Cu: goto label_1c6c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6BBCu;
label_1c6bbc:
    // 0x1c6bbc: 0x0
    ctx->pc = 0x1c6bbcu;
    // NOP
label_1c6bc0:
    // 0x1c6bc0: 0x8071ea0
label_1c6bc4:
    if (ctx->pc == 0x1C6BC4u) {
        ctx->pc = 0x1C6BC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C6BC8u;
        goto label_1c6bc8;
    }
    ctx->pc = 0x1C6BC0u;
    ctx->pc = 0x1C6BC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C7A80u;
    sub_001C7A80_0x1c7a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BC8u;
label_1c6bc8:
    // 0x1c6bc8: 0x0
    ctx->pc = 0x1c6bc8u;
    // NOP
label_1c6bcc:
    // 0x1c6bcc: 0x0
    ctx->pc = 0x1c6bccu;
    // NOP
label_1c6bd0:
    // 0x1c6bd0: 0x8071ea0
label_1c6bd4:
    if (ctx->pc == 0x1C6BD4u) {
        ctx->pc = 0x1C6BD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C6BD8u;
        goto label_1c6bd8;
    }
    ctx->pc = 0x1C6BD0u;
    ctx->pc = 0x1C6BD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1C7A80u;
    sub_001C7A80_0x1c7a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BD8u;
label_1c6bd8:
    // 0x1c6bd8: 0x0
    ctx->pc = 0x1c6bd8u;
    // NOP
label_1c6bdc:
    // 0x1c6bdc: 0x0
    ctx->pc = 0x1c6bdcu;
    // NOP
label_1c6be0:
    // 0x1c6be0: 0x8071ea0
label_1c6be4:
    if (ctx->pc == 0x1C6BE4u) {
        ctx->pc = 0x1C6BE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C6BE8u;
        goto label_1c6be8;
    }
    ctx->pc = 0x1C6BE0u;
    ctx->pc = 0x1C6BE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1C7A80u;
    sub_001C7A80_0x1c7a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BE8u;
label_1c6be8:
    // 0x1c6be8: 0x0
    ctx->pc = 0x1c6be8u;
    // NOP
label_1c6bec:
    // 0x1c6bec: 0x0
    ctx->pc = 0x1c6becu;
    // NOP
label_1c6bf0:
    // 0x1c6bf0: 0x8071ea0
label_1c6bf4:
    if (ctx->pc == 0x1C6BF4u) {
        ctx->pc = 0x1C6BF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1C6BF8u;
        goto label_1c6bf8;
    }
    ctx->pc = 0x1C6BF0u;
    ctx->pc = 0x1C6BF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1C7A80u;
    sub_001C7A80_0x1c7a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BF8u;
label_1c6bf8:
    // 0x1c6bf8: 0x0
    ctx->pc = 0x1c6bf8u;
    // NOP
label_1c6bfc:
    // 0x1c6bfc: 0x0
    ctx->pc = 0x1c6bfcu;
    // NOP
label_1c6c00:
    // 0x1c6c00: 0x3c010033
    ctx->pc = 0x1c6c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6c04:
    // 0x1c6c04: 0x24040005
    ctx->pc = 0x1c6c04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
label_1c6c08:
    // 0x1c6c08: 0x8071ea0
label_1c6c0c:
    if (ctx->pc == 0x1C6C0Cu) {
        ctx->pc = 0x1C6C0Cu;
        WRITE8(ADD32(GPR_U32(ctx, 1), 20897), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C6C10u;
        goto label_1c6c10;
    }
    ctx->pc = 0x1C6C08u;
    ctx->pc = 0x1C6C0Cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20897), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1C7A80u;
    sub_001C7A80_0x1c7a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6C10u;
label_1c6c10:
    // 0x1c6c10: 0x27bdfff0
    ctx->pc = 0x1c6c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c6c14:
    // 0x1c6c14: 0x3c010033
    ctx->pc = 0x1c6c14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
label_1c6c18:
    // 0x1c6c18: 0xffbf0000
    ctx->pc = 0x1c6c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6c1c:
    // 0x1c6c1c: 0xc4215074
    ctx->pc = 0x1c6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 20596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6c20:
    // 0x1c6c20: 0x3c010025
    ctx->pc = 0x1c6c20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)37 << 16));
label_1c6c24:
    // 0x1c6c24: 0xc4202d70
    ctx->pc = 0x1c6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6c28:
    // 0x1c6c28: 0x46000834
    ctx->pc = 0x1c6c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6c2c:
    // 0x1c6c2c: 0x45010006
label_1c6c30:
    if (ctx->pc == 0x1C6C30u) {
        ctx->pc = 0x1C6C34u;
        goto label_1c6c34;
    }
    ctx->pc = 0x1C6C2Cu;
    {
        const bool branch_taken_0x1c6c2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6c2c) {
            ctx->pc = 0x1C6C48u;
            goto label_1c6c48;
        }
    }
    ctx->pc = 0x1C6C34u;
label_1c6c34:
    // 0x1c6c34: 0xc071b9c
label_1c6c38:
    if (ctx->pc == 0x1C6C38u) {
        ctx->pc = 0x1C6C3Cu;
        goto label_1c6c3c;
    }
    ctx->pc = 0x1C6C34u;
    SET_GPR_U32(ctx, 31, 0x1C6C3Cu);
    ctx->pc = 0x1C6E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6E70_0x1c6e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C3Cu; }
    }
    if (ctx->pc != 0x1C6C3Cu) { return; }
    ctx->pc = 0x1C6C3Cu;
label_1c6c3c:
    // 0x1c6c3c: 0x10400002
label_1c6c40:
    if (ctx->pc == 0x1C6C40u) {
        ctx->pc = 0x1C6C40u;
        SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
        ctx->pc = 0x1C6C44u;
        goto label_1c6c44;
    }
    ctx->pc = 0x1C6C3Cu;
    {
        const bool branch_taken_0x1c6c3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6C40u;
        SET_GPR_U32(ctx, 1, ((uint32_t)51 << 16));
        if (branch_taken_0x1c6c3c) {
            ctx->pc = 0x1C6C48u;
            goto label_1c6c48;
        }
    }
    ctx->pc = 0x1C6C44u;
label_1c6c44:
    // 0x1c6c44: 0xac205074
    ctx->pc = 0x1c6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20596), GPR_U32(ctx, 0));
label_1c6c48:
    // 0x1c6c48: 0xdfbf0000
    ctx->pc = 0x1c6c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6c4c:
    // 0x1c6c4c: 0x3e00008
label_1c6c50:
    if (ctx->pc == 0x1C6C50u) {
        ctx->pc = 0x1C6C50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C6C54u;
        goto label_1c6c54;
    }
    ctx->pc = 0x1C6C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6A40u: goto label_1c6a40;
            case 0x1C6A44u: goto label_1c6a44;
            case 0x1C6A48u: goto label_1c6a48;
            case 0x1C6A4Cu: goto label_1c6a4c;
            case 0x1C6A50u: goto label_1c6a50;
            case 0x1C6A54u: goto label_1c6a54;
            case 0x1C6A58u: goto label_1c6a58;
            case 0x1C6A5Cu: goto label_1c6a5c;
            case 0x1C6A60u: goto label_1c6a60;
            case 0x1C6A64u: goto label_1c6a64;
            case 0x1C6A68u: goto label_1c6a68;
            case 0x1C6A6Cu: goto label_1c6a6c;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6A74u: goto label_1c6a74;
            case 0x1C6A78u: goto label_1c6a78;
            case 0x1C6A7Cu: goto label_1c6a7c;
            case 0x1C6A80u: goto label_1c6a80;
            case 0x1C6A84u: goto label_1c6a84;
            case 0x1C6A88u: goto label_1c6a88;
            case 0x1C6A8Cu: goto label_1c6a8c;
            case 0x1C6A90u: goto label_1c6a90;
            case 0x1C6A94u: goto label_1c6a94;
            case 0x1C6A98u: goto label_1c6a98;
            case 0x1C6A9Cu: goto label_1c6a9c;
            case 0x1C6AA0u: goto label_1c6aa0;
            case 0x1C6AA4u: goto label_1c6aa4;
            case 0x1C6AA8u: goto label_1c6aa8;
            case 0x1C6AACu: goto label_1c6aac;
            case 0x1C6AB0u: goto label_1c6ab0;
            case 0x1C6AB4u: goto label_1c6ab4;
            case 0x1C6AB8u: goto label_1c6ab8;
            case 0x1C6ABCu: goto label_1c6abc;
            case 0x1C6AC0u: goto label_1c6ac0;
            case 0x1C6AC4u: goto label_1c6ac4;
            case 0x1C6AC8u: goto label_1c6ac8;
            case 0x1C6ACCu: goto label_1c6acc;
            case 0x1C6AD0u: goto label_1c6ad0;
            case 0x1C6AD4u: goto label_1c6ad4;
            case 0x1C6AD8u: goto label_1c6ad8;
            case 0x1C6ADCu: goto label_1c6adc;
            case 0x1C6AE0u: goto label_1c6ae0;
            case 0x1C6AE4u: goto label_1c6ae4;
            case 0x1C6AE8u: goto label_1c6ae8;
            case 0x1C6AECu: goto label_1c6aec;
            case 0x1C6AF0u: goto label_1c6af0;
            case 0x1C6AF4u: goto label_1c6af4;
            case 0x1C6AF8u: goto label_1c6af8;
            case 0x1C6AFCu: goto label_1c6afc;
            case 0x1C6B00u: goto label_1c6b00;
            case 0x1C6B04u: goto label_1c6b04;
            case 0x1C6B08u: goto label_1c6b08;
            case 0x1C6B0Cu: goto label_1c6b0c;
            case 0x1C6B10u: goto label_1c6b10;
            case 0x1C6B14u: goto label_1c6b14;
            case 0x1C6B18u: goto label_1c6b18;
            case 0x1C6B1Cu: goto label_1c6b1c;
            case 0x1C6B20u: goto label_1c6b20;
            case 0x1C6B24u: goto label_1c6b24;
            case 0x1C6B28u: goto label_1c6b28;
            case 0x1C6B2Cu: goto label_1c6b2c;
            case 0x1C6B30u: goto label_1c6b30;
            case 0x1C6B34u: goto label_1c6b34;
            case 0x1C6B38u: goto label_1c6b38;
            case 0x1C6B3Cu: goto label_1c6b3c;
            case 0x1C6B40u: goto label_1c6b40;
            case 0x1C6B44u: goto label_1c6b44;
            case 0x1C6B48u: goto label_1c6b48;
            case 0x1C6B4Cu: goto label_1c6b4c;
            case 0x1C6B50u: goto label_1c6b50;
            case 0x1C6B54u: goto label_1c6b54;
            case 0x1C6B58u: goto label_1c6b58;
            case 0x1C6B5Cu: goto label_1c6b5c;
            case 0x1C6B60u: goto label_1c6b60;
            case 0x1C6B64u: goto label_1c6b64;
            case 0x1C6B68u: goto label_1c6b68;
            case 0x1C6B6Cu: goto label_1c6b6c;
            case 0x1C6B70u: goto label_1c6b70;
            case 0x1C6B74u: goto label_1c6b74;
            case 0x1C6B78u: goto label_1c6b78;
            case 0x1C6B7Cu: goto label_1c6b7c;
            case 0x1C6B80u: goto label_1c6b80;
            case 0x1C6B84u: goto label_1c6b84;
            case 0x1C6B88u: goto label_1c6b88;
            case 0x1C6B8Cu: goto label_1c6b8c;
            case 0x1C6B90u: goto label_1c6b90;
            case 0x1C6B94u: goto label_1c6b94;
            case 0x1C6B98u: goto label_1c6b98;
            case 0x1C6B9Cu: goto label_1c6b9c;
            case 0x1C6BA0u: goto label_1c6ba0;
            case 0x1C6BA4u: goto label_1c6ba4;
            case 0x1C6BA8u: goto label_1c6ba8;
            case 0x1C6BACu: goto label_1c6bac;
            case 0x1C6BB0u: goto label_1c6bb0;
            case 0x1C6BB4u: goto label_1c6bb4;
            case 0x1C6BB8u: goto label_1c6bb8;
            case 0x1C6BBCu: goto label_1c6bbc;
            case 0x1C6BC0u: goto label_1c6bc0;
            case 0x1C6BC4u: goto label_1c6bc4;
            case 0x1C6BC8u: goto label_1c6bc8;
            case 0x1C6BCCu: goto label_1c6bcc;
            case 0x1C6BD0u: goto label_1c6bd0;
            case 0x1C6BD4u: goto label_1c6bd4;
            case 0x1C6BD8u: goto label_1c6bd8;
            case 0x1C6BDCu: goto label_1c6bdc;
            case 0x1C6BE0u: goto label_1c6be0;
            case 0x1C6BE4u: goto label_1c6be4;
            case 0x1C6BE8u: goto label_1c6be8;
            case 0x1C6BECu: goto label_1c6bec;
            case 0x1C6BF0u: goto label_1c6bf0;
            case 0x1C6BF4u: goto label_1c6bf4;
            case 0x1C6BF8u: goto label_1c6bf8;
            case 0x1C6BFCu: goto label_1c6bfc;
            case 0x1C6C00u: goto label_1c6c00;
            case 0x1C6C04u: goto label_1c6c04;
            case 0x1C6C08u: goto label_1c6c08;
            case 0x1C6C0Cu: goto label_1c6c0c;
            case 0x1C6C10u: goto label_1c6c10;
            case 0x1C6C14u: goto label_1c6c14;
            case 0x1C6C18u: goto label_1c6c18;
            case 0x1C6C1Cu: goto label_1c6c1c;
            case 0x1C6C20u: goto label_1c6c20;
            case 0x1C6C24u: goto label_1c6c24;
            case 0x1C6C28u: goto label_1c6c28;
            case 0x1C6C2Cu: goto label_1c6c2c;
            case 0x1C6C30u: goto label_1c6c30;
            case 0x1C6C34u: goto label_1c6c34;
            case 0x1C6C38u: goto label_1c6c38;
            case 0x1C6C3Cu: goto label_1c6c3c;
            case 0x1C6C40u: goto label_1c6c40;
            case 0x1C6C44u: goto label_1c6c44;
            case 0x1C6C48u: goto label_1c6c48;
            case 0x1C6C4Cu: goto label_1c6c4c;
            case 0x1C6C50u: goto label_1c6c50;
            case 0x1C6C54u: goto label_1c6c54;
            case 0x1C6C58u: goto label_1c6c58;
            case 0x1C6C5Cu: goto label_1c6c5c;
            case 0x1C6C60u: goto label_1c6c60;
            case 0x1C6C64u: goto label_1c6c64;
            case 0x1C6C68u: goto label_1c6c68;
            case 0x1C6C6Cu: goto label_1c6c6c;
            case 0x1C6C70u: goto label_1c6c70;
            case 0x1C6C74u: goto label_1c6c74;
            case 0x1C6C78u: goto label_1c6c78;
            case 0x1C6C7Cu: goto label_1c6c7c;
            case 0x1C6C80u: goto label_1c6c80;
            case 0x1C6C84u: goto label_1c6c84;
            case 0x1C6C88u: goto label_1c6c88;
            case 0x1C6C8Cu: goto label_1c6c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6C54u;
label_1c6c54:
    // 0x1c6c54: 0x0
    ctx->pc = 0x1c6c54u;
    // NOP
label_1c6c58:
    // 0x1c6c58: 0x0
    ctx->pc = 0x1c6c58u;
    // NOP
label_1c6c5c:
    // 0x1c6c5c: 0x0
    ctx->pc = 0x1c6c5cu;
    // NOP
label_1c6c60:
    // 0x1c6c60: 0x3e00008
label_1c6c64:
    if (ctx->pc == 0x1C6C64u) {
        ctx->pc = 0x1C6C68u;
        goto label_1c6c68;
    }
    ctx->pc = 0x1C6C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6A40u: goto label_1c6a40;
            case 0x1C6A44u: goto label_1c6a44;
            case 0x1C6A48u: goto label_1c6a48;
            case 0x1C6A4Cu: goto label_1c6a4c;
            case 0x1C6A50u: goto label_1c6a50;
            case 0x1C6A54u: goto label_1c6a54;
            case 0x1C6A58u: goto label_1c6a58;
            case 0x1C6A5Cu: goto label_1c6a5c;
            case 0x1C6A60u: goto label_1c6a60;
            case 0x1C6A64u: goto label_1c6a64;
            case 0x1C6A68u: goto label_1c6a68;
            case 0x1C6A6Cu: goto label_1c6a6c;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6A74u: goto label_1c6a74;
            case 0x1C6A78u: goto label_1c6a78;
            case 0x1C6A7Cu: goto label_1c6a7c;
            case 0x1C6A80u: goto label_1c6a80;
            case 0x1C6A84u: goto label_1c6a84;
            case 0x1C6A88u: goto label_1c6a88;
            case 0x1C6A8Cu: goto label_1c6a8c;
            case 0x1C6A90u: goto label_1c6a90;
            case 0x1C6A94u: goto label_1c6a94;
            case 0x1C6A98u: goto label_1c6a98;
            case 0x1C6A9Cu: goto label_1c6a9c;
            case 0x1C6AA0u: goto label_1c6aa0;
            case 0x1C6AA4u: goto label_1c6aa4;
            case 0x1C6AA8u: goto label_1c6aa8;
            case 0x1C6AACu: goto label_1c6aac;
            case 0x1C6AB0u: goto label_1c6ab0;
            case 0x1C6AB4u: goto label_1c6ab4;
            case 0x1C6AB8u: goto label_1c6ab8;
            case 0x1C6ABCu: goto label_1c6abc;
            case 0x1C6AC0u: goto label_1c6ac0;
            case 0x1C6AC4u: goto label_1c6ac4;
            case 0x1C6AC8u: goto label_1c6ac8;
            case 0x1C6ACCu: goto label_1c6acc;
            case 0x1C6AD0u: goto label_1c6ad0;
            case 0x1C6AD4u: goto label_1c6ad4;
            case 0x1C6AD8u: goto label_1c6ad8;
            case 0x1C6ADCu: goto label_1c6adc;
            case 0x1C6AE0u: goto label_1c6ae0;
            case 0x1C6AE4u: goto label_1c6ae4;
            case 0x1C6AE8u: goto label_1c6ae8;
            case 0x1C6AECu: goto label_1c6aec;
            case 0x1C6AF0u: goto label_1c6af0;
            case 0x1C6AF4u: goto label_1c6af4;
            case 0x1C6AF8u: goto label_1c6af8;
            case 0x1C6AFCu: goto label_1c6afc;
            case 0x1C6B00u: goto label_1c6b00;
            case 0x1C6B04u: goto label_1c6b04;
            case 0x1C6B08u: goto label_1c6b08;
            case 0x1C6B0Cu: goto label_1c6b0c;
            case 0x1C6B10u: goto label_1c6b10;
            case 0x1C6B14u: goto label_1c6b14;
            case 0x1C6B18u: goto label_1c6b18;
            case 0x1C6B1Cu: goto label_1c6b1c;
            case 0x1C6B20u: goto label_1c6b20;
            case 0x1C6B24u: goto label_1c6b24;
            case 0x1C6B28u: goto label_1c6b28;
            case 0x1C6B2Cu: goto label_1c6b2c;
            case 0x1C6B30u: goto label_1c6b30;
            case 0x1C6B34u: goto label_1c6b34;
            case 0x1C6B38u: goto label_1c6b38;
            case 0x1C6B3Cu: goto label_1c6b3c;
            case 0x1C6B40u: goto label_1c6b40;
            case 0x1C6B44u: goto label_1c6b44;
            case 0x1C6B48u: goto label_1c6b48;
            case 0x1C6B4Cu: goto label_1c6b4c;
            case 0x1C6B50u: goto label_1c6b50;
            case 0x1C6B54u: goto label_1c6b54;
            case 0x1C6B58u: goto label_1c6b58;
            case 0x1C6B5Cu: goto label_1c6b5c;
            case 0x1C6B60u: goto label_1c6b60;
            case 0x1C6B64u: goto label_1c6b64;
            case 0x1C6B68u: goto label_1c6b68;
            case 0x1C6B6Cu: goto label_1c6b6c;
            case 0x1C6B70u: goto label_1c6b70;
            case 0x1C6B74u: goto label_1c6b74;
            case 0x1C6B78u: goto label_1c6b78;
            case 0x1C6B7Cu: goto label_1c6b7c;
            case 0x1C6B80u: goto label_1c6b80;
            case 0x1C6B84u: goto label_1c6b84;
            case 0x1C6B88u: goto label_1c6b88;
            case 0x1C6B8Cu: goto label_1c6b8c;
            case 0x1C6B90u: goto label_1c6b90;
            case 0x1C6B94u: goto label_1c6b94;
            case 0x1C6B98u: goto label_1c6b98;
            case 0x1C6B9Cu: goto label_1c6b9c;
            case 0x1C6BA0u: goto label_1c6ba0;
            case 0x1C6BA4u: goto label_1c6ba4;
            case 0x1C6BA8u: goto label_1c6ba8;
            case 0x1C6BACu: goto label_1c6bac;
            case 0x1C6BB0u: goto label_1c6bb0;
            case 0x1C6BB4u: goto label_1c6bb4;
            case 0x1C6BB8u: goto label_1c6bb8;
            case 0x1C6BBCu: goto label_1c6bbc;
            case 0x1C6BC0u: goto label_1c6bc0;
            case 0x1C6BC4u: goto label_1c6bc4;
            case 0x1C6BC8u: goto label_1c6bc8;
            case 0x1C6BCCu: goto label_1c6bcc;
            case 0x1C6BD0u: goto label_1c6bd0;
            case 0x1C6BD4u: goto label_1c6bd4;
            case 0x1C6BD8u: goto label_1c6bd8;
            case 0x1C6BDCu: goto label_1c6bdc;
            case 0x1C6BE0u: goto label_1c6be0;
            case 0x1C6BE4u: goto label_1c6be4;
            case 0x1C6BE8u: goto label_1c6be8;
            case 0x1C6BECu: goto label_1c6bec;
            case 0x1C6BF0u: goto label_1c6bf0;
            case 0x1C6BF4u: goto label_1c6bf4;
            case 0x1C6BF8u: goto label_1c6bf8;
            case 0x1C6BFCu: goto label_1c6bfc;
            case 0x1C6C00u: goto label_1c6c00;
            case 0x1C6C04u: goto label_1c6c04;
            case 0x1C6C08u: goto label_1c6c08;
            case 0x1C6C0Cu: goto label_1c6c0c;
            case 0x1C6C10u: goto label_1c6c10;
            case 0x1C6C14u: goto label_1c6c14;
            case 0x1C6C18u: goto label_1c6c18;
            case 0x1C6C1Cu: goto label_1c6c1c;
            case 0x1C6C20u: goto label_1c6c20;
            case 0x1C6C24u: goto label_1c6c24;
            case 0x1C6C28u: goto label_1c6c28;
            case 0x1C6C2Cu: goto label_1c6c2c;
            case 0x1C6C30u: goto label_1c6c30;
            case 0x1C6C34u: goto label_1c6c34;
            case 0x1C6C38u: goto label_1c6c38;
            case 0x1C6C3Cu: goto label_1c6c3c;
            case 0x1C6C40u: goto label_1c6c40;
            case 0x1C6C44u: goto label_1c6c44;
            case 0x1C6C48u: goto label_1c6c48;
            case 0x1C6C4Cu: goto label_1c6c4c;
            case 0x1C6C50u: goto label_1c6c50;
            case 0x1C6C54u: goto label_1c6c54;
            case 0x1C6C58u: goto label_1c6c58;
            case 0x1C6C5Cu: goto label_1c6c5c;
            case 0x1C6C60u: goto label_1c6c60;
            case 0x1C6C64u: goto label_1c6c64;
            case 0x1C6C68u: goto label_1c6c68;
            case 0x1C6C6Cu: goto label_1c6c6c;
            case 0x1C6C70u: goto label_1c6c70;
            case 0x1C6C74u: goto label_1c6c74;
            case 0x1C6C78u: goto label_1c6c78;
            case 0x1C6C7Cu: goto label_1c6c7c;
            case 0x1C6C80u: goto label_1c6c80;
            case 0x1C6C84u: goto label_1c6c84;
            case 0x1C6C88u: goto label_1c6c88;
            case 0x1C6C8Cu: goto label_1c6c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6C68u;
label_1c6c68:
    // 0x1c6c68: 0x0
    ctx->pc = 0x1c6c68u;
    // NOP
label_1c6c6c:
    // 0x1c6c6c: 0x0
    ctx->pc = 0x1c6c6cu;
    // NOP
label_1c6c70:
    // 0x1c6c70: 0x3e00008
label_1c6c74:
    if (ctx->pc == 0x1C6C74u) {
        ctx->pc = 0x1C6C78u;
        goto label_1c6c78;
    }
    ctx->pc = 0x1C6C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6A40u: goto label_1c6a40;
            case 0x1C6A44u: goto label_1c6a44;
            case 0x1C6A48u: goto label_1c6a48;
            case 0x1C6A4Cu: goto label_1c6a4c;
            case 0x1C6A50u: goto label_1c6a50;
            case 0x1C6A54u: goto label_1c6a54;
            case 0x1C6A58u: goto label_1c6a58;
            case 0x1C6A5Cu: goto label_1c6a5c;
            case 0x1C6A60u: goto label_1c6a60;
            case 0x1C6A64u: goto label_1c6a64;
            case 0x1C6A68u: goto label_1c6a68;
            case 0x1C6A6Cu: goto label_1c6a6c;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6A74u: goto label_1c6a74;
            case 0x1C6A78u: goto label_1c6a78;
            case 0x1C6A7Cu: goto label_1c6a7c;
            case 0x1C6A80u: goto label_1c6a80;
            case 0x1C6A84u: goto label_1c6a84;
            case 0x1C6A88u: goto label_1c6a88;
            case 0x1C6A8Cu: goto label_1c6a8c;
            case 0x1C6A90u: goto label_1c6a90;
            case 0x1C6A94u: goto label_1c6a94;
            case 0x1C6A98u: goto label_1c6a98;
            case 0x1C6A9Cu: goto label_1c6a9c;
            case 0x1C6AA0u: goto label_1c6aa0;
            case 0x1C6AA4u: goto label_1c6aa4;
            case 0x1C6AA8u: goto label_1c6aa8;
            case 0x1C6AACu: goto label_1c6aac;
            case 0x1C6AB0u: goto label_1c6ab0;
            case 0x1C6AB4u: goto label_1c6ab4;
            case 0x1C6AB8u: goto label_1c6ab8;
            case 0x1C6ABCu: goto label_1c6abc;
            case 0x1C6AC0u: goto label_1c6ac0;
            case 0x1C6AC4u: goto label_1c6ac4;
            case 0x1C6AC8u: goto label_1c6ac8;
            case 0x1C6ACCu: goto label_1c6acc;
            case 0x1C6AD0u: goto label_1c6ad0;
            case 0x1C6AD4u: goto label_1c6ad4;
            case 0x1C6AD8u: goto label_1c6ad8;
            case 0x1C6ADCu: goto label_1c6adc;
            case 0x1C6AE0u: goto label_1c6ae0;
            case 0x1C6AE4u: goto label_1c6ae4;
            case 0x1C6AE8u: goto label_1c6ae8;
            case 0x1C6AECu: goto label_1c6aec;
            case 0x1C6AF0u: goto label_1c6af0;
            case 0x1C6AF4u: goto label_1c6af4;
            case 0x1C6AF8u: goto label_1c6af8;
            case 0x1C6AFCu: goto label_1c6afc;
            case 0x1C6B00u: goto label_1c6b00;
            case 0x1C6B04u: goto label_1c6b04;
            case 0x1C6B08u: goto label_1c6b08;
            case 0x1C6B0Cu: goto label_1c6b0c;
            case 0x1C6B10u: goto label_1c6b10;
            case 0x1C6B14u: goto label_1c6b14;
            case 0x1C6B18u: goto label_1c6b18;
            case 0x1C6B1Cu: goto label_1c6b1c;
            case 0x1C6B20u: goto label_1c6b20;
            case 0x1C6B24u: goto label_1c6b24;
            case 0x1C6B28u: goto label_1c6b28;
            case 0x1C6B2Cu: goto label_1c6b2c;
            case 0x1C6B30u: goto label_1c6b30;
            case 0x1C6B34u: goto label_1c6b34;
            case 0x1C6B38u: goto label_1c6b38;
            case 0x1C6B3Cu: goto label_1c6b3c;
            case 0x1C6B40u: goto label_1c6b40;
            case 0x1C6B44u: goto label_1c6b44;
            case 0x1C6B48u: goto label_1c6b48;
            case 0x1C6B4Cu: goto label_1c6b4c;
            case 0x1C6B50u: goto label_1c6b50;
            case 0x1C6B54u: goto label_1c6b54;
            case 0x1C6B58u: goto label_1c6b58;
            case 0x1C6B5Cu: goto label_1c6b5c;
            case 0x1C6B60u: goto label_1c6b60;
            case 0x1C6B64u: goto label_1c6b64;
            case 0x1C6B68u: goto label_1c6b68;
            case 0x1C6B6Cu: goto label_1c6b6c;
            case 0x1C6B70u: goto label_1c6b70;
            case 0x1C6B74u: goto label_1c6b74;
            case 0x1C6B78u: goto label_1c6b78;
            case 0x1C6B7Cu: goto label_1c6b7c;
            case 0x1C6B80u: goto label_1c6b80;
            case 0x1C6B84u: goto label_1c6b84;
            case 0x1C6B88u: goto label_1c6b88;
            case 0x1C6B8Cu: goto label_1c6b8c;
            case 0x1C6B90u: goto label_1c6b90;
            case 0x1C6B94u: goto label_1c6b94;
            case 0x1C6B98u: goto label_1c6b98;
            case 0x1C6B9Cu: goto label_1c6b9c;
            case 0x1C6BA0u: goto label_1c6ba0;
            case 0x1C6BA4u: goto label_1c6ba4;
            case 0x1C6BA8u: goto label_1c6ba8;
            case 0x1C6BACu: goto label_1c6bac;
            case 0x1C6BB0u: goto label_1c6bb0;
            case 0x1C6BB4u: goto label_1c6bb4;
            case 0x1C6BB8u: goto label_1c6bb8;
            case 0x1C6BBCu: goto label_1c6bbc;
            case 0x1C6BC0u: goto label_1c6bc0;
            case 0x1C6BC4u: goto label_1c6bc4;
            case 0x1C6BC8u: goto label_1c6bc8;
            case 0x1C6BCCu: goto label_1c6bcc;
            case 0x1C6BD0u: goto label_1c6bd0;
            case 0x1C6BD4u: goto label_1c6bd4;
            case 0x1C6BD8u: goto label_1c6bd8;
            case 0x1C6BDCu: goto label_1c6bdc;
            case 0x1C6BE0u: goto label_1c6be0;
            case 0x1C6BE4u: goto label_1c6be4;
            case 0x1C6BE8u: goto label_1c6be8;
            case 0x1C6BECu: goto label_1c6bec;
            case 0x1C6BF0u: goto label_1c6bf0;
            case 0x1C6BF4u: goto label_1c6bf4;
            case 0x1C6BF8u: goto label_1c6bf8;
            case 0x1C6BFCu: goto label_1c6bfc;
            case 0x1C6C00u: goto label_1c6c00;
            case 0x1C6C04u: goto label_1c6c04;
            case 0x1C6C08u: goto label_1c6c08;
            case 0x1C6C0Cu: goto label_1c6c0c;
            case 0x1C6C10u: goto label_1c6c10;
            case 0x1C6C14u: goto label_1c6c14;
            case 0x1C6C18u: goto label_1c6c18;
            case 0x1C6C1Cu: goto label_1c6c1c;
            case 0x1C6C20u: goto label_1c6c20;
            case 0x1C6C24u: goto label_1c6c24;
            case 0x1C6C28u: goto label_1c6c28;
            case 0x1C6C2Cu: goto label_1c6c2c;
            case 0x1C6C30u: goto label_1c6c30;
            case 0x1C6C34u: goto label_1c6c34;
            case 0x1C6C38u: goto label_1c6c38;
            case 0x1C6C3Cu: goto label_1c6c3c;
            case 0x1C6C40u: goto label_1c6c40;
            case 0x1C6C44u: goto label_1c6c44;
            case 0x1C6C48u: goto label_1c6c48;
            case 0x1C6C4Cu: goto label_1c6c4c;
            case 0x1C6C50u: goto label_1c6c50;
            case 0x1C6C54u: goto label_1c6c54;
            case 0x1C6C58u: goto label_1c6c58;
            case 0x1C6C5Cu: goto label_1c6c5c;
            case 0x1C6C60u: goto label_1c6c60;
            case 0x1C6C64u: goto label_1c6c64;
            case 0x1C6C68u: goto label_1c6c68;
            case 0x1C6C6Cu: goto label_1c6c6c;
            case 0x1C6C70u: goto label_1c6c70;
            case 0x1C6C74u: goto label_1c6c74;
            case 0x1C6C78u: goto label_1c6c78;
            case 0x1C6C7Cu: goto label_1c6c7c;
            case 0x1C6C80u: goto label_1c6c80;
            case 0x1C6C84u: goto label_1c6c84;
            case 0x1C6C88u: goto label_1c6c88;
            case 0x1C6C8Cu: goto label_1c6c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6C78u;
label_1c6c78:
    // 0x1c6c78: 0x0
    ctx->pc = 0x1c6c78u;
    // NOP
label_1c6c7c:
    // 0x1c6c7c: 0x0
    ctx->pc = 0x1c6c7cu;
    // NOP
label_1c6c80:
    // 0x1c6c80: 0x3e00008
label_1c6c84:
    if (ctx->pc == 0x1C6C84u) {
        ctx->pc = 0x1C6C88u;
        goto label_1c6c88;
    }
    ctx->pc = 0x1C6C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6A40u: goto label_1c6a40;
            case 0x1C6A44u: goto label_1c6a44;
            case 0x1C6A48u: goto label_1c6a48;
            case 0x1C6A4Cu: goto label_1c6a4c;
            case 0x1C6A50u: goto label_1c6a50;
            case 0x1C6A54u: goto label_1c6a54;
            case 0x1C6A58u: goto label_1c6a58;
            case 0x1C6A5Cu: goto label_1c6a5c;
            case 0x1C6A60u: goto label_1c6a60;
            case 0x1C6A64u: goto label_1c6a64;
            case 0x1C6A68u: goto label_1c6a68;
            case 0x1C6A6Cu: goto label_1c6a6c;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6A74u: goto label_1c6a74;
            case 0x1C6A78u: goto label_1c6a78;
            case 0x1C6A7Cu: goto label_1c6a7c;
            case 0x1C6A80u: goto label_1c6a80;
            case 0x1C6A84u: goto label_1c6a84;
            case 0x1C6A88u: goto label_1c6a88;
            case 0x1C6A8Cu: goto label_1c6a8c;
            case 0x1C6A90u: goto label_1c6a90;
            case 0x1C6A94u: goto label_1c6a94;
            case 0x1C6A98u: goto label_1c6a98;
            case 0x1C6A9Cu: goto label_1c6a9c;
            case 0x1C6AA0u: goto label_1c6aa0;
            case 0x1C6AA4u: goto label_1c6aa4;
            case 0x1C6AA8u: goto label_1c6aa8;
            case 0x1C6AACu: goto label_1c6aac;
            case 0x1C6AB0u: goto label_1c6ab0;
            case 0x1C6AB4u: goto label_1c6ab4;
            case 0x1C6AB8u: goto label_1c6ab8;
            case 0x1C6ABCu: goto label_1c6abc;
            case 0x1C6AC0u: goto label_1c6ac0;
            case 0x1C6AC4u: goto label_1c6ac4;
            case 0x1C6AC8u: goto label_1c6ac8;
            case 0x1C6ACCu: goto label_1c6acc;
            case 0x1C6AD0u: goto label_1c6ad0;
            case 0x1C6AD4u: goto label_1c6ad4;
            case 0x1C6AD8u: goto label_1c6ad8;
            case 0x1C6ADCu: goto label_1c6adc;
            case 0x1C6AE0u: goto label_1c6ae0;
            case 0x1C6AE4u: goto label_1c6ae4;
            case 0x1C6AE8u: goto label_1c6ae8;
            case 0x1C6AECu: goto label_1c6aec;
            case 0x1C6AF0u: goto label_1c6af0;
            case 0x1C6AF4u: goto label_1c6af4;
            case 0x1C6AF8u: goto label_1c6af8;
            case 0x1C6AFCu: goto label_1c6afc;
            case 0x1C6B00u: goto label_1c6b00;
            case 0x1C6B04u: goto label_1c6b04;
            case 0x1C6B08u: goto label_1c6b08;
            case 0x1C6B0Cu: goto label_1c6b0c;
            case 0x1C6B10u: goto label_1c6b10;
            case 0x1C6B14u: goto label_1c6b14;
            case 0x1C6B18u: goto label_1c6b18;
            case 0x1C6B1Cu: goto label_1c6b1c;
            case 0x1C6B20u: goto label_1c6b20;
            case 0x1C6B24u: goto label_1c6b24;
            case 0x1C6B28u: goto label_1c6b28;
            case 0x1C6B2Cu: goto label_1c6b2c;
            case 0x1C6B30u: goto label_1c6b30;
            case 0x1C6B34u: goto label_1c6b34;
            case 0x1C6B38u: goto label_1c6b38;
            case 0x1C6B3Cu: goto label_1c6b3c;
            case 0x1C6B40u: goto label_1c6b40;
            case 0x1C6B44u: goto label_1c6b44;
            case 0x1C6B48u: goto label_1c6b48;
            case 0x1C6B4Cu: goto label_1c6b4c;
            case 0x1C6B50u: goto label_1c6b50;
            case 0x1C6B54u: goto label_1c6b54;
            case 0x1C6B58u: goto label_1c6b58;
            case 0x1C6B5Cu: goto label_1c6b5c;
            case 0x1C6B60u: goto label_1c6b60;
            case 0x1C6B64u: goto label_1c6b64;
            case 0x1C6B68u: goto label_1c6b68;
            case 0x1C6B6Cu: goto label_1c6b6c;
            case 0x1C6B70u: goto label_1c6b70;
            case 0x1C6B74u: goto label_1c6b74;
            case 0x1C6B78u: goto label_1c6b78;
            case 0x1C6B7Cu: goto label_1c6b7c;
            case 0x1C6B80u: goto label_1c6b80;
            case 0x1C6B84u: goto label_1c6b84;
            case 0x1C6B88u: goto label_1c6b88;
            case 0x1C6B8Cu: goto label_1c6b8c;
            case 0x1C6B90u: goto label_1c6b90;
            case 0x1C6B94u: goto label_1c6b94;
            case 0x1C6B98u: goto label_1c6b98;
            case 0x1C6B9Cu: goto label_1c6b9c;
            case 0x1C6BA0u: goto label_1c6ba0;
            case 0x1C6BA4u: goto label_1c6ba4;
            case 0x1C6BA8u: goto label_1c6ba8;
            case 0x1C6BACu: goto label_1c6bac;
            case 0x1C6BB0u: goto label_1c6bb0;
            case 0x1C6BB4u: goto label_1c6bb4;
            case 0x1C6BB8u: goto label_1c6bb8;
            case 0x1C6BBCu: goto label_1c6bbc;
            case 0x1C6BC0u: goto label_1c6bc0;
            case 0x1C6BC4u: goto label_1c6bc4;
            case 0x1C6BC8u: goto label_1c6bc8;
            case 0x1C6BCCu: goto label_1c6bcc;
            case 0x1C6BD0u: goto label_1c6bd0;
            case 0x1C6BD4u: goto label_1c6bd4;
            case 0x1C6BD8u: goto label_1c6bd8;
            case 0x1C6BDCu: goto label_1c6bdc;
            case 0x1C6BE0u: goto label_1c6be0;
            case 0x1C6BE4u: goto label_1c6be4;
            case 0x1C6BE8u: goto label_1c6be8;
            case 0x1C6BECu: goto label_1c6bec;
            case 0x1C6BF0u: goto label_1c6bf0;
            case 0x1C6BF4u: goto label_1c6bf4;
            case 0x1C6BF8u: goto label_1c6bf8;
            case 0x1C6BFCu: goto label_1c6bfc;
            case 0x1C6C00u: goto label_1c6c00;
            case 0x1C6C04u: goto label_1c6c04;
            case 0x1C6C08u: goto label_1c6c08;
            case 0x1C6C0Cu: goto label_1c6c0c;
            case 0x1C6C10u: goto label_1c6c10;
            case 0x1C6C14u: goto label_1c6c14;
            case 0x1C6C18u: goto label_1c6c18;
            case 0x1C6C1Cu: goto label_1c6c1c;
            case 0x1C6C20u: goto label_1c6c20;
            case 0x1C6C24u: goto label_1c6c24;
            case 0x1C6C28u: goto label_1c6c28;
            case 0x1C6C2Cu: goto label_1c6c2c;
            case 0x1C6C30u: goto label_1c6c30;
            case 0x1C6C34u: goto label_1c6c34;
            case 0x1C6C38u: goto label_1c6c38;
            case 0x1C6C3Cu: goto label_1c6c3c;
            case 0x1C6C40u: goto label_1c6c40;
            case 0x1C6C44u: goto label_1c6c44;
            case 0x1C6C48u: goto label_1c6c48;
            case 0x1C6C4Cu: goto label_1c6c4c;
            case 0x1C6C50u: goto label_1c6c50;
            case 0x1C6C54u: goto label_1c6c54;
            case 0x1C6C58u: goto label_1c6c58;
            case 0x1C6C5Cu: goto label_1c6c5c;
            case 0x1C6C60u: goto label_1c6c60;
            case 0x1C6C64u: goto label_1c6c64;
            case 0x1C6C68u: goto label_1c6c68;
            case 0x1C6C6Cu: goto label_1c6c6c;
            case 0x1C6C70u: goto label_1c6c70;
            case 0x1C6C74u: goto label_1c6c74;
            case 0x1C6C78u: goto label_1c6c78;
            case 0x1C6C7Cu: goto label_1c6c7c;
            case 0x1C6C80u: goto label_1c6c80;
            case 0x1C6C84u: goto label_1c6c84;
            case 0x1C6C88u: goto label_1c6c88;
            case 0x1C6C8Cu: goto label_1c6c8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6C88u;
label_1c6c88:
    // 0x1c6c88: 0x0
    ctx->pc = 0x1c6c88u;
    // NOP
label_1c6c8c:
    // 0x1c6c8c: 0x0
    ctx->pc = 0x1c6c8cu;
    // NOP
}
