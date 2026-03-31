#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001598C8
// Address: 0x1598c8 - 0x159fb0
void sub_001598C8_0x1598c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1598c8u;

label_1598c8:
    // 0x1598c8: 0x27bdffc0
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1598cc:
    // 0x1598cc: 0x24020001
    ctx->pc = 0x1598ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1598d0:
    // 0x1598d0: 0xffb00010
    ctx->pc = 0x1598d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1598d4:
    // 0x1598d4: 0x80802d
    ctx->pc = 0x1598d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1598d8:
    // 0x1598d8: 0xffb10018
    ctx->pc = 0x1598d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1598dc:
    // 0x1598dc: 0x261101d0
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 464));
label_1598e0:
    // 0x1598e0: 0xffb20020
    ctx->pc = 0x1598e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1598e4:
    // 0x1598e4: 0xa0902d
    ctx->pc = 0x1598e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1598e8:
    // 0x1598e8: 0xffb30028
    ctx->pc = 0x1598e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1598ec:
    // 0x1598ec: 0x26130348
    ctx->pc = 0x1598ecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 840));
label_1598f0:
    // 0x1598f0: 0xffbf0030
    ctx->pc = 0x1598f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1598f4:
    // 0x1598f4: 0x3c067fff
    ctx->pc = 0x1598f4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_1598f8:
    // 0x1598f8: 0xae020384
    ctx->pc = 0x1598f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
label_1598fc:
    // 0x1598fc: 0x24050001
    ctx->pc = 0x1598fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_159900:
    // 0x159900: 0x8e230034
    ctx->pc = 0x159900u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_159904:
    // 0x159904: 0x34c6ffff
    ctx->pc = 0x159904u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_159908:
    // 0x159908: 0x8e440000
    ctx->pc = 0x159908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15990c:
    // 0x15990c: 0x260382d
    ctx->pc = 0x15990cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159910:
    // 0x159910: 0x24630001
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_159914:
    // 0x159914: 0x8c820018
    ctx->pc = 0x159914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_159918:
    // 0x159918: 0x240202d
    ctx->pc = 0x159918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15991c:
    // 0x15991c: 0x40f809
label_159920:
    if (ctx->pc == 0x159920u) {
        ctx->pc = 0x159920u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x159924u;
        goto label_159924;
    }
    ctx->pc = 0x15991Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159924u);
        ctx->pc = 0x159920u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1598C8u: goto label_1598c8;
            case 0x1598CCu: goto label_1598cc;
            case 0x1598D0u: goto label_1598d0;
            case 0x1598D4u: goto label_1598d4;
            case 0x1598D8u: goto label_1598d8;
            case 0x1598DCu: goto label_1598dc;
            case 0x1598E0u: goto label_1598e0;
            case 0x1598E4u: goto label_1598e4;
            case 0x1598E8u: goto label_1598e8;
            case 0x1598ECu: goto label_1598ec;
            case 0x1598F0u: goto label_1598f0;
            case 0x1598F4u: goto label_1598f4;
            case 0x1598F8u: goto label_1598f8;
            case 0x1598FCu: goto label_1598fc;
            case 0x159900u: goto label_159900;
            case 0x159904u: goto label_159904;
            case 0x159908u: goto label_159908;
            case 0x15990Cu: goto label_15990c;
            case 0x159910u: goto label_159910;
            case 0x159914u: goto label_159914;
            case 0x159918u: goto label_159918;
            case 0x15991Cu: goto label_15991c;
            case 0x159920u: goto label_159920;
            case 0x159924u: goto label_159924;
            case 0x159928u: goto label_159928;
            case 0x15992Cu: goto label_15992c;
            case 0x159930u: goto label_159930;
            case 0x159934u: goto label_159934;
            case 0x159938u: goto label_159938;
            case 0x15993Cu: goto label_15993c;
            case 0x159940u: goto label_159940;
            case 0x159944u: goto label_159944;
            case 0x159948u: goto label_159948;
            case 0x15994Cu: goto label_15994c;
            case 0x159950u: goto label_159950;
            case 0x159954u: goto label_159954;
            case 0x159958u: goto label_159958;
            case 0x15995Cu: goto label_15995c;
            case 0x159960u: goto label_159960;
            case 0x159964u: goto label_159964;
            case 0x159968u: goto label_159968;
            case 0x15996Cu: goto label_15996c;
            case 0x159970u: goto label_159970;
            case 0x159974u: goto label_159974;
            case 0x159978u: goto label_159978;
            case 0x15997Cu: goto label_15997c;
            case 0x159980u: goto label_159980;
            case 0x159984u: goto label_159984;
            case 0x159988u: goto label_159988;
            case 0x15998Cu: goto label_15998c;
            case 0x159990u: goto label_159990;
            case 0x159994u: goto label_159994;
            case 0x159998u: goto label_159998;
            case 0x15999Cu: goto label_15999c;
            case 0x1599A0u: goto label_1599a0;
            case 0x1599A4u: goto label_1599a4;
            case 0x1599A8u: goto label_1599a8;
            case 0x1599ACu: goto label_1599ac;
            case 0x1599B0u: goto label_1599b0;
            case 0x1599B4u: goto label_1599b4;
            case 0x1599B8u: goto label_1599b8;
            case 0x1599BCu: goto label_1599bc;
            case 0x1599C0u: goto label_1599c0;
            case 0x1599C4u: goto label_1599c4;
            case 0x1599C8u: goto label_1599c8;
            case 0x1599CCu: goto label_1599cc;
            case 0x1599D0u: goto label_1599d0;
            case 0x1599D4u: goto label_1599d4;
            case 0x1599D8u: goto label_1599d8;
            case 0x1599DCu: goto label_1599dc;
            case 0x1599E0u: goto label_1599e0;
            case 0x1599E4u: goto label_1599e4;
            case 0x1599E8u: goto label_1599e8;
            case 0x1599ECu: goto label_1599ec;
            case 0x1599F0u: goto label_1599f0;
            case 0x1599F4u: goto label_1599f4;
            case 0x1599F8u: goto label_1599f8;
            case 0x1599FCu: goto label_1599fc;
            case 0x159A00u: goto label_159a00;
            case 0x159A04u: goto label_159a04;
            case 0x159A08u: goto label_159a08;
            case 0x159A0Cu: goto label_159a0c;
            case 0x159A10u: goto label_159a10;
            case 0x159A14u: goto label_159a14;
            case 0x159A18u: goto label_159a18;
            case 0x159A1Cu: goto label_159a1c;
            case 0x159A20u: goto label_159a20;
            case 0x159A24u: goto label_159a24;
            case 0x159A28u: goto label_159a28;
            case 0x159A2Cu: goto label_159a2c;
            case 0x159A30u: goto label_159a30;
            case 0x159A34u: goto label_159a34;
            case 0x159A38u: goto label_159a38;
            case 0x159A3Cu: goto label_159a3c;
            case 0x159A40u: goto label_159a40;
            case 0x159A44u: goto label_159a44;
            case 0x159A48u: goto label_159a48;
            case 0x159A4Cu: goto label_159a4c;
            case 0x159A50u: goto label_159a50;
            case 0x159A54u: goto label_159a54;
            case 0x159A58u: goto label_159a58;
            case 0x159A5Cu: goto label_159a5c;
            case 0x159A60u: goto label_159a60;
            case 0x159A64u: goto label_159a64;
            case 0x159A68u: goto label_159a68;
            case 0x159A6Cu: goto label_159a6c;
            case 0x159A70u: goto label_159a70;
            case 0x159A74u: goto label_159a74;
            case 0x159A78u: goto label_159a78;
            case 0x159A7Cu: goto label_159a7c;
            case 0x159A80u: goto label_159a80;
            case 0x159A84u: goto label_159a84;
            case 0x159A88u: goto label_159a88;
            case 0x159A8Cu: goto label_159a8c;
            case 0x159A90u: goto label_159a90;
            case 0x159A94u: goto label_159a94;
            case 0x159A98u: goto label_159a98;
            case 0x159A9Cu: goto label_159a9c;
            case 0x159AA0u: goto label_159aa0;
            case 0x159AA4u: goto label_159aa4;
            case 0x159AA8u: goto label_159aa8;
            case 0x159AACu: goto label_159aac;
            case 0x159AB0u: goto label_159ab0;
            case 0x159AB4u: goto label_159ab4;
            case 0x159AB8u: goto label_159ab8;
            case 0x159ABCu: goto label_159abc;
            case 0x159AC0u: goto label_159ac0;
            case 0x159AC4u: goto label_159ac4;
            case 0x159AC8u: goto label_159ac8;
            case 0x159ACCu: goto label_159acc;
            case 0x159AD0u: goto label_159ad0;
            case 0x159AD4u: goto label_159ad4;
            case 0x159AD8u: goto label_159ad8;
            case 0x159ADCu: goto label_159adc;
            case 0x159AE0u: goto label_159ae0;
            case 0x159AE4u: goto label_159ae4;
            case 0x159AE8u: goto label_159ae8;
            case 0x159AECu: goto label_159aec;
            case 0x159AF0u: goto label_159af0;
            case 0x159AF4u: goto label_159af4;
            case 0x159AF8u: goto label_159af8;
            case 0x159AFCu: goto label_159afc;
            case 0x159B00u: goto label_159b00;
            case 0x159B04u: goto label_159b04;
            case 0x159B08u: goto label_159b08;
            case 0x159B0Cu: goto label_159b0c;
            case 0x159B10u: goto label_159b10;
            case 0x159B14u: goto label_159b14;
            case 0x159B18u: goto label_159b18;
            case 0x159B1Cu: goto label_159b1c;
            case 0x159B20u: goto label_159b20;
            case 0x159B24u: goto label_159b24;
            case 0x159B28u: goto label_159b28;
            case 0x159B2Cu: goto label_159b2c;
            case 0x159B30u: goto label_159b30;
            case 0x159B34u: goto label_159b34;
            case 0x159B38u: goto label_159b38;
            case 0x159B3Cu: goto label_159b3c;
            case 0x159B40u: goto label_159b40;
            case 0x159B44u: goto label_159b44;
            case 0x159B48u: goto label_159b48;
            case 0x159B4Cu: goto label_159b4c;
            case 0x159B50u: goto label_159b50;
            case 0x159B54u: goto label_159b54;
            case 0x159B58u: goto label_159b58;
            case 0x159B5Cu: goto label_159b5c;
            case 0x159B60u: goto label_159b60;
            case 0x159B64u: goto label_159b64;
            case 0x159B68u: goto label_159b68;
            case 0x159B6Cu: goto label_159b6c;
            case 0x159B70u: goto label_159b70;
            case 0x159B74u: goto label_159b74;
            case 0x159B78u: goto label_159b78;
            case 0x159B7Cu: goto label_159b7c;
            case 0x159B80u: goto label_159b80;
            case 0x159B84u: goto label_159b84;
            case 0x159B88u: goto label_159b88;
            case 0x159B8Cu: goto label_159b8c;
            case 0x159B90u: goto label_159b90;
            case 0x159B94u: goto label_159b94;
            case 0x159B98u: goto label_159b98;
            case 0x159B9Cu: goto label_159b9c;
            case 0x159BA0u: goto label_159ba0;
            case 0x159BA4u: goto label_159ba4;
            case 0x159BA8u: goto label_159ba8;
            case 0x159BACu: goto label_159bac;
            case 0x159BB0u: goto label_159bb0;
            case 0x159BB4u: goto label_159bb4;
            case 0x159BB8u: goto label_159bb8;
            case 0x159BBCu: goto label_159bbc;
            case 0x159BC0u: goto label_159bc0;
            case 0x159BC4u: goto label_159bc4;
            case 0x159BC8u: goto label_159bc8;
            case 0x159BCCu: goto label_159bcc;
            case 0x159BD0u: goto label_159bd0;
            case 0x159BD4u: goto label_159bd4;
            case 0x159BD8u: goto label_159bd8;
            case 0x159BDCu: goto label_159bdc;
            case 0x159BE0u: goto label_159be0;
            case 0x159BE4u: goto label_159be4;
            case 0x159BE8u: goto label_159be8;
            case 0x159BECu: goto label_159bec;
            case 0x159BF0u: goto label_159bf0;
            case 0x159BF4u: goto label_159bf4;
            case 0x159BF8u: goto label_159bf8;
            case 0x159BFCu: goto label_159bfc;
            case 0x159C00u: goto label_159c00;
            case 0x159C04u: goto label_159c04;
            case 0x159C08u: goto label_159c08;
            case 0x159C0Cu: goto label_159c0c;
            case 0x159C10u: goto label_159c10;
            case 0x159C14u: goto label_159c14;
            case 0x159C18u: goto label_159c18;
            case 0x159C1Cu: goto label_159c1c;
            case 0x159C20u: goto label_159c20;
            case 0x159C24u: goto label_159c24;
            case 0x159C28u: goto label_159c28;
            case 0x159C2Cu: goto label_159c2c;
            case 0x159C30u: goto label_159c30;
            case 0x159C34u: goto label_159c34;
            case 0x159C38u: goto label_159c38;
            case 0x159C3Cu: goto label_159c3c;
            case 0x159C40u: goto label_159c40;
            case 0x159C44u: goto label_159c44;
            case 0x159C48u: goto label_159c48;
            case 0x159C4Cu: goto label_159c4c;
            case 0x159C50u: goto label_159c50;
            case 0x159C54u: goto label_159c54;
            case 0x159C58u: goto label_159c58;
            case 0x159C5Cu: goto label_159c5c;
            case 0x159C60u: goto label_159c60;
            case 0x159C64u: goto label_159c64;
            case 0x159C68u: goto label_159c68;
            case 0x159C6Cu: goto label_159c6c;
            case 0x159C70u: goto label_159c70;
            case 0x159C74u: goto label_159c74;
            case 0x159C78u: goto label_159c78;
            case 0x159C7Cu: goto label_159c7c;
            case 0x159C80u: goto label_159c80;
            case 0x159C84u: goto label_159c84;
            case 0x159C88u: goto label_159c88;
            case 0x159C8Cu: goto label_159c8c;
            case 0x159C90u: goto label_159c90;
            case 0x159C94u: goto label_159c94;
            case 0x159C98u: goto label_159c98;
            case 0x159C9Cu: goto label_159c9c;
            case 0x159CA0u: goto label_159ca0;
            case 0x159CA4u: goto label_159ca4;
            case 0x159CA8u: goto label_159ca8;
            case 0x159CACu: goto label_159cac;
            case 0x159CB0u: goto label_159cb0;
            case 0x159CB4u: goto label_159cb4;
            case 0x159CB8u: goto label_159cb8;
            case 0x159CBCu: goto label_159cbc;
            case 0x159CC0u: goto label_159cc0;
            case 0x159CC4u: goto label_159cc4;
            case 0x159CC8u: goto label_159cc8;
            case 0x159CCCu: goto label_159ccc;
            case 0x159CD0u: goto label_159cd0;
            case 0x159CD4u: goto label_159cd4;
            case 0x159CD8u: goto label_159cd8;
            case 0x159CDCu: goto label_159cdc;
            case 0x159CE0u: goto label_159ce0;
            case 0x159CE4u: goto label_159ce4;
            case 0x159CE8u: goto label_159ce8;
            case 0x159CECu: goto label_159cec;
            case 0x159CF0u: goto label_159cf0;
            case 0x159CF4u: goto label_159cf4;
            case 0x159CF8u: goto label_159cf8;
            case 0x159CFCu: goto label_159cfc;
            case 0x159D00u: goto label_159d00;
            case 0x159D04u: goto label_159d04;
            case 0x159D08u: goto label_159d08;
            case 0x159D0Cu: goto label_159d0c;
            case 0x159D10u: goto label_159d10;
            case 0x159D14u: goto label_159d14;
            case 0x159D18u: goto label_159d18;
            case 0x159D1Cu: goto label_159d1c;
            case 0x159D20u: goto label_159d20;
            case 0x159D24u: goto label_159d24;
            case 0x159D28u: goto label_159d28;
            case 0x159D2Cu: goto label_159d2c;
            case 0x159D30u: goto label_159d30;
            case 0x159D34u: goto label_159d34;
            case 0x159D38u: goto label_159d38;
            case 0x159D3Cu: goto label_159d3c;
            case 0x159D40u: goto label_159d40;
            case 0x159D44u: goto label_159d44;
            case 0x159D48u: goto label_159d48;
            case 0x159D4Cu: goto label_159d4c;
            case 0x159D50u: goto label_159d50;
            case 0x159D54u: goto label_159d54;
            case 0x159D58u: goto label_159d58;
            case 0x159D5Cu: goto label_159d5c;
            case 0x159D60u: goto label_159d60;
            case 0x159D64u: goto label_159d64;
            case 0x159D68u: goto label_159d68;
            case 0x159D6Cu: goto label_159d6c;
            case 0x159D70u: goto label_159d70;
            case 0x159D74u: goto label_159d74;
            case 0x159D78u: goto label_159d78;
            case 0x159D7Cu: goto label_159d7c;
            case 0x159D80u: goto label_159d80;
            case 0x159D84u: goto label_159d84;
            case 0x159D88u: goto label_159d88;
            case 0x159D8Cu: goto label_159d8c;
            case 0x159D90u: goto label_159d90;
            case 0x159D94u: goto label_159d94;
            case 0x159D98u: goto label_159d98;
            case 0x159D9Cu: goto label_159d9c;
            case 0x159DA0u: goto label_159da0;
            case 0x159DA4u: goto label_159da4;
            case 0x159DA8u: goto label_159da8;
            case 0x159DACu: goto label_159dac;
            case 0x159DB0u: goto label_159db0;
            case 0x159DB4u: goto label_159db4;
            case 0x159DB8u: goto label_159db8;
            case 0x159DBCu: goto label_159dbc;
            case 0x159DC0u: goto label_159dc0;
            case 0x159DC4u: goto label_159dc4;
            case 0x159DC8u: goto label_159dc8;
            case 0x159DCCu: goto label_159dcc;
            case 0x159DD0u: goto label_159dd0;
            case 0x159DD4u: goto label_159dd4;
            case 0x159DD8u: goto label_159dd8;
            case 0x159DDCu: goto label_159ddc;
            case 0x159DE0u: goto label_159de0;
            case 0x159DE4u: goto label_159de4;
            case 0x159DE8u: goto label_159de8;
            case 0x159DECu: goto label_159dec;
            case 0x159DF0u: goto label_159df0;
            case 0x159DF4u: goto label_159df4;
            case 0x159DF8u: goto label_159df8;
            case 0x159DFCu: goto label_159dfc;
            case 0x159E00u: goto label_159e00;
            case 0x159E04u: goto label_159e04;
            case 0x159E08u: goto label_159e08;
            case 0x159E0Cu: goto label_159e0c;
            case 0x159E10u: goto label_159e10;
            case 0x159E14u: goto label_159e14;
            case 0x159E18u: goto label_159e18;
            case 0x159E1Cu: goto label_159e1c;
            case 0x159E20u: goto label_159e20;
            case 0x159E24u: goto label_159e24;
            case 0x159E28u: goto label_159e28;
            case 0x159E2Cu: goto label_159e2c;
            case 0x159E30u: goto label_159e30;
            case 0x159E34u: goto label_159e34;
            case 0x159E38u: goto label_159e38;
            case 0x159E3Cu: goto label_159e3c;
            case 0x159E40u: goto label_159e40;
            case 0x159E44u: goto label_159e44;
            case 0x159E48u: goto label_159e48;
            case 0x159E4Cu: goto label_159e4c;
            case 0x159E50u: goto label_159e50;
            case 0x159E54u: goto label_159e54;
            case 0x159E58u: goto label_159e58;
            case 0x159E5Cu: goto label_159e5c;
            case 0x159E60u: goto label_159e60;
            case 0x159E64u: goto label_159e64;
            case 0x159E68u: goto label_159e68;
            case 0x159E6Cu: goto label_159e6c;
            case 0x159E70u: goto label_159e70;
            case 0x159E74u: goto label_159e74;
            case 0x159E78u: goto label_159e78;
            case 0x159E7Cu: goto label_159e7c;
            case 0x159E80u: goto label_159e80;
            case 0x159E84u: goto label_159e84;
            case 0x159E88u: goto label_159e88;
            case 0x159E8Cu: goto label_159e8c;
            case 0x159E90u: goto label_159e90;
            case 0x159E94u: goto label_159e94;
            case 0x159E98u: goto label_159e98;
            case 0x159E9Cu: goto label_159e9c;
            case 0x159EA0u: goto label_159ea0;
            case 0x159EA4u: goto label_159ea4;
            case 0x159EA8u: goto label_159ea8;
            case 0x159EACu: goto label_159eac;
            case 0x159EB0u: goto label_159eb0;
            case 0x159EB4u: goto label_159eb4;
            case 0x159EB8u: goto label_159eb8;
            case 0x159EBCu: goto label_159ebc;
            case 0x159EC0u: goto label_159ec0;
            case 0x159EC4u: goto label_159ec4;
            case 0x159EC8u: goto label_159ec8;
            case 0x159ECCu: goto label_159ecc;
            case 0x159ED0u: goto label_159ed0;
            case 0x159ED4u: goto label_159ed4;
            case 0x159ED8u: goto label_159ed8;
            case 0x159EDCu: goto label_159edc;
            case 0x159EE0u: goto label_159ee0;
            case 0x159EE4u: goto label_159ee4;
            case 0x159EE8u: goto label_159ee8;
            case 0x159EECu: goto label_159eec;
            case 0x159EF0u: goto label_159ef0;
            case 0x159EF4u: goto label_159ef4;
            case 0x159EF8u: goto label_159ef8;
            case 0x159EFCu: goto label_159efc;
            case 0x159F00u: goto label_159f00;
            case 0x159F04u: goto label_159f04;
            case 0x159F08u: goto label_159f08;
            case 0x159F0Cu: goto label_159f0c;
            case 0x159F10u: goto label_159f10;
            case 0x159F14u: goto label_159f14;
            case 0x159F18u: goto label_159f18;
            case 0x159F1Cu: goto label_159f1c;
            case 0x159F20u: goto label_159f20;
            case 0x159F24u: goto label_159f24;
            case 0x159F28u: goto label_159f28;
            case 0x159F2Cu: goto label_159f2c;
            case 0x159F30u: goto label_159f30;
            case 0x159F34u: goto label_159f34;
            case 0x159F38u: goto label_159f38;
            case 0x159F3Cu: goto label_159f3c;
            case 0x159F40u: goto label_159f40;
            case 0x159F44u: goto label_159f44;
            case 0x159F48u: goto label_159f48;
            case 0x159F4Cu: goto label_159f4c;
            case 0x159F50u: goto label_159f50;
            case 0x159F54u: goto label_159f54;
            case 0x159F58u: goto label_159f58;
            case 0x159F5Cu: goto label_159f5c;
            case 0x159F60u: goto label_159f60;
            case 0x159F64u: goto label_159f64;
            case 0x159F68u: goto label_159f68;
            case 0x159F6Cu: goto label_159f6c;
            case 0x159F70u: goto label_159f70;
            case 0x159F74u: goto label_159f74;
            case 0x159F78u: goto label_159f78;
            case 0x159F7Cu: goto label_159f7c;
            case 0x159F80u: goto label_159f80;
            case 0x159F84u: goto label_159f84;
            case 0x159F88u: goto label_159f88;
            case 0x159F8Cu: goto label_159f8c;
            case 0x159F90u: goto label_159f90;
            case 0x159F94u: goto label_159f94;
            case 0x159F98u: goto label_159f98;
            case 0x159F9Cu: goto label_159f9c;
            case 0x159FA0u: goto label_159fa0;
            case 0x159FA4u: goto label_159fa4;
            case 0x159FA8u: goto label_159fa8;
            case 0x159FACu: goto label_159fac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159924u; }
            if (ctx->pc != 0x159924u) { return; }
        }
    }
    ctx->pc = 0x159924u;
