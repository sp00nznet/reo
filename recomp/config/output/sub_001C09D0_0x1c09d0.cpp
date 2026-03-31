#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C09D0
// Address: 0x1c09d0 - 0x1c0dc0
void sub_001C09D0_0x1c09d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c09d0u;

label_1c09d0:
    // 0x1c09d0: 0x27bdffe0
    ctx->pc = 0x1c09d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c09d4:
    // 0x1c09d4: 0x3c060023
    ctx->pc = 0x1c09d4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
label_1c09d8:
    // 0x1c09d8: 0xffbf0010
    ctx->pc = 0x1c09d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c09dc:
    // 0x1c09dc: 0x3c010032
    ctx->pc = 0x1c09dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c09e0:
    // 0x1c09e0: 0x7fb00000
    ctx->pc = 0x1c09e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c09e4:
    // 0x1c09e4: 0x24c65160
    ctx->pc = 0x1c09e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20832));
label_1c09e8:
    // 0x1c09e8: 0x8c276cf0
    ctx->pc = 0x1c09e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 27888)));
label_1c09ec:
    // 0x1c09ec: 0x24030004
    ctx->pc = 0x1c09ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c09f0:
    // 0x1c09f0: 0x2402ffff
    ctx->pc = 0x1c09f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c09f4:
    // 0x1c09f4: 0x73880
    ctx->pc = 0x1c09f4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
label_1c09f8:
    // 0x1c09f8: 0x3c010032
    ctx->pc = 0x1c09f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c09fc:
    // 0x1c09fc: 0xc73021
    ctx->pc = 0x1c09fcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1c0a00:
    // 0x1c0a00: 0x8cd00000
    ctx->pc = 0x1c0a00u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c0a04:
    // 0x1c0a04: 0xac236ce8
    ctx->pc = 0x1c0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27880), GPR_U32(ctx, 3));
label_1c0a08:
    // 0x1c0a08: 0x3c010032
    ctx->pc = 0x1c0a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a0c:
    // 0x1c0a0c: 0xac226c74
    ctx->pc = 0x1c0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27764), GPR_U32(ctx, 2));
label_1c0a10:
    // 0x1c0a10: 0x3c010032
    ctx->pc = 0x1c0a10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a14:
    // 0x1c0a14: 0xac206c50
    ctx->pc = 0x1c0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27728), GPR_U32(ctx, 0));
label_1c0a18:
    // 0x1c0a18: 0x3c010032
    ctx->pc = 0x1c0a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a1c:
    // 0x1c0a1c: 0xac206c54
    ctx->pc = 0x1c0a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27732), GPR_U32(ctx, 0));
label_1c0a20:
    // 0x1c0a20: 0x3c010032
    ctx->pc = 0x1c0a20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a24:
    // 0x1c0a24: 0xac206c58
    ctx->pc = 0x1c0a24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27736), GPR_U32(ctx, 0));
label_1c0a28:
    // 0x1c0a28: 0x3c010032
    ctx->pc = 0x1c0a28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a2c:
    // 0x1c0a2c: 0xac246c64
    ctx->pc = 0x1c0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27748), GPR_U32(ctx, 4));
label_1c0a30:
    // 0x1c0a30: 0x3c010032
    ctx->pc = 0x1c0a30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a34:
    // 0x1c0a34: 0x3c040032
    ctx->pc = 0x1c0a34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_1c0a38:
    // 0x1c0a38: 0xac256cec
    ctx->pc = 0x1c0a38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27884), GPR_U32(ctx, 5));
label_1c0a3c:
    // 0x1c0a3c: 0x24846c94
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27796));
label_1c0a40:
    // 0x1c0a40: 0x8e060010
    ctx->pc = 0x1c0a40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c0a44:
    // 0x1c0a44: 0x3c050025
    ctx->pc = 0x1c0a44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1c0a48:
    // 0x1c0a48: 0x24a50640
    ctx->pc = 0x1c0a48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1600));
label_1c0a4c:
    // 0x1c0a4c: 0xc042a0c
label_1c0a50:
    if (ctx->pc == 0x1C0A50u) {
        ctx->pc = 0x1C0A50u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A54u;
        goto label_1c0a54;
    }
    ctx->pc = 0x1C0A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C0A54u);
    ctx->pc = 0x1C0A50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0A54u; }
    }
    if (ctx->pc != 0x1C0A54u) { return; }
    ctx->pc = 0x1C0A54u;
label_1c0a54:
    // 0x1c0a54: 0x8e040018
    ctx->pc = 0x1c0a54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1c0a58:
    // 0x1c0a58: 0x3c010032
    ctx->pc = 0x1c0a58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a5c:
    // 0x1c0a5c: 0x24030001
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c0a60:
    // 0x1c0a60: 0xac246cd8
    ctx->pc = 0x1c0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27864), GPR_U32(ctx, 4));
label_1c0a64:
    // 0x1c0a64: 0x3c010032
    ctx->pc = 0x1c0a64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c0a68:
    // 0x1c0a68: 0xac236cf8
    ctx->pc = 0x1c0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27896), GPR_U32(ctx, 3));
label_1c0a6c:
    // 0x1c0a6c: 0xdfbf0010
    ctx->pc = 0x1c0a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0a70:
    // 0x1c0a70: 0x7bb00000
    ctx->pc = 0x1c0a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0a74:
    // 0x1c0a74: 0x3e00008
