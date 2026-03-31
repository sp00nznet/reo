#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D59C8
// Address: 0x1d59c8 - 0x1d6118
void sub_001D59C8_0x1d59c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d59c8u;

label_1d59c8:
    // 0x1d59c8: 0x27bdffe0
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d59cc:
    // 0x1d59cc: 0x3c020034
    ctx->pc = 0x1d59ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_1d59d0:
    // 0x1d59d0: 0xffb00000
    ctx->pc = 0x1d59d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d59d4:
    // 0x1d59d4: 0xffbf0010
    ctx->pc = 0x1d59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d59d8:
    // 0x1d59d8: 0x24502840
    ctx->pc = 0x1d59d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 10304));
label_1d59dc:
    // 0x1d59dc: 0x8e030090
    ctx->pc = 0x1d59dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1d59e0:
    // 0x1d59e0: 0x2462ffff
    ctx->pc = 0x1d59e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d59e4:
    // 0x1d59e4: 0x2c420005
    ctx->pc = 0x1d59e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 5));
label_1d59e8:
    // 0x1d59e8: 0x10400009
label_1d59ec:
    if (ctx->pc == 0x1D59ECu) {
        ctx->pc = 0x1D59ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D59F0u;
        goto label_1d59f0;
    }
    ctx->pc = 0x1D59E8u;
    {
        const bool branch_taken_0x1d59e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D59ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d59e8) {
            ctx->pc = 0x1D5A10u;
            goto label_1d5a10;
        }
    }
    ctx->pc = 0x1D59F0u;
label_1d59f0:
    // 0x1d59f0: 0x3c020023
    ctx->pc = 0x1d59f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1d59f4:
    // 0x1d59f4: 0x31880
    ctx->pc = 0x1d59f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1d59f8:
    // 0x1d59f8: 0x24426980
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27008));
label_1d59fc:
    // 0x1d59fc: 0x621821
    ctx->pc = 0x1d59fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d5a00:
    // 0x1d5a00: 0x8c620000
    ctx->pc = 0x1d5a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5a04:
    // 0x1d5a04: 0x40f809
label_1d5a08:
    if (ctx->pc == 0x1D5A08u) {
        ctx->pc = 0x1D5A0Cu;
        goto label_1d5a0c;
    }
    ctx->pc = 0x1D5A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5A0Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5A0Cu; }
            if (ctx->pc != 0x1D5A0Cu) { return; }
        }
    }
    ctx->pc = 0x1D5A0Cu;
label_1d5a0c:
    // 0x1d5a0c: 0x40202d
    ctx->pc = 0x1d5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a10:
    // 0x1d5a10: 0xae000098
    ctx->pc = 0x1d5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_1d5a14:
    // 0x1d5a14: 0x80102d
    ctx->pc = 0x1d5a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a18:
    // 0x1d5a18: 0xae000090
    ctx->pc = 0x1d5a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_1d5a1c:
    // 0x1d5a1c: 0xdfbf0010
    ctx->pc = 0x1d5a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5a20:
    // 0x1d5a20: 0xdfb00000
    ctx->pc = 0x1d5a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5a24:
    // 0x1d5a24: 0x3e00008
label_1d5a28:
    if (ctx->pc == 0x1D5A28u) {
        ctx->pc = 0x1D5A28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D5A2Cu;
        goto label_1d5a2c;
    }
    ctx->pc = 0x1D5A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5A28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5A2Cu;
label_1d5a2c:
    // 0x1d5a2c: 0x0
    ctx->pc = 0x1d5a2cu;
    // NOP
label_1d5a30:
    // 0x1d5a30: 0x3c030034
    ctx->pc = 0x1d5a30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_1d5a34:
    // 0x1d5a34: 0x3c020034
    ctx->pc = 0x1d5a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_1d5a38:
    // 0x1d5a38: 0x8c4728d8
    ctx->pc = 0x1d5a38u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 10456)));
label_1d5a3c:
    // 0x1d5a3c: 0x24682980
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 10624));
label_1d5a40:
    // 0x1d5a40: 0x90642980
    ctx->pc = 0x1d5a40u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10624)));
label_1d5a44:
    // 0x1d5a44: 0x282d
    ctx->pc = 0x1d5a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a48:
    // 0x1d5a48: 0xace40000
    ctx->pc = 0x1d5a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_1d5a4c:
    // 0x1d5a4c: 0x91020001
    ctx->pc = 0x1d5a4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_1d5a50:
    // 0x1d5a50: 0x1080000b
label_1d5a54:
    if (ctx->pc == 0x1D5A54u) {
        ctx->pc = 0x1D5A54u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1D5A58u;
        goto label_1d5a58;
    }
    ctx->pc = 0x1D5A50u;
    {
        const bool branch_taken_0x1d5a50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5A54u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1d5a50) {
            ctx->pc = 0x1D5A80u;
            goto label_1d5a80;
        }
    }
    ctx->pc = 0x1D5A58u;
label_1d5a58:
    // 0x1d5a58: 0x24e60008
    ctx->pc = 0x1d5a58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 8));
label_1d5a5c:
    // 0x1d5a5c: 0xa81021
    ctx->pc = 0x1d5a5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1d5a60:
    // 0x1d5a60: 0xc52021
    ctx->pc = 0x1d5a60u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1d5a64:
    // 0x1d5a64: 0x90430002
    ctx->pc = 0x1d5a64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1d5a68:
    // 0x1d5a68: 0x24a50001
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1d5a6c:
    // 0x1d5a6c: 0xa0830000
    ctx->pc = 0x1d5a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1d5a70:
    // 0x1d5a70: 0x8ce20000
    ctx->pc = 0x1d5a70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d5a74:
    // 0x1d5a74: 0xa2102a
    ctx->pc = 0x1d5a74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
label_1d5a78:
    // 0x1d5a78: 0x1440fff9
label_1d5a7c:
    if (ctx->pc == 0x1D5A7Cu) {
        ctx->pc = 0x1D5A7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->pc = 0x1D5A80u;
        goto label_1d5a80;
    }
    ctx->pc = 0x1D5A78u;
    {
        const bool branch_taken_0x1d5a78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5A7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        if (branch_taken_0x1d5a78) {
            ctx->pc = 0x1D5A60u;
            goto label_1d5a60;
        }
    }
    ctx->pc = 0x1D5A80u;
label_1d5a80:
    // 0x1d5a80: 0x3e00008
label_1d5a84:
    if (ctx->pc == 0x1D5A84u) {
        ctx->pc = 0x1D5A84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A88u;
        goto label_1d5a88;
    }
    ctx->pc = 0x1D5A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5A84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5A88u;
label_1d5a88:
    // 0x1d5a88: 0x27bdfe60
    ctx->pc = 0x1d5a88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966880));
label_1d5a8c:
    // 0x1d5a8c: 0x24050038
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 56));
label_1d5a90:
    // 0x1d5a90: 0xffb50170
    ctx->pc = 0x1d5a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 21));
label_1d5a94:
    // 0x1d5a94: 0x3c060034
    ctx->pc = 0x1d5a94u;
    SET_GPR_U32(ctx, 6, ((uint32_t)52 << 16));
label_1d5a98:
    // 0x1d5a98: 0xffb40160
    ctx->pc = 0x1d5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
label_1d5a9c:
    // 0x1d5a9c: 0x3c150034
    ctx->pc = 0x1d5a9cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
label_1d5aa0:
    // 0x1d5aa0: 0xffb30150
    ctx->pc = 0x1d5aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 19));
label_1d5aa4:
    // 0x1d5aa4: 0x24d42980
    ctx->pc = 0x1d5aa4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 6), 10624));
label_1d5aa8:
    // 0x1d5aa8: 0xffb20140
    ctx->pc = 0x1d5aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
label_1d5aac:
    // 0x1d5aac: 0x26b32840
    ctx->pc = 0x1d5aacu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5ab0:
    // 0x1d5ab0: 0xffb00120
    ctx->pc = 0x1d5ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
label_1d5ab4:
    // 0x1d5ab4: 0x240400ff
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
label_1d5ab8:
    // 0x1d5ab8: 0xffbf0190
    ctx->pc = 0x1d5ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
label_1d5abc:
    // 0x1d5abc: 0xffb60180
    ctx->pc = 0x1d5abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
label_1d5ac0:
    // 0x1d5ac0: 0xffb10130
    ctx->pc = 0x1d5ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 17));
label_1d5ac4:
    // 0x1d5ac4: 0x8e710098
    ctx->pc = 0x1d5ac4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_1d5ac8:
    // 0x1d5ac8: 0x8e620094
    ctx->pc = 0x1d5ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1d5acc:
    // 0x1d5acc: 0x8e630004
    ctx->pc = 0x1d5accu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d5ad0:
    // 0x1d5ad0: 0x451018
    ctx->pc = 0x1d5ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1d5ad4:
    // 0x1d5ad4: 0x92850001
    ctx->pc = 0x1d5ad4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1d5ad8:
    // 0x1d5ad8: 0x628021
    ctx->pc = 0x1d5ad8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d5adc:
    // 0x1d5adc: 0x26120010
    ctx->pc = 0x1d5adcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 16));
label_1d5ae0:
    // 0x1d5ae0: 0x10a4013c
label_1d5ae4:
    if (ctx->pc == 0x1D5AE4u) {
        ctx->pc = 0x1D5AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D5AE8u;
        goto label_1d5ae8;
    }
    ctx->pc = 0x1D5AE0u;
    {
        const bool branch_taken_0x1d5ae0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x1D5AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d5ae0) {
            ctx->pc = 0x1D5FD4u;
            goto label_1d5fd4;
        }
    }
    ctx->pc = 0x1D5AE8u;
label_1d5ae8:
    // 0x1d5ae8: 0x8e02000c
    ctx->pc = 0x1d5ae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d5aec:
    // 0x1d5aec: 0x24040001
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1d5af0:
    // 0x1d5af0: 0x5444002d
label_1d5af4:
    if (ctx->pc == 0x1D5AF4u) {
        ctx->pc = 0x1D5AF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1D5AF8u;
        goto label_1d5af8;
    }
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D5AF4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x1D5BA8u;
            goto label_1d5ba8;
        }
    }
    ctx->pc = 0x1D5AF8u;
label_1d5af8:
    // 0x1d5af8: 0x90c22980
    ctx->pc = 0x1d5af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10624)));
label_1d5afc:
    // 0x1d5afc: 0xae220000
    ctx->pc = 0x1d5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d5b00:
    // 0x1d5b00: 0x92830001
    ctx->pc = 0x1d5b00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1d5b04:
    // 0x1d5b04: 0xae230008
    ctx->pc = 0x1d5b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1d5b08:
    // 0x1d5b08: 0x92820002
    ctx->pc = 0x1d5b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1d5b0c:
    // 0x1d5b0c: 0x10600130
label_1d5b10:
    if (ctx->pc == 0x1D5B10u) {
        ctx->pc = 0x1D5B10u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1D5B14u;
        goto label_1d5b14;
    }
    ctx->pc = 0x1D5B0Cu;
    {
        const bool branch_taken_0x1d5b0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5B10u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1d5b0c) {
            ctx->pc = 0x1D5FD0u;
            goto label_1d5fd0;
        }
    }
    ctx->pc = 0x1D5B14u;
label_1d5b14:
    // 0x1d5b14: 0x382d
    ctx->pc = 0x1d5b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b18:
    // 0x1d5b18: 0x10600012
label_1d5b1c:
    if (ctx->pc == 0x1D5B1Cu) {
        ctx->pc = 0x1D5B1Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B20u;
        goto label_1d5b20;
    }
    ctx->pc = 0x1D5B18u;
    {
        const bool branch_taken_0x1d5b18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5B1Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b18) {
            ctx->pc = 0x1D5B64u;
            goto label_1d5b64;
        }
    }
    ctx->pc = 0x1D5B20u;
label_1d5b20:
    // 0x1d5b20: 0x60202d
    ctx->pc = 0x1d5b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b24:
    // 0x1d5b24: 0x2630000c
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
label_1d5b28:
    // 0x1d5b28: 0xd41821
    ctx->pc = 0x1d5b28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_1d5b2c:
    // 0x1d5b2c: 0x0
    ctx->pc = 0x1d5b2cu;
    // NOP
label_1d5b30:
    // 0x1d5b30: 0x90620004
    ctx->pc = 0x1d5b30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1d5b34:
    // 0x1d5b34: 0x10400005
label_1d5b38:
    if (ctx->pc == 0x1D5B38u) {
        ctx->pc = 0x1D5B38u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x1D5B3Cu;
        goto label_1d5b3c;
    }
    ctx->pc = 0x1D5B34u;
    {
        const bool branch_taken_0x1d5b34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5B38u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1d5b34) {
            ctx->pc = 0x1D5B4Cu;
            goto label_1d5b4c;
        }
    }
    ctx->pc = 0x1D5B3Cu;
