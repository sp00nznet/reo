#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B9970
// Address: 0x1b9970 - 0x1ba170
void sub_001B9970_0x1b9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b9970u;

label_1b9970:
    // 0x1b9970: 0x90830002
    ctx->pc = 0x1b9970u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1b9974:
    // 0x1b9974: 0x2c61000f
    ctx->pc = 0x1b9974u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 15));
label_1b9978:
    // 0x1b9978: 0x1020002b
label_1b997c:
    if (ctx->pc == 0x1B997Cu) {
        ctx->pc = 0x1B997Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B9980u;
        goto label_1b9980;
    }
    ctx->pc = 0x1B9978u;
    {
        const bool branch_taken_0x1b9978 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B997Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b9978) {
            ctx->pc = 0x1B9A28u;
            goto label_1b9a28;
        }
    }
    ctx->pc = 0x1B9980u;
label_1b9980:
    // 0x1b9980: 0x3c060025
    ctx->pc = 0x1b9980u;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
label_1b9984:
    // 0x1b9984: 0x31880
    ctx->pc = 0x1b9984u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1b9988:
    // 0x1b9988: 0x24c601b0
    ctx->pc = 0x1b9988u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 432));
label_1b998c:
    // 0x1b998c: 0x661821
    ctx->pc = 0x1b998cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b9990:
    // 0x1b9990: 0x8c630000
    ctx->pc = 0x1b9990u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9994:
    // 0x1b9994: 0x600008
label_1b9998:
    if (ctx->pc == 0x1B9998u) {
        ctx->pc = 0x1B999Cu;
        goto label_1b999c;
    }
    ctx->pc = 0x1B9994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9970u: goto label_1b9970;
            case 0x1B9974u: goto label_1b9974;
            case 0x1B9978u: goto label_1b9978;
            case 0x1B997Cu: goto label_1b997c;
            case 0x1B9980u: goto label_1b9980;
            case 0x1B9984u: goto label_1b9984;
            case 0x1B9988u: goto label_1b9988;
            case 0x1B998Cu: goto label_1b998c;
            case 0x1B9990u: goto label_1b9990;
            case 0x1B9994u: goto label_1b9994;
            case 0x1B9998u: goto label_1b9998;
            case 0x1B999Cu: goto label_1b999c;
            case 0x1B99A0u: goto label_1b99a0;
            case 0x1B99A4u: goto label_1b99a4;
            case 0x1B99A8u: goto label_1b99a8;
            case 0x1B99ACu: goto label_1b99ac;
            case 0x1B99B0u: goto label_1b99b0;
            case 0x1B99B4u: goto label_1b99b4;
            case 0x1B99B8u: goto label_1b99b8;
            case 0x1B99BCu: goto label_1b99bc;
            case 0x1B99C0u: goto label_1b99c0;
            case 0x1B99C4u: goto label_1b99c4;
            case 0x1B99C8u: goto label_1b99c8;
            case 0x1B99CCu: goto label_1b99cc;
            case 0x1B99D0u: goto label_1b99d0;
            case 0x1B99D4u: goto label_1b99d4;
            case 0x1B99D8u: goto label_1b99d8;
            case 0x1B99DCu: goto label_1b99dc;
            case 0x1B99E0u: goto label_1b99e0;
            case 0x1B99E4u: goto label_1b99e4;
            case 0x1B99E8u: goto label_1b99e8;
            case 0x1B99ECu: goto label_1b99ec;
            case 0x1B99F0u: goto label_1b99f0;
            case 0x1B99F4u: goto label_1b99f4;
            case 0x1B99F8u: goto label_1b99f8;
            case 0x1B99FCu: goto label_1b99fc;
            case 0x1B9A00u: goto label_1b9a00;
            case 0x1B9A04u: goto label_1b9a04;
            case 0x1B9A08u: goto label_1b9a08;
            case 0x1B9A0Cu: goto label_1b9a0c;
            case 0x1B9A10u: goto label_1b9a10;
            case 0x1B9A14u: goto label_1b9a14;
            case 0x1B9A18u: goto label_1b9a18;
            case 0x1B9A1Cu: goto label_1b9a1c;
            case 0x1B9A20u: goto label_1b9a20;
            case 0x1B9A24u: goto label_1b9a24;
            case 0x1B9A28u: goto label_1b9a28;
            case 0x1B9A2Cu: goto label_1b9a2c;
            case 0x1B9A30u: goto label_1b9a30;
            case 0x1B9A34u: goto label_1b9a34;
            case 0x1B9A38u: goto label_1b9a38;
            case 0x1B9A3Cu: goto label_1b9a3c;
            case 0x1B9A40u: goto label_1b9a40;
            case 0x1B9A44u: goto label_1b9a44;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A4Cu: goto label_1b9a4c;
            case 0x1B9A50u: goto label_1b9a50;
            case 0x1B9A54u: goto label_1b9a54;
            case 0x1B9A58u: goto label_1b9a58;
            case 0x1B9A5Cu: goto label_1b9a5c;
            case 0x1B9A60u: goto label_1b9a60;
            case 0x1B9A64u: goto label_1b9a64;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9A6Cu: goto label_1b9a6c;
            case 0x1B9A70u: goto label_1b9a70;
            case 0x1B9A74u: goto label_1b9a74;
            case 0x1B9A78u: goto label_1b9a78;
            case 0x1B9A7Cu: goto label_1b9a7c;
            case 0x1B9A80u: goto label_1b9a80;
            case 0x1B9A84u: goto label_1b9a84;
            case 0x1B9A88u: goto label_1b9a88;
            case 0x1B9A8Cu: goto label_1b9a8c;
            case 0x1B9A90u: goto label_1b9a90;
            case 0x1B9A94u: goto label_1b9a94;
            case 0x1B9A98u: goto label_1b9a98;
            case 0x1B9A9Cu: goto label_1b9a9c;
            case 0x1B9AA0u: goto label_1b9aa0;
            case 0x1B9AA4u: goto label_1b9aa4;
            case 0x1B9AA8u: goto label_1b9aa8;
            case 0x1B9AACu: goto label_1b9aac;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AB4u: goto label_1b9ab4;
            case 0x1B9AB8u: goto label_1b9ab8;
            case 0x1B9ABCu: goto label_1b9abc;
            case 0x1B9AC0u: goto label_1b9ac0;
            case 0x1B9AC4u: goto label_1b9ac4;
            case 0x1B9AC8u: goto label_1b9ac8;
            case 0x1B9ACCu: goto label_1b9acc;
            case 0x1B9AD0u: goto label_1b9ad0;
            case 0x1B9AD4u: goto label_1b9ad4;
            case 0x1B9AD8u: goto label_1b9ad8;
            case 0x1B9ADCu: goto label_1b9adc;
            case 0x1B9AE0u: goto label_1b9ae0;
            case 0x1B9AE4u: goto label_1b9ae4;
            case 0x1B9AE8u: goto label_1b9ae8;
            case 0x1B9AECu: goto label_1b9aec;
            case 0x1B9AF0u: goto label_1b9af0;
            case 0x1B9AF4u: goto label_1b9af4;
            case 0x1B9AF8u: goto label_1b9af8;
            case 0x1B9AFCu: goto label_1b9afc;
            case 0x1B9B00u: goto label_1b9b00;
            case 0x1B9B04u: goto label_1b9b04;
            case 0x1B9B08u: goto label_1b9b08;
            case 0x1B9B0Cu: goto label_1b9b0c;
            case 0x1B9B10u: goto label_1b9b10;
            case 0x1B9B14u: goto label_1b9b14;
            case 0x1B9B18u: goto label_1b9b18;
            case 0x1B9B1Cu: goto label_1b9b1c;
            case 0x1B9B20u: goto label_1b9b20;
            case 0x1B9B24u: goto label_1b9b24;
            case 0x1B9B28u: goto label_1b9b28;
            case 0x1B9B2Cu: goto label_1b9b2c;
            case 0x1B9B30u: goto label_1b9b30;
            case 0x1B9B34u: goto label_1b9b34;
            case 0x1B9B38u: goto label_1b9b38;
            case 0x1B9B3Cu: goto label_1b9b3c;
            case 0x1B9B40u: goto label_1b9b40;
            case 0x1B9B44u: goto label_1b9b44;
            case 0x1B9B48u: goto label_1b9b48;
            case 0x1B9B4Cu: goto label_1b9b4c;
            case 0x1B9B50u: goto label_1b9b50;
            case 0x1B9B54u: goto label_1b9b54;
            case 0x1B9B58u: goto label_1b9b58;
            case 0x1B9B5Cu: goto label_1b9b5c;
            case 0x1B9B60u: goto label_1b9b60;
            case 0x1B9B64u: goto label_1b9b64;
            case 0x1B9B68u: goto label_1b9b68;
            case 0x1B9B6Cu: goto label_1b9b6c;
            case 0x1B9B70u: goto label_1b9b70;
            case 0x1B9B74u: goto label_1b9b74;
            case 0x1B9B78u: goto label_1b9b78;
            case 0x1B9B7Cu: goto label_1b9b7c;
            case 0x1B9B80u: goto label_1b9b80;
            case 0x1B9B84u: goto label_1b9b84;
            case 0x1B9B88u: goto label_1b9b88;
            case 0x1B9B8Cu: goto label_1b9b8c;
            case 0x1B9B90u: goto label_1b9b90;
            case 0x1B9B94u: goto label_1b9b94;
            case 0x1B9B98u: goto label_1b9b98;
            case 0x1B9B9Cu: goto label_1b9b9c;
            case 0x1B9BA0u: goto label_1b9ba0;
            case 0x1B9BA4u: goto label_1b9ba4;
            case 0x1B9BA8u: goto label_1b9ba8;
            case 0x1B9BACu: goto label_1b9bac;
            case 0x1B9BB0u: goto label_1b9bb0;
            case 0x1B9BB4u: goto label_1b9bb4;
            case 0x1B9BB8u: goto label_1b9bb8;
            case 0x1B9BBCu: goto label_1b9bbc;
            case 0x1B9BC0u: goto label_1b9bc0;
            case 0x1B9BC4u: goto label_1b9bc4;
            case 0x1B9BC8u: goto label_1b9bc8;
            case 0x1B9BCCu: goto label_1b9bcc;
            case 0x1B9BD0u: goto label_1b9bd0;
            case 0x1B9BD4u: goto label_1b9bd4;
            case 0x1B9BD8u: goto label_1b9bd8;
            case 0x1B9BDCu: goto label_1b9bdc;
            case 0x1B9BE0u: goto label_1b9be0;
            case 0x1B9BE4u: goto label_1b9be4;
            case 0x1B9BE8u: goto label_1b9be8;
            case 0x1B9BECu: goto label_1b9bec;
            case 0x1B9BF0u: goto label_1b9bf0;
            case 0x1B9BF4u: goto label_1b9bf4;
            case 0x1B9BF8u: goto label_1b9bf8;
            case 0x1B9BFCu: goto label_1b9bfc;
            case 0x1B9C00u: goto label_1b9c00;
            case 0x1B9C04u: goto label_1b9c04;
            case 0x1B9C08u: goto label_1b9c08;
            case 0x1B9C0Cu: goto label_1b9c0c;
            case 0x1B9C10u: goto label_1b9c10;
            case 0x1B9C14u: goto label_1b9c14;
            case 0x1B9C18u: goto label_1b9c18;
            case 0x1B9C1Cu: goto label_1b9c1c;
            case 0x1B9C20u: goto label_1b9c20;
            case 0x1B9C24u: goto label_1b9c24;
            case 0x1B9C28u: goto label_1b9c28;
            case 0x1B9C2Cu: goto label_1b9c2c;
            case 0x1B9C30u: goto label_1b9c30;
            case 0x1B9C34u: goto label_1b9c34;
            case 0x1B9C38u: goto label_1b9c38;
            case 0x1B9C3Cu: goto label_1b9c3c;
            case 0x1B9C40u: goto label_1b9c40;
            case 0x1B9C44u: goto label_1b9c44;
            case 0x1B9C48u: goto label_1b9c48;
            case 0x1B9C4Cu: goto label_1b9c4c;
            case 0x1B9C50u: goto label_1b9c50;
            case 0x1B9C54u: goto label_1b9c54;
            case 0x1B9C58u: goto label_1b9c58;
            case 0x1B9C5Cu: goto label_1b9c5c;
            case 0x1B9C60u: goto label_1b9c60;
            case 0x1B9C64u: goto label_1b9c64;
            case 0x1B9C68u: goto label_1b9c68;
            case 0x1B9C6Cu: goto label_1b9c6c;
            case 0x1B9C70u: goto label_1b9c70;
            case 0x1B9C74u: goto label_1b9c74;
            case 0x1B9C78u: goto label_1b9c78;
            case 0x1B9C7Cu: goto label_1b9c7c;
            case 0x1B9C80u: goto label_1b9c80;
            case 0x1B9C84u: goto label_1b9c84;
            case 0x1B9C88u: goto label_1b9c88;
            case 0x1B9C8Cu: goto label_1b9c8c;
            case 0x1B9C90u: goto label_1b9c90;
            case 0x1B9C94u: goto label_1b9c94;
            case 0x1B9C98u: goto label_1b9c98;
            case 0x1B9C9Cu: goto label_1b9c9c;
            case 0x1B9CA0u: goto label_1b9ca0;
            case 0x1B9CA4u: goto label_1b9ca4;
            case 0x1B9CA8u: goto label_1b9ca8;
            case 0x1B9CACu: goto label_1b9cac;
            case 0x1B9CB0u: goto label_1b9cb0;
            case 0x1B9CB4u: goto label_1b9cb4;
            case 0x1B9CB8u: goto label_1b9cb8;
            case 0x1B9CBCu: goto label_1b9cbc;
            case 0x1B9CC0u: goto label_1b9cc0;
            case 0x1B9CC4u: goto label_1b9cc4;
            case 0x1B9CC8u: goto label_1b9cc8;
            case 0x1B9CCCu: goto label_1b9ccc;
            case 0x1B9CD0u: goto label_1b9cd0;
            case 0x1B9CD4u: goto label_1b9cd4;
            case 0x1B9CD8u: goto label_1b9cd8;
            case 0x1B9CDCu: goto label_1b9cdc;
            case 0x1B9CE0u: goto label_1b9ce0;
            case 0x1B9CE4u: goto label_1b9ce4;
            case 0x1B9CE8u: goto label_1b9ce8;
            case 0x1B9CECu: goto label_1b9cec;
            case 0x1B9CF0u: goto label_1b9cf0;
            case 0x1B9CF4u: goto label_1b9cf4;
            case 0x1B9CF8u: goto label_1b9cf8;
            case 0x1B9CFCu: goto label_1b9cfc;
            case 0x1B9D00u: goto label_1b9d00;
            case 0x1B9D04u: goto label_1b9d04;
            case 0x1B9D08u: goto label_1b9d08;
            case 0x1B9D0Cu: goto label_1b9d0c;
            case 0x1B9D10u: goto label_1b9d10;
            case 0x1B9D14u: goto label_1b9d14;
            case 0x1B9D18u: goto label_1b9d18;
            case 0x1B9D1Cu: goto label_1b9d1c;
            case 0x1B9D20u: goto label_1b9d20;
            case 0x1B9D24u: goto label_1b9d24;
            case 0x1B9D28u: goto label_1b9d28;
            case 0x1B9D2Cu: goto label_1b9d2c;
            case 0x1B9D30u: goto label_1b9d30;
            case 0x1B9D34u: goto label_1b9d34;
            case 0x1B9D38u: goto label_1b9d38;
            case 0x1B9D3Cu: goto label_1b9d3c;
            case 0x1B9D40u: goto label_1b9d40;
            case 0x1B9D44u: goto label_1b9d44;
            case 0x1B9D48u: goto label_1b9d48;
            case 0x1B9D4Cu: goto label_1b9d4c;
            case 0x1B9D50u: goto label_1b9d50;
            case 0x1B9D54u: goto label_1b9d54;
            case 0x1B9D58u: goto label_1b9d58;
            case 0x1B9D5Cu: goto label_1b9d5c;
            case 0x1B9D60u: goto label_1b9d60;
            case 0x1B9D64u: goto label_1b9d64;
            case 0x1B9D68u: goto label_1b9d68;
            case 0x1B9D6Cu: goto label_1b9d6c;
            case 0x1B9D70u: goto label_1b9d70;
            case 0x1B9D74u: goto label_1b9d74;
            case 0x1B9D78u: goto label_1b9d78;
            case 0x1B9D7Cu: goto label_1b9d7c;
            case 0x1B9D80u: goto label_1b9d80;
            case 0x1B9D84u: goto label_1b9d84;
            case 0x1B9D88u: goto label_1b9d88;
            case 0x1B9D8Cu: goto label_1b9d8c;
            case 0x1B9D90u: goto label_1b9d90;
            case 0x1B9D94u: goto label_1b9d94;
            case 0x1B9D98u: goto label_1b9d98;
            case 0x1B9D9Cu: goto label_1b9d9c;
            case 0x1B9DA0u: goto label_1b9da0;
            case 0x1B9DA4u: goto label_1b9da4;
            case 0x1B9DA8u: goto label_1b9da8;
            case 0x1B9DACu: goto label_1b9dac;
            case 0x1B9DB0u: goto label_1b9db0;
            case 0x1B9DB4u: goto label_1b9db4;
            case 0x1B9DB8u: goto label_1b9db8;
            case 0x1B9DBCu: goto label_1b9dbc;
            case 0x1B9DC0u: goto label_1b9dc0;
            case 0x1B9DC4u: goto label_1b9dc4;
            case 0x1B9DC8u: goto label_1b9dc8;
            case 0x1B9DCCu: goto label_1b9dcc;
            case 0x1B9DD0u: goto label_1b9dd0;
            case 0x1B9DD4u: goto label_1b9dd4;
            case 0x1B9DD8u: goto label_1b9dd8;
            case 0x1B9DDCu: goto label_1b9ddc;
            case 0x1B9DE0u: goto label_1b9de0;
            case 0x1B9DE4u: goto label_1b9de4;
            case 0x1B9DE8u: goto label_1b9de8;
            case 0x1B9DECu: goto label_1b9dec;
            case 0x1B9DF0u: goto label_1b9df0;
            case 0x1B9DF4u: goto label_1b9df4;
            case 0x1B9DF8u: goto label_1b9df8;
            case 0x1B9DFCu: goto label_1b9dfc;
            case 0x1B9E00u: goto label_1b9e00;
            case 0x1B9E04u: goto label_1b9e04;
            case 0x1B9E08u: goto label_1b9e08;
            case 0x1B9E0Cu: goto label_1b9e0c;
            case 0x1B9E10u: goto label_1b9e10;
            case 0x1B9E14u: goto label_1b9e14;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9E1Cu: goto label_1b9e1c;
            case 0x1B9E20u: goto label_1b9e20;
            case 0x1B9E24u: goto label_1b9e24;
            case 0x1B9E28u: goto label_1b9e28;
            case 0x1B9E2Cu: goto label_1b9e2c;
            case 0x1B9E30u: goto label_1b9e30;
            case 0x1B9E34u: goto label_1b9e34;
            case 0x1B9E38u: goto label_1b9e38;
            case 0x1B9E3Cu: goto label_1b9e3c;
            case 0x1B9E40u: goto label_1b9e40;
            case 0x1B9E44u: goto label_1b9e44;
            case 0x1B9E48u: goto label_1b9e48;
            case 0x1B9E4Cu: goto label_1b9e4c;
            case 0x1B9E50u: goto label_1b9e50;
            case 0x1B9E54u: goto label_1b9e54;
            case 0x1B9E58u: goto label_1b9e58;
            case 0x1B9E5Cu: goto label_1b9e5c;
            case 0x1B9E60u: goto label_1b9e60;
            case 0x1B9E64u: goto label_1b9e64;
            case 0x1B9E68u: goto label_1b9e68;
            case 0x1B9E6Cu: goto label_1b9e6c;
            case 0x1B9E70u: goto label_1b9e70;
            case 0x1B9E74u: goto label_1b9e74;
            case 0x1B9E78u: goto label_1b9e78;
            case 0x1B9E7Cu: goto label_1b9e7c;
            case 0x1B9E80u: goto label_1b9e80;
            case 0x1B9E84u: goto label_1b9e84;
            case 0x1B9E88u: goto label_1b9e88;
            case 0x1B9E8Cu: goto label_1b9e8c;
            case 0x1B9E90u: goto label_1b9e90;
            case 0x1B9E94u: goto label_1b9e94;
            case 0x1B9E98u: goto label_1b9e98;
            case 0x1B9E9Cu: goto label_1b9e9c;
            case 0x1B9EA0u: goto label_1b9ea0;
            case 0x1B9EA4u: goto label_1b9ea4;
            case 0x1B9EA8u: goto label_1b9ea8;
            case 0x1B9EACu: goto label_1b9eac;
            case 0x1B9EB0u: goto label_1b9eb0;
            case 0x1B9EB4u: goto label_1b9eb4;
            case 0x1B9EB8u: goto label_1b9eb8;
            case 0x1B9EBCu: goto label_1b9ebc;
            case 0x1B9EC0u: goto label_1b9ec0;
            case 0x1B9EC4u: goto label_1b9ec4;
            case 0x1B9EC8u: goto label_1b9ec8;
            case 0x1B9ECCu: goto label_1b9ecc;
            case 0x1B9ED0u: goto label_1b9ed0;
            case 0x1B9ED4u: goto label_1b9ed4;
            case 0x1B9ED8u: goto label_1b9ed8;
            case 0x1B9EDCu: goto label_1b9edc;
            case 0x1B9EE0u: goto label_1b9ee0;
            case 0x1B9EE4u: goto label_1b9ee4;
            case 0x1B9EE8u: goto label_1b9ee8;
            case 0x1B9EECu: goto label_1b9eec;
            case 0x1B9EF0u: goto label_1b9ef0;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9EF8u: goto label_1b9ef8;
            case 0x1B9EFCu: goto label_1b9efc;
            case 0x1B9F00u: goto label_1b9f00;
            case 0x1B9F04u: goto label_1b9f04;
            case 0x1B9F08u: goto label_1b9f08;
            case 0x1B9F0Cu: goto label_1b9f0c;
            case 0x1B9F10u: goto label_1b9f10;
            case 0x1B9F14u: goto label_1b9f14;
            case 0x1B9F18u: goto label_1b9f18;
            case 0x1B9F1Cu: goto label_1b9f1c;
            case 0x1B9F20u: goto label_1b9f20;
            case 0x1B9F24u: goto label_1b9f24;
            case 0x1B9F28u: goto label_1b9f28;
            case 0x1B9F2Cu: goto label_1b9f2c;
            case 0x1B9F30u: goto label_1b9f30;
            case 0x1B9F34u: goto label_1b9f34;
            case 0x1B9F38u: goto label_1b9f38;
            case 0x1B9F3Cu: goto label_1b9f3c;
            case 0x1B9F40u: goto label_1b9f40;
            case 0x1B9F44u: goto label_1b9f44;
            case 0x1B9F48u: goto label_1b9f48;
            case 0x1B9F4Cu: goto label_1b9f4c;
            case 0x1B9F50u: goto label_1b9f50;
            case 0x1B9F54u: goto label_1b9f54;
            case 0x1B9F58u: goto label_1b9f58;
            case 0x1B9F5Cu: goto label_1b9f5c;
            case 0x1B9F60u: goto label_1b9f60;
            case 0x1B9F64u: goto label_1b9f64;
            case 0x1B9F68u: goto label_1b9f68;
            case 0x1B9F6Cu: goto label_1b9f6c;
            case 0x1B9F70u: goto label_1b9f70;
            case 0x1B9F74u: goto label_1b9f74;
            case 0x1B9F78u: goto label_1b9f78;
            case 0x1B9F7Cu: goto label_1b9f7c;
            case 0x1B9F80u: goto label_1b9f80;
            case 0x1B9F84u: goto label_1b9f84;
            case 0x1B9F88u: goto label_1b9f88;
            case 0x1B9F8Cu: goto label_1b9f8c;
            case 0x1B9F90u: goto label_1b9f90;
            case 0x1B9F94u: goto label_1b9f94;
            case 0x1B9F98u: goto label_1b9f98;
            case 0x1B9F9Cu: goto label_1b9f9c;
            case 0x1B9FA0u: goto label_1b9fa0;
            case 0x1B9FA4u: goto label_1b9fa4;
            case 0x1B9FA8u: goto label_1b9fa8;
            case 0x1B9FACu: goto label_1b9fac;
            case 0x1B9FB0u: goto label_1b9fb0;
            case 0x1B9FB4u: goto label_1b9fb4;
            case 0x1B9FB8u: goto label_1b9fb8;
            case 0x1B9FBCu: goto label_1b9fbc;
            case 0x1B9FC0u: goto label_1b9fc0;
            case 0x1B9FC4u: goto label_1b9fc4;
            case 0x1B9FC8u: goto label_1b9fc8;
            case 0x1B9FCCu: goto label_1b9fcc;
            case 0x1B9FD0u: goto label_1b9fd0;
            case 0x1B9FD4u: goto label_1b9fd4;
            case 0x1B9FD8u: goto label_1b9fd8;
            case 0x1B9FDCu: goto label_1b9fdc;
            case 0x1B9FE0u: goto label_1b9fe0;
            case 0x1B9FE4u: goto label_1b9fe4;
            case 0x1B9FE8u: goto label_1b9fe8;
            case 0x1B9FECu: goto label_1b9fec;
            case 0x1B9FF0u: goto label_1b9ff0;
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1B9FF8u: goto label_1b9ff8;
            case 0x1B9FFCu: goto label_1b9ffc;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA004u: goto label_1ba004;
            case 0x1BA008u: goto label_1ba008;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA010u: goto label_1ba010;
            case 0x1BA014u: goto label_1ba014;
            case 0x1BA018u: goto label_1ba018;
            case 0x1BA01Cu: goto label_1ba01c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA024u: goto label_1ba024;
            case 0x1BA028u: goto label_1ba028;
            case 0x1BA02Cu: goto label_1ba02c;
            case 0x1BA030u: goto label_1ba030;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA038u: goto label_1ba038;
            case 0x1BA03Cu: goto label_1ba03c;
            case 0x1BA040u: goto label_1ba040;
            case 0x1BA044u: goto label_1ba044;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA04Cu: goto label_1ba04c;
            case 0x1BA050u: goto label_1ba050;
            case 0x1BA054u: goto label_1ba054;
            case 0x1BA058u: goto label_1ba058;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA060u: goto label_1ba060;
            case 0x1BA064u: goto label_1ba064;
            case 0x1BA068u: goto label_1ba068;
            case 0x1BA06Cu: goto label_1ba06c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA074u: goto label_1ba074;
            case 0x1BA078u: goto label_1ba078;
            case 0x1BA07Cu: goto label_1ba07c;
            case 0x1BA080u: goto label_1ba080;
            case 0x1BA084u: goto label_1ba084;
            case 0x1BA088u: goto label_1ba088;
            case 0x1BA08Cu: goto label_1ba08c;
            case 0x1BA090u: goto label_1ba090;
            case 0x1BA094u: goto label_1ba094;
            case 0x1BA098u: goto label_1ba098;
            case 0x1BA09Cu: goto label_1ba09c;
            case 0x1BA0A0u: goto label_1ba0a0;
            case 0x1BA0A4u: goto label_1ba0a4;
            case 0x1BA0A8u: goto label_1ba0a8;
            case 0x1BA0ACu: goto label_1ba0ac;
            case 0x1BA0B0u: goto label_1ba0b0;
            case 0x1BA0B4u: goto label_1ba0b4;
            case 0x1BA0B8u: goto label_1ba0b8;
            case 0x1BA0BCu: goto label_1ba0bc;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0C4u: goto label_1ba0c4;
            case 0x1BA0C8u: goto label_1ba0c8;
            case 0x1BA0CCu: goto label_1ba0cc;
            case 0x1BA0D0u: goto label_1ba0d0;
            case 0x1BA0D4u: goto label_1ba0d4;
            case 0x1BA0D8u: goto label_1ba0d8;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0E0u: goto label_1ba0e0;
            case 0x1BA0E4u: goto label_1ba0e4;
            case 0x1BA0E8u: goto label_1ba0e8;
            case 0x1BA0ECu: goto label_1ba0ec;
            case 0x1BA0F0u: goto label_1ba0f0;
            case 0x1BA0F4u: goto label_1ba0f4;
            case 0x1BA0F8u: goto label_1ba0f8;
            case 0x1BA0FCu: goto label_1ba0fc;
            case 0x1BA100u: goto label_1ba100;
            case 0x1BA104u: goto label_1ba104;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA10Cu: goto label_1ba10c;
            case 0x1BA110u: goto label_1ba110;
            case 0x1BA114u: goto label_1ba114;
            case 0x1BA118u: goto label_1ba118;
            case 0x1BA11Cu: goto label_1ba11c;
            case 0x1BA120u: goto label_1ba120;
            case 0x1BA124u: goto label_1ba124;
            case 0x1BA128u: goto label_1ba128;
            case 0x1BA12Cu: goto label_1ba12c;
            case 0x1BA130u: goto label_1ba130;
            case 0x1BA134u: goto label_1ba134;
            case 0x1BA138u: goto label_1ba138;
            case 0x1BA13Cu: goto label_1ba13c;
            case 0x1BA140u: goto label_1ba140;
            case 0x1BA144u: goto label_1ba144;
            case 0x1BA148u: goto label_1ba148;
            case 0x1BA14Cu: goto label_1ba14c;
            case 0x1BA150u: goto label_1ba150;
            case 0x1BA154u: goto label_1ba154;
            case 0x1BA158u: goto label_1ba158;
            case 0x1BA15Cu: goto label_1ba15c;
            case 0x1BA160u: goto label_1ba160;
            case 0x1BA164u: goto label_1ba164;
            case 0x1BA168u: goto label_1ba168;
            case 0x1BA16Cu: goto label_1ba16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B999Cu;
label_1b999c:
    // 0x1b999c: 0xc4820038
    ctx->pc = 0x1b999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b99a0:
    // 0x1b99a0: 0xc481003c
    ctx->pc = 0x1b99a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b99a4:
    // 0x1b99a4: 0xc4800040
    ctx->pc = 0x1b99a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b99a8:
    // 0x1b99a8: 0xe4a20000
    ctx->pc = 0x1b99a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1b99ac:
    // 0x1b99ac: 0xe4a10004
    ctx->pc = 0x1b99acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1b99b0:
    // 0x1b99b0: 0x10000021
label_1b99b4:
    if (ctx->pc == 0x1B99B4u) {
        ctx->pc = 0x1B99B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x1B99B8u;
        goto label_1b99b8;
    }
    ctx->pc = 0x1B99B0u;
    {
        const bool branch_taken_0x1b99b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B99B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        if (branch_taken_0x1b99b0) {
            ctx->pc = 0x1B9A38u;
            goto label_1b9a38;
        }
    }
    ctx->pc = 0x1B99B8u;