label_1c0a78:
    if (ctx->pc == 0x1C0A78u) {
        ctx->pc = 0x1C0A78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C0A7Cu;
        goto label_1c0a7c;
    }
    ctx->pc = 0x1C0A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0A78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C09D0u: goto label_1c09d0;
            case 0x1C09D4u: goto label_1c09d4;
            case 0x1C09D8u: goto label_1c09d8;
            case 0x1C09DCu: goto label_1c09dc;
            case 0x1C09E0u: goto label_1c09e0;
            case 0x1C09E4u: goto label_1c09e4;
            case 0x1C09E8u: goto label_1c09e8;
            case 0x1C09ECu: goto label_1c09ec;
            case 0x1C09F0u: goto label_1c09f0;
            case 0x1C09F4u: goto label_1c09f4;
            case 0x1C09F8u: goto label_1c09f8;
            case 0x1C09FCu: goto label_1c09fc;
            case 0x1C0A00u: goto label_1c0a00;
            case 0x1C0A04u: goto label_1c0a04;
            case 0x1C0A08u: goto label_1c0a08;
            case 0x1C0A0Cu: goto label_1c0a0c;
            case 0x1C0A10u: goto label_1c0a10;
            case 0x1C0A14u: goto label_1c0a14;
            case 0x1C0A18u: goto label_1c0a18;
            case 0x1C0A1Cu: goto label_1c0a1c;
            case 0x1C0A20u: goto label_1c0a20;
            case 0x1C0A24u: goto label_1c0a24;
            case 0x1C0A28u: goto label_1c0a28;
            case 0x1C0A2Cu: goto label_1c0a2c;
            case 0x1C0A30u: goto label_1c0a30;
            case 0x1C0A34u: goto label_1c0a34;
            case 0x1C0A38u: goto label_1c0a38;
            case 0x1C0A3Cu: goto label_1c0a3c;
            case 0x1C0A40u: goto label_1c0a40;
            case 0x1C0A44u: goto label_1c0a44;
            case 0x1C0A48u: goto label_1c0a48;
            case 0x1C0A4Cu: goto label_1c0a4c;
            case 0x1C0A50u: goto label_1c0a50;
            case 0x1C0A54u: goto label_1c0a54;
            case 0x1C0A58u: goto label_1c0a58;
            case 0x1C0A5Cu: goto label_1c0a5c;
            case 0x1C0A60u: goto label_1c0a60;
            case 0x1C0A64u: goto label_1c0a64;
            case 0x1C0A68u: goto label_1c0a68;
            case 0x1C0A6Cu: goto label_1c0a6c;
            case 0x1C0A70u: goto label_1c0a70;
            case 0x1C0A74u: goto label_1c0a74;
            case 0x1C0A78u: goto label_1c0a78;
            case 0x1C0A7Cu: goto label_1c0a7c;
            case 0x1C0A80u: goto label_1c0a80;
            case 0x1C0A84u: goto label_1c0a84;
            case 0x1C0A88u: goto label_1c0a88;
            case 0x1C0A8Cu: goto label_1c0a8c;
            case 0x1C0A90u: goto label_1c0a90;
            case 0x1C0A94u: goto label_1c0a94;
            case 0x1C0A98u: goto label_1c0a98;
            case 0x1C0A9Cu: goto label_1c0a9c;
            case 0x1C0AA0u: goto label_1c0aa0;
            case 0x1C0AA4u: goto label_1c0aa4;
            case 0x1C0AA8u: goto label_1c0aa8;
            case 0x1C0AACu: goto label_1c0aac;
            case 0x1C0AB0u: goto label_1c0ab0;
            case 0x1C0AB4u: goto label_1c0ab4;
            case 0x1C0AB8u: goto label_1c0ab8;
            case 0x1C0ABCu: goto label_1c0abc;
            case 0x1C0AC0u: goto label_1c0ac0;
            case 0x1C0AC4u: goto label_1c0ac4;
            case 0x1C0AC8u: goto label_1c0ac8;
            case 0x1C0ACCu: goto label_1c0acc;
            case 0x1C0AD0u: goto label_1c0ad0;
            case 0x1C0AD4u: goto label_1c0ad4;
            case 0x1C0AD8u: goto label_1c0ad8;
            case 0x1C0ADCu: goto label_1c0adc;
            case 0x1C0AE0u: goto label_1c0ae0;
            case 0x1C0AE4u: goto label_1c0ae4;
            case 0x1C0AE8u: goto label_1c0ae8;
            case 0x1C0AECu: goto label_1c0aec;
            case 0x1C0AF0u: goto label_1c0af0;
            case 0x1C0AF4u: goto label_1c0af4;
            case 0x1C0AF8u: goto label_1c0af8;
            case 0x1C0AFCu: goto label_1c0afc;
            case 0x1C0B00u: goto label_1c0b00;
            case 0x1C0B04u: goto label_1c0b04;
            case 0x1C0B08u: goto label_1c0b08;
            case 0x1C0B0Cu: goto label_1c0b0c;
            case 0x1C0B10u: goto label_1c0b10;
            case 0x1C0B14u: goto label_1c0b14;
            case 0x1C0B18u: goto label_1c0b18;
            case 0x1C0B1Cu: goto label_1c0b1c;
            case 0x1C0B20u: goto label_1c0b20;
            case 0x1C0B24u: goto label_1c0b24;
            case 0x1C0B28u: goto label_1c0b28;
            case 0x1C0B2Cu: goto label_1c0b2c;
            case 0x1C0B30u: goto label_1c0b30;
            case 0x1C0B34u: goto label_1c0b34;
            case 0x1C0B38u: goto label_1c0b38;
            case 0x1C0B3Cu: goto label_1c0b3c;
            case 0x1C0B40u: goto label_1c0b40;
            case 0x1C0B44u: goto label_1c0b44;
            case 0x1C0B48u: goto label_1c0b48;
            case 0x1C0B4Cu: goto label_1c0b4c;
            case 0x1C0B50u: goto label_1c0b50;
            case 0x1C0B54u: goto label_1c0b54;
            case 0x1C0B58u: goto label_1c0b58;
            case 0x1C0B5Cu: goto label_1c0b5c;
            case 0x1C0B60u: goto label_1c0b60;
            case 0x1C0B64u: goto label_1c0b64;
            case 0x1C0B68u: goto label_1c0b68;
            case 0x1C0B6Cu: goto label_1c0b6c;
            case 0x1C0B70u: goto label_1c0b70;
            case 0x1C0B74u: goto label_1c0b74;
            case 0x1C0B78u: goto label_1c0b78;
            case 0x1C0B7Cu: goto label_1c0b7c;
            case 0x1C0B80u: goto label_1c0b80;
            case 0x1C0B84u: goto label_1c0b84;
            case 0x1C0B88u: goto label_1c0b88;
            case 0x1C0B8Cu: goto label_1c0b8c;
            case 0x1C0B90u: goto label_1c0b90;
            case 0x1C0B94u: goto label_1c0b94;
            case 0x1C0B98u: goto label_1c0b98;
            case 0x1C0B9Cu: goto label_1c0b9c;
            case 0x1C0BA0u: goto label_1c0ba0;
            case 0x1C0BA4u: goto label_1c0ba4;
            case 0x1C0BA8u: goto label_1c0ba8;
            case 0x1C0BACu: goto label_1c0bac;
            case 0x1C0BB0u: goto label_1c0bb0;
            case 0x1C0BB4u: goto label_1c0bb4;
            case 0x1C0BB8u: goto label_1c0bb8;
            case 0x1C0BBCu: goto label_1c0bbc;
            case 0x1C0BC0u: goto label_1c0bc0;
            case 0x1C0BC4u: goto label_1c0bc4;
            case 0x1C0BC8u: goto label_1c0bc8;
            case 0x1C0BCCu: goto label_1c0bcc;
            case 0x1C0BD0u: goto label_1c0bd0;
            case 0x1C0BD4u: goto label_1c0bd4;
            case 0x1C0BD8u: goto label_1c0bd8;
            case 0x1C0BDCu: goto label_1c0bdc;
            case 0x1C0BE0u: goto label_1c0be0;
            case 0x1C0BE4u: goto label_1c0be4;
            case 0x1C0BE8u: goto label_1c0be8;
            case 0x1C0BECu: goto label_1c0bec;
            case 0x1C0BF0u: goto label_1c0bf0;
            case 0x1C0BF4u: goto label_1c0bf4;
            case 0x1C0BF8u: goto label_1c0bf8;
            case 0x1C0BFCu: goto label_1c0bfc;
            case 0x1C0C00u: goto label_1c0c00;
            case 0x1C0C04u: goto label_1c0c04;
            case 0x1C0C08u: goto label_1c0c08;
            case 0x1C0C0Cu: goto label_1c0c0c;
            case 0x1C0C10u: goto label_1c0c10;
            case 0x1C0C14u: goto label_1c0c14;
            case 0x1C0C18u: goto label_1c0c18;
            case 0x1C0C1Cu: goto label_1c0c1c;
            case 0x1C0C20u: goto label_1c0c20;
            case 0x1C0C24u: goto label_1c0c24;
            case 0x1C0C28u: goto label_1c0c28;
            case 0x1C0C2Cu: goto label_1c0c2c;
            case 0x1C0C30u: goto label_1c0c30;
            case 0x1C0C34u: goto label_1c0c34;
            case 0x1C0C38u: goto label_1c0c38;
            case 0x1C0C3Cu: goto label_1c0c3c;
            case 0x1C0C40u: goto label_1c0c40;
            case 0x1C0C44u: goto label_1c0c44;
            case 0x1C0C48u: goto label_1c0c48;
            case 0x1C0C4Cu: goto label_1c0c4c;
            case 0x1C0C50u: goto label_1c0c50;
            case 0x1C0C54u: goto label_1c0c54;
            case 0x1C0C58u: goto label_1c0c58;
            case 0x1C0C5Cu: goto label_1c0c5c;
            case 0x1C0C60u: goto label_1c0c60;
            case 0x1C0C64u: goto label_1c0c64;
            case 0x1C0C68u: goto label_1c0c68;
            case 0x1C0C6Cu: goto label_1c0c6c;
            case 0x1C0C70u: goto label_1c0c70;
            case 0x1C0C74u: goto label_1c0c74;
            case 0x1C0C78u: goto label_1c0c78;
            case 0x1C0C7Cu: goto label_1c0c7c;
            case 0x1C0C80u: goto label_1c0c80;
            case 0x1C0C84u: goto label_1c0c84;
            case 0x1C0C88u: goto label_1c0c88;
            case 0x1C0C8Cu: goto label_1c0c8c;
            case 0x1C0C90u: goto label_1c0c90;
            case 0x1C0C94u: goto label_1c0c94;
            case 0x1C0C98u: goto label_1c0c98;
            case 0x1C0C9Cu: goto label_1c0c9c;
            case 0x1C0CA0u: goto label_1c0ca0;
            case 0x1C0CA4u: goto label_1c0ca4;
            case 0x1C0CA8u: goto label_1c0ca8;
            case 0x1C0CACu: goto label_1c0cac;
            case 0x1C0CB0u: goto label_1c0cb0;
            case 0x1C0CB4u: goto label_1c0cb4;
            case 0x1C0CB8u: goto label_1c0cb8;
            case 0x1C0CBCu: goto label_1c0cbc;
            case 0x1C0CC0u: goto label_1c0cc0;
            case 0x1C0CC4u: goto label_1c0cc4;
            case 0x1C0CC8u: goto label_1c0cc8;
            case 0x1C0CCCu: goto label_1c0ccc;
            case 0x1C0CD0u: goto label_1c0cd0;
            case 0x1C0CD4u: goto label_1c0cd4;
            case 0x1C0CD8u: goto label_1c0cd8;
            case 0x1C0CDCu: goto label_1c0cdc;
            case 0x1C0CE0u: goto label_1c0ce0;
            case 0x1C0CE4u: goto label_1c0ce4;
            case 0x1C0CE8u: goto label_1c0ce8;
            case 0x1C0CECu: goto label_1c0cec;
            case 0x1C0CF0u: goto label_1c0cf0;
            case 0x1C0CF4u: goto label_1c0cf4;
            case 0x1C0CF8u: goto label_1c0cf8;
            case 0x1C0CFCu: goto label_1c0cfc;
            case 0x1C0D00u: goto label_1c0d00;
            case 0x1C0D04u: goto label_1c0d04;
            case 0x1C0D08u: goto label_1c0d08;
            case 0x1C0D0Cu: goto label_1c0d0c;
            case 0x1C0D10u: goto label_1c0d10;
            case 0x1C0D14u: goto label_1c0d14;
            case 0x1C0D18u: goto label_1c0d18;
            case 0x1C0D1Cu: goto label_1c0d1c;
            case 0x1C0D20u: goto label_1c0d20;
            case 0x1C0D24u: goto label_1c0d24;
            case 0x1C0D28u: goto label_1c0d28;
            case 0x1C0D2Cu: goto label_1c0d2c;
            case 0x1C0D30u: goto label_1c0d30;
            case 0x1C0D34u: goto label_1c0d34;
            case 0x1C0D38u: goto label_1c0d38;
            case 0x1C0D3Cu: goto label_1c0d3c;
            case 0x1C0D40u: goto label_1c0d40;
            case 0x1C0D44u: goto label_1c0d44;
            case 0x1C0D48u: goto label_1c0d48;
            case 0x1C0D4Cu: goto label_1c0d4c;
            case 0x1C0D50u: goto label_1c0d50;
            case 0x1C0D54u: goto label_1c0d54;
            case 0x1C0D58u: goto label_1c0d58;
            case 0x1C0D5Cu: goto label_1c0d5c;
            case 0x1C0D60u: goto label_1c0d60;
            case 0x1C0D64u: goto label_1c0d64;
            case 0x1C0D68u: goto label_1c0d68;
            case 0x1C0D6Cu: goto label_1c0d6c;
            case 0x1C0D70u: goto label_1c0d70;
            case 0x1C0D74u: goto label_1c0d74;
            case 0x1C0D78u: goto label_1c0d78;
            case 0x1C0D7Cu: goto label_1c0d7c;
            case 0x1C0D80u: goto label_1c0d80;
            case 0x1C0D84u: goto label_1c0d84;
            case 0x1C0D88u: goto label_1c0d88;
            case 0x1C0D8Cu: goto label_1c0d8c;
            case 0x1C0D90u: goto label_1c0d90;
            case 0x1C0D94u: goto label_1c0d94;
            case 0x1C0D98u: goto label_1c0d98;
            case 0x1C0D9Cu: goto label_1c0d9c;
            case 0x1C0DA0u: goto label_1c0da0;
            case 0x1C0DA4u: goto label_1c0da4;
            case 0x1C0DA8u: goto label_1c0da8;
            case 0x1C0DACu: goto label_1c0dac;
            case 0x1C0DB0u: goto label_1c0db0;
            case 0x1C0DB4u: goto label_1c0db4;
            case 0x1C0DB8u: goto label_1c0db8;
            case 0x1C0DBCu: goto label_1c0dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0A7Cu;
label_1c0a7c:
    // 0x1c0a7c: 0x0
    ctx->pc = 0x1c0a7cu;
    // NOP
label_1c0a80:
    // 0x1c0a80: 0x27bdffd0
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c0a84:
    // 0x1c0a84: 0x3c030023
    ctx->pc = 0x1c0a84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_1c0a88:
    // 0x1c0a88: 0xffbf0020
    ctx->pc = 0x1c0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c0a8c:
    // 0x1c0a8c: 0x24635160
    ctx->pc = 0x1c0a8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20832));
label_1c0a90:
    // 0x1c0a90: 0x7fb10010
    ctx->pc = 0x1c0a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c0a94:
    // 0x1c0a94: 0x7fb00000
    ctx->pc = 0x1c0a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c0a98:
    // 0x1c0a98: 0x8c8500a0
    ctx->pc = 0x1c0a98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_1c0a9c:
    // 0x1c0a9c: 0x8c820000
    ctx->pc = 0x1c0a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0aa0:
    // 0x1c0aa0: 0x52880
    ctx->pc = 0x1c0aa0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_1c0aa4:
    // 0x1c0aa4: 0x651821
    ctx->pc = 0x1c0aa4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c0aa8:
    // 0x1c0aa8: 0x2c410007
    ctx->pc = 0x1c0aa8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 7));