label_1d5b3c:
    // 0x1d5b3c: 0x90630004
    ctx->pc = 0x1d5b3cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1d5b40:
    // 0x1d5b40: 0x2021021
    ctx->pc = 0x1d5b40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d5b44:
    // 0x1d5b44: 0x24e70001
    ctx->pc = 0x1d5b44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1d5b48:
    // 0x1d5b48: 0xa4430000
    ctx->pc = 0x1d5b48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1d5b4c:
    // 0x1d5b4c: 0x24c60001
    ctx->pc = 0x1d5b4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1d5b50:
    // 0x1d5b50: 0xc4102a
    ctx->pc = 0x1d5b50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
label_1d5b54:
    // 0x1d5b54: 0x1440fff6
label_1d5b58:
    if (ctx->pc == 0x1D5B58u) {
        ctx->pc = 0x1D5B58u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->pc = 0x1D5B5Cu;
        goto label_1d5b5c;
    }
    ctx->pc = 0x1D5B54u;
    {
        const bool branch_taken_0x1d5b54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5B58u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        if (branch_taken_0x1d5b54) {
            ctx->pc = 0x1D5B30u;
            goto label_1d5b30;
        }
    }
    ctx->pc = 0x1D5B5Cu;
label_1d5b5c:
    // 0x1d5b5c: 0x10000003
label_1d5b60:
    if (ctx->pc == 0x1D5B60u) {
        ctx->pc = 0x1D5B60u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
        ctx->pc = 0x1D5B64u;
        goto label_1d5b64;
    }
    ctx->pc = 0x1D5B5Cu;
    {
        const bool branch_taken_0x1d5b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5B60u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
        if (branch_taken_0x1d5b5c) {
            ctx->pc = 0x1D5B6Cu;
            goto label_1d5b6c;
        }
    }
    ctx->pc = 0x1D5B64u;
label_1d5b64:
    // 0x1d5b64: 0x2630000c
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
label_1d5b68:
    // 0x1d5b68: 0xae270008
    ctx->pc = 0x1d5b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
label_1d5b6c:
    // 0x1d5b6c: 0x14e00005
label_1d5b70:
    if (ctx->pc == 0x1D5B70u) {
        ctx->pc = 0x1D5B70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 10304));
        ctx->pc = 0x1D5B74u;
        goto label_1d5b74;
    }
    ctx->pc = 0x1D5B6Cu;
    {
        const bool branch_taken_0x1d5b6c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5B70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 10304));
        if (branch_taken_0x1d5b6c) {
            ctx->pc = 0x1D5B84u;
            goto label_1d5b84;
        }
    }
    ctx->pc = 0x1D5B74u;
label_1d5b74:
    // 0x1d5b74: 0x24020001
    ctx->pc = 0x1d5b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d5b78:
    // 0x1d5b78: 0xa620000c
    ctx->pc = 0x1d5b78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_1d5b7c:
    // 0x1d5b7c: 0xae220008
    ctx->pc = 0x1d5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d5b80:
    // 0x1d5b80: 0x26a22840
    ctx->pc = 0x1d5b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5b84:
    // 0x1d5b84: 0x200402d
    ctx->pc = 0x1d5b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b88:
    // 0x1d5b88: 0x8c440094
    ctx->pc = 0x1d5b88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1d5b8c:
    // 0x1d5b8c: 0x100482d
    ctx->pc = 0x1d5b8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b90:
    // 0x1d5b90: 0x8e270008
    ctx->pc = 0x1d5b90u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d5b94:
    // 0x1d5b94: 0x92250004
    ctx->pc = 0x1d5b94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5b98:
    // 0x1d5b98: 0xc075888
label_1d5b9c:
    if (ctx->pc == 0x1D5B9Cu) {
        ctx->pc = 0x1D5B9Cu;
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D5BA0u;
        goto label_1d5ba0;
    }
    ctx->pc = 0x1D5B98u;
    SET_GPR_U32(ctx, 31, 0x1D5BA0u);
    ctx->pc = 0x1D5B9Cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1D6220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6220_0x1d6220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BA0u; }
    }
    if (ctx->pc != 0x1D5BA0u) { return; }
    ctx->pc = 0x1D5BA0u;
label_1d5ba0:
    // 0x1d5ba0: 0x1000010c
label_1d5ba4:
    if (ctx->pc == 0x1D5BA4u) {
        ctx->pc = 0x1D5BA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BA8u;
        goto label_1d5ba8;
    }
    ctx->pc = 0x1D5BA0u;
    {
        const bool branch_taken_0x1d5ba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5BA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ba0) {
            ctx->pc = 0x1D5FD4u;
            goto label_1d5fd4;
        }
    }
    ctx->pc = 0x1D5BA8u;
label_1d5ba8:
    // 0x1d5ba8: 0x10640007
label_1d5bac:
    if (ctx->pc == 0x1D5BACu) {
        ctx->pc = 0x1D5BACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        ctx->pc = 0x1D5BB0u;
        goto label_1d5bb0;
    }
    ctx->pc = 0x1D5BA8u;
    {
        const bool branch_taken_0x1d5ba8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1D5BACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x1d5ba8) {
            ctx->pc = 0x1D5BC8u;
            goto label_1d5bc8;
        }
    }
    ctx->pc = 0x1D5BB0u;
label_1d5bb0:
    // 0x1d5bb0: 0x14400030
label_1d5bb4:
    if (ctx->pc == 0x1D5BB4u) {
        ctx->pc = 0x1D5BB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D5BB8u;
        goto label_1d5bb8;
    }
    ctx->pc = 0x1D5BB0u;
    {
        const bool branch_taken_0x1d5bb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5BB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d5bb0) {
            ctx->pc = 0x1D5C74u;
            goto label_1d5c74;
        }
    }
    ctx->pc = 0x1D5BB8u;
label_1d5bb8:
    // 0x1d5bb8: 0x5062001e
label_1d5bbc:
    if (ctx->pc == 0x1D5BBCu) {
        ctx->pc = 0x1D5BBCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1D5BC0u;
        goto label_1d5bc0;
    }
    ctx->pc = 0x1D5BB8u;
    {
        const bool branch_taken_0x1d5bb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d5bb8) {
            ctx->pc = 0x1D5BBCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x1D5C34u;
            goto label_1d5c34;
        }
    }
    ctx->pc = 0x1D5BC0u;
label_1d5bc0:
    // 0x1d5bc0: 0x1000002c
label_1d5bc4:
    if (ctx->pc == 0x1D5BC4u) {
        ctx->pc = 0x1D5BC8u;
        goto label_1d5bc8;
    }
    ctx->pc = 0x1D5BC0u;
    {
        const bool branch_taken_0x1d5bc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d5bc0) {
            ctx->pc = 0x1D5C74u;
            goto label_1d5c74;
        }
    }
    ctx->pc = 0x1D5BC8u;
label_1d5bc8:
    // 0x1d5bc8: 0x8e420004
    ctx->pc = 0x1d5bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d5bcc:
    // 0x1d5bcc: 0x8e430008
    ctx->pc = 0x1d5bccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d5bd0:
    // 0x1d5bd0: 0x43102a
    ctx->pc = 0x1d5bd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_1d5bd4:
    // 0x1d5bd4: 0x14400027
label_1d5bd8:
    if (ctx->pc == 0x1D5BD8u) {
        ctx->pc = 0x1D5BDCu;
        goto label_1d5bdc;
    }
    ctx->pc = 0x1D5BD4u;
    {
        const bool branch_taken_0x1d5bd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d5bd4) {
            ctx->pc = 0x1D5C74u;
            goto label_1d5c74;
        }
    }
    ctx->pc = 0x1D5BDCu;
label_1d5bdc:
    // 0x1d5bdc: 0xae400004
    ctx->pc = 0x1d5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1d5be0:
    // 0x1d5be0: 0xc075846
label_1d5be4:
    if (ctx->pc == 0x1D5BE4u) {
        ctx->pc = 0x1D5BE4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->pc = 0x1D5BE8u;
        goto label_1d5be8;
    }
    ctx->pc = 0x1D5BE0u;
    SET_GPR_U32(ctx, 31, 0x1D5BE8u);
    ctx->pc = 0x1D5BE4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
    ctx->pc = 0x1D6118u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6118_0x1d6118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5BE8u; }
    }
    if (ctx->pc != 0x1D5BE8u) { return; }
    ctx->pc = 0x1D5BE8u;
label_1d5be8:
    // 0x1d5be8: 0x8e430008
    ctx->pc = 0x1d5be8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d5bec:
    // 0x1d5bec: 0x28630002
    ctx->pc = 0x1d5becu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
label_1d5bf0:
    // 0x1d5bf0: 0x14600004
label_1d5bf4:
    if (ctx->pc == 0x1D5BF4u) {
        ctx->pc = 0x1D5BF4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->pc = 0x1D5BF8u;
        goto label_1d5bf8;
    }
    ctx->pc = 0x1D5BF0u;
    {
        const bool branch_taken_0x1d5bf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5BF4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
        if (branch_taken_0x1d5bf0) {
            ctx->pc = 0x1D5C04u;
            goto label_1d5c04;
        }
    }
    ctx->pc = 0x1D5BF8u;
label_1d5bf8:
    // 0x1d5bf8: 0xc075852
label_1d5bfc:
    if (ctx->pc == 0x1D5BFCu) {
        ctx->pc = 0x1D5BFCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C00u;
        goto label_1d5c00;
    }
    ctx->pc = 0x1D5BF8u;
    SET_GPR_U32(ctx, 31, 0x1D5C00u);
    ctx->pc = 0x1D5BFCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D6148u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6148_0x1d6148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C00u; }
    }
    if (ctx->pc != 0x1D5C00u) { return; }
    ctx->pc = 0x1D5C00u;
label_1d5c00:
    // 0x1d5c00: 0x8e640094
    ctx->pc = 0x1d5c00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1d5c04:
    // 0x1d5c04: 0xc075852
label_1d5c08:
    if (ctx->pc == 0x1D5C08u) {
        ctx->pc = 0x1D5C08u;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x1D5C0Cu;
        goto label_1d5c0c;
    }
    ctx->pc = 0x1D5C04u;
    SET_GPR_U32(ctx, 31, 0x1D5C0Cu);
    ctx->pc = 0x1D5C08u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x1D6148u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6148_0x1d6148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C0Cu; }
    }
    if (ctx->pc != 0x1D5C0Cu) { return; }
    ctx->pc = 0x1D5C0Cu;
label_1d5c0c:
    // 0x1d5c0c: 0x8e43000c
    ctx->pc = 0x1d5c0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d5c10:
    // 0x1d5c10: 0x28630002
    ctx->pc = 0x1d5c10u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
label_1d5c14:
    // 0x1d5c14: 0x14600005
label_1d5c18:
    if (ctx->pc == 0x1D5C18u) {
        ctx->pc = 0x1D5C18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D5C1Cu;
        goto label_1d5c1c;
    }
    ctx->pc = 0x1D5C14u;
    {
        const bool branch_taken_0x1d5c14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5C18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d5c14) {
            ctx->pc = 0x1D5C2Cu;
            goto label_1d5c2c;
        }
    }
    ctx->pc = 0x1D5C1Cu;
label_1d5c1c:
    // 0x1d5c1c: 0x8e640094
    ctx->pc = 0x1d5c1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1d5c20:
    // 0x1d5c20: 0xc075852
label_1d5c24:
    if (ctx->pc == 0x1D5C24u) {
        ctx->pc = 0x1D5C24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C28u;
        goto label_1d5c28;
    }
    ctx->pc = 0x1D5C20u;
    SET_GPR_U32(ctx, 31, 0x1D5C28u);
    ctx->pc = 0x1D5C24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D6148u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6148_0x1d6148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C28u; }
    }
    if (ctx->pc != 0x1D5C28u) { return; }
    ctx->pc = 0x1D5C28u;
label_1d5c28:
    // 0x1d5c28: 0x24020002
    ctx->pc = 0x1d5c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1d5c2c:
    // 0x1d5c2c: 0x10000010
label_1d5c30:
    if (ctx->pc == 0x1D5C30u) {
        ctx->pc = 0x1D5C30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1D5C34u;
        goto label_1d5c34;
    }
    ctx->pc = 0x1D5C2Cu;
    {
        const bool branch_taken_0x1d5c2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5C30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1d5c2c) {
            ctx->pc = 0x1D5C70u;
            goto label_1d5c70;
        }
    }
    ctx->pc = 0x1D5C34u;
label_1d5c34:
    // 0x1d5c34: 0x8e43000c
    ctx->pc = 0x1d5c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d5c38:
    // 0x1d5c38: 0x43102a
    ctx->pc = 0x1d5c38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_1d5c3c:
    // 0x1d5c3c: 0x1440000d
label_1d5c40:
    if (ctx->pc == 0x1D5C40u) {
        ctx->pc = 0x1D5C44u;
        goto label_1d5c44;
    }
    ctx->pc = 0x1D5C3Cu;
    {
        const bool branch_taken_0x1d5c3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d5c3c) {
            ctx->pc = 0x1D5C74u;
            goto label_1d5c74;
        }
    }
    ctx->pc = 0x1D5C44u;