label_1b99b8:
    // 0x1b99b8: 0xc4820038
    ctx->pc = 0x1b99b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b99bc:
    // 0x1b99bc: 0xc481003c
    ctx->pc = 0x1b99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b99c0:
    // 0x1b99c0: 0xc4800040
    ctx->pc = 0x1b99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b99c4:
    // 0x1b99c4: 0xe4a20000
    ctx->pc = 0x1b99c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1b99c8:
    // 0x1b99c8: 0xe4a10004
    ctx->pc = 0x1b99c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1b99cc:
    // 0x1b99cc: 0x1000001a
label_1b99d0:
    if (ctx->pc == 0x1B99D0u) {
        ctx->pc = 0x1B99D0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x1B99D4u;
        goto label_1b99d4;
    }
    ctx->pc = 0x1B99CCu;
    {
        const bool branch_taken_0x1b99cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B99D0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        if (branch_taken_0x1b99cc) {
            ctx->pc = 0x1B9A38u;
            goto label_1b9a38;
        }
    }
    ctx->pc = 0x1B99D4u;
label_1b99d4:
    // 0x1b99d4: 0xc4820038
    ctx->pc = 0x1b99d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b99d8:
    // 0x1b99d8: 0xc481003c
    ctx->pc = 0x1b99d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b99dc:
    // 0x1b99dc: 0xc4800040
    ctx->pc = 0x1b99dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b99e0:
    // 0x1b99e0: 0xe4a20000
    ctx->pc = 0x1b99e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1b99e4:
    // 0x1b99e4: 0xe4a10004
    ctx->pc = 0x1b99e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1b99e8:
    // 0x1b99e8: 0x10000013
label_1b99ec:
    if (ctx->pc == 0x1B99ECu) {
        ctx->pc = 0x1B99ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x1B99F0u;
        goto label_1b99f0;
    }
    ctx->pc = 0x1B99E8u;
    {
        const bool branch_taken_0x1b99e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B99ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        if (branch_taken_0x1b99e8) {
            ctx->pc = 0x1B9A38u;
            goto label_1b9a38;
        }
    }
    ctx->pc = 0x1B99F0u;
label_1b99f0:
    // 0x1b99f0: 0xc4820070
    ctx->pc = 0x1b99f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b99f4:
    // 0x1b99f4: 0xc4810074
    ctx->pc = 0x1b99f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b99f8:
    // 0x1b99f8: 0xc4800078
    ctx->pc = 0x1b99f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b99fc:
    // 0x1b99fc: 0xe4a20000
    ctx->pc = 0x1b99fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1b9a00:
    // 0x1b9a00: 0xe4a10004
    ctx->pc = 0x1b9a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1b9a04:
    // 0x1b9a04: 0x1000000c
label_1b9a08:
    if (ctx->pc == 0x1B9A08u) {
        ctx->pc = 0x1B9A08u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x1B9A0Cu;
        goto label_1b9a0c;
    }
    ctx->pc = 0x1B9A04u;
    {
        const bool branch_taken_0x1b9a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9A08u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        if (branch_taken_0x1b9a04) {
            ctx->pc = 0x1B9A38u;
            goto label_1b9a38;
        }
    }
    ctx->pc = 0x1B9A0Cu;
label_1b9a0c:
    // 0x1b9a0c: 0xc4820038
    ctx->pc = 0x1b9a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9a10:
    // 0x1b9a10: 0xc481003c
    ctx->pc = 0x1b9a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9a14:
    // 0x1b9a14: 0xc4800040
    ctx->pc = 0x1b9a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9a18:
    // 0x1b9a18: 0xe4a20000
    ctx->pc = 0x1b9a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1b9a1c:
    // 0x1b9a1c: 0xe4a10004
    ctx->pc = 0x1b9a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1b9a20:
    // 0x1b9a20: 0x10000005
label_1b9a24:
    if (ctx->pc == 0x1B9A24u) {
        ctx->pc = 0x1B9A24u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x1B9A28u;
        goto label_1b9a28;
    }
    ctx->pc = 0x1B9A20u;
    {
        const bool branch_taken_0x1b9a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9A24u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        if (branch_taken_0x1b9a20) {
            ctx->pc = 0x1B9A38u;
            goto label_1b9a38;
        }
    }
    ctx->pc = 0x1B9A28u;
label_1b9a28:
    // 0x1b9a28: 0xaca00008
    ctx->pc = 0x1b9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_1b9a2c:
    // 0x1b9a2c: 0x102d
    ctx->pc = 0x1b9a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a30:
    // 0x1b9a30: 0xaca00004
    ctx->pc = 0x1b9a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1b9a34:
    // 0x1b9a34: 0xaca00000
    ctx->pc = 0x1b9a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1b9a38:
    // 0x1b9a38: 0x3e00008
label_1b9a3c:
    if (ctx->pc == 0x1B9A3Cu) {
        ctx->pc = 0x1B9A40u;
        goto label_1b9a40;
    }
    ctx->pc = 0x1B9A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9970u: goto label_1b9970;
            case 0x1B9974u: goto label_1b9974;
            case 0x1B9978u: goto label_1b9978;
            case 0x1B997Cu: goto label_1b997c;
            case 0x1B9980u: goto label_1b9980;
            case 0x1B9984u: goto label_1b9984;
            case 0x1B9988u: goto label_1b9988;
            case 0x1B998Cu: goto label_1b998c;
            case 0x1B9990u: goto label_1b9990;
            case 0x1B9994u: goto label_1b9994;
            case 0x1B9998u: goto label_1b9998;
            case 0x1B999Cu: goto label_1b999c;
            case 0x1B99A0u: goto label_1b99a0;
            case 0x1B99A4u: goto label_1b99a4;
            case 0x1B99A8u: goto label_1b99a8;
            case 0x1B99ACu: goto label_1b99ac;
            case 0x1B99B0u: goto label_1b99b0;
            case 0x1B99B4u: goto label_1b99b4;
            case 0x1B99B8u: goto label_1b99b8;
            case 0x1B99BCu: goto label_1b99bc;
            case 0x1B99C0u: goto label_1b99c0;
            case 0x1B99C4u: goto label_1b99c4;
            case 0x1B99C8u: goto label_1b99c8;
            case 0x1B99CCu: goto label_1b99cc;
            case 0x1B99D0u: goto label_1b99d0;
            case 0x1B99D4u: goto label_1b99d4;
            case 0x1B99D8u: goto label_1b99d8;
            case 0x1B99DCu: goto label_1b99dc;
            case 0x1B99E0u: goto label_1b99e0;
            case 0x1B99E4u: goto label_1b99e4;
            case 0x1B99E8u: goto label_1b99e8;
            case 0x1B99ECu: goto label_1b99ec;
            case 0x1B99F0u: goto label_1b99f0;
            case 0x1B99F4u: goto label_1b99f4;
            case 0x1B99F8u: goto label_1b99f8;
            case 0x1B99FCu: goto label_1b99fc;
            case 0x1B9A00u: goto label_1b9a00;
            case 0x1B9A04u: goto label_1b9a04;
            case 0x1B9A08u: goto label_1b9a08;
            case 0x1B9A0Cu: goto label_1b9a0c;
            case 0x1B9A10u: goto label_1b9a10;
            case 0x1B9A14u: goto label_1b9a14;
            case 0x1B9A18u: goto label_1b9a18;
            case 0x1B9A1Cu: goto label_1b9a1c;
            case 0x1B9A20u: goto label_1b9a20;
            case 0x1B9A24u: goto label_1b9a24;
            case 0x1B9A28u: goto label_1b9a28;
            case 0x1B9A2Cu: goto label_1b9a2c;
            case 0x1B9A30u: goto label_1b9a30;
            case 0x1B9A34u: goto label_1b9a34;
            case 0x1B9A38u: goto label_1b9a38;
            case 0x1B9A3Cu: goto label_1b9a3c;
            case 0x1B9A40u: goto label_1b9a40;
            case 0x1B9A44u: goto label_1b9a44;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A4Cu: goto label_1b9a4c;
            case 0x1B9A50u: goto label_1b9a50;
            case 0x1B9A54u: goto label_1b9a54;
            case 0x1B9A58u: goto label_1b9a58;
            case 0x1B9A5Cu: goto label_1b9a5c;
            case 0x1B9A60u: goto label_1b9a60;
            case 0x1B9A64u: goto label_1b9a64;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9A6Cu: goto label_1b9a6c;
            case 0x1B9A70u: goto label_1b9a70;
            case 0x1B9A74u: goto label_1b9a74;
            case 0x1B9A78u: goto label_1b9a78;
            case 0x1B9A7Cu: goto label_1b9a7c;
            case 0x1B9A80u: goto label_1b9a80;
            case 0x1B9A84u: goto label_1b9a84;
            case 0x1B9A88u: goto label_1b9a88;
            case 0x1B9A8Cu: goto label_1b9a8c;
            case 0x1B9A90u: goto label_1b9a90;
            case 0x1B9A94u: goto label_1b9a94;
            case 0x1B9A98u: goto label_1b9a98;
            case 0x1B9A9Cu: goto label_1b9a9c;
            case 0x1B9AA0u: goto label_1b9aa0;
            case 0x1B9AA4u: goto label_1b9aa4;
            case 0x1B9AA8u: goto label_1b9aa8;
            case 0x1B9AACu: goto label_1b9aac;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AB4u: goto label_1b9ab4;
            case 0x1B9AB8u: goto label_1b9ab8;
            case 0x1B9ABCu: goto label_1b9abc;
            case 0x1B9AC0u: goto label_1b9ac0;
            case 0x1B9AC4u: goto label_1b9ac4;
            case 0x1B9AC8u: goto label_1b9ac8;
            case 0x1B9ACCu: goto label_1b9acc;
            case 0x1B9AD0u: goto label_1b9ad0;
            case 0x1B9AD4u: goto label_1b9ad4;
            case 0x1B9AD8u: goto label_1b9ad8;
            case 0x1B9ADCu: goto label_1b9adc;
            case 0x1B9AE0u: goto label_1b9ae0;
            case 0x1B9AE4u: goto label_1b9ae4;
            case 0x1B9AE8u: goto label_1b9ae8;
            case 0x1B9AECu: goto label_1b9aec;
            case 0x1B9AF0u: goto label_1b9af0;
            case 0x1B9AF4u: goto label_1b9af4;
            case 0x1B9AF8u: goto label_1b9af8;
            case 0x1B9AFCu: goto label_1b9afc;
            case 0x1B9B00u: goto label_1b9b00;
            case 0x1B9B04u: goto label_1b9b04;
            case 0x1B9B08u: goto label_1b9b08;
            case 0x1B9B0Cu: goto label_1b9b0c;
            case 0x1B9B10u: goto label_1b9b10;
            case 0x1B9B14u: goto label_1b9b14;
            case 0x1B9B18u: goto label_1b9b18;
            case 0x1B9B1Cu: goto label_1b9b1c;
            case 0x1B9B20u: goto label_1b9b20;
            case 0x1B9B24u: goto label_1b9b24;
            case 0x1B9B28u: goto label_1b9b28;
            case 0x1B9B2Cu: goto label_1b9b2c;
            case 0x1B9B30u: goto label_1b9b30;
            case 0x1B9B34u: goto label_1b9b34;
            case 0x1B9B38u: goto label_1b9b38;
            case 0x1B9B3Cu: goto label_1b9b3c;
            case 0x1B9B40u: goto label_1b9b40;
            case 0x1B9B44u: goto label_1b9b44;
            case 0x1B9B48u: goto label_1b9b48;
            case 0x1B9B4Cu: goto label_1b9b4c;
            case 0x1B9B50u: goto label_1b9b50;
            case 0x1B9B54u: goto label_1b9b54;
            case 0x1B9B58u: goto label_1b9b58;
            case 0x1B9B5Cu: goto label_1b9b5c;
            case 0x1B9B60u: goto label_1b9b60;
            case 0x1B9B64u: goto label_1b9b64;
            case 0x1B9B68u: goto label_1b9b68;
            case 0x1B9B6Cu: goto label_1b9b6c;
            case 0x1B9B70u: goto label_1b9b70;
            case 0x1B9B74u: goto label_1b9b74;
            case 0x1B9B78u: goto label_1b9b78;
            case 0x1B9B7Cu: goto label_1b9b7c;
            case 0x1B9B80u: goto label_1b9b80;
            case 0x1B9B84u: goto label_1b9b84;
            case 0x1B9B88u: goto label_1b9b88;
            case 0x1B9B8Cu: goto label_1b9b8c;
            case 0x1B9B90u: goto label_1b9b90;
            case 0x1B9B94u: goto label_1b9b94;
            case 0x1B9B98u: goto label_1b9b98;
            case 0x1B9B9Cu: goto label_1b9b9c;
            case 0x1B9BA0u: goto label_1b9ba0;
            case 0x1B9BA4u: goto label_1b9ba4;
            case 0x1B9BA8u: goto label_1b9ba8;
            case 0x1B9BACu: goto label_1b9bac;
            case 0x1B9BB0u: goto label_1b9bb0;
            case 0x1B9BB4u: goto label_1b9bb4;
            case 0x1B9BB8u: goto label_1b9bb8;
            case 0x1B9BBCu: goto label_1b9bbc;
            case 0x1B9BC0u: goto label_1b9bc0;
            case 0x1B9BC4u: goto label_1b9bc4;
            case 0x1B9BC8u: goto label_1b9bc8;
            case 0x1B9BCCu: goto label_1b9bcc;
            case 0x1B9BD0u: goto label_1b9bd0;
            case 0x1B9BD4u: goto label_1b9bd4;
            case 0x1B9BD8u: goto label_1b9bd8;
            case 0x1B9BDCu: goto label_1b9bdc;
            case 0x1B9BE0u: goto label_1b9be0;
            case 0x1B9BE4u: goto label_1b9be4;
            case 0x1B9BE8u: goto label_1b9be8;
            case 0x1B9BECu: goto label_1b9bec;
            case 0x1B9BF0u: goto label_1b9bf0;
            case 0x1B9BF4u: goto label_1b9bf4;
            case 0x1B9BF8u: goto label_1b9bf8;
            case 0x1B9BFCu: goto label_1b9bfc;
            case 0x1B9C00u: goto label_1b9c00;
            case 0x1B9C04u: goto label_1b9c04;
            case 0x1B9C08u: goto label_1b9c08;
            case 0x1B9C0Cu: goto label_1b9c0c;
            case 0x1B9C10u: goto label_1b9c10;
            case 0x1B9C14u: goto label_1b9c14;
            case 0x1B9C18u: goto label_1b9c18;
            case 0x1B9C1Cu: goto label_1b9c1c;
            case 0x1B9C20u: goto label_1b9c20;
            case 0x1B9C24u: goto label_1b9c24;
            case 0x1B9C28u: goto label_1b9c28;
            case 0x1B9C2Cu: goto label_1b9c2c;
            case 0x1B9C30u: goto label_1b9c30;
            case 0x1B9C34u: goto label_1b9c34;
            case 0x1B9C38u: goto label_1b9c38;
            case 0x1B9C3Cu: goto label_1b9c3c;
            case 0x1B9C40u: goto label_1b9c40;
            case 0x1B9C44u: goto label_1b9c44;
            case 0x1B9C48u: goto label_1b9c48;
            case 0x1B9C4Cu: goto label_1b9c4c;
            case 0x1B9C50u: goto label_1b9c50;
            case 0x1B9C54u: goto label_1b9c54;
            case 0x1B9C58u: goto label_1b9c58;
            case 0x1B9C5Cu: goto label_1b9c5c;
            case 0x1B9C60u: goto label_1b9c60;
            case 0x1B9C64u: goto label_1b9c64;
            case 0x1B9C68u: goto label_1b9c68;
            case 0x1B9C6Cu: goto label_1b9c6c;
            case 0x1B9C70u: goto label_1b9c70;
            case 0x1B9C74u: goto label_1b9c74;
            case 0x1B9C78u: goto label_1b9c78;
            case 0x1B9C7Cu: goto label_1b9c7c;
            case 0x1B9C80u: goto label_1b9c80;
            case 0x1B9C84u: goto label_1b9c84;
            case 0x1B9C88u: goto label_1b9c88;
            case 0x1B9C8Cu: goto label_1b9c8c;
            case 0x1B9C90u: goto label_1b9c90;
            case 0x1B9C94u: goto label_1b9c94;
            case 0x1B9C98u: goto label_1b9c98;
            case 0x1B9C9Cu: goto label_1b9c9c;
            case 0x1B9CA0u: goto label_1b9ca0;
            case 0x1B9CA4u: goto label_1b9ca4;
            case 0x1B9CA8u: goto label_1b9ca8;
            case 0x1B9CACu: goto label_1b9cac;
            case 0x1B9CB0u: goto label_1b9cb0;
            case 0x1B9CB4u: goto label_1b9cb4;
            case 0x1B9CB8u: goto label_1b9cb8;
            case 0x1B9CBCu: goto label_1b9cbc;
            case 0x1B9CC0u: goto label_1b9cc0;
            case 0x1B9CC4u: goto label_1b9cc4;
            case 0x1B9CC8u: goto label_1b9cc8;
            case 0x1B9CCCu: goto label_1b9ccc;
            case 0x1B9CD0u: goto label_1b9cd0;
            case 0x1B9CD4u: goto label_1b9cd4;
            case 0x1B9CD8u: goto label_1b9cd8;
            case 0x1B9CDCu: goto label_1b9cdc;
            case 0x1B9CE0u: goto label_1b9ce0;
            case 0x1B9CE4u: goto label_1b9ce4;
            case 0x1B9CE8u: goto label_1b9ce8;
            case 0x1B9CECu: goto label_1b9cec;
            case 0x1B9CF0u: goto label_1b9cf0;
            case 0x1B9CF4u: goto label_1b9cf4;
            case 0x1B9CF8u: goto label_1b9cf8;
            case 0x1B9CFCu: goto label_1b9cfc;
            case 0x1B9D00u: goto label_1b9d00;
            case 0x1B9D04u: goto label_1b9d04;
            case 0x1B9D08u: goto label_1b9d08;
            case 0x1B9D0Cu: goto label_1b9d0c;
            case 0x1B9D10u: goto label_1b9d10;
            case 0x1B9D14u: goto label_1b9d14;
            case 0x1B9D18u: goto label_1b9d18;
            case 0x1B9D1Cu: goto label_1b9d1c;
            case 0x1B9D20u: goto label_1b9d20;
            case 0x1B9D24u: goto label_1b9d24;
            case 0x1B9D28u: goto label_1b9d28;
            case 0x1B9D2Cu: goto label_1b9d2c;
            case 0x1B9D30u: goto label_1b9d30;
            case 0x1B9D34u: goto label_1b9d34;
            case 0x1B9D38u: goto label_1b9d38;
            case 0x1B9D3Cu: goto label_1b9d3c;
            case 0x1B9D40u: goto label_1b9d40;
            case 0x1B9D44u: goto label_1b9d44;
            case 0x1B9D48u: goto label_1b9d48;
            case 0x1B9D4Cu: goto label_1b9d4c;
            case 0x1B9D50u: goto label_1b9d50;
            case 0x1B9D54u: goto label_1b9d54;
            case 0x1B9D58u: goto label_1b9d58;
            case 0x1B9D5Cu: goto label_1b9d5c;
            case 0x1B9D60u: goto label_1b9d60;
            case 0x1B9D64u: goto label_1b9d64;
            case 0x1B9D68u: goto label_1b9d68;
            case 0x1B9D6Cu: goto label_1b9d6c;
            case 0x1B9D70u: goto label_1b9d70;
            case 0x1B9D74u: goto label_1b9d74;
            case 0x1B9D78u: goto label_1b9d78;
            case 0x1B9D7Cu: goto label_1b9d7c;
            case 0x1B9D80u: goto label_1b9d80;
            case 0x1B9D84u: goto label_1b9d84;
            case 0x1B9D88u: goto label_1b9d88;
            case 0x1B9D8Cu: goto label_1b9d8c;
            case 0x1B9D90u: goto label_1b9d90;
            case 0x1B9D94u: goto label_1b9d94;
            case 0x1B9D98u: goto label_1b9d98;
            case 0x1B9D9Cu: goto label_1b9d9c;
            case 0x1B9DA0u: goto label_1b9da0;
            case 0x1B9DA4u: goto label_1b9da4;
            case 0x1B9DA8u: goto label_1b9da8;
            case 0x1B9DACu: goto label_1b9dac;
            case 0x1B9DB0u: goto label_1b9db0;
            case 0x1B9DB4u: goto label_1b9db4;
            case 0x1B9DB8u: goto label_1b9db8;
            case 0x1B9DBCu: goto label_1b9dbc;
            case 0x1B9DC0u: goto label_1b9dc0;
            case 0x1B9DC4u: goto label_1b9dc4;
            case 0x1B9DC8u: goto label_1b9dc8;
            case 0x1B9DCCu: goto label_1b9dcc;
            case 0x1B9DD0u: goto label_1b9dd0;
            case 0x1B9DD4u: goto label_1b9dd4;
            case 0x1B9DD8u: goto label_1b9dd8;
            case 0x1B9DDCu: goto label_1b9ddc;
            case 0x1B9DE0u: goto label_1b9de0;
            case 0x1B9DE4u: goto label_1b9de4;
            case 0x1B9DE8u: goto label_1b9de8;
            case 0x1B9DECu: goto label_1b9dec;
            case 0x1B9DF0u: goto label_1b9df0;
            case 0x1B9DF4u: goto label_1b9df4;
            case 0x1B9DF8u: goto label_1b9df8;
            case 0x1B9DFCu: goto label_1b9dfc;
            case 0x1B9E00u: goto label_1b9e00;
            case 0x1B9E04u: goto label_1b9e04;
            case 0x1B9E08u: goto label_1b9e08;
            case 0x1B9E0Cu: goto label_1b9e0c;
            case 0x1B9E10u: goto label_1b9e10;
            case 0x1B9E14u: goto label_1b9e14;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9E1Cu: goto label_1b9e1c;
            case 0x1B9E20u: goto label_1b9e20;
            case 0x1B9E24u: goto label_1b9e24;
            case 0x1B9E28u: goto label_1b9e28;
            case 0x1B9E2Cu: goto label_1b9e2c;
            case 0x1B9E30u: goto label_1b9e30;
            case 0x1B9E34u: goto label_1b9e34;
            case 0x1B9E38u: goto label_1b9e38;
            case 0x1B9E3Cu: goto label_1b9e3c;
            case 0x1B9E40u: goto label_1b9e40;
            case 0x1B9E44u: goto label_1b9e44;
            case 0x1B9E48u: goto label_1b9e48;
            case 0x1B9E4Cu: goto label_1b9e4c;
            case 0x1B9E50u: goto label_1b9e50;
            case 0x1B9E54u: goto label_1b9e54;
            case 0x1B9E58u: goto label_1b9e58;
            case 0x1B9E5Cu: goto label_1b9e5c;
            case 0x1B9E60u: goto label_1b9e60;
            case 0x1B9E64u: goto label_1b9e64;
            case 0x1B9E68u: goto label_1b9e68;
            case 0x1B9E6Cu: goto label_1b9e6c;
            case 0x1B9E70u: goto label_1b9e70;
            case 0x1B9E74u: goto label_1b9e74;
            case 0x1B9E78u: goto label_1b9e78;
            case 0x1B9E7Cu: goto label_1b9e7c;
            case 0x1B9E80u: goto label_1b9e80;
            case 0x1B9E84u: goto label_1b9e84;
            case 0x1B9E88u: goto label_1b9e88;
            case 0x1B9E8Cu: goto label_1b9e8c;
            case 0x1B9E90u: goto label_1b9e90;
            case 0x1B9E94u: goto label_1b9e94;
            case 0x1B9E98u: goto label_1b9e98;
            case 0x1B9E9Cu: goto label_1b9e9c;
            case 0x1B9EA0u: goto label_1b9ea0;
            case 0x1B9EA4u: goto label_1b9ea4;
            case 0x1B9EA8u: goto label_1b9ea8;
            case 0x1B9EACu: goto label_1b9eac;
            case 0x1B9EB0u: goto label_1b9eb0;
            case 0x1B9EB4u: goto label_1b9eb4;
            case 0x1B9EB8u: goto label_1b9eb8;
            case 0x1B9EBCu: goto label_1b9ebc;
            case 0x1B9EC0u: goto label_1b9ec0;
            case 0x1B9EC4u: goto label_1b9ec4;
            case 0x1B9EC8u: goto label_1b9ec8;
            case 0x1B9ECCu: goto label_1b9ecc;
            case 0x1B9ED0u: goto label_1b9ed0;
            case 0x1B9ED4u: goto label_1b9ed4;
            case 0x1B9ED8u: goto label_1b9ed8;
            case 0x1B9EDCu: goto label_1b9edc;
            case 0x1B9EE0u: goto label_1b9ee0;
            case 0x1B9EE4u: goto label_1b9ee4;
            case 0x1B9EE8u: goto label_1b9ee8;
            case 0x1B9EECu: goto label_1b9eec;
            case 0x1B9EF0u: goto label_1b9ef0;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9EF8u: goto label_1b9ef8;
            case 0x1B9EFCu: goto label_1b9efc;
            case 0x1B9F00u: goto label_1b9f00;
            case 0x1B9F04u: goto label_1b9f04;
            case 0x1B9F08u: goto label_1b9f08;
            case 0x1B9F0Cu: goto label_1b9f0c;
            case 0x1B9F10u: goto label_1b9f10;
            case 0x1B9F14u: goto label_1b9f14;
            case 0x1B9F18u: goto label_1b9f18;
            case 0x1B9F1Cu: goto label_1b9f1c;
            case 0x1B9F20u: goto label_1b9f20;
            case 0x1B9F24u: goto label_1b9f24;
            case 0x1B9F28u: goto label_1b9f28;
            case 0x1B9F2Cu: goto label_1b9f2c;
            case 0x1B9F30u: goto label_1b9f30;
            case 0x1B9F34u: goto label_1b9f34;
            case 0x1B9F38u: goto label_1b9f38;
            case 0x1B9F3Cu: goto label_1b9f3c;
            case 0x1B9F40u: goto label_1b9f40;
            case 0x1B9F44u: goto label_1b9f44;
            case 0x1B9F48u: goto label_1b9f48;
            case 0x1B9F4Cu: goto label_1b9f4c;
            case 0x1B9F50u: goto label_1b9f50;
            case 0x1B9F54u: goto label_1b9f54;
            case 0x1B9F58u: goto label_1b9f58;
            case 0x1B9F5Cu: goto label_1b9f5c;
            case 0x1B9F60u: goto label_1b9f60;
            case 0x1B9F64u: goto label_1b9f64;
            case 0x1B9F68u: goto label_1b9f68;
            case 0x1B9F6Cu: goto label_1b9f6c;
            case 0x1B9F70u: goto label_1b9f70;
            case 0x1B9F74u: goto label_1b9f74;
            case 0x1B9F78u: goto label_1b9f78;
            case 0x1B9F7Cu: goto label_1b9f7c;
            case 0x1B9F80u: goto label_1b9f80;
            case 0x1B9F84u: goto label_1b9f84;
            case 0x1B9F88u: goto label_1b9f88;
            case 0x1B9F8Cu: goto label_1b9f8c;
            case 0x1B9F90u: goto label_1b9f90;
            case 0x1B9F94u: goto label_1b9f94;
            case 0x1B9F98u: goto label_1b9f98;
            case 0x1B9F9Cu: goto label_1b9f9c;
            case 0x1B9FA0u: goto label_1b9fa0;
            case 0x1B9FA4u: goto label_1b9fa4;
            case 0x1B9FA8u: goto label_1b9fa8;
            case 0x1B9FACu: goto label_1b9fac;
            case 0x1B9FB0u: goto label_1b9fb0;
            case 0x1B9FB4u: goto label_1b9fb4;
            case 0x1B9FB8u: goto label_1b9fb8;
            case 0x1B9FBCu: goto label_1b9fbc;
            case 0x1B9FC0u: goto label_1b9fc0;
            case 0x1B9FC4u: goto label_1b9fc4;
            case 0x1B9FC8u: goto label_1b9fc8;
            case 0x1B9FCCu: goto label_1b9fcc;
            case 0x1B9FD0u: goto label_1b9fd0;
            case 0x1B9FD4u: goto label_1b9fd4;
            case 0x1B9FD8u: goto label_1b9fd8;
            case 0x1B9FDCu: goto label_1b9fdc;
            case 0x1B9FE0u: goto label_1b9fe0;
            case 0x1B9FE4u: goto label_1b9fe4;
            case 0x1B9FE8u: goto label_1b9fe8;
            case 0x1B9FECu: goto label_1b9fec;
            case 0x1B9FF0u: goto label_1b9ff0;
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1B9FF8u: goto label_1b9ff8;
            case 0x1B9FFCu: goto label_1b9ffc;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA004u: goto label_1ba004;
            case 0x1BA008u: goto label_1ba008;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA010u: goto label_1ba010;
            case 0x1BA014u: goto label_1ba014;
            case 0x1BA018u: goto label_1ba018;
            case 0x1BA01Cu: goto label_1ba01c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA024u: goto label_1ba024;
            case 0x1BA028u: goto label_1ba028;
            case 0x1BA02Cu: goto label_1ba02c;
            case 0x1BA030u: goto label_1ba030;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA038u: goto label_1ba038;
            case 0x1BA03Cu: goto label_1ba03c;
            case 0x1BA040u: goto label_1ba040;
            case 0x1BA044u: goto label_1ba044;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA04Cu: goto label_1ba04c;
            case 0x1BA050u: goto label_1ba050;
            case 0x1BA054u: goto label_1ba054;
            case 0x1BA058u: goto label_1ba058;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA060u: goto label_1ba060;
            case 0x1BA064u: goto label_1ba064;
            case 0x1BA068u: goto label_1ba068;
            case 0x1BA06Cu: goto label_1ba06c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA074u: goto label_1ba074;
            case 0x1BA078u: goto label_1ba078;
            case 0x1BA07Cu: goto label_1ba07c;
            case 0x1BA080u: goto label_1ba080;
            case 0x1BA084u: goto label_1ba084;
            case 0x1BA088u: goto label_1ba088;
            case 0x1BA08Cu: goto label_1ba08c;
            case 0x1BA090u: goto label_1ba090;
            case 0x1BA094u: goto label_1ba094;
            case 0x1BA098u: goto label_1ba098;
            case 0x1BA09Cu: goto label_1ba09c;
            case 0x1BA0A0u: goto label_1ba0a0;
            case 0x1BA0A4u: goto label_1ba0a4;
            case 0x1BA0A8u: goto label_1ba0a8;
            case 0x1BA0ACu: goto label_1ba0ac;
            case 0x1BA0B0u: goto label_1ba0b0;
            case 0x1BA0B4u: goto label_1ba0b4;
            case 0x1BA0B8u: goto label_1ba0b8;
            case 0x1BA0BCu: goto label_1ba0bc;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0C4u: goto label_1ba0c4;
            case 0x1BA0C8u: goto label_1ba0c8;
            case 0x1BA0CCu: goto label_1ba0cc;
            case 0x1BA0D0u: goto label_1ba0d0;
            case 0x1BA0D4u: goto label_1ba0d4;
            case 0x1BA0D8u: goto label_1ba0d8;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0E0u: goto label_1ba0e0;
            case 0x1BA0E4u: goto label_1ba0e4;
            case 0x1BA0E8u: goto label_1ba0e8;
            case 0x1BA0ECu: goto label_1ba0ec;
            case 0x1BA0F0u: goto label_1ba0f0;
            case 0x1BA0F4u: goto label_1ba0f4;
            case 0x1BA0F8u: goto label_1ba0f8;
            case 0x1BA0FCu: goto label_1ba0fc;
            case 0x1BA100u: goto label_1ba100;
            case 0x1BA104u: goto label_1ba104;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA10Cu: goto label_1ba10c;
            case 0x1BA110u: goto label_1ba110;
            case 0x1BA114u: goto label_1ba114;
            case 0x1BA118u: goto label_1ba118;
            case 0x1BA11Cu: goto label_1ba11c;
            case 0x1BA120u: goto label_1ba120;
            case 0x1BA124u: goto label_1ba124;
            case 0x1BA128u: goto label_1ba128;
            case 0x1BA12Cu: goto label_1ba12c;
            case 0x1BA130u: goto label_1ba130;
            case 0x1BA134u: goto label_1ba134;
            case 0x1BA138u: goto label_1ba138;
            case 0x1BA13Cu: goto label_1ba13c;
            case 0x1BA140u: goto label_1ba140;
            case 0x1BA144u: goto label_1ba144;
            case 0x1BA148u: goto label_1ba148;
            case 0x1BA14Cu: goto label_1ba14c;
            case 0x1BA150u: goto label_1ba150;
            case 0x1BA154u: goto label_1ba154;
            case 0x1BA158u: goto label_1ba158;
            case 0x1BA15Cu: goto label_1ba15c;
            case 0x1BA160u: goto label_1ba160;
            case 0x1BA164u: goto label_1ba164;
            case 0x1BA168u: goto label_1ba168;
            case 0x1BA16Cu: goto label_1ba16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9A40u;