label_1c0aac:
    // 0x1c0aac: 0x8c700000
    ctx->pc = 0x1c0aacu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c0ab0:
    // 0x1c0ab0: 0x102000ba
label_1c0ab4:
    if (ctx->pc == 0x1C0AB4u) {
        ctx->pc = 0x1C0AB4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AB8u;
        goto label_1c0ab8;
    }
    ctx->pc = 0x1C0AB0u;
    {
        const bool branch_taken_0x1c0ab0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0AB4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ab0) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0AB8u;
label_1c0ab8:
    // 0x1c0ab8: 0x3c030025
    ctx->pc = 0x1c0ab8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
label_1c0abc:
    // 0x1c0abc: 0x21080
    ctx->pc = 0x1c0abcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1c0ac0:
    // 0x1c0ac0: 0x24630650
    ctx->pc = 0x1c0ac0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1616));
label_1c0ac4:
    // 0x1c0ac4: 0x431021
    ctx->pc = 0x1c0ac4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c0ac8:
    // 0x1c0ac8: 0x8c420000
    ctx->pc = 0x1c0ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c0acc:
    // 0x1c0acc: 0x400008
label_1c0ad0:
    if (ctx->pc == 0x1C0AD0u) {
        ctx->pc = 0x1C0AD4u;
        goto label_1c0ad4;
    }
    ctx->pc = 0x1C0ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C09D0u: goto label_1c09d0;
            case 0x1C09D4u: goto label_1c09d4;
            case 0x1C09D8u: goto label_1c09d8;
            case 0x1C09DCu: goto label_1c09dc;
            case 0x1C09E0u: goto label_1c09e0;
            case 0x1C09E4u: goto label_1c09e4;
            case 0x1C09E8u: goto label_1c09e8;
            case 0x1C09ECu: goto label_1c09ec;
            case 0x1C09F0u: goto label_1c09f0;
            case 0x1C09F4u: goto label_1c09f4;
            case 0x1C09F8u: goto label_1c09f8;
            case 0x1C09FCu: goto label_1c09fc;
            case 0x1C0A00u: goto label_1c0a00;
            case 0x1C0A04u: goto label_1c0a04;
            case 0x1C0A08u: goto label_1c0a08;
            case 0x1C0A0Cu: goto label_1c0a0c;
            case 0x1C0A10u: goto label_1c0a10;
            case 0x1C0A14u: goto label_1c0a14;
            case 0x1C0A18u: goto label_1c0a18;
            case 0x1C0A1Cu: goto label_1c0a1c;
            case 0x1C0A20u: goto label_1c0a20;
            case 0x1C0A24u: goto label_1c0a24;
            case 0x1C0A28u: goto label_1c0a28;
            case 0x1C0A2Cu: goto label_1c0a2c;
            case 0x1C0A30u: goto label_1c0a30;
            case 0x1C0A34u: goto label_1c0a34;
            case 0x1C0A38u: goto label_1c0a38;
            case 0x1C0A3Cu: goto label_1c0a3c;
            case 0x1C0A40u: goto label_1c0a40;
            case 0x1C0A44u: goto label_1c0a44;
            case 0x1C0A48u: goto label_1c0a48;
            case 0x1C0A4Cu: goto label_1c0a4c;
            case 0x1C0A50u: goto label_1c0a50;
            case 0x1C0A54u: goto label_1c0a54;
            case 0x1C0A58u: goto label_1c0a58;
            case 0x1C0A5Cu: goto label_1c0a5c;
            case 0x1C0A60u: goto label_1c0a60;
            case 0x1C0A64u: goto label_1c0a64;
            case 0x1C0A68u: goto label_1c0a68;
            case 0x1C0A6Cu: goto label_1c0a6c;
            case 0x1C0A70u: goto label_1c0a70;
            case 0x1C0A74u: goto label_1c0a74;
            case 0x1C0A78u: goto label_1c0a78;
            case 0x1C0A7Cu: goto label_1c0a7c;
            case 0x1C0A80u: goto label_1c0a80;
            case 0x1C0A84u: goto label_1c0a84;
            case 0x1C0A88u: goto label_1c0a88;
            case 0x1C0A8Cu: goto label_1c0a8c;
            case 0x1C0A90u: goto label_1c0a90;
            case 0x1C0A94u: goto label_1c0a94;
            case 0x1C0A98u: goto label_1c0a98;
            case 0x1C0A9Cu: goto label_1c0a9c;
            case 0x1C0AA0u: goto label_1c0aa0;
            case 0x1C0AA4u: goto label_1c0aa4;
            case 0x1C0AA8u: goto label_1c0aa8;
            case 0x1C0AACu: goto label_1c0aac;
            case 0x1C0AB0u: goto label_1c0ab0;
            case 0x1C0AB4u: goto label_1c0ab4;
            case 0x1C0AB8u: goto label_1c0ab8;
            case 0x1C0ABCu: goto label_1c0abc;
            case 0x1C0AC0u: goto label_1c0ac0;
            case 0x1C0AC4u: goto label_1c0ac4;
            case 0x1C0AC8u: goto label_1c0ac8;
            case 0x1C0ACCu: goto label_1c0acc;
            case 0x1C0AD0u: goto label_1c0ad0;
            case 0x1C0AD4u: goto label_1c0ad4;
            case 0x1C0AD8u: goto label_1c0ad8;
            case 0x1C0ADCu: goto label_1c0adc;
            case 0x1C0AE0u: goto label_1c0ae0;
            case 0x1C0AE4u: goto label_1c0ae4;
            case 0x1C0AE8u: goto label_1c0ae8;
            case 0x1C0AECu: goto label_1c0aec;
            case 0x1C0AF0u: goto label_1c0af0;
            case 0x1C0AF4u: goto label_1c0af4;
            case 0x1C0AF8u: goto label_1c0af8;
            case 0x1C0AFCu: goto label_1c0afc;
            case 0x1C0B00u: goto label_1c0b00;
            case 0x1C0B04u: goto label_1c0b04;
            case 0x1C0B08u: goto label_1c0b08;
            case 0x1C0B0Cu: goto label_1c0b0c;
            case 0x1C0B10u: goto label_1c0b10;
            case 0x1C0B14u: goto label_1c0b14;
            case 0x1C0B18u: goto label_1c0b18;
            case 0x1C0B1Cu: goto label_1c0b1c;
            case 0x1C0B20u: goto label_1c0b20;
            case 0x1C0B24u: goto label_1c0b24;
            case 0x1C0B28u: goto label_1c0b28;
            case 0x1C0B2Cu: goto label_1c0b2c;
            case 0x1C0B30u: goto label_1c0b30;
            case 0x1C0B34u: goto label_1c0b34;
            case 0x1C0B38u: goto label_1c0b38;
            case 0x1C0B3Cu: goto label_1c0b3c;
            case 0x1C0B40u: goto label_1c0b40;
            case 0x1C0B44u: goto label_1c0b44;
            case 0x1C0B48u: goto label_1c0b48;
            case 0x1C0B4Cu: goto label_1c0b4c;
            case 0x1C0B50u: goto label_1c0b50;
            case 0x1C0B54u: goto label_1c0b54;
            case 0x1C0B58u: goto label_1c0b58;
            case 0x1C0B5Cu: goto label_1c0b5c;
            case 0x1C0B60u: goto label_1c0b60;
            case 0x1C0B64u: goto label_1c0b64;
            case 0x1C0B68u: goto label_1c0b68;
            case 0x1C0B6Cu: goto label_1c0b6c;
            case 0x1C0B70u: goto label_1c0b70;
            case 0x1C0B74u: goto label_1c0b74;
            case 0x1C0B78u: goto label_1c0b78;
            case 0x1C0B7Cu: goto label_1c0b7c;
            case 0x1C0B80u: goto label_1c0b80;
            case 0x1C0B84u: goto label_1c0b84;
            case 0x1C0B88u: goto label_1c0b88;
            case 0x1C0B8Cu: goto label_1c0b8c;
            case 0x1C0B90u: goto label_1c0b90;
            case 0x1C0B94u: goto label_1c0b94;
            case 0x1C0B98u: goto label_1c0b98;
            case 0x1C0B9Cu: goto label_1c0b9c;
            case 0x1C0BA0u: goto label_1c0ba0;
            case 0x1C0BA4u: goto label_1c0ba4;
            case 0x1C0BA8u: goto label_1c0ba8;
            case 0x1C0BACu: goto label_1c0bac;
            case 0x1C0BB0u: goto label_1c0bb0;
            case 0x1C0BB4u: goto label_1c0bb4;
            case 0x1C0BB8u: goto label_1c0bb8;
            case 0x1C0BBCu: goto label_1c0bbc;
            case 0x1C0BC0u: goto label_1c0bc0;
            case 0x1C0BC4u: goto label_1c0bc4;
            case 0x1C0BC8u: goto label_1c0bc8;
            case 0x1C0BCCu: goto label_1c0bcc;
            case 0x1C0BD0u: goto label_1c0bd0;
            case 0x1C0BD4u: goto label_1c0bd4;
            case 0x1C0BD8u: goto label_1c0bd8;
            case 0x1C0BDCu: goto label_1c0bdc;
            case 0x1C0BE0u: goto label_1c0be0;
            case 0x1C0BE4u: goto label_1c0be4;
            case 0x1C0BE8u: goto label_1c0be8;
            case 0x1C0BECu: goto label_1c0bec;
            case 0x1C0BF0u: goto label_1c0bf0;
            case 0x1C0BF4u: goto label_1c0bf4;
            case 0x1C0BF8u: goto label_1c0bf8;
            case 0x1C0BFCu: goto label_1c0bfc;
            case 0x1C0C00u: goto label_1c0c00;
            case 0x1C0C04u: goto label_1c0c04;
            case 0x1C0C08u: goto label_1c0c08;
            case 0x1C0C0Cu: goto label_1c0c0c;
            case 0x1C0C10u: goto label_1c0c10;
            case 0x1C0C14u: goto label_1c0c14;
            case 0x1C0C18u: goto label_1c0c18;
            case 0x1C0C1Cu: goto label_1c0c1c;
            case 0x1C0C20u: goto label_1c0c20;
            case 0x1C0C24u: goto label_1c0c24;
            case 0x1C0C28u: goto label_1c0c28;
            case 0x1C0C2Cu: goto label_1c0c2c;
            case 0x1C0C30u: goto label_1c0c30;
            case 0x1C0C34u: goto label_1c0c34;
            case 0x1C0C38u: goto label_1c0c38;
            case 0x1C0C3Cu: goto label_1c0c3c;
            case 0x1C0C40u: goto label_1c0c40;
            case 0x1C0C44u: goto label_1c0c44;
            case 0x1C0C48u: goto label_1c0c48;
            case 0x1C0C4Cu: goto label_1c0c4c;
            case 0x1C0C50u: goto label_1c0c50;
            case 0x1C0C54u: goto label_1c0c54;
            case 0x1C0C58u: goto label_1c0c58;
            case 0x1C0C5Cu: goto label_1c0c5c;
            case 0x1C0C60u: goto label_1c0c60;
            case 0x1C0C64u: goto label_1c0c64;
            case 0x1C0C68u: goto label_1c0c68;
            case 0x1C0C6Cu: goto label_1c0c6c;
            case 0x1C0C70u: goto label_1c0c70;
            case 0x1C0C74u: goto label_1c0c74;
            case 0x1C0C78u: goto label_1c0c78;
            case 0x1C0C7Cu: goto label_1c0c7c;
            case 0x1C0C80u: goto label_1c0c80;
            case 0x1C0C84u: goto label_1c0c84;
            case 0x1C0C88u: goto label_1c0c88;
            case 0x1C0C8Cu: goto label_1c0c8c;
            case 0x1C0C90u: goto label_1c0c90;
            case 0x1C0C94u: goto label_1c0c94;
            case 0x1C0C98u: goto label_1c0c98;
            case 0x1C0C9Cu: goto label_1c0c9c;
            case 0x1C0CA0u: goto label_1c0ca0;
            case 0x1C0CA4u: goto label_1c0ca4;
            case 0x1C0CA8u: goto label_1c0ca8;
            case 0x1C0CACu: goto label_1c0cac;
            case 0x1C0CB0u: goto label_1c0cb0;
            case 0x1C0CB4u: goto label_1c0cb4;
            case 0x1C0CB8u: goto label_1c0cb8;
            case 0x1C0CBCu: goto label_1c0cbc;
            case 0x1C0CC0u: goto label_1c0cc0;
            case 0x1C0CC4u: goto label_1c0cc4;
            case 0x1C0CC8u: goto label_1c0cc8;
            case 0x1C0CCCu: goto label_1c0ccc;
            case 0x1C0CD0u: goto label_1c0cd0;
            case 0x1C0CD4u: goto label_1c0cd4;
            case 0x1C0CD8u: goto label_1c0cd8;
            case 0x1C0CDCu: goto label_1c0cdc;
            case 0x1C0CE0u: goto label_1c0ce0;
            case 0x1C0CE4u: goto label_1c0ce4;
            case 0x1C0CE8u: goto label_1c0ce8;
            case 0x1C0CECu: goto label_1c0cec;
            case 0x1C0CF0u: goto label_1c0cf0;
            case 0x1C0CF4u: goto label_1c0cf4;
            case 0x1C0CF8u: goto label_1c0cf8;
            case 0x1C0CFCu: goto label_1c0cfc;
            case 0x1C0D00u: goto label_1c0d00;
            case 0x1C0D04u: goto label_1c0d04;
            case 0x1C0D08u: goto label_1c0d08;
            case 0x1C0D0Cu: goto label_1c0d0c;
            case 0x1C0D10u: goto label_1c0d10;
            case 0x1C0D14u: goto label_1c0d14;
            case 0x1C0D18u: goto label_1c0d18;
            case 0x1C0D1Cu: goto label_1c0d1c;
            case 0x1C0D20u: goto label_1c0d20;
            case 0x1C0D24u: goto label_1c0d24;
            case 0x1C0D28u: goto label_1c0d28;
            case 0x1C0D2Cu: goto label_1c0d2c;
            case 0x1C0D30u: goto label_1c0d30;
            case 0x1C0D34u: goto label_1c0d34;
            case 0x1C0D38u: goto label_1c0d38;
            case 0x1C0D3Cu: goto label_1c0d3c;
            case 0x1C0D40u: goto label_1c0d40;
            case 0x1C0D44u: goto label_1c0d44;
            case 0x1C0D48u: goto label_1c0d48;
            case 0x1C0D4Cu: goto label_1c0d4c;
            case 0x1C0D50u: goto label_1c0d50;
            case 0x1C0D54u: goto label_1c0d54;
            case 0x1C0D58u: goto label_1c0d58;
            case 0x1C0D5Cu: goto label_1c0d5c;
            case 0x1C0D60u: goto label_1c0d60;
            case 0x1C0D64u: goto label_1c0d64;
            case 0x1C0D68u: goto label_1c0d68;
            case 0x1C0D6Cu: goto label_1c0d6c;
            case 0x1C0D70u: goto label_1c0d70;
            case 0x1C0D74u: goto label_1c0d74;
            case 0x1C0D78u: goto label_1c0d78;
            case 0x1C0D7Cu: goto label_1c0d7c;
            case 0x1C0D80u: goto label_1c0d80;
            case 0x1C0D84u: goto label_1c0d84;
            case 0x1C0D88u: goto label_1c0d88;
            case 0x1C0D8Cu: goto label_1c0d8c;
            case 0x1C0D90u: goto label_1c0d90;
            case 0x1C0D94u: goto label_1c0d94;
            case 0x1C0D98u: goto label_1c0d98;
            case 0x1C0D9Cu: goto label_1c0d9c;
            case 0x1C0DA0u: goto label_1c0da0;
            case 0x1C0DA4u: goto label_1c0da4;
            case 0x1C0DA8u: goto label_1c0da8;
            case 0x1C0DACu: goto label_1c0dac;
            case 0x1C0DB0u: goto label_1c0db0;
            case 0x1C0DB4u: goto label_1c0db4;
            case 0x1C0DB8u: goto label_1c0db8;
            case 0x1C0DBCu: goto label_1c0dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0AD4u;