label_1d5c44:
    // 0x1d5c44: 0xae400004
    ctx->pc = 0x1d5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1d5c48:
    // 0x1d5c48: 0x96450010
    ctx->pc = 0x1d5c48u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_1d5c4c:
    // 0x1d5c4c: 0xc075852
label_1d5c50:
    if (ctx->pc == 0x1D5C50u) {
        ctx->pc = 0x1D5C50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->pc = 0x1D5C54u;
        goto label_1d5c54;
    }
    ctx->pc = 0x1D5C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D5C54u);
    ctx->pc = 0x1D5C50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
    ctx->pc = 0x1D6148u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6148_0x1d6148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C54u; }
    }
    if (ctx->pc != 0x1D5C54u) { return; }
    ctx->pc = 0x1D5C54u;
label_1d5c54:
    // 0x1d5c54: 0x8e43000c
    ctx->pc = 0x1d5c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d5c58:
    // 0x1d5c58: 0x28630002
    ctx->pc = 0x1d5c58u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
label_1d5c5c:
    // 0x1d5c5c: 0x54600005
label_1d5c60:
    if (ctx->pc == 0x1D5C60u) {
        ctx->pc = 0x1D5C60u;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
        ctx->pc = 0x1D5C64u;
        goto label_1d5c64;
    }
    ctx->pc = 0x1D5C5Cu;
    {
        const bool branch_taken_0x1d5c5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d5c5c) {
            ctx->pc = 0x1D5C60u;
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
            ctx->pc = 0x1D5C74u;
            goto label_1d5c74;
        }
    }
    ctx->pc = 0x1D5C64u;
label_1d5c64:
    // 0x1d5c64: 0x8e640094
    ctx->pc = 0x1d5c64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1d5c68:
    // 0x1d5c68: 0xc075852
label_1d5c6c:
    if (ctx->pc == 0x1D5C6Cu) {
        ctx->pc = 0x1D5C6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C70u;
        goto label_1d5c70;
    }
    ctx->pc = 0x1D5C68u;
    SET_GPR_U32(ctx, 31, 0x1D5C70u);
    ctx->pc = 0x1D5C6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D6148u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6148_0x1d6148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C70u; }
    }
    if (ctx->pc != 0x1D5C70u) { return; }
    ctx->pc = 0x1D5C70u;
label_1d5c70:
    // 0x1d5c70: 0x92850001
    ctx->pc = 0x1d5c70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1d5c74:
    // 0x1d5c74: 0x54a00010
label_1d5c78:
    if (ctx->pc == 0x1D5C78u) {
        ctx->pc = 0x1D5C78u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x1D5C7Cu;
        goto label_1d5c7c;
    }
    ctx->pc = 0x1D5C74u;
    {
        const bool branch_taken_0x1d5c74 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d5c74) {
            ctx->pc = 0x1D5C78u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x1D5CB8u;
            goto label_1d5cb8;
        }
    }
    ctx->pc = 0x1D5C7Cu;
label_1d5c7c:
    // 0x1d5c7c: 0x26b02840
    ctx->pc = 0x1d5c7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5c80:
    // 0x1d5c80: 0x27a50110
    ctx->pc = 0x1d5c80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 272));
label_1d5c84:
    // 0x1d5c84: 0xc07586e
label_1d5c88:
    if (ctx->pc == 0x1D5C88u) {
        ctx->pc = 0x1D5C88u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x1D5C8Cu;
        goto label_1d5c8c;
    }
    ctx->pc = 0x1D5C84u;
    SET_GPR_U32(ctx, 31, 0x1D5C8Cu);
    ctx->pc = 0x1D5C88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->pc = 0x1D61B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D61B8_0x1d61b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C8Cu; }
    }
    if (ctx->pc != 0x1D5C8Cu) { return; }
    ctx->pc = 0x1D5C8Cu;
label_1d5c8c:
    // 0x1d5c8c: 0x544000d0
label_1d5c90:
    if (ctx->pc == 0x1D5C90u) {
        ctx->pc = 0x1D5C90u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1D5C94u;
        goto label_1d5c94;
    }
    ctx->pc = 0x1D5C8Cu;
    {
        const bool branch_taken_0x1d5c8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d5c8c) {
            ctx->pc = 0x1D5C90u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x1D5FD0u;
            goto label_1d5fd0;
        }
    }
    ctx->pc = 0x1D5C94u;
label_1d5c94:
    // 0x1d5c94: 0x97a30110
    ctx->pc = 0x1d5c94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 272)));
label_1d5c98:
    // 0x1d5c98: 0x24020001
    ctx->pc = 0x1d5c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d5c9c:
    // 0x1d5c9c: 0xae220008
    ctx->pc = 0x1d5c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d5ca0:
    // 0x1d5ca0: 0xa623000c
    ctx->pc = 0x1d5ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_1d5ca4:
    // 0x1d5ca4: 0x8e020008
    ctx->pc = 0x1d5ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5ca8:
    // 0x1d5ca8: 0xae220000
    ctx->pc = 0x1d5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d5cac:
    // 0x1d5cac: 0x8e03000c
    ctx->pc = 0x1d5cacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d5cb0:
    // 0x1d5cb0: 0x100000c7
label_1d5cb4:
    if (ctx->pc == 0x1D5CB4u) {
        ctx->pc = 0x1D5CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1D5CB8u;
        goto label_1d5cb8;
    }
    ctx->pc = 0x1D5CB0u;
    {
        const bool branch_taken_0x1d5cb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5CB4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x1d5cb0) {
            ctx->pc = 0x1D5FD0u;
            goto label_1d5fd0;
        }
    }
    ctx->pc = 0x1D5CB8u;
label_1d5cb8:
    // 0x1d5cb8: 0x24020001
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d5cbc:
    // 0x1d5cbc: 0x54620005
label_1d5cc0:
    if (ctx->pc == 0x1D5CC0u) {
        ctx->pc = 0x1D5CC0u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x1D5CC4u;
        goto label_1d5cc4;
    }
    ctx->pc = 0x1D5CBCu;
    {
        const bool branch_taken_0x1d5cbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1d5cbc) {
            ctx->pc = 0x1D5CC0u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->pc = 0x1D5CD4u;
            goto label_1d5cd4;
        }
    }
    ctx->pc = 0x1D5CC4u;
label_1d5cc4:
    // 0x1d5cc4: 0xae400000
    ctx->pc = 0x1d5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1d5cc8:
    // 0x1d5cc8: 0x102d
    ctx->pc = 0x1d5cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ccc:
    // 0x1d5ccc: 0x100000c1
label_1d5cd0:
    if (ctx->pc == 0x1D5CD0u) {
        ctx->pc = 0x1D5CD0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1D5CD4u;
        goto label_1d5cd4;
    }
    ctx->pc = 0x1D5CCCu;
    {
        const bool branch_taken_0x1d5ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5CD0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x1d5ccc) {
            ctx->pc = 0x1D5FD4u;
            goto label_1d5fd4;
        }
    }
    ctx->pc = 0x1D5CD4u;
label_1d5cd4:
    // 0x1d5cd4: 0x382d
    ctx->pc = 0x1d5cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5cd8:
    // 0x1d5cd8: 0x92840001
    ctx->pc = 0x1d5cd8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1d5cdc:
    // 0x1d5cdc: 0x302d
    ctx->pc = 0x1d5cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ce0:
    // 0x1d5ce0: 0x92820002
    ctx->pc = 0x1d5ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1d5ce4:
    // 0x1d5ce4: 0xafa30000
    ctx->pc = 0x1d5ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1d5ce8:
    // 0x1d5ce8: 0xafa20004
    ctx->pc = 0x1d5ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1d5cec:
    // 0x1d5cec: 0x10800012
label_1d5cf0:
    if (ctx->pc == 0x1D5CF0u) {
        ctx->pc = 0x1D5CF0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x1D5CF4u;
        goto label_1d5cf4;
    }
    ctx->pc = 0x1D5CECu;
    {
        const bool branch_taken_0x1d5cec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5CF0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x1d5cec) {
            ctx->pc = 0x1D5D38u;
            goto label_1d5d38;
        }
    }
    ctx->pc = 0x1D5CF4u;
label_1d5cf4:
    // 0x1d5cf4: 0x3c160034
    ctx->pc = 0x1d5cf4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
label_1d5cf8:
    // 0x1d5cf8: 0xd41821
    ctx->pc = 0x1d5cf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
label_1d5cfc:
    // 0x1d5cfc: 0x0
    ctx->pc = 0x1d5cfcu;
    // NOP
label_1d5d00:
    // 0x1d5d00: 0x90620004
    ctx->pc = 0x1d5d00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1d5d04:
    // 0x1d5d04: 0x10400006
label_1d5d08:
    if (ctx->pc == 0x1D5D08u) {
        ctx->pc = 0x1D5D08u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x1D5D0Cu;
        goto label_1d5d0c;
    }
    ctx->pc = 0x1D5D04u;
    {
        const bool branch_taken_0x1d5d04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5D08u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1d5d04) {
            ctx->pc = 0x1D5D20u;
            goto label_1d5d20;
        }
    }
    ctx->pc = 0x1D5D0Cu;
label_1d5d0c:
    // 0x1d5d0c: 0x90630004
    ctx->pc = 0x1d5d0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1d5d10:
    // 0x1d5d10: 0x27a5000c
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 12));
label_1d5d14:
    // 0x1d5d14: 0x24e70001
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1d5d18:
    // 0x1d5d18: 0xa21021
    ctx->pc = 0x1d5d18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1d5d1c:
    // 0x1d5d1c: 0xa4430000
    ctx->pc = 0x1d5d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_1d5d20:
    // 0x1d5d20: 0x24c60001
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1d5d24:
    // 0x1d5d24: 0xc4102a
    ctx->pc = 0x1d5d24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
label_1d5d28:
    // 0x1d5d28: 0x1440fff5
label_1d5d2c:
    if (ctx->pc == 0x1D5D2Cu) {
        ctx->pc = 0x1D5D2Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        ctx->pc = 0x1D5D30u;
        goto label_1d5d30;
    }
    ctx->pc = 0x1D5D28u;
    {
        const bool branch_taken_0x1d5d28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5D2Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
        if (branch_taken_0x1d5d28) {
            ctx->pc = 0x1D5D00u;
            goto label_1d5d00;
        }
    }
    ctx->pc = 0x1D5D30u;
label_1d5d30:
    // 0x1d5d30: 0x10000003
label_1d5d34:
    if (ctx->pc == 0x1D5D34u) {
        ctx->pc = 0x1D5D34u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->pc = 0x1D5D38u;
        goto label_1d5d38;
    }
    ctx->pc = 0x1D5D30u;
    {
        const bool branch_taken_0x1d5d30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5D34u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        if (branch_taken_0x1d5d30) {
            ctx->pc = 0x1D5D40u;
            goto label_1d5d40;
        }
    }
    ctx->pc = 0x1D5D38u;
label_1d5d38:
    // 0x1d5d38: 0x3c160034
    ctx->pc = 0x1d5d38u;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
label_1d5d3c:
    // 0x1d5d3c: 0xafa70008
    ctx->pc = 0x1d5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_1d5d40:
    // 0x1d5d40: 0x26b02840
    ctx->pc = 0x1d5d40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5d44:
    // 0x1d5d44: 0xc075846
label_1d5d48:
    if (ctx->pc == 0x1D5D48u) {
        ctx->pc = 0x1D5D48u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x1D5D4Cu;
        goto label_1d5d4c;
    }
    ctx->pc = 0x1D5D44u;
    SET_GPR_U32(ctx, 31, 0x1D5D4Cu);
    ctx->pc = 0x1D5D48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->pc = 0x1D6118u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6118_0x1d6118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5D4Cu; }
    }
    if (ctx->pc != 0x1D5D4Cu) { return; }
    ctx->pc = 0x1D5D4Cu;
label_1d5d4c:
    // 0x1d5d4c: 0x97a3000c
    ctx->pc = 0x1d5d4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_1d5d50:
    // 0x1d5d50: 0x10600004
label_1d5d54:
    if (ctx->pc == 0x1D5D54u) {
        ctx->pc = 0x1D5D54u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1D5D58u;
        goto label_1d5d58;
    }
    ctx->pc = 0x1D5D50u;
    {
        const bool branch_taken_0x1d5d50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5D54u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x1d5d50) {
            ctx->pc = 0x1D5D64u;
            goto label_1d5d64;
        }
    }
    ctx->pc = 0x1D5D58u;
label_1d5d58:
    // 0x1d5d58: 0x8e02000c
    ctx->pc = 0x1d5d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d5d5c:
    // 0x1d5d5c: 0x5062000b
label_1d5d60:
    if (ctx->pc == 0x1D5D60u) {
        ctx->pc = 0x1D5D60u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1D5D64u;
        goto label_1d5d64;
    }
    ctx->pc = 0x1D5D5Cu;
    {
        const bool branch_taken_0x1d5d5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d5d5c) {
            ctx->pc = 0x1D5D60u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x1D5D8Cu;
            goto label_1d5d8c;
        }
    }
    ctx->pc = 0x1D5D64u;
