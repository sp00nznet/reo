#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C2940
// Address: 0x1c2940 - 0x1c2d00
void sub_001C2940_0x1c2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c2940u;

label_1c2940:
    // 0x1c2940: 0x27bdffe0
    ctx->pc = 0x1c2940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c2944:
    // 0x1c2944: 0x3c010032
    ctx->pc = 0x1c2944u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c2948:
    // 0x1c2948: 0xffbf0010
    ctx->pc = 0x1c2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c294c:
    // 0x1c294c: 0x7fb00000
    ctx->pc = 0x1c294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c2950:
    // 0x1c2950: 0x8c306f10
    ctx->pc = 0x1c2950u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 28432)));
label_1c2954:
    // 0x1c2954: 0x3c010032
    ctx->pc = 0x1c2954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c2958:
    // 0x1c2958: 0x8c224218
    ctx->pc = 0x1c2958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16920)));
label_1c295c:
    // 0x1c295c: 0xa6020008
    ctx->pc = 0x1c295cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_1c2960:
    // 0x1c2960: 0x3c010032
    ctx->pc = 0x1c2960u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c2964:
    // 0x1c2964: 0x8c224210
    ctx->pc = 0x1c2964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16912)));
label_1c2968:
    // 0x1c2968: 0xa602000a
    ctx->pc = 0x1c2968u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_1c296c:
    // 0x1c296c: 0x3c010032
    ctx->pc = 0x1c296cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
label_1c2970:
    // 0x1c2970: 0x9603000a
    ctx->pc = 0x1c2970u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1c2974:
    // 0x1c2974: 0x8c224228
    ctx->pc = 0x1c2974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16936)));
label_1c2978:
    // 0x1c2978: 0x431025
    ctx->pc = 0x1c2978u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c297c:
    // 0x1c297c: 0xa602000c
    ctx->pc = 0x1c297cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1c2980:
    // 0x1c2980: 0x82020001
    ctx->pc = 0x1c2980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1c2984:
    // 0x1c2984: 0x2c41000a
    ctx->pc = 0x1c2984u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 10));
label_1c2988:
    // 0x1c2988: 0x102000d3
label_1c298c:
    if (ctx->pc == 0x1C298Cu) {
        ctx->pc = 0x1C298Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
        ctx->pc = 0x1C2990u;
        goto label_1c2990;
    }
    ctx->pc = 0x1C2988u;
    {
        const bool branch_taken_0x1c2988 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C298Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
        if (branch_taken_0x1c2988) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2990u;
label_1c2990:
    // 0x1c2990: 0x21080
    ctx->pc = 0x1c2990u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1c2994:
    // 0x1c2994: 0x24632cb0
    ctx->pc = 0x1c2994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11440));
label_1c2998:
    // 0x1c2998: 0x431021
    ctx->pc = 0x1c2998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c299c:
    // 0x1c299c: 0x8c420000
    ctx->pc = 0x1c299cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c29a0:
    // 0x1c29a0: 0x400008