label_1b9a40:
    // 0x1b9a40: 0x27bdffc0
    ctx->pc = 0x1b9a40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b9a44:
    // 0x1b9a44: 0xffbf0020
    ctx->pc = 0x1b9a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b9a48:
    // 0x1b9a48: 0x7fb10010
    ctx->pc = 0x1b9a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9a4c:
    // 0x1b9a4c: 0x7fb00000
    ctx->pc = 0x1b9a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9a50:
    // 0x1b9a50: 0x882d
    ctx->pc = 0x1b9a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a54:
    // 0x1b9a54: 0x111900
    ctx->pc = 0x1b9a54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
label_1b9a58:
    // 0x1b9a58: 0x3c02003c
    ctx->pc = 0x1b9a58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_1b9a5c:
    // 0x1b9a5c: 0x711823
    ctx->pc = 0x1b9a5cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1b9a60:
    // 0x1b9a60: 0x24422750
    ctx->pc = 0x1b9a60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10064));
label_1b9a64:
    // 0x1b9a64: 0x31880
    ctx->pc = 0x1b9a64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1b9a68:
    // 0x1b9a68: 0x438021
    ctx->pc = 0x1b9a68u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9a6c:
    // 0x1b9a6c: 0x82020000
    ctx->pc = 0x1b9a6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b9a70:
    // 0x1b9a70: 0x1040003d
label_1b9a74:
    if (ctx->pc == 0x1B9A74u) {
        ctx->pc = 0x1B9A78u;
        goto label_1b9a78;
    }
    ctx->pc = 0x1B9A70u;
    {
        const bool branch_taken_0x1b9a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9a70) {
            ctx->pc = 0x1B9B68u;
            goto label_1b9b68;
        }
    }
    ctx->pc = 0x1B9A78u;
label_1b9a78:
    // 0x1b9a78: 0x82020001
    ctx->pc = 0x1b9a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b9a7c:
    // 0x1b9a7c: 0x1440003a
label_1b9a80:
    if (ctx->pc == 0x1B9A80u) {
        ctx->pc = 0x1B9A84u;
        goto label_1b9a84;
    }
    ctx->pc = 0x1B9A7Cu;
    {
        const bool branch_taken_0x1b9a7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9a7c) {
            ctx->pc = 0x1B9B68u;
            goto label_1b9b68;
        }
    }
    ctx->pc = 0x1B9A84u;
label_1b9a84:
    // 0x1b9a84: 0x82020003
    ctx->pc = 0x1b9a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1b9a88:
    // 0x1b9a88: 0x1440001a
label_1b9a8c:
    if (ctx->pc == 0x1B9A8Cu) {
        ctx->pc = 0x1B9A8Cu;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
        ctx->pc = 0x1B9A90u;
        goto label_1b9a90;
    }
    ctx->pc = 0x1B9A88u;
    {
        const bool branch_taken_0x1b9a88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B9A8Cu;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
        if (branch_taken_0x1b9a88) {
            ctx->pc = 0x1B9AF4u;
            goto label_1b9af4;
        }
    }
    ctx->pc = 0x1B9A90u;
label_1b9a90:
    // 0x1b9a90: 0x8e030024
    ctx->pc = 0x1b9a90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b9a94:
    // 0x1b9a94: 0x1060000c
label_1b9a98:
    if (ctx->pc == 0x1B9A98u) {
        ctx->pc = 0x1B9A9Cu;
        goto label_1b9a9c;
    }
    ctx->pc = 0x1B9A94u;
    {
        const bool branch_taken_0x1b9a94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9a94) {
            ctx->pc = 0x1B9AC8u;
            goto label_1b9ac8;
        }
    }
    ctx->pc = 0x1B9A9Cu;
label_1b9a9c:
    // 0x1b9a9c: 0x82020002
    ctx->pc = 0x1b9a9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b9aa0:
    // 0x1b9aa0: 0x24670008
    ctx->pc = 0x1b9aa0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 8));
label_1b9aa4:
    // 0x1b9aa4: 0x24040002
    ctx->pc = 0x1b9aa4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9aa8:
    // 0x1b9aa8: 0x302d
    ctx->pc = 0x1b9aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9aac:
    // 0x1b9aac: 0x24080001
    ctx->pc = 0x1b9aacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b9ab0:
    // 0x1b9ab0: 0x482d
    ctx->pc = 0x1b9ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ab4:
    // 0x1b9ab4: 0x502d
    ctx->pc = 0x1b9ab4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ab8:
    // 0x1b9ab8: 0xc06e4f4
label_1b9abc:
    if (ctx->pc == 0x1B9ABCu) {
        ctx->pc = 0x1B9ABCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1B9AC0u;
        goto label_1b9ac0;
    }
    ctx->pc = 0x1B9AB8u;
    SET_GPR_U32(ctx, 31, 0x1B9AC0u);
    ctx->pc = 0x1B9ABCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AC0u; }
    }
    if (ctx->pc != 0x1B9AC0u) { return; }
    ctx->pc = 0x1B9AC0u;
label_1b9ac0:
    // 0x1b9ac0: 0x1000002a
label_1b9ac4:
    if (ctx->pc == 0x1B9AC4u) {
        ctx->pc = 0x1B9AC4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1B9AC8u;
        goto label_1b9ac8;
    }
    ctx->pc = 0x1B9AC0u;
    {
        const bool branch_taken_0x1b9ac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9AC4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1b9ac0) {
            ctx->pc = 0x1B9B6Cu;
            goto label_1b9b6c;
        }
    }
    ctx->pc = 0x1B9AC8u;
label_1b9ac8:
    // 0x1b9ac8: 0x82020002
    ctx->pc = 0x1b9ac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b9acc:
    // 0x1b9acc: 0x2607002c
    ctx->pc = 0x1b9accu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 44));
label_1b9ad0:
    // 0x1b9ad0: 0x24040002
    ctx->pc = 0x1b9ad0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9ad4:
    // 0x1b9ad4: 0x302d
    ctx->pc = 0x1b9ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ad8:
    // 0x1b9ad8: 0x24080001
    ctx->pc = 0x1b9ad8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b9adc:
    // 0x1b9adc: 0x482d
    ctx->pc = 0x1b9adcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ae0:
    // 0x1b9ae0: 0x502d
    ctx->pc = 0x1b9ae0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ae4:
    // 0x1b9ae4: 0xc06e4f4
label_1b9ae8:
    if (ctx->pc == 0x1B9AE8u) {
        ctx->pc = 0x1B9AE8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1B9AECu;
        goto label_1b9aec;
    }
    ctx->pc = 0x1B9AE4u;
    SET_GPR_U32(ctx, 31, 0x1B9AECu);
    ctx->pc = 0x1B9AE8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9AECu; }
    }
    if (ctx->pc != 0x1B9AECu) { return; }
    ctx->pc = 0x1B9AECu;
label_1b9aec:
    // 0x1b9aec: 0x1000001e
label_1b9af0:
    if (ctx->pc == 0x1B9AF0u) {
        ctx->pc = 0x1B9AF4u;
        goto label_1b9af4;
    }
    ctx->pc = 0x1B9AECu;
    {
        const bool branch_taken_0x1b9aec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9aec) {
            ctx->pc = 0x1B9B68u;
            goto label_1b9b68;
        }
    }
    ctx->pc = 0x1B9AF4u;
label_1b9af4:
    // 0x1b9af4: 0x31e3f
    ctx->pc = 0x1b9af4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1b9af8:
    // 0x1b9af8: 0x24020002
    ctx->pc = 0x1b9af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1b9afc:
    // 0x1b9afc: 0x1462001a
label_1b9b00:
    if (ctx->pc == 0x1B9B00u) {
        ctx->pc = 0x1B9B04u;
        goto label_1b9b04;
    }
    ctx->pc = 0x1B9AFCu;
    {
        const bool branch_taken_0x1b9afc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1b9afc) {
            ctx->pc = 0x1B9B68u;
            goto label_1b9b68;
        }
    }
    ctx->pc = 0x1B9B04u;
label_1b9b04:
    // 0x1b9b04: 0x8e040024
    ctx->pc = 0x1b9b04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b9b08:
    // 0x1b9b08: 0xc06e65c
label_1b9b0c:
    if (ctx->pc == 0x1B9B0Cu) {
        ctx->pc = 0x1B9B0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B9B10u;
        goto label_1b9b10;
    }
    ctx->pc = 0x1B9B08u;
    SET_GPR_U32(ctx, 31, 0x1B9B10u);
    ctx->pc = 0x1B9B0Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1B9970u;
    goto label_1b9970;
    ctx->pc = 0x1B9B10u;
label_1b9b10:
    // 0x1b9b10: 0x1040000c
label_1b9b14:
    if (ctx->pc == 0x1B9B14u) {
        ctx->pc = 0x1B9B18u;
        goto label_1b9b18;
    }
    ctx->pc = 0x1B9B10u;
    {
        const bool branch_taken_0x1b9b10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9b10) {
            ctx->pc = 0x1B9B44u;
            goto label_1b9b44;
        }
    }
    ctx->pc = 0x1B9B18u;
label_1b9b18:
    // 0x1b9b18: 0x82020002
    ctx->pc = 0x1b9b18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b9b1c:
    // 0x1b9b1c: 0x24040002
    ctx->pc = 0x1b9b1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9b20:
    // 0x1b9b20: 0x302d
    ctx->pc = 0x1b9b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b24:
    // 0x1b9b24: 0x27a70030
    ctx->pc = 0x1b9b24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
label_1b9b28:
    // 0x1b9b28: 0x24080001
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b9b2c:
    // 0x1b9b2c: 0x482d
    ctx->pc = 0x1b9b2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b30:
    // 0x1b9b30: 0x502d
    ctx->pc = 0x1b9b30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b34:
    // 0x1b9b34: 0xc06e4f4
label_1b9b38:
    if (ctx->pc == 0x1B9B38u) {
        ctx->pc = 0x1B9B38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1B9B3Cu;
        goto label_1b9b3c;
    }
    ctx->pc = 0x1B9B34u;
    SET_GPR_U32(ctx, 31, 0x1B9B3Cu);
    ctx->pc = 0x1B9B38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B3Cu; }
    }
    if (ctx->pc != 0x1B9B3Cu) { return; }
    ctx->pc = 0x1B9B3Cu;
label_1b9b3c:
    // 0x1b9b3c: 0x1000000a
label_1b9b40:
    if (ctx->pc == 0x1B9B40u) {
        ctx->pc = 0x1B9B44u;
        goto label_1b9b44;
    }
    ctx->pc = 0x1B9B3Cu;
    {
        const bool branch_taken_0x1b9b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9b3c) {
            ctx->pc = 0x1B9B68u;
            goto label_1b9b68;
        }
    }
    ctx->pc = 0x1B9B44u;
label_1b9b44:
    // 0x1b9b44: 0x82020002
    ctx->pc = 0x1b9b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b9b48:
    // 0x1b9b48: 0x24040002
    ctx->pc = 0x1b9b48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9b4c:
    // 0x1b9b4c: 0x302d
    ctx->pc = 0x1b9b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b50:
    // 0x1b9b50: 0x382d
    ctx->pc = 0x1b9b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b54:
    // 0x1b9b54: 0x24080001
    ctx->pc = 0x1b9b54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b9b58:
    // 0x1b9b58: 0x482d
    ctx->pc = 0x1b9b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b5c:
    // 0x1b9b5c: 0x502d
    ctx->pc = 0x1b9b5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b60:
    // 0x1b9b60: 0xc06e4f4
label_1b9b64:
    if (ctx->pc == 0x1B9B64u) {
        ctx->pc = 0x1B9B64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1B9B68u;
        goto label_1b9b68;
    }
    ctx->pc = 0x1B9B60u;
    SET_GPR_U32(ctx, 31, 0x1B9B68u);
    ctx->pc = 0x1B9B64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B68u; }
    }
    if (ctx->pc != 0x1B9B68u) { return; }
    ctx->pc = 0x1B9B68u;
label_1b9b68:
    // 0x1b9b68: 0x26310001
    ctx->pc = 0x1b9b68u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1b9b6c:
    // 0x1b9b6c: 0x2a220004
    ctx->pc = 0x1b9b6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
label_1b9b70:
    // 0x1b9b70: 0x1440ffb9
label_1b9b74:
    if (ctx->pc == 0x1B9B74u) {
        ctx->pc = 0x1B9B74u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1B9B78u;
        goto label_1b9b78;
    }
    ctx->pc = 0x1B9B70u;
    {
        const bool branch_taken_0x1b9b70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B9B74u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1b9b70) {
            ctx->pc = 0x1B9A58u;
            goto label_1b9a58;
        }
    }
    ctx->pc = 0x1B9B78u;
label_1b9b78:
    // 0x1b9b78: 0x3c04003c
    ctx->pc = 0x1b9b78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_1b9b7c:
    // 0x1b9b7c: 0x282d
    ctx->pc = 0x1b9b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9b80:
    // 0x1b9b80: 0x24842750
    ctx->pc = 0x1b9b80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10064));
label_1b9b84:
    // 0x1b9b84: 0xc041f1a
label_1b9b88:
    if (ctx->pc == 0x1B9B88u) {
        ctx->pc = 0x1B9B88u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x1B9B8Cu;
        goto label_1b9b8c;
    }
    ctx->pc = 0x1B9B84u;
    SET_GPR_U32(ctx, 31, 0x1B9B8Cu);
    ctx->pc = 0x1B9B88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9B8Cu; }
    }
    if (ctx->pc != 0x1B9B8Cu) { return; }
    ctx->pc = 0x1B9B8Cu;
label_1b9b8c:
    // 0x1b9b8c: 0xdfbf0020
    ctx->pc = 0x1b9b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9b90:
    // 0x1b9b90: 0x7bb10010
    ctx->pc = 0x1b9b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9b94:
    // 0x1b9b94: 0x7bb00000
    ctx->pc = 0x1b9b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9b98:
    // 0x1b9b98: 0x3e00008
label_1b9b9c:
    if (ctx->pc == 0x1B9B9Cu) {
        ctx->pc = 0x1B9B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B9BA0u;
        goto label_1b9ba0;
    }
    ctx->pc = 0x1B9B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9970u: goto label_1b9970;
            case 0x1B9974u: goto label_1b9974;
            case 0x1B9978u: goto label_1b9978;
            case 0x1B997Cu: goto label_1b997c;
            case 0x1B9980u: goto label_1b9980;
            case 0x1B9984u: goto label_1b9984;
            case 0x1B9988u: goto label_1b9988;
            case 0x1B998Cu: goto label_1b998c;
            case 0x1B9990u: goto label_1b9990;
            case 0x1B9994u: goto label_1b9994;
            case 0x1B9998u: goto label_1b9998;
            case 0x1B999Cu: goto label_1b999c;
            case 0x1B99A0u: goto label_1b99a0;
            case 0x1B99A4u: goto label_1b99a4;
            case 0x1B99A8u: goto label_1b99a8;
            case 0x1B99ACu: goto label_1b99ac;
            case 0x1B99B0u: goto label_1b99b0;
            case 0x1B99B4u: goto label_1b99b4;
            case 0x1B99B8u: goto label_1b99b8;
            case 0x1B99BCu: goto label_1b99bc;
            case 0x1B99C0u: goto label_1b99c0;
            case 0x1B99C4u: goto label_1b99c4;
            case 0x1B99C8u: goto label_1b99c8;
            case 0x1B99CCu: goto label_1b99cc;
            case 0x1B99D0u: goto label_1b99d0;
            case 0x1B99D4u: goto label_1b99d4;
            case 0x1B99D8u: goto label_1b99d8;
            case 0x1B99DCu: goto label_1b99dc;
            case 0x1B99E0u: goto label_1b99e0;
            case 0x1B99E4u: goto label_1b99e4;
            case 0x1B99E8u: goto label_1b99e8;
            case 0x1B99ECu: goto label_1b99ec;
            case 0x1B99F0u: goto label_1b99f0;
            case 0x1B99F4u: goto label_1b99f4;
            case 0x1B99F8u: goto label_1b99f8;
            case 0x1B99FCu: goto label_1b99fc;
            case 0x1B9A00u: goto label_1b9a00;
            case 0x1B9A04u: goto label_1b9a04;
            case 0x1B9A08u: goto label_1b9a08;
            case 0x1B9A0Cu: goto label_1b9a0c;
            case 0x1B9A10u: goto label_1b9a10;
            case 0x1B9A14u: goto label_1b9a14;
            case 0x1B9A18u: goto label_1b9a18;
            case 0x1B9A1Cu: goto label_1b9a1c;
            case 0x1B9A20u: goto label_1b9a20;
            case 0x1B9A24u: goto label_1b9a24;
            case 0x1B9A28u: goto label_1b9a28;
            case 0x1B9A2Cu: goto label_1b9a2c;
            case 0x1B9A30u: goto label_1b9a30;
            case 0x1B9A34u: goto label_1b9a34;
            case 0x1B9A38u: goto label_1b9a38;
            case 0x1B9A3Cu: goto label_1b9a3c;
            case 0x1B9A40u: goto label_1b9a40;
            case 0x1B9A44u: goto label_1b9a44;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A4Cu: goto label_1b9a4c;
            case 0x1B9A50u: goto label_1b9a50;
            case 0x1B9A54u: goto label_1b9a54;
            case 0x1B9A58u: goto label_1b9a58;
            case 0x1B9A5Cu: goto label_1b9a5c;
            case 0x1B9A60u: goto label_1b9a60;
            case 0x1B9A64u: goto label_1b9a64;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9A6Cu: goto label_1b9a6c;
            case 0x1B9A70u: goto label_1b9a70;
            case 0x1B9A74u: goto label_1b9a74;
            case 0x1B9A78u: goto label_1b9a78;
            case 0x1B9A7Cu: goto label_1b9a7c;
            case 0x1B9A80u: goto label_1b9a80;
            case 0x1B9A84u: goto label_1b9a84;
            case 0x1B9A88u: goto label_1b9a88;
            case 0x1B9A8Cu: goto label_1b9a8c;
            case 0x1B9A90u: goto label_1b9a90;
            case 0x1B9A94u: goto label_1b9a94;
            case 0x1B9A98u: goto label_1b9a98;
            case 0x1B9A9Cu: goto label_1b9a9c;
            case 0x1B9AA0u: goto label_1b9aa0;
            case 0x1B9AA4u: goto label_1b9aa4;
            case 0x1B9AA8u: goto label_1b9aa8;
            case 0x1B9AACu: goto label_1b9aac;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AB4u: goto label_1b9ab4;
            case 0x1B9AB8u: goto label_1b9ab8;
            case 0x1B9ABCu: goto label_1b9abc;
            case 0x1B9AC0u: goto label_1b9ac0;
            case 0x1B9AC4u: goto label_1b9ac4;
            case 0x1B9AC8u: goto label_1b9ac8;
            case 0x1B9ACCu: goto label_1b9acc;
            case 0x1B9AD0u: goto label_1b9ad0;
            case 0x1B9AD4u: goto label_1b9ad4;
            case 0x1B9AD8u: goto label_1b9ad8;
            case 0x1B9ADCu: goto label_1b9adc;
            case 0x1B9AE0u: goto label_1b9ae0;
            case 0x1B9AE4u: goto label_1b9ae4;
            case 0x1B9AE8u: goto label_1b9ae8;
            case 0x1B9AECu: goto label_1b9aec;
            case 0x1B9AF0u: goto label_1b9af0;
            case 0x1B9AF4u: goto label_1b9af4;
            case 0x1B9AF8u: goto label_1b9af8;
            case 0x1B9AFCu: goto label_1b9afc;
            case 0x1B9B00u: goto label_1b9b00;
            case 0x1B9B04u: goto label_1b9b04;
            case 0x1B9B08u: goto label_1b9b08;
            case 0x1B9B0Cu: goto label_1b9b0c;
            case 0x1B9B10u: goto label_1b9b10;
            case 0x1B9B14u: goto label_1b9b14;
            case 0x1B9B18u: goto label_1b9b18;
            case 0x1B9B1Cu: goto label_1b9b1c;
            case 0x1B9B20u: goto label_1b9b20;
            case 0x1B9B24u: goto label_1b9b24;
            case 0x1B9B28u: goto label_1b9b28;
            case 0x1B9B2Cu: goto label_1b9b2c;
            case 0x1B9B30u: goto label_1b9b30;
            case 0x1B9B34u: goto label_1b9b34;
            case 0x1B9B38u: goto label_1b9b38;
            case 0x1B9B3Cu: goto label_1b9b3c;
            case 0x1B9B40u: goto label_1b9b40;
            case 0x1B9B44u: goto label_1b9b44;
            case 0x1B9B48u: goto label_1b9b48;
            case 0x1B9B4Cu: goto label_1b9b4c;
            case 0x1B9B50u: goto label_1b9b50;
            case 0x1B9B54u: goto label_1b9b54;
            case 0x1B9B58u: goto label_1b9b58;
            case 0x1B9B5Cu: goto label_1b9b5c;
            case 0x1B9B60u: goto label_1b9b60;
            case 0x1B9B64u: goto label_1b9b64;
            case 0x1B9B68u: goto label_1b9b68;
            case 0x1B9B6Cu: goto label_1b9b6c;
            case 0x1B9B70u: goto label_1b9b70;
            case 0x1B9B74u: goto label_1b9b74;
            case 0x1B9B78u: goto label_1b9b78;
            case 0x1B9B7Cu: goto label_1b9b7c;
            case 0x1B9B80u: goto label_1b9b80;
            case 0x1B9B84u: goto label_1b9b84;
            case 0x1B9B88u: goto label_1b9b88;
            case 0x1B9B8Cu: goto label_1b9b8c;
            case 0x1B9B90u: goto label_1b9b90;
            case 0x1B9B94u: goto label_1b9b94;
            case 0x1B9B98u: goto label_1b9b98;
            case 0x1B9B9Cu: goto label_1b9b9c;
            case 0x1B9BA0u: goto label_1b9ba0;
            case 0x1B9BA4u: goto label_1b9ba4;
            case 0x1B9BA8u: goto label_1b9ba8;
            case 0x1B9BACu: goto label_1b9bac;
            case 0x1B9BB0u: goto label_1b9bb0;
            case 0x1B9BB4u: goto label_1b9bb4;
            case 0x1B9BB8u: goto label_1b9bb8;
            case 0x1B9BBCu: goto label_1b9bbc;
            case 0x1B9BC0u: goto label_1b9bc0;
            case 0x1B9BC4u: goto label_1b9bc4;
            case 0x1B9BC8u: goto label_1b9bc8;
            case 0x1B9BCCu: goto label_1b9bcc;
            case 0x1B9BD0u: goto label_1b9bd0;
            case 0x1B9BD4u: goto label_1b9bd4;
            case 0x1B9BD8u: goto label_1b9bd8;
            case 0x1B9BDCu: goto label_1b9bdc;
            case 0x1B9BE0u: goto label_1b9be0;
            case 0x1B9BE4u: goto label_1b9be4;
            case 0x1B9BE8u: goto label_1b9be8;
            case 0x1B9BECu: goto label_1b9bec;
            case 0x1B9BF0u: goto label_1b9bf0;
            case 0x1B9BF4u: goto label_1b9bf4;
            case 0x1B9BF8u: goto label_1b9bf8;
            case 0x1B9BFCu: goto label_1b9bfc;
            case 0x1B9C00u: goto label_1b9c00;
            case 0x1B9C04u: goto label_1b9c04;
            case 0x1B9C08u: goto label_1b9c08;
            case 0x1B9C0Cu: goto label_1b9c0c;
            case 0x1B9C10u: goto label_1b9c10;
            case 0x1B9C14u: goto label_1b9c14;
            case 0x1B9C18u: goto label_1b9c18;
            case 0x1B9C1Cu: goto label_1b9c1c;
            case 0x1B9C20u: goto label_1b9c20;
            case 0x1B9C24u: goto label_1b9c24;
            case 0x1B9C28u: goto label_1b9c28;
            case 0x1B9C2Cu: goto label_1b9c2c;
            case 0x1B9C30u: goto label_1b9c30;
            case 0x1B9C34u: goto label_1b9c34;
            case 0x1B9C38u: goto label_1b9c38;
            case 0x1B9C3Cu: goto label_1b9c3c;
            case 0x1B9C40u: goto label_1b9c40;
            case 0x1B9C44u: goto label_1b9c44;
            case 0x1B9C48u: goto label_1b9c48;
            case 0x1B9C4Cu: goto label_1b9c4c;
            case 0x1B9C50u: goto label_1b9c50;
            case 0x1B9C54u: goto label_1b9c54;
            case 0x1B9C58u: goto label_1b9c58;
            case 0x1B9C5Cu: goto label_1b9c5c;
            case 0x1B9C60u: goto label_1b9c60;
            case 0x1B9C64u: goto label_1b9c64;
            case 0x1B9C68u: goto label_1b9c68;
            case 0x1B9C6Cu: goto label_1b9c6c;
            case 0x1B9C70u: goto label_1b9c70;
            case 0x1B9C74u: goto label_1b9c74;
            case 0x1B9C78u: goto label_1b9c78;
            case 0x1B9C7Cu: goto label_1b9c7c;
            case 0x1B9C80u: goto label_1b9c80;
            case 0x1B9C84u: goto label_1b9c84;
            case 0x1B9C88u: goto label_1b9c88;
            case 0x1B9C8Cu: goto label_1b9c8c;
            case 0x1B9C90u: goto label_1b9c90;
            case 0x1B9C94u: goto label_1b9c94;
            case 0x1B9C98u: goto label_1b9c98;
            case 0x1B9C9Cu: goto label_1b9c9c;
            case 0x1B9CA0u: goto label_1b9ca0;
            case 0x1B9CA4u: goto label_1b9ca4;
            case 0x1B9CA8u: goto label_1b9ca8;
            case 0x1B9CACu: goto label_1b9cac;
            case 0x1B9CB0u: goto label_1b9cb0;
            case 0x1B9CB4u: goto label_1b9cb4;
            case 0x1B9CB8u: goto label_1b9cb8;
            case 0x1B9CBCu: goto label_1b9cbc;
            case 0x1B9CC0u: goto label_1b9cc0;
            case 0x1B9CC4u: goto label_1b9cc4;
            case 0x1B9CC8u: goto label_1b9cc8;
            case 0x1B9CCCu: goto label_1b9ccc;
            case 0x1B9CD0u: goto label_1b9cd0;
            case 0x1B9CD4u: goto label_1b9cd4;
            case 0x1B9CD8u: goto label_1b9cd8;
            case 0x1B9CDCu: goto label_1b9cdc;
            case 0x1B9CE0u: goto label_1b9ce0;
            case 0x1B9CE4u: goto label_1b9ce4;
            case 0x1B9CE8u: goto label_1b9ce8;
            case 0x1B9CECu: goto label_1b9cec;
            case 0x1B9CF0u: goto label_1b9cf0;
            case 0x1B9CF4u: goto label_1b9cf4;
            case 0x1B9CF8u: goto label_1b9cf8;
            case 0x1B9CFCu: goto label_1b9cfc;
            case 0x1B9D00u: goto label_1b9d00;
            case 0x1B9D04u: goto label_1b9d04;
            case 0x1B9D08u: goto label_1b9d08;
            case 0x1B9D0Cu: goto label_1b9d0c;
            case 0x1B9D10u: goto label_1b9d10;
            case 0x1B9D14u: goto label_1b9d14;
            case 0x1B9D18u: goto label_1b9d18;
            case 0x1B9D1Cu: goto label_1b9d1c;
            case 0x1B9D20u: goto label_1b9d20;
            case 0x1B9D24u: goto label_1b9d24;
            case 0x1B9D28u: goto label_1b9d28;
            case 0x1B9D2Cu: goto label_1b9d2c;
            case 0x1B9D30u: goto label_1b9d30;
            case 0x1B9D34u: goto label_1b9d34;
            case 0x1B9D38u: goto label_1b9d38;
            case 0x1B9D3Cu: goto label_1b9d3c;
            case 0x1B9D40u: goto label_1b9d40;
            case 0x1B9D44u: goto label_1b9d44;
            case 0x1B9D48u: goto label_1b9d48;
            case 0x1B9D4Cu: goto label_1b9d4c;
            case 0x1B9D50u: goto label_1b9d50;
            case 0x1B9D54u: goto label_1b9d54;
            case 0x1B9D58u: goto label_1b9d58;
            case 0x1B9D5Cu: goto label_1b9d5c;
            case 0x1B9D60u: goto label_1b9d60;
            case 0x1B9D64u: goto label_1b9d64;
            case 0x1B9D68u: goto label_1b9d68;
            case 0x1B9D6Cu: goto label_1b9d6c;
            case 0x1B9D70u: goto label_1b9d70;
            case 0x1B9D74u: goto label_1b9d74;
            case 0x1B9D78u: goto label_1b9d78;
            case 0x1B9D7Cu: goto label_1b9d7c;
            case 0x1B9D80u: goto label_1b9d80;
            case 0x1B9D84u: goto label_1b9d84;
            case 0x1B9D88u: goto label_1b9d88;
            case 0x1B9D8Cu: goto label_1b9d8c;
            case 0x1B9D90u: goto label_1b9d90;
            case 0x1B9D94u: goto label_1b9d94;
            case 0x1B9D98u: goto label_1b9d98;
            case 0x1B9D9Cu: goto label_1b9d9c;
            case 0x1B9DA0u: goto label_1b9da0;
            case 0x1B9DA4u: goto label_1b9da4;
            case 0x1B9DA8u: goto label_1b9da8;
            case 0x1B9DACu: goto label_1b9dac;
            case 0x1B9DB0u: goto label_1b9db0;
            case 0x1B9DB4u: goto label_1b9db4;
            case 0x1B9DB8u: goto label_1b9db8;
            case 0x1B9DBCu: goto label_1b9dbc;
            case 0x1B9DC0u: goto label_1b9dc0;
            case 0x1B9DC4u: goto label_1b9dc4;
            case 0x1B9DC8u: goto label_1b9dc8;
            case 0x1B9DCCu: goto label_1b9dcc;
            case 0x1B9DD0u: goto label_1b9dd0;
            case 0x1B9DD4u: goto label_1b9dd4;
            case 0x1B9DD8u: goto label_1b9dd8;
            case 0x1B9DDCu: goto label_1b9ddc;
            case 0x1B9DE0u: goto label_1b9de0;
            case 0x1B9DE4u: goto label_1b9de4;
            case 0x1B9DE8u: goto label_1b9de8;
            case 0x1B9DECu: goto label_1b9dec;
            case 0x1B9DF0u: goto label_1b9df0;
            case 0x1B9DF4u: goto label_1b9df4;
            case 0x1B9DF8u: goto label_1b9df8;
            case 0x1B9DFCu: goto label_1b9dfc;
            case 0x1B9E00u: goto label_1b9e00;
            case 0x1B9E04u: goto label_1b9e04;
            case 0x1B9E08u: goto label_1b9e08;
            case 0x1B9E0Cu: goto label_1b9e0c;
            case 0x1B9E10u: goto label_1b9e10;
            case 0x1B9E14u: goto label_1b9e14;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9E1Cu: goto label_1b9e1c;
            case 0x1B9E20u: goto label_1b9e20;
            case 0x1B9E24u: goto label_1b9e24;
            case 0x1B9E28u: goto label_1b9e28;
            case 0x1B9E2Cu: goto label_1b9e2c;
            case 0x1B9E30u: goto label_1b9e30;
            case 0x1B9E34u: goto label_1b9e34;
            case 0x1B9E38u: goto label_1b9e38;
            case 0x1B9E3Cu: goto label_1b9e3c;
            case 0x1B9E40u: goto label_1b9e40;
            case 0x1B9E44u: goto label_1b9e44;
            case 0x1B9E48u: goto label_1b9e48;
            case 0x1B9E4Cu: goto label_1b9e4c;
            case 0x1B9E50u: goto label_1b9e50;
            case 0x1B9E54u: goto label_1b9e54;
            case 0x1B9E58u: goto label_1b9e58;
            case 0x1B9E5Cu: goto label_1b9e5c;
            case 0x1B9E60u: goto label_1b9e60;
            case 0x1B9E64u: goto label_1b9e64;
            case 0x1B9E68u: goto label_1b9e68;
            case 0x1B9E6Cu: goto label_1b9e6c;
            case 0x1B9E70u: goto label_1b9e70;
            case 0x1B9E74u: goto label_1b9e74;
            case 0x1B9E78u: goto label_1b9e78;
            case 0x1B9E7Cu: goto label_1b9e7c;
            case 0x1B9E80u: goto label_1b9e80;
            case 0x1B9E84u: goto label_1b9e84;
            case 0x1B9E88u: goto label_1b9e88;
            case 0x1B9E8Cu: goto label_1b9e8c;
            case 0x1B9E90u: goto label_1b9e90;
            case 0x1B9E94u: goto label_1b9e94;
            case 0x1B9E98u: goto label_1b9e98;
            case 0x1B9E9Cu: goto label_1b9e9c;
            case 0x1B9EA0u: goto label_1b9ea0;
            case 0x1B9EA4u: goto label_1b9ea4;
            case 0x1B9EA8u: goto label_1b9ea8;
            case 0x1B9EACu: goto label_1b9eac;
            case 0x1B9EB0u: goto label_1b9eb0;
            case 0x1B9EB4u: goto label_1b9eb4;
            case 0x1B9EB8u: goto label_1b9eb8;
            case 0x1B9EBCu: goto label_1b9ebc;
            case 0x1B9EC0u: goto label_1b9ec0;
            case 0x1B9EC4u: goto label_1b9ec4;
            case 0x1B9EC8u: goto label_1b9ec8;
            case 0x1B9ECCu: goto label_1b9ecc;
            case 0x1B9ED0u: goto label_1b9ed0;
            case 0x1B9ED4u: goto label_1b9ed4;
            case 0x1B9ED8u: goto label_1b9ed8;
            case 0x1B9EDCu: goto label_1b9edc;
            case 0x1B9EE0u: goto label_1b9ee0;
            case 0x1B9EE4u: goto label_1b9ee4;
            case 0x1B9EE8u: goto label_1b9ee8;
            case 0x1B9EECu: goto label_1b9eec;
            case 0x1B9EF0u: goto label_1b9ef0;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9EF8u: goto label_1b9ef8;
            case 0x1B9EFCu: goto label_1b9efc;
            case 0x1B9F00u: goto label_1b9f00;
            case 0x1B9F04u: goto label_1b9f04;
            case 0x1B9F08u: goto label_1b9f08;
            case 0x1B9F0Cu: goto label_1b9f0c;
            case 0x1B9F10u: goto label_1b9f10;
            case 0x1B9F14u: goto label_1b9f14;
            case 0x1B9F18u: goto label_1b9f18;
            case 0x1B9F1Cu: goto label_1b9f1c;
            case 0x1B9F20u: goto label_1b9f20;
            case 0x1B9F24u: goto label_1b9f24;
            case 0x1B9F28u: goto label_1b9f28;
            case 0x1B9F2Cu: goto label_1b9f2c;
            case 0x1B9F30u: goto label_1b9f30;
            case 0x1B9F34u: goto label_1b9f34;
            case 0x1B9F38u: goto label_1b9f38;
            case 0x1B9F3Cu: goto label_1b9f3c;
            case 0x1B9F40u: goto label_1b9f40;
            case 0x1B9F44u: goto label_1b9f44;
            case 0x1B9F48u: goto label_1b9f48;
            case 0x1B9F4Cu: goto label_1b9f4c;
            case 0x1B9F50u: goto label_1b9f50;
            case 0x1B9F54u: goto label_1b9f54;
            case 0x1B9F58u: goto label_1b9f58;
            case 0x1B9F5Cu: goto label_1b9f5c;
            case 0x1B9F60u: goto label_1b9f60;
            case 0x1B9F64u: goto label_1b9f64;
            case 0x1B9F68u: goto label_1b9f68;
            case 0x1B9F6Cu: goto label_1b9f6c;
            case 0x1B9F70u: goto label_1b9f70;
            case 0x1B9F74u: goto label_1b9f74;
            case 0x1B9F78u: goto label_1b9f78;
            case 0x1B9F7Cu: goto label_1b9f7c;
            case 0x1B9F80u: goto label_1b9f80;
            case 0x1B9F84u: goto label_1b9f84;
            case 0x1B9F88u: goto label_1b9f88;
            case 0x1B9F8Cu: goto label_1b9f8c;
            case 0x1B9F90u: goto label_1b9f90;
            case 0x1B9F94u: goto label_1b9f94;
            case 0x1B9F98u: goto label_1b9f98;
            case 0x1B9F9Cu: goto label_1b9f9c;
            case 0x1B9FA0u: goto label_1b9fa0;
            case 0x1B9FA4u: goto label_1b9fa4;
            case 0x1B9FA8u: goto label_1b9fa8;
            case 0x1B9FACu: goto label_1b9fac;
            case 0x1B9FB0u: goto label_1b9fb0;
            case 0x1B9FB4u: goto label_1b9fb4;
            case 0x1B9FB8u: goto label_1b9fb8;
            case 0x1B9FBCu: goto label_1b9fbc;
            case 0x1B9FC0u: goto label_1b9fc0;
            case 0x1B9FC4u: goto label_1b9fc4;
            case 0x1B9FC8u: goto label_1b9fc8;
            case 0x1B9FCCu: goto label_1b9fcc;
            case 0x1B9FD0u: goto label_1b9fd0;
            case 0x1B9FD4u: goto label_1b9fd4;
            case 0x1B9FD8u: goto label_1b9fd8;
            case 0x1B9FDCu: goto label_1b9fdc;
            case 0x1B9FE0u: goto label_1b9fe0;
            case 0x1B9FE4u: goto label_1b9fe4;
            case 0x1B9FE8u: goto label_1b9fe8;
            case 0x1B9FECu: goto label_1b9fec;
            case 0x1B9FF0u: goto label_1b9ff0;
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1B9FF8u: goto label_1b9ff8;
            case 0x1B9FFCu: goto label_1b9ffc;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA004u: goto label_1ba004;
            case 0x1BA008u: goto label_1ba008;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA010u: goto label_1ba010;
            case 0x1BA014u: goto label_1ba014;
            case 0x1BA018u: goto label_1ba018;
            case 0x1BA01Cu: goto label_1ba01c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA024u: goto label_1ba024;
            case 0x1BA028u: goto label_1ba028;
            case 0x1BA02Cu: goto label_1ba02c;
            case 0x1BA030u: goto label_1ba030;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA038u: goto label_1ba038;
            case 0x1BA03Cu: goto label_1ba03c;
            case 0x1BA040u: goto label_1ba040;
            case 0x1BA044u: goto label_1ba044;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA04Cu: goto label_1ba04c;
            case 0x1BA050u: goto label_1ba050;
            case 0x1BA054u: goto label_1ba054;
            case 0x1BA058u: goto label_1ba058;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA060u: goto label_1ba060;
            case 0x1BA064u: goto label_1ba064;
            case 0x1BA068u: goto label_1ba068;
            case 0x1BA06Cu: goto label_1ba06c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA074u: goto label_1ba074;
            case 0x1BA078u: goto label_1ba078;
            case 0x1BA07Cu: goto label_1ba07c;
            case 0x1BA080u: goto label_1ba080;
            case 0x1BA084u: goto label_1ba084;
            case 0x1BA088u: goto label_1ba088;
            case 0x1BA08Cu: goto label_1ba08c;
            case 0x1BA090u: goto label_1ba090;
            case 0x1BA094u: goto label_1ba094;
            case 0x1BA098u: goto label_1ba098;
            case 0x1BA09Cu: goto label_1ba09c;
            case 0x1BA0A0u: goto label_1ba0a0;
            case 0x1BA0A4u: goto label_1ba0a4;
            case 0x1BA0A8u: goto label_1ba0a8;
            case 0x1BA0ACu: goto label_1ba0ac;
            case 0x1BA0B0u: goto label_1ba0b0;
            case 0x1BA0B4u: goto label_1ba0b4;
            case 0x1BA0B8u: goto label_1ba0b8;
            case 0x1BA0BCu: goto label_1ba0bc;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0C4u: goto label_1ba0c4;
            case 0x1BA0C8u: goto label_1ba0c8;
            case 0x1BA0CCu: goto label_1ba0cc;
            case 0x1BA0D0u: goto label_1ba0d0;
            case 0x1BA0D4u: goto label_1ba0d4;
            case 0x1BA0D8u: goto label_1ba0d8;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0E0u: goto label_1ba0e0;
            case 0x1BA0E4u: goto label_1ba0e4;
            case 0x1BA0E8u: goto label_1ba0e8;
            case 0x1BA0ECu: goto label_1ba0ec;
            case 0x1BA0F0u: goto label_1ba0f0;
            case 0x1BA0F4u: goto label_1ba0f4;
            case 0x1BA0F8u: goto label_1ba0f8;
            case 0x1BA0FCu: goto label_1ba0fc;
            case 0x1BA100u: goto label_1ba100;
            case 0x1BA104u: goto label_1ba104;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA10Cu: goto label_1ba10c;
            case 0x1BA110u: goto label_1ba110;
            case 0x1BA114u: goto label_1ba114;
            case 0x1BA118u: goto label_1ba118;
            case 0x1BA11Cu: goto label_1ba11c;
            case 0x1BA120u: goto label_1ba120;
            case 0x1BA124u: goto label_1ba124;
            case 0x1BA128u: goto label_1ba128;
            case 0x1BA12Cu: goto label_1ba12c;
            case 0x1BA130u: goto label_1ba130;
            case 0x1BA134u: goto label_1ba134;
            case 0x1BA138u: goto label_1ba138;
            case 0x1BA13Cu: goto label_1ba13c;
            case 0x1BA140u: goto label_1ba140;
            case 0x1BA144u: goto label_1ba144;
            case 0x1BA148u: goto label_1ba148;
            case 0x1BA14Cu: goto label_1ba14c;
            case 0x1BA150u: goto label_1ba150;
            case 0x1BA154u: goto label_1ba154;
            case 0x1BA158u: goto label_1ba158;
            case 0x1BA15Cu: goto label_1ba15c;
            case 0x1BA160u: goto label_1ba160;
            case 0x1BA164u: goto label_1ba164;
            case 0x1BA168u: goto label_1ba168;
            case 0x1BA16Cu: goto label_1ba16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9BA0u;