label_1c0ad4:
    // 0x1c0ad4: 0xc06fe10
label_1c0ad8:
    if (ctx->pc == 0x1C0AD8u) {
        ctx->pc = 0x1C0ADCu;
        goto label_1c0adc;
    }
    ctx->pc = 0x1C0AD4u;
    SET_GPR_U32(ctx, 31, 0x1C0ADCu);
    ctx->pc = 0x1BF840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF840_0x1bf840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0ADCu; }
    }
    if (ctx->pc != 0x1C0ADCu) { return; }
    ctx->pc = 0x1C0ADCu;
label_1c0adc:
    // 0x1c0adc: 0x24030002
    ctx->pc = 0x1c0adcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1c0ae0:
    // 0x1c0ae0: 0x10430010
label_1c0ae4:
    if (ctx->pc == 0x1C0AE4u) {
        ctx->pc = 0x1C0AE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C0AE8u;
        goto label_1c0ae8;
    }
    ctx->pc = 0x1C0AE0u;
    {
        const bool branch_taken_0x1c0ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C0AE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c0ae0) {
            ctx->pc = 0x1C0B24u;
            goto label_1c0b24;
        }
    }
    ctx->pc = 0x1C0AE8u;
label_1c0ae8:
    // 0x1c0ae8: 0x1043000e
label_1c0aec:
    if (ctx->pc == 0x1C0AECu) {
        ctx->pc = 0x1C0AF0u;
        goto label_1c0af0;
    }
    ctx->pc = 0x1C0AE8u;
    {
        const bool branch_taken_0x1c0ae8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0ae8) {
            ctx->pc = 0x1C0B24u;
            goto label_1c0b24;
        }
    }
    ctx->pc = 0x1C0AF0u;
label_1c0af0:
    // 0x1c0af0: 0x24030003
    ctx->pc = 0x1c0af0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1c0af4:
    // 0x1c0af4: 0x10430008
label_1c0af8:
    if (ctx->pc == 0x1C0AF8u) {
        ctx->pc = 0x1C0AFCu;
        goto label_1c0afc;
    }
    ctx->pc = 0x1C0AF4u;
    {
        const bool branch_taken_0x1c0af4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0af4) {
            ctx->pc = 0x1C0B18u;
            goto label_1c0b18;
        }
    }
    ctx->pc = 0x1C0AFCu;
label_1c0afc:
    // 0x1c0afc: 0x10400003
label_1c0b00:
    if (ctx->pc == 0x1C0B00u) {
        ctx->pc = 0x1C0B04u;
        goto label_1c0b04;
    }
    ctx->pc = 0x1C0AFCu;
    {
        const bool branch_taken_0x1c0afc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0afc) {
            ctx->pc = 0x1C0B0Cu;
            goto label_1c0b0c;
        }
    }
    ctx->pc = 0x1C0B04u;
label_1c0b04:
    // 0x1c0b04: 0x100000a6
label_1c0b08:
    if (ctx->pc == 0x1C0B08u) {
        ctx->pc = 0x1C0B08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B0Cu;
        goto label_1c0b0c;
    }
    ctx->pc = 0x1C0B04u;
    {
        const bool branch_taken_0x1c0b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0B08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b04) {
            ctx->pc = 0x1C0DA0u;
            goto label_1c0da0;
        }
    }
    ctx->pc = 0x1C0B0Cu;
label_1c0b0c:
    // 0x1c0b0c: 0x2402ff01
    ctx->pc = 0x1c0b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967041));
label_1c0b10:
    // 0x1c0b10: 0x100000a2
label_1c0b14:
    if (ctx->pc == 0x1C0B14u) {
        ctx->pc = 0x1C0B14u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0B18u;
        goto label_1c0b18;
    }
    ctx->pc = 0x1C0B10u;
    {
        const bool branch_taken_0x1c0b10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0B14u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0b10) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0B18u;
label_1c0b18:
    // 0x1c0b18: 0x2402ff02
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967042));
label_1c0b1c:
    // 0x1c0b1c: 0x1000009f
label_1c0b20:
    if (ctx->pc == 0x1C0B20u) {
        ctx->pc = 0x1C0B20u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0B24u;
        goto label_1c0b24;
    }
    ctx->pc = 0x1C0B1Cu;
    {
        const bool branch_taken_0x1c0b1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0B20u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0b1c) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0B24u;
label_1c0b24:
    // 0x1c0b24: 0x8e220000
    ctx->pc = 0x1c0b24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0b28:
    // 0x1c0b28: 0x220202d
    ctx->pc = 0x1c0b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b2c:
    // 0x1c0b2c: 0x24420001
    ctx->pc = 0x1c0b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c0b30:
    // 0x1c0b30: 0xc0704f0
label_1c0b34:
    if (ctx->pc == 0x1C0B34u) {
        ctx->pc = 0x1C0B34u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0B38u;
        goto label_1c0b38;
    }
    ctx->pc = 0x1C0B30u;
    SET_GPR_U32(ctx, 31, 0x1C0B38u);
    ctx->pc = 0x1C0B34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1C13C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C13C0_0x1c13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B38u; }
    }
    if (ctx->pc != 0x1C0B38u) { return; }
    ctx->pc = 0x1C0B38u;