label_1c29a4:
    if (ctx->pc == 0x1C29A4u) {
        ctx->pc = 0x1C29A8u;
        goto label_1c29a8;
    }
    ctx->pc = 0x1C29A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2940u: goto label_1c2940;
            case 0x1C2944u: goto label_1c2944;
            case 0x1C2948u: goto label_1c2948;
            case 0x1C294Cu: goto label_1c294c;
            case 0x1C2950u: goto label_1c2950;
            case 0x1C2954u: goto label_1c2954;
            case 0x1C2958u: goto label_1c2958;
            case 0x1C295Cu: goto label_1c295c;
            case 0x1C2960u: goto label_1c2960;
            case 0x1C2964u: goto label_1c2964;
            case 0x1C2968u: goto label_1c2968;
            case 0x1C296Cu: goto label_1c296c;
            case 0x1C2970u: goto label_1c2970;
            case 0x1C2974u: goto label_1c2974;
            case 0x1C2978u: goto label_1c2978;
            case 0x1C297Cu: goto label_1c297c;
            case 0x1C2980u: goto label_1c2980;
            case 0x1C2984u: goto label_1c2984;
            case 0x1C2988u: goto label_1c2988;
            case 0x1C298Cu: goto label_1c298c;
            case 0x1C2990u: goto label_1c2990;
            case 0x1C2994u: goto label_1c2994;
            case 0x1C2998u: goto label_1c2998;
            case 0x1C299Cu: goto label_1c299c;
            case 0x1C29A0u: goto label_1c29a0;
            case 0x1C29A4u: goto label_1c29a4;
            case 0x1C29A8u: goto label_1c29a8;
            case 0x1C29ACu: goto label_1c29ac;
            case 0x1C29B0u: goto label_1c29b0;
            case 0x1C29B4u: goto label_1c29b4;
            case 0x1C29B8u: goto label_1c29b8;
            case 0x1C29BCu: goto label_1c29bc;
            case 0x1C29C0u: goto label_1c29c0;
            case 0x1C29C4u: goto label_1c29c4;
            case 0x1C29C8u: goto label_1c29c8;
            case 0x1C29CCu: goto label_1c29cc;
            case 0x1C29D0u: goto label_1c29d0;
            case 0x1C29D4u: goto label_1c29d4;
            case 0x1C29D8u: goto label_1c29d8;
            case 0x1C29DCu: goto label_1c29dc;
            case 0x1C29E0u: goto label_1c29e0;
            case 0x1C29E4u: goto label_1c29e4;
            case 0x1C29E8u: goto label_1c29e8;
            case 0x1C29ECu: goto label_1c29ec;
            case 0x1C29F0u: goto label_1c29f0;
            case 0x1C29F4u: goto label_1c29f4;
            case 0x1C29F8u: goto label_1c29f8;
            case 0x1C29FCu: goto label_1c29fc;
            case 0x1C2A00u: goto label_1c2a00;
            case 0x1C2A04u: goto label_1c2a04;
            case 0x1C2A08u: goto label_1c2a08;
            case 0x1C2A0Cu: goto label_1c2a0c;
            case 0x1C2A10u: goto label_1c2a10;
            case 0x1C2A14u: goto label_1c2a14;
            case 0x1C2A18u: goto label_1c2a18;
            case 0x1C2A1Cu: goto label_1c2a1c;
            case 0x1C2A20u: goto label_1c2a20;
            case 0x1C2A24u: goto label_1c2a24;
            case 0x1C2A28u: goto label_1c2a28;
            case 0x1C2A2Cu: goto label_1c2a2c;
            case 0x1C2A30u: goto label_1c2a30;
            case 0x1C2A34u: goto label_1c2a34;
            case 0x1C2A38u: goto label_1c2a38;
            case 0x1C2A3Cu: goto label_1c2a3c;
            case 0x1C2A40u: goto label_1c2a40;
            case 0x1C2A44u: goto label_1c2a44;
            case 0x1C2A48u: goto label_1c2a48;
            case 0x1C2A4Cu: goto label_1c2a4c;
            case 0x1C2A50u: goto label_1c2a50;
            case 0x1C2A54u: goto label_1c2a54;
            case 0x1C2A58u: goto label_1c2a58;
            case 0x1C2A5Cu: goto label_1c2a5c;
            case 0x1C2A60u: goto label_1c2a60;
            case 0x1C2A64u: goto label_1c2a64;
            case 0x1C2A68u: goto label_1c2a68;
            case 0x1C2A6Cu: goto label_1c2a6c;
            case 0x1C2A70u: goto label_1c2a70;
            case 0x1C2A74u: goto label_1c2a74;
            case 0x1C2A78u: goto label_1c2a78;
            case 0x1C2A7Cu: goto label_1c2a7c;
            case 0x1C2A80u: goto label_1c2a80;
            case 0x1C2A84u: goto label_1c2a84;
            case 0x1C2A88u: goto label_1c2a88;
            case 0x1C2A8Cu: goto label_1c2a8c;
            case 0x1C2A90u: goto label_1c2a90;
            case 0x1C2A94u: goto label_1c2a94;
            case 0x1C2A98u: goto label_1c2a98;
            case 0x1C2A9Cu: goto label_1c2a9c;
            case 0x1C2AA0u: goto label_1c2aa0;
            case 0x1C2AA4u: goto label_1c2aa4;
            case 0x1C2AA8u: goto label_1c2aa8;
            case 0x1C2AACu: goto label_1c2aac;
            case 0x1C2AB0u: goto label_1c2ab0;
            case 0x1C2AB4u: goto label_1c2ab4;
            case 0x1C2AB8u: goto label_1c2ab8;
            case 0x1C2ABCu: goto label_1c2abc;
            case 0x1C2AC0u: goto label_1c2ac0;
            case 0x1C2AC4u: goto label_1c2ac4;
            case 0x1C2AC8u: goto label_1c2ac8;
            case 0x1C2ACCu: goto label_1c2acc;
            case 0x1C2AD0u: goto label_1c2ad0;
            case 0x1C2AD4u: goto label_1c2ad4;
            case 0x1C2AD8u: goto label_1c2ad8;
            case 0x1C2ADCu: goto label_1c2adc;
            case 0x1C2AE0u: goto label_1c2ae0;
            case 0x1C2AE4u: goto label_1c2ae4;
            case 0x1C2AE8u: goto label_1c2ae8;
            case 0x1C2AECu: goto label_1c2aec;
            case 0x1C2AF0u: goto label_1c2af0;
            case 0x1C2AF4u: goto label_1c2af4;
            case 0x1C2AF8u: goto label_1c2af8;
            case 0x1C2AFCu: goto label_1c2afc;
            case 0x1C2B00u: goto label_1c2b00;
            case 0x1C2B04u: goto label_1c2b04;
            case 0x1C2B08u: goto label_1c2b08;
            case 0x1C2B0Cu: goto label_1c2b0c;
            case 0x1C2B10u: goto label_1c2b10;
            case 0x1C2B14u: goto label_1c2b14;
            case 0x1C2B18u: goto label_1c2b18;
            case 0x1C2B1Cu: goto label_1c2b1c;
            case 0x1C2B20u: goto label_1c2b20;
            case 0x1C2B24u: goto label_1c2b24;
            case 0x1C2B28u: goto label_1c2b28;
            case 0x1C2B2Cu: goto label_1c2b2c;
            case 0x1C2B30u: goto label_1c2b30;
            case 0x1C2B34u: goto label_1c2b34;
            case 0x1C2B38u: goto label_1c2b38;
            case 0x1C2B3Cu: goto label_1c2b3c;
            case 0x1C2B40u: goto label_1c2b40;
            case 0x1C2B44u: goto label_1c2b44;
            case 0x1C2B48u: goto label_1c2b48;
            case 0x1C2B4Cu: goto label_1c2b4c;
            case 0x1C2B50u: goto label_1c2b50;
            case 0x1C2B54u: goto label_1c2b54;
            case 0x1C2B58u: goto label_1c2b58;
            case 0x1C2B5Cu: goto label_1c2b5c;
            case 0x1C2B60u: goto label_1c2b60;
            case 0x1C2B64u: goto label_1c2b64;
            case 0x1C2B68u: goto label_1c2b68;
            case 0x1C2B6Cu: goto label_1c2b6c;
            case 0x1C2B70u: goto label_1c2b70;
            case 0x1C2B74u: goto label_1c2b74;
            case 0x1C2B78u: goto label_1c2b78;
            case 0x1C2B7Cu: goto label_1c2b7c;
            case 0x1C2B80u: goto label_1c2b80;
            case 0x1C2B84u: goto label_1c2b84;
            case 0x1C2B88u: goto label_1c2b88;
            case 0x1C2B8Cu: goto label_1c2b8c;
            case 0x1C2B90u: goto label_1c2b90;
            case 0x1C2B94u: goto label_1c2b94;
            case 0x1C2B98u: goto label_1c2b98;
            case 0x1C2B9Cu: goto label_1c2b9c;
            case 0x1C2BA0u: goto label_1c2ba0;
            case 0x1C2BA4u: goto label_1c2ba4;
            case 0x1C2BA8u: goto label_1c2ba8;
            case 0x1C2BACu: goto label_1c2bac;
            case 0x1C2BB0u: goto label_1c2bb0;
            case 0x1C2BB4u: goto label_1c2bb4;
            case 0x1C2BB8u: goto label_1c2bb8;
            case 0x1C2BBCu: goto label_1c2bbc;
            case 0x1C2BC0u: goto label_1c2bc0;
            case 0x1C2BC4u: goto label_1c2bc4;
            case 0x1C2BC8u: goto label_1c2bc8;
            case 0x1C2BCCu: goto label_1c2bcc;
            case 0x1C2BD0u: goto label_1c2bd0;
            case 0x1C2BD4u: goto label_1c2bd4;
            case 0x1C2BD8u: goto label_1c2bd8;
            case 0x1C2BDCu: goto label_1c2bdc;
            case 0x1C2BE0u: goto label_1c2be0;
            case 0x1C2BE4u: goto label_1c2be4;
            case 0x1C2BE8u: goto label_1c2be8;
            case 0x1C2BECu: goto label_1c2bec;
            case 0x1C2BF0u: goto label_1c2bf0;
            case 0x1C2BF4u: goto label_1c2bf4;
            case 0x1C2BF8u: goto label_1c2bf8;
            case 0x1C2BFCu: goto label_1c2bfc;
            case 0x1C2C00u: goto label_1c2c00;
            case 0x1C2C04u: goto label_1c2c04;
            case 0x1C2C08u: goto label_1c2c08;
            case 0x1C2C0Cu: goto label_1c2c0c;
            case 0x1C2C10u: goto label_1c2c10;
            case 0x1C2C14u: goto label_1c2c14;
            case 0x1C2C18u: goto label_1c2c18;
            case 0x1C2C1Cu: goto label_1c2c1c;
            case 0x1C2C20u: goto label_1c2c20;
            case 0x1C2C24u: goto label_1c2c24;
            case 0x1C2C28u: goto label_1c2c28;
            case 0x1C2C2Cu: goto label_1c2c2c;
            case 0x1C2C30u: goto label_1c2c30;
            case 0x1C2C34u: goto label_1c2c34;
            case 0x1C2C38u: goto label_1c2c38;
            case 0x1C2C3Cu: goto label_1c2c3c;
            case 0x1C2C40u: goto label_1c2c40;
            case 0x1C2C44u: goto label_1c2c44;
            case 0x1C2C48u: goto label_1c2c48;
            case 0x1C2C4Cu: goto label_1c2c4c;
            case 0x1C2C50u: goto label_1c2c50;
            case 0x1C2C54u: goto label_1c2c54;
            case 0x1C2C58u: goto label_1c2c58;
            case 0x1C2C5Cu: goto label_1c2c5c;
            case 0x1C2C60u: goto label_1c2c60;
            case 0x1C2C64u: goto label_1c2c64;
            case 0x1C2C68u: goto label_1c2c68;
            case 0x1C2C6Cu: goto label_1c2c6c;
            case 0x1C2C70u: goto label_1c2c70;
            case 0x1C2C74u: goto label_1c2c74;
            case 0x1C2C78u: goto label_1c2c78;
            case 0x1C2C7Cu: goto label_1c2c7c;
            case 0x1C2C80u: goto label_1c2c80;
            case 0x1C2C84u: goto label_1c2c84;
            case 0x1C2C88u: goto label_1c2c88;
            case 0x1C2C8Cu: goto label_1c2c8c;
            case 0x1C2C90u: goto label_1c2c90;
            case 0x1C2C94u: goto label_1c2c94;
            case 0x1C2C98u: goto label_1c2c98;
            case 0x1C2C9Cu: goto label_1c2c9c;
            case 0x1C2CA0u: goto label_1c2ca0;
            case 0x1C2CA4u: goto label_1c2ca4;
            case 0x1C2CA8u: goto label_1c2ca8;
            case 0x1C2CACu: goto label_1c2cac;
            case 0x1C2CB0u: goto label_1c2cb0;
            case 0x1C2CB4u: goto label_1c2cb4;
            case 0x1C2CB8u: goto label_1c2cb8;
            case 0x1C2CBCu: goto label_1c2cbc;
            case 0x1C2CC0u: goto label_1c2cc0;
            case 0x1C2CC4u: goto label_1c2cc4;
            case 0x1C2CC8u: goto label_1c2cc8;
            case 0x1C2CCCu: goto label_1c2ccc;
            case 0x1C2CD0u: goto label_1c2cd0;
            case 0x1C2CD4u: goto label_1c2cd4;
            case 0x1C2CD8u: goto label_1c2cd8;
            case 0x1C2CDCu: goto label_1c2cdc;
            case 0x1C2CE0u: goto label_1c2ce0;
            case 0x1C2CE4u: goto label_1c2ce4;
            case 0x1C2CE8u: goto label_1c2ce8;
            case 0x1C2CECu: goto label_1c2cec;
            case 0x1C2CF0u: goto label_1c2cf0;
            case 0x1C2CF4u: goto label_1c2cf4;
            case 0x1C2CF8u: goto label_1c2cf8;
            case 0x1C2CFCu: goto label_1c2cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C29A8u;
label_1c29a8:
    // 0x1c29a8: 0x8e020020
    ctx->pc = 0x1c29a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1c29ac:
    // 0x1c29ac: 0x24060004
    ctx->pc = 0x1c29acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_1c29b0:
    // 0x1c29b0: 0x10460055
label_1c29b4:
    if (ctx->pc == 0x1C29B4u) {
        ctx->pc = 0x1C29B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C29B8u;
        goto label_1c29b8;
    }
    ctx->pc = 0x1C29B0u;
    {
        const bool branch_taken_0x1c29b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x1C29B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1c29b0) {
            ctx->pc = 0x1C2B08u;
            goto label_1c2b08;
        }
    }
    ctx->pc = 0x1C29B8u;
label_1c29b8:
    // 0x1c29b8: 0x1045003b
label_1c29bc:
    if (ctx->pc == 0x1C29BCu) {
        ctx->pc = 0x1C29BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C29C0u;
        goto label_1c29c0;
    }
    ctx->pc = 0x1C29B8u;
    {
        const bool branch_taken_0x1c29b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1C29BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1c29b8) {
            ctx->pc = 0x1C2AA8u;
            goto label_1c2aa8;
        }
    }
    ctx->pc = 0x1C29C0u;
label_1c29c0:
    // 0x1c29c0: 0x10440027
label_1c29c4:
    if (ctx->pc == 0x1C29C4u) {
        ctx->pc = 0x1C29C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C29C8u;
        goto label_1c29c8;
    }
    ctx->pc = 0x1C29C0u;
    {
        const bool branch_taken_0x1c29c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1C29C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c29c0) {
            ctx->pc = 0x1C2A60u;
            goto label_1c2a60;
        }
    }
    ctx->pc = 0x1C29C8u;
label_1c29c8:
    // 0x1c29c8: 0x1043000e