label_1b9ba0:
    // 0x1b9ba0: 0x27bdffb0
    ctx->pc = 0x1b9ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b9ba4:
    // 0x1b9ba4: 0x3c050023
    ctx->pc = 0x1b9ba4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
label_1b9ba8:
    // 0x1b9ba8: 0xffbf0030
    ctx->pc = 0x1b9ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b9bac:
    // 0x1b9bac: 0x24a54c10
    ctx->pc = 0x1b9bacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19472));
label_1b9bb0:
    // 0x1b9bb0: 0x7fb20020
    ctx->pc = 0x1b9bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b9bb4:
    // 0x1b9bb4: 0x24030001
    ctx->pc = 0x1b9bb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1b9bb8:
    // 0x1b9bb8: 0x7fb10010
    ctx->pc = 0x1b9bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9bbc:
    // 0x1b9bbc: 0x7fb00000
    ctx->pc = 0x1b9bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9bc0:
    // 0x1b9bc0: 0x80882d
    ctx->pc = 0x1b9bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9bc4:
    // 0x1b9bc4: 0x84860038
    ctx->pc = 0x1b9bc4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
label_1b9bc8:
    // 0x1b9bc8: 0xa62821
    ctx->pc = 0x1b9bc8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b9bcc:
    // 0x1b9bcc: 0x80840004
    ctx->pc = 0x1b9bccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1b9bd0:
    // 0x1b9bd0: 0x1083003a
label_1b9bd4:
    if (ctx->pc == 0x1B9BD4u) {
        ctx->pc = 0x1B9BD4u;
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x1B9BD8u;
        goto label_1b9bd8;
    }
    ctx->pc = 0x1B9BD0u;
    {
        const bool branch_taken_0x1b9bd0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B9BD4u;
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x1b9bd0) {
            ctx->pc = 0x1B9CBCu;
            goto label_1b9cbc;
        }
    }
    ctx->pc = 0x1B9BD8u;
label_1b9bd8:
    // 0x1b9bd8: 0x10800003
label_1b9bdc:
    if (ctx->pc == 0x1B9BDCu) {
        ctx->pc = 0x1B9BE0u;
        goto label_1b9be0;
    }
    ctx->pc = 0x1B9BD8u;
    {
        const bool branch_taken_0x1b9bd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9bd8) {
            ctx->pc = 0x1B9BE8u;
            goto label_1b9be8;
        }
    }
    ctx->pc = 0x1B9BE0u;
label_1b9be0:
    // 0x1b9be0: 0x100000a1
label_1b9be4:
    if (ctx->pc == 0x1B9BE4u) {
        ctx->pc = 0x1B9BE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1B9BE8u;
        goto label_1b9be8;
    }
    ctx->pc = 0x1B9BE0u;
    {
        const bool branch_taken_0x1b9be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9BE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1b9be0) {
            ctx->pc = 0x1B9E68u;
            goto label_1b9e68;
        }
    }
    ctx->pc = 0x1B9BE8u;
label_1b9be8:
    // 0x1b9be8: 0x24820001
    ctx->pc = 0x1b9be8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_1b9bec:
    // 0x1b9bec: 0x101880
    ctx->pc = 0x1b9becu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_1b9bf0:
    // 0x1b9bf0: 0xa2220004
    ctx->pc = 0x1b9bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_1b9bf4:
    // 0x1b9bf4: 0x2624002c
    ctx->pc = 0x1b9bf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
label_1b9bf8:
    // 0x1b9bf8: 0x3c020023
    ctx->pc = 0x1b9bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1b9bfc:
    // 0x1b9bfc: 0x26260014
    ctx->pc = 0x1b9bfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
label_1b9c00:
    // 0x1b9c00: 0x24424bf0
    ctx->pc = 0x1b9c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19440));
label_1b9c04:
    // 0x1b9c04: 0x431021
    ctx->pc = 0x1b9c04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9c08:
    // 0x1b9c08: 0x8c450000
    ctx->pc = 0x1b9c08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9c0c:
    // 0x1b9c0c: 0xc06e52c
label_1b9c10:
    if (ctx->pc == 0x1B9C10u) {
        ctx->pc = 0x1B9C10u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x1B9C14u;
        goto label_1b9c14;
    }
    ctx->pc = 0x1B9C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C14u);
    ctx->pc = 0x1B9C10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 24));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C14u; }
    }
    if (ctx->pc != 0x1B9C14u) { return; }
    ctx->pc = 0x1B9C14u;
label_1b9c14:
    // 0x1b9c14: 0x40902d
    ctx->pc = 0x1b9c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9c18:
    // 0x1b9c18: 0x8e220014
    ctx->pc = 0x1b9c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b9c1c:
    // 0x1b9c1c: 0xae22000c
    ctx->pc = 0x1b9c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1b9c20:
    // 0x1b9c20: 0x8e220018
    ctx->pc = 0x1b9c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1b9c24:
    // 0x1b9c24: 0xae220010
    ctx->pc = 0x1b9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1b9c28:
    // 0x1b9c28: 0x82220001
    ctx->pc = 0x1b9c28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1b9c2c:
    // 0x1b9c2c: 0x14400012
label_1b9c30:
    if (ctx->pc == 0x1B9C30u) {
        ctx->pc = 0x1B9C34u;
        goto label_1b9c34;
    }
    ctx->pc = 0x1B9C2Cu;
    {
        const bool branch_taken_0x1b9c2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9c2c) {
            ctx->pc = 0x1B9C78u;
            goto label_1b9c78;
        }
    }
    ctx->pc = 0x1B9C34u;
label_1b9c34:
    // 0x1b9c34: 0x82250002
    ctx->pc = 0x1b9c34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1b9c38:
    // 0x1b9c38: 0x24040002
    ctx->pc = 0x1b9c38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9c3c:
    // 0x1b9c3c: 0x8e270014
    ctx->pc = 0x1b9c3cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b9c40:
    // 0x1b9c40: 0x302d
    ctx->pc = 0x1b9c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9c44:
    // 0x1b9c44: 0x8e280018
    ctx->pc = 0x1b9c44u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1b9c48:
    // 0x1b9c48: 0x2409ffff
    ctx->pc = 0x1b9c48u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b9c4c:
    // 0x1b9c4c: 0xc06b1fc
label_1b9c50:
    if (ctx->pc == 0x1B9C50u) {
        ctx->pc = 0x1B9C50u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C54u;
        goto label_1b9c54;
    }
    ctx->pc = 0x1B9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B9C54u);
    ctx->pc = 0x1B9C50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AC7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7F0_0x1ac7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C54u; }
    }
    if (ctx->pc != 0x1B9C54u) { return; }
    ctx->pc = 0x1B9C54u;
label_1b9c54:
    // 0x1b9c54: 0x82250002
    ctx->pc = 0x1b9c54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1b9c58:
    // 0x1b9c58: 0x24040002
    ctx->pc = 0x1b9c58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9c5c:
    // 0x1b9c5c: 0x8e270014
    ctx->pc = 0x1b9c5cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b9c60:
    // 0x1b9c60: 0x302d
    ctx->pc = 0x1b9c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9c64:
    // 0x1b9c64: 0x8e280018
    ctx->pc = 0x1b9c64u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1b9c68:
    // 0x1b9c68: 0xc06b2d8
label_1b9c6c:
    if (ctx->pc == 0x1B9C6Cu) {
        ctx->pc = 0x1B9C6Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1B9C70u;
        goto label_1b9c70;
    }
    ctx->pc = 0x1B9C68u;
    SET_GPR_U32(ctx, 31, 0x1B9C70u);
    ctx->pc = 0x1B9C6Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACB60_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C70u; }
    }
    if (ctx->pc != 0x1B9C70u) { return; }
    ctx->pc = 0x1B9C70u;
label_1b9c70:
    // 0x1b9c70: 0x10000011
label_1b9c74:
    if (ctx->pc == 0x1B9C74u) {
        ctx->pc = 0x1B9C74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B9C78u;
        goto label_1b9c78;
    }
    ctx->pc = 0x1B9C70u;
    {
        const bool branch_taken_0x1b9c70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9C74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1b9c70) {
            ctx->pc = 0x1B9CB8u;
            goto label_1b9cb8;
        }
    }
    ctx->pc = 0x1B9C78u;
label_1b9c78:
    // 0x1b9c78: 0x82250002
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1b9c7c:
    // 0x1b9c7c: 0x24040001
    ctx->pc = 0x1b9c7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1b9c80:
    // 0x1b9c80: 0xc06e85c
label_1b9c84:
    if (ctx->pc == 0x1B9C84u) {
        ctx->pc = 0x1B9C84u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1B9C88u;
        goto label_1b9c88;
    }
    ctx->pc = 0x1B9C80u;
    SET_GPR_U32(ctx, 31, 0x1B9C88u);
    ctx->pc = 0x1B9C84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1BA170u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA170_0x1ba170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9C88u; }
    }
    if (ctx->pc != 0x1B9C88u) { return; }
    ctx->pc = 0x1B9C88u;
label_1b9c88:
    // 0x1b9c88: 0x1440000a
label_1b9c8c:
    if (ctx->pc == 0x1B9C8Cu) {
        ctx->pc = 0x1B9C90u;
        goto label_1b9c90;
    }
    ctx->pc = 0x1B9C88u;
    {
        const bool branch_taken_0x1b9c88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9c88) {
            ctx->pc = 0x1B9CB4u;
            goto label_1b9cb4;
        }
    }
    ctx->pc = 0x1B9C90u;
label_1b9c90:
    // 0x1b9c90: 0x16400005
label_1b9c94:
    if (ctx->pc == 0x1B9C94u) {
        ctx->pc = 0x1B9C94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B9C98u;
        goto label_1b9c98;
    }
    ctx->pc = 0x1B9C90u;
    {
        const bool branch_taken_0x1b9c90 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B9C94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b9c90) {
            ctx->pc = 0x1B9CA8u;
            goto label_1b9ca8;
        }
    }
    ctx->pc = 0x1B9C98u;
label_1b9c98:
    // 0x1b9c98: 0xc06b7f4
label_1b9c9c:
    if (ctx->pc == 0x1B9C9Cu) {
        ctx->pc = 0x1B9C9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CA0u;
        goto label_1b9ca0;
    }
    ctx->pc = 0x1B9C98u;
    SET_GPR_U32(ctx, 31, 0x1B9CA0u);
    ctx->pc = 0x1B9C9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CA0u; }
    }
    if (ctx->pc != 0x1B9CA0u) { return; }
    ctx->pc = 0x1B9CA0u;
label_1b9ca0:
    // 0x1b9ca0: 0x10000004
label_1b9ca4:
    if (ctx->pc == 0x1B9CA4u) {
        ctx->pc = 0x1B9CA8u;
        goto label_1b9ca8;
    }
    ctx->pc = 0x1B9CA0u;
    {
        const bool branch_taken_0x1b9ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9ca0) {
            ctx->pc = 0x1B9CB4u;
            goto label_1b9cb4;
        }
    }
    ctx->pc = 0x1B9CA8u;
label_1b9ca8:
    // 0x1b9ca8: 0x8e250014
    ctx->pc = 0x1b9ca8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b9cac:
    // 0x1b9cac: 0xc06b7f4
label_1b9cb0:
    if (ctx->pc == 0x1B9CB0u) {
        ctx->pc = 0x1B9CB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B9CB4u;
        goto label_1b9cb4;
    }
    ctx->pc = 0x1B9CACu;
    SET_GPR_U32(ctx, 31, 0x1B9CB4u);
    ctx->pc = 0x1B9CB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CB4u; }
    }
    if (ctx->pc != 0x1B9CB4u) { return; }
    ctx->pc = 0x1B9CB4u;
label_1b9cb4:
    // 0x1b9cb4: 0x24020004
    ctx->pc = 0x1b9cb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1b9cb8:
    // 0x1b9cb8: 0xa6220008
    ctx->pc = 0x1b9cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_1b9cbc:
    // 0x1b9cbc: 0x3c020023
    ctx->pc = 0x1b9cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1b9cc0:
    // 0x1b9cc0: 0x101880
    ctx->pc = 0x1b9cc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_1b9cc4:
    // 0x1b9cc4: 0x24424bf0
    ctx->pc = 0x1b9cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19440));
label_1b9cc8:
    // 0x1b9cc8: 0x2624002c
    ctx->pc = 0x1b9cc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
label_1b9ccc:
    // 0x1b9ccc: 0x431021
    ctx->pc = 0x1b9cccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9cd0:
    // 0x1b9cd0: 0x27a6004c
    ctx->pc = 0x1b9cd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
label_1b9cd4:
    // 0x1b9cd4: 0x8c450000
    ctx->pc = 0x1b9cd4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9cd8:
    // 0x1b9cd8: 0xc06e52c
label_1b9cdc:
    if (ctx->pc == 0x1B9CDCu) {
        ctx->pc = 0x1B9CDCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1B9CE0u;
        goto label_1b9ce0;
    }
    ctx->pc = 0x1B9CD8u;
    SET_GPR_U32(ctx, 31, 0x1B9CE0u);
    ctx->pc = 0x1B9CDCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CE0u; }
    }
    if (ctx->pc != 0x1B9CE0u) { return; }
    ctx->pc = 0x1B9CE0u;
label_1b9ce0:
    // 0x1b9ce0: 0x8fa5004c
    ctx->pc = 0x1b9ce0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1b9ce4:
    // 0x1b9ce4: 0x8e230014
    ctx->pc = 0x1b9ce4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b9ce8:
    // 0x1b9ce8: 0x1065000e
label_1b9cec:
    if (ctx->pc == 0x1B9CECu) {
        ctx->pc = 0x1B9CF0u;
        goto label_1b9cf0;
    }
    ctx->pc = 0x1B9CE8u;
    {
        const bool branch_taken_0x1b9ce8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1b9ce8) {
            ctx->pc = 0x1B9D24u;
            goto label_1b9d24;
        }
    }
    ctx->pc = 0x1B9CF0u;
label_1b9cf0:
    // 0x1b9cf0: 0x8e24000c
    ctx->pc = 0x1b9cf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b9cf4:
    // 0x1b9cf4: 0x3c034080
    ctx->pc = 0x1b9cf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
label_1b9cf8:
    // 0x1b9cf8: 0x44830000
    ctx->pc = 0x1b9cf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1b9cfc:
    // 0x1b9cfc: 0x24030004
    ctx->pc = 0x1b9cfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1b9d00:
    // 0x1b9d00: 0xa42023
    ctx->pc = 0x1b9d00u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1b9d04:
    // 0x1b9d04: 0x44840800
    ctx->pc = 0x1b9d04u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
label_1b9d08:
    // 0x1b9d08: 0x0
    ctx->pc = 0x1b9d08u;
    // NOP
label_1b9d0c:
    // 0x1b9d0c: 0x46800860
    ctx->pc = 0x1b9d0cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1b9d10:
    // 0x1b9d10: 0x46000803
    ctx->pc = 0x1b9d10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1b9d14:
    // 0x1b9d14: 0xe620001c
    ctx->pc = 0x1b9d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1b9d18:
    // 0x1b9d18: 0x8fa4004c
    ctx->pc = 0x1b9d18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1b9d1c:
    // 0x1b9d1c: 0xae240014
    ctx->pc = 0x1b9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_1b9d20:
    // 0x1b9d20: 0xa6230008
    ctx->pc = 0x1b9d20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
label_1b9d24:
    // 0x1b9d24: 0x8fa50048
    ctx->pc = 0x1b9d24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1b9d28:
    // 0x1b9d28: 0x8e230018
    ctx->pc = 0x1b9d28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1b9d2c:
    // 0x1b9d2c: 0x1065000e
label_1b9d30:
    if (ctx->pc == 0x1B9D30u) {
        ctx->pc = 0x1B9D34u;
        goto label_1b9d34;
    }
    ctx->pc = 0x1B9D2Cu;
    {
        const bool branch_taken_0x1b9d2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x1b9d2c) {
            ctx->pc = 0x1B9D68u;
            goto label_1b9d68;
        }
    }
    ctx->pc = 0x1B9D34u;
label_1b9d34:
    // 0x1b9d34: 0x8e240010
    ctx->pc = 0x1b9d34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b9d38:
    // 0x1b9d38: 0x3c034080
    ctx->pc = 0x1b9d38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16512 << 16));
label_1b9d3c:
    // 0x1b9d3c: 0x44830000
    ctx->pc = 0x1b9d3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_1b9d40:
    // 0x1b9d40: 0x24030004
    ctx->pc = 0x1b9d40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1b9d44:
    // 0x1b9d44: 0xa42023
    ctx->pc = 0x1b9d44u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1b9d48:
    // 0x1b9d48: 0x44840800
    ctx->pc = 0x1b9d48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
label_1b9d4c:
    // 0x1b9d4c: 0x0
    ctx->pc = 0x1b9d4cu;
    // NOP
label_1b9d50:
    // 0x1b9d50: 0x46800860
    ctx->pc = 0x1b9d50u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1b9d54:
    // 0x1b9d54: 0x46000803
    ctx->pc = 0x1b9d54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1b9d58:
    // 0x1b9d58: 0xe6200020
    ctx->pc = 0x1b9d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_1b9d5c:
    // 0x1b9d5c: 0x8fa40048
    ctx->pc = 0x1b9d5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1b9d60:
    // 0x1b9d60: 0xae240018
    ctx->pc = 0x1b9d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_1b9d64:
    // 0x1b9d64: 0xa623000a
    ctx->pc = 0x1b9d64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
label_1b9d68:
    // 0x1b9d68: 0x86230008
    ctx->pc = 0x1b9d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1b9d6c:
    // 0x1b9d6c: 0x10600013
label_1b9d70:
    if (ctx->pc == 0x1B9D70u) {
        ctx->pc = 0x1B9D70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D74u;
        goto label_1b9d74;
    }
    ctx->pc = 0x1B9D6Cu;
    {
        const bool branch_taken_0x1b9d6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9D70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b9d6c) {
            ctx->pc = 0x1B9DBCu;
            goto label_1b9dbc;
        }
    }
    ctx->pc = 0x1B9D74u;
label_1b9d74:
    // 0x1b9d74: 0x2463ffff
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b9d78:
    // 0x1b9d78: 0xa6230008
    ctx->pc = 0x1b9d78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
label_1b9d7c:
    // 0x1b9d7c: 0x31c3c
    ctx->pc = 0x1b9d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1b9d80:
    // 0x1b9d80: 0x31c3f
    ctx->pc = 0x1b9d80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1b9d84:
    // 0x1b9d84: 0x14600004