label_1c0b38:
    // 0x1c0b38: 0x8e060010
    ctx->pc = 0x1c0b38u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c0b3c:
    // 0x1c0b3c: 0x3c050025
    ctx->pc = 0x1c0b3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1c0b40:
    // 0x1c0b40: 0x26240044
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 68));
label_1c0b44:
    // 0x1c0b44: 0xc042a0c
label_1c0b48:
    if (ctx->pc == 0x1C0B48u) {
        ctx->pc = 0x1C0B48u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1608));
        ctx->pc = 0x1C0B4Cu;
        goto label_1c0b4c;
    }
    ctx->pc = 0x1C0B44u;
    SET_GPR_U32(ctx, 31, 0x1C0B4Cu);
    ctx->pc = 0x1C0B48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1608));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B4Cu; }
    }
    if (ctx->pc != 0x1C0B4Cu) { return; }
    ctx->pc = 0x1C0B4Cu;
label_1c0b4c:
    // 0x1c0b4c: 0x8e020008
    ctx->pc = 0x1c0b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c0b50:
    // 0x1c0b50: 0x10000092
label_1c0b54:
    if (ctx->pc == 0x1C0B54u) {
        ctx->pc = 0x1C0B54u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0B58u;
        goto label_1c0b58;
    }
    ctx->pc = 0x1C0B50u;
    {
        const bool branch_taken_0x1c0b50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0B54u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0b50) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0B58u;
label_1c0b58:
    // 0x1c0b58: 0xc06ff00
label_1c0b5c:
    if (ctx->pc == 0x1C0B5Cu) {
        ctx->pc = 0x1C0B60u;
        goto label_1c0b60;
    }
    ctx->pc = 0x1C0B58u;
    SET_GPR_U32(ctx, 31, 0x1C0B60u);
    ctx->pc = 0x1BFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFC00_0x1bfc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0B60u; }
    }
    if (ctx->pc != 0x1C0B60u) { return; }
    ctx->pc = 0x1C0B60u;
label_1c0b60:
    // 0x1c0b60: 0x24030001
    ctx->pc = 0x1c0b60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c0b64:
    // 0x1c0b64: 0x1043000a
label_1c0b68:
    if (ctx->pc == 0x1C0B68u) {
        ctx->pc = 0x1C0B6Cu;
        goto label_1c0b6c;
    }
    ctx->pc = 0x1C0B64u;
    {
        const bool branch_taken_0x1c0b64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0b64) {
            ctx->pc = 0x1C0B90u;
            goto label_1c0b90;
        }
    }
    ctx->pc = 0x1C0B6Cu;
label_1c0b6c:
    // 0x1c0b6c: 0x10400003
label_1c0b70:
    if (ctx->pc == 0x1C0B70u) {
        ctx->pc = 0x1C0B74u;
        goto label_1c0b74;
    }
    ctx->pc = 0x1C0B6Cu;
    {
        const bool branch_taken_0x1c0b6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0b6c) {
            ctx->pc = 0x1C0B7Cu;
            goto label_1c0b7c;
        }
    }
    ctx->pc = 0x1C0B74u;
label_1c0b74:
    // 0x1c0b74: 0x10000089
label_1c0b78:
    if (ctx->pc == 0x1C0B78u) {
        ctx->pc = 0x1C0B7Cu;
        goto label_1c0b7c;
    }
    ctx->pc = 0x1C0B74u;
    {
        const bool branch_taken_0x1c0b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0b74) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0B7Cu;
label_1c0b7c:
    // 0x1c0b7c: 0x8e220000
    ctx->pc = 0x1c0b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0b80:
    // 0x1c0b80: 0x24420001
    ctx->pc = 0x1c0b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c0b84:
    // 0x1c0b84: 0xae220000
    ctx->pc = 0x1c0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c0b88:
    // 0x1c0b88: 0x10000084
label_1c0b8c:
    if (ctx->pc == 0x1C0B8Cu) {
        ctx->pc = 0x1C0B8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1C0B90u;
        goto label_1c0b90;
    }
    ctx->pc = 0x1C0B88u;
    {
        const bool branch_taken_0x1c0b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0B8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x1c0b88) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0B90u;
label_1c0b90:
    // 0x1c0b90: 0xae200000
    ctx->pc = 0x1c0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c0b94:
    // 0x1c0b94: 0x2402ff00
    ctx->pc = 0x1c0b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c0b98:
    // 0x1c0b98: 0x10000080
label_1c0b9c:
    if (ctx->pc == 0x1C0B9Cu) {
        ctx->pc = 0x1C0B9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0BA0u;
        goto label_1c0ba0;
    }
    ctx->pc = 0x1C0B98u;
    {
        const bool branch_taken_0x1c0b98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0B9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0b98) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0BA0u;
label_1c0ba0:
    // 0x1c0ba0: 0x8e220008
    ctx->pc = 0x1c0ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c0ba4:
    // 0x1c0ba4: 0x21100
    ctx->pc = 0x1c0ba4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1c0ba8:
    // 0x1c0ba8: 0x501021
    ctx->pc = 0x1c0ba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c0bac:
    // 0x1c0bac: 0x8c42000c
    ctx->pc = 0x1c0bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1c0bb0:
    // 0x1c0bb0: 0x1040006c
label_1c0bb4:
    if (ctx->pc == 0x1C0BB4u) {
        ctx->pc = 0x1C0BB4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0BB8u;
        goto label_1c0bb8;
    }
    ctx->pc = 0x1C0BB0u;
    {
        const bool branch_taken_0x1c0bb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0BB4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0bb0) {
            ctx->pc = 0x1C0D64u;
            goto label_1c0d64;
        }
    }
    ctx->pc = 0x1C0BB8u;
label_1c0bb8:
    // 0x1c0bb8: 0x8e220008
    ctx->pc = 0x1c0bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c0bbc:
    // 0x1c0bbc: 0x3c050025
    ctx->pc = 0x1c0bbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
label_1c0bc0:
    // 0x1c0bc0: 0x8e060010
    ctx->pc = 0x1c0bc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c0bc4:
    // 0x1c0bc4: 0x26240044
    ctx->pc = 0x1c0bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 68));
label_1c0bc8:
    // 0x1c0bc8: 0x21100
    ctx->pc = 0x1c0bc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1c0bcc:
    // 0x1c0bcc: 0x501021
    ctx->pc = 0x1c0bccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c0bd0:
    // 0x1c0bd0: 0x8c470010
    ctx->pc = 0x1c0bd0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1c0bd4:
    // 0x1c0bd4: 0xc042a0c
label_1c0bd8:
    if (ctx->pc == 0x1C0BD8u) {
        ctx->pc = 0x1C0BD8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1600));
        ctx->pc = 0x1C0BDCu;
        goto label_1c0bdc;
    }
    ctx->pc = 0x1C0BD4u;
    SET_GPR_U32(ctx, 31, 0x1C0BDCu);
    ctx->pc = 0x1C0BD8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1600));
    ctx->pc = 0x10A830u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A830_0x10a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0BDCu; }
    }
    if (ctx->pc != 0x1C0BDCu) { return; }
    ctx->pc = 0x1C0BDCu;
label_1c0bdc:
    // 0x1c0bdc: 0x8e220008
    ctx->pc = 0x1c0bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c0be0:
    // 0x1c0be0: 0x18400005
label_1c0be4:
    if (ctx->pc == 0x1C0BE4u) {
        ctx->pc = 0x1C0BE8u;
        goto label_1c0be8;
    }
    ctx->pc = 0x1C0BE0u;
    {
        const bool branch_taken_0x1c0be0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c0be0) {
            ctx->pc = 0x1C0BF8u;
            goto label_1c0bf8;
        }
    }
    ctx->pc = 0x1C0BE8u;
label_1c0be8:
    // 0x1c0be8: 0x21100
    ctx->pc = 0x1c0be8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1c0bec:
    // 0x1c0bec: 0x501021
    ctx->pc = 0x1c0becu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c0bf0:
    // 0x1c0bf0: 0x8c420014
    ctx->pc = 0x1c0bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c0bf4:
    // 0x1c0bf4: 0xae22009c
    ctx->pc = 0x1c0bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_1c0bf8:
    // 0x1c0bf8: 0x8e220008
    ctx->pc = 0x1c0bf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c0bfc:
    // 0x1c0bfc: 0x21100
    ctx->pc = 0x1c0bfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_1c0c00:
    // 0x1c0c00: 0x501021
    ctx->pc = 0x1c0c00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c0c04:
    // 0x1c0c04: 0x8c420018
    ctx->pc = 0x1c0c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1c0c08:
    // 0x1c0c08: 0xae220088
    ctx->pc = 0x1c0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1c0c0c:
    // 0x1c0c0c: 0x8e220000
    ctx->pc = 0x1c0c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0c10:
    // 0x1c0c10: 0x24420001
    ctx->pc = 0x1c0c10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c0c14:
    // 0x1c0c14: 0xae220000
    ctx->pc = 0x1c0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c0c18:
    // 0x1c0c18: 0xc06fe94
label_1c0c1c:
    if (ctx->pc == 0x1C0C1Cu) {
        ctx->pc = 0x1C0C1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C20u;
        goto label_1c0c20;
    }
    ctx->pc = 0x1C0C18u;
    SET_GPR_U32(ctx, 31, 0x1C0C20u);
    ctx->pc = 0x1C0C1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1BFA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFA50_0x1bfa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0C20u; }
    }
    if (ctx->pc != 0x1C0C20u) { return; }
    ctx->pc = 0x1C0C20u;
label_1c0c20:
    // 0x1c0c20: 0x24030003
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1c0c24:
    // 0x1c0c24: 0x10430020
label_1c0c28:
    if (ctx->pc == 0x1C0C28u) {
        ctx->pc = 0x1C0C28u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C0C2Cu;
        goto label_1c0c2c;
    }
    ctx->pc = 0x1C0C24u;
    {
        const bool branch_taken_0x1c0c24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C0C28u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c0c24) {
            ctx->pc = 0x1C0CA8u;
            goto label_1c0ca8;
        }
    }
    ctx->pc = 0x1C0C2Cu;
label_1c0c2c:
    // 0x1c0c2c: 0x1043001a
label_1c0c30:
    if (ctx->pc == 0x1C0C30u) {
        ctx->pc = 0x1C0C30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C0C34u;
        goto label_1c0c34;
    }
    ctx->pc = 0x1C0C2Cu;
    {
        const bool branch_taken_0x1c0c2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C0C30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c0c2c) {
            ctx->pc = 0x1C0C98u;
            goto label_1c0c98;
        }
    }
    ctx->pc = 0x1C0C34u;
label_1c0c34:
    // 0x1c0c34: 0x10440014