label_1c29cc:
    if (ctx->pc == 0x1C29CCu) {
        ctx->pc = 0x1C29D0u;
        goto label_1c29d0;
    }
    ctx->pc = 0x1C29C8u;
    {
        const bool branch_taken_0x1c29c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c29c8) {
            ctx->pc = 0x1C2A04u;
            goto label_1c2a04;
        }
    }
    ctx->pc = 0x1C29D0u;
label_1c29d0:
    // 0x1c29d0: 0x10400003
label_1c29d4:
    if (ctx->pc == 0x1C29D4u) {
        ctx->pc = 0x1C29D8u;
        goto label_1c29d8;
    }
    ctx->pc = 0x1C29D0u;
    {
        const bool branch_taken_0x1c29d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c29d0) {
            ctx->pc = 0x1C29E0u;
            goto label_1c29e0;
        }
    }
    ctx->pc = 0x1C29D8u;
label_1c29d8:
    // 0x1c29d8: 0x10000060
label_1c29dc:
    if (ctx->pc == 0x1C29DCu) {
        ctx->pc = 0x1C29DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x1C29E0u;
        goto label_1c29e0;
    }
    ctx->pc = 0x1C29D8u;
    {
        const bool branch_taken_0x1c29d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C29DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x1c29d8) {
            ctx->pc = 0x1C2B5Cu;
            goto label_1c2b5c;
        }
    }
    ctx->pc = 0x1C29E0u;
label_1c29e0:
    // 0x1c29e0: 0x8e02001c
    ctx->pc = 0x1c29e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c29e4:
    // 0x1c29e4: 0x10400003
label_1c29e8:
    if (ctx->pc == 0x1C29E8u) {
        ctx->pc = 0x1C29ECu;
        goto label_1c29ec;
    }
    ctx->pc = 0x1C29E4u;
    {
        const bool branch_taken_0x1c29e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c29e4) {
            ctx->pc = 0x1C29F4u;
            goto label_1c29f4;
        }
    }
    ctx->pc = 0x1C29ECu;
label_1c29ec:
    // 0x1c29ec: 0x10000003
label_1c29f0:
    if (ctx->pc == 0x1C29F0u) {
        ctx->pc = 0x1C29F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C29F4u;
        goto label_1c29f4;
    }
    ctx->pc = 0x1C29ECu;
    {
        const bool branch_taken_0x1c29ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C29F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c29ec) {
            ctx->pc = 0x1C29FCu;
            goto label_1c29fc;
        }
    }
    ctx->pc = 0x1C29F4u;
label_1c29f4:
    // 0x1c29f4: 0x10000058
label_1c29f8:
    if (ctx->pc == 0x1C29F8u) {
        ctx->pc = 0x1C29F8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1C29FCu;
        goto label_1c29fc;
    }
    ctx->pc = 0x1C29F4u;
    {
        const bool branch_taken_0x1c29f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C29F8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c29f4) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C29FCu;
label_1c29fc:
    // 0x1c29fc: 0x100000ba
label_1c2a00:
    if (ctx->pc == 0x1C2A00u) {
        ctx->pc = 0x1C2A00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C2A04u;
        goto label_1c2a04;
    }
    ctx->pc = 0x1C29FCu;
    {
        const bool branch_taken_0x1c29fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1c29fc) {
            ctx->pc = 0x1C2CE8u;
            goto label_1c2ce8;
        }
    }
    ctx->pc = 0x1C2A04u;
label_1c2a04:
    // 0x1c2a04: 0x8e02001c
    ctx->pc = 0x1c2a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c2a08:
    // 0x1c2a08: 0x10450010
label_1c2a0c:
    if (ctx->pc == 0x1C2A0Cu) {
        ctx->pc = 0x1C2A10u;
        goto label_1c2a10;
    }
    ctx->pc = 0x1C2A08u;
    {
        const bool branch_taken_0x1c2a08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x1c2a08) {
            ctx->pc = 0x1C2A4Cu;
            goto label_1c2a4c;
        }
    }
    ctx->pc = 0x1C2A10u;
label_1c2a10:
    // 0x1c2a10: 0x1044000c
label_1c2a14:
    if (ctx->pc == 0x1C2A14u) {
        ctx->pc = 0x1C2A18u;
        goto label_1c2a18;
    }
    ctx->pc = 0x1C2A10u;
    {
        const bool branch_taken_0x1c2a10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x1c2a10) {
            ctx->pc = 0x1C2A44u;
            goto label_1c2a44;
        }
    }
    ctx->pc = 0x1C2A18u;
label_1c2a18:
    // 0x1c2a18: 0x10430003
label_1c2a1c:
    if (ctx->pc == 0x1C2A1Cu) {
        ctx->pc = 0x1C2A1Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1C2A20u;
        goto label_1c2a20;
    }
    ctx->pc = 0x1C2A18u;
    {
        const bool branch_taken_0x1c2a18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2A1Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c2a18) {
            ctx->pc = 0x1C2A28u;
            goto label_1c2a28;
        }
    }
    ctx->pc = 0x1C2A20u;
label_1c2a20:
    // 0x1c2a20: 0x1000000d
label_1c2a24:
    if (ctx->pc == 0x1C2A24u) {
        ctx->pc = 0x1C2A24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A28u;
        goto label_1c2a28;
    }
    ctx->pc = 0x1C2A20u;
    {
        const bool branch_taken_0x1c2a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a20) {
            ctx->pc = 0x1C2A58u;
            goto label_1c2a58;
        }
    }
    ctx->pc = 0x1C2A28u;
label_1c2a28:
    // 0x1c2a28: 0x90224476
    ctx->pc = 0x1c2a28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17526)));
label_1c2a2c:
    // 0x1c2a2c: 0x14400003
label_1c2a30:
    if (ctx->pc == 0x1C2A30u) {
        ctx->pc = 0x1C2A34u;
        goto label_1c2a34;
    }
    ctx->pc = 0x1C2A2Cu;
    {
        const bool branch_taken_0x1c2a2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2a2c) {
            ctx->pc = 0x1C2A3Cu;
            goto label_1c2a3c;
        }
    }
    ctx->pc = 0x1C2A34u;
label_1c2a34:
    // 0x1c2a34: 0x10000048
label_1c2a38:
    if (ctx->pc == 0x1C2A38u) {
        ctx->pc = 0x1C2A38u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1C2A3Cu;
        goto label_1c2a3c;
    }
    ctx->pc = 0x1C2A34u;
    {
        const bool branch_taken_0x1c2a34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A38u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1c2a34) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2A3Cu;
label_1c2a3c:
    // 0x1c2a3c: 0x10000046
label_1c2a40:
    if (ctx->pc == 0x1C2A40u) {
        ctx->pc = 0x1C2A40u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x1C2A44u;
        goto label_1c2a44;
    }
    ctx->pc = 0x1C2A3Cu;
    {
        const bool branch_taken_0x1c2a3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A40u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1c2a3c) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2A44u;
label_1c2a44:
    // 0x1c2a44: 0x10000044
label_1c2a48:
    if (ctx->pc == 0x1C2A48u) {
        ctx->pc = 0x1C2A48u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1C2A4Cu;
        goto label_1c2a4c;
    }
    ctx->pc = 0x1C2A44u;
    {
        const bool branch_taken_0x1c2a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A48u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1c2a44) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2A4Cu;
label_1c2a4c:
    // 0x1c2a4c: 0x24020005
    ctx->pc = 0x1c2a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c2a50:
    // 0x1c2a50: 0x10000041
label_1c2a54:
    if (ctx->pc == 0x1C2A54u) {
        ctx->pc = 0x1C2A54u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C2A58u;
        goto label_1c2a58;
    }
    ctx->pc = 0x1C2A50u;
    {
        const bool branch_taken_0x1c2a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A54u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c2a50) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2A58u;
label_1c2a58:
    // 0x1c2a58: 0x100000a2
label_1c2a5c:
    if (ctx->pc == 0x1C2A5Cu) {
        ctx->pc = 0x1C2A60u;
        goto label_1c2a60;
    }
    ctx->pc = 0x1C2A58u;
    {
        const bool branch_taken_0x1c2a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2a58) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2A60u;
label_1c2a60:
    // 0x1c2a60: 0x8e03001c
    ctx->pc = 0x1c2a60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c2a64:
    // 0x1c2a64: 0x1064000c
label_1c2a68:
    if (ctx->pc == 0x1C2A68u) {
        ctx->pc = 0x1C2A68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C2A6Cu;
        goto label_1c2a6c;
    }
    ctx->pc = 0x1C2A64u;
    {
        const bool branch_taken_0x1c2a64 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1C2A68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c2a64) {
            ctx->pc = 0x1C2A98u;
            goto label_1c2a98;
        }
    }
    ctx->pc = 0x1C2A6Cu;
label_1c2a6c:
    // 0x1c2a6c: 0x10620003
label_1c2a70:
    if (ctx->pc == 0x1C2A70u) {
        ctx->pc = 0x1C2A70u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1C2A74u;
        goto label_1c2a74;
    }
    ctx->pc = 0x1C2A6Cu;
    {
        const bool branch_taken_0x1c2a6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C2A70u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c2a6c) {
            ctx->pc = 0x1C2A7Cu;
            goto label_1c2a7c;
        }
    }
    ctx->pc = 0x1C2A74u;
label_1c2a74:
    // 0x1c2a74: 0x1000000a