label_1d5d64:
    // 0x1d5d64: 0xa620000c
    ctx->pc = 0x1d5d64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_1d5d68:
    // 0x1d5d68: 0x24020001
    ctx->pc = 0x1d5d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d5d6c:
    // 0x1d5d6c: 0xae220008
    ctx->pc = 0x1d5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d5d70:
    // 0x1d5d70: 0xa6400010
    ctx->pc = 0x1d5d70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
label_1d5d74:
    // 0x1d5d74: 0x8fa20000
    ctx->pc = 0x1d5d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5d78:
    // 0x1d5d78: 0xae220000
    ctx->pc = 0x1d5d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d5d7c:
    // 0x1d5d7c: 0x8fa30004
    ctx->pc = 0x1d5d7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d5d80:
    // 0x1d5d80: 0xae230004
    ctx->pc = 0x1d5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1d5d84:
    // 0x1d5d84: 0x10000086
label_1d5d88:
    if (ctx->pc == 0x1D5D88u) {
        ctx->pc = 0x1D5D88u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1D5D8Cu;
        goto label_1d5d8c;
    }
    ctx->pc = 0x1D5D84u;
    {
        const bool branch_taken_0x1d5d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5D88u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1d5d84) {
            ctx->pc = 0x1D5FA0u;
            goto label_1d5fa0;
        }
    }
    ctx->pc = 0x1D5D8Cu;
label_1d5d8c:
    // 0x1d5d8c: 0x10400037
label_1d5d90:
    if (ctx->pc == 0x1D5D90u) {
        ctx->pc = 0x1D5D90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x1D5D94u;
        goto label_1d5d94;
    }
    ctx->pc = 0x1D5D8Cu;
    {
        const bool branch_taken_0x1d5d8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5D90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x1d5d8c) {
            ctx->pc = 0x1D5E6Cu;
            goto label_1d5e6c;
        }
    }
    ctx->pc = 0x1D5D94u;
label_1d5d94:
    // 0x1d5d94: 0x582d
    ctx->pc = 0x1d5d94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5d98:
    // 0x1d5d98: 0x302d
    ctx->pc = 0x1d5d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5d9c:
    // 0x1d5d9c: 0x18800030
label_1d5da0:
    if (ctx->pc == 0x1D5DA0u) {
        ctx->pc = 0x1D5DA0u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DA4u;
        goto label_1d5da4;
    }
    ctx->pc = 0x1D5D9Cu;
    {
        const bool branch_taken_0x1d5d9c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5DA0u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d9c) {
            ctx->pc = 0x1D5E60u;
            goto label_1d5e60;
        }
    }
    ctx->pc = 0x1D5DA4u;
label_1d5da4:
    // 0x1d5da4: 0x2630000c
    ctx->pc = 0x1d5da4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
label_1d5da8:
    // 0x1d5da8: 0x26a32840
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5dac:
    // 0x1d5dac: 0x0
    ctx->pc = 0x1d5dacu;
    // NOP
label_1d5db0:
    // 0x1d5db0: 0x8c620010
    ctx->pc = 0x1d5db0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1d5db4:
    // 0x1d5db4: 0x18400017
label_1d5db8:
    if (ctx->pc == 0x1D5DB8u) {
        ctx->pc = 0x1D5DB8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DBCu;
        goto label_1d5dbc;
    }
    ctx->pc = 0x1D5DB4u;
    {
        const bool branch_taken_0x1d5db4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5DB8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5db4) {
            ctx->pc = 0x1D5E14u;
            goto label_1d5e14;
        }
    }
    ctx->pc = 0x1D5DBCu;
label_1d5dbc:
    // 0x1d5dbc: 0x27a5000c
    ctx->pc = 0x1d5dbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 12));
label_1d5dc0:
    // 0x1d5dc0: 0x64840
    ctx->pc = 0x1d5dc0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), 1));
label_1d5dc4:
    // 0x1d5dc4: 0xa0502d
    ctx->pc = 0x1d5dc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5dc8:
    // 0x1d5dc8: 0x94620014
    ctx->pc = 0x1d5dc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5dcc:
    // 0x1d5dcc: 0x1491821
    ctx->pc = 0x1d5dccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_1d5dd0:
    // 0x1d5dd0: 0x94640000
    ctx->pc = 0x1d5dd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5dd4:
    // 0x1d5dd4: 0x1082000f
label_1d5dd8:
    if (ctx->pc == 0x1D5DD8u) {
        ctx->pc = 0x1D5DD8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x1D5DDCu;
        goto label_1d5ddc;
    }
    ctx->pc = 0x1D5DD4u;
    {
        const bool branch_taken_0x1d5dd4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D5DD8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1d5dd4) {
            ctx->pc = 0x1D5E14u;
            goto label_1d5e14;
        }
    }
    ctx->pc = 0x1D5DDCu;
label_1d5ddc:
    // 0x1d5ddc: 0x26a52840
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5de0:
    // 0x1d5de0: 0x24e70001
    ctx->pc = 0x1d5de0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1d5de4:
    // 0x1d5de4: 0x8ca20010
    ctx->pc = 0x1d5de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1d5de8:
    // 0x1d5de8: 0xe2102a
    ctx->pc = 0x1d5de8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
label_1d5dec:
    // 0x1d5dec: 0x1040000a
label_1d5df0:
    if (ctx->pc == 0x1D5DF0u) {
        ctx->pc = 0x1D5DF0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x1D5DF4u;
        goto label_1d5df4;
    }
    ctx->pc = 0x1D5DECu;
    {
        const bool branch_taken_0x1d5dec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5DF0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1d5dec) {
            ctx->pc = 0x1D5E18u;
            goto label_1d5e18;
        }
    }
    ctx->pc = 0x1D5DF4u;
label_1d5df4:
    // 0x1d5df4: 0x1492021
    ctx->pc = 0x1d5df4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_1d5df8:
    // 0x1d5df8: 0xa31821
    ctx->pc = 0x1d5df8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d5dfc:
    // 0x1d5dfc: 0x94850000
    ctx->pc = 0x1d5dfcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1d5e00:
    // 0x1d5e00: 0x94620014
    ctx->pc = 0x1d5e00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5e04:
    // 0x1d5e04: 0x14a2fff6
label_1d5e08:
    if (ctx->pc == 0x1D5E08u) {
        ctx->pc = 0x1D5E08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 10304));
        ctx->pc = 0x1D5E0Cu;
        goto label_1d5e0c;
    }
    ctx->pc = 0x1D5E04u;
    {
        const bool branch_taken_0x1d5e04 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D5E08u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 10304));
        if (branch_taken_0x1d5e04) {
            ctx->pc = 0x1D5DE0u;
            goto label_1d5de0;
        }
    }
    ctx->pc = 0x1D5E0Cu;
label_1d5e0c:
    // 0x1d5e0c: 0x10000003
label_1d5e10:
    if (ctx->pc == 0x1D5E10u) {
        ctx->pc = 0x1D5E10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 10304));
        ctx->pc = 0x1D5E14u;
        goto label_1d5e14;
    }
    ctx->pc = 0x1D5E0Cu;
    {
        const bool branch_taken_0x1d5e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5E10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 10304));
        if (branch_taken_0x1d5e0c) {
            ctx->pc = 0x1D5E1Cu;
            goto label_1d5e1c;
        }
    }
    ctx->pc = 0x1D5E14u;
label_1d5e14:
    // 0x1d5e14: 0x24c80001
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 6), 1));
label_1d5e18:
    // 0x1d5e18: 0x26a22840
    ctx->pc = 0x1d5e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5e1c:
    // 0x1d5e1c: 0x8c430010
    ctx->pc = 0x1d5e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d5e20:
    // 0x1d5e20: 0x54e3000a
label_1d5e24:
    if (ctx->pc == 0x1D5E24u) {
        ctx->pc = 0x1D5E24u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E28u;
        goto label_1d5e28;
    }
    ctx->pc = 0x1D5E20u;
    {
        const bool branch_taken_0x1d5e20 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d5e20) {
            ctx->pc = 0x1D5E24u;
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5E28u;
label_1d5e28:
    // 0x1d5e28: 0x62040
    ctx->pc = 0x1d5e28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 1));
label_1d5e2c:
    // 0x1d5e2c: 0x27a2000c
    ctx->pc = 0x1d5e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 12));
label_1d5e30:
    // 0x1d5e30: 0x441021
    ctx->pc = 0x1d5e30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d5e34:
    // 0x1d5e34: 0xb1840
    ctx->pc = 0x1d5e34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 11), 1));
label_1d5e38:
    // 0x1d5e38: 0x94440000
    ctx->pc = 0x1d5e38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5e3c:
    // 0x1d5e3c: 0x2031821
    ctx->pc = 0x1d5e3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1d5e40:
    // 0x1d5e40: 0x256b0001
    ctx->pc = 0x1d5e40u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
label_1d5e44:
    // 0x1d5e44: 0xa4640000
    ctx->pc = 0x1d5e44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_1d5e48:
    // 0x1d5e48: 0x100302d
    ctx->pc = 0x1d5e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d5e4c:
    // 0x1d5e4c: 0xcc102a
    ctx->pc = 0x1d5e4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 12)));
label_1d5e50:
    // 0x1d5e50: 0x1440ffd7
label_1d5e54:
    if (ctx->pc == 0x1D5E54u) {
        ctx->pc = 0x1D5E54u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 10304));
        ctx->pc = 0x1D5E58u;
        goto label_1d5e58;
    }
    ctx->pc = 0x1D5E50u;
    {
        const bool branch_taken_0x1d5e50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5E54u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 10304));
        if (branch_taken_0x1d5e50) {
            ctx->pc = 0x1D5DB0u;
            goto label_1d5db0;
        }
    }
    ctx->pc = 0x1D5E58u;
label_1d5e58:
    // 0x1d5e58: 0x10000015
label_1d5e5c:
    if (ctx->pc == 0x1D5E5Cu) {
        ctx->pc = 0x1D5E5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 11));
        ctx->pc = 0x1D5E60u;
        goto label_1d5e60;
    }
    ctx->pc = 0x1D5E58u;
    {
        const bool branch_taken_0x1d5e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5E5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 11));
        if (branch_taken_0x1d5e58) {
            ctx->pc = 0x1D5EB0u;
            goto label_1d5eb0;
        }
    }
    ctx->pc = 0x1D5E60u;
label_1d5e60:
    // 0x1d5e60: 0x2630000c
    ctx->pc = 0x1d5e60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
label_1d5e64:
    // 0x1d5e64: 0x10000012
label_1d5e68:
    if (ctx->pc == 0x1D5E68u) {
        ctx->pc = 0x1D5E68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 11));
        ctx->pc = 0x1D5E6Cu;
        goto label_1d5e6c;
    }
    ctx->pc = 0x1D5E64u;
    {
        const bool branch_taken_0x1d5e64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5E68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 11));
        if (branch_taken_0x1d5e64) {
            ctx->pc = 0x1D5EB0u;
            goto label_1d5eb0;
        }
    }
    ctx->pc = 0x1D5E6Cu;
label_1d5e6c:
    // 0x1d5e6c: 0x8fa70008
    ctx->pc = 0x1d5e6cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1d5e70:
    // 0x1d5e70: 0x18e0000d
label_1d5e74:
    if (ctx->pc == 0x1D5E74u) {
        ctx->pc = 0x1D5E74u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E78u;
        goto label_1d5e78;
    }
    ctx->pc = 0x1D5E70u;
    {
        const bool branch_taken_0x1d5e70 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1D5E74u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e70) {
            ctx->pc = 0x1D5EA8u;
            goto label_1d5ea8;
        }
    }
    ctx->pc = 0x1D5E78u;
label_1d5e78:
    // 0x1d5e78: 0x2630000c
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
label_1d5e7c:
    // 0x1d5e7c: 0x27a5000c
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 12));
label_1d5e80:
    // 0x1d5e80: 0x61040
    ctx->pc = 0x1d5e80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
label_1d5e84:
    // 0x1d5e84: 0xa21821
    ctx->pc = 0x1d5e84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1d5e88:
    // 0x1d5e88: 0x24c60001
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1d5e8c:
    // 0x1d5e8c: 0x94640000
    ctx->pc = 0x1d5e8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5e90:
    // 0x1d5e90: 0x2021021
    ctx->pc = 0x1d5e90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d5e94:
    // 0x1d5e94: 0xc7182a
    ctx->pc = 0x1d5e94u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
label_1d5e98:
    // 0x1d5e98: 0x1460fff9
label_1d5e9c:
    if (ctx->pc == 0x1D5E9Cu) {
        ctx->pc = 0x1D5E9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x1D5EA0u;
        goto label_1d5ea0;
    }
    ctx->pc = 0x1D5E98u;
    {
        const bool branch_taken_0x1d5e98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D5E9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1d5e98) {
            ctx->pc = 0x1D5E80u;
            goto label_1d5e80;
        }
    }
    ctx->pc = 0x1D5EA0u;