label_1c0c38:
    if (ctx->pc == 0x1C0C38u) {
        ctx->pc = 0x1C0C3Cu;
        goto label_1c0c3c;
    }
    ctx->pc = 0x1C0C34u;
    {
        const bool branch_taken_0x1c0c34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x1c0c34) {
            ctx->pc = 0x1C0C88u;
            goto label_1c0c88;
        }
    }
    ctx->pc = 0x1C0C3Cu;
label_1c0c3c:
    // 0x1c0c3c: 0x10400003
label_1c0c40:
    if (ctx->pc == 0x1C0C40u) {
        ctx->pc = 0x1C0C40u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1C0C44u;
        goto label_1c0c44;
    }
    ctx->pc = 0x1C0C3Cu;
    {
        const bool branch_taken_0x1c0c3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0C40u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c0c3c) {
            ctx->pc = 0x1C0C4Cu;
            goto label_1c0c4c;
        }
    }
    ctx->pc = 0x1C0C44u;
label_1c0c44:
    // 0x1c0c44: 0x10000055
label_1c0c48:
    if (ctx->pc == 0x1C0C48u) {
        ctx->pc = 0x1C0C4Cu;
        goto label_1c0c4c;
    }
    ctx->pc = 0x1C0C44u;
    {
        const bool branch_taken_0x1c0c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0c44) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0C4Cu;
label_1c0c4c:
    // 0x1c0c4c: 0x8e220088
    ctx->pc = 0x1c0c4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1c0c50:
    // 0x1c0c50: 0x8c236ac0
    ctx->pc = 0x1c0c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 27328)));
label_1c0c54:
    // 0x1c0c54: 0x10620005
label_1c0c58:
    if (ctx->pc == 0x1C0C58u) {
        ctx->pc = 0x1C0C5Cu;
        goto label_1c0c5c;
    }
    ctx->pc = 0x1C0C54u;
    {
        const bool branch_taken_0x1c0c54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1c0c54) {
            ctx->pc = 0x1C0C6Cu;
            goto label_1c0c6c;
        }
    }
    ctx->pc = 0x1C0C5Cu;
label_1c0c5c:
    // 0x1c0c5c: 0x8e220000
    ctx->pc = 0x1c0c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0c60:
    // 0x1c0c60: 0x24420001
    ctx->pc = 0x1c0c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c0c64:
    // 0x1c0c64: 0x1000004d
label_1c0c68:
    if (ctx->pc == 0x1C0C68u) {
        ctx->pc = 0x1C0C68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0C6Cu;
        goto label_1c0c6c;
    }
    ctx->pc = 0x1C0C64u;
    {
        const bool branch_taken_0x1c0c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0C68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0c64) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0C6Cu;
label_1c0c6c:
    // 0x1c0c6c: 0x8e220084
    ctx->pc = 0x1c0c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_1c0c70:
    // 0x1c0c70: 0x1044003c
label_1c0c74:
    if (ctx->pc == 0x1C0C74u) {
        ctx->pc = 0x1C0C78u;
        goto label_1c0c78;
    }
    ctx->pc = 0x1C0C70u;
    {
        const bool branch_taken_0x1c0c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x1c0c70) {
            ctx->pc = 0x1C0D64u;
            goto label_1c0d64;
        }
    }
    ctx->pc = 0x1C0C78u;
label_1c0c78:
    // 0x1c0c78: 0x8e220000
    ctx->pc = 0x1c0c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0c7c:
    // 0x1c0c7c: 0x24420003
    ctx->pc = 0x1c0c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3));
label_1c0c80:
    // 0x1c0c80: 0x10000046
label_1c0c84:
    if (ctx->pc == 0x1C0C84u) {
        ctx->pc = 0x1C0C84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0C88u;
        goto label_1c0c88;
    }
    ctx->pc = 0x1C0C80u;
    {
        const bool branch_taken_0x1c0c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0C84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0c80) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0C88u;
label_1c0c88:
    // 0x1c0c88: 0x8e220000
    ctx->pc = 0x1c0c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0c8c:
    // 0x1c0c8c: 0x24420002
    ctx->pc = 0x1c0c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
label_1c0c90:
    // 0x1c0c90: 0x10000042
label_1c0c94:
    if (ctx->pc == 0x1C0C94u) {
        ctx->pc = 0x1C0C94u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0C98u;
        goto label_1c0c98;
    }
    ctx->pc = 0x1C0C90u;
    {
        const bool branch_taken_0x1c0c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0C94u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0c90) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0C98u;
label_1c0c98:
    // 0x1c0c98: 0xae200000
    ctx->pc = 0x1c0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c0c9c:
    // 0x1c0c9c: 0x2402ff01
    ctx->pc = 0x1c0c9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967041));
label_1c0ca0:
    // 0x1c0ca0: 0x1000003e
label_1c0ca4:
    if (ctx->pc == 0x1C0CA4u) {
        ctx->pc = 0x1C0CA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0CA8u;
        goto label_1c0ca8;
    }
    ctx->pc = 0x1C0CA0u;
    {
        const bool branch_taken_0x1c0ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0CA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0ca0) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0CA8u;
label_1c0ca8:
    // 0x1c0ca8: 0xae200000
    ctx->pc = 0x1c0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c0cac:
    // 0x1c0cac: 0x2402ff00
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c0cb0:
    // 0x1c0cb0: 0x1000003a
label_1c0cb4:
    if (ctx->pc == 0x1C0CB4u) {
        ctx->pc = 0x1C0CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0CB8u;
        goto label_1c0cb8;
    }
    ctx->pc = 0x1C0CB0u;
    {
        const bool branch_taken_0x1c0cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0cb0) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0CB8u;
label_1c0cb8:
    // 0x1c0cb8: 0xc06ffb0
label_1c0cbc:
    if (ctx->pc == 0x1C0CBCu) {
        ctx->pc = 0x1C0CC0u;
        goto label_1c0cc0;
    }
    ctx->pc = 0x1C0CB8u;
    SET_GPR_U32(ctx, 31, 0x1C0CC0u);
    ctx->pc = 0x1BFEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFEC0_0x1bfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0CC0u; }
    }
    if (ctx->pc != 0x1C0CC0u) { return; }
    ctx->pc = 0x1C0CC0u;
label_1c0cc0:
    // 0x1c0cc0: 0x24030001
    ctx->pc = 0x1c0cc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c0cc4:
    // 0x1c0cc4: 0x10430009
label_1c0cc8:
    if (ctx->pc == 0x1C0CC8u) {
        ctx->pc = 0x1C0CCCu;
        goto label_1c0ccc;
    }
    ctx->pc = 0x1C0CC4u;
    {
        const bool branch_taken_0x1c0cc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0cc4) {
            ctx->pc = 0x1C0CECu;
            goto label_1c0cec;
        }
    }
    ctx->pc = 0x1C0CCCu;
label_1c0ccc:
    // 0x1c0ccc: 0x10400003
label_1c0cd0:
    if (ctx->pc == 0x1C0CD0u) {
        ctx->pc = 0x1C0CD4u;
        goto label_1c0cd4;
    }
    ctx->pc = 0x1C0CCCu;
    {
        const bool branch_taken_0x1c0ccc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0ccc) {
            ctx->pc = 0x1C0CDCu;
            goto label_1c0cdc;
        }
    }
    ctx->pc = 0x1C0CD4u;
label_1c0cd4:
    // 0x1c0cd4: 0x10000031
label_1c0cd8:
    if (ctx->pc == 0x1C0CD8u) {
        ctx->pc = 0x1C0CDCu;
        goto label_1c0cdc;
    }
    ctx->pc = 0x1C0CD4u;
    {
        const bool branch_taken_0x1c0cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0cd4) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0CDCu;
label_1c0cdc:
    // 0x1c0cdc: 0x8e220000
    ctx->pc = 0x1c0cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0ce0:
    // 0x1c0ce0: 0x24420001
    ctx->pc = 0x1c0ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c0ce4:
    // 0x1c0ce4: 0x1000002d
label_1c0ce8:
    if (ctx->pc == 0x1C0CE8u) {
        ctx->pc = 0x1C0CE8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0CECu;
        goto label_1c0cec;
    }
    ctx->pc = 0x1C0CE4u;
    {
        const bool branch_taken_0x1c0ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0CE8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0ce4) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0CECu;
label_1c0cec:
    // 0x1c0cec: 0xae200000
    ctx->pc = 0x1c0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c0cf0:
    // 0x1c0cf0: 0x2402ff00
    ctx->pc = 0x1c0cf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c0cf4:
    // 0x1c0cf4: 0x10000029
label_1c0cf8:
    if (ctx->pc == 0x1C0CF8u) {
        ctx->pc = 0x1C0CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0CFCu;
        goto label_1c0cfc;
    }
    ctx->pc = 0x1C0CF4u;
    {
        const bool branch_taken_0x1c0cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0CF8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0cf4) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0CFCu;
label_1c0cfc:
    // 0x1c0cfc: 0xc06ff54
label_1c0d00:
    if (ctx->pc == 0x1C0D00u) {
        ctx->pc = 0x1C0D04u;
        goto label_1c0d04;
    }
    ctx->pc = 0x1C0CFCu;
    SET_GPR_U32(ctx, 31, 0x1C0D04u);
    ctx->pc = 0x1BFD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFD50_0x1bfd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0D04u; }
    }
    if (ctx->pc != 0x1C0D04u) { return; }
    ctx->pc = 0x1C0D04u;
label_1c0d04:
    // 0x1c0d04: 0x24030001
    ctx->pc = 0x1c0d04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c0d08:
    // 0x1c0d08: 0x10430009
label_1c0d0c:
    if (ctx->pc == 0x1C0D0Cu) {
        ctx->pc = 0x1C0D10u;
        goto label_1c0d10;
    }
    ctx->pc = 0x1C0D08u;
    {
        const bool branch_taken_0x1c0d08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0d08) {
            ctx->pc = 0x1C0D30u;
            goto label_1c0d30;
        }
    }
    ctx->pc = 0x1C0D10u;
label_1c0d10:
    // 0x1c0d10: 0x10400003
label_1c0d14:
    if (ctx->pc == 0x1C0D14u) {
        ctx->pc = 0x1C0D18u;
        goto label_1c0d18;
    }
    ctx->pc = 0x1C0D10u;
    {
        const bool branch_taken_0x1c0d10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0d10) {
            ctx->pc = 0x1C0D20u;
            goto label_1c0d20;
        }
    }
    ctx->pc = 0x1C0D18u;
label_1c0d18:
    // 0x1c0d18: 0x10000020
label_1c0d1c:
    if (ctx->pc == 0x1C0D1Cu) {
        ctx->pc = 0x1C0D20u;
        goto label_1c0d20;
    }
    ctx->pc = 0x1C0D18u;
    {
        const bool branch_taken_0x1c0d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0d18) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0D20u;
label_1c0d20:
    // 0x1c0d20: 0x8e220000
    ctx->pc = 0x1c0d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c0d24:
    // 0x1c0d24: 0x24420001
    ctx->pc = 0x1c0d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c0d28:
    // 0x1c0d28: 0x1000001c