label_1c2a78:
    if (ctx->pc == 0x1C2A78u) {
        ctx->pc = 0x1C2A78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A7Cu;
        goto label_1c2a7c;
    }
    ctx->pc = 0x1C2A74u;
    {
        const bool branch_taken_0x1c2a74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a74) {
            ctx->pc = 0x1C2AA0u;
            goto label_1c2aa0;
        }
    }
    ctx->pc = 0x1C2A7Cu;
label_1c2a7c:
    // 0x1c2a7c: 0x90224476
    ctx->pc = 0x1c2a7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17526)));
label_1c2a80:
    // 0x1c2a80: 0x14400003
label_1c2a84:
    if (ctx->pc == 0x1C2A84u) {
        ctx->pc = 0x1C2A88u;
        goto label_1c2a88;
    }
    ctx->pc = 0x1C2A80u;
    {
        const bool branch_taken_0x1c2a80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2a80) {
            ctx->pc = 0x1C2A90u;
            goto label_1c2a90;
        }
    }
    ctx->pc = 0x1C2A88u;
label_1c2a88:
    // 0x1c2a88: 0x10000033
label_1c2a8c:
    if (ctx->pc == 0x1C2A8Cu) {
        ctx->pc = 0x1C2A8Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1C2A90u;
        goto label_1c2a90;
    }
    ctx->pc = 0x1C2A88u;
    {
        const bool branch_taken_0x1c2a88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A8Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1c2a88) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2A90u;
label_1c2a90:
    // 0x1c2a90: 0x10000031
label_1c2a94:
    if (ctx->pc == 0x1C2A94u) {
        ctx->pc = 0x1C2A94u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x1C2A98u;
        goto label_1c2a98;
    }
    ctx->pc = 0x1C2A90u;
    {
        const bool branch_taken_0x1c2a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A94u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1c2a90) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2A98u;
label_1c2a98:
    // 0x1c2a98: 0x1000002f
label_1c2a9c:
    if (ctx->pc == 0x1C2A9Cu) {
        ctx->pc = 0x1C2A9Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1C2AA0u;
        goto label_1c2aa0;
    }
    ctx->pc = 0x1C2A98u;
    {
        const bool branch_taken_0x1c2a98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2A9Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        if (branch_taken_0x1c2a98) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2AA0u;
label_1c2aa0:
    // 0x1c2aa0: 0x10000090
label_1c2aa4:
    if (ctx->pc == 0x1C2AA4u) {
        ctx->pc = 0x1C2AA8u;
        goto label_1c2aa8;
    }
    ctx->pc = 0x1C2AA0u;
    {
        const bool branch_taken_0x1c2aa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2aa0) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2AA8u;
label_1c2aa8:
    // 0x1c2aa8: 0x8e04001c
    ctx->pc = 0x1c2aa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c2aac:
    // 0x1c2aac: 0x10860012
label_1c2ab0:
    if (ctx->pc == 0x1C2AB0u) {
        ctx->pc = 0x1C2AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1C2AB4u;
        goto label_1c2ab4;
    }
    ctx->pc = 0x1C2AACu;
    {
        const bool branch_taken_0x1c2aac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        ctx->pc = 0x1C2AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1c2aac) {
            ctx->pc = 0x1C2AF8u;
            goto label_1c2af8;
        }
    }
    ctx->pc = 0x1C2AB4u;
label_1c2ab4:
    // 0x1c2ab4: 0x24030002
    ctx->pc = 0x1c2ab4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1c2ab8:
    // 0x1c2ab8: 0x1083000d
label_1c2abc:
    if (ctx->pc == 0x1C2ABCu) {
        ctx->pc = 0x1C2ABCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1C2AC0u;
        goto label_1c2ac0;
    }
    ctx->pc = 0x1C2AB8u;
    {
        const bool branch_taken_0x1c2ab8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2ABCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1c2ab8) {
            ctx->pc = 0x1C2AF0u;
            goto label_1c2af0;
        }
    }
    ctx->pc = 0x1C2AC0u;
label_1c2ac0:
    // 0x1c2ac0: 0x24020001
    ctx->pc = 0x1c2ac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2ac4:
    // 0x1c2ac4: 0x10820003
label_1c2ac8:
    if (ctx->pc == 0x1C2AC8u) {
        ctx->pc = 0x1C2AC8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1C2ACCu;
        goto label_1c2acc;
    }
    ctx->pc = 0x1C2AC4u;
    {
        const bool branch_taken_0x1c2ac4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C2AC8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c2ac4) {
            ctx->pc = 0x1C2AD4u;
            goto label_1c2ad4;
        }
    }
    ctx->pc = 0x1C2ACCu;
label_1c2acc:
    // 0x1c2acc: 0x1000000c
label_1c2ad0:
    if (ctx->pc == 0x1C2AD0u) {
        ctx->pc = 0x1C2AD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2AD4u;
        goto label_1c2ad4;
    }
    ctx->pc = 0x1C2ACCu;
    {
        const bool branch_taken_0x1c2acc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2AD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2acc) {
            ctx->pc = 0x1C2B00u;
            goto label_1c2b00;
        }
    }
    ctx->pc = 0x1C2AD4u;
label_1c2ad4:
    // 0x1c2ad4: 0x90224476
    ctx->pc = 0x1c2ad4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17526)));
label_1c2ad8:
    // 0x1c2ad8: 0x14400003
label_1c2adc:
    if (ctx->pc == 0x1C2ADCu) {
        ctx->pc = 0x1C2AE0u;
        goto label_1c2ae0;
    }
    ctx->pc = 0x1C2AD8u;
    {
        const bool branch_taken_0x1c2ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2ad8) {
            ctx->pc = 0x1C2AE8u;
            goto label_1c2ae8;
        }
    }
    ctx->pc = 0x1C2AE0u;
label_1c2ae0:
    // 0x1c2ae0: 0x1000001d
label_1c2ae4:
    if (ctx->pc == 0x1C2AE4u) {
        ctx->pc = 0x1C2AE4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1C2AE8u;
        goto label_1c2ae8;
    }
    ctx->pc = 0x1C2AE0u;
    {
        const bool branch_taken_0x1c2ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2AE4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c2ae0) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2AE8u;
label_1c2ae8:
    // 0x1c2ae8: 0x1000001b
label_1c2aec:
    if (ctx->pc == 0x1C2AECu) {
        ctx->pc = 0x1C2AECu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x1C2AF0u;
        goto label_1c2af0;
    }
    ctx->pc = 0x1C2AE8u;
    {
        const bool branch_taken_0x1c2ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2AECu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1c2ae8) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2AF0u;
label_1c2af0:
    // 0x1c2af0: 0x10000019
label_1c2af4:
    if (ctx->pc == 0x1C2AF4u) {
        ctx->pc = 0x1C2AF4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C2AF8u;
        goto label_1c2af8;
    }
    ctx->pc = 0x1C2AF0u;
    {
        const bool branch_taken_0x1c2af0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2AF4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c2af0) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2AF8u;
label_1c2af8:
    // 0x1c2af8: 0x10000017
label_1c2afc:
    if (ctx->pc == 0x1C2AFCu) {
        ctx->pc = 0x1C2AFCu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C2B00u;
        goto label_1c2b00;
    }
    ctx->pc = 0x1C2AF8u;
    {
        const bool branch_taken_0x1c2af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2AFCu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c2af8) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2B00u;
label_1c2b00:
    // 0x1c2b00: 0x10000078
label_1c2b04:
    if (ctx->pc == 0x1C2B04u) {
        ctx->pc = 0x1C2B08u;
        goto label_1c2b08;
    }
    ctx->pc = 0x1C2B00u;
    {
        const bool branch_taken_0x1c2b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2b00) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2B08u;
label_1c2b08:
    // 0x1c2b08: 0x8e04001c
    ctx->pc = 0x1c2b08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c2b0c:
    // 0x1c2b0c: 0x24030002
    ctx->pc = 0x1c2b0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1c2b10:
    // 0x1c2b10: 0x1083000d
label_1c2b14:
    if (ctx->pc == 0x1C2B14u) {
        ctx->pc = 0x1C2B14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C2B18u;
        goto label_1c2b18;
    }
    ctx->pc = 0x1C2B10u;
    {
        const bool branch_taken_0x1c2b10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2B14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1c2b10) {
            ctx->pc = 0x1C2B48u;
            goto label_1c2b48;
        }
    }
    ctx->pc = 0x1C2B18u;
label_1c2b18:
    // 0x1c2b18: 0x24020001
    ctx->pc = 0x1c2b18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2b1c:
    // 0x1c2b1c: 0x10820003
label_1c2b20:
    if (ctx->pc == 0x1C2B20u) {
        ctx->pc = 0x1C2B20u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1C2B24u;
        goto label_1c2b24;
    }
    ctx->pc = 0x1C2B1Cu;
    {
        const bool branch_taken_0x1c2b1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C2B20u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c2b1c) {
            ctx->pc = 0x1C2B2Cu;
            goto label_1c2b2c;
        }
    }
    ctx->pc = 0x1C2B24u;
label_1c2b24:
    // 0x1c2b24: 0x1000000a
label_1c2b28:
    if (ctx->pc == 0x1C2B28u) {
        ctx->pc = 0x1C2B28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B2Cu;
        goto label_1c2b2c;
    }
    ctx->pc = 0x1C2B24u;
    {
        const bool branch_taken_0x1c2b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2B28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b24) {
            ctx->pc = 0x1C2B50u;
            goto label_1c2b50;
        }
    }
    ctx->pc = 0x1C2B2Cu;
label_1c2b2c:
    // 0x1c2b2c: 0x90224476
    ctx->pc = 0x1c2b2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17526)));
label_1c2b30:
    // 0x1c2b30: 0x14400003