label_1b9d88:
    if (ctx->pc == 0x1B9D88u) {
        ctx->pc = 0x1B9D8Cu;
        goto label_1b9d8c;
    }
    ctx->pc = 0x1B9D84u;
    {
        const bool branch_taken_0x1b9d84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9d84) {
            ctx->pc = 0x1B9D98u;
            goto label_1b9d98;
        }
    }
    ctx->pc = 0x1B9D8Cu;
label_1b9d8c:
    // 0x1b9d8c: 0x8e230014
    ctx->pc = 0x1b9d8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1b9d90:
    // 0x1b9d90: 0x10000009
label_1b9d94:
    if (ctx->pc == 0x1B9D94u) {
        ctx->pc = 0x1B9D94u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x1B9D98u;
        goto label_1b9d98;
    }
    ctx->pc = 0x1B9D90u;
    {
        const bool branch_taken_0x1b9d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9D94u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x1b9d90) {
            ctx->pc = 0x1B9DB8u;
            goto label_1b9db8;
        }
    }
    ctx->pc = 0x1B9D98u;
label_1b9d98:
    // 0x1b9d98: 0xc621000c
    ctx->pc = 0x1b9d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9d9c:
    // 0x1b9d9c: 0xc620001c
    ctx->pc = 0x1b9d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9da0:
    // 0x1b9da0: 0x46800860
    ctx->pc = 0x1b9da0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1b9da4:
    // 0x1b9da4: 0x46000800
    ctx->pc = 0x1b9da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b9da8:
    // 0x1b9da8: 0x46000024
    ctx->pc = 0x1b9da8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1b9dac:
    // 0x1b9dac: 0x44030000
    ctx->pc = 0x1b9dacu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
label_1b9db0:
    // 0x1b9db0: 0x0
    ctx->pc = 0x1b9db0u;
    // NOP
label_1b9db4:
    // 0x1b9db4: 0xae23000c
    ctx->pc = 0x1b9db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1b9db8:
    // 0x1b9db8: 0x24040001
    ctx->pc = 0x1b9db8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1b9dbc:
    // 0x1b9dbc: 0x8623000a
    ctx->pc = 0x1b9dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_1b9dc0:
    // 0x1b9dc0: 0x10600013
label_1b9dc4:
    if (ctx->pc == 0x1B9DC4u) {
        ctx->pc = 0x1B9DC8u;
        goto label_1b9dc8;
    }
    ctx->pc = 0x1B9DC0u;
    {
        const bool branch_taken_0x1b9dc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9dc0) {
            ctx->pc = 0x1B9E10u;
            goto label_1b9e10;
        }
    }
    ctx->pc = 0x1B9DC8u;
label_1b9dc8:
    // 0x1b9dc8: 0x2463ffff
    ctx->pc = 0x1b9dc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b9dcc:
    // 0x1b9dcc: 0xa623000a
    ctx->pc = 0x1b9dccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
label_1b9dd0:
    // 0x1b9dd0: 0x31c3c
    ctx->pc = 0x1b9dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1b9dd4:
    // 0x1b9dd4: 0x31c3f
    ctx->pc = 0x1b9dd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1b9dd8:
    // 0x1b9dd8: 0x14600004
label_1b9ddc:
    if (ctx->pc == 0x1B9DDCu) {
        ctx->pc = 0x1B9DE0u;
        goto label_1b9de0;
    }
    ctx->pc = 0x1B9DD8u;
    {
        const bool branch_taken_0x1b9dd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9dd8) {
            ctx->pc = 0x1B9DECu;
            goto label_1b9dec;
        }
    }
    ctx->pc = 0x1B9DE0u;
label_1b9de0:
    // 0x1b9de0: 0x8e230018
    ctx->pc = 0x1b9de0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1b9de4:
    // 0x1b9de4: 0x10000009
label_1b9de8:
    if (ctx->pc == 0x1B9DE8u) {
        ctx->pc = 0x1B9DE8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1B9DECu;
        goto label_1b9dec;
    }
    ctx->pc = 0x1B9DE4u;
    {
        const bool branch_taken_0x1b9de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9DE8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x1b9de4) {
            ctx->pc = 0x1B9E0Cu;
            goto label_1b9e0c;
        }
    }
    ctx->pc = 0x1B9DECu;
label_1b9dec:
    // 0x1b9dec: 0xc6210010
    ctx->pc = 0x1b9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9df0:
    // 0x1b9df0: 0xc6200020
    ctx->pc = 0x1b9df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9df4:
    // 0x1b9df4: 0x46800860
    ctx->pc = 0x1b9df4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1b9df8:
    // 0x1b9df8: 0x46000800
    ctx->pc = 0x1b9df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b9dfc:
    // 0x1b9dfc: 0x46000024
    ctx->pc = 0x1b9dfcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1b9e00:
    // 0x1b9e00: 0x44030000
    ctx->pc = 0x1b9e00u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
label_1b9e04:
    // 0x1b9e04: 0x0
    ctx->pc = 0x1b9e04u;
    // NOP
label_1b9e08:
    // 0x1b9e08: 0xae230010
    ctx->pc = 0x1b9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1b9e0c:
    // 0x1b9e0c: 0x24040001
    ctx->pc = 0x1b9e0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1b9e10:
    // 0x1b9e10: 0x10800014
label_1b9e14:
    if (ctx->pc == 0x1B9E14u) {
        ctx->pc = 0x1B9E18u;
        goto label_1b9e18;
    }
    ctx->pc = 0x1B9E10u;
    {
        const bool branch_taken_0x1b9e10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9e10) {
            ctx->pc = 0x1B9E64u;
            goto label_1b9e64;
        }
    }
    ctx->pc = 0x1B9E18u;
label_1b9e18:
    // 0x1b9e18: 0x82220001
    ctx->pc = 0x1b9e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1b9e1c:
    // 0x1b9e1c: 0x1440000a
label_1b9e20:
    if (ctx->pc == 0x1B9E20u) {
        ctx->pc = 0x1B9E20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B9E24u;
        goto label_1b9e24;
    }
    ctx->pc = 0x1B9E1Cu;
    {
        const bool branch_taken_0x1b9e1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B9E20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1b9e1c) {
            ctx->pc = 0x1B9E48u;
            goto label_1b9e48;
        }
    }
    ctx->pc = 0x1B9E24u;
label_1b9e24:
    // 0x1b9e24: 0x82250002
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1b9e28:
    // 0x1b9e28: 0x24040002
    ctx->pc = 0x1b9e28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9e2c:
    // 0x1b9e2c: 0x8e27000c
    ctx->pc = 0x1b9e2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b9e30:
    // 0x1b9e30: 0x302d
    ctx->pc = 0x1b9e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e34:
    // 0x1b9e34: 0x8e280010
    ctx->pc = 0x1b9e34u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b9e38:
    // 0x1b9e38: 0xc06b2d8
label_1b9e3c:
    if (ctx->pc == 0x1B9E3Cu) {
        ctx->pc = 0x1B9E3Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1B9E40u;
        goto label_1b9e40;
    }
    ctx->pc = 0x1B9E38u;
    SET_GPR_U32(ctx, 31, 0x1B9E40u);
    ctx->pc = 0x1B9E3Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACB60_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E40u; }
    }
    if (ctx->pc != 0x1B9E40u) { return; }
    ctx->pc = 0x1B9E40u;
label_1b9e40:
    // 0x1b9e40: 0x10000008
label_1b9e44:
    if (ctx->pc == 0x1B9E44u) {
        ctx->pc = 0x1B9E48u;
        goto label_1b9e48;
    }
    ctx->pc = 0x1B9E40u;
    {
        const bool branch_taken_0x1b9e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9e40) {
            ctx->pc = 0x1B9E64u;
            goto label_1b9e64;
        }
    }
    ctx->pc = 0x1B9E48u;
label_1b9e48:
    // 0x1b9e48: 0xc06b91c
label_1b9e4c:
    if (ctx->pc == 0x1B9E4Cu) {
        ctx->pc = 0x1B9E50u;
        goto label_1b9e50;
    }
    ctx->pc = 0x1B9E48u;
    SET_GPR_U32(ctx, 31, 0x1B9E50u);
    ctx->pc = 0x1AE470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE470_0x1ae470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E50u; }
    }
    if (ctx->pc != 0x1B9E50u) { return; }
    ctx->pc = 0x1B9E50u;
label_1b9e50:
    // 0x1b9e50: 0x14400004
label_1b9e54:
    if (ctx->pc == 0x1B9E54u) {
        ctx->pc = 0x1B9E58u;
        goto label_1b9e58;
    }
    ctx->pc = 0x1B9E50u;
    {
        const bool branch_taken_0x1b9e50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9e50) {
            ctx->pc = 0x1B9E64u;
            goto label_1b9e64;
        }
    }
    ctx->pc = 0x1B9E58u;
label_1b9e58:
    // 0x1b9e58: 0x8e25000c
    ctx->pc = 0x1b9e58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b9e5c:
    // 0x1b9e5c: 0xc06b7f4
label_1b9e60:
    if (ctx->pc == 0x1B9E60u) {
        ctx->pc = 0x1B9E60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B9E64u;
        goto label_1b9e64;
    }
    ctx->pc = 0x1B9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E64u);
    ctx->pc = 0x1B9E60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E64u; }
    }
    if (ctx->pc != 0x1B9E64u) { return; }
    ctx->pc = 0x1B9E64u;
label_1b9e64:
    // 0x1b9e64: 0xdfbf0030
    ctx->pc = 0x1b9e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9e68:
    // 0x1b9e68: 0x7bb20020
    ctx->pc = 0x1b9e68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9e6c:
    // 0x1b9e6c: 0x7bb10010
    ctx->pc = 0x1b9e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9e70:
    // 0x1b9e70: 0x7bb00000
    ctx->pc = 0x1b9e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9e74:
    // 0x1b9e74: 0x3e00008
label_1b9e78:
    if (ctx->pc == 0x1B9E78u) {
        ctx->pc = 0x1B9E78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B9E7Cu;
        goto label_1b9e7c;
    }
    ctx->pc = 0x1B9E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9E78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9970u: goto label_1b9970;
            case 0x1B9974u: goto label_1b9974;
            case 0x1B9978u: goto label_1b9978;
            case 0x1B997Cu: goto label_1b997c;
            case 0x1B9980u: goto label_1b9980;
            case 0x1B9984u: goto label_1b9984;
            case 0x1B9988u: goto label_1b9988;
            case 0x1B998Cu: goto label_1b998c;
            case 0x1B9990u: goto label_1b9990;
            case 0x1B9994u: goto label_1b9994;
            case 0x1B9998u: goto label_1b9998;
            case 0x1B999Cu: goto label_1b999c;
            case 0x1B99A0u: goto label_1b99a0;
            case 0x1B99A4u: goto label_1b99a4;
            case 0x1B99A8u: goto label_1b99a8;
            case 0x1B99ACu: goto label_1b99ac;
            case 0x1B99B0u: goto label_1b99b0;
            case 0x1B99B4u: goto label_1b99b4;
            case 0x1B99B8u: goto label_1b99b8;
            case 0x1B99BCu: goto label_1b99bc;
            case 0x1B99C0u: goto label_1b99c0;
            case 0x1B99C4u: goto label_1b99c4;
            case 0x1B99C8u: goto label_1b99c8;
            case 0x1B99CCu: goto label_1b99cc;
            case 0x1B99D0u: goto label_1b99d0;
            case 0x1B99D4u: goto label_1b99d4;
            case 0x1B99D8u: goto label_1b99d8;
            case 0x1B99DCu: goto label_1b99dc;
            case 0x1B99E0u: goto label_1b99e0;
            case 0x1B99E4u: goto label_1b99e4;
            case 0x1B99E8u: goto label_1b99e8;
            case 0x1B99ECu: goto label_1b99ec;
            case 0x1B99F0u: goto label_1b99f0;
            case 0x1B99F4u: goto label_1b99f4;
            case 0x1B99F8u: goto label_1b99f8;
            case 0x1B99FCu: goto label_1b99fc;
            case 0x1B9A00u: goto label_1b9a00;
            case 0x1B9A04u: goto label_1b9a04;
            case 0x1B9A08u: goto label_1b9a08;
            case 0x1B9A0Cu: goto label_1b9a0c;
            case 0x1B9A10u: goto label_1b9a10;
            case 0x1B9A14u: goto label_1b9a14;
            case 0x1B9A18u: goto label_1b9a18;
            case 0x1B9A1Cu: goto label_1b9a1c;
            case 0x1B9A20u: goto label_1b9a20;
            case 0x1B9A24u: goto label_1b9a24;
            case 0x1B9A28u: goto label_1b9a28;
            case 0x1B9A2Cu: goto label_1b9a2c;
            case 0x1B9A30u: goto label_1b9a30;
            case 0x1B9A34u: goto label_1b9a34;
            case 0x1B9A38u: goto label_1b9a38;
            case 0x1B9A3Cu: goto label_1b9a3c;
            case 0x1B9A40u: goto label_1b9a40;
            case 0x1B9A44u: goto label_1b9a44;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A4Cu: goto label_1b9a4c;
            case 0x1B9A50u: goto label_1b9a50;
            case 0x1B9A54u: goto label_1b9a54;
            case 0x1B9A58u: goto label_1b9a58;
            case 0x1B9A5Cu: goto label_1b9a5c;
            case 0x1B9A60u: goto label_1b9a60;
            case 0x1B9A64u: goto label_1b9a64;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9A6Cu: goto label_1b9a6c;
            case 0x1B9A70u: goto label_1b9a70;
            case 0x1B9A74u: goto label_1b9a74;
            case 0x1B9A78u: goto label_1b9a78;
            case 0x1B9A7Cu: goto label_1b9a7c;
            case 0x1B9A80u: goto label_1b9a80;
            case 0x1B9A84u: goto label_1b9a84;
            case 0x1B9A88u: goto label_1b9a88;
            case 0x1B9A8Cu: goto label_1b9a8c;
            case 0x1B9A90u: goto label_1b9a90;
            case 0x1B9A94u: goto label_1b9a94;
            case 0x1B9A98u: goto label_1b9a98;
            case 0x1B9A9Cu: goto label_1b9a9c;
            case 0x1B9AA0u: goto label_1b9aa0;
            case 0x1B9AA4u: goto label_1b9aa4;
            case 0x1B9AA8u: goto label_1b9aa8;
            case 0x1B9AACu: goto label_1b9aac;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AB4u: goto label_1b9ab4;
            case 0x1B9AB8u: goto label_1b9ab8;
            case 0x1B9ABCu: goto label_1b9abc;
            case 0x1B9AC0u: goto label_1b9ac0;
            case 0x1B9AC4u: goto label_1b9ac4;
            case 0x1B9AC8u: goto label_1b9ac8;
            case 0x1B9ACCu: goto label_1b9acc;
            case 0x1B9AD0u: goto label_1b9ad0;
            case 0x1B9AD4u: goto label_1b9ad4;
            case 0x1B9AD8u: goto label_1b9ad8;
            case 0x1B9ADCu: goto label_1b9adc;
            case 0x1B9AE0u: goto label_1b9ae0;
            case 0x1B9AE4u: goto label_1b9ae4;
            case 0x1B9AE8u: goto label_1b9ae8;
            case 0x1B9AECu: goto label_1b9aec;
            case 0x1B9AF0u: goto label_1b9af0;
            case 0x1B9AF4u: goto label_1b9af4;
            case 0x1B9AF8u: goto label_1b9af8;
            case 0x1B9AFCu: goto label_1b9afc;
            case 0x1B9B00u: goto label_1b9b00;
            case 0x1B9B04u: goto label_1b9b04;
            case 0x1B9B08u: goto label_1b9b08;
            case 0x1B9B0Cu: goto label_1b9b0c;
            case 0x1B9B10u: goto label_1b9b10;
            case 0x1B9B14u: goto label_1b9b14;
            case 0x1B9B18u: goto label_1b9b18;
            case 0x1B9B1Cu: goto label_1b9b1c;
            case 0x1B9B20u: goto label_1b9b20;
            case 0x1B9B24u: goto label_1b9b24;
            case 0x1B9B28u: goto label_1b9b28;
            case 0x1B9B2Cu: goto label_1b9b2c;
            case 0x1B9B30u: goto label_1b9b30;
            case 0x1B9B34u: goto label_1b9b34;
            case 0x1B9B38u: goto label_1b9b38;
            case 0x1B9B3Cu: goto label_1b9b3c;
            case 0x1B9B40u: goto label_1b9b40;
            case 0x1B9B44u: goto label_1b9b44;
            case 0x1B9B48u: goto label_1b9b48;
            case 0x1B9B4Cu: goto label_1b9b4c;
            case 0x1B9B50u: goto label_1b9b50;
            case 0x1B9B54u: goto label_1b9b54;
            case 0x1B9B58u: goto label_1b9b58;
            case 0x1B9B5Cu: goto label_1b9b5c;
            case 0x1B9B60u: goto label_1b9b60;
            case 0x1B9B64u: goto label_1b9b64;
            case 0x1B9B68u: goto label_1b9b68;
            case 0x1B9B6Cu: goto label_1b9b6c;
            case 0x1B9B70u: goto label_1b9b70;
            case 0x1B9B74u: goto label_1b9b74;
            case 0x1B9B78u: goto label_1b9b78;
            case 0x1B9B7Cu: goto label_1b9b7c;
            case 0x1B9B80u: goto label_1b9b80;
            case 0x1B9B84u: goto label_1b9b84;
            case 0x1B9B88u: goto label_1b9b88;
            case 0x1B9B8Cu: goto label_1b9b8c;
            case 0x1B9B90u: goto label_1b9b90;
            case 0x1B9B94u: goto label_1b9b94;
            case 0x1B9B98u: goto label_1b9b98;
            case 0x1B9B9Cu: goto label_1b9b9c;
            case 0x1B9BA0u: goto label_1b9ba0;
            case 0x1B9BA4u: goto label_1b9ba4;
            case 0x1B9BA8u: goto label_1b9ba8;
            case 0x1B9BACu: goto label_1b9bac;
            case 0x1B9BB0u: goto label_1b9bb0;
            case 0x1B9BB4u: goto label_1b9bb4;
            case 0x1B9BB8u: goto label_1b9bb8;
            case 0x1B9BBCu: goto label_1b9bbc;
            case 0x1B9BC0u: goto label_1b9bc0;
            case 0x1B9BC4u: goto label_1b9bc4;
            case 0x1B9BC8u: goto label_1b9bc8;
            case 0x1B9BCCu: goto label_1b9bcc;
            case 0x1B9BD0u: goto label_1b9bd0;
            case 0x1B9BD4u: goto label_1b9bd4;
            case 0x1B9BD8u: goto label_1b9bd8;
            case 0x1B9BDCu: goto label_1b9bdc;
            case 0x1B9BE0u: goto label_1b9be0;
            case 0x1B9BE4u: goto label_1b9be4;
            case 0x1B9BE8u: goto label_1b9be8;
            case 0x1B9BECu: goto label_1b9bec;
            case 0x1B9BF0u: goto label_1b9bf0;
            case 0x1B9BF4u: goto label_1b9bf4;
            case 0x1B9BF8u: goto label_1b9bf8;
            case 0x1B9BFCu: goto label_1b9bfc;
            case 0x1B9C00u: goto label_1b9c00;
            case 0x1B9C04u: goto label_1b9c04;
            case 0x1B9C08u: goto label_1b9c08;
            case 0x1B9C0Cu: goto label_1b9c0c;
            case 0x1B9C10u: goto label_1b9c10;
            case 0x1B9C14u: goto label_1b9c14;
            case 0x1B9C18u: goto label_1b9c18;
            case 0x1B9C1Cu: goto label_1b9c1c;
            case 0x1B9C20u: goto label_1b9c20;
            case 0x1B9C24u: goto label_1b9c24;
            case 0x1B9C28u: goto label_1b9c28;
            case 0x1B9C2Cu: goto label_1b9c2c;
            case 0x1B9C30u: goto label_1b9c30;
            case 0x1B9C34u: goto label_1b9c34;
            case 0x1B9C38u: goto label_1b9c38;
            case 0x1B9C3Cu: goto label_1b9c3c;
            case 0x1B9C40u: goto label_1b9c40;
            case 0x1B9C44u: goto label_1b9c44;
            case 0x1B9C48u: goto label_1b9c48;
            case 0x1B9C4Cu: goto label_1b9c4c;
            case 0x1B9C50u: goto label_1b9c50;
            case 0x1B9C54u: goto label_1b9c54;
            case 0x1B9C58u: goto label_1b9c58;
            case 0x1B9C5Cu: goto label_1b9c5c;
            case 0x1B9C60u: goto label_1b9c60;
            case 0x1B9C64u: goto label_1b9c64;
            case 0x1B9C68u: goto label_1b9c68;
            case 0x1B9C6Cu: goto label_1b9c6c;
            case 0x1B9C70u: goto label_1b9c70;
            case 0x1B9C74u: goto label_1b9c74;
            case 0x1B9C78u: goto label_1b9c78;
            case 0x1B9C7Cu: goto label_1b9c7c;
            case 0x1B9C80u: goto label_1b9c80;
            case 0x1B9C84u: goto label_1b9c84;
            case 0x1B9C88u: goto label_1b9c88;
            case 0x1B9C8Cu: goto label_1b9c8c;
            case 0x1B9C90u: goto label_1b9c90;
            case 0x1B9C94u: goto label_1b9c94;
            case 0x1B9C98u: goto label_1b9c98;
            case 0x1B9C9Cu: goto label_1b9c9c;
            case 0x1B9CA0u: goto label_1b9ca0;
            case 0x1B9CA4u: goto label_1b9ca4;
            case 0x1B9CA8u: goto label_1b9ca8;
            case 0x1B9CACu: goto label_1b9cac;
            case 0x1B9CB0u: goto label_1b9cb0;
            case 0x1B9CB4u: goto label_1b9cb4;
            case 0x1B9CB8u: goto label_1b9cb8;
            case 0x1B9CBCu: goto label_1b9cbc;
            case 0x1B9CC0u: goto label_1b9cc0;
            case 0x1B9CC4u: goto label_1b9cc4;
            case 0x1B9CC8u: goto label_1b9cc8;
            case 0x1B9CCCu: goto label_1b9ccc;
            case 0x1B9CD0u: goto label_1b9cd0;
            case 0x1B9CD4u: goto label_1b9cd4;
            case 0x1B9CD8u: goto label_1b9cd8;
            case 0x1B9CDCu: goto label_1b9cdc;
            case 0x1B9CE0u: goto label_1b9ce0;
            case 0x1B9CE4u: goto label_1b9ce4;
            case 0x1B9CE8u: goto label_1b9ce8;
            case 0x1B9CECu: goto label_1b9cec;
            case 0x1B9CF0u: goto label_1b9cf0;
            case 0x1B9CF4u: goto label_1b9cf4;
            case 0x1B9CF8u: goto label_1b9cf8;
            case 0x1B9CFCu: goto label_1b9cfc;
            case 0x1B9D00u: goto label_1b9d00;
            case 0x1B9D04u: goto label_1b9d04;
            case 0x1B9D08u: goto label_1b9d08;
            case 0x1B9D0Cu: goto label_1b9d0c;
            case 0x1B9D10u: goto label_1b9d10;
            case 0x1B9D14u: goto label_1b9d14;
            case 0x1B9D18u: goto label_1b9d18;
            case 0x1B9D1Cu: goto label_1b9d1c;
            case 0x1B9D20u: goto label_1b9d20;
            case 0x1B9D24u: goto label_1b9d24;
            case 0x1B9D28u: goto label_1b9d28;
            case 0x1B9D2Cu: goto label_1b9d2c;
            case 0x1B9D30u: goto label_1b9d30;
            case 0x1B9D34u: goto label_1b9d34;
            case 0x1B9D38u: goto label_1b9d38;
            case 0x1B9D3Cu: goto label_1b9d3c;
            case 0x1B9D40u: goto label_1b9d40;
            case 0x1B9D44u: goto label_1b9d44;
            case 0x1B9D48u: goto label_1b9d48;
            case 0x1B9D4Cu: goto label_1b9d4c;
            case 0x1B9D50u: goto label_1b9d50;
            case 0x1B9D54u: goto label_1b9d54;
            case 0x1B9D58u: goto label_1b9d58;
            case 0x1B9D5Cu: goto label_1b9d5c;
            case 0x1B9D60u: goto label_1b9d60;
            case 0x1B9D64u: goto label_1b9d64;
            case 0x1B9D68u: goto label_1b9d68;
            case 0x1B9D6Cu: goto label_1b9d6c;
            case 0x1B9D70u: goto label_1b9d70;
            case 0x1B9D74u: goto label_1b9d74;
            case 0x1B9D78u: goto label_1b9d78;
            case 0x1B9D7Cu: goto label_1b9d7c;
            case 0x1B9D80u: goto label_1b9d80;
            case 0x1B9D84u: goto label_1b9d84;
            case 0x1B9D88u: goto label_1b9d88;
            case 0x1B9D8Cu: goto label_1b9d8c;
            case 0x1B9D90u: goto label_1b9d90;
            case 0x1B9D94u: goto label_1b9d94;
            case 0x1B9D98u: goto label_1b9d98;
            case 0x1B9D9Cu: goto label_1b9d9c;
            case 0x1B9DA0u: goto label_1b9da0;
            case 0x1B9DA4u: goto label_1b9da4;
            case 0x1B9DA8u: goto label_1b9da8;
            case 0x1B9DACu: goto label_1b9dac;
            case 0x1B9DB0u: goto label_1b9db0;
            case 0x1B9DB4u: goto label_1b9db4;
            case 0x1B9DB8u: goto label_1b9db8;
            case 0x1B9DBCu: goto label_1b9dbc;
            case 0x1B9DC0u: goto label_1b9dc0;
            case 0x1B9DC4u: goto label_1b9dc4;
            case 0x1B9DC8u: goto label_1b9dc8;
            case 0x1B9DCCu: goto label_1b9dcc;
            case 0x1B9DD0u: goto label_1b9dd0;
            case 0x1B9DD4u: goto label_1b9dd4;
            case 0x1B9DD8u: goto label_1b9dd8;
            case 0x1B9DDCu: goto label_1b9ddc;
            case 0x1B9DE0u: goto label_1b9de0;
            case 0x1B9DE4u: goto label_1b9de4;
            case 0x1B9DE8u: goto label_1b9de8;
            case 0x1B9DECu: goto label_1b9dec;
            case 0x1B9DF0u: goto label_1b9df0;
            case 0x1B9DF4u: goto label_1b9df4;
            case 0x1B9DF8u: goto label_1b9df8;
            case 0x1B9DFCu: goto label_1b9dfc;
            case 0x1B9E00u: goto label_1b9e00;
            case 0x1B9E04u: goto label_1b9e04;
            case 0x1B9E08u: goto label_1b9e08;
            case 0x1B9E0Cu: goto label_1b9e0c;
            case 0x1B9E10u: goto label_1b9e10;
            case 0x1B9E14u: goto label_1b9e14;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9E1Cu: goto label_1b9e1c;
            case 0x1B9E20u: goto label_1b9e20;
            case 0x1B9E24u: goto label_1b9e24;
            case 0x1B9E28u: goto label_1b9e28;
            case 0x1B9E2Cu: goto label_1b9e2c;
            case 0x1B9E30u: goto label_1b9e30;
            case 0x1B9E34u: goto label_1b9e34;
            case 0x1B9E38u: goto label_1b9e38;
            case 0x1B9E3Cu: goto label_1b9e3c;
            case 0x1B9E40u: goto label_1b9e40;
            case 0x1B9E44u: goto label_1b9e44;
            case 0x1B9E48u: goto label_1b9e48;
            case 0x1B9E4Cu: goto label_1b9e4c;
            case 0x1B9E50u: goto label_1b9e50;
            case 0x1B9E54u: goto label_1b9e54;
            case 0x1B9E58u: goto label_1b9e58;
            case 0x1B9E5Cu: goto label_1b9e5c;
            case 0x1B9E60u: goto label_1b9e60;
            case 0x1B9E64u: goto label_1b9e64;
            case 0x1B9E68u: goto label_1b9e68;
            case 0x1B9E6Cu: goto label_1b9e6c;
            case 0x1B9E70u: goto label_1b9e70;
            case 0x1B9E74u: goto label_1b9e74;
            case 0x1B9E78u: goto label_1b9e78;
            case 0x1B9E7Cu: goto label_1b9e7c;
            case 0x1B9E80u: goto label_1b9e80;
            case 0x1B9E84u: goto label_1b9e84;
            case 0x1B9E88u: goto label_1b9e88;
            case 0x1B9E8Cu: goto label_1b9e8c;
            case 0x1B9E90u: goto label_1b9e90;
            case 0x1B9E94u: goto label_1b9e94;
            case 0x1B9E98u: goto label_1b9e98;
            case 0x1B9E9Cu: goto label_1b9e9c;
            case 0x1B9EA0u: goto label_1b9ea0;
            case 0x1B9EA4u: goto label_1b9ea4;
            case 0x1B9EA8u: goto label_1b9ea8;
            case 0x1B9EACu: goto label_1b9eac;
            case 0x1B9EB0u: goto label_1b9eb0;
            case 0x1B9EB4u: goto label_1b9eb4;
            case 0x1B9EB8u: goto label_1b9eb8;
            case 0x1B9EBCu: goto label_1b9ebc;
            case 0x1B9EC0u: goto label_1b9ec0;
            case 0x1B9EC4u: goto label_1b9ec4;
            case 0x1B9EC8u: goto label_1b9ec8;
            case 0x1B9ECCu: goto label_1b9ecc;
            case 0x1B9ED0u: goto label_1b9ed0;
            case 0x1B9ED4u: goto label_1b9ed4;
            case 0x1B9ED8u: goto label_1b9ed8;
            case 0x1B9EDCu: goto label_1b9edc;
            case 0x1B9EE0u: goto label_1b9ee0;
            case 0x1B9EE4u: goto label_1b9ee4;
            case 0x1B9EE8u: goto label_1b9ee8;
            case 0x1B9EECu: goto label_1b9eec;
            case 0x1B9EF0u: goto label_1b9ef0;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9EF8u: goto label_1b9ef8;
            case 0x1B9EFCu: goto label_1b9efc;
            case 0x1B9F00u: goto label_1b9f00;
            case 0x1B9F04u: goto label_1b9f04;
            case 0x1B9F08u: goto label_1b9f08;
            case 0x1B9F0Cu: goto label_1b9f0c;
            case 0x1B9F10u: goto label_1b9f10;
            case 0x1B9F14u: goto label_1b9f14;
            case 0x1B9F18u: goto label_1b9f18;
            case 0x1B9F1Cu: goto label_1b9f1c;
            case 0x1B9F20u: goto label_1b9f20;
            case 0x1B9F24u: goto label_1b9f24;
            case 0x1B9F28u: goto label_1b9f28;
            case 0x1B9F2Cu: goto label_1b9f2c;
            case 0x1B9F30u: goto label_1b9f30;
            case 0x1B9F34u: goto label_1b9f34;
            case 0x1B9F38u: goto label_1b9f38;
            case 0x1B9F3Cu: goto label_1b9f3c;
            case 0x1B9F40u: goto label_1b9f40;
            case 0x1B9F44u: goto label_1b9f44;
            case 0x1B9F48u: goto label_1b9f48;
            case 0x1B9F4Cu: goto label_1b9f4c;
            case 0x1B9F50u: goto label_1b9f50;
            case 0x1B9F54u: goto label_1b9f54;
            case 0x1B9F58u: goto label_1b9f58;
            case 0x1B9F5Cu: goto label_1b9f5c;
            case 0x1B9F60u: goto label_1b9f60;
            case 0x1B9F64u: goto label_1b9f64;
            case 0x1B9F68u: goto label_1b9f68;
            case 0x1B9F6Cu: goto label_1b9f6c;
            case 0x1B9F70u: goto label_1b9f70;
            case 0x1B9F74u: goto label_1b9f74;
            case 0x1B9F78u: goto label_1b9f78;
            case 0x1B9F7Cu: goto label_1b9f7c;
            case 0x1B9F80u: goto label_1b9f80;
            case 0x1B9F84u: goto label_1b9f84;
            case 0x1B9F88u: goto label_1b9f88;
            case 0x1B9F8Cu: goto label_1b9f8c;
            case 0x1B9F90u: goto label_1b9f90;
            case 0x1B9F94u: goto label_1b9f94;
            case 0x1B9F98u: goto label_1b9f98;
            case 0x1B9F9Cu: goto label_1b9f9c;
            case 0x1B9FA0u: goto label_1b9fa0;
            case 0x1B9FA4u: goto label_1b9fa4;
            case 0x1B9FA8u: goto label_1b9fa8;
            case 0x1B9FACu: goto label_1b9fac;
            case 0x1B9FB0u: goto label_1b9fb0;
            case 0x1B9FB4u: goto label_1b9fb4;
            case 0x1B9FB8u: goto label_1b9fb8;
            case 0x1B9FBCu: goto label_1b9fbc;
            case 0x1B9FC0u: goto label_1b9fc0;
            case 0x1B9FC4u: goto label_1b9fc4;
            case 0x1B9FC8u: goto label_1b9fc8;
            case 0x1B9FCCu: goto label_1b9fcc;
            case 0x1B9FD0u: goto label_1b9fd0;
            case 0x1B9FD4u: goto label_1b9fd4;
            case 0x1B9FD8u: goto label_1b9fd8;
            case 0x1B9FDCu: goto label_1b9fdc;
            case 0x1B9FE0u: goto label_1b9fe0;
            case 0x1B9FE4u: goto label_1b9fe4;
            case 0x1B9FE8u: goto label_1b9fe8;
            case 0x1B9FECu: goto label_1b9fec;
            case 0x1B9FF0u: goto label_1b9ff0;
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1B9FF8u: goto label_1b9ff8;
            case 0x1B9FFCu: goto label_1b9ffc;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA004u: goto label_1ba004;
            case 0x1BA008u: goto label_1ba008;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA010u: goto label_1ba010;
            case 0x1BA014u: goto label_1ba014;
            case 0x1BA018u: goto label_1ba018;
            case 0x1BA01Cu: goto label_1ba01c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA024u: goto label_1ba024;
            case 0x1BA028u: goto label_1ba028;
            case 0x1BA02Cu: goto label_1ba02c;
            case 0x1BA030u: goto label_1ba030;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA038u: goto label_1ba038;
            case 0x1BA03Cu: goto label_1ba03c;
            case 0x1BA040u: goto label_1ba040;
            case 0x1BA044u: goto label_1ba044;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA04Cu: goto label_1ba04c;
            case 0x1BA050u: goto label_1ba050;
            case 0x1BA054u: goto label_1ba054;
            case 0x1BA058u: goto label_1ba058;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA060u: goto label_1ba060;
            case 0x1BA064u: goto label_1ba064;
            case 0x1BA068u: goto label_1ba068;
            case 0x1BA06Cu: goto label_1ba06c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA074u: goto label_1ba074;
            case 0x1BA078u: goto label_1ba078;
            case 0x1BA07Cu: goto label_1ba07c;
            case 0x1BA080u: goto label_1ba080;
            case 0x1BA084u: goto label_1ba084;
            case 0x1BA088u: goto label_1ba088;
            case 0x1BA08Cu: goto label_1ba08c;
            case 0x1BA090u: goto label_1ba090;
            case 0x1BA094u: goto label_1ba094;
            case 0x1BA098u: goto label_1ba098;
            case 0x1BA09Cu: goto label_1ba09c;
            case 0x1BA0A0u: goto label_1ba0a0;
            case 0x1BA0A4u: goto label_1ba0a4;
            case 0x1BA0A8u: goto label_1ba0a8;
            case 0x1BA0ACu: goto label_1ba0ac;
            case 0x1BA0B0u: goto label_1ba0b0;
            case 0x1BA0B4u: goto label_1ba0b4;
            case 0x1BA0B8u: goto label_1ba0b8;
            case 0x1BA0BCu: goto label_1ba0bc;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0C4u: goto label_1ba0c4;
            case 0x1BA0C8u: goto label_1ba0c8;
            case 0x1BA0CCu: goto label_1ba0cc;
            case 0x1BA0D0u: goto label_1ba0d0;
            case 0x1BA0D4u: goto label_1ba0d4;
            case 0x1BA0D8u: goto label_1ba0d8;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0E0u: goto label_1ba0e0;
            case 0x1BA0E4u: goto label_1ba0e4;
            case 0x1BA0E8u: goto label_1ba0e8;
            case 0x1BA0ECu: goto label_1ba0ec;
            case 0x1BA0F0u: goto label_1ba0f0;
            case 0x1BA0F4u: goto label_1ba0f4;
            case 0x1BA0F8u: goto label_1ba0f8;
            case 0x1BA0FCu: goto label_1ba0fc;
            case 0x1BA100u: goto label_1ba100;
            case 0x1BA104u: goto label_1ba104;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA10Cu: goto label_1ba10c;
            case 0x1BA110u: goto label_1ba110;
            case 0x1BA114u: goto label_1ba114;
            case 0x1BA118u: goto label_1ba118;
            case 0x1BA11Cu: goto label_1ba11c;
            case 0x1BA120u: goto label_1ba120;
            case 0x1BA124u: goto label_1ba124;
            case 0x1BA128u: goto label_1ba128;
            case 0x1BA12Cu: goto label_1ba12c;
            case 0x1BA130u: goto label_1ba130;
            case 0x1BA134u: goto label_1ba134;
            case 0x1BA138u: goto label_1ba138;
            case 0x1BA13Cu: goto label_1ba13c;
            case 0x1BA140u: goto label_1ba140;
            case 0x1BA144u: goto label_1ba144;
            case 0x1BA148u: goto label_1ba148;
            case 0x1BA14Cu: goto label_1ba14c;
            case 0x1BA150u: goto label_1ba150;
            case 0x1BA154u: goto label_1ba154;
            case 0x1BA158u: goto label_1ba158;
            case 0x1BA15Cu: goto label_1ba15c;
            case 0x1BA160u: goto label_1ba160;
            case 0x1BA164u: goto label_1ba164;
            case 0x1BA168u: goto label_1ba168;
            case 0x1BA16Cu: goto label_1ba16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9E7Cu;