label_1d5ea0:
    // 0x1d5ea0: 0x10000003
label_1d5ea4:
    if (ctx->pc == 0x1D5EA4u) {
        ctx->pc = 0x1D5EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        ctx->pc = 0x1D5EA8u;
        goto label_1d5ea8;
    }
    ctx->pc = 0x1D5EA0u;
    {
        const bool branch_taken_0x1d5ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
        if (branch_taken_0x1d5ea0) {
            ctx->pc = 0x1D5EB0u;
            goto label_1d5eb0;
        }
    }
    ctx->pc = 0x1D5EA8u;
label_1d5ea8:
    // 0x1d5ea8: 0x2630000c
    ctx->pc = 0x1d5ea8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 12));
label_1d5eac:
    // 0x1d5eac: 0xae260008
    ctx->pc = 0x1d5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_1d5eb0:
    // 0x1d5eb0: 0x8fa20000
    ctx->pc = 0x1d5eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5eb4:
    // 0x1d5eb4: 0x26b32840
    ctx->pc = 0x1d5eb4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 21), 10304));
label_1d5eb8:
    // 0x1d5eb8: 0x8e270008
    ctx->pc = 0x1d5eb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d5ebc:
    // 0x1d5ebc: 0x200402d
    ctx->pc = 0x1d5ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ec0:
    // 0x1d5ec0: 0xae220000
    ctx->pc = 0x1d5ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d5ec4:
    // 0x1d5ec4: 0x200482d
    ctx->pc = 0x1d5ec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ec8:
    // 0x1d5ec8: 0x8fa20004
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d5ecc:
    // 0x1d5ecc: 0x92260000
    ctx->pc = 0x1d5eccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5ed0:
    // 0x1d5ed0: 0xae220004
    ctx->pc = 0x1d5ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1d5ed4:
    // 0x1d5ed4: 0x8e640094
    ctx->pc = 0x1d5ed4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1d5ed8:
    // 0x1d5ed8: 0xc075888
label_1d5edc:
    if (ctx->pc == 0x1D5EDCu) {
        ctx->pc = 0x1D5EDCu;
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1D5EE0u;
        goto label_1d5ee0;
    }
    ctx->pc = 0x1D5ED8u;
    SET_GPR_U32(ctx, 31, 0x1D5EE0u);
    ctx->pc = 0x1D5EDCu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x1D6220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6220_0x1d6220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5EE0u; }
    }
    if (ctx->pc != 0x1D5EE0u) { return; }
    ctx->pc = 0x1D5EE0u;
label_1d5ee0:
    // 0x1d5ee0: 0x8e220008
    ctx->pc = 0x1d5ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d5ee4:
    // 0x1d5ee4: 0x1840000c
label_1d5ee8:
    if (ctx->pc == 0x1D5EE8u) {
        ctx->pc = 0x1D5EE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x1D5EECu;
        goto label_1d5eec;
    }
    ctx->pc = 0x1D5EE4u;
    {
        const bool branch_taken_0x1d5ee4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5EE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x1d5ee4) {
            ctx->pc = 0x1D5F18u;
            goto label_1d5f18;
        }
    }
    ctx->pc = 0x1D5EECu;
label_1d5eec:
    // 0x1d5eec: 0x8e440008
    ctx->pc = 0x1d5eecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d5ef0:
    // 0x1d5ef0: 0x21040
    ctx->pc = 0x1d5ef0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1d5ef4:
    // 0x1d5ef4: 0x2021021
    ctx->pc = 0x1d5ef4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d5ef8:
    // 0x1d5ef8: 0x94430000
    ctx->pc = 0x1d5ef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5efc:
    // 0x1d5efc: 0x18800028
label_1d5f00:
    if (ctx->pc == 0x1D5F00u) {
        ctx->pc = 0x1D5F00u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D5F04u;
        goto label_1d5f04;
    }
    ctx->pc = 0x1D5EFCu;
    {
        const bool branch_taken_0x1d5efc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5F00u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1d5efc) {
            ctx->pc = 0x1D5FA0u;
            goto label_1d5fa0;
        }
    }
    ctx->pc = 0x1D5F04u;
label_1d5f04:
    // 0x1d5f04: 0x8e42000c
    ctx->pc = 0x1d5f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d5f08:
    // 0x1d5f08: 0x18400025
label_1d5f0c:
    if (ctx->pc == 0x1D5F0Cu) {
        ctx->pc = 0x1D5F0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D5F10u;
        goto label_1d5f10;
    }
    ctx->pc = 0x1D5F08u;
    {
        const bool branch_taken_0x1d5f08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5F0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d5f08) {
            ctx->pc = 0x1D5FA0u;
            goto label_1d5fa0;
        }
    }
    ctx->pc = 0x1D5F10u;
label_1d5f10:
    // 0x1d5f10: 0x10000023
label_1d5f14:
    if (ctx->pc == 0x1D5F14u) {
        ctx->pc = 0x1D5F14u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1D5F18u;
        goto label_1d5f18;
    }
    ctx->pc = 0x1D5F10u;
    {
        const bool branch_taken_0x1d5f10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5F14u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1d5f10) {
            ctx->pc = 0x1D5FA0u;
            goto label_1d5fa0;
        }
    }
    ctx->pc = 0x1D5F18u;
label_1d5f18:
    // 0x1d5f18: 0x27b00090
    ctx->pc = 0x1d5f18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 144));
label_1d5f1c:
    // 0x1d5f1c: 0x93a50004
    ctx->pc = 0x1d5f1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_1d5f20:
    // 0x1d5f20: 0x8e640094
    ctx->pc = 0x1d5f20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_1d5f24:
    // 0x1d5f24: 0x37a8000c
    ctx->pc = 0x1d5f24u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 12));
label_1d5f28:
    // 0x1d5f28: 0x93a60000
    ctx->pc = 0x1d5f28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5f2c:
    // 0x1d5f2c: 0x200482d
    ctx->pc = 0x1d5f2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f30:
    // 0x1d5f30: 0xc075888
label_1d5f34:
    if (ctx->pc == 0x1D5F34u) {
        ctx->pc = 0x1D5F34u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x1D5F38u;
        goto label_1d5f38;
    }
    ctx->pc = 0x1D5F30u;
    SET_GPR_U32(ctx, 31, 0x1D5F38u);
    ctx->pc = 0x1D5F34u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x1D6220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6220_0x1d6220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5F38u; }
    }
    if (ctx->pc != 0x1D5F38u) { return; }
    ctx->pc = 0x1D5F38u;
label_1d5f38:
    // 0x1d5f38: 0x8fa40008
    ctx->pc = 0x1d5f38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1d5f3c:
    // 0x1d5f3c: 0x1880000e
label_1d5f40:
    if (ctx->pc == 0x1D5F40u) {
        ctx->pc = 0x1D5F40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F44u;
        goto label_1d5f44;
    }
    ctx->pc = 0x1D5F3Cu;
    {
        const bool branch_taken_0x1d5f3c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5F40u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f3c) {
            ctx->pc = 0x1D5F78u;
            goto label_1d5f78;
        }
    }
    ctx->pc = 0x1D5F44u;
label_1d5f44:
    // 0x1d5f44: 0x97a20090
    ctx->pc = 0x1d5f44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
label_1d5f48:
    // 0x1d5f48: 0x96430010
    ctx->pc = 0x1d5f48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_1d5f4c:
    // 0x1d5f4c: 0x1043000a
label_1d5f50:
    if (ctx->pc == 0x1D5F50u) {
        ctx->pc = 0x1D5F50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F54u;
        goto label_1d5f54;
    }
    ctx->pc = 0x1D5F4Cu;
    {
        const bool branch_taken_0x1d5f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D5F50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f4c) {
            ctx->pc = 0x1D5F78u;
            goto label_1d5f78;
        }
    }
    ctx->pc = 0x1D5F54u;
label_1d5f54:
    // 0x1d5f54: 0x200482d
    ctx->pc = 0x1d5f54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f58:
    // 0x1d5f58: 0x80182d
    ctx->pc = 0x1d5f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f5c:
    // 0x1d5f5c: 0x24c60001
    ctx->pc = 0x1d5f5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1d5f60:
    // 0x1d5f60: 0xc3102a
    ctx->pc = 0x1d5f60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
label_1d5f64:
    // 0x1d5f64: 0x10400004
label_1d5f68:
    if (ctx->pc == 0x1D5F68u) {
        ctx->pc = 0x1D5F68u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
        ctx->pc = 0x1D5F6Cu;
        goto label_1d5f6c;
    }
    ctx->pc = 0x1D5F64u;
    {
        const bool branch_taken_0x1d5f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5F68u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
        if (branch_taken_0x1d5f64) {
            ctx->pc = 0x1D5F78u;
            goto label_1d5f78;
        }
    }
    ctx->pc = 0x1D5F6Cu;
label_1d5f6c:
    // 0x1d5f6c: 0x95220000
    ctx->pc = 0x1d5f6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_1d5f70:
    // 0x1d5f70: 0x5445fffb
label_1d5f74:
    if (ctx->pc == 0x1D5F74u) {
        ctx->pc = 0x1D5F74u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x1D5F78u;
        goto label_1d5f78;
    }
    ctx->pc = 0x1D5F70u;
    {
        const bool branch_taken_0x1d5f70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x1d5f70) {
            ctx->pc = 0x1D5F74u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x1D5F60u;
            goto label_1d5f60;
        }
    }
    ctx->pc = 0x1D5F78u;
label_1d5f78:
    // 0x1d5f78: 0x14c4000a
label_1d5f7c:
    if (ctx->pc == 0x1D5F7Cu) {
        ctx->pc = 0x1D5F7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 10312));
        ctx->pc = 0x1D5F80u;
        goto label_1d5f80;
    }
    ctx->pc = 0x1D5F78u;
    {
        const bool branch_taken_0x1d5f78 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x1D5F7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 10312));
        if (branch_taken_0x1d5f78) {
            ctx->pc = 0x1D5FA4u;
            goto label_1d5fa4;
        }
    }
    ctx->pc = 0x1D5F80u;
label_1d5f80:
    // 0x1d5f80: 0xae400000
    ctx->pc = 0x1d5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1d5f84:
    // 0x1d5f84: 0x24020001
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d5f88:
    // 0x1d5f88: 0xae220008
    ctx->pc = 0x1d5f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d5f8c:
    // 0x1d5f8c: 0xa620000c
    ctx->pc = 0x1d5f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_1d5f90:
    // 0x1d5f90: 0x8fa20000
    ctx->pc = 0x1d5f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5f94:
    // 0x1d5f94: 0xae220000
    ctx->pc = 0x1d5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d5f98:
    // 0x1d5f98: 0x8fa30004
    ctx->pc = 0x1d5f98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d5f9c:
    // 0x1d5f9c: 0xae230004
    ctx->pc = 0x1d5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1d5fa0:
    // 0x1d5fa0: 0x26c52848
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 10312));
label_1d5fa4:
    // 0x1d5fa4: 0x3a0202d
    ctx->pc = 0x1d5fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d5fa8:
    // 0x1d5fa8: 0x302d
    ctx->pc = 0x1d5fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5fac:
    // 0x1d5fac: 0x0
    ctx->pc = 0x1d5facu;
    // NOP
label_1d5fb0:
    // 0x1d5fb0: 0x90830000
    ctx->pc = 0x1d5fb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1d5fb4:
    // 0x1d5fb4: 0x24c60001
    ctx->pc = 0x1d5fb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1d5fb8:
    // 0x1d5fb8: 0x24840001
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1d5fbc:
    // 0x1d5fbc: 0x2cc20088
    ctx->pc = 0x1d5fbcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 136));
label_1d5fc0:
    // 0x1d5fc0: 0xa0a30000
    ctx->pc = 0x1d5fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_1d5fc4:
    // 0x1d5fc4: 0x24a50001
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1d5fc8:
    // 0x1d5fc8: 0x1440fff9
label_1d5fcc:
    if (ctx->pc == 0x1D5FCCu) {
        ctx->pc = 0x1D5FD0u;
        goto label_1d5fd0;
    }
    ctx->pc = 0x1D5FC8u;
    {
        const bool branch_taken_0x1d5fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d5fc8) {
            ctx->pc = 0x1D5FB0u;
            goto label_1d5fb0;
        }
    }
    ctx->pc = 0x1D5FD0u;