label_159924:
    // 0x159924: 0x8e630000
    ctx->pc = 0x159924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_159928:
    // 0x159928: 0x2402fffc
    ctx->pc = 0x159928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
label_15992c:
    // 0x15992c: 0x623824
    ctx->pc = 0x15992cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_159930:
    // 0x159930: 0x671823
    ctx->pc = 0x159930u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_159934:
    // 0x159934: 0x24e70004
    ctx->pc = 0x159934u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_159938:
    // 0x159938: 0x80e60000
    ctx->pc = 0x159938u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_15993c:
    // 0x15993c: 0x24e70001
    ctx->pc = 0x15993cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159940:
    // 0x159940: 0x90e20000
    ctx->pc = 0x159940u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159944:
    // 0x159944: 0x24e70001
    ctx->pc = 0x159944u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159948:
    // 0x159948: 0x63200
    ctx->pc = 0x159948u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15994c:
    // 0x15994c: 0x90e40000
    ctx->pc = 0x15994cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159950:
    // 0x159950: 0xc23025
    ctx->pc = 0x159950u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159954:
    // 0x159954: 0x24e70001
    ctx->pc = 0x159954u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159958:
    // 0x159958: 0x63200
    ctx->pc = 0x159958u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15995c:
    // 0x15995c: 0x90e20000
    ctx->pc = 0x15995cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159960:
    // 0x159960: 0x328c0
    ctx->pc = 0x159960u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 3));
label_159964:
    // 0x159964: 0xc43025
    ctx->pc = 0x159964u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_159968:
    // 0x159968: 0x63200
    ctx->pc = 0x159968u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_15996c:
    // 0x15996c: 0x28a30020
    ctx->pc = 0x15996cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 32));
label_159970:
    // 0x159970: 0xc23025
    ctx->pc = 0x159970u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159974:
    // 0x159974: 0x14600010
label_159978:
    if (ctx->pc == 0x159978u) {
        ctx->pc = 0x159978u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x15997Cu;
        goto label_15997c;
    }
    ctx->pc = 0x159974u;
    {
        const bool branch_taken_0x159974 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x159978u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x159974) {
            ctx->pc = 0x1599B8u;
            goto label_1599b8;
        }
    }
    ctx->pc = 0x15997Cu;
label_15997c:
    // 0x15997c: 0x80e60000
    ctx->pc = 0x15997cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159980:
    // 0x159980: 0x24e70001
    ctx->pc = 0x159980u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159984:
    // 0x159984: 0x90e20000
    ctx->pc = 0x159984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159988:
    // 0x159988: 0x24e70001
    ctx->pc = 0x159988u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_15998c:
    // 0x15998c: 0x63200
    ctx->pc = 0x15998cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159990:
    // 0x159990: 0x90e30000
    ctx->pc = 0x159990u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159994:
    // 0x159994: 0xc23025
    ctx->pc = 0x159994u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159998:
    // 0x159998: 0x24e70001
    ctx->pc = 0x159998u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_15999c:
    // 0x15999c: 0x63200
    ctx->pc = 0x15999cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1599a0:
    // 0x1599a0: 0x90e20000
    ctx->pc = 0x1599a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1599a4:
    // 0x1599a4: 0xc33025
    ctx->pc = 0x1599a4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1599a8:
    // 0x1599a8: 0x24a5ffe0
    ctx->pc = 0x1599a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
label_1599ac:
    // 0x1599ac: 0x63200
    ctx->pc = 0x1599acu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1599b0:
    // 0x1599b0: 0x24e70001
    ctx->pc = 0x1599b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1599b4:
    // 0x1599b4: 0xc23025
    ctx->pc = 0x1599b4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1599b8:
    // 0x1599b8: 0xa61804
    ctx->pc = 0x1599b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_1599bc:
    // 0x1599bc: 0x38a20000
    ctx->pc = 0x1599bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 0));
label_1599c0:
    // 0x1599c0: 0xc0402d
    ctx->pc = 0x1599c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1599c4:
    // 0x1599c4: 0x80e60000
    ctx->pc = 0x1599c4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1599c8:
    // 0x1599c8: 0x24e70001
    ctx->pc = 0x1599c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1599cc:
    // 0x1599cc: 0x62400b
    ctx->pc = 0x1599ccu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 3));
label_1599d0:
    // 0x1599d0: 0x90e20000
    ctx->pc = 0x1599d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1599d4:
    // 0x1599d4: 0x24e70001
    ctx->pc = 0x1599d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1599d8:
    // 0x1599d8: 0x63200
    ctx->pc = 0x1599d8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1599dc:
    // 0x1599dc: 0x90e30000
    ctx->pc = 0x1599dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1599e0:
    // 0x1599e0: 0xc23025
    ctx->pc = 0x1599e0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1599e4:
    // 0x1599e4: 0x24e70001
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1599e8:
    // 0x1599e8: 0x63200
    ctx->pc = 0x1599e8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1599ec:
    // 0x1599ec: 0x90e20000
    ctx->pc = 0x1599ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1599f0:
    // 0x1599f0: 0xc33025
    ctx->pc = 0x1599f0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1599f4:
    // 0x1599f4: 0x28a40014
    ctx->pc = 0x1599f4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 20));
label_1599f8:
    // 0x1599f8: 0x63200
    ctx->pc = 0x1599f8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1599fc:
    // 0x1599fc: 0x24e70001
    ctx->pc = 0x1599fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159a00:
    // 0x159a00: 0x1480001d
label_159a04:
    if (ctx->pc == 0x159A04u) {
        ctx->pc = 0x159A04u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159A08u;
        goto label_159a08;
    }
    ctx->pc = 0x159A00u;
    {
        const bool branch_taken_0x159a00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x159A04u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159a00) {
            ctx->pc = 0x159A78u;
            goto label_159a78;
        }
    }
    ctx->pc = 0x159A08u;
label_159a08:
    // 0x159a08: 0x24a5ffec
    ctx->pc = 0x159a08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967276));
label_159a0c:
    // 0x159a0c: 0x10a00008
label_159a10:
    if (ctx->pc == 0x159A10u) {
        ctx->pc = 0x159A10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x159A14u;
        goto label_159a14;
    }
    ctx->pc = 0x159A0Cu;
    {
        const bool branch_taken_0x159a0c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x159A10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x159a0c) {
            ctx->pc = 0x159A30u;
            goto label_159a30;
        }
    }
    ctx->pc = 0x159A14u;
label_159a14:
    // 0x159a14: 0x451023
    ctx->pc = 0x159a14u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_159a18:
    // 0x159a18: 0x461006
    ctx->pc = 0x159a18u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_159a1c:
    // 0x159a1c: 0x1024025
    ctx->pc = 0x159a1cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_159a20:
    // 0x159a20: 0x81d02
    ctx->pc = 0x159a20u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 20));
label_159a24:
    // 0x159a24: 0xa64004
    ctx->pc = 0x159a24u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_159a28:
    // 0x159a28: 0x10000004
label_159a2c:
    if (ctx->pc == 0x159A2Cu) {
        ctx->pc = 0x159A2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x159A30u;
        goto label_159a30;
    }
    ctx->pc = 0x159A28u;
    {
        const bool branch_taken_0x159a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159A2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x159a28) {
            ctx->pc = 0x159A3Cu;
            goto label_159a3c;
        }
    }
    ctx->pc = 0x159A30u;
label_159a30:
    // 0x159a30: 0x81502
    ctx->pc = 0x159a30u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 20));
label_159a34:
    // 0x159a34: 0xc0402d
    ctx->pc = 0x159a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159a38:
    // 0x159a38: 0xae220000
    ctx->pc = 0x159a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_159a3c:
    // 0x159a3c: 0x80e60000
    ctx->pc = 0x159a3cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159a40:
    // 0x159a40: 0x24e70001
    ctx->pc = 0x159a40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159a44:
    // 0x159a44: 0x90e20000
    ctx->pc = 0x159a44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159a48:
    // 0x159a48: 0x24e70001
    ctx->pc = 0x159a48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159a4c:
    // 0x159a4c: 0x63200
    ctx->pc = 0x159a4cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159a50:
    // 0x159a50: 0x90e30000
    ctx->pc = 0x159a50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159a54:
    // 0x159a54: 0xc23025
    ctx->pc = 0x159a54u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159a58:
    // 0x159a58: 0x24e70001
    ctx->pc = 0x159a58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159a5c:
    // 0x159a5c: 0x63200
    ctx->pc = 0x159a5cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159a60:
    // 0x159a60: 0x90e20000
    ctx->pc = 0x159a60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159a64:
    // 0x159a64: 0xc33025
    ctx->pc = 0x159a64u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159a68:
    // 0x159a68: 0x24e70001
    ctx->pc = 0x159a68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159a6c:
    // 0x159a6c: 0x63200
    ctx->pc = 0x159a6cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159a70:
    // 0x159a70: 0x10000005
label_159a74:
    if (ctx->pc == 0x159A74u) {
        ctx->pc = 0x159A74u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159A78u;
        goto label_159a78;
    }
    ctx->pc = 0x159A70u;
    {
        const bool branch_taken_0x159a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159A74u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159a70) {
            ctx->pc = 0x159A88u;
            goto label_159a88;
        }
    }
    ctx->pc = 0x159A78u;
label_159a78:
    // 0x159a78: 0x81502
    ctx->pc = 0x159a78u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 20));
label_159a7c:
    // 0x159a7c: 0x84300
    ctx->pc = 0x159a7cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 12));
label_159a80:
    // 0x159a80: 0xae220000
    ctx->pc = 0x159a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_159a84:
    // 0x159a84: 0x24a5000c
    ctx->pc = 0x159a84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
label_159a88:
    // 0x159a88: 0x28a20014
    ctx->pc = 0x159a88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 20));
label_159a8c:
    // 0x159a8c: 0x1440001e
label_159a90:
    if (ctx->pc == 0x159A90u) {
        ctx->pc = 0x159A90u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 20));
        ctx->pc = 0x159A94u;
        goto label_159a94;
    }
    ctx->pc = 0x159A8Cu;
    {
        const bool branch_taken_0x159a8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x159A90u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 20));
        if (branch_taken_0x159a8c) {
            ctx->pc = 0x159B08u;
            goto label_159b08;
        }
    }
    ctx->pc = 0x159A94u;
label_159a94:
    // 0x159a94: 0x24a5ffec
    ctx->pc = 0x159a94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967276));
label_159a98:
    // 0x159a98: 0x10a00009
label_159a9c:
    if (ctx->pc == 0x159A9Cu) {
        ctx->pc = 0x159A9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x159AA0u;
        goto label_159aa0;
    }
    ctx->pc = 0x159A98u;
    {
        const bool branch_taken_0x159a98 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x159A9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x159a98) {
            ctx->pc = 0x159AC0u;
            goto label_159ac0;
        }
    }
    ctx->pc = 0x159AA0u;
label_159aa0:
    // 0x159aa0: 0x451023
    ctx->pc = 0x159aa0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_159aa4:
    // 0x159aa4: 0x461006
    ctx->pc = 0x159aa4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_159aa8:
    // 0x159aa8: 0x1024025
    ctx->pc = 0x159aa8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_159aac:
    // 0x159aac: 0x81d02
    ctx->pc = 0x159aacu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 20));