label_1c2b34:
    if (ctx->pc == 0x1C2B34u) {
        ctx->pc = 0x1C2B38u;
        goto label_1c2b38;
    }
    ctx->pc = 0x1C2B30u;
    {
        const bool branch_taken_0x1c2b30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2b30) {
            ctx->pc = 0x1C2B40u;
            goto label_1c2b40;
        }
    }
    ctx->pc = 0x1C2B38u;
label_1c2b38:
    // 0x1c2b38: 0x10000007
label_1c2b3c:
    if (ctx->pc == 0x1C2B3Cu) {
        ctx->pc = 0x1C2B3Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1C2B40u;
        goto label_1c2b40;
    }
    ctx->pc = 0x1C2B38u;
    {
        const bool branch_taken_0x1c2b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2B3Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1c2b38) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2B40u;
label_1c2b40:
    // 0x1c2b40: 0x10000005
label_1c2b44:
    if (ctx->pc == 0x1C2B44u) {
        ctx->pc = 0x1C2B44u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x1C2B48u;
        goto label_1c2b48;
    }
    ctx->pc = 0x1C2B40u;
    {
        const bool branch_taken_0x1c2b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2B44u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1c2b40) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2B48u;
label_1c2b48:
    // 0x1c2b48: 0x10000003
label_1c2b4c:
    if (ctx->pc == 0x1C2B4Cu) {
        ctx->pc = 0x1C2B4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C2B50u;
        goto label_1c2b50;
    }
    ctx->pc = 0x1C2B48u;
    {
        const bool branch_taken_0x1c2b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2B4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1c2b48) {
            ctx->pc = 0x1C2B58u;
            goto label_1c2b58;
        }
    }
    ctx->pc = 0x1C2B50u;
label_1c2b50:
    // 0x1c2b50: 0x10000064
label_1c2b54:
    if (ctx->pc == 0x1C2B54u) {
        ctx->pc = 0x1C2B58u;
        goto label_1c2b58;
    }
    ctx->pc = 0x1C2B50u;
    {
        const bool branch_taken_0x1c2b50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2b50) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2B58u;
label_1c2b58:
    // 0x1c2b58: 0xae000010
    ctx->pc = 0x1c2b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1c2b5c:
    // 0x1c2b5c: 0x3c060025
    ctx->pc = 0x1c2b5cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
label_1c2b60:
    // 0x1c2b60: 0xae000014
    ctx->pc = 0x1c2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1c2b64:
    // 0x1c2b64: 0x24c62ca0
    ctx->pc = 0x1c2b64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11424));
label_1c2b68:
    // 0x1c2b68: 0xae000024
    ctx->pc = 0x1c2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1c2b6c:
    // 0x1c2b6c: 0x8e0500f0
    ctx->pc = 0x1c2b6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c2b70:
    // 0x1c2b70: 0xc071630
label_1c2b74:
    if (ctx->pc == 0x1C2B74u) {
        ctx->pc = 0x1C2B74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B78u;
        goto label_1c2b78;
    }
    ctx->pc = 0x1C2B70u;
    SET_GPR_U32(ctx, 31, 0x1C2B78u);
    ctx->pc = 0x1C2B74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C58C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C58C0_0x1c58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B78u; }
    }
    if (ctx->pc != 0x1C2B78u) { return; }
    ctx->pc = 0x1C2B78u;
label_1c2b78:
    // 0x1c2b78: 0x10000057
label_1c2b7c:
    if (ctx->pc == 0x1C2B7Cu) {
        ctx->pc = 0x1C2B80u;
        goto label_1c2b80;
    }
    ctx->pc = 0x1C2B78u;
    {
        const bool branch_taken_0x1c2b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2b78) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2B80u;
label_1c2b80:
    // 0x1c2b80: 0xc070b40
label_1c2b84:
    if (ctx->pc == 0x1C2B84u) {
        ctx->pc = 0x1C2B84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B88u;
        goto label_1c2b88;
    }
    ctx->pc = 0x1C2B80u;
    SET_GPR_U32(ctx, 31, 0x1C2B88u);
    ctx->pc = 0x1C2B84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C2D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2D00_0x1c2d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B88u; }
    }
    if (ctx->pc != 0x1C2B88u) { return; }
    ctx->pc = 0x1C2B88u;
label_1c2b88:
    // 0x1c2b88: 0x14400053
label_1c2b8c:
    if (ctx->pc == 0x1C2B8Cu) {
        ctx->pc = 0x1C2B90u;
        goto label_1c2b90;
    }
    ctx->pc = 0x1C2B88u;
    {
        const bool branch_taken_0x1c2b88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2b88) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2B90u;
label_1c2b90:
    // 0x1c2b90: 0x10000054
label_1c2b94:
    if (ctx->pc == 0x1C2B94u) {
        ctx->pc = 0x1C2B94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B98u;
        goto label_1c2b98;
    }
    ctx->pc = 0x1C2B90u;
    {
        const bool branch_taken_0x1c2b90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2B94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b90) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2B98u;
label_1c2b98:
    // 0x1c2b98: 0xc070f24
label_1c2b9c:
    if (ctx->pc == 0x1C2B9Cu) {
        ctx->pc = 0x1C2B9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BA0u;
        goto label_1c2ba0;
    }
    ctx->pc = 0x1C2B98u;
    SET_GPR_U32(ctx, 31, 0x1C2BA0u);
    ctx->pc = 0x1C2B9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C3C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3C90_0x1c3c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BA0u; }
    }
    if (ctx->pc != 0x1C2BA0u) { return; }
    ctx->pc = 0x1C2BA0u;
label_1c2ba0:
    // 0x1c2ba0: 0x1440004d
label_1c2ba4:
    if (ctx->pc == 0x1C2BA4u) {
        ctx->pc = 0x1C2BA8u;
        goto label_1c2ba8;
    }
    ctx->pc = 0x1C2BA0u;
    {
        const bool branch_taken_0x1c2ba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2ba0) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2BA8u;
label_1c2ba8:
    // 0x1c2ba8: 0x8e0200dc
    ctx->pc = 0x1c2ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1c2bac:
    // 0x1c2bac: 0x14400003
label_1c2bb0:
    if (ctx->pc == 0x1C2BB0u) {
        ctx->pc = 0x1C2BB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BB4u;
        goto label_1c2bb4;
    }
    ctx->pc = 0x1C2BACu;
    {
        const bool branch_taken_0x1c2bac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2BB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2bac) {
            ctx->pc = 0x1C2BBCu;
            goto label_1c2bbc;
        }
    }
    ctx->pc = 0x1C2BB4u;
label_1c2bb4:
    // 0x1c2bb4: 0x1000004b
label_1c2bb8:
    if (ctx->pc == 0x1C2BB8u) {
        ctx->pc = 0x1C2BBCu;
        goto label_1c2bbc;
    }
    ctx->pc = 0x1C2BB4u;
    {
        const bool branch_taken_0x1c2bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2bb4) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2BBCu;
label_1c2bbc:
    // 0x1c2bbc: 0xc070498
label_1c2bc0:
    if (ctx->pc == 0x1C2BC0u) {
        ctx->pc = 0x1C2BC4u;
        goto label_1c2bc4;
    }
    ctx->pc = 0x1C2BBCu;
    SET_GPR_U32(ctx, 31, 0x1C2BC4u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BC4u; }
    }
    if (ctx->pc != 0x1C2BC4u) { return; }
    ctx->pc = 0x1C2BC4u;
label_1c2bc4:
    // 0x1c2bc4: 0x14400006
label_1c2bc8:
    if (ctx->pc == 0x1C2BC8u) {
        ctx->pc = 0x1C2BCCu;
        goto label_1c2bcc;
    }
    ctx->pc = 0x1C2BC4u;
    {
        const bool branch_taken_0x1c2bc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2bc4) {
            ctx->pc = 0x1C2BE0u;
            goto label_1c2be0;
        }
    }
    ctx->pc = 0x1C2BCCu;
label_1c2bcc:
    // 0x1c2bcc: 0x8e0200e0
    ctx->pc = 0x1c2bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1c2bd0:
    // 0x1c2bd0: 0x14400004
label_1c2bd4:
    if (ctx->pc == 0x1C2BD4u) {
        ctx->pc = 0x1C2BD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1C2BD8u;
        goto label_1c2bd8;
    }
    ctx->pc = 0x1C2BD0u;
    {
        const bool branch_taken_0x1c2bd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2BD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1c2bd0) {
            ctx->pc = 0x1C2BE4u;
            goto label_1c2be4;
        }
    }
    ctx->pc = 0x1C2BD8u;
label_1c2bd8:
    // 0x1c2bd8: 0x10000042
label_1c2bdc:
    if (ctx->pc == 0x1C2BDCu) {
        ctx->pc = 0x1C2BDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BE0u;
        goto label_1c2be0;
    }
    ctx->pc = 0x1C2BD8u;
    {
        const bool branch_taken_0x1c2bd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2BDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2bd8) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2BE0u;
label_1c2be0:
    // 0x1c2be0: 0x24020008
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1c2be4:
    // 0x1c2be4: 0xa2020001
    ctx->pc = 0x1c2be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c2be8:
    // 0x1c2be8: 0x1000003b
label_1c2bec:
    if (ctx->pc == 0x1C2BECu) {
        ctx->pc = 0x1C2BECu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C2BF0u;
        goto label_1c2bf0;
    }
    ctx->pc = 0x1C2BE8u;
    {
        const bool branch_taken_0x1c2be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2BECu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c2be8) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2BF0u;