label_1b9e7c:
    // 0x1b9e7c: 0x0
    ctx->pc = 0x1b9e7cu;
    // NOP
label_1b9e80:
    // 0x1b9e80: 0x27bdffc0
    ctx->pc = 0x1b9e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b9e84:
    // 0x1b9e84: 0x3c050023
    ctx->pc = 0x1b9e84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
label_1b9e88:
    // 0x1b9e88: 0xffbf0020
    ctx->pc = 0x1b9e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b9e8c:
    // 0x1b9e8c: 0x24a54c10
    ctx->pc = 0x1b9e8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19472));
label_1b9e90:
    // 0x1b9e90: 0x7fb10010
    ctx->pc = 0x1b9e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9e94:
    // 0x1b9e94: 0x24080001
    ctx->pc = 0x1b9e94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b9e98:
    // 0x1b9e98: 0x7fb00000
    ctx->pc = 0x1b9e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9e9c:
    // 0x1b9e9c: 0x84860038
    ctx->pc = 0x1b9e9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
label_1b9ea0:
    // 0x1b9ea0: 0x80830004
    ctx->pc = 0x1b9ea0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1b9ea4:
    // 0x1b9ea4: 0xa62821
    ctx->pc = 0x1b9ea4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b9ea8:
    // 0x1b9ea8: 0x80b00000
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1b9eac:
    // 0x1b9eac: 0x10680018
label_1b9eb0:
    if (ctx->pc == 0x1B9EB0u) {
        ctx->pc = 0x1B9EB0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EB4u;
        goto label_1b9eb4;
    }
    ctx->pc = 0x1B9EACu;
    {
        const bool branch_taken_0x1b9eac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        ctx->pc = 0x1B9EB0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b9eac) {
            ctx->pc = 0x1B9F10u;
            goto label_1b9f10;
        }
    }
    ctx->pc = 0x1B9EB4u;
label_1b9eb4:
    // 0x1b9eb4: 0x10600003
label_1b9eb8:
    if (ctx->pc == 0x1B9EB8u) {
        ctx->pc = 0x1B9EBCu;
        goto label_1b9ebc;
    }
    ctx->pc = 0x1B9EB4u;
    {
        const bool branch_taken_0x1b9eb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9eb4) {
            ctx->pc = 0x1B9EC4u;
            goto label_1b9ec4;
        }
    }
    ctx->pc = 0x1B9EBCu;
label_1b9ebc:
    // 0x1b9ebc: 0x1000005a
label_1b9ec0:
    if (ctx->pc == 0x1B9EC0u) {
        ctx->pc = 0x1B9EC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B9EC4u;
        goto label_1b9ec4;
    }
    ctx->pc = 0x1B9EBCu;
    {
        const bool branch_taken_0x1b9ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9EC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1b9ebc) {
            ctx->pc = 0x1BA028u;
            goto label_1ba028;
        }
    }
    ctx->pc = 0x1B9EC4u;
label_1b9ec4:
    // 0x1b9ec4: 0x24620001
    ctx->pc = 0x1b9ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_1b9ec8:
    // 0x1b9ec8: 0xa2220004
    ctx->pc = 0x1b9ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_1b9ecc:
    // 0x1b9ecc: 0x82220001
    ctx->pc = 0x1b9eccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1b9ed0:
    // 0x1b9ed0: 0x1440000d
label_1b9ed4:
    if (ctx->pc == 0x1B9ED4u) {
        ctx->pc = 0x1B9ED8u;
        goto label_1b9ed8;
    }
    ctx->pc = 0x1B9ED0u;
    {
        const bool branch_taken_0x1b9ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1b9ed0) {
            ctx->pc = 0x1B9F08u;
            goto label_1b9f08;
        }
    }
    ctx->pc = 0x1B9ED8u;
label_1b9ed8:
    // 0x1b9ed8: 0x82250002
    ctx->pc = 0x1b9ed8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1b9edc:
    // 0x1b9edc: 0x24040002
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9ee0:
    // 0x1b9ee0: 0x302d
    ctx->pc = 0x1b9ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9ee4:
    // 0x1b9ee4: 0x2627002c
    ctx->pc = 0x1b9ee4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 44));
label_1b9ee8:
    // 0x1b9ee8: 0x482d
    ctx->pc = 0x1b9ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9eec:
    // 0x1b9eec: 0xc06e4f4
label_1b9ef0:
    if (ctx->pc == 0x1B9EF0u) {
        ctx->pc = 0x1B9EF0u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EF4u;
        goto label_1b9ef4;
    }
    ctx->pc = 0x1B9EECu;
    SET_GPR_U32(ctx, 31, 0x1B9EF4u);
    ctx->pc = 0x1B9EF0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EF4u; }
    }
    if (ctx->pc != 0x1B9EF4u) { return; }
    ctx->pc = 0x1B9EF4u;
label_1b9ef4:
    // 0x1b9ef4: 0x24040004
    ctx->pc = 0x1b9ef4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_1b9ef8:
    // 0x1b9ef8: 0x2403003c
    ctx->pc = 0x1b9ef8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
label_1b9efc:
    // 0x1b9efc: 0xa6240008
    ctx->pc = 0x1b9efcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 4));
label_1b9f00:
    // 0x1b9f00: 0x10000003
label_1b9f04:
    if (ctx->pc == 0x1B9F04u) {
        ctx->pc = 0x1B9F04u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1B9F08u;
        goto label_1b9f08;
    }
    ctx->pc = 0x1B9F00u;
    {
        const bool branch_taken_0x1b9f00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9F04u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1b9f00) {
            ctx->pc = 0x1B9F10u;
            goto label_1b9f10;
        }
    }
    ctx->pc = 0x1B9F08u;
label_1b9f08:
    // 0x1b9f08: 0xc06e650
label_1b9f0c:
    if (ctx->pc == 0x1B9F0Cu) {
        ctx->pc = 0x1B9F10u;
        goto label_1b9f10;
    }
    ctx->pc = 0x1B9F08u;
    SET_GPR_U32(ctx, 31, 0x1B9F10u);
    ctx->pc = 0x1B9940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9940_0x1b9940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F10u; }
    }
    if (ctx->pc != 0x1B9F10u) { return; }
    ctx->pc = 0x1B9F10u;
label_1b9f10:
    // 0x1b9f10: 0x8623000a
    ctx->pc = 0x1b9f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_1b9f14:
    // 0x1b9f14: 0x2463ffff
    ctx->pc = 0x1b9f14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b9f18:
    // 0x1b9f18: 0xa623000a
    ctx->pc = 0x1b9f18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 3));
label_1b9f1c:
    // 0x1b9f1c: 0x31c3c
    ctx->pc = 0x1b9f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1b9f20:
    // 0x1b9f20: 0x31c3f
    ctx->pc = 0x1b9f20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1b9f24:
    // 0x1b9f24: 0x4610012
label_1b9f28:
    if (ctx->pc == 0x1B9F28u) {
        ctx->pc = 0x1B9F2Cu;
        goto label_1b9f2c;
    }
    ctx->pc = 0x1B9F24u;
    {
        const bool branch_taken_0x1b9f24 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b9f24) {
            ctx->pc = 0x1B9F70u;
            goto label_1b9f70;
        }
    }
    ctx->pc = 0x1B9F2Cu;
label_1b9f2c:
    // 0x1b9f2c: 0x2402003c
    ctx->pc = 0x1b9f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_1b9f30:
    // 0x1b9f30: 0x24040001
    ctx->pc = 0x1b9f30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1b9f34:
    // 0x1b9f34: 0xc06bb20
label_1b9f38:
    if (ctx->pc == 0x1B9F38u) {
        ctx->pc = 0x1B9F38u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1B9F3Cu;
        goto label_1b9f3c;
    }
    ctx->pc = 0x1B9F34u;
    SET_GPR_U32(ctx, 31, 0x1B9F3Cu);
    ctx->pc = 0x1B9F38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F3Cu; }
    }
    if (ctx->pc != 0x1B9F3Cu) { return; }
    ctx->pc = 0x1B9F3Cu;
label_1b9f3c:
    // 0x1b9f3c: 0x3043ffff
    ctx->pc = 0x1b9f3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
label_1b9f40:
    // 0x1b9f40: 0x24040002
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9f44:
    // 0x1b9f44: 0x24020003
    ctx->pc = 0x1b9f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1b9f48:
    // 0x1b9f48: 0x302d
    ctx->pc = 0x1b9f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f4c:
    // 0x1b9f4c: 0x62001a
    ctx->pc = 0x1b9f4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1b9f50:
    // 0x1b9f50: 0x2627002c
    ctx->pc = 0x1b9f50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 44));
label_1b9f54:
    // 0x1b9f54: 0x24080001
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b9f58:
    // 0x1b9f58: 0x482d
    ctx->pc = 0x1b9f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f5c:
    // 0x1b9f5c: 0x502d
    ctx->pc = 0x1b9f5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f60:
    // 0x1b9f60: 0x82220002
    ctx->pc = 0x1b9f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1b9f64:
    // 0x1b9f64: 0x1810
    ctx->pc = 0x1b9f64u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_1b9f68:
    // 0x1b9f68: 0xc06e4f4
label_1b9f6c:
    if (ctx->pc == 0x1B9F6Cu) {
        ctx->pc = 0x1B9F6Cu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B9F70u;
        goto label_1b9f70;
    }
    ctx->pc = 0x1B9F68u;
    SET_GPR_U32(ctx, 31, 0x1B9F70u);
    ctx->pc = 0x1B9F6Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F70u; }
    }
    if (ctx->pc != 0x1B9F70u) { return; }
    ctx->pc = 0x1B9F70u;
label_1b9f70:
    // 0x1b9f70: 0x86230008
    ctx->pc = 0x1b9f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1b9f74:
    // 0x1b9f74: 0x2463ffff
    ctx->pc = 0x1b9f74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b9f78:
    // 0x1b9f78: 0xa6230008
    ctx->pc = 0x1b9f78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
label_1b9f7c:
    // 0x1b9f7c: 0x31c3c
    ctx->pc = 0x1b9f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1b9f80:
    // 0x1b9f80: 0x31c3f
    ctx->pc = 0x1b9f80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1b9f84:
    // 0x1b9f84: 0x4610027
label_1b9f88:
    if (ctx->pc == 0x1B9F88u) {
        ctx->pc = 0x1B9F8Cu;
        goto label_1b9f8c;
    }
    ctx->pc = 0x1B9F84u;
    {
        const bool branch_taken_0x1b9f84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b9f84) {
            ctx->pc = 0x1BA024u;
            goto label_1ba024;
        }
    }
    ctx->pc = 0x1B9F8Cu;
label_1b9f8c:
    // 0x1b9f8c: 0x24020004
    ctx->pc = 0x1b9f8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1b9f90:
    // 0x1b9f90: 0xa6220008
    ctx->pc = 0x1b9f90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_1b9f94:
    // 0x1b9f94: 0x82220001
    ctx->pc = 0x1b9f94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1b9f98:
    // 0x1b9f98: 0x14400015
label_1b9f9c:
    if (ctx->pc == 0x1B9F9Cu) {
        ctx->pc = 0x1B9F9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        ctx->pc = 0x1B9FA0u;
        goto label_1b9fa0;
    }
    ctx->pc = 0x1B9F98u;
    {
        const bool branch_taken_0x1b9f98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B9F9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1b9f98) {
            ctx->pc = 0x1B9FF0u;
            goto label_1b9ff0;
        }
    }
    ctx->pc = 0x1B9FA0u;
label_1b9fa0:
    // 0x1b9fa0: 0x3c020023
    ctx->pc = 0x1b9fa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1b9fa4:
    // 0x1b9fa4: 0x101880
    ctx->pc = 0x1b9fa4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_1b9fa8:
    // 0x1b9fa8: 0x24424bf0
    ctx->pc = 0x1b9fa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19440));
label_1b9fac:
    // 0x1b9fac: 0x2624002c
    ctx->pc = 0x1b9facu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
label_1b9fb0:
    // 0x1b9fb0: 0x431021
    ctx->pc = 0x1b9fb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9fb4:
    // 0x1b9fb4: 0x27a6003c
    ctx->pc = 0x1b9fb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 60));
label_1b9fb8:
    // 0x1b9fb8: 0x8c450000
    ctx->pc = 0x1b9fb8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9fbc:
    // 0x1b9fbc: 0xc06e52c
label_1b9fc0:
    if (ctx->pc == 0x1B9FC0u) {
        ctx->pc = 0x1B9FC0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1B9FC4u;
        goto label_1b9fc4;
    }
    ctx->pc = 0x1B9FBCu;
    SET_GPR_U32(ctx, 31, 0x1B9FC4u);
    ctx->pc = 0x1B9FC0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 56));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FC4u; }
    }
    if (ctx->pc != 0x1B9FC4u) { return; }
    ctx->pc = 0x1B9FC4u;
label_1b9fc4:
    // 0x1b9fc4: 0x10400017
label_1b9fc8:
    if (ctx->pc == 0x1B9FC8u) {
        ctx->pc = 0x1B9FCCu;
        goto label_1b9fcc;
    }
    ctx->pc = 0x1B9FC4u;
    {
        const bool branch_taken_0x1b9fc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9fc4) {
            ctx->pc = 0x1BA024u;
            goto label_1ba024;
        }
    }
    ctx->pc = 0x1B9FCCu;
label_1b9fcc:
    // 0x1b9fcc: 0x82250002
    ctx->pc = 0x1b9fccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1b9fd0:
    // 0x1b9fd0: 0x24040002
    ctx->pc = 0x1b9fd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1b9fd4:
    // 0x1b9fd4: 0x8fa7003c
    ctx->pc = 0x1b9fd4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1b9fd8:
    // 0x1b9fd8: 0x302d
    ctx->pc = 0x1b9fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9fdc:
    // 0x1b9fdc: 0x8fa80038
    ctx->pc = 0x1b9fdcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b9fe0:
    // 0x1b9fe0: 0xc06b2d8
label_1b9fe4:
    if (ctx->pc == 0x1B9FE4u) {
        ctx->pc = 0x1B9FE4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1B9FE8u;
        goto label_1b9fe8;
    }
    ctx->pc = 0x1B9FE0u;
    SET_GPR_U32(ctx, 31, 0x1B9FE8u);
    ctx->pc = 0x1B9FE4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACB60_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FE8u; }
    }
    if (ctx->pc != 0x1B9FE8u) { return; }
    ctx->pc = 0x1B9FE8u;
label_1b9fe8:
    // 0x1b9fe8: 0x1000000e
label_1b9fec:
    if (ctx->pc == 0x1B9FECu) {
        ctx->pc = 0x1B9FF0u;
        goto label_1b9ff0;
    }
    ctx->pc = 0x1B9FE8u;
    {
        const bool branch_taken_0x1b9fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9fe8) {
            ctx->pc = 0x1BA024u;
            goto label_1ba024;
        }
    }
    ctx->pc = 0x1B9FF0u;
label_1b9ff0:
    // 0x1b9ff0: 0x101880
    ctx->pc = 0x1b9ff0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_1b9ff4:
    // 0x1b9ff4: 0x24424bf0
    ctx->pc = 0x1b9ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19440));
label_1b9ff8:
    // 0x1b9ff8: 0x2624002c
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
label_1b9ffc:
    // 0x1b9ffc: 0x431021
    ctx->pc = 0x1b9ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba000:
    // 0x1ba000: 0x27a6003c
    ctx->pc = 0x1ba000u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 60));
label_1ba004:
    // 0x1ba004: 0x8c450000
    ctx->pc = 0x1ba004u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba008:
    // 0x1ba008: 0xc06e52c
label_1ba00c:
    if (ctx->pc == 0x1BA00Cu) {
        ctx->pc = 0x1BA00Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1BA010u;
        goto label_1ba010;
    }
    ctx->pc = 0x1BA008u;
    SET_GPR_U32(ctx, 31, 0x1BA010u);
    ctx->pc = 0x1BA00Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 56));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA010u; }
    }
    if (ctx->pc != 0x1BA010u) { return; }
    ctx->pc = 0x1BA010u;
label_1ba010:
    // 0x1ba010: 0x10400004
label_1ba014:
    if (ctx->pc == 0x1BA014u) {
        ctx->pc = 0x1BA018u;
        goto label_1ba018;
    }
    ctx->pc = 0x1BA010u;
    {
        const bool branch_taken_0x1ba010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba010) {
            ctx->pc = 0x1BA024u;
            goto label_1ba024;
        }
    }
    ctx->pc = 0x1BA018u;
label_1ba018:
    // 0x1ba018: 0x8fa5003c
    ctx->pc = 0x1ba018u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ba01c:
    // 0x1ba01c: 0xc06b7f4
label_1ba020:
    if (ctx->pc == 0x1BA020u) {
        ctx->pc = 0x1BA020u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BA024u;
        goto label_1ba024;
    }
    ctx->pc = 0x1BA01Cu;
    SET_GPR_U32(ctx, 31, 0x1BA024u);
    ctx->pc = 0x1BA020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ADFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADFD0_0x1adfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA024u; }
    }
    if (ctx->pc != 0x1BA024u) { return; }
    ctx->pc = 0x1BA024u;
label_1ba024:
    // 0x1ba024: 0xdfbf0020
    ctx->pc = 0x1ba024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba028:
    // 0x1ba028: 0x7bb10010
    ctx->pc = 0x1ba028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba02c:
    // 0x1ba02c: 0x7bb00000
    ctx->pc = 0x1ba02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba030:
    // 0x1ba030: 0x3e00008