label_159ab0:
    // 0x159ab0: 0xa64004
    ctx->pc = 0x159ab0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_159ab4:
    // 0x159ab4: 0x10000005
label_159ab8:
    if (ctx->pc == 0x159AB8u) {
        ctx->pc = 0x159AB8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x159ABCu;
        goto label_159abc;
    }
    ctx->pc = 0x159AB4u;
    {
        const bool branch_taken_0x159ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159AB8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x159ab4) {
            ctx->pc = 0x159ACCu;
            goto label_159acc;
        }
    }
    ctx->pc = 0x159ABCu;
label_159abc:
    // 0x159abc: 0x0
    ctx->pc = 0x159abcu;
    // NOP
label_159ac0:
    // 0x159ac0: 0x81502
    ctx->pc = 0x159ac0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 20));
label_159ac4:
    // 0x159ac4: 0xc0402d
    ctx->pc = 0x159ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159ac8:
    // 0x159ac8: 0xae220004
    ctx->pc = 0x159ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_159acc:
    // 0x159acc: 0x80e60000
    ctx->pc = 0x159accu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159ad0:
    // 0x159ad0: 0x24e70001
    ctx->pc = 0x159ad0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159ad4:
    // 0x159ad4: 0x90e20000
    ctx->pc = 0x159ad4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159ad8:
    // 0x159ad8: 0x24e70001
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159adc:
    // 0x159adc: 0x63200
    ctx->pc = 0x159adcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159ae0:
    // 0x159ae0: 0x90e30000
    ctx->pc = 0x159ae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159ae4:
    // 0x159ae4: 0xc23025
    ctx->pc = 0x159ae4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159ae8:
    // 0x159ae8: 0x24e70001
    ctx->pc = 0x159ae8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159aec:
    // 0x159aec: 0x63200
    ctx->pc = 0x159aecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159af0:
    // 0x159af0: 0x90e20000
    ctx->pc = 0x159af0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159af4:
    // 0x159af4: 0xc33025
    ctx->pc = 0x159af4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159af8:
    // 0x159af8: 0x24e70001
    ctx->pc = 0x159af8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159afc:
    // 0x159afc: 0x63200
    ctx->pc = 0x159afcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159b00:
    // 0x159b00: 0x10000004
label_159b04:
    if (ctx->pc == 0x159B04u) {
        ctx->pc = 0x159B04u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159B08u;
        goto label_159b08;
    }
    ctx->pc = 0x159B00u;
    {
        const bool branch_taken_0x159b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159B04u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159b00) {
            ctx->pc = 0x159B14u;
            goto label_159b14;
        }
    }
    ctx->pc = 0x159B08u;
label_159b08:
    // 0x159b08: 0x84300
    ctx->pc = 0x159b08u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 12));
label_159b0c:
    // 0x159b0c: 0xae220004
    ctx->pc = 0x159b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_159b10:
    // 0x159b10: 0x24a5000c
    ctx->pc = 0x159b10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
label_159b14:
    // 0x159b14: 0x28a2001c
    ctx->pc = 0x159b14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 28));
label_159b18:
    // 0x159b18: 0x1440001d
label_159b1c:
    if (ctx->pc == 0x159B1Cu) {
        ctx->pc = 0x159B1Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 28));
        ctx->pc = 0x159B20u;
        goto label_159b20;
    }
    ctx->pc = 0x159B18u;
    {
        const bool branch_taken_0x159b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x159B1Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 28));
        if (branch_taken_0x159b18) {
            ctx->pc = 0x159B90u;
            goto label_159b90;
        }
    }
    ctx->pc = 0x159B20u;
label_159b20:
    // 0x159b20: 0x24a5ffe4
    ctx->pc = 0x159b20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967268));
label_159b24:
    // 0x159b24: 0x10a00008
label_159b28:
    if (ctx->pc == 0x159B28u) {
        ctx->pc = 0x159B28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x159B2Cu;
        goto label_159b2c;
    }
    ctx->pc = 0x159B24u;
    {
        const bool branch_taken_0x159b24 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x159B28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x159b24) {
            ctx->pc = 0x159B48u;
            goto label_159b48;
        }
    }
    ctx->pc = 0x159B2Cu;
label_159b2c:
    // 0x159b2c: 0x451023
    ctx->pc = 0x159b2cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_159b30:
    // 0x159b30: 0x461006
    ctx->pc = 0x159b30u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_159b34:
    // 0x159b34: 0x1024025
    ctx->pc = 0x159b34u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_159b38:
    // 0x159b38: 0x81f02
    ctx->pc = 0x159b38u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 28));
label_159b3c:
    // 0x159b3c: 0xa64004
    ctx->pc = 0x159b3cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_159b40:
    // 0x159b40: 0x10000004
label_159b44:
    if (ctx->pc == 0x159B44u) {
        ctx->pc = 0x159B44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        ctx->pc = 0x159B48u;
        goto label_159b48;
    }
    ctx->pc = 0x159B40u;
    {
        const bool branch_taken_0x159b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159B44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
        if (branch_taken_0x159b40) {
            ctx->pc = 0x159B54u;
            goto label_159b54;
        }
    }
    ctx->pc = 0x159B48u;
label_159b48:
    // 0x159b48: 0x81702
    ctx->pc = 0x159b48u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 28));
label_159b4c:
    // 0x159b4c: 0xc0402d
    ctx->pc = 0x159b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159b50:
    // 0x159b50: 0xae020278
    ctx->pc = 0x159b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_159b54:
    // 0x159b54: 0x80e60000
    ctx->pc = 0x159b54u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159b58:
    // 0x159b58: 0x24e70001
    ctx->pc = 0x159b58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159b5c:
    // 0x159b5c: 0x90e20000
    ctx->pc = 0x159b5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159b60:
    // 0x159b60: 0x24e70001
    ctx->pc = 0x159b60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159b64:
    // 0x159b64: 0x63200
    ctx->pc = 0x159b64u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159b68:
    // 0x159b68: 0x90e30000
    ctx->pc = 0x159b68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159b6c:
    // 0x159b6c: 0xc23025
    ctx->pc = 0x159b6cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159b70:
    // 0x159b70: 0x24e70001
    ctx->pc = 0x159b70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159b74:
    // 0x159b74: 0x63200
    ctx->pc = 0x159b74u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159b78:
    // 0x159b78: 0x90e20000
    ctx->pc = 0x159b78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159b7c:
    // 0x159b7c: 0xc33025
    ctx->pc = 0x159b7cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159b80:
    // 0x159b80: 0x24e70001
    ctx->pc = 0x159b80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159b84:
    // 0x159b84: 0x63200
    ctx->pc = 0x159b84u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159b88:
    // 0x159b88: 0x10000004
label_159b8c:
    if (ctx->pc == 0x159B8Cu) {
        ctx->pc = 0x159B8Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159B90u;
        goto label_159b90;
    }
    ctx->pc = 0x159B88u;
    {
        const bool branch_taken_0x159b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159B8Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159b88) {
            ctx->pc = 0x159B9Cu;
            goto label_159b9c;
        }
    }
    ctx->pc = 0x159B90u;
label_159b90:
    // 0x159b90: 0x84100
    ctx->pc = 0x159b90u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 4));
label_159b94:
    // 0x159b94: 0xae020278
    ctx->pc = 0x159b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
label_159b98:
    // 0x159b98: 0x24a50004
    ctx->pc = 0x159b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_159b9c:
    // 0x159b9c: 0x28a2001c
    ctx->pc = 0x159b9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 28));
label_159ba0:
    // 0x159ba0: 0x1440001b
label_159ba4:
    if (ctx->pc == 0x159BA4u) {
        ctx->pc = 0x159BA4u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 8), 28));
        ctx->pc = 0x159BA8u;
        goto label_159ba8;
    }
    ctx->pc = 0x159BA0u;
    {
        const bool branch_taken_0x159ba0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x159BA4u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 8), 28));
        if (branch_taken_0x159ba0) {
            ctx->pc = 0x159C10u;
            goto label_159c10;
        }
    }
    ctx->pc = 0x159BA8u;
label_159ba8:
    // 0x159ba8: 0x24a5ffe4
    ctx->pc = 0x159ba8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967268));
label_159bac:
    // 0x159bac: 0x10a00008
label_159bb0:
    if (ctx->pc == 0x159BB0u) {
        ctx->pc = 0x159BB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x159BB4u;
        goto label_159bb4;
    }
    ctx->pc = 0x159BACu;
    {
        const bool branch_taken_0x159bac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x159BB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x159bac) {
            ctx->pc = 0x159BD0u;
            goto label_159bd0;
        }
    }
    ctx->pc = 0x159BB4u;
label_159bb4:
    // 0x159bb4: 0x451023
    ctx->pc = 0x159bb4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_159bb8:
    // 0x159bb8: 0x461006
    ctx->pc = 0x159bb8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_159bbc:
    // 0x159bbc: 0x1024025
    ctx->pc = 0x159bbcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_159bc0:
    // 0x159bc0: 0x82702
    ctx->pc = 0x159bc0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 8), 28));
label_159bc4:
    // 0x159bc4: 0x10000003
label_159bc8:
    if (ctx->pc == 0x159BC8u) {
        ctx->pc = 0x159BC8u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x159BCCu;
        goto label_159bcc;
    }
    ctx->pc = 0x159BC4u;
    {
        const bool branch_taken_0x159bc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159BC8u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x159bc4) {
            ctx->pc = 0x159BD4u;
            goto label_159bd4;
        }
    }
    ctx->pc = 0x159BCCu;
label_159bcc:
    // 0x159bcc: 0x0
    ctx->pc = 0x159bccu;
    // NOP
label_159bd0:
    // 0x159bd0: 0xc0402d
    ctx->pc = 0x159bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159bd4:
    // 0x159bd4: 0x80e60000
    ctx->pc = 0x159bd4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159bd8:
    // 0x159bd8: 0x24e70001
    ctx->pc = 0x159bd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159bdc:
    // 0x159bdc: 0x90e20000
    ctx->pc = 0x159bdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159be0:
    // 0x159be0: 0x24e70001
    ctx->pc = 0x159be0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159be4:
    // 0x159be4: 0x63200
    ctx->pc = 0x159be4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159be8:
    // 0x159be8: 0x90e30000
    ctx->pc = 0x159be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159bec:
    // 0x159bec: 0xc23025
    ctx->pc = 0x159becu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159bf0:
    // 0x159bf0: 0x24e70001
    ctx->pc = 0x159bf0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159bf4:
    // 0x159bf4: 0x63200
    ctx->pc = 0x159bf4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159bf8:
    // 0x159bf8: 0x90e20000
    ctx->pc = 0x159bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159bfc:
    // 0x159bfc: 0xc33025
    ctx->pc = 0x159bfcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159c00:
    // 0x159c00: 0x24e70001
    ctx->pc = 0x159c00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159c04:
    // 0x159c04: 0x63200
    ctx->pc = 0x159c04u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159c08:
    // 0x159c08: 0x10000003
label_159c0c:
    if (ctx->pc == 0x159C0Cu) {
        ctx->pc = 0x159C0Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159C10u;
        goto label_159c10;
    }
    ctx->pc = 0x159C08u;
    {
        const bool branch_taken_0x159c08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159C0Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159c08) {
            ctx->pc = 0x159C18u;
            goto label_159c18;
        }
    }
    ctx->pc = 0x159C10u;
label_159c10:
    // 0x159c10: 0x84100
    ctx->pc = 0x159c10u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 4));
label_159c14:
    // 0x159c14: 0x24a50004
    ctx->pc = 0x159c14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_159c18:
    // 0x159c18: 0x28a2000e
    ctx->pc = 0x159c18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 14));
label_159c1c:
    // 0x159c1c: 0x1440001e
label_159c20:
    if (ctx->pc == 0x159C20u) {
        ctx->pc = 0x159C20u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->pc = 0x159C24u;
        goto label_159c24;
    }
    ctx->pc = 0x159C1Cu;
    {
        const bool branch_taken_0x159c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x159C20u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        if (branch_taken_0x159c1c) {
            ctx->pc = 0x159C98u;
            goto label_159c98;
        }
    }
    ctx->pc = 0x159C24u;
label_159c24:
    // 0x159c24: 0x24a5fff2
    ctx->pc = 0x159c24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967282));
label_159c28:
    // 0x159c28: 0x10a00009
label_159c2c:
    if (ctx->pc == 0x159C2Cu) {
        ctx->pc = 0x159C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x159C30u;
        goto label_159c30;
    }
    ctx->pc = 0x159C28u;
    {
        const bool branch_taken_0x159c28 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x159C2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x159c28) {
            ctx->pc = 0x159C50u;
            goto label_159c50;
        }
    }
    ctx->pc = 0x159C30u;
label_159c30:
    // 0x159c30: 0x451023
    ctx->pc = 0x159c30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_159c34:
    // 0x159c34: 0x461006
    ctx->pc = 0x159c34u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_159c38:
    // 0x159c38: 0x1024025
    ctx->pc = 0x159c38u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_159c3c:
    // 0x159c3c: 0x81b82
    ctx->pc = 0x159c3cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 14));
label_159c40:
    // 0x159c40: 0xa64004
    ctx->pc = 0x159c40u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_159c44:
    // 0x159c44: 0x10000005
label_159c48:
    if (ctx->pc == 0x159C48u) {
        ctx->pc = 0x159C48u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
        ctx->pc = 0x159C4Cu;
        goto label_159c4c;
    }
    ctx->pc = 0x159C44u;
    {
        const bool branch_taken_0x159c44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159C48u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 3));
        if (branch_taken_0x159c44) {
            ctx->pc = 0x159C5Cu;
            goto label_159c5c;
        }
    }
    ctx->pc = 0x159C4Cu;
label_159c4c:
    // 0x159c4c: 0x0
    ctx->pc = 0x159c4cu;
    // NOP
label_159c50:
    // 0x159c50: 0x81382
    ctx->pc = 0x159c50u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 14));
label_159c54:
    // 0x159c54: 0xc0402d
    ctx->pc = 0x159c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159c58:
    // 0x159c58: 0xae02027c
    ctx->pc = 0x159c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_159c5c:
    // 0x159c5c: 0x80e60000
    ctx->pc = 0x159c5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159c60:
    // 0x159c60: 0x24e70001
    ctx->pc = 0x159c60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159c64:
    // 0x159c64: 0x90e20000
    ctx->pc = 0x159c64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159c68:
    // 0x159c68: 0x24e70001
    ctx->pc = 0x159c68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159c6c:
    // 0x159c6c: 0x63200
    ctx->pc = 0x159c6cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159c70:
    // 0x159c70: 0x90e30000
    ctx->pc = 0x159c70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159c74:
    // 0x159c74: 0xc23025
    ctx->pc = 0x159c74u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159c78:
    // 0x159c78: 0x24e70001
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159c7c:
    // 0x159c7c: 0x63200
    ctx->pc = 0x159c7cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159c80:
    // 0x159c80: 0x90e20000
    ctx->pc = 0x159c80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159c84:
    // 0x159c84: 0xc33025
    ctx->pc = 0x159c84u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159c88:
    // 0x159c88: 0x24e70001
    ctx->pc = 0x159c88u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159c8c:
    // 0x159c8c: 0x63200
    ctx->pc = 0x159c8cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159c90:
    // 0x159c90: 0x10000005
label_159c94:
    if (ctx->pc == 0x159C94u) {
        ctx->pc = 0x159C94u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159C98u;
        goto label_159c98;
    }
    ctx->pc = 0x159C90u;
    {
        const bool branch_taken_0x159c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159C94u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159c90) {
            ctx->pc = 0x159CA8u;
            goto label_159ca8;
        }
    }
    ctx->pc = 0x159C98u;
label_159c98:
    // 0x159c98: 0x81382
    ctx->pc = 0x159c98u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 14));
label_159c9c:
    // 0x159c9c: 0x84480
    ctx->pc = 0x159c9cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 18));
label_159ca0:
    // 0x159ca0: 0xae02027c
    ctx->pc = 0x159ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 2));
label_159ca4:
    // 0x159ca4: 0x24a50012
    ctx->pc = 0x159ca4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18));
label_159ca8:
    // 0x159ca8: 0x24a50001
    ctx->pc = 0x159ca8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_159cac:
    // 0x159cac: 0x28a20020
    ctx->pc = 0x159cacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
label_159cb0:
    // 0x159cb0: 0x54400011
label_159cb4:
    if (ctx->pc == 0x159CB4u) {
        ctx->pc = 0x159CB4u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x159CB8u;
        goto label_159cb8;
    }
    ctx->pc = 0x159CB0u;
    {
        const bool branch_taken_0x159cb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x159cb0) {
            ctx->pc = 0x159CB4u;
            SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
            ctx->pc = 0x159CF8u;
            goto label_159cf8;
        }
    }
    ctx->pc = 0x159CB8u;
label_159cb8:
    // 0x159cb8: 0x24a5ffe0
    ctx->pc = 0x159cb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