label_1d5fd0:
    // 0x1d5fd0: 0x102d
    ctx->pc = 0x1d5fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5fd4:
    // 0x1d5fd4: 0xdfbf0190
    ctx->pc = 0x1d5fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_1d5fd8:
    // 0x1d5fd8: 0xdfb60180
    ctx->pc = 0x1d5fd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_1d5fdc:
    // 0x1d5fdc: 0xdfb50170
    ctx->pc = 0x1d5fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_1d5fe0:
    // 0x1d5fe0: 0xdfb40160
    ctx->pc = 0x1d5fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_1d5fe4:
    // 0x1d5fe4: 0xdfb30150
    ctx->pc = 0x1d5fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1d5fe8:
    // 0x1d5fe8: 0xdfb20140
    ctx->pc = 0x1d5fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1d5fec:
    // 0x1d5fec: 0xdfb10130
    ctx->pc = 0x1d5fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1d5ff0:
    // 0x1d5ff0: 0xdfb00120
    ctx->pc = 0x1d5ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1d5ff4:
    // 0x1d5ff4: 0x3e00008
label_1d5ff8:
    if (ctx->pc == 0x1D5FF8u) {
        ctx->pc = 0x1D5FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x1D5FFCu;
        goto label_1d5ffc;
    }
    ctx->pc = 0x1D5FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5FF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5FFCu;
label_1d5ffc:
    // 0x1d5ffc: 0x0
    ctx->pc = 0x1d5ffcu;
    // NOP
label_1d6000:
    // 0x1d6000: 0x3c020034
    ctx->pc = 0x1d6000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_1d6004:
    // 0x1d6004: 0x3c030034
    ctx->pc = 0x1d6004u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_1d6008:
    // 0x1d6008: 0x24442980
    ctx->pc = 0x1d6008u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 10624));
label_1d600c:
    // 0x1d600c: 0x90820006
    ctx->pc = 0x1d600cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_1d6010:
    // 0x1d6010: 0x10400003
label_1d6014:
    if (ctx->pc == 0x1D6014u) {
        ctx->pc = 0x1D6014u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10456)));
        ctx->pc = 0x1D6018u;
        goto label_1d6018;
    }
    ctx->pc = 0x1D6010u;
    {
        const bool branch_taken_0x1d6010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D6014u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10456)));
        if (branch_taken_0x1d6010) {
            ctx->pc = 0x1D6020u;
            goto label_1d6020;
        }
    }
    ctx->pc = 0x1D6018u;
label_1d6018:
    // 0x1d6018: 0x3e00008
label_1d601c:
    if (ctx->pc == 0x1D601Cu) {
        ctx->pc = 0x1D601Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D6020u;
        goto label_1d6020;
    }
    ctx->pc = 0x1D6018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D601Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6020u;
label_1d6020:
    // 0x1d6020: 0x24050006
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_1d6024:
    // 0x1d6024: 0x0
    ctx->pc = 0x1d6024u;
    // NOP
label_1d6028:
    // 0x1d6028: 0x90820000
    ctx->pc = 0x1d6028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1d602c:
    // 0x1d602c: 0x24a5ffff
    ctx->pc = 0x1d602cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
label_1d6030:
    // 0x1d6030: 0x24840001
    ctx->pc = 0x1d6030u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1d6034:
    // 0x1d6034: 0xa0620000
    ctx->pc = 0x1d6034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1d6038:
    // 0x1d6038: 0x24630001
    ctx->pc = 0x1d6038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1d603c:
    // 0x1d603c: 0x4a1fffa
label_1d6040:
    if (ctx->pc == 0x1D6040u) {
        ctx->pc = 0x1D6044u;
        goto label_1d6044;
    }
    ctx->pc = 0x1D603Cu;
    {
        const bool branch_taken_0x1d603c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1d603c) {
            ctx->pc = 0x1D6028u;
            goto label_1d6028;
        }
    }
    ctx->pc = 0x1D6044u;
label_1d6044:
    // 0x1d6044: 0x3e00008
label_1d6048:
    if (ctx->pc == 0x1D6048u) {
        ctx->pc = 0x1D6048u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D604Cu;
        goto label_1d604c;
    }
    ctx->pc = 0x1D6044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6048u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D604Cu;
label_1d604c:
    // 0x1d604c: 0x0
    ctx->pc = 0x1d604cu;
    // NOP
label_1d6050:
    // 0x1d6050: 0x3c020034
    ctx->pc = 0x1d6050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_1d6054:
    // 0x1d6054: 0x3c050034
    ctx->pc = 0x1d6054u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
label_1d6058:
    // 0x1d6058: 0x90432981
    ctx->pc = 0x1d6058u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10625)));
label_1d605c:
    // 0x1d605c: 0x90a42941
    ctx->pc = 0x1d605cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10561)));
label_1d6060:
    // 0x1d6060: 0x2402ffff
    ctx->pc = 0x1d6060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6064:
    // 0x1d6064: 0x641826
    ctx->pc = 0x1d6064u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d6068:
    // 0x1d6068: 0x3e00008
label_1d606c:
    if (ctx->pc == 0x1D606Cu) {
        ctx->pc = 0x1D606Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = 0x1D6070u;
        goto label_1d6070;
    }
    ctx->pc = 0x1D6068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D606Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6070u;
label_1d6070:
    // 0x1d6070: 0x3c020034
    ctx->pc = 0x1d6070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_1d6074:
    // 0x1d6074: 0x3c050034
    ctx->pc = 0x1d6074u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
label_1d6078:
    // 0x1d6078: 0x90432981
    ctx->pc = 0x1d6078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10625)));
label_1d607c:
    // 0x1d607c: 0x90a42941
    ctx->pc = 0x1d607cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10561)));
label_1d6080:
    // 0x1d6080: 0x2402ffff
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6084:
    // 0x1d6084: 0x641826
    ctx->pc = 0x1d6084u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d6088:
    // 0x1d6088: 0x3e00008
label_1d608c:
    if (ctx->pc == 0x1D608Cu) {
        ctx->pc = 0x1D608Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = 0x1D6090u;
        goto label_1d6090;
    }
    ctx->pc = 0x1D6088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D608Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6090u;
label_1d6090:
    // 0x1d6090: 0x3c050034
    ctx->pc = 0x1d6090u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
label_1d6094:
    // 0x1d6094: 0x8ca22840
    ctx->pc = 0x1d6094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
label_1d6098:
    // 0x1d6098: 0x1840001a
label_1d609c:
    if (ctx->pc == 0x1D609Cu) {
        ctx->pc = 0x1D609Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D60A0u;
        goto label_1d60a0;
    }
    ctx->pc = 0x1D6098u;
    {
        const bool branch_taken_0x1d6098 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D609Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1d6098) {
            ctx->pc = 0x1D6104u;
            goto label_1d6104;
        }
    }
    ctx->pc = 0x1D60A0u;
label_1d60a0:
    // 0x1d60a0: 0x24a22840
    ctx->pc = 0x1d60a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 10304));
label_1d60a4:
    // 0x1d60a4: 0x8c430004
    ctx->pc = 0x1d60a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d60a8:
    // 0x1d60a8: 0x24630010
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_1d60ac:
    // 0x1d60ac: 0x0
    ctx->pc = 0x1d60acu;
    // NOP
label_1d60b0:
    // 0x1d60b0: 0x8c620008
    ctx->pc = 0x1d60b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d60b4:
    // 0x1d60b4: 0x1840000f
label_1d60b8:
    if (ctx->pc == 0x1D60B8u) {
        ctx->pc = 0x1D60B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
        ctx->pc = 0x1D60BCu;
        goto label_1d60bc;
    }
    ctx->pc = 0x1D60B4u;
    {
        const bool branch_taken_0x1d60b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D60B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
        if (branch_taken_0x1d60b4) {
            ctx->pc = 0x1D60F4u;
            goto label_1d60f4;
        }
    }
    ctx->pc = 0x1D60BCu;
label_1d60bc:
    // 0x1d60bc: 0x8c62000c
    ctx->pc = 0x1d60bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d60c0:
    // 0x1d60c0: 0x1840000c
label_1d60c4:
    if (ctx->pc == 0x1D60C4u) {
        ctx->pc = 0x1D60C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
        ctx->pc = 0x1D60C8u;
        goto label_1d60c8;
    }
    ctx->pc = 0x1D60C0u;
    {
        const bool branch_taken_0x1d60c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D60C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
        if (branch_taken_0x1d60c0) {
            ctx->pc = 0x1D60F4u;
            goto label_1d60f4;
        }
    }
    ctx->pc = 0x1D60C8u;
label_1d60c8:
    // 0x1d60c8: 0x8c620000
    ctx->pc = 0x1d60c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d60cc:
    // 0x1d60cc: 0x50400009
label_1d60d0:
    if (ctx->pc == 0x1D60D0u) {
        ctx->pc = 0x1D60D0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
        ctx->pc = 0x1D60D4u;
        goto label_1d60d4;
    }
    ctx->pc = 0x1D60CCu;
    {
        const bool branch_taken_0x1d60cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d60cc) {
            ctx->pc = 0x1D60D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
            ctx->pc = 0x1D60F4u;
            goto label_1d60f4;
        }
    }
    ctx->pc = 0x1D60D4u;
label_1d60d4:
    // 0x1d60d4: 0x4400006
label_1d60d8:
    if (ctx->pc == 0x1D60D8u) {
        ctx->pc = 0x1D60D8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
        ctx->pc = 0x1D60DCu;
        goto label_1d60dc;
    }
    ctx->pc = 0x1D60D4u;
    {
        const bool branch_taken_0x1d60d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D60D8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
        if (branch_taken_0x1d60d4) {
            ctx->pc = 0x1D60F0u;
            goto label_1d60f0;
        }
    }
    ctx->pc = 0x1D60DCu;
label_1d60dc:
    // 0x1d60dc: 0x10400005
label_1d60e0:
    if (ctx->pc == 0x1D60E0u) {
        ctx->pc = 0x1D60E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
        ctx->pc = 0x1D60E4u;
        goto label_1d60e4;
    }
    ctx->pc = 0x1D60DCu;
    {
        const bool branch_taken_0x1d60dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D60E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
        if (branch_taken_0x1d60dc) {
            ctx->pc = 0x1D60F4u;
            goto label_1d60f4;
        }
    }
    ctx->pc = 0x1D60E4u;
label_1d60e4:
    // 0x1d60e4: 0x8c620004
    ctx->pc = 0x1d60e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d60e8:
    // 0x1d60e8: 0x24420001
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1d60ec:
    // 0x1d60ec: 0xac620004
    ctx->pc = 0x1d60ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1d60f0:
    // 0x1d60f0: 0x8ca22840
    ctx->pc = 0x1d60f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 10304)));
label_1d60f4:
    // 0x1d60f4: 0x24840001
    ctx->pc = 0x1d60f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1d60f8:
    // 0x1d60f8: 0x82102a
    ctx->pc = 0x1d60f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_1d60fc:
    // 0x1d60fc: 0x1440ffec
label_1d6100:
    if (ctx->pc == 0x1D6100u) {
        ctx->pc = 0x1D6100u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 56));
        ctx->pc = 0x1D6104u;
        goto label_1d6104;
    }
    ctx->pc = 0x1D60FCu;
    {
        const bool branch_taken_0x1d60fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D6100u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 56));
        if (branch_taken_0x1d60fc) {
            ctx->pc = 0x1D60B0u;
            goto label_1d60b0;
        }
    }
    ctx->pc = 0x1D6104u;
label_1d6104:
    // 0x1d6104: 0xf
    ctx->pc = 0x1d6104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1d6108:
    // 0x1d6108: 0x42000038
    ctx->pc = 0x1d6108u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1d610c:
    // 0x1d610c: 0x3e00008