label_1ba034:
    if (ctx->pc == 0x1BA034u) {
        ctx->pc = 0x1BA034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1BA038u;
        goto label_1ba038;
    }
    ctx->pc = 0x1BA030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9970u: goto label_1b9970;
            case 0x1B9974u: goto label_1b9974;
            case 0x1B9978u: goto label_1b9978;
            case 0x1B997Cu: goto label_1b997c;
            case 0x1B9980u: goto label_1b9980;
            case 0x1B9984u: goto label_1b9984;
            case 0x1B9988u: goto label_1b9988;
            case 0x1B998Cu: goto label_1b998c;
            case 0x1B9990u: goto label_1b9990;
            case 0x1B9994u: goto label_1b9994;
            case 0x1B9998u: goto label_1b9998;
            case 0x1B999Cu: goto label_1b999c;
            case 0x1B99A0u: goto label_1b99a0;
            case 0x1B99A4u: goto label_1b99a4;
            case 0x1B99A8u: goto label_1b99a8;
            case 0x1B99ACu: goto label_1b99ac;
            case 0x1B99B0u: goto label_1b99b0;
            case 0x1B99B4u: goto label_1b99b4;
            case 0x1B99B8u: goto label_1b99b8;
            case 0x1B99BCu: goto label_1b99bc;
            case 0x1B99C0u: goto label_1b99c0;
            case 0x1B99C4u: goto label_1b99c4;
            case 0x1B99C8u: goto label_1b99c8;
            case 0x1B99CCu: goto label_1b99cc;
            case 0x1B99D0u: goto label_1b99d0;
            case 0x1B99D4u: goto label_1b99d4;
            case 0x1B99D8u: goto label_1b99d8;
            case 0x1B99DCu: goto label_1b99dc;
            case 0x1B99E0u: goto label_1b99e0;
            case 0x1B99E4u: goto label_1b99e4;
            case 0x1B99E8u: goto label_1b99e8;
            case 0x1B99ECu: goto label_1b99ec;
            case 0x1B99F0u: goto label_1b99f0;
            case 0x1B99F4u: goto label_1b99f4;
            case 0x1B99F8u: goto label_1b99f8;
            case 0x1B99FCu: goto label_1b99fc;
            case 0x1B9A00u: goto label_1b9a00;
            case 0x1B9A04u: goto label_1b9a04;
            case 0x1B9A08u: goto label_1b9a08;
            case 0x1B9A0Cu: goto label_1b9a0c;
            case 0x1B9A10u: goto label_1b9a10;
            case 0x1B9A14u: goto label_1b9a14;
            case 0x1B9A18u: goto label_1b9a18;
            case 0x1B9A1Cu: goto label_1b9a1c;
            case 0x1B9A20u: goto label_1b9a20;
            case 0x1B9A24u: goto label_1b9a24;
            case 0x1B9A28u: goto label_1b9a28;
            case 0x1B9A2Cu: goto label_1b9a2c;
            case 0x1B9A30u: goto label_1b9a30;
            case 0x1B9A34u: goto label_1b9a34;
            case 0x1B9A38u: goto label_1b9a38;
            case 0x1B9A3Cu: goto label_1b9a3c;
            case 0x1B9A40u: goto label_1b9a40;
            case 0x1B9A44u: goto label_1b9a44;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A4Cu: goto label_1b9a4c;
            case 0x1B9A50u: goto label_1b9a50;
            case 0x1B9A54u: goto label_1b9a54;
            case 0x1B9A58u: goto label_1b9a58;
            case 0x1B9A5Cu: goto label_1b9a5c;
            case 0x1B9A60u: goto label_1b9a60;
            case 0x1B9A64u: goto label_1b9a64;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9A6Cu: goto label_1b9a6c;
            case 0x1B9A70u: goto label_1b9a70;
            case 0x1B9A74u: goto label_1b9a74;
            case 0x1B9A78u: goto label_1b9a78;
            case 0x1B9A7Cu: goto label_1b9a7c;
            case 0x1B9A80u: goto label_1b9a80;
            case 0x1B9A84u: goto label_1b9a84;
            case 0x1B9A88u: goto label_1b9a88;
            case 0x1B9A8Cu: goto label_1b9a8c;
            case 0x1B9A90u: goto label_1b9a90;
            case 0x1B9A94u: goto label_1b9a94;
            case 0x1B9A98u: goto label_1b9a98;
            case 0x1B9A9Cu: goto label_1b9a9c;
            case 0x1B9AA0u: goto label_1b9aa0;
            case 0x1B9AA4u: goto label_1b9aa4;
            case 0x1B9AA8u: goto label_1b9aa8;
            case 0x1B9AACu: goto label_1b9aac;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AB4u: goto label_1b9ab4;
            case 0x1B9AB8u: goto label_1b9ab8;
            case 0x1B9ABCu: goto label_1b9abc;
            case 0x1B9AC0u: goto label_1b9ac0;
            case 0x1B9AC4u: goto label_1b9ac4;
            case 0x1B9AC8u: goto label_1b9ac8;
            case 0x1B9ACCu: goto label_1b9acc;
            case 0x1B9AD0u: goto label_1b9ad0;
            case 0x1B9AD4u: goto label_1b9ad4;
            case 0x1B9AD8u: goto label_1b9ad8;
            case 0x1B9ADCu: goto label_1b9adc;
            case 0x1B9AE0u: goto label_1b9ae0;
            case 0x1B9AE4u: goto label_1b9ae4;
            case 0x1B9AE8u: goto label_1b9ae8;
            case 0x1B9AECu: goto label_1b9aec;
            case 0x1B9AF0u: goto label_1b9af0;
            case 0x1B9AF4u: goto label_1b9af4;
            case 0x1B9AF8u: goto label_1b9af8;
            case 0x1B9AFCu: goto label_1b9afc;
            case 0x1B9B00u: goto label_1b9b00;
            case 0x1B9B04u: goto label_1b9b04;
            case 0x1B9B08u: goto label_1b9b08;
            case 0x1B9B0Cu: goto label_1b9b0c;
            case 0x1B9B10u: goto label_1b9b10;
            case 0x1B9B14u: goto label_1b9b14;
            case 0x1B9B18u: goto label_1b9b18;
            case 0x1B9B1Cu: goto label_1b9b1c;
            case 0x1B9B20u: goto label_1b9b20;
            case 0x1B9B24u: goto label_1b9b24;
            case 0x1B9B28u: goto label_1b9b28;
            case 0x1B9B2Cu: goto label_1b9b2c;
            case 0x1B9B30u: goto label_1b9b30;
            case 0x1B9B34u: goto label_1b9b34;
            case 0x1B9B38u: goto label_1b9b38;
            case 0x1B9B3Cu: goto label_1b9b3c;
            case 0x1B9B40u: goto label_1b9b40;
            case 0x1B9B44u: goto label_1b9b44;
            case 0x1B9B48u: goto label_1b9b48;
            case 0x1B9B4Cu: goto label_1b9b4c;
            case 0x1B9B50u: goto label_1b9b50;
            case 0x1B9B54u: goto label_1b9b54;
            case 0x1B9B58u: goto label_1b9b58;
            case 0x1B9B5Cu: goto label_1b9b5c;
            case 0x1B9B60u: goto label_1b9b60;
            case 0x1B9B64u: goto label_1b9b64;
            case 0x1B9B68u: goto label_1b9b68;
            case 0x1B9B6Cu: goto label_1b9b6c;
            case 0x1B9B70u: goto label_1b9b70;
            case 0x1B9B74u: goto label_1b9b74;
            case 0x1B9B78u: goto label_1b9b78;
            case 0x1B9B7Cu: goto label_1b9b7c;
            case 0x1B9B80u: goto label_1b9b80;
            case 0x1B9B84u: goto label_1b9b84;
            case 0x1B9B88u: goto label_1b9b88;
            case 0x1B9B8Cu: goto label_1b9b8c;
            case 0x1B9B90u: goto label_1b9b90;
            case 0x1B9B94u: goto label_1b9b94;
            case 0x1B9B98u: goto label_1b9b98;
            case 0x1B9B9Cu: goto label_1b9b9c;
            case 0x1B9BA0u: goto label_1b9ba0;
            case 0x1B9BA4u: goto label_1b9ba4;
            case 0x1B9BA8u: goto label_1b9ba8;
            case 0x1B9BACu: goto label_1b9bac;
            case 0x1B9BB0u: goto label_1b9bb0;
            case 0x1B9BB4u: goto label_1b9bb4;
            case 0x1B9BB8u: goto label_1b9bb8;
            case 0x1B9BBCu: goto label_1b9bbc;
            case 0x1B9BC0u: goto label_1b9bc0;
            case 0x1B9BC4u: goto label_1b9bc4;
            case 0x1B9BC8u: goto label_1b9bc8;
            case 0x1B9BCCu: goto label_1b9bcc;
            case 0x1B9BD0u: goto label_1b9bd0;
            case 0x1B9BD4u: goto label_1b9bd4;
            case 0x1B9BD8u: goto label_1b9bd8;
            case 0x1B9BDCu: goto label_1b9bdc;
            case 0x1B9BE0u: goto label_1b9be0;
            case 0x1B9BE4u: goto label_1b9be4;
            case 0x1B9BE8u: goto label_1b9be8;
            case 0x1B9BECu: goto label_1b9bec;
            case 0x1B9BF0u: goto label_1b9bf0;
            case 0x1B9BF4u: goto label_1b9bf4;
            case 0x1B9BF8u: goto label_1b9bf8;
            case 0x1B9BFCu: goto label_1b9bfc;
            case 0x1B9C00u: goto label_1b9c00;
            case 0x1B9C04u: goto label_1b9c04;
            case 0x1B9C08u: goto label_1b9c08;
            case 0x1B9C0Cu: goto label_1b9c0c;
            case 0x1B9C10u: goto label_1b9c10;
            case 0x1B9C14u: goto label_1b9c14;
            case 0x1B9C18u: goto label_1b9c18;
            case 0x1B9C1Cu: goto label_1b9c1c;
            case 0x1B9C20u: goto label_1b9c20;
            case 0x1B9C24u: goto label_1b9c24;
            case 0x1B9C28u: goto label_1b9c28;
            case 0x1B9C2Cu: goto label_1b9c2c;
            case 0x1B9C30u: goto label_1b9c30;
            case 0x1B9C34u: goto label_1b9c34;
            case 0x1B9C38u: goto label_1b9c38;
            case 0x1B9C3Cu: goto label_1b9c3c;
            case 0x1B9C40u: goto label_1b9c40;
            case 0x1B9C44u: goto label_1b9c44;
            case 0x1B9C48u: goto label_1b9c48;
            case 0x1B9C4Cu: goto label_1b9c4c;
            case 0x1B9C50u: goto label_1b9c50;
            case 0x1B9C54u: goto label_1b9c54;
            case 0x1B9C58u: goto label_1b9c58;
            case 0x1B9C5Cu: goto label_1b9c5c;
            case 0x1B9C60u: goto label_1b9c60;
            case 0x1B9C64u: goto label_1b9c64;
            case 0x1B9C68u: goto label_1b9c68;
            case 0x1B9C6Cu: goto label_1b9c6c;
            case 0x1B9C70u: goto label_1b9c70;
            case 0x1B9C74u: goto label_1b9c74;
            case 0x1B9C78u: goto label_1b9c78;
            case 0x1B9C7Cu: goto label_1b9c7c;
            case 0x1B9C80u: goto label_1b9c80;
            case 0x1B9C84u: goto label_1b9c84;
            case 0x1B9C88u: goto label_1b9c88;
            case 0x1B9C8Cu: goto label_1b9c8c;
            case 0x1B9C90u: goto label_1b9c90;
            case 0x1B9C94u: goto label_1b9c94;
            case 0x1B9C98u: goto label_1b9c98;
            case 0x1B9C9Cu: goto label_1b9c9c;
            case 0x1B9CA0u: goto label_1b9ca0;
            case 0x1B9CA4u: goto label_1b9ca4;
            case 0x1B9CA8u: goto label_1b9ca8;
            case 0x1B9CACu: goto label_1b9cac;
            case 0x1B9CB0u: goto label_1b9cb0;
            case 0x1B9CB4u: goto label_1b9cb4;
            case 0x1B9CB8u: goto label_1b9cb8;
            case 0x1B9CBCu: goto label_1b9cbc;
            case 0x1B9CC0u: goto label_1b9cc0;
            case 0x1B9CC4u: goto label_1b9cc4;
            case 0x1B9CC8u: goto label_1b9cc8;
            case 0x1B9CCCu: goto label_1b9ccc;
            case 0x1B9CD0u: goto label_1b9cd0;
            case 0x1B9CD4u: goto label_1b9cd4;
            case 0x1B9CD8u: goto label_1b9cd8;
            case 0x1B9CDCu: goto label_1b9cdc;
            case 0x1B9CE0u: goto label_1b9ce0;
            case 0x1B9CE4u: goto label_1b9ce4;
            case 0x1B9CE8u: goto label_1b9ce8;
            case 0x1B9CECu: goto label_1b9cec;
            case 0x1B9CF0u: goto label_1b9cf0;
            case 0x1B9CF4u: goto label_1b9cf4;
            case 0x1B9CF8u: goto label_1b9cf8;
            case 0x1B9CFCu: goto label_1b9cfc;
            case 0x1B9D00u: goto label_1b9d00;
            case 0x1B9D04u: goto label_1b9d04;
            case 0x1B9D08u: goto label_1b9d08;
            case 0x1B9D0Cu: goto label_1b9d0c;
            case 0x1B9D10u: goto label_1b9d10;
            case 0x1B9D14u: goto label_1b9d14;
            case 0x1B9D18u: goto label_1b9d18;
            case 0x1B9D1Cu: goto label_1b9d1c;
            case 0x1B9D20u: goto label_1b9d20;
            case 0x1B9D24u: goto label_1b9d24;
            case 0x1B9D28u: goto label_1b9d28;
            case 0x1B9D2Cu: goto label_1b9d2c;
            case 0x1B9D30u: goto label_1b9d30;
            case 0x1B9D34u: goto label_1b9d34;
            case 0x1B9D38u: goto label_1b9d38;
            case 0x1B9D3Cu: goto label_1b9d3c;
            case 0x1B9D40u: goto label_1b9d40;
            case 0x1B9D44u: goto label_1b9d44;
            case 0x1B9D48u: goto label_1b9d48;
            case 0x1B9D4Cu: goto label_1b9d4c;
            case 0x1B9D50u: goto label_1b9d50;
            case 0x1B9D54u: goto label_1b9d54;
            case 0x1B9D58u: goto label_1b9d58;
            case 0x1B9D5Cu: goto label_1b9d5c;
            case 0x1B9D60u: goto label_1b9d60;
            case 0x1B9D64u: goto label_1b9d64;
            case 0x1B9D68u: goto label_1b9d68;
            case 0x1B9D6Cu: goto label_1b9d6c;
            case 0x1B9D70u: goto label_1b9d70;
            case 0x1B9D74u: goto label_1b9d74;
            case 0x1B9D78u: goto label_1b9d78;
            case 0x1B9D7Cu: goto label_1b9d7c;
            case 0x1B9D80u: goto label_1b9d80;
            case 0x1B9D84u: goto label_1b9d84;
            case 0x1B9D88u: goto label_1b9d88;
            case 0x1B9D8Cu: goto label_1b9d8c;
            case 0x1B9D90u: goto label_1b9d90;
            case 0x1B9D94u: goto label_1b9d94;
            case 0x1B9D98u: goto label_1b9d98;
            case 0x1B9D9Cu: goto label_1b9d9c;
            case 0x1B9DA0u: goto label_1b9da0;
            case 0x1B9DA4u: goto label_1b9da4;
            case 0x1B9DA8u: goto label_1b9da8;
            case 0x1B9DACu: goto label_1b9dac;
            case 0x1B9DB0u: goto label_1b9db0;
            case 0x1B9DB4u: goto label_1b9db4;
            case 0x1B9DB8u: goto label_1b9db8;
            case 0x1B9DBCu: goto label_1b9dbc;
            case 0x1B9DC0u: goto label_1b9dc0;
            case 0x1B9DC4u: goto label_1b9dc4;
            case 0x1B9DC8u: goto label_1b9dc8;
            case 0x1B9DCCu: goto label_1b9dcc;
            case 0x1B9DD0u: goto label_1b9dd0;
            case 0x1B9DD4u: goto label_1b9dd4;
            case 0x1B9DD8u: goto label_1b9dd8;
            case 0x1B9DDCu: goto label_1b9ddc;
            case 0x1B9DE0u: goto label_1b9de0;
            case 0x1B9DE4u: goto label_1b9de4;
            case 0x1B9DE8u: goto label_1b9de8;
            case 0x1B9DECu: goto label_1b9dec;
            case 0x1B9DF0u: goto label_1b9df0;
            case 0x1B9DF4u: goto label_1b9df4;
            case 0x1B9DF8u: goto label_1b9df8;
            case 0x1B9DFCu: goto label_1b9dfc;
            case 0x1B9E00u: goto label_1b9e00;
            case 0x1B9E04u: goto label_1b9e04;
            case 0x1B9E08u: goto label_1b9e08;
            case 0x1B9E0Cu: goto label_1b9e0c;
            case 0x1B9E10u: goto label_1b9e10;
            case 0x1B9E14u: goto label_1b9e14;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9E1Cu: goto label_1b9e1c;
            case 0x1B9E20u: goto label_1b9e20;
            case 0x1B9E24u: goto label_1b9e24;
            case 0x1B9E28u: goto label_1b9e28;
            case 0x1B9E2Cu: goto label_1b9e2c;
            case 0x1B9E30u: goto label_1b9e30;
            case 0x1B9E34u: goto label_1b9e34;
            case 0x1B9E38u: goto label_1b9e38;
            case 0x1B9E3Cu: goto label_1b9e3c;
            case 0x1B9E40u: goto label_1b9e40;
            case 0x1B9E44u: goto label_1b9e44;
            case 0x1B9E48u: goto label_1b9e48;
            case 0x1B9E4Cu: goto label_1b9e4c;
            case 0x1B9E50u: goto label_1b9e50;
            case 0x1B9E54u: goto label_1b9e54;
            case 0x1B9E58u: goto label_1b9e58;
            case 0x1B9E5Cu: goto label_1b9e5c;
            case 0x1B9E60u: goto label_1b9e60;
            case 0x1B9E64u: goto label_1b9e64;
            case 0x1B9E68u: goto label_1b9e68;
            case 0x1B9E6Cu: goto label_1b9e6c;
            case 0x1B9E70u: goto label_1b9e70;
            case 0x1B9E74u: goto label_1b9e74;
            case 0x1B9E78u: goto label_1b9e78;
            case 0x1B9E7Cu: goto label_1b9e7c;
            case 0x1B9E80u: goto label_1b9e80;
            case 0x1B9E84u: goto label_1b9e84;
            case 0x1B9E88u: goto label_1b9e88;
            case 0x1B9E8Cu: goto label_1b9e8c;
            case 0x1B9E90u: goto label_1b9e90;
            case 0x1B9E94u: goto label_1b9e94;
            case 0x1B9E98u: goto label_1b9e98;
            case 0x1B9E9Cu: goto label_1b9e9c;
            case 0x1B9EA0u: goto label_1b9ea0;
            case 0x1B9EA4u: goto label_1b9ea4;
            case 0x1B9EA8u: goto label_1b9ea8;
            case 0x1B9EACu: goto label_1b9eac;
            case 0x1B9EB0u: goto label_1b9eb0;
            case 0x1B9EB4u: goto label_1b9eb4;
            case 0x1B9EB8u: goto label_1b9eb8;
            case 0x1B9EBCu: goto label_1b9ebc;
            case 0x1B9EC0u: goto label_1b9ec0;
            case 0x1B9EC4u: goto label_1b9ec4;
            case 0x1B9EC8u: goto label_1b9ec8;
            case 0x1B9ECCu: goto label_1b9ecc;
            case 0x1B9ED0u: goto label_1b9ed0;
            case 0x1B9ED4u: goto label_1b9ed4;
            case 0x1B9ED8u: goto label_1b9ed8;
            case 0x1B9EDCu: goto label_1b9edc;
            case 0x1B9EE0u: goto label_1b9ee0;
            case 0x1B9EE4u: goto label_1b9ee4;
            case 0x1B9EE8u: goto label_1b9ee8;
            case 0x1B9EECu: goto label_1b9eec;
            case 0x1B9EF0u: goto label_1b9ef0;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9EF8u: goto label_1b9ef8;
            case 0x1B9EFCu: goto label_1b9efc;
            case 0x1B9F00u: goto label_1b9f00;
            case 0x1B9F04u: goto label_1b9f04;
            case 0x1B9F08u: goto label_1b9f08;
            case 0x1B9F0Cu: goto label_1b9f0c;
            case 0x1B9F10u: goto label_1b9f10;
            case 0x1B9F14u: goto label_1b9f14;
            case 0x1B9F18u: goto label_1b9f18;
            case 0x1B9F1Cu: goto label_1b9f1c;
            case 0x1B9F20u: goto label_1b9f20;
            case 0x1B9F24u: goto label_1b9f24;
            case 0x1B9F28u: goto label_1b9f28;
            case 0x1B9F2Cu: goto label_1b9f2c;
            case 0x1B9F30u: goto label_1b9f30;
            case 0x1B9F34u: goto label_1b9f34;
            case 0x1B9F38u: goto label_1b9f38;
            case 0x1B9F3Cu: goto label_1b9f3c;
            case 0x1B9F40u: goto label_1b9f40;
            case 0x1B9F44u: goto label_1b9f44;
            case 0x1B9F48u: goto label_1b9f48;
            case 0x1B9F4Cu: goto label_1b9f4c;
            case 0x1B9F50u: goto label_1b9f50;
            case 0x1B9F54u: goto label_1b9f54;
            case 0x1B9F58u: goto label_1b9f58;
            case 0x1B9F5Cu: goto label_1b9f5c;
            case 0x1B9F60u: goto label_1b9f60;
            case 0x1B9F64u: goto label_1b9f64;
            case 0x1B9F68u: goto label_1b9f68;
            case 0x1B9F6Cu: goto label_1b9f6c;
            case 0x1B9F70u: goto label_1b9f70;
            case 0x1B9F74u: goto label_1b9f74;
            case 0x1B9F78u: goto label_1b9f78;
            case 0x1B9F7Cu: goto label_1b9f7c;
            case 0x1B9F80u: goto label_1b9f80;
            case 0x1B9F84u: goto label_1b9f84;
            case 0x1B9F88u: goto label_1b9f88;
            case 0x1B9F8Cu: goto label_1b9f8c;
            case 0x1B9F90u: goto label_1b9f90;
            case 0x1B9F94u: goto label_1b9f94;
            case 0x1B9F98u: goto label_1b9f98;
            case 0x1B9F9Cu: goto label_1b9f9c;
            case 0x1B9FA0u: goto label_1b9fa0;
            case 0x1B9FA4u: goto label_1b9fa4;
            case 0x1B9FA8u: goto label_1b9fa8;
            case 0x1B9FACu: goto label_1b9fac;
            case 0x1B9FB0u: goto label_1b9fb0;
            case 0x1B9FB4u: goto label_1b9fb4;
            case 0x1B9FB8u: goto label_1b9fb8;
            case 0x1B9FBCu: goto label_1b9fbc;
            case 0x1B9FC0u: goto label_1b9fc0;
            case 0x1B9FC4u: goto label_1b9fc4;
            case 0x1B9FC8u: goto label_1b9fc8;
            case 0x1B9FCCu: goto label_1b9fcc;
            case 0x1B9FD0u: goto label_1b9fd0;
            case 0x1B9FD4u: goto label_1b9fd4;
            case 0x1B9FD8u: goto label_1b9fd8;
            case 0x1B9FDCu: goto label_1b9fdc;
            case 0x1B9FE0u: goto label_1b9fe0;
            case 0x1B9FE4u: goto label_1b9fe4;
            case 0x1B9FE8u: goto label_1b9fe8;
            case 0x1B9FECu: goto label_1b9fec;
            case 0x1B9FF0u: goto label_1b9ff0;
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1B9FF8u: goto label_1b9ff8;
            case 0x1B9FFCu: goto label_1b9ffc;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA004u: goto label_1ba004;
            case 0x1BA008u: goto label_1ba008;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA010u: goto label_1ba010;
            case 0x1BA014u: goto label_1ba014;
            case 0x1BA018u: goto label_1ba018;
            case 0x1BA01Cu: goto label_1ba01c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA024u: goto label_1ba024;
            case 0x1BA028u: goto label_1ba028;
            case 0x1BA02Cu: goto label_1ba02c;
            case 0x1BA030u: goto label_1ba030;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA038u: goto label_1ba038;
            case 0x1BA03Cu: goto label_1ba03c;
            case 0x1BA040u: goto label_1ba040;
            case 0x1BA044u: goto label_1ba044;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA04Cu: goto label_1ba04c;
            case 0x1BA050u: goto label_1ba050;
            case 0x1BA054u: goto label_1ba054;
            case 0x1BA058u: goto label_1ba058;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA060u: goto label_1ba060;
            case 0x1BA064u: goto label_1ba064;
            case 0x1BA068u: goto label_1ba068;
            case 0x1BA06Cu: goto label_1ba06c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA074u: goto label_1ba074;
            case 0x1BA078u: goto label_1ba078;
            case 0x1BA07Cu: goto label_1ba07c;
            case 0x1BA080u: goto label_1ba080;
            case 0x1BA084u: goto label_1ba084;
            case 0x1BA088u: goto label_1ba088;
            case 0x1BA08Cu: goto label_1ba08c;
            case 0x1BA090u: goto label_1ba090;
            case 0x1BA094u: goto label_1ba094;
            case 0x1BA098u: goto label_1ba098;
            case 0x1BA09Cu: goto label_1ba09c;
            case 0x1BA0A0u: goto label_1ba0a0;
            case 0x1BA0A4u: goto label_1ba0a4;
            case 0x1BA0A8u: goto label_1ba0a8;
            case 0x1BA0ACu: goto label_1ba0ac;
            case 0x1BA0B0u: goto label_1ba0b0;
            case 0x1BA0B4u: goto label_1ba0b4;
            case 0x1BA0B8u: goto label_1ba0b8;
            case 0x1BA0BCu: goto label_1ba0bc;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0C4u: goto label_1ba0c4;
            case 0x1BA0C8u: goto label_1ba0c8;
            case 0x1BA0CCu: goto label_1ba0cc;
            case 0x1BA0D0u: goto label_1ba0d0;
            case 0x1BA0D4u: goto label_1ba0d4;
            case 0x1BA0D8u: goto label_1ba0d8;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0E0u: goto label_1ba0e0;
            case 0x1BA0E4u: goto label_1ba0e4;
            case 0x1BA0E8u: goto label_1ba0e8;
            case 0x1BA0ECu: goto label_1ba0ec;
            case 0x1BA0F0u: goto label_1ba0f0;
            case 0x1BA0F4u: goto label_1ba0f4;
            case 0x1BA0F8u: goto label_1ba0f8;
            case 0x1BA0FCu: goto label_1ba0fc;
            case 0x1BA100u: goto label_1ba100;
            case 0x1BA104u: goto label_1ba104;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA10Cu: goto label_1ba10c;
            case 0x1BA110u: goto label_1ba110;
            case 0x1BA114u: goto label_1ba114;
            case 0x1BA118u: goto label_1ba118;
            case 0x1BA11Cu: goto label_1ba11c;
            case 0x1BA120u: goto label_1ba120;
            case 0x1BA124u: goto label_1ba124;
            case 0x1BA128u: goto label_1ba128;
            case 0x1BA12Cu: goto label_1ba12c;
            case 0x1BA130u: goto label_1ba130;
            case 0x1BA134u: goto label_1ba134;
            case 0x1BA138u: goto label_1ba138;
            case 0x1BA13Cu: goto label_1ba13c;
            case 0x1BA140u: goto label_1ba140;
            case 0x1BA144u: goto label_1ba144;
            case 0x1BA148u: goto label_1ba148;
            case 0x1BA14Cu: goto label_1ba14c;
            case 0x1BA150u: goto label_1ba150;
            case 0x1BA154u: goto label_1ba154;
            case 0x1BA158u: goto label_1ba158;
            case 0x1BA15Cu: goto label_1ba15c;
            case 0x1BA160u: goto label_1ba160;
            case 0x1BA164u: goto label_1ba164;
            case 0x1BA168u: goto label_1ba168;
            case 0x1BA16Cu: goto label_1ba16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA038u;
label_1ba038:
    // 0x1ba038: 0x0
    ctx->pc = 0x1ba038u;
    // NOP
label_1ba03c:
    // 0x1ba03c: 0x0
    ctx->pc = 0x1ba03cu;
    // NOP
label_1ba040:
    // 0x1ba040: 0x27bdffb0
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ba044:
    // 0x1ba044: 0x3c010023
    ctx->pc = 0x1ba044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
label_1ba048:
    // 0x1ba048: 0xffbf0020
    ctx->pc = 0x1ba048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ba04c:
    // 0x1ba04c: 0x7fb10010
    ctx->pc = 0x1ba04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ba050:
    // 0x1ba050: 0x7fb00000
    ctx->pc = 0x1ba050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ba054:
    // 0x1ba054: 0x80882d
    ctx->pc = 0x1ba054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ba058:
    // 0x1ba058: 0x8c840024
    ctx->pc = 0x1ba058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1ba05c:
    // 0x1ba05c: 0x80304c11
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 19473)));
label_1ba060:
    // 0x1ba060: 0xc06e65c
label_1ba064:
    if (ctx->pc == 0x1BA064u) {
        ctx->pc = 0x1BA064u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1BA068u;
        goto label_1ba068;
    }
    ctx->pc = 0x1BA060u;
    SET_GPR_U32(ctx, 31, 0x1BA068u);
    ctx->pc = 0x1BA064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 56));
    ctx->pc = 0x1B9970u;
    goto label_1b9970;
    ctx->pc = 0x1BA068u;
label_1ba068:
    // 0x1ba068: 0x82230004
    ctx->pc = 0x1ba068u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_1ba06c:
    // 0x1ba06c: 0x24040002
    ctx->pc = 0x1ba06cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1ba070:
    // 0x1ba070: 0x10640037
label_1ba074:
    if (ctx->pc == 0x1BA074u) {
        ctx->pc = 0x1BA074u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BA078u;
        goto label_1ba078;
    }
    ctx->pc = 0x1BA070u;
    {
        const bool branch_taken_0x1ba070 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1BA074u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ba070) {
            ctx->pc = 0x1BA150u;
            goto label_1ba150;
        }
    }
    ctx->pc = 0x1BA078u;
label_1ba078:
    // 0x1ba078: 0x1068001a
label_1ba07c:
    if (ctx->pc == 0x1BA07Cu) {
        ctx->pc = 0x1BA080u;
        goto label_1ba080;
    }
    ctx->pc = 0x1BA078u;
    {
        const bool branch_taken_0x1ba078 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 8));
        if (branch_taken_0x1ba078) {
            ctx->pc = 0x1BA0E4u;
            goto label_1ba0e4;
        }
    }
    ctx->pc = 0x1BA080u;
label_1ba080:
    // 0x1ba080: 0x10600003
label_1ba084:
    if (ctx->pc == 0x1BA084u) {
        ctx->pc = 0x1BA088u;
        goto label_1ba088;
    }
    ctx->pc = 0x1BA080u;
    {
        const bool branch_taken_0x1ba080 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba080) {
            ctx->pc = 0x1BA090u;
            goto label_1ba090;
        }
    }
    ctx->pc = 0x1BA088u;
label_1ba088:
    // 0x1ba088: 0x10000032
label_1ba08c:
    if (ctx->pc == 0x1BA08Cu) {
        ctx->pc = 0x1BA08Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1BA090u;
        goto label_1ba090;
    }
    ctx->pc = 0x1BA088u;
    {
        const bool branch_taken_0x1ba088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA08Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1ba088) {
            ctx->pc = 0x1BA154u;
            goto label_1ba154;
        }
    }
    ctx->pc = 0x1BA090u;
label_1ba090:
    // 0x1ba090: 0x24630001
    ctx->pc = 0x1ba090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1ba094:
    // 0x1ba094: 0x10400009
label_1ba098:
    if (ctx->pc == 0x1BA098u) {
        ctx->pc = 0x1BA098u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1BA09Cu;
        goto label_1ba09c;
    }
    ctx->pc = 0x1BA094u;
    {
        const bool branch_taken_0x1ba094 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA098u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ba094) {
            ctx->pc = 0x1BA0BCu;
            goto label_1ba0bc;
        }
    }
    ctx->pc = 0x1BA09Cu;
label_1ba09c:
    // 0x1ba09c: 0x82250002
    ctx->pc = 0x1ba09cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1ba0a0:
    // 0x1ba0a0: 0x302d
    ctx->pc = 0x1ba0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba0a4:
    // 0x1ba0a4: 0x27a70038
    ctx->pc = 0x1ba0a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 56));
label_1ba0a8:
    // 0x1ba0a8: 0x482d
    ctx->pc = 0x1ba0a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba0ac:
    // 0x1ba0ac: 0xc06e4f4
label_1ba0b0:
    if (ctx->pc == 0x1BA0B0u) {
        ctx->pc = 0x1BA0B0u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0B4u;
        goto label_1ba0b4;
    }
    ctx->pc = 0x1BA0ACu;
    SET_GPR_U32(ctx, 31, 0x1BA0B4u);
    ctx->pc = 0x1BA0B0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0B4u; }
    }
    if (ctx->pc != 0x1BA0B4u) { return; }
    ctx->pc = 0x1BA0B4u;
label_1ba0b4:
    // 0x1ba0b4: 0x1000000a
label_1ba0b8:
    if (ctx->pc == 0x1BA0B8u) {
        ctx->pc = 0x1BA0B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1BA0BCu;
        goto label_1ba0bc;
    }
    ctx->pc = 0x1BA0B4u;
    {
        const bool branch_taken_0x1ba0b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BA0B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1ba0b4) {
            ctx->pc = 0x1BA0E0u;
            goto label_1ba0e0;
        }
    }
    ctx->pc = 0x1BA0BCu;
label_1ba0bc:
    // 0x1ba0bc: 0x82250002
    ctx->pc = 0x1ba0bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1ba0c0:
    // 0x1ba0c0: 0x302d
    ctx->pc = 0x1ba0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba0c4:
    // 0x1ba0c4: 0x382d
    ctx->pc = 0x1ba0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba0c8:
    // 0x1ba0c8: 0x482d
    ctx->pc = 0x1ba0c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba0cc:
    // 0x1ba0cc: 0xc06e4f4
label_1ba0d0:
    if (ctx->pc == 0x1BA0D0u) {
        ctx->pc = 0x1BA0D0u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0D4u;
        goto label_1ba0d4;
    }
    ctx->pc = 0x1BA0CCu;
    SET_GPR_U32(ctx, 31, 0x1BA0D4u);
    ctx->pc = 0x1BA0D0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0D4u; }
    }
    if (ctx->pc != 0x1BA0D4u) { return; }
    ctx->pc = 0x1BA0D4u;
label_1ba0d4:
    // 0x1ba0d4: 0x24030002
    ctx->pc = 0x1ba0d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1ba0d8:
    // 0x1ba0d8: 0xa2230004
    ctx->pc = 0x1ba0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 3));
label_1ba0dc:
    // 0x1ba0dc: 0x24030004
    ctx->pc = 0x1ba0dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1ba0e0:
    // 0x1ba0e0: 0xa6230008
    ctx->pc = 0x1ba0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
label_1ba0e4:
    // 0x1ba0e4: 0x86230008
    ctx->pc = 0x1ba0e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1ba0e8:
    // 0x1ba0e8: 0x2463ffff
    ctx->pc = 0x1ba0e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ba0ec:
    // 0x1ba0ec: 0xa6230008
    ctx->pc = 0x1ba0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
label_1ba0f0:
    // 0x1ba0f0: 0x31c3c
    ctx->pc = 0x1ba0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1ba0f4:
    // 0x1ba0f4: 0x31c3f
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1ba0f8:
    // 0x1ba0f8: 0x4610015
label_1ba0fc:
    if (ctx->pc == 0x1BA0FCu) {
        ctx->pc = 0x1BA100u;
        goto label_1ba100;
    }
    ctx->pc = 0x1BA0F8u;
    {
        const bool branch_taken_0x1ba0f8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ba0f8) {
            ctx->pc = 0x1BA150u;
            goto label_1ba150;
        }
    }
    ctx->pc = 0x1BA100u;
label_1ba100:
    // 0x1ba100: 0x24020004
    ctx->pc = 0x1ba100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1ba104:
    // 0x1ba104: 0x101880
    ctx->pc = 0x1ba104u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_1ba108:
    // 0x1ba108: 0xa6220008
    ctx->pc = 0x1ba108u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
label_1ba10c:
    // 0x1ba10c: 0x27a40038
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 56));
label_1ba110:
    // 0x1ba110: 0x3c020023
    ctx->pc = 0x1ba110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1ba114:
    // 0x1ba114: 0x27a6004c
    ctx->pc = 0x1ba114u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
label_1ba118:
    // 0x1ba118: 0x24424bf0
    ctx->pc = 0x1ba118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19440));
label_1ba11c:
    // 0x1ba11c: 0x431021
    ctx->pc = 0x1ba11cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ba120:
    // 0x1ba120: 0x8c450000
    ctx->pc = 0x1ba120u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba124:
    // 0x1ba124: 0xc06e52c
label_1ba128:
    if (ctx->pc == 0x1BA128u) {
        ctx->pc = 0x1BA128u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1BA12Cu;
        goto label_1ba12c;
    }
    ctx->pc = 0x1BA124u;
    SET_GPR_U32(ctx, 31, 0x1BA12Cu);
    ctx->pc = 0x1BA128u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA12Cu; }
    }
    if (ctx->pc != 0x1BA12Cu) { return; }
    ctx->pc = 0x1BA12Cu;