label_159cbc:
    // 0x159cbc: 0xa64004
    ctx->pc = 0x159cbcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_159cc0:
    // 0x159cc0: 0x80e60000
    ctx->pc = 0x159cc0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159cc4:
    // 0x159cc4: 0x24e70001
    ctx->pc = 0x159cc4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159cc8:
    // 0x159cc8: 0x90e20000
    ctx->pc = 0x159cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159ccc:
    // 0x159ccc: 0x24e70001
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159cd0:
    // 0x159cd0: 0x63200
    ctx->pc = 0x159cd0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159cd4:
    // 0x159cd4: 0x90e30000
    ctx->pc = 0x159cd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159cd8:
    // 0x159cd8: 0xc23025
    ctx->pc = 0x159cd8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159cdc:
    // 0x159cdc: 0x24e70001
    ctx->pc = 0x159cdcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159ce0:
    // 0x159ce0: 0x63200
    ctx->pc = 0x159ce0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159ce4:
    // 0x159ce4: 0x90e20000
    ctx->pc = 0x159ce4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159ce8:
    // 0x159ce8: 0xc33025
    ctx->pc = 0x159ce8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159cec:
    // 0x159cec: 0x24e70001
    ctx->pc = 0x159cecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159cf0:
    // 0x159cf0: 0x63200
    ctx->pc = 0x159cf0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159cf4:
    // 0x159cf4: 0xc23025
    ctx->pc = 0x159cf4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159cf8:
    // 0x159cf8: 0x28a20016
    ctx->pc = 0x159cf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 22));
label_159cfc:
    // 0x159cfc: 0x1440001e
label_159d00:
    if (ctx->pc == 0x159D00u) {
        ctx->pc = 0x159D00u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 22));
        ctx->pc = 0x159D04u;
        goto label_159d04;
    }
    ctx->pc = 0x159CFCu;
    {
        const bool branch_taken_0x159cfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x159D00u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 22));
        if (branch_taken_0x159cfc) {
            ctx->pc = 0x159D78u;
            goto label_159d78;
        }
    }
    ctx->pc = 0x159D04u;
label_159d04:
    // 0x159d04: 0x24a5ffea
    ctx->pc = 0x159d04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967274));
label_159d08:
    // 0x159d08: 0x10a00009
label_159d0c:
    if (ctx->pc == 0x159D0Cu) {
        ctx->pc = 0x159D0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x159D10u;
        goto label_159d10;
    }
    ctx->pc = 0x159D08u;
    {
        const bool branch_taken_0x159d08 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x159D0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x159d08) {
            ctx->pc = 0x159D30u;
            goto label_159d30;
        }
    }
    ctx->pc = 0x159D10u;
label_159d10:
    // 0x159d10: 0x451023
    ctx->pc = 0x159d10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_159d14:
    // 0x159d14: 0x461006
    ctx->pc = 0x159d14u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_159d18:
    // 0x159d18: 0x1024025
    ctx->pc = 0x159d18u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_159d1c:
    // 0x159d1c: 0x81d82
    ctx->pc = 0x159d1cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 8), 22));
label_159d20:
    // 0x159d20: 0xa64004
    ctx->pc = 0x159d20u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_159d24:
    // 0x159d24: 0x10000005
label_159d28:
    if (ctx->pc == 0x159D28u) {
        ctx->pc = 0x159D28u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 3));
        ctx->pc = 0x159D2Cu;
        goto label_159d2c;
    }
    ctx->pc = 0x159D24u;
    {
        const bool branch_taken_0x159d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159D28u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 3));
        if (branch_taken_0x159d24) {
            ctx->pc = 0x159D3Cu;
            goto label_159d3c;
        }
    }
    ctx->pc = 0x159D2Cu;
label_159d2c:
    // 0x159d2c: 0x0
    ctx->pc = 0x159d2cu;
    // NOP
label_159d30:
    // 0x159d30: 0x81582
    ctx->pc = 0x159d30u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 22));
label_159d34:
    // 0x159d34: 0xc0402d
    ctx->pc = 0x159d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159d38:
    // 0x159d38: 0xae020280
    ctx->pc = 0x159d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_159d3c:
    // 0x159d3c: 0x80e60000
    ctx->pc = 0x159d3cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159d40:
    // 0x159d40: 0x24e70001
    ctx->pc = 0x159d40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159d44:
    // 0x159d44: 0x90e20000
    ctx->pc = 0x159d44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159d48:
    // 0x159d48: 0x24e70001
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159d4c:
    // 0x159d4c: 0x63200
    ctx->pc = 0x159d4cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159d50:
    // 0x159d50: 0x90e30000
    ctx->pc = 0x159d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159d54:
    // 0x159d54: 0xc23025
    ctx->pc = 0x159d54u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159d58:
    // 0x159d58: 0x24e70001
    ctx->pc = 0x159d58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159d5c:
    // 0x159d5c: 0x63200
    ctx->pc = 0x159d5cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159d60:
    // 0x159d60: 0x90e20000
    ctx->pc = 0x159d60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159d64:
    // 0x159d64: 0xc33025
    ctx->pc = 0x159d64u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159d68:
    // 0x159d68: 0x24e70001
    ctx->pc = 0x159d68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159d6c:
    // 0x159d6c: 0x63200
    ctx->pc = 0x159d6cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159d70:
    // 0x159d70: 0x10000004
label_159d74:
    if (ctx->pc == 0x159D74u) {
        ctx->pc = 0x159D74u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159D78u;
        goto label_159d78;
    }
    ctx->pc = 0x159D70u;
    {
        const bool branch_taken_0x159d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159D74u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159d70) {
            ctx->pc = 0x159D84u;
            goto label_159d84;
        }
    }
    ctx->pc = 0x159D78u;
label_159d78:
    // 0x159d78: 0x84280
    ctx->pc = 0x159d78u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 10));
label_159d7c:
    // 0x159d7c: 0xae020280
    ctx->pc = 0x159d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_159d80:
    // 0x159d80: 0x24a5000a
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 10));
label_159d84:
    // 0x159d84: 0x817c2
    ctx->pc = 0x159d84u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
label_159d88:
    // 0x159d88: 0x2403001f
    ctx->pc = 0x159d88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_159d8c:
    // 0x159d8c: 0x14a30012
label_159d90:
    if (ctx->pc == 0x159D90u) {
        ctx->pc = 0x159D90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
        ctx->pc = 0x159D94u;
        goto label_159d94;
    }
    ctx->pc = 0x159D8Cu;
    {
        const bool branch_taken_0x159d8c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x159D90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
        if (branch_taken_0x159d8c) {
            ctx->pc = 0x159DD8u;
            goto label_159dd8;
        }
    }
    ctx->pc = 0x159D94u;
label_159d94:
    // 0x159d94: 0xc0402d
    ctx->pc = 0x159d94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159d98:
    // 0x159d98: 0x80e60000
    ctx->pc = 0x159d98u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159d9c:
    // 0x159d9c: 0x24e70001
    ctx->pc = 0x159d9cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159da0:
    // 0x159da0: 0x282d
    ctx->pc = 0x159da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159da4:
    // 0x159da4: 0x90e20000
    ctx->pc = 0x159da4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159da8:
    // 0x159da8: 0x24e70001
    ctx->pc = 0x159da8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159dac:
    // 0x159dac: 0x63200
    ctx->pc = 0x159dacu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159db0:
    // 0x159db0: 0x90e30000
    ctx->pc = 0x159db0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159db4:
    // 0x159db4: 0xc23025
    ctx->pc = 0x159db4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159db8:
    // 0x159db8: 0x24e70001
    ctx->pc = 0x159db8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159dbc:
    // 0x159dbc: 0x63200
    ctx->pc = 0x159dbcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159dc0:
    // 0x159dc0: 0x90e20000
    ctx->pc = 0x159dc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159dc4:
    // 0x159dc4: 0xc33025
    ctx->pc = 0x159dc4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159dc8:
    // 0x159dc8: 0x24e70001
    ctx->pc = 0x159dc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159dcc:
    // 0x159dcc: 0x63200
    ctx->pc = 0x159dccu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159dd0:
    // 0x159dd0: 0x10000003
label_159dd4:
    if (ctx->pc == 0x159DD4u) {
        ctx->pc = 0x159DD4u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159DD8u;
        goto label_159dd8;
    }
    ctx->pc = 0x159DD0u;
    {
        const bool branch_taken_0x159dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159DD4u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159dd0) {
            ctx->pc = 0x159DE0u;
            goto label_159de0;
        }
    }
    ctx->pc = 0x159DD8u;
label_159dd8:
    // 0x159dd8: 0x24a50001
    ctx->pc = 0x159dd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_159ddc:
    // 0x159ddc: 0x84040
    ctx->pc = 0x159ddcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
label_159de0:
    // 0x159de0: 0x2402001f
    ctx->pc = 0x159de0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_159de4:
    // 0x159de4: 0x14a20012
label_159de8:
    if (ctx->pc == 0x159DE8u) {
        ctx->pc = 0x159DE8u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 8), 31));
        ctx->pc = 0x159DECu;
        goto label_159dec;
    }
    ctx->pc = 0x159DE4u;
    {
        const bool branch_taken_0x159de4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x159DE8u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 8), 31));
        if (branch_taken_0x159de4) {
            ctx->pc = 0x159E30u;
            goto label_159e30;
        }
    }
    ctx->pc = 0x159DECu;
label_159dec:
    // 0x159dec: 0xc0402d
    ctx->pc = 0x159decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159df0:
    // 0x159df0: 0x80e60000
    ctx->pc = 0x159df0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159df4:
    // 0x159df4: 0x24e70001
    ctx->pc = 0x159df4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159df8:
    // 0x159df8: 0x282d
    ctx->pc = 0x159df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159dfc:
    // 0x159dfc: 0x90e20000
    ctx->pc = 0x159dfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159e00:
    // 0x159e00: 0x24e70001
    ctx->pc = 0x159e00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159e04:
    // 0x159e04: 0x63200
    ctx->pc = 0x159e04u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159e08:
    // 0x159e08: 0x90e30000
    ctx->pc = 0x159e08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159e0c:
    // 0x159e0c: 0xc23025
    ctx->pc = 0x159e0cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159e10:
    // 0x159e10: 0x24e70001
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159e14:
    // 0x159e14: 0x63200
    ctx->pc = 0x159e14u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159e18:
    // 0x159e18: 0x90e20000
    ctx->pc = 0x159e18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159e1c:
    // 0x159e1c: 0xc33025
    ctx->pc = 0x159e1cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159e20:
    // 0x159e20: 0x24e70001
    ctx->pc = 0x159e20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159e24:
    // 0x159e24: 0x63200
    ctx->pc = 0x159e24u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159e28:
    // 0x159e28: 0x10000003
label_159e2c:
    if (ctx->pc == 0x159E2Cu) {
        ctx->pc = 0x159E2Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159E30u;
        goto label_159e30;
    }
    ctx->pc = 0x159E28u;
    {
        const bool branch_taken_0x159e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159E2Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159e28) {
            ctx->pc = 0x159E38u;
            goto label_159e38;
        }
    }
    ctx->pc = 0x159E30u;
label_159e30:
    // 0x159e30: 0x24a50001
    ctx->pc = 0x159e30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_159e34:
    // 0x159e34: 0x84040
    ctx->pc = 0x159e34u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
label_159e38:
    // 0x159e38: 0x1080001d
label_159e3c:
    if (ctx->pc == 0x159E3Cu) {
        ctx->pc = 0x159E3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x159E40u;
        goto label_159e40;
    }
    ctx->pc = 0x159E38u;
    {
        const bool branch_taken_0x159e38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x159E3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x159e38) {
            ctx->pc = 0x159EB0u;
            goto label_159eb0;
        }
    }
    ctx->pc = 0x159E40u;
label_159e40:
    // 0x159e40: 0x28a20018
    ctx->pc = 0x159e40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
label_159e44:
    // 0x159e44: 0x0
    ctx->pc = 0x159e44u;
    // NOP
label_159e48:
    // 0x159e48: 0x54400015
label_159e4c:
    if (ctx->pc == 0x159E4Cu) {
        ctx->pc = 0x159E4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x159E50u;
        goto label_159e50;
    }
    ctx->pc = 0x159E48u;
    {
        const bool branch_taken_0x159e48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x159e48) {
            ctx->pc = 0x159E4Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
            ctx->pc = 0x159EA0u;
            goto label_159ea0;
        }
    }
    ctx->pc = 0x159E50u;
label_159e50:
    // 0x159e50: 0x24a5ffe8
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967272));
label_159e54:
    // 0x159e54: 0xc0402d
    ctx->pc = 0x159e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_159e58:
    // 0x159e58: 0xa61804
    ctx->pc = 0x159e58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_159e5c:
    // 0x159e5c: 0x80e60000
    ctx->pc = 0x159e5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159e60:
    // 0x159e60: 0x38a20000
    ctx->pc = 0x159e60u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 0));
label_159e64:
    // 0x159e64: 0x24e70001
    ctx->pc = 0x159e64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159e68:
    // 0x159e68: 0x62400b
    ctx->pc = 0x159e68u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 3));
label_159e6c:
    // 0x159e6c: 0x90e20000
    ctx->pc = 0x159e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159e70:
    // 0x159e70: 0x63200
    ctx->pc = 0x159e70u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159e74:
    // 0x159e74: 0x24e70001
    ctx->pc = 0x159e74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159e78:
    // 0x159e78: 0x90e30000
    ctx->pc = 0x159e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159e7c:
    // 0x159e7c: 0x24e70001
    ctx->pc = 0x159e7cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159e80:
    // 0x159e80: 0xc23025
    ctx->pc = 0x159e80u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_159e84:
    // 0x159e84: 0x90e20000
    ctx->pc = 0x159e84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_159e88:
    // 0x159e88: 0x63200
    ctx->pc = 0x159e88u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159e8c:
    // 0x159e8c: 0x24e70001
    ctx->pc = 0x159e8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_159e90:
    // 0x159e90: 0xc33025
    ctx->pc = 0x159e90u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_159e94:
    // 0x159e94: 0x63200
    ctx->pc = 0x159e94u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_159e98:
    // 0x159e98: 0x10000002
label_159e9c:
    if (ctx->pc == 0x159E9Cu) {
        ctx->pc = 0x159E9Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x159EA0u;
        goto label_159ea0;
    }
    ctx->pc = 0x159E98u;
    {
        const bool branch_taken_0x159e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159E9Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x159e98) {
            ctx->pc = 0x159EA4u;
            goto label_159ea4;
        }
    }
    ctx->pc = 0x159EA0u;
label_159ea0:
    // 0x159ea0: 0x84200
    ctx->pc = 0x159ea0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
label_159ea4:
    // 0x159ea4: 0x2484ffff
    ctx->pc = 0x159ea4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_159ea8:
    // 0x159ea8: 0x481ffe7
label_159eac:
    if (ctx->pc == 0x159EACu) {
        ctx->pc = 0x159EACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
        ctx->pc = 0x159EB0u;
        goto label_159eb0;
    }
    ctx->pc = 0x159EA8u;
    {
        const bool branch_taken_0x159ea8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x159EACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
        if (branch_taken_0x159ea8) {
            ctx->pc = 0x159E48u;
            goto label_159e48;
        }
    }
    ctx->pc = 0x159EB0u;
label_159eb0:
    // 0x159eb0: 0x2402001f
    ctx->pc = 0x159eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
label_159eb4:
    // 0x159eb4: 0x14a20004
label_159eb8:
    if (ctx->pc == 0x159EB8u) {
        ctx->pc = 0x159EB8u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 8), 31));
        ctx->pc = 0x159EBCu;
        goto label_159ebc;
    }
    ctx->pc = 0x159EB4u;
    {
        const bool branch_taken_0x159eb4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x159EB8u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 8), 31));
        if (branch_taken_0x159eb4) {
            ctx->pc = 0x159EC8u;
            goto label_159ec8;
        }
    }
    ctx->pc = 0x159EBCu;
label_159ebc:
    // 0x159ebc: 0x282d
    ctx->pc = 0x159ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159ec0:
    // 0x159ec0: 0x10000002
label_159ec4:
    if (ctx->pc == 0x159EC4u) {
        ctx->pc = 0x159EC4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x159EC8u;
        goto label_159ec8;
    }
    ctx->pc = 0x159EC0u;
    {
        const bool branch_taken_0x159ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x159EC4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
        if (branch_taken_0x159ec0) {
            ctx->pc = 0x159ECCu;
            goto label_159ecc;
        }
    }
    ctx->pc = 0x159EC8u;
label_159ec8:
    // 0x159ec8: 0x24a50001
    ctx->pc = 0x159ec8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_159ecc:
    // 0x159ecc: 0x1080000b
label_159ed0:
    if (ctx->pc == 0x159ED0u) {
        ctx->pc = 0x159ED0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x159ED4u;
        goto label_159ed4;
    }
    ctx->pc = 0x159ECCu;
    {
        const bool branch_taken_0x159ecc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x159ED0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x159ecc) {
            ctx->pc = 0x159EFCu;
            goto label_159efc;
        }
    }
    ctx->pc = 0x159ED4u;
label_159ed4:
    // 0x159ed4: 0x28a20018
    ctx->pc = 0x159ed4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
label_159ed8:
    // 0x159ed8: 0x54400003
label_159edc:
    if (ctx->pc == 0x159EDCu) {
        ctx->pc = 0x159EDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x159EE0u;
        goto label_159ee0;
    }
    ctx->pc = 0x159ED8u;
    {
        const bool branch_taken_0x159ed8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x159ed8) {
            ctx->pc = 0x159EDCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
            ctx->pc = 0x159EE8u;
            goto label_159ee8;
        }
    }
    ctx->pc = 0x159EE0u;
label_159ee0:
    // 0x159ee0: 0x24a5ffe8
    ctx->pc = 0x159ee0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967272));
label_159ee4:
    // 0x159ee4: 0x24e70004
    ctx->pc = 0x159ee4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4));
label_159ee8:
    // 0x159ee8: 0x2484ffff
    ctx->pc = 0x159ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_159eec:
    // 0x159eec: 0x0
    ctx->pc = 0x159eecu;
    // NOP
label_159ef0:
    // 0x159ef0: 0x0
    ctx->pc = 0x159ef0u;
    // NOP