label_1d6110:
    if (ctx->pc == 0x1D6110u) {
        ctx->pc = 0x1D6110u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6114u;
        goto label_1d6114;
    }
    ctx->pc = 0x1D610Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6110u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D59C8u: goto label_1d59c8;
            case 0x1D59CCu: goto label_1d59cc;
            case 0x1D59D0u: goto label_1d59d0;
            case 0x1D59D4u: goto label_1d59d4;
            case 0x1D59D8u: goto label_1d59d8;
            case 0x1D59DCu: goto label_1d59dc;
            case 0x1D59E0u: goto label_1d59e0;
            case 0x1D59E4u: goto label_1d59e4;
            case 0x1D59E8u: goto label_1d59e8;
            case 0x1D59ECu: goto label_1d59ec;
            case 0x1D59F0u: goto label_1d59f0;
            case 0x1D59F4u: goto label_1d59f4;
            case 0x1D59F8u: goto label_1d59f8;
            case 0x1D59FCu: goto label_1d59fc;
            case 0x1D5A00u: goto label_1d5a00;
            case 0x1D5A04u: goto label_1d5a04;
            case 0x1D5A08u: goto label_1d5a08;
            case 0x1D5A0Cu: goto label_1d5a0c;
            case 0x1D5A10u: goto label_1d5a10;
            case 0x1D5A14u: goto label_1d5a14;
            case 0x1D5A18u: goto label_1d5a18;
            case 0x1D5A1Cu: goto label_1d5a1c;
            case 0x1D5A20u: goto label_1d5a20;
            case 0x1D5A24u: goto label_1d5a24;
            case 0x1D5A28u: goto label_1d5a28;
            case 0x1D5A2Cu: goto label_1d5a2c;
            case 0x1D5A30u: goto label_1d5a30;
            case 0x1D5A34u: goto label_1d5a34;
            case 0x1D5A38u: goto label_1d5a38;
            case 0x1D5A3Cu: goto label_1d5a3c;
            case 0x1D5A40u: goto label_1d5a40;
            case 0x1D5A44u: goto label_1d5a44;
            case 0x1D5A48u: goto label_1d5a48;
            case 0x1D5A4Cu: goto label_1d5a4c;
            case 0x1D5A50u: goto label_1d5a50;
            case 0x1D5A54u: goto label_1d5a54;
            case 0x1D5A58u: goto label_1d5a58;
            case 0x1D5A5Cu: goto label_1d5a5c;
            case 0x1D5A60u: goto label_1d5a60;
            case 0x1D5A64u: goto label_1d5a64;
            case 0x1D5A68u: goto label_1d5a68;
            case 0x1D5A6Cu: goto label_1d5a6c;
            case 0x1D5A70u: goto label_1d5a70;
            case 0x1D5A74u: goto label_1d5a74;
            case 0x1D5A78u: goto label_1d5a78;
            case 0x1D5A7Cu: goto label_1d5a7c;
            case 0x1D5A80u: goto label_1d5a80;
            case 0x1D5A84u: goto label_1d5a84;
            case 0x1D5A88u: goto label_1d5a88;
            case 0x1D5A8Cu: goto label_1d5a8c;
            case 0x1D5A90u: goto label_1d5a90;
            case 0x1D5A94u: goto label_1d5a94;
            case 0x1D5A98u: goto label_1d5a98;
            case 0x1D5A9Cu: goto label_1d5a9c;
            case 0x1D5AA0u: goto label_1d5aa0;
            case 0x1D5AA4u: goto label_1d5aa4;
            case 0x1D5AA8u: goto label_1d5aa8;
            case 0x1D5AACu: goto label_1d5aac;
            case 0x1D5AB0u: goto label_1d5ab0;
            case 0x1D5AB4u: goto label_1d5ab4;
            case 0x1D5AB8u: goto label_1d5ab8;
            case 0x1D5ABCu: goto label_1d5abc;
            case 0x1D5AC0u: goto label_1d5ac0;
            case 0x1D5AC4u: goto label_1d5ac4;
            case 0x1D5AC8u: goto label_1d5ac8;
            case 0x1D5ACCu: goto label_1d5acc;
            case 0x1D5AD0u: goto label_1d5ad0;
            case 0x1D5AD4u: goto label_1d5ad4;
            case 0x1D5AD8u: goto label_1d5ad8;
            case 0x1D5ADCu: goto label_1d5adc;
            case 0x1D5AE0u: goto label_1d5ae0;
            case 0x1D5AE4u: goto label_1d5ae4;
            case 0x1D5AE8u: goto label_1d5ae8;
            case 0x1D5AECu: goto label_1d5aec;
            case 0x1D5AF0u: goto label_1d5af0;
            case 0x1D5AF4u: goto label_1d5af4;
            case 0x1D5AF8u: goto label_1d5af8;
            case 0x1D5AFCu: goto label_1d5afc;
            case 0x1D5B00u: goto label_1d5b00;
            case 0x1D5B04u: goto label_1d5b04;
            case 0x1D5B08u: goto label_1d5b08;
            case 0x1D5B0Cu: goto label_1d5b0c;
            case 0x1D5B10u: goto label_1d5b10;
            case 0x1D5B14u: goto label_1d5b14;
            case 0x1D5B18u: goto label_1d5b18;
            case 0x1D5B1Cu: goto label_1d5b1c;
            case 0x1D5B20u: goto label_1d5b20;
            case 0x1D5B24u: goto label_1d5b24;
            case 0x1D5B28u: goto label_1d5b28;
            case 0x1D5B2Cu: goto label_1d5b2c;
            case 0x1D5B30u: goto label_1d5b30;
            case 0x1D5B34u: goto label_1d5b34;
            case 0x1D5B38u: goto label_1d5b38;
            case 0x1D5B3Cu: goto label_1d5b3c;
            case 0x1D5B40u: goto label_1d5b40;
            case 0x1D5B44u: goto label_1d5b44;
            case 0x1D5B48u: goto label_1d5b48;
            case 0x1D5B4Cu: goto label_1d5b4c;
            case 0x1D5B50u: goto label_1d5b50;
            case 0x1D5B54u: goto label_1d5b54;
            case 0x1D5B58u: goto label_1d5b58;
            case 0x1D5B5Cu: goto label_1d5b5c;
            case 0x1D5B60u: goto label_1d5b60;
            case 0x1D5B64u: goto label_1d5b64;
            case 0x1D5B68u: goto label_1d5b68;
            case 0x1D5B6Cu: goto label_1d5b6c;
            case 0x1D5B70u: goto label_1d5b70;
            case 0x1D5B74u: goto label_1d5b74;
            case 0x1D5B78u: goto label_1d5b78;
            case 0x1D5B7Cu: goto label_1d5b7c;
            case 0x1D5B80u: goto label_1d5b80;
            case 0x1D5B84u: goto label_1d5b84;
            case 0x1D5B88u: goto label_1d5b88;
            case 0x1D5B8Cu: goto label_1d5b8c;
            case 0x1D5B90u: goto label_1d5b90;
            case 0x1D5B94u: goto label_1d5b94;
            case 0x1D5B98u: goto label_1d5b98;
            case 0x1D5B9Cu: goto label_1d5b9c;
            case 0x1D5BA0u: goto label_1d5ba0;
            case 0x1D5BA4u: goto label_1d5ba4;
            case 0x1D5BA8u: goto label_1d5ba8;
            case 0x1D5BACu: goto label_1d5bac;
            case 0x1D5BB0u: goto label_1d5bb0;
            case 0x1D5BB4u: goto label_1d5bb4;
            case 0x1D5BB8u: goto label_1d5bb8;
            case 0x1D5BBCu: goto label_1d5bbc;
            case 0x1D5BC0u: goto label_1d5bc0;
            case 0x1D5BC4u: goto label_1d5bc4;
            case 0x1D5BC8u: goto label_1d5bc8;
            case 0x1D5BCCu: goto label_1d5bcc;
            case 0x1D5BD0u: goto label_1d5bd0;
            case 0x1D5BD4u: goto label_1d5bd4;
            case 0x1D5BD8u: goto label_1d5bd8;
            case 0x1D5BDCu: goto label_1d5bdc;
            case 0x1D5BE0u: goto label_1d5be0;
            case 0x1D5BE4u: goto label_1d5be4;
            case 0x1D5BE8u: goto label_1d5be8;
            case 0x1D5BECu: goto label_1d5bec;
            case 0x1D5BF0u: goto label_1d5bf0;
            case 0x1D5BF4u: goto label_1d5bf4;
            case 0x1D5BF8u: goto label_1d5bf8;
            case 0x1D5BFCu: goto label_1d5bfc;
            case 0x1D5C00u: goto label_1d5c00;
            case 0x1D5C04u: goto label_1d5c04;
            case 0x1D5C08u: goto label_1d5c08;
            case 0x1D5C0Cu: goto label_1d5c0c;
            case 0x1D5C10u: goto label_1d5c10;
            case 0x1D5C14u: goto label_1d5c14;
            case 0x1D5C18u: goto label_1d5c18;
            case 0x1D5C1Cu: goto label_1d5c1c;
            case 0x1D5C20u: goto label_1d5c20;
            case 0x1D5C24u: goto label_1d5c24;
            case 0x1D5C28u: goto label_1d5c28;
            case 0x1D5C2Cu: goto label_1d5c2c;
            case 0x1D5C30u: goto label_1d5c30;
            case 0x1D5C34u: goto label_1d5c34;
            case 0x1D5C38u: goto label_1d5c38;
            case 0x1D5C3Cu: goto label_1d5c3c;
            case 0x1D5C40u: goto label_1d5c40;
            case 0x1D5C44u: goto label_1d5c44;
            case 0x1D5C48u: goto label_1d5c48;
            case 0x1D5C4Cu: goto label_1d5c4c;
            case 0x1D5C50u: goto label_1d5c50;
            case 0x1D5C54u: goto label_1d5c54;
            case 0x1D5C58u: goto label_1d5c58;
            case 0x1D5C5Cu: goto label_1d5c5c;
            case 0x1D5C60u: goto label_1d5c60;
            case 0x1D5C64u: goto label_1d5c64;
            case 0x1D5C68u: goto label_1d5c68;
            case 0x1D5C6Cu: goto label_1d5c6c;
            case 0x1D5C70u: goto label_1d5c70;
            case 0x1D5C74u: goto label_1d5c74;
            case 0x1D5C78u: goto label_1d5c78;
            case 0x1D5C7Cu: goto label_1d5c7c;
            case 0x1D5C80u: goto label_1d5c80;
            case 0x1D5C84u: goto label_1d5c84;
            case 0x1D5C88u: goto label_1d5c88;
            case 0x1D5C8Cu: goto label_1d5c8c;
            case 0x1D5C90u: goto label_1d5c90;
            case 0x1D5C94u: goto label_1d5c94;
            case 0x1D5C98u: goto label_1d5c98;
            case 0x1D5C9Cu: goto label_1d5c9c;
            case 0x1D5CA0u: goto label_1d5ca0;
            case 0x1D5CA4u: goto label_1d5ca4;
            case 0x1D5CA8u: goto label_1d5ca8;
            case 0x1D5CACu: goto label_1d5cac;
            case 0x1D5CB0u: goto label_1d5cb0;
            case 0x1D5CB4u: goto label_1d5cb4;
            case 0x1D5CB8u: goto label_1d5cb8;
            case 0x1D5CBCu: goto label_1d5cbc;
            case 0x1D5CC0u: goto label_1d5cc0;
            case 0x1D5CC4u: goto label_1d5cc4;
            case 0x1D5CC8u: goto label_1d5cc8;
            case 0x1D5CCCu: goto label_1d5ccc;
            case 0x1D5CD0u: goto label_1d5cd0;
            case 0x1D5CD4u: goto label_1d5cd4;
            case 0x1D5CD8u: goto label_1d5cd8;
            case 0x1D5CDCu: goto label_1d5cdc;
            case 0x1D5CE0u: goto label_1d5ce0;
            case 0x1D5CE4u: goto label_1d5ce4;
            case 0x1D5CE8u: goto label_1d5ce8;
            case 0x1D5CECu: goto label_1d5cec;
            case 0x1D5CF0u: goto label_1d5cf0;
            case 0x1D5CF4u: goto label_1d5cf4;
            case 0x1D5CF8u: goto label_1d5cf8;
            case 0x1D5CFCu: goto label_1d5cfc;
            case 0x1D5D00u: goto label_1d5d00;
            case 0x1D5D04u: goto label_1d5d04;
            case 0x1D5D08u: goto label_1d5d08;
            case 0x1D5D0Cu: goto label_1d5d0c;
            case 0x1D5D10u: goto label_1d5d10;
            case 0x1D5D14u: goto label_1d5d14;
            case 0x1D5D18u: goto label_1d5d18;
            case 0x1D5D1Cu: goto label_1d5d1c;
            case 0x1D5D20u: goto label_1d5d20;
            case 0x1D5D24u: goto label_1d5d24;
            case 0x1D5D28u: goto label_1d5d28;
            case 0x1D5D2Cu: goto label_1d5d2c;
            case 0x1D5D30u: goto label_1d5d30;
            case 0x1D5D34u: goto label_1d5d34;
            case 0x1D5D38u: goto label_1d5d38;
            case 0x1D5D3Cu: goto label_1d5d3c;
            case 0x1D5D40u: goto label_1d5d40;
            case 0x1D5D44u: goto label_1d5d44;
            case 0x1D5D48u: goto label_1d5d48;
            case 0x1D5D4Cu: goto label_1d5d4c;
            case 0x1D5D50u: goto label_1d5d50;
            case 0x1D5D54u: goto label_1d5d54;
            case 0x1D5D58u: goto label_1d5d58;
            case 0x1D5D5Cu: goto label_1d5d5c;
            case 0x1D5D60u: goto label_1d5d60;
            case 0x1D5D64u: goto label_1d5d64;
            case 0x1D5D68u: goto label_1d5d68;
            case 0x1D5D6Cu: goto label_1d5d6c;
            case 0x1D5D70u: goto label_1d5d70;
            case 0x1D5D74u: goto label_1d5d74;
            case 0x1D5D78u: goto label_1d5d78;
            case 0x1D5D7Cu: goto label_1d5d7c;
            case 0x1D5D80u: goto label_1d5d80;
            case 0x1D5D84u: goto label_1d5d84;
            case 0x1D5D88u: goto label_1d5d88;
            case 0x1D5D8Cu: goto label_1d5d8c;
            case 0x1D5D90u: goto label_1d5d90;
            case 0x1D5D94u: goto label_1d5d94;
            case 0x1D5D98u: goto label_1d5d98;
            case 0x1D5D9Cu: goto label_1d5d9c;
            case 0x1D5DA0u: goto label_1d5da0;
            case 0x1D5DA4u: goto label_1d5da4;
            case 0x1D5DA8u: goto label_1d5da8;
            case 0x1D5DACu: goto label_1d5dac;
            case 0x1D5DB0u: goto label_1d5db0;
            case 0x1D5DB4u: goto label_1d5db4;
            case 0x1D5DB8u: goto label_1d5db8;
            case 0x1D5DBCu: goto label_1d5dbc;
            case 0x1D5DC0u: goto label_1d5dc0;
            case 0x1D5DC4u: goto label_1d5dc4;
            case 0x1D5DC8u: goto label_1d5dc8;
            case 0x1D5DCCu: goto label_1d5dcc;
            case 0x1D5DD0u: goto label_1d5dd0;
            case 0x1D5DD4u: goto label_1d5dd4;
            case 0x1D5DD8u: goto label_1d5dd8;
            case 0x1D5DDCu: goto label_1d5ddc;
            case 0x1D5DE0u: goto label_1d5de0;
            case 0x1D5DE4u: goto label_1d5de4;
            case 0x1D5DE8u: goto label_1d5de8;
            case 0x1D5DECu: goto label_1d5dec;
            case 0x1D5DF0u: goto label_1d5df0;
            case 0x1D5DF4u: goto label_1d5df4;
            case 0x1D5DF8u: goto label_1d5df8;
            case 0x1D5DFCu: goto label_1d5dfc;
            case 0x1D5E00u: goto label_1d5e00;
            case 0x1D5E04u: goto label_1d5e04;
            case 0x1D5E08u: goto label_1d5e08;
            case 0x1D5E0Cu: goto label_1d5e0c;
            case 0x1D5E10u: goto label_1d5e10;
            case 0x1D5E14u: goto label_1d5e14;
            case 0x1D5E18u: goto label_1d5e18;
            case 0x1D5E1Cu: goto label_1d5e1c;
            case 0x1D5E20u: goto label_1d5e20;
            case 0x1D5E24u: goto label_1d5e24;
            case 0x1D5E28u: goto label_1d5e28;
            case 0x1D5E2Cu: goto label_1d5e2c;
            case 0x1D5E30u: goto label_1d5e30;
            case 0x1D5E34u: goto label_1d5e34;
            case 0x1D5E38u: goto label_1d5e38;
            case 0x1D5E3Cu: goto label_1d5e3c;
            case 0x1D5E40u: goto label_1d5e40;
            case 0x1D5E44u: goto label_1d5e44;
            case 0x1D5E48u: goto label_1d5e48;
            case 0x1D5E4Cu: goto label_1d5e4c;
            case 0x1D5E50u: goto label_1d5e50;
            case 0x1D5E54u: goto label_1d5e54;
            case 0x1D5E58u: goto label_1d5e58;
            case 0x1D5E5Cu: goto label_1d5e5c;
            case 0x1D5E60u: goto label_1d5e60;
            case 0x1D5E64u: goto label_1d5e64;
            case 0x1D5E68u: goto label_1d5e68;
            case 0x1D5E6Cu: goto label_1d5e6c;
            case 0x1D5E70u: goto label_1d5e70;
            case 0x1D5E74u: goto label_1d5e74;
            case 0x1D5E78u: goto label_1d5e78;
            case 0x1D5E7Cu: goto label_1d5e7c;
            case 0x1D5E80u: goto label_1d5e80;
            case 0x1D5E84u: goto label_1d5e84;
            case 0x1D5E88u: goto label_1d5e88;
            case 0x1D5E8Cu: goto label_1d5e8c;
            case 0x1D5E90u: goto label_1d5e90;
            case 0x1D5E94u: goto label_1d5e94;
            case 0x1D5E98u: goto label_1d5e98;
            case 0x1D5E9Cu: goto label_1d5e9c;
            case 0x1D5EA0u: goto label_1d5ea0;
            case 0x1D5EA4u: goto label_1d5ea4;
            case 0x1D5EA8u: goto label_1d5ea8;
            case 0x1D5EACu: goto label_1d5eac;
            case 0x1D5EB0u: goto label_1d5eb0;
            case 0x1D5EB4u: goto label_1d5eb4;
            case 0x1D5EB8u: goto label_1d5eb8;
            case 0x1D5EBCu: goto label_1d5ebc;
            case 0x1D5EC0u: goto label_1d5ec0;
            case 0x1D5EC4u: goto label_1d5ec4;
            case 0x1D5EC8u: goto label_1d5ec8;
            case 0x1D5ECCu: goto label_1d5ecc;
            case 0x1D5ED0u: goto label_1d5ed0;
            case 0x1D5ED4u: goto label_1d5ed4;
            case 0x1D5ED8u: goto label_1d5ed8;
            case 0x1D5EDCu: goto label_1d5edc;
            case 0x1D5EE0u: goto label_1d5ee0;
            case 0x1D5EE4u: goto label_1d5ee4;
            case 0x1D5EE8u: goto label_1d5ee8;
            case 0x1D5EECu: goto label_1d5eec;
            case 0x1D5EF0u: goto label_1d5ef0;
            case 0x1D5EF4u: goto label_1d5ef4;
            case 0x1D5EF8u: goto label_1d5ef8;
            case 0x1D5EFCu: goto label_1d5efc;
            case 0x1D5F00u: goto label_1d5f00;
            case 0x1D5F04u: goto label_1d5f04;
            case 0x1D5F08u: goto label_1d5f08;
            case 0x1D5F0Cu: goto label_1d5f0c;
            case 0x1D5F10u: goto label_1d5f10;
            case 0x1D5F14u: goto label_1d5f14;
            case 0x1D5F18u: goto label_1d5f18;
            case 0x1D5F1Cu: goto label_1d5f1c;
            case 0x1D5F20u: goto label_1d5f20;
            case 0x1D5F24u: goto label_1d5f24;
            case 0x1D5F28u: goto label_1d5f28;
            case 0x1D5F2Cu: goto label_1d5f2c;
            case 0x1D5F30u: goto label_1d5f30;
            case 0x1D5F34u: goto label_1d5f34;
            case 0x1D5F38u: goto label_1d5f38;
            case 0x1D5F3Cu: goto label_1d5f3c;
            case 0x1D5F40u: goto label_1d5f40;
            case 0x1D5F44u: goto label_1d5f44;
            case 0x1D5F48u: goto label_1d5f48;
            case 0x1D5F4Cu: goto label_1d5f4c;
            case 0x1D5F50u: goto label_1d5f50;
            case 0x1D5F54u: goto label_1d5f54;
            case 0x1D5F58u: goto label_1d5f58;
            case 0x1D5F5Cu: goto label_1d5f5c;
            case 0x1D5F60u: goto label_1d5f60;
            case 0x1D5F64u: goto label_1d5f64;
            case 0x1D5F68u: goto label_1d5f68;
            case 0x1D5F6Cu: goto label_1d5f6c;
            case 0x1D5F70u: goto label_1d5f70;
            case 0x1D5F74u: goto label_1d5f74;
            case 0x1D5F78u: goto label_1d5f78;
            case 0x1D5F7Cu: goto label_1d5f7c;
            case 0x1D5F80u: goto label_1d5f80;
            case 0x1D5F84u: goto label_1d5f84;
            case 0x1D5F88u: goto label_1d5f88;
            case 0x1D5F8Cu: goto label_1d5f8c;
            case 0x1D5F90u: goto label_1d5f90;
            case 0x1D5F94u: goto label_1d5f94;
            case 0x1D5F98u: goto label_1d5f98;
            case 0x1D5F9Cu: goto label_1d5f9c;
            case 0x1D5FA0u: goto label_1d5fa0;
            case 0x1D5FA4u: goto label_1d5fa4;
            case 0x1D5FA8u: goto label_1d5fa8;
            case 0x1D5FACu: goto label_1d5fac;
            case 0x1D5FB0u: goto label_1d5fb0;
            case 0x1D5FB4u: goto label_1d5fb4;
            case 0x1D5FB8u: goto label_1d5fb8;
            case 0x1D5FBCu: goto label_1d5fbc;
            case 0x1D5FC0u: goto label_1d5fc0;
            case 0x1D5FC4u: goto label_1d5fc4;
            case 0x1D5FC8u: goto label_1d5fc8;
            case 0x1D5FCCu: goto label_1d5fcc;
            case 0x1D5FD0u: goto label_1d5fd0;
            case 0x1D5FD4u: goto label_1d5fd4;
            case 0x1D5FD8u: goto label_1d5fd8;
            case 0x1D5FDCu: goto label_1d5fdc;
            case 0x1D5FE0u: goto label_1d5fe0;
            case 0x1D5FE4u: goto label_1d5fe4;
            case 0x1D5FE8u: goto label_1d5fe8;
            case 0x1D5FECu: goto label_1d5fec;
            case 0x1D5FF0u: goto label_1d5ff0;
            case 0x1D5FF4u: goto label_1d5ff4;
            case 0x1D5FF8u: goto label_1d5ff8;
            case 0x1D5FFCu: goto label_1d5ffc;
            case 0x1D6000u: goto label_1d6000;
            case 0x1D6004u: goto label_1d6004;
            case 0x1D6008u: goto label_1d6008;
            case 0x1D600Cu: goto label_1d600c;
            case 0x1D6010u: goto label_1d6010;
            case 0x1D6014u: goto label_1d6014;
            case 0x1D6018u: goto label_1d6018;
            case 0x1D601Cu: goto label_1d601c;
            case 0x1D6020u: goto label_1d6020;
            case 0x1D6024u: goto label_1d6024;
            case 0x1D6028u: goto label_1d6028;
            case 0x1D602Cu: goto label_1d602c;
            case 0x1D6030u: goto label_1d6030;
            case 0x1D6034u: goto label_1d6034;
            case 0x1D6038u: goto label_1d6038;
            case 0x1D603Cu: goto label_1d603c;
            case 0x1D6040u: goto label_1d6040;
            case 0x1D6044u: goto label_1d6044;
            case 0x1D6048u: goto label_1d6048;
            case 0x1D604Cu: goto label_1d604c;
            case 0x1D6050u: goto label_1d6050;
            case 0x1D6054u: goto label_1d6054;
            case 0x1D6058u: goto label_1d6058;
            case 0x1D605Cu: goto label_1d605c;
            case 0x1D6060u: goto label_1d6060;
            case 0x1D6064u: goto label_1d6064;
            case 0x1D6068u: goto label_1d6068;
            case 0x1D606Cu: goto label_1d606c;
            case 0x1D6070u: goto label_1d6070;
            case 0x1D6074u: goto label_1d6074;
            case 0x1D6078u: goto label_1d6078;
            case 0x1D607Cu: goto label_1d607c;
            case 0x1D6080u: goto label_1d6080;
            case 0x1D6084u: goto label_1d6084;
            case 0x1D6088u: goto label_1d6088;
            case 0x1D608Cu: goto label_1d608c;
            case 0x1D6090u: goto label_1d6090;
            case 0x1D6094u: goto label_1d6094;
            case 0x1D6098u: goto label_1d6098;
            case 0x1D609Cu: goto label_1d609c;
            case 0x1D60A0u: goto label_1d60a0;
            case 0x1D60A4u: goto label_1d60a4;
            case 0x1D60A8u: goto label_1d60a8;
            case 0x1D60ACu: goto label_1d60ac;
            case 0x1D60B0u: goto label_1d60b0;
            case 0x1D60B4u: goto label_1d60b4;
            case 0x1D60B8u: goto label_1d60b8;
            case 0x1D60BCu: goto label_1d60bc;
            case 0x1D60C0u: goto label_1d60c0;
            case 0x1D60C4u: goto label_1d60c4;
            case 0x1D60C8u: goto label_1d60c8;
            case 0x1D60CCu: goto label_1d60cc;
            case 0x1D60D0u: goto label_1d60d0;
            case 0x1D60D4u: goto label_1d60d4;
            case 0x1D60D8u: goto label_1d60d8;
            case 0x1D60DCu: goto label_1d60dc;
            case 0x1D60E0u: goto label_1d60e0;
            case 0x1D60E4u: goto label_1d60e4;
            case 0x1D60E8u: goto label_1d60e8;
            case 0x1D60ECu: goto label_1d60ec;
            case 0x1D60F0u: goto label_1d60f0;
            case 0x1D60F4u: goto label_1d60f4;
            case 0x1D60F8u: goto label_1d60f8;
            case 0x1D60FCu: goto label_1d60fc;
            case 0x1D6100u: goto label_1d6100;
            case 0x1D6104u: goto label_1d6104;
            case 0x1D6108u: goto label_1d6108;
            case 0x1D610Cu: goto label_1d610c;
            case 0x1D6110u: goto label_1d6110;
            case 0x1D6114u: goto label_1d6114;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D6114u;
label_1d6114:
    // 0x1d6114: 0x0
    ctx->pc = 0x1d6114u;
    // NOP
}