label_1c0d2c:
    if (ctx->pc == 0x1C0D2Cu) {
        ctx->pc = 0x1C0D2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0D30u;
        goto label_1c0d30;
    }
    ctx->pc = 0x1C0D28u;
    {
        const bool branch_taken_0x1c0d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0D2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0d28) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0D30u;
label_1c0d30:
    // 0x1c0d30: 0xae200000
    ctx->pc = 0x1c0d30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c0d34:
    // 0x1c0d34: 0x2402ff00
    ctx->pc = 0x1c0d34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c0d38:
    // 0x1c0d38: 0x10000018
label_1c0d3c:
    if (ctx->pc == 0x1C0D3Cu) {
        ctx->pc = 0x1C0D3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0D40u;
        goto label_1c0d40;
    }
    ctx->pc = 0x1C0D38u;
    {
        const bool branch_taken_0x1c0d38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0D3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0d38) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0D40u;
label_1c0d40:
    // 0x1c0d40: 0xc06ff80
label_1c0d44:
    if (ctx->pc == 0x1C0D44u) {
        ctx->pc = 0x1C0D48u;
        goto label_1c0d48;
    }
    ctx->pc = 0x1C0D40u;
    SET_GPR_U32(ctx, 31, 0x1C0D48u);
    ctx->pc = 0x1BFE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFE00_0x1bfe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0D48u; }
    }
    if (ctx->pc != 0x1C0D48u) { return; }
    ctx->pc = 0x1C0D48u;
label_1c0d48:
    // 0x1c0d48: 0x24030001
    ctx->pc = 0x1c0d48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c0d4c:
    // 0x1c0d4c: 0x10430010
label_1c0d50:
    if (ctx->pc == 0x1C0D50u) {
        ctx->pc = 0x1C0D54u;
        goto label_1c0d54;
    }
    ctx->pc = 0x1C0D4Cu;
    {
        const bool branch_taken_0x1c0d4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c0d4c) {
            ctx->pc = 0x1C0D90u;
            goto label_1c0d90;
        }
    }
    ctx->pc = 0x1C0D54u;
label_1c0d54:
    // 0x1c0d54: 0x10400003
label_1c0d58:
    if (ctx->pc == 0x1C0D58u) {
        ctx->pc = 0x1C0D5Cu;
        goto label_1c0d5c;
    }
    ctx->pc = 0x1C0D54u;
    {
        const bool branch_taken_0x1c0d54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0d54) {
            ctx->pc = 0x1C0D64u;
            goto label_1c0d64;
        }
    }
    ctx->pc = 0x1C0D5Cu;
label_1c0d5c:
    // 0x1c0d5c: 0x1000000f
label_1c0d60:
    if (ctx->pc == 0x1C0D60u) {
        ctx->pc = 0x1C0D64u;
        goto label_1c0d64;
    }
    ctx->pc = 0x1C0D5Cu;
    {
        const bool branch_taken_0x1c0d5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c0d5c) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0D64u;
label_1c0d64:
    // 0x1c0d64: 0x8e220008
    ctx->pc = 0x1c0d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c0d68:
    // 0x1c0d68: 0x24420001
    ctx->pc = 0x1c0d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1c0d6c:
    // 0x1c0d6c: 0x28410005
    ctx->pc = 0x1c0d6cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
label_1c0d70:
    // 0x1c0d70: 0x10200004
label_1c0d74:
    if (ctx->pc == 0x1C0D74u) {
        ctx->pc = 0x1C0D74u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0D78u;
        goto label_1c0d78;
    }
    ctx->pc = 0x1C0D70u;
    {
        const bool branch_taken_0x1c0d70 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0D74u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0d70) {
            ctx->pc = 0x1C0D84u;
            goto label_1c0d84;
        }
    }
    ctx->pc = 0x1C0D78u;
label_1c0d78:
    // 0x1c0d78: 0x24020002
    ctx->pc = 0x1c0d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1c0d7c:
    // 0x1c0d7c: 0x1000ff88
label_1c0d80:
    if (ctx->pc == 0x1C0D80u) {
        ctx->pc = 0x1C0D80u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C0D84u;
        goto label_1c0d84;
    }
    ctx->pc = 0x1C0D7Cu;
    {
        const bool branch_taken_0x1c0d7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0D80u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1c0d7c) {
            ctx->pc = 0x1C0BA0u;
            goto label_1c0ba0;
        }
    }
    ctx->pc = 0x1C0D84u;
label_1c0d84:
    // 0x1c0d84: 0xae200000
    ctx->pc = 0x1c0d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c0d88:
    // 0x1c0d88: 0x10000004
label_1c0d8c:
    if (ctx->pc == 0x1C0D8Cu) {
        ctx->pc = 0x1C0D8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1C0D90u;
        goto label_1c0d90;
    }
    ctx->pc = 0x1C0D88u;
    {
        const bool branch_taken_0x1c0d88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C0D8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x1c0d88) {
            ctx->pc = 0x1C0D9Cu;
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0D90u;
label_1c0d90:
    // 0x1c0d90: 0xae200000
    ctx->pc = 0x1c0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c0d94:
    // 0x1c0d94: 0x2402ff00
    ctx->pc = 0x1c0d94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c0d98:
    // 0x1c0d98: 0xae220024
    ctx->pc = 0x1c0d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_1c0d9c:
    // 0x1c0d9c: 0x220202d
    ctx->pc = 0x1c0d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0da0:
    // 0x1c0da0: 0xc070108
label_1c0da4:
    if (ctx->pc == 0x1C0DA4u) {
        ctx->pc = 0x1C0DA8u;
        goto label_1c0da8;
    }
    ctx->pc = 0x1C0DA0u;
    SET_GPR_U32(ctx, 31, 0x1C0DA8u);
    ctx->pc = 0x1C0420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0420_0x1c0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0DA8u; }
    }
    if (ctx->pc != 0x1C0DA8u) { return; }
    ctx->pc = 0x1C0DA8u;
label_1c0da8:
    // 0x1c0da8: 0xdfbf0020
    ctx->pc = 0x1c0da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0dac:
    // 0x1c0dac: 0x7bb10010
    ctx->pc = 0x1c0dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0db0:
    // 0x1c0db0: 0x7bb00000
    ctx->pc = 0x1c0db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0db4:
    // 0x1c0db4: 0x3e00008