label_159ef4:
    // 0x159ef4: 0x481fff8
label_159ef8:
    if (ctx->pc == 0x159EF8u) {
        ctx->pc = 0x159EF8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
        ctx->pc = 0x159EFCu;
        goto label_159efc;
    }
    ctx->pc = 0x159EF4u;
    {
        const bool branch_taken_0x159ef4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x159EF8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
        if (branch_taken_0x159ef4) {
            ctx->pc = 0x159ED8u;
            goto label_159ed8;
        }
    }
    ctx->pc = 0x159EFCu;
label_159efc:
    // 0x159efc: 0x8e230000
    ctx->pc = 0x159efcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_159f00:
    // 0x159f00: 0x30a80007
    ctx->pc = 0x159f00u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 5), 7));
label_159f04:
    // 0x159f04: 0x8e220004
    ctx->pc = 0x159f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_159f08:
    // 0x159f08: 0xa82823
    ctx->pc = 0x159f08u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_159f0c:
    // 0x159f0c: 0x2463000f
    ctx->pc = 0x159f0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
label_159f10:
    // 0x159f10: 0x24a50007
    ctx->pc = 0x159f10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7));
label_159f14:
    // 0x159f14: 0x2442000f
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
label_159f18:
    // 0x159f18: 0x31903
    ctx->pc = 0x159f18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_159f1c:
    // 0x159f1c: 0x21103
    ctx->pc = 0x159f1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_159f20:
    // 0x159f20: 0x528c3
    ctx->pc = 0x159f20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_159f24:
    // 0x159f24: 0x432018
    ctx->pc = 0x159f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_159f28:
    // 0x159f28: 0x8e060348
    ctx->pc = 0x159f28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_159f2c:
    // 0x159f2c: 0xe52821
    ctx->pc = 0x159f2cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_159f30:
    // 0x159f30: 0x3a0382d
    ctx->pc = 0x159f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_159f34:
    // 0x159f34: 0xae22000c
    ctx->pc = 0x159f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_159f38:
    // 0x159f38: 0x24a5fff8
    ctx->pc = 0x159f38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967288));
label_159f3c:
    // 0x159f3c: 0xae230008
    ctx->pc = 0x159f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_159f40:
    // 0x159f40: 0xa62823
    ctx->pc = 0x159f40u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_159f44:
    // 0x159f44: 0x2484ffff
    ctx->pc = 0x159f44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_159f48:
    // 0x159f48: 0xae080350
    ctx->pc = 0x159f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 8));
label_159f4c:
    // 0x159f4c: 0xae040310
    ctx->pc = 0x159f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 4));
label_159f50:
    // 0x159f50: 0x260202d
    ctx->pc = 0x159f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159f54:
    // 0x159f54: 0xc0501f8
label_159f58:
    if (ctx->pc == 0x159F58u) {
        ctx->pc = 0x159F58u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159F5Cu;
        goto label_159f5c;
    }
    ctx->pc = 0x159F54u;
    SET_GPR_U32(ctx, 31, 0x159F5Cu);
    ctx->pc = 0x159F58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F5Cu; }
    }
    if (ctx->pc != 0x159F5Cu) { return; }
    ctx->pc = 0x159F5Cu;
label_159f5c:
    // 0x159f5c: 0x8e430000
    ctx->pc = 0x159f5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_159f60:
    // 0x159f60: 0x260302d
    ctx->pc = 0x159f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_159f64:
    // 0x159f64: 0x240202d
    ctx->pc = 0x159f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159f68:
    // 0x159f68: 0x8c620020
    ctx->pc = 0x159f68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_159f6c:
    // 0x159f6c: 0x40f809
label_159f70:
    if (ctx->pc == 0x159F70u) {
        ctx->pc = 0x159F70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159F74u;
        goto label_159f74;
    }
    ctx->pc = 0x159F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159F74u);
        ctx->pc = 0x159F70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1598C8u: goto label_1598c8;
            case 0x1598CCu: goto label_1598cc;
            case 0x1598D0u: goto label_1598d0;
            case 0x1598D4u: goto label_1598d4;
            case 0x1598D8u: goto label_1598d8;
            case 0x1598DCu: goto label_1598dc;
            case 0x1598E0u: goto label_1598e0;
            case 0x1598E4u: goto label_1598e4;
            case 0x1598E8u: goto label_1598e8;
            case 0x1598ECu: goto label_1598ec;
            case 0x1598F0u: goto label_1598f0;
            case 0x1598F4u: goto label_1598f4;
            case 0x1598F8u: goto label_1598f8;
            case 0x1598FCu: goto label_1598fc;
            case 0x159900u: goto label_159900;
            case 0x159904u: goto label_159904;
            case 0x159908u: goto label_159908;
            case 0x15990Cu: goto label_15990c;
            case 0x159910u: goto label_159910;
            case 0x159914u: goto label_159914;
            case 0x159918u: goto label_159918;
            case 0x15991Cu: goto label_15991c;
            case 0x159920u: goto label_159920;
            case 0x159924u: goto label_159924;
            case 0x159928u: goto label_159928;
            case 0x15992Cu: goto label_15992c;
            case 0x159930u: goto label_159930;
            case 0x159934u: goto label_159934;
            case 0x159938u: goto label_159938;
            case 0x15993Cu: goto label_15993c;
            case 0x159940u: goto label_159940;
            case 0x159944u: goto label_159944;
            case 0x159948u: goto label_159948;
            case 0x15994Cu: goto label_15994c;
            case 0x159950u: goto label_159950;
            case 0x159954u: goto label_159954;
            case 0x159958u: goto label_159958;
            case 0x15995Cu: goto label_15995c;
            case 0x159960u: goto label_159960;
            case 0x159964u: goto label_159964;
            case 0x159968u: goto label_159968;
            case 0x15996Cu: goto label_15996c;
            case 0x159970u: goto label_159970;
            case 0x159974u: goto label_159974;
            case 0x159978u: goto label_159978;
            case 0x15997Cu: goto label_15997c;
            case 0x159980u: goto label_159980;
            case 0x159984u: goto label_159984;
            case 0x159988u: goto label_159988;
            case 0x15998Cu: goto label_15998c;
            case 0x159990u: goto label_159990;
            case 0x159994u: goto label_159994;
            case 0x159998u: goto label_159998;
            case 0x15999Cu: goto label_15999c;
            case 0x1599A0u: goto label_1599a0;
            case 0x1599A4u: goto label_1599a4;
            case 0x1599A8u: goto label_1599a8;
            case 0x1599ACu: goto label_1599ac;
            case 0x1599B0u: goto label_1599b0;
            case 0x1599B4u: goto label_1599b4;
            case 0x1599B8u: goto label_1599b8;
            case 0x1599BCu: goto label_1599bc;
            case 0x1599C0u: goto label_1599c0;
            case 0x1599C4u: goto label_1599c4;
            case 0x1599C8u: goto label_1599c8;
            case 0x1599CCu: goto label_1599cc;
            case 0x1599D0u: goto label_1599d0;
            case 0x1599D4u: goto label_1599d4;
            case 0x1599D8u: goto label_1599d8;
            case 0x1599DCu: goto label_1599dc;
            case 0x1599E0u: goto label_1599e0;
            case 0x1599E4u: goto label_1599e4;
            case 0x1599E8u: goto label_1599e8;
            case 0x1599ECu: goto label_1599ec;
            case 0x1599F0u: goto label_1599f0;
            case 0x1599F4u: goto label_1599f4;
            case 0x1599F8u: goto label_1599f8;
            case 0x1599FCu: goto label_1599fc;
            case 0x159A00u: goto label_159a00;
            case 0x159A04u: goto label_159a04;
            case 0x159A08u: goto label_159a08;
            case 0x159A0Cu: goto label_159a0c;
            case 0x159A10u: goto label_159a10;
            case 0x159A14u: goto label_159a14;
            case 0x159A18u: goto label_159a18;
            case 0x159A1Cu: goto label_159a1c;
            case 0x159A20u: goto label_159a20;
            case 0x159A24u: goto label_159a24;
            case 0x159A28u: goto label_159a28;
            case 0x159A2Cu: goto label_159a2c;
            case 0x159A30u: goto label_159a30;
            case 0x159A34u: goto label_159a34;
            case 0x159A38u: goto label_159a38;
            case 0x159A3Cu: goto label_159a3c;
            case 0x159A40u: goto label_159a40;
            case 0x159A44u: goto label_159a44;
            case 0x159A48u: goto label_159a48;
            case 0x159A4Cu: goto label_159a4c;
            case 0x159A50u: goto label_159a50;
            case 0x159A54u: goto label_159a54;
            case 0x159A58u: goto label_159a58;
            case 0x159A5Cu: goto label_159a5c;
            case 0x159A60u: goto label_159a60;
            case 0x159A64u: goto label_159a64;
            case 0x159A68u: goto label_159a68;
            case 0x159A6Cu: goto label_159a6c;
            case 0x159A70u: goto label_159a70;
            case 0x159A74u: goto label_159a74;
            case 0x159A78u: goto label_159a78;
            case 0x159A7Cu: goto label_159a7c;
            case 0x159A80u: goto label_159a80;
            case 0x159A84u: goto label_159a84;
            case 0x159A88u: goto label_159a88;
            case 0x159A8Cu: goto label_159a8c;
            case 0x159A90u: goto label_159a90;
            case 0x159A94u: goto label_159a94;
            case 0x159A98u: goto label_159a98;
            case 0x159A9Cu: goto label_159a9c;
            case 0x159AA0u: goto label_159aa0;
            case 0x159AA4u: goto label_159aa4;
            case 0x159AA8u: goto label_159aa8;
            case 0x159AACu: goto label_159aac;
            case 0x159AB0u: goto label_159ab0;
            case 0x159AB4u: goto label_159ab4;
            case 0x159AB8u: goto label_159ab8;
            case 0x159ABCu: goto label_159abc;
            case 0x159AC0u: goto label_159ac0;
            case 0x159AC4u: goto label_159ac4;
            case 0x159AC8u: goto label_159ac8;
            case 0x159ACCu: goto label_159acc;
            case 0x159AD0u: goto label_159ad0;
            case 0x159AD4u: goto label_159ad4;
            case 0x159AD8u: goto label_159ad8;
            case 0x159ADCu: goto label_159adc;
            case 0x159AE0u: goto label_159ae0;
            case 0x159AE4u: goto label_159ae4;
            case 0x159AE8u: goto label_159ae8;
            case 0x159AECu: goto label_159aec;
            case 0x159AF0u: goto label_159af0;
            case 0x159AF4u: goto label_159af4;
            case 0x159AF8u: goto label_159af8;
            case 0x159AFCu: goto label_159afc;
            case 0x159B00u: goto label_159b00;
            case 0x159B04u: goto label_159b04;
            case 0x159B08u: goto label_159b08;
            case 0x159B0Cu: goto label_159b0c;
            case 0x159B10u: goto label_159b10;
            case 0x159B14u: goto label_159b14;
            case 0x159B18u: goto label_159b18;
            case 0x159B1Cu: goto label_159b1c;
            case 0x159B20u: goto label_159b20;
            case 0x159B24u: goto label_159b24;
            case 0x159B28u: goto label_159b28;
            case 0x159B2Cu: goto label_159b2c;
            case 0x159B30u: goto label_159b30;
            case 0x159B34u: goto label_159b34;
            case 0x159B38u: goto label_159b38;
            case 0x159B3Cu: goto label_159b3c;
            case 0x159B40u: goto label_159b40;
            case 0x159B44u: goto label_159b44;
            case 0x159B48u: goto label_159b48;
            case 0x159B4Cu: goto label_159b4c;
            case 0x159B50u: goto label_159b50;
            case 0x159B54u: goto label_159b54;
            case 0x159B58u: goto label_159b58;
            case 0x159B5Cu: goto label_159b5c;
            case 0x159B60u: goto label_159b60;
            case 0x159B64u: goto label_159b64;
            case 0x159B68u: goto label_159b68;
            case 0x159B6Cu: goto label_159b6c;
            case 0x159B70u: goto label_159b70;
            case 0x159B74u: goto label_159b74;
            case 0x159B78u: goto label_159b78;
            case 0x159B7Cu: goto label_159b7c;
            case 0x159B80u: goto label_159b80;
            case 0x159B84u: goto label_159b84;
            case 0x159B88u: goto label_159b88;
            case 0x159B8Cu: goto label_159b8c;
            case 0x159B90u: goto label_159b90;
            case 0x159B94u: goto label_159b94;
            case 0x159B98u: goto label_159b98;
            case 0x159B9Cu: goto label_159b9c;
            case 0x159BA0u: goto label_159ba0;
            case 0x159BA4u: goto label_159ba4;
            case 0x159BA8u: goto label_159ba8;
            case 0x159BACu: goto label_159bac;
            case 0x159BB0u: goto label_159bb0;
            case 0x159BB4u: goto label_159bb4;
            case 0x159BB8u: goto label_159bb8;
            case 0x159BBCu: goto label_159bbc;
            case 0x159BC0u: goto label_159bc0;
            case 0x159BC4u: goto label_159bc4;
            case 0x159BC8u: goto label_159bc8;
            case 0x159BCCu: goto label_159bcc;
            case 0x159BD0u: goto label_159bd0;
            case 0x159BD4u: goto label_159bd4;
            case 0x159BD8u: goto label_159bd8;
            case 0x159BDCu: goto label_159bdc;
            case 0x159BE0u: goto label_159be0;
            case 0x159BE4u: goto label_159be4;
            case 0x159BE8u: goto label_159be8;
            case 0x159BECu: goto label_159bec;
            case 0x159BF0u: goto label_159bf0;
            case 0x159BF4u: goto label_159bf4;
            case 0x159BF8u: goto label_159bf8;
            case 0x159BFCu: goto label_159bfc;
            case 0x159C00u: goto label_159c00;
            case 0x159C04u: goto label_159c04;
            case 0x159C08u: goto label_159c08;
            case 0x159C0Cu: goto label_159c0c;
            case 0x159C10u: goto label_159c10;
            case 0x159C14u: goto label_159c14;
            case 0x159C18u: goto label_159c18;
            case 0x159C1Cu: goto label_159c1c;
            case 0x159C20u: goto label_159c20;
            case 0x159C24u: goto label_159c24;
            case 0x159C28u: goto label_159c28;
            case 0x159C2Cu: goto label_159c2c;
            case 0x159C30u: goto label_159c30;
            case 0x159C34u: goto label_159c34;
            case 0x159C38u: goto label_159c38;
            case 0x159C3Cu: goto label_159c3c;
            case 0x159C40u: goto label_159c40;
            case 0x159C44u: goto label_159c44;
            case 0x159C48u: goto label_159c48;
            case 0x159C4Cu: goto label_159c4c;
            case 0x159C50u: goto label_159c50;
            case 0x159C54u: goto label_159c54;
            case 0x159C58u: goto label_159c58;
            case 0x159C5Cu: goto label_159c5c;
            case 0x159C60u: goto label_159c60;
            case 0x159C64u: goto label_159c64;
            case 0x159C68u: goto label_159c68;
            case 0x159C6Cu: goto label_159c6c;
            case 0x159C70u: goto label_159c70;
            case 0x159C74u: goto label_159c74;
            case 0x159C78u: goto label_159c78;
            case 0x159C7Cu: goto label_159c7c;
            case 0x159C80u: goto label_159c80;
            case 0x159C84u: goto label_159c84;
            case 0x159C88u: goto label_159c88;
            case 0x159C8Cu: goto label_159c8c;
            case 0x159C90u: goto label_159c90;
            case 0x159C94u: goto label_159c94;
            case 0x159C98u: goto label_159c98;
            case 0x159C9Cu: goto label_159c9c;
            case 0x159CA0u: goto label_159ca0;
            case 0x159CA4u: goto label_159ca4;
            case 0x159CA8u: goto label_159ca8;
            case 0x159CACu: goto label_159cac;
            case 0x159CB0u: goto label_159cb0;
            case 0x159CB4u: goto label_159cb4;
            case 0x159CB8u: goto label_159cb8;
            case 0x159CBCu: goto label_159cbc;
            case 0x159CC0u: goto label_159cc0;
            case 0x159CC4u: goto label_159cc4;
            case 0x159CC8u: goto label_159cc8;
            case 0x159CCCu: goto label_159ccc;
            case 0x159CD0u: goto label_159cd0;
            case 0x159CD4u: goto label_159cd4;
            case 0x159CD8u: goto label_159cd8;
            case 0x159CDCu: goto label_159cdc;
            case 0x159CE0u: goto label_159ce0;
            case 0x159CE4u: goto label_159ce4;
            case 0x159CE8u: goto label_159ce8;
            case 0x159CECu: goto label_159cec;
            case 0x159CF0u: goto label_159cf0;
            case 0x159CF4u: goto label_159cf4;
            case 0x159CF8u: goto label_159cf8;
            case 0x159CFCu: goto label_159cfc;
            case 0x159D00u: goto label_159d00;
            case 0x159D04u: goto label_159d04;
            case 0x159D08u: goto label_159d08;
            case 0x159D0Cu: goto label_159d0c;
            case 0x159D10u: goto label_159d10;
            case 0x159D14u: goto label_159d14;
            case 0x159D18u: goto label_159d18;
            case 0x159D1Cu: goto label_159d1c;
            case 0x159D20u: goto label_159d20;
            case 0x159D24u: goto label_159d24;
            case 0x159D28u: goto label_159d28;
            case 0x159D2Cu: goto label_159d2c;
            case 0x159D30u: goto label_159d30;
            case 0x159D34u: goto label_159d34;
            case 0x159D38u: goto label_159d38;
            case 0x159D3Cu: goto label_159d3c;
            case 0x159D40u: goto label_159d40;
            case 0x159D44u: goto label_159d44;
            case 0x159D48u: goto label_159d48;
            case 0x159D4Cu: goto label_159d4c;
            case 0x159D50u: goto label_159d50;
            case 0x159D54u: goto label_159d54;
            case 0x159D58u: goto label_159d58;
            case 0x159D5Cu: goto label_159d5c;
            case 0x159D60u: goto label_159d60;
            case 0x159D64u: goto label_159d64;
            case 0x159D68u: goto label_159d68;
            case 0x159D6Cu: goto label_159d6c;
            case 0x159D70u: goto label_159d70;
            case 0x159D74u: goto label_159d74;
            case 0x159D78u: goto label_159d78;
            case 0x159D7Cu: goto label_159d7c;
            case 0x159D80u: goto label_159d80;
            case 0x159D84u: goto label_159d84;
            case 0x159D88u: goto label_159d88;
            case 0x159D8Cu: goto label_159d8c;
            case 0x159D90u: goto label_159d90;
            case 0x159D94u: goto label_159d94;
            case 0x159D98u: goto label_159d98;
            case 0x159D9Cu: goto label_159d9c;
            case 0x159DA0u: goto label_159da0;
            case 0x159DA4u: goto label_159da4;
            case 0x159DA8u: goto label_159da8;
            case 0x159DACu: goto label_159dac;
            case 0x159DB0u: goto label_159db0;
            case 0x159DB4u: goto label_159db4;
            case 0x159DB8u: goto label_159db8;
            case 0x159DBCu: goto label_159dbc;
            case 0x159DC0u: goto label_159dc0;
            case 0x159DC4u: goto label_159dc4;
            case 0x159DC8u: goto label_159dc8;
            case 0x159DCCu: goto label_159dcc;
            case 0x159DD0u: goto label_159dd0;
            case 0x159DD4u: goto label_159dd4;
            case 0x159DD8u: goto label_159dd8;
            case 0x159DDCu: goto label_159ddc;
            case 0x159DE0u: goto label_159de0;
            case 0x159DE4u: goto label_159de4;
            case 0x159DE8u: goto label_159de8;
            case 0x159DECu: goto label_159dec;
            case 0x159DF0u: goto label_159df0;
            case 0x159DF4u: goto label_159df4;
            case 0x159DF8u: goto label_159df8;
            case 0x159DFCu: goto label_159dfc;
            case 0x159E00u: goto label_159e00;
            case 0x159E04u: goto label_159e04;
            case 0x159E08u: goto label_159e08;
            case 0x159E0Cu: goto label_159e0c;
            case 0x159E10u: goto label_159e10;
            case 0x159E14u: goto label_159e14;
            case 0x159E18u: goto label_159e18;
            case 0x159E1Cu: goto label_159e1c;
            case 0x159E20u: goto label_159e20;
            case 0x159E24u: goto label_159e24;
            case 0x159E28u: goto label_159e28;
            case 0x159E2Cu: goto label_159e2c;
            case 0x159E30u: goto label_159e30;
            case 0x159E34u: goto label_159e34;
            case 0x159E38u: goto label_159e38;
            case 0x159E3Cu: goto label_159e3c;
            case 0x159E40u: goto label_159e40;
            case 0x159E44u: goto label_159e44;
            case 0x159E48u: goto label_159e48;
            case 0x159E4Cu: goto label_159e4c;
            case 0x159E50u: goto label_159e50;
            case 0x159E54u: goto label_159e54;
            case 0x159E58u: goto label_159e58;
            case 0x159E5Cu: goto label_159e5c;
            case 0x159E60u: goto label_159e60;
            case 0x159E64u: goto label_159e64;
            case 0x159E68u: goto label_159e68;
            case 0x159E6Cu: goto label_159e6c;
            case 0x159E70u: goto label_159e70;
            case 0x159E74u: goto label_159e74;
            case 0x159E78u: goto label_159e78;
            case 0x159E7Cu: goto label_159e7c;
            case 0x159E80u: goto label_159e80;
            case 0x159E84u: goto label_159e84;
            case 0x159E88u: goto label_159e88;
            case 0x159E8Cu: goto label_159e8c;
            case 0x159E90u: goto label_159e90;
            case 0x159E94u: goto label_159e94;
            case 0x159E98u: goto label_159e98;
            case 0x159E9Cu: goto label_159e9c;
            case 0x159EA0u: goto label_159ea0;
            case 0x159EA4u: goto label_159ea4;
            case 0x159EA8u: goto label_159ea8;
            case 0x159EACu: goto label_159eac;
            case 0x159EB0u: goto label_159eb0;
            case 0x159EB4u: goto label_159eb4;
            case 0x159EB8u: goto label_159eb8;
            case 0x159EBCu: goto label_159ebc;
            case 0x159EC0u: goto label_159ec0;
            case 0x159EC4u: goto label_159ec4;
            case 0x159EC8u: goto label_159ec8;
            case 0x159ECCu: goto label_159ecc;
            case 0x159ED0u: goto label_159ed0;
            case 0x159ED4u: goto label_159ed4;
            case 0x159ED8u: goto label_159ed8;
            case 0x159EDCu: goto label_159edc;
            case 0x159EE0u: goto label_159ee0;
            case 0x159EE4u: goto label_159ee4;
            case 0x159EE8u: goto label_159ee8;
            case 0x159EECu: goto label_159eec;
            case 0x159EF0u: goto label_159ef0;
            case 0x159EF4u: goto label_159ef4;
            case 0x159EF8u: goto label_159ef8;
            case 0x159EFCu: goto label_159efc;
            case 0x159F00u: goto label_159f00;
            case 0x159F04u: goto label_159f04;
            case 0x159F08u: goto label_159f08;
            case 0x159F0Cu: goto label_159f0c;
            case 0x159F10u: goto label_159f10;
            case 0x159F14u: goto label_159f14;
            case 0x159F18u: goto label_159f18;
            case 0x159F1Cu: goto label_159f1c;
            case 0x159F20u: goto label_159f20;
            case 0x159F24u: goto label_159f24;
            case 0x159F28u: goto label_159f28;
            case 0x159F2Cu: goto label_159f2c;
            case 0x159F30u: goto label_159f30;
            case 0x159F34u: goto label_159f34;
            case 0x159F38u: goto label_159f38;
            case 0x159F3Cu: goto label_159f3c;
            case 0x159F40u: goto label_159f40;
            case 0x159F44u: goto label_159f44;
            case 0x159F48u: goto label_159f48;
            case 0x159F4Cu: goto label_159f4c;
            case 0x159F50u: goto label_159f50;
            case 0x159F54u: goto label_159f54;
            case 0x159F58u: goto label_159f58;
            case 0x159F5Cu: goto label_159f5c;
            case 0x159F60u: goto label_159f60;
            case 0x159F64u: goto label_159f64;
            case 0x159F68u: goto label_159f68;
            case 0x159F6Cu: goto label_159f6c;
            case 0x159F70u: goto label_159f70;
            case 0x159F74u: goto label_159f74;
            case 0x159F78u: goto label_159f78;
            case 0x159F7Cu: goto label_159f7c;
            case 0x159F80u: goto label_159f80;
            case 0x159F84u: goto label_159f84;
            case 0x159F88u: goto label_159f88;
            case 0x159F8Cu: goto label_159f8c;
            case 0x159F90u: goto label_159f90;
            case 0x159F94u: goto label_159f94;
            case 0x159F98u: goto label_159f98;
            case 0x159F9Cu: goto label_159f9c;
            case 0x159FA0u: goto label_159fa0;
            case 0x159FA4u: goto label_159fa4;
            case 0x159FA8u: goto label_159fa8;
            case 0x159FACu: goto label_159fac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159F74u; }
            if (ctx->pc != 0x159F74u) { return; }
        }
    }
    ctx->pc = 0x159F74u;