label_1c2bf0:
    // 0x1c2bf0: 0xc070c54
label_1c2bf4:
    if (ctx->pc == 0x1C2BF4u) {
        ctx->pc = 0x1C2BF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BF8u;
        goto label_1c2bf8;
    }
    ctx->pc = 0x1C2BF0u;
    SET_GPR_U32(ctx, 31, 0x1C2BF8u);
    ctx->pc = 0x1C2BF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C3150u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3150_0x1c3150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BF8u; }
    }
    if (ctx->pc != 0x1C2BF8u) { return; }
    ctx->pc = 0x1C2BF8u;
label_1c2bf8:
    // 0x1c2bf8: 0x14400037
label_1c2bfc:
    if (ctx->pc == 0x1C2BFCu) {
        ctx->pc = 0x1C2C00u;
        goto label_1c2c00;
    }
    ctx->pc = 0x1C2BF8u;
    {
        const bool branch_taken_0x1c2bf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2bf8) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2C00u;
label_1c2c00:
    // 0x1c2c00: 0x8e0200dc
    ctx->pc = 0x1c2c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1c2c04:
    // 0x1c2c04: 0x14400003
label_1c2c08:
    if (ctx->pc == 0x1C2C08u) {
        ctx->pc = 0x1C2C08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C0Cu;
        goto label_1c2c0c;
    }
    ctx->pc = 0x1C2C04u;
    {
        const bool branch_taken_0x1c2c04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c04) {
            ctx->pc = 0x1C2C14u;
            goto label_1c2c14;
        }
    }
    ctx->pc = 0x1C2C0Cu;
label_1c2c0c:
    // 0x1c2c0c: 0x10000035
label_1c2c10:
    if (ctx->pc == 0x1C2C10u) {
        ctx->pc = 0x1C2C14u;
        goto label_1c2c14;
    }
    ctx->pc = 0x1C2C0Cu;
    {
        const bool branch_taken_0x1c2c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2c0c) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2C14u;
label_1c2c14:
    // 0x1c2c14: 0xc070498
label_1c2c18:
    if (ctx->pc == 0x1C2C18u) {
        ctx->pc = 0x1C2C1Cu;
        goto label_1c2c1c;
    }
    ctx->pc = 0x1C2C14u;
    SET_GPR_U32(ctx, 31, 0x1C2C1Cu);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C1Cu; }
    }
    if (ctx->pc != 0x1C2C1Cu) { return; }
    ctx->pc = 0x1C2C1Cu;
label_1c2c1c:
    // 0x1c2c1c: 0x14400006
label_1c2c20:
    if (ctx->pc == 0x1C2C20u) {
        ctx->pc = 0x1C2C24u;
        goto label_1c2c24;
    }
    ctx->pc = 0x1C2C1Cu;
    {
        const bool branch_taken_0x1c2c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2c1c) {
            ctx->pc = 0x1C2C38u;
            goto label_1c2c38;
        }
    }
    ctx->pc = 0x1C2C24u;
label_1c2c24:
    // 0x1c2c24: 0x8e0200e0
    ctx->pc = 0x1c2c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1c2c28:
    // 0x1c2c28: 0x14400004
label_1c2c2c:
    if (ctx->pc == 0x1C2C2Cu) {
        ctx->pc = 0x1C2C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1C2C30u;
        goto label_1c2c30;
    }
    ctx->pc = 0x1C2C28u;
    {
        const bool branch_taken_0x1c2c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1c2c28) {
            ctx->pc = 0x1C2C3Cu;
            goto label_1c2c3c;
        }
    }
    ctx->pc = 0x1C2C30u;
label_1c2c30:
    // 0x1c2c30: 0x1000002c
label_1c2c34:
    if (ctx->pc == 0x1C2C34u) {
        ctx->pc = 0x1C2C34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C38u;
        goto label_1c2c38;
    }
    ctx->pc = 0x1C2C30u;
    {
        const bool branch_taken_0x1c2c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c30) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2C38u;
label_1c2c38:
    // 0x1c2c38: 0x24020009
    ctx->pc = 0x1c2c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_1c2c3c:
    // 0x1c2c3c: 0xa2020001
    ctx->pc = 0x1c2c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1c2c40:
    // 0x1c2c40: 0x10000025
label_1c2c44:
    if (ctx->pc == 0x1C2C44u) {
        ctx->pc = 0x1C2C44u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C48u;
        goto label_1c2c48;
    }
    ctx->pc = 0x1C2C40u;
    {
        const bool branch_taken_0x1c2c40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C44u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c2c40) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2C48u;
label_1c2c48:
    // 0x1c2c48: 0xc07125c
label_1c2c4c:
    if (ctx->pc == 0x1C2C4Cu) {
        ctx->pc = 0x1C2C4Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C50u;
        goto label_1c2c50;
    }
    ctx->pc = 0x1C2C48u;
    SET_GPR_U32(ctx, 31, 0x1C2C50u);
    ctx->pc = 0x1C2C4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C4970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4970_0x1c4970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C50u; }
    }
    if (ctx->pc != 0x1C2C50u) { return; }
    ctx->pc = 0x1C2C50u;
label_1c2c50:
    // 0x1c2c50: 0x14400021
label_1c2c54:
    if (ctx->pc == 0x1C2C54u) {
        ctx->pc = 0x1C2C58u;
        goto label_1c2c58;
    }
    ctx->pc = 0x1C2C50u;
    {
        const bool branch_taken_0x1c2c50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2c50) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2C58u;
label_1c2c58:
    // 0x1c2c58: 0x1000ffd4
label_1c2c5c:
    if (ctx->pc == 0x1C2C5Cu) {
        ctx->pc = 0x1C2C5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x1C2C60u;
        goto label_1c2c60;
    }
    ctx->pc = 0x1C2C58u;
    {
        const bool branch_taken_0x1c2c58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 220)));
        if (branch_taken_0x1c2c58) {
            ctx->pc = 0x1C2BACu;
            goto label_1c2bac;
        }
    }
    ctx->pc = 0x1C2C60u;
label_1c2c60:
    // 0x1c2c60: 0xc0710e4
label_1c2c64:
    if (ctx->pc == 0x1C2C64u) {
        ctx->pc = 0x1C2C64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C68u;
        goto label_1c2c68;
    }
    ctx->pc = 0x1C2C60u;
    SET_GPR_U32(ctx, 31, 0x1C2C68u);
    ctx->pc = 0x1C2C64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C4390u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4390_0x1c4390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C68u; }
    }
    if (ctx->pc != 0x1C2C68u) { return; }
    ctx->pc = 0x1C2C68u;
label_1c2c68:
    // 0x1c2c68: 0x1440001b
label_1c2c6c:
    if (ctx->pc == 0x1C2C6Cu) {
        ctx->pc = 0x1C2C70u;
        goto label_1c2c70;
    }
    ctx->pc = 0x1C2C68u;
    {
        const bool branch_taken_0x1c2c68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2c68) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2C70u;
label_1c2c70:
    // 0x1c2c70: 0x1000001c
label_1c2c74:
    if (ctx->pc == 0x1C2C74u) {
        ctx->pc = 0x1C2C74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C78u;
        goto label_1c2c78;
    }
    ctx->pc = 0x1C2C70u;
    {
        const bool branch_taken_0x1c2c70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c70) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2C78u;
label_1c2c78:
    // 0x1c2c78: 0xc070e54
label_1c2c7c:
    if (ctx->pc == 0x1C2C7Cu) {
        ctx->pc = 0x1C2C7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C80u;
        goto label_1c2c80;
    }
    ctx->pc = 0x1C2C78u;
    SET_GPR_U32(ctx, 31, 0x1C2C80u);
    ctx->pc = 0x1C2C7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C3950u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3950_0x1c3950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C80u; }
    }
    if (ctx->pc != 0x1C2C80u) { return; }
    ctx->pc = 0x1C2C80u;
label_1c2c80:
    // 0x1c2c80: 0x14400015
label_1c2c84:
    if (ctx->pc == 0x1C2C84u) {
        ctx->pc = 0x1C2C88u;
        goto label_1c2c88;
    }
    ctx->pc = 0x1C2C80u;
    {
        const bool branch_taken_0x1c2c80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2c80) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2C88u;
label_1c2c88:
    // 0x1c2c88: 0x10000016
label_1c2c8c:
    if (ctx->pc == 0x1C2C8Cu) {
        ctx->pc = 0x1C2C8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C90u;
        goto label_1c2c90;
    }
    ctx->pc = 0x1C2C88u;
    {
        const bool branch_taken_0x1c2c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2C8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c88) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2C90u;
label_1c2c90:
    // 0x1c2c90: 0xc070d64
label_1c2c94:
    if (ctx->pc == 0x1C2C94u) {
        ctx->pc = 0x1C2C94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C98u;
        goto label_1c2c98;
    }
    ctx->pc = 0x1C2C90u;
    SET_GPR_U32(ctx, 31, 0x1C2C98u);
    ctx->pc = 0x1C2C94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C3590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3590_0x1c3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C98u; }
    }
    if (ctx->pc != 0x1C2C98u) { return; }
    ctx->pc = 0x1C2C98u;
label_1c2c98:
    // 0x1c2c98: 0x1440000f
label_1c2c9c:
    if (ctx->pc == 0x1C2C9Cu) {
        ctx->pc = 0x1C2CA0u;
        goto label_1c2ca0;
    }
    ctx->pc = 0x1C2C98u;
    {
        const bool branch_taken_0x1c2c98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2c98) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2CA0u;