label_1c0db8:
    if (ctx->pc == 0x1C0DB8u) {
        ctx->pc = 0x1C0DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C0DBCu;
        goto label_1c0dbc;
    }
    ctx->pc = 0x1C0DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C09D0u: goto label_1c09d0;
            case 0x1C09D4u: goto label_1c09d4;
            case 0x1C09D8u: goto label_1c09d8;
            case 0x1C09DCu: goto label_1c09dc;
            case 0x1C09E0u: goto label_1c09e0;
            case 0x1C09E4u: goto label_1c09e4;
            case 0x1C09E8u: goto label_1c09e8;
            case 0x1C09ECu: goto label_1c09ec;
            case 0x1C09F0u: goto label_1c09f0;
            case 0x1C09F4u: goto label_1c09f4;
            case 0x1C09F8u: goto label_1c09f8;
            case 0x1C09FCu: goto label_1c09fc;
            case 0x1C0A00u: goto label_1c0a00;
            case 0x1C0A04u: goto label_1c0a04;
            case 0x1C0A08u: goto label_1c0a08;
            case 0x1C0A0Cu: goto label_1c0a0c;
            case 0x1C0A10u: goto label_1c0a10;
            case 0x1C0A14u: goto label_1c0a14;
            case 0x1C0A18u: goto label_1c0a18;
            case 0x1C0A1Cu: goto label_1c0a1c;
            case 0x1C0A20u: goto label_1c0a20;
            case 0x1C0A24u: goto label_1c0a24;
            case 0x1C0A28u: goto label_1c0a28;
            case 0x1C0A2Cu: goto label_1c0a2c;
            case 0x1C0A30u: goto label_1c0a30;
            case 0x1C0A34u: goto label_1c0a34;
            case 0x1C0A38u: goto label_1c0a38;
            case 0x1C0A3Cu: goto label_1c0a3c;
            case 0x1C0A40u: goto label_1c0a40;
            case 0x1C0A44u: goto label_1c0a44;
            case 0x1C0A48u: goto label_1c0a48;
            case 0x1C0A4Cu: goto label_1c0a4c;
            case 0x1C0A50u: goto label_1c0a50;
            case 0x1C0A54u: goto label_1c0a54;
            case 0x1C0A58u: goto label_1c0a58;
            case 0x1C0A5Cu: goto label_1c0a5c;
            case 0x1C0A60u: goto label_1c0a60;
            case 0x1C0A64u: goto label_1c0a64;
            case 0x1C0A68u: goto label_1c0a68;
            case 0x1C0A6Cu: goto label_1c0a6c;
            case 0x1C0A70u: goto label_1c0a70;
            case 0x1C0A74u: goto label_1c0a74;
            case 0x1C0A78u: goto label_1c0a78;
            case 0x1C0A7Cu: goto label_1c0a7c;
            case 0x1C0A80u: goto label_1c0a80;
            case 0x1C0A84u: goto label_1c0a84;
            case 0x1C0A88u: goto label_1c0a88;
            case 0x1C0A8Cu: goto label_1c0a8c;
            case 0x1C0A90u: goto label_1c0a90;
            case 0x1C0A94u: goto label_1c0a94;
            case 0x1C0A98u: goto label_1c0a98;
            case 0x1C0A9Cu: goto label_1c0a9c;
            case 0x1C0AA0u: goto label_1c0aa0;
            case 0x1C0AA4u: goto label_1c0aa4;
            case 0x1C0AA8u: goto label_1c0aa8;
            case 0x1C0AACu: goto label_1c0aac;
            case 0x1C0AB0u: goto label_1c0ab0;
            case 0x1C0AB4u: goto label_1c0ab4;
            case 0x1C0AB8u: goto label_1c0ab8;
            case 0x1C0ABCu: goto label_1c0abc;
            case 0x1C0AC0u: goto label_1c0ac0;
            case 0x1C0AC4u: goto label_1c0ac4;
            case 0x1C0AC8u: goto label_1c0ac8;
            case 0x1C0ACCu: goto label_1c0acc;
            case 0x1C0AD0u: goto label_1c0ad0;
            case 0x1C0AD4u: goto label_1c0ad4;
            case 0x1C0AD8u: goto label_1c0ad8;
            case 0x1C0ADCu: goto label_1c0adc;
            case 0x1C0AE0u: goto label_1c0ae0;
            case 0x1C0AE4u: goto label_1c0ae4;
            case 0x1C0AE8u: goto label_1c0ae8;
            case 0x1C0AECu: goto label_1c0aec;
            case 0x1C0AF0u: goto label_1c0af0;
            case 0x1C0AF4u: goto label_1c0af4;
            case 0x1C0AF8u: goto label_1c0af8;
            case 0x1C0AFCu: goto label_1c0afc;
            case 0x1C0B00u: goto label_1c0b00;
            case 0x1C0B04u: goto label_1c0b04;
            case 0x1C0B08u: goto label_1c0b08;
            case 0x1C0B0Cu: goto label_1c0b0c;
            case 0x1C0B10u: goto label_1c0b10;
            case 0x1C0B14u: goto label_1c0b14;
            case 0x1C0B18u: goto label_1c0b18;
            case 0x1C0B1Cu: goto label_1c0b1c;
            case 0x1C0B20u: goto label_1c0b20;
            case 0x1C0B24u: goto label_1c0b24;
            case 0x1C0B28u: goto label_1c0b28;
            case 0x1C0B2Cu: goto label_1c0b2c;
            case 0x1C0B30u: goto label_1c0b30;
            case 0x1C0B34u: goto label_1c0b34;
            case 0x1C0B38u: goto label_1c0b38;
            case 0x1C0B3Cu: goto label_1c0b3c;
            case 0x1C0B40u: goto label_1c0b40;
            case 0x1C0B44u: goto label_1c0b44;
            case 0x1C0B48u: goto label_1c0b48;
            case 0x1C0B4Cu: goto label_1c0b4c;
            case 0x1C0B50u: goto label_1c0b50;
            case 0x1C0B54u: goto label_1c0b54;
            case 0x1C0B58u: goto label_1c0b58;
            case 0x1C0B5Cu: goto label_1c0b5c;
            case 0x1C0B60u: goto label_1c0b60;
            case 0x1C0B64u: goto label_1c0b64;
            case 0x1C0B68u: goto label_1c0b68;
            case 0x1C0B6Cu: goto label_1c0b6c;
            case 0x1C0B70u: goto label_1c0b70;
            case 0x1C0B74u: goto label_1c0b74;
            case 0x1C0B78u: goto label_1c0b78;
            case 0x1C0B7Cu: goto label_1c0b7c;
            case 0x1C0B80u: goto label_1c0b80;
            case 0x1C0B84u: goto label_1c0b84;
            case 0x1C0B88u: goto label_1c0b88;
            case 0x1C0B8Cu: goto label_1c0b8c;
            case 0x1C0B90u: goto label_1c0b90;
            case 0x1C0B94u: goto label_1c0b94;
            case 0x1C0B98u: goto label_1c0b98;
            case 0x1C0B9Cu: goto label_1c0b9c;
            case 0x1C0BA0u: goto label_1c0ba0;
            case 0x1C0BA4u: goto label_1c0ba4;
            case 0x1C0BA8u: goto label_1c0ba8;
            case 0x1C0BACu: goto label_1c0bac;
            case 0x1C0BB0u: goto label_1c0bb0;
            case 0x1C0BB4u: goto label_1c0bb4;
            case 0x1C0BB8u: goto label_1c0bb8;
            case 0x1C0BBCu: goto label_1c0bbc;
            case 0x1C0BC0u: goto label_1c0bc0;
            case 0x1C0BC4u: goto label_1c0bc4;
            case 0x1C0BC8u: goto label_1c0bc8;
            case 0x1C0BCCu: goto label_1c0bcc;
            case 0x1C0BD0u: goto label_1c0bd0;
            case 0x1C0BD4u: goto label_1c0bd4;
            case 0x1C0BD8u: goto label_1c0bd8;
            case 0x1C0BDCu: goto label_1c0bdc;
            case 0x1C0BE0u: goto label_1c0be0;
            case 0x1C0BE4u: goto label_1c0be4;
            case 0x1C0BE8u: goto label_1c0be8;
            case 0x1C0BECu: goto label_1c0bec;
            case 0x1C0BF0u: goto label_1c0bf0;
            case 0x1C0BF4u: goto label_1c0bf4;
            case 0x1C0BF8u: goto label_1c0bf8;
            case 0x1C0BFCu: goto label_1c0bfc;
            case 0x1C0C00u: goto label_1c0c00;
            case 0x1C0C04u: goto label_1c0c04;
            case 0x1C0C08u: goto label_1c0c08;
            case 0x1C0C0Cu: goto label_1c0c0c;
            case 0x1C0C10u: goto label_1c0c10;
            case 0x1C0C14u: goto label_1c0c14;
            case 0x1C0C18u: goto label_1c0c18;
            case 0x1C0C1Cu: goto label_1c0c1c;
            case 0x1C0C20u: goto label_1c0c20;
            case 0x1C0C24u: goto label_1c0c24;
            case 0x1C0C28u: goto label_1c0c28;
            case 0x1C0C2Cu: goto label_1c0c2c;
            case 0x1C0C30u: goto label_1c0c30;
            case 0x1C0C34u: goto label_1c0c34;
            case 0x1C0C38u: goto label_1c0c38;
            case 0x1C0C3Cu: goto label_1c0c3c;
            case 0x1C0C40u: goto label_1c0c40;
            case 0x1C0C44u: goto label_1c0c44;
            case 0x1C0C48u: goto label_1c0c48;
            case 0x1C0C4Cu: goto label_1c0c4c;
            case 0x1C0C50u: goto label_1c0c50;
            case 0x1C0C54u: goto label_1c0c54;
            case 0x1C0C58u: goto label_1c0c58;
            case 0x1C0C5Cu: goto label_1c0c5c;
            case 0x1C0C60u: goto label_1c0c60;
            case 0x1C0C64u: goto label_1c0c64;
            case 0x1C0C68u: goto label_1c0c68;
            case 0x1C0C6Cu: goto label_1c0c6c;
            case 0x1C0C70u: goto label_1c0c70;
            case 0x1C0C74u: goto label_1c0c74;
            case 0x1C0C78u: goto label_1c0c78;
            case 0x1C0C7Cu: goto label_1c0c7c;
            case 0x1C0C80u: goto label_1c0c80;
            case 0x1C0C84u: goto label_1c0c84;
            case 0x1C0C88u: goto label_1c0c88;
            case 0x1C0C8Cu: goto label_1c0c8c;
            case 0x1C0C90u: goto label_1c0c90;
            case 0x1C0C94u: goto label_1c0c94;
            case 0x1C0C98u: goto label_1c0c98;
            case 0x1C0C9Cu: goto label_1c0c9c;
            case 0x1C0CA0u: goto label_1c0ca0;
            case 0x1C0CA4u: goto label_1c0ca4;
            case 0x1C0CA8u: goto label_1c0ca8;
            case 0x1C0CACu: goto label_1c0cac;
            case 0x1C0CB0u: goto label_1c0cb0;
            case 0x1C0CB4u: goto label_1c0cb4;
            case 0x1C0CB8u: goto label_1c0cb8;
            case 0x1C0CBCu: goto label_1c0cbc;
            case 0x1C0CC0u: goto label_1c0cc0;
            case 0x1C0CC4u: goto label_1c0cc4;
            case 0x1C0CC8u: goto label_1c0cc8;
            case 0x1C0CCCu: goto label_1c0ccc;
            case 0x1C0CD0u: goto label_1c0cd0;
            case 0x1C0CD4u: goto label_1c0cd4;
            case 0x1C0CD8u: goto label_1c0cd8;
            case 0x1C0CDCu: goto label_1c0cdc;
            case 0x1C0CE0u: goto label_1c0ce0;
            case 0x1C0CE4u: goto label_1c0ce4;
            case 0x1C0CE8u: goto label_1c0ce8;
            case 0x1C0CECu: goto label_1c0cec;
            case 0x1C0CF0u: goto label_1c0cf0;
            case 0x1C0CF4u: goto label_1c0cf4;
            case 0x1C0CF8u: goto label_1c0cf8;
            case 0x1C0CFCu: goto label_1c0cfc;
            case 0x1C0D00u: goto label_1c0d00;
            case 0x1C0D04u: goto label_1c0d04;
            case 0x1C0D08u: goto label_1c0d08;
            case 0x1C0D0Cu: goto label_1c0d0c;
            case 0x1C0D10u: goto label_1c0d10;
            case 0x1C0D14u: goto label_1c0d14;
            case 0x1C0D18u: goto label_1c0d18;
            case 0x1C0D1Cu: goto label_1c0d1c;
            case 0x1C0D20u: goto label_1c0d20;
            case 0x1C0D24u: goto label_1c0d24;
            case 0x1C0D28u: goto label_1c0d28;
            case 0x1C0D2Cu: goto label_1c0d2c;
            case 0x1C0D30u: goto label_1c0d30;
            case 0x1C0D34u: goto label_1c0d34;
            case 0x1C0D38u: goto label_1c0d38;
            case 0x1C0D3Cu: goto label_1c0d3c;
            case 0x1C0D40u: goto label_1c0d40;
            case 0x1C0D44u: goto label_1c0d44;
            case 0x1C0D48u: goto label_1c0d48;
            case 0x1C0D4Cu: goto label_1c0d4c;
            case 0x1C0D50u: goto label_1c0d50;
            case 0x1C0D54u: goto label_1c0d54;
            case 0x1C0D58u: goto label_1c0d58;
            case 0x1C0D5Cu: goto label_1c0d5c;
            case 0x1C0D60u: goto label_1c0d60;
            case 0x1C0D64u: goto label_1c0d64;
            case 0x1C0D68u: goto label_1c0d68;
            case 0x1C0D6Cu: goto label_1c0d6c;
            case 0x1C0D70u: goto label_1c0d70;
            case 0x1C0D74u: goto label_1c0d74;
            case 0x1C0D78u: goto label_1c0d78;
            case 0x1C0D7Cu: goto label_1c0d7c;
            case 0x1C0D80u: goto label_1c0d80;
            case 0x1C0D84u: goto label_1c0d84;
            case 0x1C0D88u: goto label_1c0d88;
            case 0x1C0D8Cu: goto label_1c0d8c;
            case 0x1C0D90u: goto label_1c0d90;
            case 0x1C0D94u: goto label_1c0d94;
            case 0x1C0D98u: goto label_1c0d98;
            case 0x1C0D9Cu: goto label_1c0d9c;
            case 0x1C0DA0u: goto label_1c0da0;
            case 0x1C0DA4u: goto label_1c0da4;
            case 0x1C0DA8u: goto label_1c0da8;
            case 0x1C0DACu: goto label_1c0dac;
            case 0x1C0DB0u: goto label_1c0db0;
            case 0x1C0DB4u: goto label_1c0db4;
            case 0x1C0DB8u: goto label_1c0db8;
            case 0x1C0DBCu: goto label_1c0dbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C0DBCu;
label_1c0dbc:
    // 0x1c0dbc: 0x0
    ctx->pc = 0x1c0dbcu;
    // NOP
}