label_159f74:
    // 0x159f74: 0x8e430000
    ctx->pc = 0x159f74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_159f78:
    // 0x159f78: 0x240202d
    ctx->pc = 0x159f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159f7c:
    // 0x159f7c: 0x24050001
    ctx->pc = 0x159f7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_159f80:
    // 0x159f80: 0x8c62001c
    ctx->pc = 0x159f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_159f84:
    // 0x159f84: 0x40f809
label_159f88:
    if (ctx->pc == 0x159F88u) {
        ctx->pc = 0x159F88u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x159F8Cu;
        goto label_159f8c;
    }
    ctx->pc = 0x159F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159F8Cu);
        ctx->pc = 0x159F88u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1598C8u: goto label_1598c8;
            case 0x1598CCu: goto label_1598cc;
            case 0x1598D0u: goto label_1598d0;
            case 0x1598D4u: goto label_1598d4;
            case 0x1598D8u: goto label_1598d8;
            case 0x1598DCu: goto label_1598dc;
            case 0x1598E0u: goto label_1598e0;
            case 0x1598E4u: goto label_1598e4;
            case 0x1598E8u: goto label_1598e8;
            case 0x1598ECu: goto label_1598ec;
            case 0x1598F0u: goto label_1598f0;
            case 0x1598F4u: goto label_1598f4;
            case 0x1598F8u: goto label_1598f8;
            case 0x1598FCu: goto label_1598fc;
            case 0x159900u: goto label_159900;
            case 0x159904u: goto label_159904;
            case 0x159908u: goto label_159908;
            case 0x15990Cu: goto label_15990c;
            case 0x159910u: goto label_159910;
            case 0x159914u: goto label_159914;
            case 0x159918u: goto label_159918;
            case 0x15991Cu: goto label_15991c;
            case 0x159920u: goto label_159920;
            case 0x159924u: goto label_159924;
            case 0x159928u: goto label_159928;
            case 0x15992Cu: goto label_15992c;
            case 0x159930u: goto label_159930;
            case 0x159934u: goto label_159934;
            case 0x159938u: goto label_159938;
            case 0x15993Cu: goto label_15993c;
            case 0x159940u: goto label_159940;
            case 0x159944u: goto label_159944;
            case 0x159948u: goto label_159948;
            case 0x15994Cu: goto label_15994c;
            case 0x159950u: goto label_159950;
            case 0x159954u: goto label_159954;
            case 0x159958u: goto label_159958;
            case 0x15995Cu: goto label_15995c;
            case 0x159960u: goto label_159960;
            case 0x159964u: goto label_159964;
            case 0x159968u: goto label_159968;
            case 0x15996Cu: goto label_15996c;
            case 0x159970u: goto label_159970;
            case 0x159974u: goto label_159974;
            case 0x159978u: goto label_159978;
            case 0x15997Cu: goto label_15997c;
            case 0x159980u: goto label_159980;
            case 0x159984u: goto label_159984;
            case 0x159988u: goto label_159988;
            case 0x15998Cu: goto label_15998c;
            case 0x159990u: goto label_159990;
            case 0x159994u: goto label_159994;
            case 0x159998u: goto label_159998;
            case 0x15999Cu: goto label_15999c;
            case 0x1599A0u: goto label_1599a0;
            case 0x1599A4u: goto label_1599a4;
            case 0x1599A8u: goto label_1599a8;
            case 0x1599ACu: goto label_1599ac;
            case 0x1599B0u: goto label_1599b0;
            case 0x1599B4u: goto label_1599b4;
            case 0x1599B8u: goto label_1599b8;
            case 0x1599BCu: goto label_1599bc;
            case 0x1599C0u: goto label_1599c0;
            case 0x1599C4u: goto label_1599c4;
            case 0x1599C8u: goto label_1599c8;
            case 0x1599CCu: goto label_1599cc;
            case 0x1599D0u: goto label_1599d0;
            case 0x1599D4u: goto label_1599d4;
            case 0x1599D8u: goto label_1599d8;
            case 0x1599DCu: goto label_1599dc;
            case 0x1599E0u: goto label_1599e0;
            case 0x1599E4u: goto label_1599e4;
            case 0x1599E8u: goto label_1599e8;
            case 0x1599ECu: goto label_1599ec;
            case 0x1599F0u: goto label_1599f0;
            case 0x1599F4u: goto label_1599f4;
            case 0x1599F8u: goto label_1599f8;
            case 0x1599FCu: goto label_1599fc;
            case 0x159A00u: goto label_159a00;
            case 0x159A04u: goto label_159a04;
            case 0x159A08u: goto label_159a08;
            case 0x159A0Cu: goto label_159a0c;
            case 0x159A10u: goto label_159a10;
            case 0x159A14u: goto label_159a14;
            case 0x159A18u: goto label_159a18;
            case 0x159A1Cu: goto label_159a1c;
            case 0x159A20u: goto label_159a20;
            case 0x159A24u: goto label_159a24;
            case 0x159A28u: goto label_159a28;
            case 0x159A2Cu: goto label_159a2c;
            case 0x159A30u: goto label_159a30;
            case 0x159A34u: goto label_159a34;
            case 0x159A38u: goto label_159a38;
            case 0x159A3Cu: goto label_159a3c;
            case 0x159A40u: goto label_159a40;
            case 0x159A44u: goto label_159a44;
            case 0x159A48u: goto label_159a48;
            case 0x159A4Cu: goto label_159a4c;
            case 0x159A50u: goto label_159a50;
            case 0x159A54u: goto label_159a54;
            case 0x159A58u: goto label_159a58;
            case 0x159A5Cu: goto label_159a5c;
            case 0x159A60u: goto label_159a60;
            case 0x159A64u: goto label_159a64;
            case 0x159A68u: goto label_159a68;
            case 0x159A6Cu: goto label_159a6c;
            case 0x159A70u: goto label_159a70;
            case 0x159A74u: goto label_159a74;
            case 0x159A78u: goto label_159a78;
            case 0x159A7Cu: goto label_159a7c;
            case 0x159A80u: goto label_159a80;
            case 0x159A84u: goto label_159a84;
            case 0x159A88u: goto label_159a88;
            case 0x159A8Cu: goto label_159a8c;
            case 0x159A90u: goto label_159a90;
            case 0x159A94u: goto label_159a94;
            case 0x159A98u: goto label_159a98;
            case 0x159A9Cu: goto label_159a9c;
            case 0x159AA0u: goto label_159aa0;
            case 0x159AA4u: goto label_159aa4;
            case 0x159AA8u: goto label_159aa8;
            case 0x159AACu: goto label_159aac;
            case 0x159AB0u: goto label_159ab0;
            case 0x159AB4u: goto label_159ab4;
            case 0x159AB8u: goto label_159ab8;
            case 0x159ABCu: goto label_159abc;
            case 0x159AC0u: goto label_159ac0;
            case 0x159AC4u: goto label_159ac4;
            case 0x159AC8u: goto label_159ac8;
            case 0x159ACCu: goto label_159acc;
            case 0x159AD0u: goto label_159ad0;
            case 0x159AD4u: goto label_159ad4;
            case 0x159AD8u: goto label_159ad8;
            case 0x159ADCu: goto label_159adc;
            case 0x159AE0u: goto label_159ae0;
            case 0x159AE4u: goto label_159ae4;
            case 0x159AE8u: goto label_159ae8;
            case 0x159AECu: goto label_159aec;
            case 0x159AF0u: goto label_159af0;
            case 0x159AF4u: goto label_159af4;
            case 0x159AF8u: goto label_159af8;
            case 0x159AFCu: goto label_159afc;
            case 0x159B00u: goto label_159b00;
            case 0x159B04u: goto label_159b04;
            case 0x159B08u: goto label_159b08;
            case 0x159B0Cu: goto label_159b0c;
            case 0x159B10u: goto label_159b10;
            case 0x159B14u: goto label_159b14;
            case 0x159B18u: goto label_159b18;
            case 0x159B1Cu: goto label_159b1c;
            case 0x159B20u: goto label_159b20;
            case 0x159B24u: goto label_159b24;
            case 0x159B28u: goto label_159b28;
            case 0x159B2Cu: goto label_159b2c;
            case 0x159B30u: goto label_159b30;
            case 0x159B34u: goto label_159b34;
            case 0x159B38u: goto label_159b38;
            case 0x159B3Cu: goto label_159b3c;
            case 0x159B40u: goto label_159b40;
            case 0x159B44u: goto label_159b44;
            case 0x159B48u: goto label_159b48;
            case 0x159B4Cu: goto label_159b4c;
            case 0x159B50u: goto label_159b50;
            case 0x159B54u: goto label_159b54;
            case 0x159B58u: goto label_159b58;
            case 0x159B5Cu: goto label_159b5c;
            case 0x159B60u: goto label_159b60;
            case 0x159B64u: goto label_159b64;
            case 0x159B68u: goto label_159b68;
            case 0x159B6Cu: goto label_159b6c;
            case 0x159B70u: goto label_159b70;
            case 0x159B74u: goto label_159b74;
            case 0x159B78u: goto label_159b78;
            case 0x159B7Cu: goto label_159b7c;
            case 0x159B80u: goto label_159b80;
            case 0x159B84u: goto label_159b84;
            case 0x159B88u: goto label_159b88;
            case 0x159B8Cu: goto label_159b8c;
            case 0x159B90u: goto label_159b90;
            case 0x159B94u: goto label_159b94;
            case 0x159B98u: goto label_159b98;
            case 0x159B9Cu: goto label_159b9c;
            case 0x159BA0u: goto label_159ba0;
            case 0x159BA4u: goto label_159ba4;
            case 0x159BA8u: goto label_159ba8;
            case 0x159BACu: goto label_159bac;
            case 0x159BB0u: goto label_159bb0;
            case 0x159BB4u: goto label_159bb4;
            case 0x159BB8u: goto label_159bb8;
            case 0x159BBCu: goto label_159bbc;
            case 0x159BC0u: goto label_159bc0;
            case 0x159BC4u: goto label_159bc4;
            case 0x159BC8u: goto label_159bc8;
            case 0x159BCCu: goto label_159bcc;
            case 0x159BD0u: goto label_159bd0;
            case 0x159BD4u: goto label_159bd4;
            case 0x159BD8u: goto label_159bd8;
            case 0x159BDCu: goto label_159bdc;
            case 0x159BE0u: goto label_159be0;
            case 0x159BE4u: goto label_159be4;
            case 0x159BE8u: goto label_159be8;
            case 0x159BECu: goto label_159bec;
            case 0x159BF0u: goto label_159bf0;
            case 0x159BF4u: goto label_159bf4;
            case 0x159BF8u: goto label_159bf8;
            case 0x159BFCu: goto label_159bfc;
            case 0x159C00u: goto label_159c00;
            case 0x159C04u: goto label_159c04;
            case 0x159C08u: goto label_159c08;
            case 0x159C0Cu: goto label_159c0c;
            case 0x159C10u: goto label_159c10;
            case 0x159C14u: goto label_159c14;
            case 0x159C18u: goto label_159c18;
            case 0x159C1Cu: goto label_159c1c;
            case 0x159C20u: goto label_159c20;
            case 0x159C24u: goto label_159c24;
            case 0x159C28u: goto label_159c28;
            case 0x159C2Cu: goto label_159c2c;
            case 0x159C30u: goto label_159c30;
            case 0x159C34u: goto label_159c34;
            case 0x159C38u: goto label_159c38;
            case 0x159C3Cu: goto label_159c3c;
            case 0x159C40u: goto label_159c40;
            case 0x159C44u: goto label_159c44;
            case 0x159C48u: goto label_159c48;
            case 0x159C4Cu: goto label_159c4c;
            case 0x159C50u: goto label_159c50;
            case 0x159C54u: goto label_159c54;
            case 0x159C58u: goto label_159c58;
            case 0x159C5Cu: goto label_159c5c;
            case 0x159C60u: goto label_159c60;
            case 0x159C64u: goto label_159c64;
            case 0x159C68u: goto label_159c68;
            case 0x159C6Cu: goto label_159c6c;
            case 0x159C70u: goto label_159c70;
            case 0x159C74u: goto label_159c74;
            case 0x159C78u: goto label_159c78;
            case 0x159C7Cu: goto label_159c7c;
            case 0x159C80u: goto label_159c80;
            case 0x159C84u: goto label_159c84;
            case 0x159C88u: goto label_159c88;
            case 0x159C8Cu: goto label_159c8c;
            case 0x159C90u: goto label_159c90;
            case 0x159C94u: goto label_159c94;
            case 0x159C98u: goto label_159c98;
            case 0x159C9Cu: goto label_159c9c;
            case 0x159CA0u: goto label_159ca0;
            case 0x159CA4u: goto label_159ca4;
            case 0x159CA8u: goto label_159ca8;
            case 0x159CACu: goto label_159cac;
            case 0x159CB0u: goto label_159cb0;
            case 0x159CB4u: goto label_159cb4;
            case 0x159CB8u: goto label_159cb8;
            case 0x159CBCu: goto label_159cbc;
            case 0x159CC0u: goto label_159cc0;
            case 0x159CC4u: goto label_159cc4;
            case 0x159CC8u: goto label_159cc8;
            case 0x159CCCu: goto label_159ccc;
            case 0x159CD0u: goto label_159cd0;
            case 0x159CD4u: goto label_159cd4;
            case 0x159CD8u: goto label_159cd8;
            case 0x159CDCu: goto label_159cdc;
            case 0x159CE0u: goto label_159ce0;
            case 0x159CE4u: goto label_159ce4;
            case 0x159CE8u: goto label_159ce8;
            case 0x159CECu: goto label_159cec;
            case 0x159CF0u: goto label_159cf0;
            case 0x159CF4u: goto label_159cf4;
            case 0x159CF8u: goto label_159cf8;
            case 0x159CFCu: goto label_159cfc;
            case 0x159D00u: goto label_159d00;
            case 0x159D04u: goto label_159d04;
            case 0x159D08u: goto label_159d08;
            case 0x159D0Cu: goto label_159d0c;
            case 0x159D10u: goto label_159d10;
            case 0x159D14u: goto label_159d14;
            case 0x159D18u: goto label_159d18;
            case 0x159D1Cu: goto label_159d1c;
            case 0x159D20u: goto label_159d20;
            case 0x159D24u: goto label_159d24;
            case 0x159D28u: goto label_159d28;
            case 0x159D2Cu: goto label_159d2c;
            case 0x159D30u: goto label_159d30;
            case 0x159D34u: goto label_159d34;
            case 0x159D38u: goto label_159d38;
            case 0x159D3Cu: goto label_159d3c;
            case 0x159D40u: goto label_159d40;
            case 0x159D44u: goto label_159d44;
            case 0x159D48u: goto label_159d48;
            case 0x159D4Cu: goto label_159d4c;
            case 0x159D50u: goto label_159d50;
            case 0x159D54u: goto label_159d54;
            case 0x159D58u: goto label_159d58;
            case 0x159D5Cu: goto label_159d5c;
            case 0x159D60u: goto label_159d60;
            case 0x159D64u: goto label_159d64;
            case 0x159D68u: goto label_159d68;
            case 0x159D6Cu: goto label_159d6c;
            case 0x159D70u: goto label_159d70;
            case 0x159D74u: goto label_159d74;
            case 0x159D78u: goto label_159d78;
            case 0x159D7Cu: goto label_159d7c;
            case 0x159D80u: goto label_159d80;
            case 0x159D84u: goto label_159d84;
            case 0x159D88u: goto label_159d88;
            case 0x159D8Cu: goto label_159d8c;
            case 0x159D90u: goto label_159d90;
            case 0x159D94u: goto label_159d94;
            case 0x159D98u: goto label_159d98;
            case 0x159D9Cu: goto label_159d9c;
            case 0x159DA0u: goto label_159da0;
            case 0x159DA4u: goto label_159da4;
            case 0x159DA8u: goto label_159da8;
            case 0x159DACu: goto label_159dac;
            case 0x159DB0u: goto label_159db0;
            case 0x159DB4u: goto label_159db4;
            case 0x159DB8u: goto label_159db8;
            case 0x159DBCu: goto label_159dbc;
            case 0x159DC0u: goto label_159dc0;
            case 0x159DC4u: goto label_159dc4;
            case 0x159DC8u: goto label_159dc8;
            case 0x159DCCu: goto label_159dcc;
            case 0x159DD0u: goto label_159dd0;
            case 0x159DD4u: goto label_159dd4;
            case 0x159DD8u: goto label_159dd8;
            case 0x159DDCu: goto label_159ddc;
            case 0x159DE0u: goto label_159de0;
            case 0x159DE4u: goto label_159de4;
            case 0x159DE8u: goto label_159de8;
            case 0x159DECu: goto label_159dec;
            case 0x159DF0u: goto label_159df0;
            case 0x159DF4u: goto label_159df4;
            case 0x159DF8u: goto label_159df8;
            case 0x159DFCu: goto label_159dfc;
            case 0x159E00u: goto label_159e00;
            case 0x159E04u: goto label_159e04;
            case 0x159E08u: goto label_159e08;
            case 0x159E0Cu: goto label_159e0c;
            case 0x159E10u: goto label_159e10;
            case 0x159E14u: goto label_159e14;
            case 0x159E18u: goto label_159e18;
            case 0x159E1Cu: goto label_159e1c;
            case 0x159E20u: goto label_159e20;
            case 0x159E24u: goto label_159e24;
            case 0x159E28u: goto label_159e28;
            case 0x159E2Cu: goto label_159e2c;
            case 0x159E30u: goto label_159e30;
            case 0x159E34u: goto label_159e34;
            case 0x159E38u: goto label_159e38;
            case 0x159E3Cu: goto label_159e3c;
            case 0x159E40u: goto label_159e40;
            case 0x159E44u: goto label_159e44;
            case 0x159E48u: goto label_159e48;
            case 0x159E4Cu: goto label_159e4c;
            case 0x159E50u: goto label_159e50;
            case 0x159E54u: goto label_159e54;
            case 0x159E58u: goto label_159e58;
            case 0x159E5Cu: goto label_159e5c;
            case 0x159E60u: goto label_159e60;
            case 0x159E64u: goto label_159e64;
            case 0x159E68u: goto label_159e68;
            case 0x159E6Cu: goto label_159e6c;
            case 0x159E70u: goto label_159e70;
            case 0x159E74u: goto label_159e74;
            case 0x159E78u: goto label_159e78;
            case 0x159E7Cu: goto label_159e7c;
            case 0x159E80u: goto label_159e80;
            case 0x159E84u: goto label_159e84;
            case 0x159E88u: goto label_159e88;
            case 0x159E8Cu: goto label_159e8c;
            case 0x159E90u: goto label_159e90;
            case 0x159E94u: goto label_159e94;
            case 0x159E98u: goto label_159e98;
            case 0x159E9Cu: goto label_159e9c;
            case 0x159EA0u: goto label_159ea0;
            case 0x159EA4u: goto label_159ea4;
            case 0x159EA8u: goto label_159ea8;
            case 0x159EACu: goto label_159eac;
            case 0x159EB0u: goto label_159eb0;
            case 0x159EB4u: goto label_159eb4;
            case 0x159EB8u: goto label_159eb8;
            case 0x159EBCu: goto label_159ebc;
            case 0x159EC0u: goto label_159ec0;
            case 0x159EC4u: goto label_159ec4;
            case 0x159EC8u: goto label_159ec8;
            case 0x159ECCu: goto label_159ecc;
            case 0x159ED0u: goto label_159ed0;
            case 0x159ED4u: goto label_159ed4;
            case 0x159ED8u: goto label_159ed8;
            case 0x159EDCu: goto label_159edc;
            case 0x159EE0u: goto label_159ee0;
            case 0x159EE4u: goto label_159ee4;
            case 0x159EE8u: goto label_159ee8;
            case 0x159EECu: goto label_159eec;
            case 0x159EF0u: goto label_159ef0;
            case 0x159EF4u: goto label_159ef4;
            case 0x159EF8u: goto label_159ef8;
            case 0x159EFCu: goto label_159efc;
            case 0x159F00u: goto label_159f00;
            case 0x159F04u: goto label_159f04;
            case 0x159F08u: goto label_159f08;
            case 0x159F0Cu: goto label_159f0c;
            case 0x159F10u: goto label_159f10;
            case 0x159F14u: goto label_159f14;
            case 0x159F18u: goto label_159f18;
            case 0x159F1Cu: goto label_159f1c;
            case 0x159F20u: goto label_159f20;
            case 0x159F24u: goto label_159f24;
            case 0x159F28u: goto label_159f28;
            case 0x159F2Cu: goto label_159f2c;
            case 0x159F30u: goto label_159f30;
            case 0x159F34u: goto label_159f34;
            case 0x159F38u: goto label_159f38;
            case 0x159F3Cu: goto label_159f3c;
            case 0x159F40u: goto label_159f40;
            case 0x159F44u: goto label_159f44;
            case 0x159F48u: goto label_159f48;
            case 0x159F4Cu: goto label_159f4c;
            case 0x159F50u: goto label_159f50;
            case 0x159F54u: goto label_159f54;
            case 0x159F58u: goto label_159f58;
            case 0x159F5Cu: goto label_159f5c;
            case 0x159F60u: goto label_159f60;
            case 0x159F64u: goto label_159f64;
            case 0x159F68u: goto label_159f68;
            case 0x159F6Cu: goto label_159f6c;
            case 0x159F70u: goto label_159f70;
            case 0x159F74u: goto label_159f74;
            case 0x159F78u: goto label_159f78;
            case 0x159F7Cu: goto label_159f7c;
            case 0x159F80u: goto label_159f80;
            case 0x159F84u: goto label_159f84;
            case 0x159F88u: goto label_159f88;
            case 0x159F8Cu: goto label_159f8c;
            case 0x159F90u: goto label_159f90;
            case 0x159F94u: goto label_159f94;
            case 0x159F98u: goto label_159f98;
            case 0x159F9Cu: goto label_159f9c;
            case 0x159FA0u: goto label_159fa0;
            case 0x159FA4u: goto label_159fa4;
            case 0x159FA8u: goto label_159fa8;
            case 0x159FACu: goto label_159fac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x159F8Cu; }
            if (ctx->pc != 0x159F8Cu) { return; }
        }
    }
    ctx->pc = 0x159F8Cu;