label_1ba12c:
    // 0x1ba12c: 0x10400008
label_1ba130:
    if (ctx->pc == 0x1BA130u) {
        ctx->pc = 0x1BA134u;
        goto label_1ba134;
    }
    ctx->pc = 0x1BA12Cu;
    {
        const bool branch_taken_0x1ba12c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ba12c) {
            ctx->pc = 0x1BA150u;
            goto label_1ba150;
        }
    }
    ctx->pc = 0x1BA134u;
label_1ba134:
    // 0x1ba134: 0x82250002
    ctx->pc = 0x1ba134u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1ba138:
    // 0x1ba138: 0x24040002
    ctx->pc = 0x1ba138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1ba13c:
    // 0x1ba13c: 0x8fa7004c
    ctx->pc = 0x1ba13cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1ba140:
    // 0x1ba140: 0x302d
    ctx->pc = 0x1ba140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba144:
    // 0x1ba144: 0x8fa80048
    ctx->pc = 0x1ba144u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1ba148:
    // 0x1ba148: 0xc06b2d8
label_1ba14c:
    if (ctx->pc == 0x1BA14Cu) {
        ctx->pc = 0x1BA14Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1BA150u;
        goto label_1ba150;
    }
    ctx->pc = 0x1BA148u;
    SET_GPR_U32(ctx, 31, 0x1BA150u);
    ctx->pc = 0x1BA14Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACB60_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA150u; }
    }
    if (ctx->pc != 0x1BA150u) { return; }
    ctx->pc = 0x1BA150u;
label_1ba150:
    // 0x1ba150: 0xdfbf0020
    ctx->pc = 0x1ba150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba154:
    // 0x1ba154: 0x7bb10010
    ctx->pc = 0x1ba154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba158:
    // 0x1ba158: 0x7bb00000
    ctx->pc = 0x1ba158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba15c:
    // 0x1ba15c: 0x3e00008
label_1ba160:
    if (ctx->pc == 0x1BA160u) {
        ctx->pc = 0x1BA160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1BA164u;
        goto label_1ba164;
    }
    ctx->pc = 0x1BA15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9970u: goto label_1b9970;
            case 0x1B9974u: goto label_1b9974;
            case 0x1B9978u: goto label_1b9978;
            case 0x1B997Cu: goto label_1b997c;
            case 0x1B9980u: goto label_1b9980;
            case 0x1B9984u: goto label_1b9984;
            case 0x1B9988u: goto label_1b9988;
            case 0x1B998Cu: goto label_1b998c;
            case 0x1B9990u: goto label_1b9990;
            case 0x1B9994u: goto label_1b9994;
            case 0x1B9998u: goto label_1b9998;
            case 0x1B999Cu: goto label_1b999c;
            case 0x1B99A0u: goto label_1b99a0;
            case 0x1B99A4u: goto label_1b99a4;
            case 0x1B99A8u: goto label_1b99a8;
            case 0x1B99ACu: goto label_1b99ac;
            case 0x1B99B0u: goto label_1b99b0;
            case 0x1B99B4u: goto label_1b99b4;
            case 0x1B99B8u: goto label_1b99b8;
            case 0x1B99BCu: goto label_1b99bc;
            case 0x1B99C0u: goto label_1b99c0;
            case 0x1B99C4u: goto label_1b99c4;
            case 0x1B99C8u: goto label_1b99c8;
            case 0x1B99CCu: goto label_1b99cc;
            case 0x1B99D0u: goto label_1b99d0;
            case 0x1B99D4u: goto label_1b99d4;
            case 0x1B99D8u: goto label_1b99d8;
            case 0x1B99DCu: goto label_1b99dc;
            case 0x1B99E0u: goto label_1b99e0;
            case 0x1B99E4u: goto label_1b99e4;
            case 0x1B99E8u: goto label_1b99e8;
            case 0x1B99ECu: goto label_1b99ec;
            case 0x1B99F0u: goto label_1b99f0;
            case 0x1B99F4u: goto label_1b99f4;
            case 0x1B99F8u: goto label_1b99f8;
            case 0x1B99FCu: goto label_1b99fc;
            case 0x1B9A00u: goto label_1b9a00;
            case 0x1B9A04u: goto label_1b9a04;
            case 0x1B9A08u: goto label_1b9a08;
            case 0x1B9A0Cu: goto label_1b9a0c;
            case 0x1B9A10u: goto label_1b9a10;
            case 0x1B9A14u: goto label_1b9a14;
            case 0x1B9A18u: goto label_1b9a18;
            case 0x1B9A1Cu: goto label_1b9a1c;
            case 0x1B9A20u: goto label_1b9a20;
            case 0x1B9A24u: goto label_1b9a24;
            case 0x1B9A28u: goto label_1b9a28;
            case 0x1B9A2Cu: goto label_1b9a2c;
            case 0x1B9A30u: goto label_1b9a30;
            case 0x1B9A34u: goto label_1b9a34;
            case 0x1B9A38u: goto label_1b9a38;
            case 0x1B9A3Cu: goto label_1b9a3c;
            case 0x1B9A40u: goto label_1b9a40;
            case 0x1B9A44u: goto label_1b9a44;
            case 0x1B9A48u: goto label_1b9a48;
            case 0x1B9A4Cu: goto label_1b9a4c;
            case 0x1B9A50u: goto label_1b9a50;
            case 0x1B9A54u: goto label_1b9a54;
            case 0x1B9A58u: goto label_1b9a58;
            case 0x1B9A5Cu: goto label_1b9a5c;
            case 0x1B9A60u: goto label_1b9a60;
            case 0x1B9A64u: goto label_1b9a64;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9A6Cu: goto label_1b9a6c;
            case 0x1B9A70u: goto label_1b9a70;
            case 0x1B9A74u: goto label_1b9a74;
            case 0x1B9A78u: goto label_1b9a78;
            case 0x1B9A7Cu: goto label_1b9a7c;
            case 0x1B9A80u: goto label_1b9a80;
            case 0x1B9A84u: goto label_1b9a84;
            case 0x1B9A88u: goto label_1b9a88;
            case 0x1B9A8Cu: goto label_1b9a8c;
            case 0x1B9A90u: goto label_1b9a90;
            case 0x1B9A94u: goto label_1b9a94;
            case 0x1B9A98u: goto label_1b9a98;
            case 0x1B9A9Cu: goto label_1b9a9c;
            case 0x1B9AA0u: goto label_1b9aa0;
            case 0x1B9AA4u: goto label_1b9aa4;
            case 0x1B9AA8u: goto label_1b9aa8;
            case 0x1B9AACu: goto label_1b9aac;
            case 0x1B9AB0u: goto label_1b9ab0;
            case 0x1B9AB4u: goto label_1b9ab4;
            case 0x1B9AB8u: goto label_1b9ab8;
            case 0x1B9ABCu: goto label_1b9abc;
            case 0x1B9AC0u: goto label_1b9ac0;
            case 0x1B9AC4u: goto label_1b9ac4;
            case 0x1B9AC8u: goto label_1b9ac8;
            case 0x1B9ACCu: goto label_1b9acc;
            case 0x1B9AD0u: goto label_1b9ad0;
            case 0x1B9AD4u: goto label_1b9ad4;
            case 0x1B9AD8u: goto label_1b9ad8;
            case 0x1B9ADCu: goto label_1b9adc;
            case 0x1B9AE0u: goto label_1b9ae0;
            case 0x1B9AE4u: goto label_1b9ae4;
            case 0x1B9AE8u: goto label_1b9ae8;
            case 0x1B9AECu: goto label_1b9aec;
            case 0x1B9AF0u: goto label_1b9af0;
            case 0x1B9AF4u: goto label_1b9af4;
            case 0x1B9AF8u: goto label_1b9af8;
            case 0x1B9AFCu: goto label_1b9afc;
            case 0x1B9B00u: goto label_1b9b00;
            case 0x1B9B04u: goto label_1b9b04;
            case 0x1B9B08u: goto label_1b9b08;
            case 0x1B9B0Cu: goto label_1b9b0c;
            case 0x1B9B10u: goto label_1b9b10;
            case 0x1B9B14u: goto label_1b9b14;
            case 0x1B9B18u: goto label_1b9b18;
            case 0x1B9B1Cu: goto label_1b9b1c;
            case 0x1B9B20u: goto label_1b9b20;
            case 0x1B9B24u: goto label_1b9b24;
            case 0x1B9B28u: goto label_1b9b28;
            case 0x1B9B2Cu: goto label_1b9b2c;
            case 0x1B9B30u: goto label_1b9b30;
            case 0x1B9B34u: goto label_1b9b34;
            case 0x1B9B38u: goto label_1b9b38;
            case 0x1B9B3Cu: goto label_1b9b3c;
            case 0x1B9B40u: goto label_1b9b40;
            case 0x1B9B44u: goto label_1b9b44;
            case 0x1B9B48u: goto label_1b9b48;
            case 0x1B9B4Cu: goto label_1b9b4c;
            case 0x1B9B50u: goto label_1b9b50;
            case 0x1B9B54u: goto label_1b9b54;
            case 0x1B9B58u: goto label_1b9b58;
            case 0x1B9B5Cu: goto label_1b9b5c;
            case 0x1B9B60u: goto label_1b9b60;
            case 0x1B9B64u: goto label_1b9b64;
            case 0x1B9B68u: goto label_1b9b68;
            case 0x1B9B6Cu: goto label_1b9b6c;
            case 0x1B9B70u: goto label_1b9b70;
            case 0x1B9B74u: goto label_1b9b74;
            case 0x1B9B78u: goto label_1b9b78;
            case 0x1B9B7Cu: goto label_1b9b7c;
            case 0x1B9B80u: goto label_1b9b80;
            case 0x1B9B84u: goto label_1b9b84;
            case 0x1B9B88u: goto label_1b9b88;
            case 0x1B9B8Cu: goto label_1b9b8c;
            case 0x1B9B90u: goto label_1b9b90;
            case 0x1B9B94u: goto label_1b9b94;
            case 0x1B9B98u: goto label_1b9b98;
            case 0x1B9B9Cu: goto label_1b9b9c;
            case 0x1B9BA0u: goto label_1b9ba0;
            case 0x1B9BA4u: goto label_1b9ba4;
            case 0x1B9BA8u: goto label_1b9ba8;
            case 0x1B9BACu: goto label_1b9bac;
            case 0x1B9BB0u: goto label_1b9bb0;
            case 0x1B9BB4u: goto label_1b9bb4;
            case 0x1B9BB8u: goto label_1b9bb8;
            case 0x1B9BBCu: goto label_1b9bbc;
            case 0x1B9BC0u: goto label_1b9bc0;
            case 0x1B9BC4u: goto label_1b9bc4;
            case 0x1B9BC8u: goto label_1b9bc8;
            case 0x1B9BCCu: goto label_1b9bcc;
            case 0x1B9BD0u: goto label_1b9bd0;
            case 0x1B9BD4u: goto label_1b9bd4;
            case 0x1B9BD8u: goto label_1b9bd8;
            case 0x1B9BDCu: goto label_1b9bdc;
            case 0x1B9BE0u: goto label_1b9be0;
            case 0x1B9BE4u: goto label_1b9be4;
            case 0x1B9BE8u: goto label_1b9be8;
            case 0x1B9BECu: goto label_1b9bec;
            case 0x1B9BF0u: goto label_1b9bf0;
            case 0x1B9BF4u: goto label_1b9bf4;
            case 0x1B9BF8u: goto label_1b9bf8;
            case 0x1B9BFCu: goto label_1b9bfc;
            case 0x1B9C00u: goto label_1b9c00;
            case 0x1B9C04u: goto label_1b9c04;
            case 0x1B9C08u: goto label_1b9c08;
            case 0x1B9C0Cu: goto label_1b9c0c;
            case 0x1B9C10u: goto label_1b9c10;
            case 0x1B9C14u: goto label_1b9c14;
            case 0x1B9C18u: goto label_1b9c18;
            case 0x1B9C1Cu: goto label_1b9c1c;
            case 0x1B9C20u: goto label_1b9c20;
            case 0x1B9C24u: goto label_1b9c24;
            case 0x1B9C28u: goto label_1b9c28;
            case 0x1B9C2Cu: goto label_1b9c2c;
            case 0x1B9C30u: goto label_1b9c30;
            case 0x1B9C34u: goto label_1b9c34;
            case 0x1B9C38u: goto label_1b9c38;
            case 0x1B9C3Cu: goto label_1b9c3c;
            case 0x1B9C40u: goto label_1b9c40;
            case 0x1B9C44u: goto label_1b9c44;
            case 0x1B9C48u: goto label_1b9c48;
            case 0x1B9C4Cu: goto label_1b9c4c;
            case 0x1B9C50u: goto label_1b9c50;
            case 0x1B9C54u: goto label_1b9c54;
            case 0x1B9C58u: goto label_1b9c58;
            case 0x1B9C5Cu: goto label_1b9c5c;
            case 0x1B9C60u: goto label_1b9c60;
            case 0x1B9C64u: goto label_1b9c64;
            case 0x1B9C68u: goto label_1b9c68;
            case 0x1B9C6Cu: goto label_1b9c6c;
            case 0x1B9C70u: goto label_1b9c70;
            case 0x1B9C74u: goto label_1b9c74;
            case 0x1B9C78u: goto label_1b9c78;
            case 0x1B9C7Cu: goto label_1b9c7c;
            case 0x1B9C80u: goto label_1b9c80;
            case 0x1B9C84u: goto label_1b9c84;
            case 0x1B9C88u: goto label_1b9c88;
            case 0x1B9C8Cu: goto label_1b9c8c;
            case 0x1B9C90u: goto label_1b9c90;
            case 0x1B9C94u: goto label_1b9c94;
            case 0x1B9C98u: goto label_1b9c98;
            case 0x1B9C9Cu: goto label_1b9c9c;
            case 0x1B9CA0u: goto label_1b9ca0;
            case 0x1B9CA4u: goto label_1b9ca4;
            case 0x1B9CA8u: goto label_1b9ca8;
            case 0x1B9CACu: goto label_1b9cac;
            case 0x1B9CB0u: goto label_1b9cb0;
            case 0x1B9CB4u: goto label_1b9cb4;
            case 0x1B9CB8u: goto label_1b9cb8;
            case 0x1B9CBCu: goto label_1b9cbc;
            case 0x1B9CC0u: goto label_1b9cc0;
            case 0x1B9CC4u: goto label_1b9cc4;
            case 0x1B9CC8u: goto label_1b9cc8;
            case 0x1B9CCCu: goto label_1b9ccc;
            case 0x1B9CD0u: goto label_1b9cd0;
            case 0x1B9CD4u: goto label_1b9cd4;
            case 0x1B9CD8u: goto label_1b9cd8;
            case 0x1B9CDCu: goto label_1b9cdc;
            case 0x1B9CE0u: goto label_1b9ce0;
            case 0x1B9CE4u: goto label_1b9ce4;
            case 0x1B9CE8u: goto label_1b9ce8;
            case 0x1B9CECu: goto label_1b9cec;
            case 0x1B9CF0u: goto label_1b9cf0;
            case 0x1B9CF4u: goto label_1b9cf4;
            case 0x1B9CF8u: goto label_1b9cf8;
            case 0x1B9CFCu: goto label_1b9cfc;
            case 0x1B9D00u: goto label_1b9d00;
            case 0x1B9D04u: goto label_1b9d04;
            case 0x1B9D08u: goto label_1b9d08;
            case 0x1B9D0Cu: goto label_1b9d0c;
            case 0x1B9D10u: goto label_1b9d10;
            case 0x1B9D14u: goto label_1b9d14;
            case 0x1B9D18u: goto label_1b9d18;
            case 0x1B9D1Cu: goto label_1b9d1c;
            case 0x1B9D20u: goto label_1b9d20;
            case 0x1B9D24u: goto label_1b9d24;
            case 0x1B9D28u: goto label_1b9d28;
            case 0x1B9D2Cu: goto label_1b9d2c;
            case 0x1B9D30u: goto label_1b9d30;
            case 0x1B9D34u: goto label_1b9d34;
            case 0x1B9D38u: goto label_1b9d38;
            case 0x1B9D3Cu: goto label_1b9d3c;
            case 0x1B9D40u: goto label_1b9d40;
            case 0x1B9D44u: goto label_1b9d44;
            case 0x1B9D48u: goto label_1b9d48;
            case 0x1B9D4Cu: goto label_1b9d4c;
            case 0x1B9D50u: goto label_1b9d50;
            case 0x1B9D54u: goto label_1b9d54;
            case 0x1B9D58u: goto label_1b9d58;
            case 0x1B9D5Cu: goto label_1b9d5c;
            case 0x1B9D60u: goto label_1b9d60;
            case 0x1B9D64u: goto label_1b9d64;
            case 0x1B9D68u: goto label_1b9d68;
            case 0x1B9D6Cu: goto label_1b9d6c;
            case 0x1B9D70u: goto label_1b9d70;
            case 0x1B9D74u: goto label_1b9d74;
            case 0x1B9D78u: goto label_1b9d78;
            case 0x1B9D7Cu: goto label_1b9d7c;
            case 0x1B9D80u: goto label_1b9d80;
            case 0x1B9D84u: goto label_1b9d84;
            case 0x1B9D88u: goto label_1b9d88;
            case 0x1B9D8Cu: goto label_1b9d8c;
            case 0x1B9D90u: goto label_1b9d90;
            case 0x1B9D94u: goto label_1b9d94;
            case 0x1B9D98u: goto label_1b9d98;
            case 0x1B9D9Cu: goto label_1b9d9c;
            case 0x1B9DA0u: goto label_1b9da0;
            case 0x1B9DA4u: goto label_1b9da4;
            case 0x1B9DA8u: goto label_1b9da8;
            case 0x1B9DACu: goto label_1b9dac;
            case 0x1B9DB0u: goto label_1b9db0;
            case 0x1B9DB4u: goto label_1b9db4;
            case 0x1B9DB8u: goto label_1b9db8;
            case 0x1B9DBCu: goto label_1b9dbc;
            case 0x1B9DC0u: goto label_1b9dc0;
            case 0x1B9DC4u: goto label_1b9dc4;
            case 0x1B9DC8u: goto label_1b9dc8;
            case 0x1B9DCCu: goto label_1b9dcc;
            case 0x1B9DD0u: goto label_1b9dd0;
            case 0x1B9DD4u: goto label_1b9dd4;
            case 0x1B9DD8u: goto label_1b9dd8;
            case 0x1B9DDCu: goto label_1b9ddc;
            case 0x1B9DE0u: goto label_1b9de0;
            case 0x1B9DE4u: goto label_1b9de4;
            case 0x1B9DE8u: goto label_1b9de8;
            case 0x1B9DECu: goto label_1b9dec;
            case 0x1B9DF0u: goto label_1b9df0;
            case 0x1B9DF4u: goto label_1b9df4;
            case 0x1B9DF8u: goto label_1b9df8;
            case 0x1B9DFCu: goto label_1b9dfc;
            case 0x1B9E00u: goto label_1b9e00;
            case 0x1B9E04u: goto label_1b9e04;
            case 0x1B9E08u: goto label_1b9e08;
            case 0x1B9E0Cu: goto label_1b9e0c;
            case 0x1B9E10u: goto label_1b9e10;
            case 0x1B9E14u: goto label_1b9e14;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9E1Cu: goto label_1b9e1c;
            case 0x1B9E20u: goto label_1b9e20;
            case 0x1B9E24u: goto label_1b9e24;
            case 0x1B9E28u: goto label_1b9e28;
            case 0x1B9E2Cu: goto label_1b9e2c;
            case 0x1B9E30u: goto label_1b9e30;
            case 0x1B9E34u: goto label_1b9e34;
            case 0x1B9E38u: goto label_1b9e38;
            case 0x1B9E3Cu: goto label_1b9e3c;
            case 0x1B9E40u: goto label_1b9e40;
            case 0x1B9E44u: goto label_1b9e44;
            case 0x1B9E48u: goto label_1b9e48;
            case 0x1B9E4Cu: goto label_1b9e4c;
            case 0x1B9E50u: goto label_1b9e50;
            case 0x1B9E54u: goto label_1b9e54;
            case 0x1B9E58u: goto label_1b9e58;
            case 0x1B9E5Cu: goto label_1b9e5c;
            case 0x1B9E60u: goto label_1b9e60;
            case 0x1B9E64u: goto label_1b9e64;
            case 0x1B9E68u: goto label_1b9e68;
            case 0x1B9E6Cu: goto label_1b9e6c;
            case 0x1B9E70u: goto label_1b9e70;
            case 0x1B9E74u: goto label_1b9e74;
            case 0x1B9E78u: goto label_1b9e78;
            case 0x1B9E7Cu: goto label_1b9e7c;
            case 0x1B9E80u: goto label_1b9e80;
            case 0x1B9E84u: goto label_1b9e84;
            case 0x1B9E88u: goto label_1b9e88;
            case 0x1B9E8Cu: goto label_1b9e8c;
            case 0x1B9E90u: goto label_1b9e90;
            case 0x1B9E94u: goto label_1b9e94;
            case 0x1B9E98u: goto label_1b9e98;
            case 0x1B9E9Cu: goto label_1b9e9c;
            case 0x1B9EA0u: goto label_1b9ea0;
            case 0x1B9EA4u: goto label_1b9ea4;
            case 0x1B9EA8u: goto label_1b9ea8;
            case 0x1B9EACu: goto label_1b9eac;
            case 0x1B9EB0u: goto label_1b9eb0;
            case 0x1B9EB4u: goto label_1b9eb4;
            case 0x1B9EB8u: goto label_1b9eb8;
            case 0x1B9EBCu: goto label_1b9ebc;
            case 0x1B9EC0u: goto label_1b9ec0;
            case 0x1B9EC4u: goto label_1b9ec4;
            case 0x1B9EC8u: goto label_1b9ec8;
            case 0x1B9ECCu: goto label_1b9ecc;
            case 0x1B9ED0u: goto label_1b9ed0;
            case 0x1B9ED4u: goto label_1b9ed4;
            case 0x1B9ED8u: goto label_1b9ed8;
            case 0x1B9EDCu: goto label_1b9edc;
            case 0x1B9EE0u: goto label_1b9ee0;
            case 0x1B9EE4u: goto label_1b9ee4;
            case 0x1B9EE8u: goto label_1b9ee8;
            case 0x1B9EECu: goto label_1b9eec;
            case 0x1B9EF0u: goto label_1b9ef0;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9EF8u: goto label_1b9ef8;
            case 0x1B9EFCu: goto label_1b9efc;
            case 0x1B9F00u: goto label_1b9f00;
            case 0x1B9F04u: goto label_1b9f04;
            case 0x1B9F08u: goto label_1b9f08;
            case 0x1B9F0Cu: goto label_1b9f0c;
            case 0x1B9F10u: goto label_1b9f10;
            case 0x1B9F14u: goto label_1b9f14;
            case 0x1B9F18u: goto label_1b9f18;
            case 0x1B9F1Cu: goto label_1b9f1c;
            case 0x1B9F20u: goto label_1b9f20;
            case 0x1B9F24u: goto label_1b9f24;
            case 0x1B9F28u: goto label_1b9f28;
            case 0x1B9F2Cu: goto label_1b9f2c;
            case 0x1B9F30u: goto label_1b9f30;
            case 0x1B9F34u: goto label_1b9f34;
            case 0x1B9F38u: goto label_1b9f38;
            case 0x1B9F3Cu: goto label_1b9f3c;
            case 0x1B9F40u: goto label_1b9f40;
            case 0x1B9F44u: goto label_1b9f44;
            case 0x1B9F48u: goto label_1b9f48;
            case 0x1B9F4Cu: goto label_1b9f4c;
            case 0x1B9F50u: goto label_1b9f50;
            case 0x1B9F54u: goto label_1b9f54;
            case 0x1B9F58u: goto label_1b9f58;
            case 0x1B9F5Cu: goto label_1b9f5c;
            case 0x1B9F60u: goto label_1b9f60;
            case 0x1B9F64u: goto label_1b9f64;
            case 0x1B9F68u: goto label_1b9f68;
            case 0x1B9F6Cu: goto label_1b9f6c;
            case 0x1B9F70u: goto label_1b9f70;
            case 0x1B9F74u: goto label_1b9f74;
            case 0x1B9F78u: goto label_1b9f78;
            case 0x1B9F7Cu: goto label_1b9f7c;
            case 0x1B9F80u: goto label_1b9f80;
            case 0x1B9F84u: goto label_1b9f84;
            case 0x1B9F88u: goto label_1b9f88;
            case 0x1B9F8Cu: goto label_1b9f8c;
            case 0x1B9F90u: goto label_1b9f90;
            case 0x1B9F94u: goto label_1b9f94;
            case 0x1B9F98u: goto label_1b9f98;
            case 0x1B9F9Cu: goto label_1b9f9c;
            case 0x1B9FA0u: goto label_1b9fa0;
            case 0x1B9FA4u: goto label_1b9fa4;
            case 0x1B9FA8u: goto label_1b9fa8;
            case 0x1B9FACu: goto label_1b9fac;
            case 0x1B9FB0u: goto label_1b9fb0;
            case 0x1B9FB4u: goto label_1b9fb4;
            case 0x1B9FB8u: goto label_1b9fb8;
            case 0x1B9FBCu: goto label_1b9fbc;
            case 0x1B9FC0u: goto label_1b9fc0;
            case 0x1B9FC4u: goto label_1b9fc4;
            case 0x1B9FC8u: goto label_1b9fc8;
            case 0x1B9FCCu: goto label_1b9fcc;
            case 0x1B9FD0u: goto label_1b9fd0;
            case 0x1B9FD4u: goto label_1b9fd4;
            case 0x1B9FD8u: goto label_1b9fd8;
            case 0x1B9FDCu: goto label_1b9fdc;
            case 0x1B9FE0u: goto label_1b9fe0;
            case 0x1B9FE4u: goto label_1b9fe4;
            case 0x1B9FE8u: goto label_1b9fe8;
            case 0x1B9FECu: goto label_1b9fec;
            case 0x1B9FF0u: goto label_1b9ff0;
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1B9FF8u: goto label_1b9ff8;
            case 0x1B9FFCu: goto label_1b9ffc;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA004u: goto label_1ba004;
            case 0x1BA008u: goto label_1ba008;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA010u: goto label_1ba010;
            case 0x1BA014u: goto label_1ba014;
            case 0x1BA018u: goto label_1ba018;
            case 0x1BA01Cu: goto label_1ba01c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA024u: goto label_1ba024;
            case 0x1BA028u: goto label_1ba028;
            case 0x1BA02Cu: goto label_1ba02c;
            case 0x1BA030u: goto label_1ba030;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA038u: goto label_1ba038;
            case 0x1BA03Cu: goto label_1ba03c;
            case 0x1BA040u: goto label_1ba040;
            case 0x1BA044u: goto label_1ba044;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA04Cu: goto label_1ba04c;
            case 0x1BA050u: goto label_1ba050;
            case 0x1BA054u: goto label_1ba054;
            case 0x1BA058u: goto label_1ba058;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA060u: goto label_1ba060;
            case 0x1BA064u: goto label_1ba064;
            case 0x1BA068u: goto label_1ba068;
            case 0x1BA06Cu: goto label_1ba06c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA074u: goto label_1ba074;
            case 0x1BA078u: goto label_1ba078;
            case 0x1BA07Cu: goto label_1ba07c;
            case 0x1BA080u: goto label_1ba080;
            case 0x1BA084u: goto label_1ba084;
            case 0x1BA088u: goto label_1ba088;
            case 0x1BA08Cu: goto label_1ba08c;
            case 0x1BA090u: goto label_1ba090;
            case 0x1BA094u: goto label_1ba094;
            case 0x1BA098u: goto label_1ba098;
            case 0x1BA09Cu: goto label_1ba09c;
            case 0x1BA0A0u: goto label_1ba0a0;
            case 0x1BA0A4u: goto label_1ba0a4;
            case 0x1BA0A8u: goto label_1ba0a8;
            case 0x1BA0ACu: goto label_1ba0ac;
            case 0x1BA0B0u: goto label_1ba0b0;
            case 0x1BA0B4u: goto label_1ba0b4;
            case 0x1BA0B8u: goto label_1ba0b8;
            case 0x1BA0BCu: goto label_1ba0bc;
            case 0x1BA0C0u: goto label_1ba0c0;
            case 0x1BA0C4u: goto label_1ba0c4;
            case 0x1BA0C8u: goto label_1ba0c8;
            case 0x1BA0CCu: goto label_1ba0cc;
            case 0x1BA0D0u: goto label_1ba0d0;
            case 0x1BA0D4u: goto label_1ba0d4;
            case 0x1BA0D8u: goto label_1ba0d8;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0E0u: goto label_1ba0e0;
            case 0x1BA0E4u: goto label_1ba0e4;
            case 0x1BA0E8u: goto label_1ba0e8;
            case 0x1BA0ECu: goto label_1ba0ec;
            case 0x1BA0F0u: goto label_1ba0f0;
            case 0x1BA0F4u: goto label_1ba0f4;
            case 0x1BA0F8u: goto label_1ba0f8;
            case 0x1BA0FCu: goto label_1ba0fc;
            case 0x1BA100u: goto label_1ba100;
            case 0x1BA104u: goto label_1ba104;
            case 0x1BA108u: goto label_1ba108;
            case 0x1BA10Cu: goto label_1ba10c;
            case 0x1BA110u: goto label_1ba110;
            case 0x1BA114u: goto label_1ba114;
            case 0x1BA118u: goto label_1ba118;
            case 0x1BA11Cu: goto label_1ba11c;
            case 0x1BA120u: goto label_1ba120;
            case 0x1BA124u: goto label_1ba124;
            case 0x1BA128u: goto label_1ba128;
            case 0x1BA12Cu: goto label_1ba12c;
            case 0x1BA130u: goto label_1ba130;
            case 0x1BA134u: goto label_1ba134;
            case 0x1BA138u: goto label_1ba138;
            case 0x1BA13Cu: goto label_1ba13c;
            case 0x1BA140u: goto label_1ba140;
            case 0x1BA144u: goto label_1ba144;
            case 0x1BA148u: goto label_1ba148;
            case 0x1BA14Cu: goto label_1ba14c;
            case 0x1BA150u: goto label_1ba150;
            case 0x1BA154u: goto label_1ba154;
            case 0x1BA158u: goto label_1ba158;
            case 0x1BA15Cu: goto label_1ba15c;
            case 0x1BA160u: goto label_1ba160;
            case 0x1BA164u: goto label_1ba164;
            case 0x1BA168u: goto label_1ba168;
            case 0x1BA16Cu: goto label_1ba16c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA164u;
label_1ba164:
    // 0x1ba164: 0x0
    ctx->pc = 0x1ba164u;
    // NOP
label_1ba168:
    // 0x1ba168: 0x0
    ctx->pc = 0x1ba168u;
    // NOP
label_1ba16c:
    // 0x1ba16c: 0x0
    ctx->pc = 0x1ba16cu;
    // NOP
}