label_1c2ca0:
    // 0x1c2ca0: 0x10000010
label_1c2ca4:
    if (ctx->pc == 0x1C2CA4u) {
        ctx->pc = 0x1C2CA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CA8u;
        goto label_1c2ca8;
    }
    ctx->pc = 0x1C2CA0u;
    {
        const bool branch_taken_0x1c2ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2CA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ca0) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2CA8u;
label_1c2ca8:
    // 0x1c2ca8: 0xc071328
label_1c2cac:
    if (ctx->pc == 0x1C2CACu) {
        ctx->pc = 0x1C2CACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CB0u;
        goto label_1c2cb0;
    }
    ctx->pc = 0x1C2CA8u;
    SET_GPR_U32(ctx, 31, 0x1C2CB0u);
    ctx->pc = 0x1C2CACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C4CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4CA0_0x1c4ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CB0u; }
    }
    if (ctx->pc != 0x1C2CB0u) { return; }
    ctx->pc = 0x1C2CB0u;
label_1c2cb0:
    // 0x1c2cb0: 0x14400009
label_1c2cb4:
    if (ctx->pc == 0x1C2CB4u) {
        ctx->pc = 0x1C2CB8u;
        goto label_1c2cb8;
    }
    ctx->pc = 0x1C2CB0u;
    {
        const bool branch_taken_0x1c2cb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2cb0) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2CB8u;
label_1c2cb8:
    // 0x1c2cb8: 0x1000000a
label_1c2cbc:
    if (ctx->pc == 0x1C2CBCu) {
        ctx->pc = 0x1C2CBCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CC0u;
        goto label_1c2cc0;
    }
    ctx->pc = 0x1C2CB8u;
    {
        const bool branch_taken_0x1c2cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2CBCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2cb8) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2CC0u;
label_1c2cc0:
    // 0x1c2cc0: 0xc071378
label_1c2cc4:
    if (ctx->pc == 0x1C2CC4u) {
        ctx->pc = 0x1C2CC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CC8u;
        goto label_1c2cc8;
    }
    ctx->pc = 0x1C2CC0u;
    SET_GPR_U32(ctx, 31, 0x1C2CC8u);
    ctx->pc = 0x1C2CC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C4DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4DE0_0x1c4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CC8u; }
    }
    if (ctx->pc != 0x1C2CC8u) { return; }
    ctx->pc = 0x1C2CC8u;
label_1c2cc8:
    // 0x1c2cc8: 0x14400003
label_1c2ccc:
    if (ctx->pc == 0x1C2CCCu) {
        ctx->pc = 0x1C2CD0u;
        goto label_1c2cd0;
    }
    ctx->pc = 0x1C2CC8u;
    {
        const bool branch_taken_0x1c2cc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c2cc8) {
            ctx->pc = 0x1C2CD8u;
            goto label_1c2cd8;
        }
    }
    ctx->pc = 0x1C2CD0u;
label_1c2cd0:
    // 0x1c2cd0: 0x10000004
label_1c2cd4:
    if (ctx->pc == 0x1C2CD4u) {
        ctx->pc = 0x1C2CD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CD8u;
        goto label_1c2cd8;
    }
    ctx->pc = 0x1C2CD0u;
    {
        const bool branch_taken_0x1c2cd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2CD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2cd0) {
            ctx->pc = 0x1C2CE4u;
            goto label_1c2ce4;
        }
    }
    ctx->pc = 0x1C2CD8u;
label_1c2cd8:
    // 0x1c2cd8: 0xc0700e8
label_1c2cdc:
    if (ctx->pc == 0x1C2CDCu) {
        ctx->pc = 0x1C2CE0u;
        goto label_1c2ce0;
    }
    ctx->pc = 0x1C2CD8u;
    SET_GPR_U32(ctx, 31, 0x1C2CE0u);
    ctx->pc = 0x1C03A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C03A0_0x1c03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CE0u; }
    }
    if (ctx->pc != 0x1C2CE0u) { return; }
    ctx->pc = 0x1C2CE0u;
label_1c2ce0:
    // 0x1c2ce0: 0x24020001
    ctx->pc = 0x1c2ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2ce4:
    // 0x1c2ce4: 0xdfbf0010
    ctx->pc = 0x1c2ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2ce8:
    // 0x1c2ce8: 0x7bb00000
    ctx->pc = 0x1c2ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2cec:
    // 0x1c2cec: 0x3e00008