label_159f8c:
    // 0x159f8c: 0x102d
    ctx->pc = 0x159f8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159f90:
    // 0x159f90: 0xdfb00010
    ctx->pc = 0x159f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159f94:
    // 0x159f94: 0xdfb10018
    ctx->pc = 0x159f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159f98:
    // 0x159f98: 0xdfb20020
    ctx->pc = 0x159f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_159f9c:
    // 0x159f9c: 0xdfb30028
    ctx->pc = 0x159f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_159fa0:
    // 0x159fa0: 0xdfbf0030
    ctx->pc = 0x159fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_159fa4:
    // 0x159fa4: 0x3e00008
label_159fa8:
    if (ctx->pc == 0x159FA8u) {
        ctx->pc = 0x159FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x159FACu;
        goto label_159fac;
    }
    ctx->pc = 0x159FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1598C8u: goto label_1598c8;
            case 0x1598CCu: goto label_1598cc;
            case 0x1598D0u: goto label_1598d0;
            case 0x1598D4u: goto label_1598d4;
            case 0x1598D8u: goto label_1598d8;
            case 0x1598DCu: goto label_1598dc;
            case 0x1598E0u: goto label_1598e0;
            case 0x1598E4u: goto label_1598e4;
            case 0x1598E8u: goto label_1598e8;
            case 0x1598ECu: goto label_1598ec;
            case 0x1598F0u: goto label_1598f0;
            case 0x1598F4u: goto label_1598f4;
            case 0x1598F8u: goto label_1598f8;
            case 0x1598FCu: goto label_1598fc;
            case 0x159900u: goto label_159900;
            case 0x159904u: goto label_159904;
            case 0x159908u: goto label_159908;
            case 0x15990Cu: goto label_15990c;
            case 0x159910u: goto label_159910;
            case 0x159914u: goto label_159914;
            case 0x159918u: goto label_159918;
            case 0x15991Cu: goto label_15991c;
            case 0x159920u: goto label_159920;
            case 0x159924u: goto label_159924;
            case 0x159928u: goto label_159928;
            case 0x15992Cu: goto label_15992c;
            case 0x159930u: goto label_159930;
            case 0x159934u: goto label_159934;
            case 0x159938u: goto label_159938;
            case 0x15993Cu: goto label_15993c;
            case 0x159940u: goto label_159940;
            case 0x159944u: goto label_159944;
            case 0x159948u: goto label_159948;
            case 0x15994Cu: goto label_15994c;
            case 0x159950u: goto label_159950;
            case 0x159954u: goto label_159954;
            case 0x159958u: goto label_159958;
            case 0x15995Cu: goto label_15995c;
            case 0x159960u: goto label_159960;
            case 0x159964u: goto label_159964;
            case 0x159968u: goto label_159968;
            case 0x15996Cu: goto label_15996c;
            case 0x159970u: goto label_159970;
            case 0x159974u: goto label_159974;
            case 0x159978u: goto label_159978;
            case 0x15997Cu: goto label_15997c;
            case 0x159980u: goto label_159980;
            case 0x159984u: goto label_159984;
            case 0x159988u: goto label_159988;
            case 0x15998Cu: goto label_15998c;
            case 0x159990u: goto label_159990;
            case 0x159994u: goto label_159994;
            case 0x159998u: goto label_159998;
            case 0x15999Cu: goto label_15999c;
            case 0x1599A0u: goto label_1599a0;
            case 0x1599A4u: goto label_1599a4;
            case 0x1599A8u: goto label_1599a8;
            case 0x1599ACu: goto label_1599ac;
            case 0x1599B0u: goto label_1599b0;
            case 0x1599B4u: goto label_1599b4;
            case 0x1599B8u: goto label_1599b8;
            case 0x1599BCu: goto label_1599bc;
            case 0x1599C0u: goto label_1599c0;
            case 0x1599C4u: goto label_1599c4;
            case 0x1599C8u: goto label_1599c8;
            case 0x1599CCu: goto label_1599cc;
            case 0x1599D0u: goto label_1599d0;
            case 0x1599D4u: goto label_1599d4;
            case 0x1599D8u: goto label_1599d8;
            case 0x1599DCu: goto label_1599dc;
            case 0x1599E0u: goto label_1599e0;
            case 0x1599E4u: goto label_1599e4;
            case 0x1599E8u: goto label_1599e8;
            case 0x1599ECu: goto label_1599ec;
            case 0x1599F0u: goto label_1599f0;
            case 0x1599F4u: goto label_1599f4;
            case 0x1599F8u: goto label_1599f8;
            case 0x1599FCu: goto label_1599fc;
            case 0x159A00u: goto label_159a00;
            case 0x159A04u: goto label_159a04;
            case 0x159A08u: goto label_159a08;
            case 0x159A0Cu: goto label_159a0c;
            case 0x159A10u: goto label_159a10;
            case 0x159A14u: goto label_159a14;
            case 0x159A18u: goto label_159a18;
            case 0x159A1Cu: goto label_159a1c;
            case 0x159A20u: goto label_159a20;
            case 0x159A24u: goto label_159a24;
            case 0x159A28u: goto label_159a28;
            case 0x159A2Cu: goto label_159a2c;
            case 0x159A30u: goto label_159a30;
            case 0x159A34u: goto label_159a34;
            case 0x159A38u: goto label_159a38;
            case 0x159A3Cu: goto label_159a3c;
            case 0x159A40u: goto label_159a40;
            case 0x159A44u: goto label_159a44;
            case 0x159A48u: goto label_159a48;
            case 0x159A4Cu: goto label_159a4c;
            case 0x159A50u: goto label_159a50;
            case 0x159A54u: goto label_159a54;
            case 0x159A58u: goto label_159a58;
            case 0x159A5Cu: goto label_159a5c;
            case 0x159A60u: goto label_159a60;
            case 0x159A64u: goto label_159a64;
            case 0x159A68u: goto label_159a68;
            case 0x159A6Cu: goto label_159a6c;
            case 0x159A70u: goto label_159a70;
            case 0x159A74u: goto label_159a74;
            case 0x159A78u: goto label_159a78;
            case 0x159A7Cu: goto label_159a7c;
            case 0x159A80u: goto label_159a80;
            case 0x159A84u: goto label_159a84;
            case 0x159A88u: goto label_159a88;
            case 0x159A8Cu: goto label_159a8c;
            case 0x159A90u: goto label_159a90;
            case 0x159A94u: goto label_159a94;
            case 0x159A98u: goto label_159a98;
            case 0x159A9Cu: goto label_159a9c;
            case 0x159AA0u: goto label_159aa0;
            case 0x159AA4u: goto label_159aa4;
            case 0x159AA8u: goto label_159aa8;
            case 0x159AACu: goto label_159aac;
            case 0x159AB0u: goto label_159ab0;
            case 0x159AB4u: goto label_159ab4;
            case 0x159AB8u: goto label_159ab8;
            case 0x159ABCu: goto label_159abc;
            case 0x159AC0u: goto label_159ac0;
            case 0x159AC4u: goto label_159ac4;
            case 0x159AC8u: goto label_159ac8;
            case 0x159ACCu: goto label_159acc;
            case 0x159AD0u: goto label_159ad0;
            case 0x159AD4u: goto label_159ad4;
            case 0x159AD8u: goto label_159ad8;
            case 0x159ADCu: goto label_159adc;
            case 0x159AE0u: goto label_159ae0;
            case 0x159AE4u: goto label_159ae4;
            case 0x159AE8u: goto label_159ae8;
            case 0x159AECu: goto label_159aec;
            case 0x159AF0u: goto label_159af0;
            case 0x159AF4u: goto label_159af4;
            case 0x159AF8u: goto label_159af8;
            case 0x159AFCu: goto label_159afc;
            case 0x159B00u: goto label_159b00;
            case 0x159B04u: goto label_159b04;
            case 0x159B08u: goto label_159b08;
            case 0x159B0Cu: goto label_159b0c;
            case 0x159B10u: goto label_159b10;
            case 0x159B14u: goto label_159b14;
            case 0x159B18u: goto label_159b18;
            case 0x159B1Cu: goto label_159b1c;
            case 0x159B20u: goto label_159b20;
            case 0x159B24u: goto label_159b24;
            case 0x159B28u: goto label_159b28;
            case 0x159B2Cu: goto label_159b2c;
            case 0x159B30u: goto label_159b30;
            case 0x159B34u: goto label_159b34;
            case 0x159B38u: goto label_159b38;
            case 0x159B3Cu: goto label_159b3c;
            case 0x159B40u: goto label_159b40;
            case 0x159B44u: goto label_159b44;
            case 0x159B48u: goto label_159b48;
            case 0x159B4Cu: goto label_159b4c;
            case 0x159B50u: goto label_159b50;
            case 0x159B54u: goto label_159b54;
            case 0x159B58u: goto label_159b58;
            case 0x159B5Cu: goto label_159b5c;
            case 0x159B60u: goto label_159b60;
            case 0x159B64u: goto label_159b64;
            case 0x159B68u: goto label_159b68;
            case 0x159B6Cu: goto label_159b6c;
            case 0x159B70u: goto label_159b70;
            case 0x159B74u: goto label_159b74;
            case 0x159B78u: goto label_159b78;
            case 0x159B7Cu: goto label_159b7c;
            case 0x159B80u: goto label_159b80;
            case 0x159B84u: goto label_159b84;
            case 0x159B88u: goto label_159b88;
            case 0x159B8Cu: goto label_159b8c;
            case 0x159B90u: goto label_159b90;
            case 0x159B94u: goto label_159b94;
            case 0x159B98u: goto label_159b98;
            case 0x159B9Cu: goto label_159b9c;
            case 0x159BA0u: goto label_159ba0;
            case 0x159BA4u: goto label_159ba4;
            case 0x159BA8u: goto label_159ba8;
            case 0x159BACu: goto label_159bac;
            case 0x159BB0u: goto label_159bb0;
            case 0x159BB4u: goto label_159bb4;
            case 0x159BB8u: goto label_159bb8;
            case 0x159BBCu: goto label_159bbc;
            case 0x159BC0u: goto label_159bc0;
            case 0x159BC4u: goto label_159bc4;
            case 0x159BC8u: goto label_159bc8;
            case 0x159BCCu: goto label_159bcc;
            case 0x159BD0u: goto label_159bd0;
            case 0x159BD4u: goto label_159bd4;
            case 0x159BD8u: goto label_159bd8;
            case 0x159BDCu: goto label_159bdc;
            case 0x159BE0u: goto label_159be0;
            case 0x159BE4u: goto label_159be4;
            case 0x159BE8u: goto label_159be8;
            case 0x159BECu: goto label_159bec;
            case 0x159BF0u: goto label_159bf0;
            case 0x159BF4u: goto label_159bf4;
            case 0x159BF8u: goto label_159bf8;
            case 0x159BFCu: goto label_159bfc;
            case 0x159C00u: goto label_159c00;
            case 0x159C04u: goto label_159c04;
            case 0x159C08u: goto label_159c08;
            case 0x159C0Cu: goto label_159c0c;
            case 0x159C10u: goto label_159c10;
            case 0x159C14u: goto label_159c14;
            case 0x159C18u: goto label_159c18;
            case 0x159C1Cu: goto label_159c1c;
            case 0x159C20u: goto label_159c20;
            case 0x159C24u: goto label_159c24;
            case 0x159C28u: goto label_159c28;
            case 0x159C2Cu: goto label_159c2c;
            case 0x159C30u: goto label_159c30;
            case 0x159C34u: goto label_159c34;
            case 0x159C38u: goto label_159c38;
            case 0x159C3Cu: goto label_159c3c;
            case 0x159C40u: goto label_159c40;
            case 0x159C44u: goto label_159c44;
            case 0x159C48u: goto label_159c48;
            case 0x159C4Cu: goto label_159c4c;
            case 0x159C50u: goto label_159c50;
            case 0x159C54u: goto label_159c54;
            case 0x159C58u: goto label_159c58;
            case 0x159C5Cu: goto label_159c5c;
            case 0x159C60u: goto label_159c60;
            case 0x159C64u: goto label_159c64;
            case 0x159C68u: goto label_159c68;
            case 0x159C6Cu: goto label_159c6c;
            case 0x159C70u: goto label_159c70;
            case 0x159C74u: goto label_159c74;
            case 0x159C78u: goto label_159c78;
            case 0x159C7Cu: goto label_159c7c;
            case 0x159C80u: goto label_159c80;
            case 0x159C84u: goto label_159c84;
            case 0x159C88u: goto label_159c88;
            case 0x159C8Cu: goto label_159c8c;
            case 0x159C90u: goto label_159c90;
            case 0x159C94u: goto label_159c94;
            case 0x159C98u: goto label_159c98;
            case 0x159C9Cu: goto label_159c9c;
            case 0x159CA0u: goto label_159ca0;
            case 0x159CA4u: goto label_159ca4;
            case 0x159CA8u: goto label_159ca8;
            case 0x159CACu: goto label_159cac;
            case 0x159CB0u: goto label_159cb0;
            case 0x159CB4u: goto label_159cb4;
            case 0x159CB8u: goto label_159cb8;
            case 0x159CBCu: goto label_159cbc;
            case 0x159CC0u: goto label_159cc0;
            case 0x159CC4u: goto label_159cc4;
            case 0x159CC8u: goto label_159cc8;
            case 0x159CCCu: goto label_159ccc;
            case 0x159CD0u: goto label_159cd0;
            case 0x159CD4u: goto label_159cd4;
            case 0x159CD8u: goto label_159cd8;
            case 0x159CDCu: goto label_159cdc;
            case 0x159CE0u: goto label_159ce0;
            case 0x159CE4u: goto label_159ce4;
            case 0x159CE8u: goto label_159ce8;
            case 0x159CECu: goto label_159cec;
            case 0x159CF0u: goto label_159cf0;
            case 0x159CF4u: goto label_159cf4;
            case 0x159CF8u: goto label_159cf8;
            case 0x159CFCu: goto label_159cfc;
            case 0x159D00u: goto label_159d00;
            case 0x159D04u: goto label_159d04;
            case 0x159D08u: goto label_159d08;
            case 0x159D0Cu: goto label_159d0c;
            case 0x159D10u: goto label_159d10;
            case 0x159D14u: goto label_159d14;
            case 0x159D18u: goto label_159d18;
            case 0x159D1Cu: goto label_159d1c;
            case 0x159D20u: goto label_159d20;
            case 0x159D24u: goto label_159d24;
            case 0x159D28u: goto label_159d28;
            case 0x159D2Cu: goto label_159d2c;
            case 0x159D30u: goto label_159d30;
            case 0x159D34u: goto label_159d34;
            case 0x159D38u: goto label_159d38;
            case 0x159D3Cu: goto label_159d3c;
            case 0x159D40u: goto label_159d40;
            case 0x159D44u: goto label_159d44;
            case 0x159D48u: goto label_159d48;
            case 0x159D4Cu: goto label_159d4c;
            case 0x159D50u: goto label_159d50;
            case 0x159D54u: goto label_159d54;
            case 0x159D58u: goto label_159d58;
            case 0x159D5Cu: goto label_159d5c;
            case 0x159D60u: goto label_159d60;
            case 0x159D64u: goto label_159d64;
            case 0x159D68u: goto label_159d68;
            case 0x159D6Cu: goto label_159d6c;
            case 0x159D70u: goto label_159d70;
            case 0x159D74u: goto label_159d74;
            case 0x159D78u: goto label_159d78;
            case 0x159D7Cu: goto label_159d7c;
            case 0x159D80u: goto label_159d80;
            case 0x159D84u: goto label_159d84;
            case 0x159D88u: goto label_159d88;
            case 0x159D8Cu: goto label_159d8c;
            case 0x159D90u: goto label_159d90;
            case 0x159D94u: goto label_159d94;
            case 0x159D98u: goto label_159d98;
            case 0x159D9Cu: goto label_159d9c;
            case 0x159DA0u: goto label_159da0;
            case 0x159DA4u: goto label_159da4;
            case 0x159DA8u: goto label_159da8;
            case 0x159DACu: goto label_159dac;
            case 0x159DB0u: goto label_159db0;
            case 0x159DB4u: goto label_159db4;
            case 0x159DB8u: goto label_159db8;
            case 0x159DBCu: goto label_159dbc;
            case 0x159DC0u: goto label_159dc0;
            case 0x159DC4u: goto label_159dc4;
            case 0x159DC8u: goto label_159dc8;
            case 0x159DCCu: goto label_159dcc;
            case 0x159DD0u: goto label_159dd0;
            case 0x159DD4u: goto label_159dd4;
            case 0x159DD8u: goto label_159dd8;
            case 0x159DDCu: goto label_159ddc;
            case 0x159DE0u: goto label_159de0;
            case 0x159DE4u: goto label_159de4;
            case 0x159DE8u: goto label_159de8;
            case 0x159DECu: goto label_159dec;
            case 0x159DF0u: goto label_159df0;
            case 0x159DF4u: goto label_159df4;
            case 0x159DF8u: goto label_159df8;
            case 0x159DFCu: goto label_159dfc;
            case 0x159E00u: goto label_159e00;
            case 0x159E04u: goto label_159e04;
            case 0x159E08u: goto label_159e08;
            case 0x159E0Cu: goto label_159e0c;
            case 0x159E10u: goto label_159e10;
            case 0x159E14u: goto label_159e14;
            case 0x159E18u: goto label_159e18;
            case 0x159E1Cu: goto label_159e1c;
            case 0x159E20u: goto label_159e20;
            case 0x159E24u: goto label_159e24;
            case 0x159E28u: goto label_159e28;
            case 0x159E2Cu: goto label_159e2c;
            case 0x159E30u: goto label_159e30;
            case 0x159E34u: goto label_159e34;
            case 0x159E38u: goto label_159e38;
            case 0x159E3Cu: goto label_159e3c;
            case 0x159E40u: goto label_159e40;
            case 0x159E44u: goto label_159e44;
            case 0x159E48u: goto label_159e48;
            case 0x159E4Cu: goto label_159e4c;
            case 0x159E50u: goto label_159e50;
            case 0x159E54u: goto label_159e54;
            case 0x159E58u: goto label_159e58;
            case 0x159E5Cu: goto label_159e5c;
            case 0x159E60u: goto label_159e60;
            case 0x159E64u: goto label_159e64;
            case 0x159E68u: goto label_159e68;
            case 0x159E6Cu: goto label_159e6c;
            case 0x159E70u: goto label_159e70;
            case 0x159E74u: goto label_159e74;
            case 0x159E78u: goto label_159e78;
            case 0x159E7Cu: goto label_159e7c;
            case 0x159E80u: goto label_159e80;
            case 0x159E84u: goto label_159e84;
            case 0x159E88u: goto label_159e88;
            case 0x159E8Cu: goto label_159e8c;
            case 0x159E90u: goto label_159e90;
            case 0x159E94u: goto label_159e94;
            case 0x159E98u: goto label_159e98;
            case 0x159E9Cu: goto label_159e9c;
            case 0x159EA0u: goto label_159ea0;
            case 0x159EA4u: goto label_159ea4;
            case 0x159EA8u: goto label_159ea8;
            case 0x159EACu: goto label_159eac;
            case 0x159EB0u: goto label_159eb0;
            case 0x159EB4u: goto label_159eb4;
            case 0x159EB8u: goto label_159eb8;
            case 0x159EBCu: goto label_159ebc;
            case 0x159EC0u: goto label_159ec0;
            case 0x159EC4u: goto label_159ec4;
            case 0x159EC8u: goto label_159ec8;
            case 0x159ECCu: goto label_159ecc;
            case 0x159ED0u: goto label_159ed0;
            case 0x159ED4u: goto label_159ed4;
            case 0x159ED8u: goto label_159ed8;
            case 0x159EDCu: goto label_159edc;
            case 0x159EE0u: goto label_159ee0;
            case 0x159EE4u: goto label_159ee4;
            case 0x159EE8u: goto label_159ee8;
            case 0x159EECu: goto label_159eec;
            case 0x159EF0u: goto label_159ef0;
            case 0x159EF4u: goto label_159ef4;
            case 0x159EF8u: goto label_159ef8;
            case 0x159EFCu: goto label_159efc;
            case 0x159F00u: goto label_159f00;
            case 0x159F04u: goto label_159f04;
            case 0x159F08u: goto label_159f08;
            case 0x159F0Cu: goto label_159f0c;
            case 0x159F10u: goto label_159f10;
            case 0x159F14u: goto label_159f14;
            case 0x159F18u: goto label_159f18;
            case 0x159F1Cu: goto label_159f1c;
            case 0x159F20u: goto label_159f20;
            case 0x159F24u: goto label_159f24;
            case 0x159F28u: goto label_159f28;
            case 0x159F2Cu: goto label_159f2c;
            case 0x159F30u: goto label_159f30;
            case 0x159F34u: goto label_159f34;
            case 0x159F38u: goto label_159f38;
            case 0x159F3Cu: goto label_159f3c;
            case 0x159F40u: goto label_159f40;
            case 0x159F44u: goto label_159f44;
            case 0x159F48u: goto label_159f48;
            case 0x159F4Cu: goto label_159f4c;
            case 0x159F50u: goto label_159f50;
            case 0x159F54u: goto label_159f54;
            case 0x159F58u: goto label_159f58;
            case 0x159F5Cu: goto label_159f5c;
            case 0x159F60u: goto label_159f60;
            case 0x159F64u: goto label_159f64;
            case 0x159F68u: goto label_159f68;
            case 0x159F6Cu: goto label_159f6c;
            case 0x159F70u: goto label_159f70;
            case 0x159F74u: goto label_159f74;
            case 0x159F78u: goto label_159f78;
            case 0x159F7Cu: goto label_159f7c;
            case 0x159F80u: goto label_159f80;
            case 0x159F84u: goto label_159f84;
            case 0x159F88u: goto label_159f88;
            case 0x159F8Cu: goto label_159f8c;
            case 0x159F90u: goto label_159f90;
            case 0x159F94u: goto label_159f94;
            case 0x159F98u: goto label_159f98;
            case 0x159F9Cu: goto label_159f9c;
            case 0x159FA0u: goto label_159fa0;
            case 0x159FA4u: goto label_159fa4;
            case 0x159FA8u: goto label_159fa8;
            case 0x159FACu: goto label_159fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x159FACu;
label_159fac:
    // 0x159fac: 0x0
    ctx->pc = 0x159facu;
    // NOP
}