label_1c2cf0:
    if (ctx->pc == 0x1C2CF0u) {
        ctx->pc = 0x1C2CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C2CF4u;
        goto label_1c2cf4;
    }
    ctx->pc = 0x1C2CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2940u: goto label_1c2940;
            case 0x1C2944u: goto label_1c2944;
            case 0x1C2948u: goto label_1c2948;
            case 0x1C294Cu: goto label_1c294c;
            case 0x1C2950u: goto label_1c2950;
            case 0x1C2954u: goto label_1c2954;
            case 0x1C2958u: goto label_1c2958;
            case 0x1C295Cu: goto label_1c295c;
            case 0x1C2960u: goto label_1c2960;
            case 0x1C2964u: goto label_1c2964;
            case 0x1C2968u: goto label_1c2968;
            case 0x1C296Cu: goto label_1c296c;
            case 0x1C2970u: goto label_1c2970;
            case 0x1C2974u: goto label_1c2974;
            case 0x1C2978u: goto label_1c2978;
            case 0x1C297Cu: goto label_1c297c;
            case 0x1C2980u: goto label_1c2980;
            case 0x1C2984u: goto label_1c2984;
            case 0x1C2988u: goto label_1c2988;
            case 0x1C298Cu: goto label_1c298c;
            case 0x1C2990u: goto label_1c2990;
            case 0x1C2994u: goto label_1c2994;
            case 0x1C2998u: goto label_1c2998;
            case 0x1C299Cu: goto label_1c299c;
            case 0x1C29A0u: goto label_1c29a0;
            case 0x1C29A4u: goto label_1c29a4;
            case 0x1C29A8u: goto label_1c29a8;
            case 0x1C29ACu: goto label_1c29ac;
            case 0x1C29B0u: goto label_1c29b0;
            case 0x1C29B4u: goto label_1c29b4;
            case 0x1C29B8u: goto label_1c29b8;
            case 0x1C29BCu: goto label_1c29bc;
            case 0x1C29C0u: goto label_1c29c0;
            case 0x1C29C4u: goto label_1c29c4;
            case 0x1C29C8u: goto label_1c29c8;
            case 0x1C29CCu: goto label_1c29cc;
            case 0x1C29D0u: goto label_1c29d0;
            case 0x1C29D4u: goto label_1c29d4;
            case 0x1C29D8u: goto label_1c29d8;
            case 0x1C29DCu: goto label_1c29dc;
            case 0x1C29E0u: goto label_1c29e0;
            case 0x1C29E4u: goto label_1c29e4;
            case 0x1C29E8u: goto label_1c29e8;
            case 0x1C29ECu: goto label_1c29ec;
            case 0x1C29F0u: goto label_1c29f0;
            case 0x1C29F4u: goto label_1c29f4;
            case 0x1C29F8u: goto label_1c29f8;
            case 0x1C29FCu: goto label_1c29fc;
            case 0x1C2A00u: goto label_1c2a00;
            case 0x1C2A04u: goto label_1c2a04;
            case 0x1C2A08u: goto label_1c2a08;
            case 0x1C2A0Cu: goto label_1c2a0c;
            case 0x1C2A10u: goto label_1c2a10;
            case 0x1C2A14u: goto label_1c2a14;
            case 0x1C2A18u: goto label_1c2a18;
            case 0x1C2A1Cu: goto label_1c2a1c;
            case 0x1C2A20u: goto label_1c2a20;
            case 0x1C2A24u: goto label_1c2a24;
            case 0x1C2A28u: goto label_1c2a28;
            case 0x1C2A2Cu: goto label_1c2a2c;
            case 0x1C2A30u: goto label_1c2a30;
            case 0x1C2A34u: goto label_1c2a34;
            case 0x1C2A38u: goto label_1c2a38;
            case 0x1C2A3Cu: goto label_1c2a3c;
            case 0x1C2A40u: goto label_1c2a40;
            case 0x1C2A44u: goto label_1c2a44;
            case 0x1C2A48u: goto label_1c2a48;
            case 0x1C2A4Cu: goto label_1c2a4c;
            case 0x1C2A50u: goto label_1c2a50;
            case 0x1C2A54u: goto label_1c2a54;
            case 0x1C2A58u: goto label_1c2a58;
            case 0x1C2A5Cu: goto label_1c2a5c;
            case 0x1C2A60u: goto label_1c2a60;
            case 0x1C2A64u: goto label_1c2a64;
            case 0x1C2A68u: goto label_1c2a68;
            case 0x1C2A6Cu: goto label_1c2a6c;
            case 0x1C2A70u: goto label_1c2a70;
            case 0x1C2A74u: goto label_1c2a74;
            case 0x1C2A78u: goto label_1c2a78;
            case 0x1C2A7Cu: goto label_1c2a7c;
            case 0x1C2A80u: goto label_1c2a80;
            case 0x1C2A84u: goto label_1c2a84;
            case 0x1C2A88u: goto label_1c2a88;
            case 0x1C2A8Cu: goto label_1c2a8c;
            case 0x1C2A90u: goto label_1c2a90;
            case 0x1C2A94u: goto label_1c2a94;
            case 0x1C2A98u: goto label_1c2a98;
            case 0x1C2A9Cu: goto label_1c2a9c;
            case 0x1C2AA0u: goto label_1c2aa0;
            case 0x1C2AA4u: goto label_1c2aa4;
            case 0x1C2AA8u: goto label_1c2aa8;
            case 0x1C2AACu: goto label_1c2aac;
            case 0x1C2AB0u: goto label_1c2ab0;
            case 0x1C2AB4u: goto label_1c2ab4;
            case 0x1C2AB8u: goto label_1c2ab8;
            case 0x1C2ABCu: goto label_1c2abc;
            case 0x1C2AC0u: goto label_1c2ac0;
            case 0x1C2AC4u: goto label_1c2ac4;
            case 0x1C2AC8u: goto label_1c2ac8;
            case 0x1C2ACCu: goto label_1c2acc;
            case 0x1C2AD0u: goto label_1c2ad0;
            case 0x1C2AD4u: goto label_1c2ad4;
            case 0x1C2AD8u: goto label_1c2ad8;
            case 0x1C2ADCu: goto label_1c2adc;
            case 0x1C2AE0u: goto label_1c2ae0;
            case 0x1C2AE4u: goto label_1c2ae4;
            case 0x1C2AE8u: goto label_1c2ae8;
            case 0x1C2AECu: goto label_1c2aec;
            case 0x1C2AF0u: goto label_1c2af0;
            case 0x1C2AF4u: goto label_1c2af4;
            case 0x1C2AF8u: goto label_1c2af8;
            case 0x1C2AFCu: goto label_1c2afc;
            case 0x1C2B00u: goto label_1c2b00;
            case 0x1C2B04u: goto label_1c2b04;
            case 0x1C2B08u: goto label_1c2b08;
            case 0x1C2B0Cu: goto label_1c2b0c;
            case 0x1C2B10u: goto label_1c2b10;
            case 0x1C2B14u: goto label_1c2b14;
            case 0x1C2B18u: goto label_1c2b18;
            case 0x1C2B1Cu: goto label_1c2b1c;
            case 0x1C2B20u: goto label_1c2b20;
            case 0x1C2B24u: goto label_1c2b24;
            case 0x1C2B28u: goto label_1c2b28;
            case 0x1C2B2Cu: goto label_1c2b2c;
            case 0x1C2B30u: goto label_1c2b30;
            case 0x1C2B34u: goto label_1c2b34;
            case 0x1C2B38u: goto label_1c2b38;
            case 0x1C2B3Cu: goto label_1c2b3c;
            case 0x1C2B40u: goto label_1c2b40;
            case 0x1C2B44u: goto label_1c2b44;
            case 0x1C2B48u: goto label_1c2b48;
            case 0x1C2B4Cu: goto label_1c2b4c;
            case 0x1C2B50u: goto label_1c2b50;
            case 0x1C2B54u: goto label_1c2b54;
            case 0x1C2B58u: goto label_1c2b58;
            case 0x1C2B5Cu: goto label_1c2b5c;
            case 0x1C2B60u: goto label_1c2b60;
            case 0x1C2B64u: goto label_1c2b64;
            case 0x1C2B68u: goto label_1c2b68;
            case 0x1C2B6Cu: goto label_1c2b6c;
            case 0x1C2B70u: goto label_1c2b70;
            case 0x1C2B74u: goto label_1c2b74;
            case 0x1C2B78u: goto label_1c2b78;
            case 0x1C2B7Cu: goto label_1c2b7c;
            case 0x1C2B80u: goto label_1c2b80;
            case 0x1C2B84u: goto label_1c2b84;
            case 0x1C2B88u: goto label_1c2b88;
            case 0x1C2B8Cu: goto label_1c2b8c;
            case 0x1C2B90u: goto label_1c2b90;
            case 0x1C2B94u: goto label_1c2b94;
            case 0x1C2B98u: goto label_1c2b98;
            case 0x1C2B9Cu: goto label_1c2b9c;
            case 0x1C2BA0u: goto label_1c2ba0;
            case 0x1C2BA4u: goto label_1c2ba4;
            case 0x1C2BA8u: goto label_1c2ba8;
            case 0x1C2BACu: goto label_1c2bac;
            case 0x1C2BB0u: goto label_1c2bb0;
            case 0x1C2BB4u: goto label_1c2bb4;
            case 0x1C2BB8u: goto label_1c2bb8;
            case 0x1C2BBCu: goto label_1c2bbc;
            case 0x1C2BC0u: goto label_1c2bc0;
            case 0x1C2BC4u: goto label_1c2bc4;
            case 0x1C2BC8u: goto label_1c2bc8;
            case 0x1C2BCCu: goto label_1c2bcc;
            case 0x1C2BD0u: goto label_1c2bd0;
            case 0x1C2BD4u: goto label_1c2bd4;
            case 0x1C2BD8u: goto label_1c2bd8;
            case 0x1C2BDCu: goto label_1c2bdc;
            case 0x1C2BE0u: goto label_1c2be0;
            case 0x1C2BE4u: goto label_1c2be4;
            case 0x1C2BE8u: goto label_1c2be8;
            case 0x1C2BECu: goto label_1c2bec;
            case 0x1C2BF0u: goto label_1c2bf0;
            case 0x1C2BF4u: goto label_1c2bf4;
            case 0x1C2BF8u: goto label_1c2bf8;
            case 0x1C2BFCu: goto label_1c2bfc;
            case 0x1C2C00u: goto label_1c2c00;
            case 0x1C2C04u: goto label_1c2c04;
            case 0x1C2C08u: goto label_1c2c08;
            case 0x1C2C0Cu: goto label_1c2c0c;
            case 0x1C2C10u: goto label_1c2c10;
            case 0x1C2C14u: goto label_1c2c14;
            case 0x1C2C18u: goto label_1c2c18;
            case 0x1C2C1Cu: goto label_1c2c1c;
            case 0x1C2C20u: goto label_1c2c20;
            case 0x1C2C24u: goto label_1c2c24;
            case 0x1C2C28u: goto label_1c2c28;
            case 0x1C2C2Cu: goto label_1c2c2c;
            case 0x1C2C30u: goto label_1c2c30;
            case 0x1C2C34u: goto label_1c2c34;
            case 0x1C2C38u: goto label_1c2c38;
            case 0x1C2C3Cu: goto label_1c2c3c;
            case 0x1C2C40u: goto label_1c2c40;
            case 0x1C2C44u: goto label_1c2c44;
            case 0x1C2C48u: goto label_1c2c48;
            case 0x1C2C4Cu: goto label_1c2c4c;
            case 0x1C2C50u: goto label_1c2c50;
            case 0x1C2C54u: goto label_1c2c54;
            case 0x1C2C58u: goto label_1c2c58;
            case 0x1C2C5Cu: goto label_1c2c5c;
            case 0x1C2C60u: goto label_1c2c60;
            case 0x1C2C64u: goto label_1c2c64;
            case 0x1C2C68u: goto label_1c2c68;
            case 0x1C2C6Cu: goto label_1c2c6c;
            case 0x1C2C70u: goto label_1c2c70;
            case 0x1C2C74u: goto label_1c2c74;
            case 0x1C2C78u: goto label_1c2c78;
            case 0x1C2C7Cu: goto label_1c2c7c;
            case 0x1C2C80u: goto label_1c2c80;
            case 0x1C2C84u: goto label_1c2c84;
            case 0x1C2C88u: goto label_1c2c88;
            case 0x1C2C8Cu: goto label_1c2c8c;
            case 0x1C2C90u: goto label_1c2c90;
            case 0x1C2C94u: goto label_1c2c94;
            case 0x1C2C98u: goto label_1c2c98;
            case 0x1C2C9Cu: goto label_1c2c9c;
            case 0x1C2CA0u: goto label_1c2ca0;
            case 0x1C2CA4u: goto label_1c2ca4;
            case 0x1C2CA8u: goto label_1c2ca8;
            case 0x1C2CACu: goto label_1c2cac;
            case 0x1C2CB0u: goto label_1c2cb0;
            case 0x1C2CB4u: goto label_1c2cb4;
            case 0x1C2CB8u: goto label_1c2cb8;
            case 0x1C2CBCu: goto label_1c2cbc;
            case 0x1C2CC0u: goto label_1c2cc0;
            case 0x1C2CC4u: goto label_1c2cc4;
            case 0x1C2CC8u: goto label_1c2cc8;
            case 0x1C2CCCu: goto label_1c2ccc;
            case 0x1C2CD0u: goto label_1c2cd0;
            case 0x1C2CD4u: goto label_1c2cd4;
            case 0x1C2CD8u: goto label_1c2cd8;
            case 0x1C2CDCu: goto label_1c2cdc;
            case 0x1C2CE0u: goto label_1c2ce0;
            case 0x1C2CE4u: goto label_1c2ce4;
            case 0x1C2CE8u: goto label_1c2ce8;
            case 0x1C2CECu: goto label_1c2cec;
            case 0x1C2CF0u: goto label_1c2cf0;
            case 0x1C2CF4u: goto label_1c2cf4;
            case 0x1C2CF8u: goto label_1c2cf8;
            case 0x1C2CFCu: goto label_1c2cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2CF4u;
label_1c2cf4:
    // 0x1c2cf4: 0x0
    ctx->pc = 0x1c2cf4u;
    // NOP
label_1c2cf8:
    // 0x1c2cf8: 0x0
    ctx->pc = 0x1c2cf8u;
    // NOP
label_1c2cfc:
    // 0x1c2cfc: 0x0
    ctx->pc = 0x1c2cfcu;
    // NOP
}
