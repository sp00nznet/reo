#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C2D00
// Address: 0x1c2d00 - 0x1c3150
void sub_001C2D00_0x1c2d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c2d00u;

label_1c2d00:
    // 0x1c2d00: 0x27bdffe0
    ctx->pc = 0x1c2d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c2d04:
    // 0x1c2d04: 0xffbf0010
    ctx->pc = 0x1c2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c2d08:
    // 0x1c2d08: 0x7fb00000
    ctx->pc = 0x1c2d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c2d0c:
    // 0x1c2d0c: 0x80820002
    ctx->pc = 0x1c2d0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1c2d10:
    // 0x1c2d10: 0x2c410006
    ctx->pc = 0x1c2d10u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 6));
label_1c2d14:
    // 0x1c2d14: 0x10200101
label_1c2d18:
    if (ctx->pc == 0x1C2D18u) {
        ctx->pc = 0x1C2D18u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D1Cu;
        goto label_1c2d1c;
    }
    ctx->pc = 0x1C2D14u;
    {
        const bool branch_taken_0x1c2d14 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2D18u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d14) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2D1Cu;
label_1c2d1c:
    // 0x1c2d1c: 0x3c030025
    ctx->pc = 0x1c2d1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
label_1c2d20:
    // 0x1c2d20: 0x21080
    ctx->pc = 0x1c2d20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1c2d24:
    // 0x1c2d24: 0x24632ce0
    ctx->pc = 0x1c2d24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11488));
label_1c2d28:
    // 0x1c2d28: 0x431021
    ctx->pc = 0x1c2d28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c2d2c:
    // 0x1c2d2c: 0x8c420000
    ctx->pc = 0x1c2d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2d30:
    // 0x1c2d30: 0x400008
label_1c2d34:
    if (ctx->pc == 0x1C2D34u) {
        ctx->pc = 0x1C2D38u;
        goto label_1c2d38;
    }
    ctx->pc = 0x1C2D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2D00u: goto label_1c2d00;
            case 0x1C2D04u: goto label_1c2d04;
            case 0x1C2D08u: goto label_1c2d08;
            case 0x1C2D0Cu: goto label_1c2d0c;
            case 0x1C2D10u: goto label_1c2d10;
            case 0x1C2D14u: goto label_1c2d14;
            case 0x1C2D18u: goto label_1c2d18;
            case 0x1C2D1Cu: goto label_1c2d1c;
            case 0x1C2D20u: goto label_1c2d20;
            case 0x1C2D24u: goto label_1c2d24;
            case 0x1C2D28u: goto label_1c2d28;
            case 0x1C2D2Cu: goto label_1c2d2c;
            case 0x1C2D30u: goto label_1c2d30;
            case 0x1C2D34u: goto label_1c2d34;
            case 0x1C2D38u: goto label_1c2d38;
            case 0x1C2D3Cu: goto label_1c2d3c;
            case 0x1C2D40u: goto label_1c2d40;
            case 0x1C2D44u: goto label_1c2d44;
            case 0x1C2D48u: goto label_1c2d48;
            case 0x1C2D4Cu: goto label_1c2d4c;
            case 0x1C2D50u: goto label_1c2d50;
            case 0x1C2D54u: goto label_1c2d54;
            case 0x1C2D58u: goto label_1c2d58;
            case 0x1C2D5Cu: goto label_1c2d5c;
            case 0x1C2D60u: goto label_1c2d60;
            case 0x1C2D64u: goto label_1c2d64;
            case 0x1C2D68u: goto label_1c2d68;
            case 0x1C2D6Cu: goto label_1c2d6c;
            case 0x1C2D70u: goto label_1c2d70;
            case 0x1C2D74u: goto label_1c2d74;
            case 0x1C2D78u: goto label_1c2d78;
            case 0x1C2D7Cu: goto label_1c2d7c;
            case 0x1C2D80u: goto label_1c2d80;
            case 0x1C2D84u: goto label_1c2d84;
            case 0x1C2D88u: goto label_1c2d88;
            case 0x1C2D8Cu: goto label_1c2d8c;
            case 0x1C2D90u: goto label_1c2d90;
            case 0x1C2D94u: goto label_1c2d94;
            case 0x1C2D98u: goto label_1c2d98;
            case 0x1C2D9Cu: goto label_1c2d9c;
            case 0x1C2DA0u: goto label_1c2da0;
            case 0x1C2DA4u: goto label_1c2da4;
            case 0x1C2DA8u: goto label_1c2da8;
            case 0x1C2DACu: goto label_1c2dac;
            case 0x1C2DB0u: goto label_1c2db0;
            case 0x1C2DB4u: goto label_1c2db4;
            case 0x1C2DB8u: goto label_1c2db8;
            case 0x1C2DBCu: goto label_1c2dbc;
            case 0x1C2DC0u: goto label_1c2dc0;
            case 0x1C2DC4u: goto label_1c2dc4;
            case 0x1C2DC8u: goto label_1c2dc8;
            case 0x1C2DCCu: goto label_1c2dcc;
            case 0x1C2DD0u: goto label_1c2dd0;
            case 0x1C2DD4u: goto label_1c2dd4;
            case 0x1C2DD8u: goto label_1c2dd8;
            case 0x1C2DDCu: goto label_1c2ddc;
            case 0x1C2DE0u: goto label_1c2de0;
            case 0x1C2DE4u: goto label_1c2de4;
            case 0x1C2DE8u: goto label_1c2de8;
            case 0x1C2DECu: goto label_1c2dec;
            case 0x1C2DF0u: goto label_1c2df0;
            case 0x1C2DF4u: goto label_1c2df4;
            case 0x1C2DF8u: goto label_1c2df8;
            case 0x1C2DFCu: goto label_1c2dfc;
            case 0x1C2E00u: goto label_1c2e00;
            case 0x1C2E04u: goto label_1c2e04;
            case 0x1C2E08u: goto label_1c2e08;
            case 0x1C2E0Cu: goto label_1c2e0c;
            case 0x1C2E10u: goto label_1c2e10;
            case 0x1C2E14u: goto label_1c2e14;
            case 0x1C2E18u: goto label_1c2e18;
            case 0x1C2E1Cu: goto label_1c2e1c;
            case 0x1C2E20u: goto label_1c2e20;
            case 0x1C2E24u: goto label_1c2e24;
            case 0x1C2E28u: goto label_1c2e28;
            case 0x1C2E2Cu: goto label_1c2e2c;
            case 0x1C2E30u: goto label_1c2e30;
            case 0x1C2E34u: goto label_1c2e34;
            case 0x1C2E38u: goto label_1c2e38;
            case 0x1C2E3Cu: goto label_1c2e3c;
            case 0x1C2E40u: goto label_1c2e40;
            case 0x1C2E44u: goto label_1c2e44;
            case 0x1C2E48u: goto label_1c2e48;
            case 0x1C2E4Cu: goto label_1c2e4c;
            case 0x1C2E50u: goto label_1c2e50;
            case 0x1C2E54u: goto label_1c2e54;
            case 0x1C2E58u: goto label_1c2e58;
            case 0x1C2E5Cu: goto label_1c2e5c;
            case 0x1C2E60u: goto label_1c2e60;
            case 0x1C2E64u: goto label_1c2e64;
            case 0x1C2E68u: goto label_1c2e68;
            case 0x1C2E6Cu: goto label_1c2e6c;
            case 0x1C2E70u: goto label_1c2e70;
            case 0x1C2E74u: goto label_1c2e74;
            case 0x1C2E78u: goto label_1c2e78;
            case 0x1C2E7Cu: goto label_1c2e7c;
            case 0x1C2E80u: goto label_1c2e80;
            case 0x1C2E84u: goto label_1c2e84;
            case 0x1C2E88u: goto label_1c2e88;
            case 0x1C2E8Cu: goto label_1c2e8c;
            case 0x1C2E90u: goto label_1c2e90;
            case 0x1C2E94u: goto label_1c2e94;
            case 0x1C2E98u: goto label_1c2e98;
            case 0x1C2E9Cu: goto label_1c2e9c;
            case 0x1C2EA0u: goto label_1c2ea0;
            case 0x1C2EA4u: goto label_1c2ea4;
            case 0x1C2EA8u: goto label_1c2ea8;
            case 0x1C2EACu: goto label_1c2eac;
            case 0x1C2EB0u: goto label_1c2eb0;
            case 0x1C2EB4u: goto label_1c2eb4;
            case 0x1C2EB8u: goto label_1c2eb8;
            case 0x1C2EBCu: goto label_1c2ebc;
            case 0x1C2EC0u: goto label_1c2ec0;
            case 0x1C2EC4u: goto label_1c2ec4;
            case 0x1C2EC8u: goto label_1c2ec8;
            case 0x1C2ECCu: goto label_1c2ecc;
            case 0x1C2ED0u: goto label_1c2ed0;
            case 0x1C2ED4u: goto label_1c2ed4;
            case 0x1C2ED8u: goto label_1c2ed8;
            case 0x1C2EDCu: goto label_1c2edc;
            case 0x1C2EE0u: goto label_1c2ee0;
            case 0x1C2EE4u: goto label_1c2ee4;
            case 0x1C2EE8u: goto label_1c2ee8;
            case 0x1C2EECu: goto label_1c2eec;
            case 0x1C2EF0u: goto label_1c2ef0;
            case 0x1C2EF4u: goto label_1c2ef4;
            case 0x1C2EF8u: goto label_1c2ef8;
            case 0x1C2EFCu: goto label_1c2efc;
            case 0x1C2F00u: goto label_1c2f00;
            case 0x1C2F04u: goto label_1c2f04;
            case 0x1C2F08u: goto label_1c2f08;
            case 0x1C2F0Cu: goto label_1c2f0c;
            case 0x1C2F10u: goto label_1c2f10;
            case 0x1C2F14u: goto label_1c2f14;
            case 0x1C2F18u: goto label_1c2f18;
            case 0x1C2F1Cu: goto label_1c2f1c;
            case 0x1C2F20u: goto label_1c2f20;
            case 0x1C2F24u: goto label_1c2f24;
            case 0x1C2F28u: goto label_1c2f28;
            case 0x1C2F2Cu: goto label_1c2f2c;
            case 0x1C2F30u: goto label_1c2f30;
            case 0x1C2F34u: goto label_1c2f34;
            case 0x1C2F38u: goto label_1c2f38;
            case 0x1C2F3Cu: goto label_1c2f3c;
            case 0x1C2F40u: goto label_1c2f40;
            case 0x1C2F44u: goto label_1c2f44;
            case 0x1C2F48u: goto label_1c2f48;
            case 0x1C2F4Cu: goto label_1c2f4c;
            case 0x1C2F50u: goto label_1c2f50;
            case 0x1C2F54u: goto label_1c2f54;
            case 0x1C2F58u: goto label_1c2f58;
            case 0x1C2F5Cu: goto label_1c2f5c;
            case 0x1C2F60u: goto label_1c2f60;
            case 0x1C2F64u: goto label_1c2f64;
            case 0x1C2F68u: goto label_1c2f68;
            case 0x1C2F6Cu: goto label_1c2f6c;
            case 0x1C2F70u: goto label_1c2f70;
            case 0x1C2F74u: goto label_1c2f74;
            case 0x1C2F78u: goto label_1c2f78;
            case 0x1C2F7Cu: goto label_1c2f7c;
            case 0x1C2F80u: goto label_1c2f80;
            case 0x1C2F84u: goto label_1c2f84;
            case 0x1C2F88u: goto label_1c2f88;
            case 0x1C2F8Cu: goto label_1c2f8c;
            case 0x1C2F90u: goto label_1c2f90;
            case 0x1C2F94u: goto label_1c2f94;
            case 0x1C2F98u: goto label_1c2f98;
            case 0x1C2F9Cu: goto label_1c2f9c;
            case 0x1C2FA0u: goto label_1c2fa0;
            case 0x1C2FA4u: goto label_1c2fa4;
            case 0x1C2FA8u: goto label_1c2fa8;
            case 0x1C2FACu: goto label_1c2fac;
            case 0x1C2FB0u: goto label_1c2fb0;
            case 0x1C2FB4u: goto label_1c2fb4;
            case 0x1C2FB8u: goto label_1c2fb8;
            case 0x1C2FBCu: goto label_1c2fbc;
            case 0x1C2FC0u: goto label_1c2fc0;
            case 0x1C2FC4u: goto label_1c2fc4;
            case 0x1C2FC8u: goto label_1c2fc8;
            case 0x1C2FCCu: goto label_1c2fcc;
            case 0x1C2FD0u: goto label_1c2fd0;
            case 0x1C2FD4u: goto label_1c2fd4;
            case 0x1C2FD8u: goto label_1c2fd8;
            case 0x1C2FDCu: goto label_1c2fdc;
            case 0x1C2FE0u: goto label_1c2fe0;
            case 0x1C2FE4u: goto label_1c2fe4;
            case 0x1C2FE8u: goto label_1c2fe8;
            case 0x1C2FECu: goto label_1c2fec;
            case 0x1C2FF0u: goto label_1c2ff0;
            case 0x1C2FF4u: goto label_1c2ff4;
            case 0x1C2FF8u: goto label_1c2ff8;
            case 0x1C2FFCu: goto label_1c2ffc;
            case 0x1C3000u: goto label_1c3000;
            case 0x1C3004u: goto label_1c3004;
            case 0x1C3008u: goto label_1c3008;
            case 0x1C300Cu: goto label_1c300c;
            case 0x1C3010u: goto label_1c3010;
            case 0x1C3014u: goto label_1c3014;
            case 0x1C3018u: goto label_1c3018;
            case 0x1C301Cu: goto label_1c301c;
            case 0x1C3020u: goto label_1c3020;
            case 0x1C3024u: goto label_1c3024;
            case 0x1C3028u: goto label_1c3028;
            case 0x1C302Cu: goto label_1c302c;
            case 0x1C3030u: goto label_1c3030;
            case 0x1C3034u: goto label_1c3034;
            case 0x1C3038u: goto label_1c3038;
            case 0x1C303Cu: goto label_1c303c;
            case 0x1C3040u: goto label_1c3040;
            case 0x1C3044u: goto label_1c3044;
            case 0x1C3048u: goto label_1c3048;
            case 0x1C304Cu: goto label_1c304c;
            case 0x1C3050u: goto label_1c3050;
            case 0x1C3054u: goto label_1c3054;
            case 0x1C3058u: goto label_1c3058;
            case 0x1C305Cu: goto label_1c305c;
            case 0x1C3060u: goto label_1c3060;
            case 0x1C3064u: goto label_1c3064;
            case 0x1C3068u: goto label_1c3068;
            case 0x1C306Cu: goto label_1c306c;
            case 0x1C3070u: goto label_1c3070;
            case 0x1C3074u: goto label_1c3074;
            case 0x1C3078u: goto label_1c3078;
            case 0x1C307Cu: goto label_1c307c;
            case 0x1C3080u: goto label_1c3080;
            case 0x1C3084u: goto label_1c3084;
            case 0x1C3088u: goto label_1c3088;
            case 0x1C308Cu: goto label_1c308c;
            case 0x1C3090u: goto label_1c3090;
            case 0x1C3094u: goto label_1c3094;
            case 0x1C3098u: goto label_1c3098;
            case 0x1C309Cu: goto label_1c309c;
            case 0x1C30A0u: goto label_1c30a0;
            case 0x1C30A4u: goto label_1c30a4;
            case 0x1C30A8u: goto label_1c30a8;
            case 0x1C30ACu: goto label_1c30ac;
            case 0x1C30B0u: goto label_1c30b0;
            case 0x1C30B4u: goto label_1c30b4;
            case 0x1C30B8u: goto label_1c30b8;
            case 0x1C30BCu: goto label_1c30bc;
            case 0x1C30C0u: goto label_1c30c0;
            case 0x1C30C4u: goto label_1c30c4;
            case 0x1C30C8u: goto label_1c30c8;
            case 0x1C30CCu: goto label_1c30cc;
            case 0x1C30D0u: goto label_1c30d0;
            case 0x1C30D4u: goto label_1c30d4;
            case 0x1C30D8u: goto label_1c30d8;
            case 0x1C30DCu: goto label_1c30dc;
            case 0x1C30E0u: goto label_1c30e0;
            case 0x1C30E4u: goto label_1c30e4;
            case 0x1C30E8u: goto label_1c30e8;
            case 0x1C30ECu: goto label_1c30ec;
            case 0x1C30F0u: goto label_1c30f0;
            case 0x1C30F4u: goto label_1c30f4;
            case 0x1C30F8u: goto label_1c30f8;
            case 0x1C30FCu: goto label_1c30fc;
            case 0x1C3100u: goto label_1c3100;
            case 0x1C3104u: goto label_1c3104;
            case 0x1C3108u: goto label_1c3108;
            case 0x1C310Cu: goto label_1c310c;
            case 0x1C3110u: goto label_1c3110;
            case 0x1C3114u: goto label_1c3114;
            case 0x1C3118u: goto label_1c3118;
            case 0x1C311Cu: goto label_1c311c;
            case 0x1C3120u: goto label_1c3120;
            case 0x1C3124u: goto label_1c3124;
            case 0x1C3128u: goto label_1c3128;
            case 0x1C312Cu: goto label_1c312c;
            case 0x1C3130u: goto label_1c3130;
            case 0x1C3134u: goto label_1c3134;
            case 0x1C3138u: goto label_1c3138;
            case 0x1C313Cu: goto label_1c313c;
            case 0x1C3140u: goto label_1c3140;
            case 0x1C3144u: goto label_1c3144;
            case 0x1C3148u: goto label_1c3148;
            case 0x1C314Cu: goto label_1c314c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2D38u;
label_1c2d38:
    // 0x1c2d38: 0x24030001
    ctx->pc = 0x1c2d38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c2d3c:
    // 0x1c2d3c: 0x24020008
    ctx->pc = 0x1c2d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_1c2d40:
    // 0x1c2d40: 0xa2030002
    ctx->pc = 0x1c2d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c2d44:
    // 0x1c2d44: 0xae02002c
    ctx->pc = 0x1c2d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c2d48:
    // 0x1c2d48: 0x8e040024
    ctx->pc = 0x1c2d48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1c2d4c:
    // 0x1c2d4c: 0x8e0500e8
    ctx->pc = 0x1c2d4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_1c2d50:
    // 0x1c2d50: 0xc0701c4
label_1c2d54:
    if (ctx->pc == 0x1C2D54u) {
        ctx->pc = 0x1C2D54u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D58u;
        goto label_1c2d58;
    }
    ctx->pc = 0x1C2D50u;
    SET_GPR_U32(ctx, 31, 0x1C2D58u);
    ctx->pc = 0x1C2D54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C0710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0710_0x1c0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D58u; }
    }
    if (ctx->pc != 0x1C2D58u) { return; }
    ctx->pc = 0x1C2D58u;
label_1c2d58:
    // 0x1c2d58: 0xc070498
label_1c2d5c:
    if (ctx->pc == 0x1C2D5Cu) {
        ctx->pc = 0x1C2D60u;
        goto label_1c2d60;
    }
    ctx->pc = 0x1C2D58u;
    SET_GPR_U32(ctx, 31, 0x1C2D60u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D60u; }
    }
    if (ctx->pc != 0x1C2D60u) { return; }
    ctx->pc = 0x1C2D60u;
label_1c2d60:
    // 0x1c2d60: 0x2403ffff
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c2d64:
    // 0x1c2d64: 0x104300ee
label_1c2d68:
    if (ctx->pc == 0x1C2D68u) {
        ctx->pc = 0x1C2D68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D6Cu;
        goto label_1c2d6c;
    }
    ctx->pc = 0x1C2D64u;
    {
        const bool branch_taken_0x1c2d64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2D68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d64) {
            ctx->pc = 0x1C3120u;
            goto label_1c3120;
        }
    }
    ctx->pc = 0x1C2D6Cu;
label_1c2d6c:
    // 0x1c2d6c: 0x2403ff05
    ctx->pc = 0x1c2d6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967045));
label_1c2d70:
    // 0x1c2d70: 0x10430024
label_1c2d74:
    if (ctx->pc == 0x1C2D74u) {
        ctx->pc = 0x1C2D74u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x1C2D78u;
        goto label_1c2d78;
    }
    ctx->pc = 0x1C2D70u;
    {
        const bool branch_taken_0x1c2d70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2D74u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 54));
        if (branch_taken_0x1c2d70) {
            ctx->pc = 0x1C2E04u;
            goto label_1c2e04;
        }
    }
    ctx->pc = 0x1C2D78u;
label_1c2d78:
    // 0x1c2d78: 0x1040001a
label_1c2d7c:
    if (ctx->pc == 0x1C2D7Cu) {
        ctx->pc = 0x1C2D7Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->pc = 0x1C2D80u;
        goto label_1c2d80;
    }
    ctx->pc = 0x1C2D78u;
    {
        const bool branch_taken_0x1c2d78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2D7Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x1c2d78) {
            ctx->pc = 0x1C2DE4u;
            goto label_1c2de4;
        }
    }
    ctx->pc = 0x1C2D80u;
label_1c2d80:
    // 0x1c2d80: 0x1043000e
label_1c2d84:
    if (ctx->pc == 0x1C2D84u) {
        ctx->pc = 0x1C2D88u;
        goto label_1c2d88;
    }
    ctx->pc = 0x1C2D80u;
    {
        const bool branch_taken_0x1c2d80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c2d80) {
            ctx->pc = 0x1C2DBCu;
            goto label_1c2dbc;
        }
    }
    ctx->pc = 0x1C2D88u;
label_1c2d88:
    // 0x1c2d88: 0x2403ff02
    ctx->pc = 0x1c2d88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
label_1c2d8c:
    // 0x1c2d8c: 0x10430005
label_1c2d90:
    if (ctx->pc == 0x1C2D90u) {
        ctx->pc = 0x1C2D90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
        ctx->pc = 0x1C2D94u;
        goto label_1c2d94;
    }
    ctx->pc = 0x1C2D8Cu;
    {
        const bool branch_taken_0x1c2d8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2D90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967043));
        if (branch_taken_0x1c2d8c) {
            ctx->pc = 0x1C2DA4u;
            goto label_1c2da4;
        }
    }
    ctx->pc = 0x1C2D94u;
label_1c2d94:
    // 0x1c2d94: 0x10430003
label_1c2d98:
    if (ctx->pc == 0x1C2D98u) {
        ctx->pc = 0x1C2D9Cu;
        goto label_1c2d9c;
    }
    ctx->pc = 0x1C2D94u;
    {
        const bool branch_taken_0x1c2d94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c2d94) {
            ctx->pc = 0x1C2DA4u;
            goto label_1c2da4;
        }
    }
    ctx->pc = 0x1C2D9Cu;
label_1c2d9c:
    // 0x1c2d9c: 0x10000022
label_1c2da0:
    if (ctx->pc == 0x1C2DA0u) {
        ctx->pc = 0x1C2DA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C2DA4u;
        goto label_1c2da4;
    }
    ctx->pc = 0x1C2D9Cu;
    {
        const bool branch_taken_0x1c2d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2DA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1c2d9c) {
            ctx->pc = 0x1C2E28u;
            goto label_1c2e28;
        }
    }
    ctx->pc = 0x1C2DA4u;
label_1c2da4:
    // 0x1c2da4: 0xae00002c
    ctx->pc = 0x1c2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c2da8:
    // 0x1c2da8: 0x24020004
    ctx->pc = 0x1c2da8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1c2dac:
    // 0x1c2dac: 0xa2020002
    ctx->pc = 0x1c2dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c2db0:
    // 0x1c2db0: 0x24020001
    ctx->pc = 0x1c2db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2db4:
    // 0x1c2db4: 0x100000d9
label_1c2db8:
    if (ctx->pc == 0x1C2DB8u) {
        ctx->pc = 0x1C2DB8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2DBCu;
        goto label_1c2dbc;
    }
    ctx->pc = 0x1C2DB4u;
    {
        const bool branch_taken_0x1c2db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2DB8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2db4) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2DBCu;
label_1c2dbc:
    // 0x1c2dbc: 0x24030036
    ctx->pc = 0x1c2dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 54));
label_1c2dc0:
    // 0x1c2dc0: 0x24020003
    ctx->pc = 0x1c2dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c2dc4:
    // 0x1c2dc4: 0xae03002c
    ctx->pc = 0x1c2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1c2dc8:
    // 0x1c2dc8: 0xa2020002
    ctx->pc = 0x1c2dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c2dcc:
    // 0x1c2dcc: 0x24030005
    ctx->pc = 0x1c2dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c2dd0:
    // 0x1c2dd0: 0x24020001
    ctx->pc = 0x1c2dd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2dd4:
    // 0x1c2dd4: 0xae030010
    ctx->pc = 0x1c2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1c2dd8:
    // 0x1c2dd8: 0xae020030
    ctx->pc = 0x1c2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c2ddc:
    // 0x1c2ddc: 0x100000cf
label_1c2de0:
    if (ctx->pc == 0x1C2DE0u) {
        ctx->pc = 0x1C2DE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2DE4u;
        goto label_1c2de4;
    }
    ctx->pc = 0x1C2DDCu;
    {
        const bool branch_taken_0x1c2ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2DE0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2ddc) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2DE4u;
label_1c2de4:
    // 0x1c2de4: 0x8e0500ec
    ctx->pc = 0x1c2de4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1c2de8:
    // 0x1c2de8: 0xc070138
label_1c2dec:
    if (ctx->pc == 0x1C2DECu) {
        ctx->pc = 0x1C2DECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1C2DF0u;
        goto label_1c2df0;
    }
    ctx->pc = 0x1C2DE8u;
    SET_GPR_U32(ctx, 31, 0x1C2DF0u);
    ctx->pc = 0x1C2DECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x1C04E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C04E0_0x1c04e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DF0u; }
    }
    if (ctx->pc != 0x1C2DF0u) { return; }
    ctx->pc = 0x1C2DF0u;
label_1c2df0:
    // 0x1c2df0: 0x24030002
    ctx->pc = 0x1c2df0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1c2df4:
    // 0x1c2df4: 0x24020003
    ctx->pc = 0x1c2df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c2df8:
    // 0x1c2df8: 0xa2030002
    ctx->pc = 0x1c2df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c2dfc:
    // 0x1c2dfc: 0x100000c7
label_1c2e00:
    if (ctx->pc == 0x1C2E00u) {
        ctx->pc = 0x1C2E00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2E04u;
        goto label_1c2e04;
    }
    ctx->pc = 0x1C2DFCu;
    {
        const bool branch_taken_0x1c2dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2E00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2dfc) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2E04u;
label_1c2e04:
    // 0x1c2e04: 0x24020003
    ctx->pc = 0x1c2e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c2e08:
    // 0x1c2e08: 0xae03002c
    ctx->pc = 0x1c2e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1c2e0c:
    // 0x1c2e0c: 0xa2020002
    ctx->pc = 0x1c2e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c2e10:
    // 0x1c2e10: 0x24030005
    ctx->pc = 0x1c2e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c2e14:
    // 0x1c2e14: 0x24020001
    ctx->pc = 0x1c2e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2e18:
    // 0x1c2e18: 0xae030010
    ctx->pc = 0x1c2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1c2e1c:
    // 0x1c2e1c: 0xae020030
    ctx->pc = 0x1c2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c2e20:
    // 0x1c2e20: 0x100000be
label_1c2e24:
    if (ctx->pc == 0x1C2E24u) {
        ctx->pc = 0x1C2E24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2E28u;
        goto label_1c2e28;
    }
    ctx->pc = 0x1C2E20u;
    {
        const bool branch_taken_0x1c2e20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2E24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2e20) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2E28u;
label_1c2e28:
    // 0x1c2e28: 0x304200ff
    ctx->pc = 0x1c2e28u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1c2e2c:
    // 0x1c2e2c: 0xa2030002
    ctx->pc = 0x1c2e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c2e30:
    // 0x1c2e30: 0xae020034
    ctx->pc = 0x1c2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1c2e34:
    // 0x1c2e34: 0x8e050034
    ctx->pc = 0x1c2e34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1c2e38:
    // 0x1c2e38: 0x10a3001d
label_1c2e3c:
    if (ctx->pc == 0x1C2E3Cu) {
        ctx->pc = 0x1C2E40u;
        goto label_1c2e40;
    }
    ctx->pc = 0x1C2E38u;
    {
        const bool branch_taken_0x1c2e38 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c2e38) {
            ctx->pc = 0x1C2EB0u;
            goto label_1c2eb0;
        }
    }
    ctx->pc = 0x1C2E40u;
label_1c2e40:
    // 0x1c2e40: 0x24030004
    ctx->pc = 0x1c2e40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c2e44:
    // 0x1c2e44: 0x10a30013
label_1c2e48:
    if (ctx->pc == 0x1C2E48u) {
        ctx->pc = 0x1C2E48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1C2E4Cu;
        goto label_1c2e4c;
    }
    ctx->pc = 0x1C2E44u;
    {
        const bool branch_taken_0x1c2e44 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2E48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x1c2e44) {
            ctx->pc = 0x1C2E94u;
            goto label_1c2e94;
        }
    }
    ctx->pc = 0x1C2E4Cu;
label_1c2e4c:
    // 0x1c2e4c: 0x24020002
    ctx->pc = 0x1c2e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1c2e50:
    // 0x1c2e50: 0x10a2000b
label_1c2e54:
    if (ctx->pc == 0x1C2E54u) {
        ctx->pc = 0x1C2E54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C2E58u;
        goto label_1c2e58;
    }
    ctx->pc = 0x1C2E50u;
    {
        const bool branch_taken_0x1c2e50 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C2E54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c2e50) {
            ctx->pc = 0x1C2E80u;
            goto label_1c2e80;
        }
    }
    ctx->pc = 0x1C2E58u;
label_1c2e58:
    // 0x1c2e58: 0x10a40003
label_1c2e5c:
    if (ctx->pc == 0x1C2E5Cu) {
        ctx->pc = 0x1C2E5Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x1C2E60u;
        goto label_1c2e60;
    }
    ctx->pc = 0x1C2E58u;
    {
        const bool branch_taken_0x1c2e58 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x1C2E5Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x1c2e58) {
            ctx->pc = 0x1C2E68u;
            goto label_1c2e68;
        }
    }
    ctx->pc = 0x1C2E60u;
label_1c2e60:
    // 0x1c2e60: 0x100000ae
label_1c2e64:
    if (ctx->pc == 0x1C2E64u) {
        ctx->pc = 0x1C2E68u;
        goto label_1c2e68;
    }
    ctx->pc = 0x1C2E60u;
    {
        const bool branch_taken_0x1c2e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2e60) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2E68u;
label_1c2e68:
    // 0x1c2e68: 0x24020005
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c2e6c:
    // 0x1c2e6c: 0xae03002c
    ctx->pc = 0x1c2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1c2e70:
    // 0x1c2e70: 0xae020010
    ctx->pc = 0x1c2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c2e74:
    // 0x1c2e74: 0xae040030
    ctx->pc = 0x1c2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
label_1c2e78:
    // 0x1c2e78: 0x100000a8
label_1c2e7c:
    if (ctx->pc == 0x1C2E7Cu) {
        ctx->pc = 0x1C2E7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
        ctx->pc = 0x1C2E80u;
        goto label_1c2e80;
    }
    ctx->pc = 0x1C2E78u;
    {
        const bool branch_taken_0x1c2e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2E7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
        if (branch_taken_0x1c2e78) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2E80u;
label_1c2e80:
    // 0x1c2e80: 0xae00002c
    ctx->pc = 0x1c2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c2e84:
    // 0x1c2e84: 0x24020001
    ctx->pc = 0x1c2e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2e88:
    // 0x1c2e88: 0xa2030002
    ctx->pc = 0x1c2e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c2e8c:
    // 0x1c2e8c: 0x100000a3
label_1c2e90:
    if (ctx->pc == 0x1C2E90u) {
        ctx->pc = 0x1C2E90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2E94u;
        goto label_1c2e94;
    }
    ctx->pc = 0x1C2E8Cu;
    {
        const bool branch_taken_0x1c2e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2E90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2e8c) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2E94u;
label_1c2e94:
    // 0x1c2e94: 0x24030005
    ctx->pc = 0x1c2e94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c2e98:
    // 0x1c2e98: 0xae02002c
    ctx->pc = 0x1c2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c2e9c:
    // 0x1c2e9c: 0x24020001
    ctx->pc = 0x1c2e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2ea0:
    // 0x1c2ea0: 0xae030010
    ctx->pc = 0x1c2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1c2ea4:
    // 0x1c2ea4: 0xae020030
    ctx->pc = 0x1c2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c2ea8:
    // 0x1c2ea8: 0x1000009c
label_1c2eac:
    if (ctx->pc == 0x1C2EACu) {
        ctx->pc = 0x1C2EACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2EB0u;
        goto label_1c2eb0;
    }
    ctx->pc = 0x1C2EA8u;
    {
        const bool branch_taken_0x1c2ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2EACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2ea8) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2EB0u;
label_1c2eb0:
    // 0x1c2eb0: 0xae00002c
    ctx->pc = 0x1c2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c2eb4:
    // 0x1c2eb4: 0x24020004
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1c2eb8:
    // 0x1c2eb8: 0xa2020002
    ctx->pc = 0x1c2eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c2ebc:
    // 0x1c2ebc: 0x24020001
    ctx->pc = 0x1c2ebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2ec0:
    // 0x1c2ec0: 0x10000096
label_1c2ec4:
    if (ctx->pc == 0x1C2EC4u) {
        ctx->pc = 0x1C2EC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2EC8u;
        goto label_1c2ec8;
    }
    ctx->pc = 0x1C2EC0u;
    {
        const bool branch_taken_0x1c2ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2EC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2ec0) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C2EC8u;
label_1c2ec8:
    // 0x1c2ec8: 0xc070498
label_1c2ecc:
    if (ctx->pc == 0x1C2ECCu) {
        ctx->pc = 0x1C2ED0u;
        goto label_1c2ed0;
    }
    ctx->pc = 0x1C2EC8u;
    SET_GPR_U32(ctx, 31, 0x1C2ED0u);
    ctx->pc = 0x1C1260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1260_0x1c1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ED0u; }
    }
    if (ctx->pc != 0x1C2ED0u) { return; }
    ctx->pc = 0x1C2ED0u;
label_1c2ed0:
    // 0x1c2ed0: 0x2403ffff
    ctx->pc = 0x1c2ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c2ed4:
    // 0x1c2ed4: 0x10430052
label_1c2ed8:
    if (ctx->pc == 0x1C2ED8u) {
        ctx->pc = 0x1C2EDCu;
        goto label_1c2edc;
    }
    ctx->pc = 0x1C2ED4u;
    {
        const bool branch_taken_0x1c2ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c2ed4) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2EDCu;
label_1c2edc:
    // 0x1c2edc: 0x2403ff00
    ctx->pc = 0x1c2edcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
label_1c2ee0:
    // 0x1c2ee0: 0x1043001d
label_1c2ee4:
    if (ctx->pc == 0x1C2EE4u) {
        ctx->pc = 0x1C2EE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C2EE8u;
        goto label_1c2ee8;
    }
    ctx->pc = 0x1C2EE0u;
    {
        const bool branch_taken_0x1c2ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C2EE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1c2ee0) {
            ctx->pc = 0x1C2F58u;
            goto label_1c2f58;
        }
    }
    ctx->pc = 0x1C2EE8u;
label_1c2ee8:
    // 0x1c2ee8: 0x10400003
label_1c2eec:
    if (ctx->pc == 0x1C2EECu) {
        ctx->pc = 0x1C2EECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EF0u;
        goto label_1c2ef0;
    }
    ctx->pc = 0x1C2EE8u;
    {
        const bool branch_taken_0x1c2ee8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2EECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ee8) {
            ctx->pc = 0x1C2EF8u;
            goto label_1c2ef8;
        }
    }
    ctx->pc = 0x1C2EF0u;
label_1c2ef0:
    // 0x1c2ef0: 0x10000022
label_1c2ef4:
    if (ctx->pc == 0x1C2EF4u) {
        ctx->pc = 0x1C2EF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C2EF8u;
        goto label_1c2ef8;
    }
    ctx->pc = 0x1C2EF0u;
    {
        const bool branch_taken_0x1c2ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2EF4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1c2ef0) {
            ctx->pc = 0x1C2F7Cu;
            goto label_1c2f7c;
        }
    }
    ctx->pc = 0x1C2EF8u;
label_1c2ef8:
    // 0x1c2ef8: 0xc071570
label_1c2efc:
    if (ctx->pc == 0x1C2EFCu) {
        ctx->pc = 0x1C2F00u;
        goto label_1c2f00;
    }
    ctx->pc = 0x1C2EF8u;
    SET_GPR_U32(ctx, 31, 0x1C2F00u);
    ctx->pc = 0x1C55C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C55C0_0x1c55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F00u; }
    }
    if (ctx->pc != 0x1C2F00u) { return; }
    ctx->pc = 0x1C2F00u;
label_1c2f00:
    // 0x1c2f00: 0x1440000a
label_1c2f04:
    if (ctx->pc == 0x1C2F04u) {
        ctx->pc = 0x1C2F04u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        ctx->pc = 0x1C2F08u;
        goto label_1c2f08;
    }
    ctx->pc = 0x1C2F00u;
    {
        const bool branch_taken_0x1c2f00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C2F04u;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1c2f00) {
            ctx->pc = 0x1C2F2Cu;
            goto label_1c2f2c;
        }
    }
    ctx->pc = 0x1C2F08u;
label_1c2f08:
    // 0x1c2f08: 0x2402001a
    ctx->pc = 0x1c2f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
label_1c2f0c:
    // 0x1c2f0c: 0xc0704a4
label_1c2f10:
    if (ctx->pc == 0x1C2F10u) {
        ctx->pc = 0x1C2F10u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2F14u;
        goto label_1c2f14;
    }
    ctx->pc = 0x1C2F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F14u);
    ctx->pc = 0x1C2F10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1C1290u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1290_0x1c1290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F14u; }
    }
    if (ctx->pc != 0x1C2F14u) { return; }
    ctx->pc = 0x1C2F14u;
label_1c2f14:
    // 0x1c2f14: 0x24030004
    ctx->pc = 0x1c2f14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c2f18:
    // 0x1c2f18: 0x2402003c
    ctx->pc = 0x1c2f18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_1c2f1c:
    // 0x1c2f1c: 0xa2030002
    ctx->pc = 0x1c2f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c2f20:
    // 0x1c2f20: 0xae000034
    ctx->pc = 0x1c2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1c2f24:
    // 0x1c2f24: 0x1000003e
label_1c2f28:
    if (ctx->pc == 0x1C2F28u) {
        ctx->pc = 0x1C2F28u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2F2Cu;
        goto label_1c2f2c;
    }
    ctx->pc = 0x1C2F24u;
    {
        const bool branch_taken_0x1c2f24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2F28u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2f24) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2F2Cu;
label_1c2f2c:
    // 0x1c2f2c: 0x24020039
    ctx->pc = 0x1c2f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
label_1c2f30:
    // 0x1c2f30: 0xa0204476
    ctx->pc = 0x1c2f30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17526), (uint8_t)GPR_U32(ctx, 0));
label_1c2f34:
    // 0x1c2f34: 0xae02002c
    ctx->pc = 0x1c2f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c2f38:
    // 0x1c2f38: 0x24020003
    ctx->pc = 0x1c2f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c2f3c:
    // 0x1c2f3c: 0xa2020002
    ctx->pc = 0x1c2f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c2f40:
    // 0x1c2f40: 0x24020005
    ctx->pc = 0x1c2f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c2f44:
    // 0x1c2f44: 0xae020010
    ctx->pc = 0x1c2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c2f48:
    // 0x1c2f48: 0x24020001
    ctx->pc = 0x1c2f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2f4c:
    // 0x1c2f4c: 0xae020030
    ctx->pc = 0x1c2f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c2f50:
    // 0x1c2f50: 0x10000033
label_1c2f54:
    if (ctx->pc == 0x1C2F54u) {
        ctx->pc = 0x1C2F54u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2F58u;
        goto label_1c2f58;
    }
    ctx->pc = 0x1C2F50u;
    {
        const bool branch_taken_0x1c2f50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2F54u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2f50) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2F58u;
label_1c2f58:
    // 0x1c2f58: 0x24020039
    ctx->pc = 0x1c2f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
label_1c2f5c:
    // 0x1c2f5c: 0xa2030002
    ctx->pc = 0x1c2f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c2f60:
    // 0x1c2f60: 0xae02002c
    ctx->pc = 0x1c2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c2f64:
    // 0x1c2f64: 0x24030005
    ctx->pc = 0x1c2f64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c2f68:
    // 0x1c2f68: 0x24020001
    ctx->pc = 0x1c2f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2f6c:
    // 0x1c2f6c: 0xae030010
    ctx->pc = 0x1c2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1c2f70:
    // 0x1c2f70: 0xae020030
    ctx->pc = 0x1c2f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c2f74:
    // 0x1c2f74: 0x1000002a
label_1c2f78:
    if (ctx->pc == 0x1C2F78u) {
        ctx->pc = 0x1C2F78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2F7Cu;
        goto label_1c2f7c;
    }
    ctx->pc = 0x1C2F74u;
    {
        const bool branch_taken_0x1c2f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2F78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2f74) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2F7Cu;
label_1c2f7c:
    // 0x1c2f7c: 0x304200ff
    ctx->pc = 0x1c2f7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1c2f80:
    // 0x1c2f80: 0xa2040002
    ctx->pc = 0x1c2f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
label_1c2f84:
    // 0x1c2f84: 0x24030004
    ctx->pc = 0x1c2f84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1c2f88:
    // 0x1c2f88: 0xae020034
    ctx->pc = 0x1c2f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1c2f8c:
    // 0x1c2f8c: 0x8e050034
    ctx->pc = 0x1c2f8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1c2f90:
    // 0x1c2f90: 0x10a3001c
label_1c2f94:
    if (ctx->pc == 0x1C2F94u) {
        ctx->pc = 0x1C2F98u;
        goto label_1c2f98;
    }
    ctx->pc = 0x1C2F90u;
    {
        const bool branch_taken_0x1c2f90 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1c2f90) {
            ctx->pc = 0x1C3004u;
            goto label_1c3004;
        }
    }
    ctx->pc = 0x1C2F98u;
label_1c2f98:
    // 0x1c2f98: 0x10a40013
label_1c2f9c:
    if (ctx->pc == 0x1C2F9Cu) {
        ctx->pc = 0x1C2F9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x1C2FA0u;
        goto label_1c2fa0;
    }
    ctx->pc = 0x1C2F98u;
    {
        const bool branch_taken_0x1c2f98 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x1C2F9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x1c2f98) {
            ctx->pc = 0x1C2FE8u;
            goto label_1c2fe8;
        }
    }
    ctx->pc = 0x1C2FA0u;
label_1c2fa0:
    // 0x1c2fa0: 0x24020002
    ctx->pc = 0x1c2fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1c2fa4:
    // 0x1c2fa4: 0x10a2000b
label_1c2fa8:
    if (ctx->pc == 0x1C2FA8u) {
        ctx->pc = 0x1C2FA8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C2FACu;
        goto label_1c2fac;
    }
    ctx->pc = 0x1C2FA4u;
    {
        const bool branch_taken_0x1c2fa4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C2FA8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c2fa4) {
            ctx->pc = 0x1C2FD4u;
            goto label_1c2fd4;
        }
    }
    ctx->pc = 0x1C2FACu;
label_1c2fac:
    // 0x1c2fac: 0x10a40003
label_1c2fb0:
    if (ctx->pc == 0x1C2FB0u) {
        ctx->pc = 0x1C2FB0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x1C2FB4u;
        goto label_1c2fb4;
    }
    ctx->pc = 0x1C2FACu;
    {
        const bool branch_taken_0x1c2fac = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        ctx->pc = 0x1C2FB0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x1c2fac) {
            ctx->pc = 0x1C2FBCu;
            goto label_1c2fbc;
        }
    }
    ctx->pc = 0x1C2FB4u;
label_1c2fb4:
    // 0x1c2fb4: 0x1000001a
label_1c2fb8:
    if (ctx->pc == 0x1C2FB8u) {
        ctx->pc = 0x1C2FBCu;
        goto label_1c2fbc;
    }
    ctx->pc = 0x1C2FB4u;
    {
        const bool branch_taken_0x1c2fb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c2fb4) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2FBCu;
label_1c2fbc:
    // 0x1c2fbc: 0x24020005
    ctx->pc = 0x1c2fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c2fc0:
    // 0x1c2fc0: 0xae03002c
    ctx->pc = 0x1c2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_1c2fc4:
    // 0x1c2fc4: 0xae020010
    ctx->pc = 0x1c2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c2fc8:
    // 0x1c2fc8: 0xae040030
    ctx->pc = 0x1c2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
label_1c2fcc:
    // 0x1c2fcc: 0x10000014
label_1c2fd0:
    if (ctx->pc == 0x1C2FD0u) {
        ctx->pc = 0x1C2FD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
        ctx->pc = 0x1C2FD4u;
        goto label_1c2fd4;
    }
    ctx->pc = 0x1C2FCCu;
    {
        const bool branch_taken_0x1c2fcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2FD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
        if (branch_taken_0x1c2fcc) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2FD4u;
label_1c2fd4:
    // 0x1c2fd4: 0xae00002c
    ctx->pc = 0x1c2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c2fd8:
    // 0x1c2fd8: 0x24020001
    ctx->pc = 0x1c2fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2fdc:
    // 0x1c2fdc: 0xa2030002
    ctx->pc = 0x1c2fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c2fe0:
    // 0x1c2fe0: 0x1000000f
label_1c2fe4:
    if (ctx->pc == 0x1C2FE4u) {
        ctx->pc = 0x1C2FE4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C2FE8u;
        goto label_1c2fe8;
    }
    ctx->pc = 0x1C2FE0u;
    {
        const bool branch_taken_0x1c2fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C2FE4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2fe0) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C2FE8u;
label_1c2fe8:
    // 0x1c2fe8: 0x24030005
    ctx->pc = 0x1c2fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c2fec:
    // 0x1c2fec: 0xae02002c
    ctx->pc = 0x1c2fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c2ff0:
    // 0x1c2ff0: 0x24020001
    ctx->pc = 0x1c2ff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c2ff4:
    // 0x1c2ff4: 0xae030010
    ctx->pc = 0x1c2ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1c2ff8:
    // 0x1c2ff8: 0xae020030
    ctx->pc = 0x1c2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c2ffc:
    // 0x1c2ffc: 0x10000008
label_1c3000:
    if (ctx->pc == 0x1C3000u) {
        ctx->pc = 0x1C3000u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3004u;
        goto label_1c3004;
    }
    ctx->pc = 0x1C2FFCu;
    {
        const bool branch_taken_0x1c2ffc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3000u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x1c2ffc) {
            ctx->pc = 0x1C3020u;
            goto label_1c3020;
        }
    }
    ctx->pc = 0x1C3004u;
label_1c3004:
    // 0x1c3004: 0x2402001d
    ctx->pc = 0x1c3004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
label_1c3008:
    // 0x1c3008: 0x24030005
    ctx->pc = 0x1c3008u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
label_1c300c:
    // 0x1c300c: 0xae02002c
    ctx->pc = 0x1c300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1c3010:
    // 0x1c3010: 0x24020001
    ctx->pc = 0x1c3010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3014:
    // 0x1c3014: 0xae030010
    ctx->pc = 0x1c3014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1c3018:
    // 0x1c3018: 0xae020030
    ctx->pc = 0x1c3018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c301c:
    // 0x1c301c: 0xae020038
    ctx->pc = 0x1c301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1c3020:
    // 0x1c3020: 0x3c010029
    ctx->pc = 0x1c3020u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
label_1c3024:
    // 0x1c3024: 0x8c224170
    ctx->pc = 0x1c3024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16752)));
label_1c3028:
    // 0x1c3028: 0x1000003c
label_1c302c:
    if (ctx->pc == 0x1C302Cu) {
        ctx->pc = 0x1C302Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3030u;
        goto label_1c3030;
    }
    ctx->pc = 0x1C3028u;
    {
        const bool branch_taken_0x1c3028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C302Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3028) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C3030u;
label_1c3030:
    // 0x1c3030: 0x9603000a
    ctx->pc = 0x1c3030u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1c3034:
    // 0x1c3034: 0x30620010
    ctx->pc = 0x1c3034u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_1c3038:
    // 0x1c3038: 0x1040000f
label_1c303c:
    if (ctx->pc == 0x1C303Cu) {
        ctx->pc = 0x1C3040u;
        goto label_1c3040;
    }
    ctx->pc = 0x1C3038u;
    {
        const bool branch_taken_0x1c3038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3038) {
            ctx->pc = 0x1C3078u;
            goto label_1c3078;
        }
    }
    ctx->pc = 0x1C3040u;
label_1c3040:
    // 0x1c3040: 0xc07165c
label_1c3044:
    if (ctx->pc == 0x1C3044u) {
        ctx->pc = 0x1C3048u;
        goto label_1c3048;
    }
    ctx->pc = 0x1C3040u;
    SET_GPR_U32(ctx, 31, 0x1C3048u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3048u; }
    }
    if (ctx->pc != 0x1C3048u) { return; }
    ctx->pc = 0x1C3048u;
label_1c3048:
    // 0x1c3048: 0xae000030
    ctx->pc = 0x1c3048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1c304c:
    // 0x1c304c: 0x24030001
    ctx->pc = 0x1c304cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1c3050:
    // 0x1c3050: 0x8e020038
    ctx->pc = 0x1c3050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c3054:
    // 0x1c3054: 0x14430003
label_1c3058:
    if (ctx->pc == 0x1C3058u) {
        ctx->pc = 0x1C305Cu;
        goto label_1c305c;
    }
    ctx->pc = 0x1C3054u;
    {
        const bool branch_taken_0x1c3054 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1c3054) {
            ctx->pc = 0x1C3064u;
            goto label_1c3064;
        }
    }
    ctx->pc = 0x1C305Cu;
label_1c305c:
    // 0x1c305c: 0x1000002f
label_1c3060:
    if (ctx->pc == 0x1C3060u) {
        ctx->pc = 0x1C3060u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C3064u;
        goto label_1c3064;
    }
    ctx->pc = 0x1C305Cu;
    {
        const bool branch_taken_0x1c305c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3060u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1c305c) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C3064u;
label_1c3064:
    // 0x1c3064: 0xae00002c
    ctx->pc = 0x1c3064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1c3068:
    // 0x1c3068: 0x24020004
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1c306c:
    // 0x1c306c: 0xa2020002
    ctx->pc = 0x1c306cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c3070:
    // 0x1c3070: 0x1000002a
label_1c3074:
    if (ctx->pc == 0x1C3074u) {
        ctx->pc = 0x1C3074u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1C3078u;
        goto label_1c3078;
    }
    ctx->pc = 0x1C3070u;
    {
        const bool branch_taken_0x1c3070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3074u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x1c3070) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C3078u;
label_1c3078:
    // 0x1c3078: 0x8e020010
    ctx->pc = 0x1c3078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c307c:
    // 0x1c307c: 0x10400004
label_1c3080:
    if (ctx->pc == 0x1C3080u) {
        ctx->pc = 0x1C3084u;
        goto label_1c3084;
    }
    ctx->pc = 0x1C307Cu;
    {
        const bool branch_taken_0x1c307c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c307c) {
            ctx->pc = 0x1C3090u;
            goto label_1c3090;
        }
    }
    ctx->pc = 0x1C3084u;
label_1c3084:
    // 0x1c3084: 0x2442ffff
    ctx->pc = 0x1c3084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c3088:
    // 0x1c3088: 0x10000024
label_1c308c:
    if (ctx->pc == 0x1C308Cu) {
        ctx->pc = 0x1C308Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C3090u;
        goto label_1c3090;
    }
    ctx->pc = 0x1C3088u;
    {
        const bool branch_taken_0x1c3088 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C308Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c3088) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C3090u;
label_1c3090:
    // 0x1c3090: 0x30620008
    ctx->pc = 0x1c3090u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_1c3094:
    // 0x1c3094: 0x10400005
label_1c3098:
    if (ctx->pc == 0x1C3098u) {
        ctx->pc = 0x1C3098u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1C309Cu;
        goto label_1c309c;
    }
    ctx->pc = 0x1C3094u;
    {
        const bool branch_taken_0x1c3094 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3098u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x1c3094) {
            ctx->pc = 0x1C30ACu;
            goto label_1c30ac;
        }
    }
    ctx->pc = 0x1C309Cu;
label_1c309c:
    // 0x1c309c: 0x8e020038
    ctx->pc = 0x1c309cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c30a0:
    // 0x1c30a0: 0x10400008
label_1c30a4:
    if (ctx->pc == 0x1C30A4u) {
        ctx->pc = 0x1C30A8u;
        goto label_1c30a8;
    }
    ctx->pc = 0x1C30A0u;
    {
        const bool branch_taken_0x1c30a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c30a0) {
            ctx->pc = 0x1C30C4u;
            goto label_1c30c4;
        }
    }
    ctx->pc = 0x1C30A8u;
label_1c30a8:
    // 0x1c30a8: 0x30620004
    ctx->pc = 0x1c30a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_1c30ac:
    // 0x1c30ac: 0x1040001b
label_1c30b0:
    if (ctx->pc == 0x1C30B0u) {
        ctx->pc = 0x1C30B4u;
        goto label_1c30b4;
    }
    ctx->pc = 0x1C30ACu;
    {
        const bool branch_taken_0x1c30ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c30ac) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C30B4u;
label_1c30b4:
    // 0x1c30b4: 0x8e030038
    ctx->pc = 0x1c30b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c30b8:
    // 0x1c30b8: 0x24020001
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c30bc:
    // 0x1c30bc: 0x14620017
label_1c30c0:
    if (ctx->pc == 0x1C30C0u) {
        ctx->pc = 0x1C30C4u;
        goto label_1c30c4;
    }
    ctx->pc = 0x1C30BCu;
    {
        const bool branch_taken_0x1c30bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c30bc) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C30C4u;
label_1c30c4:
    // 0x1c30c4: 0xc071660
label_1c30c8:
    if (ctx->pc == 0x1C30C8u) {
        ctx->pc = 0x1C30CCu;
        goto label_1c30cc;
    }
    ctx->pc = 0x1C30C4u;
    SET_GPR_U32(ctx, 31, 0x1C30CCu);
    ctx->pc = 0x1C5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5980_0x1c5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30CCu; }
    }
    if (ctx->pc != 0x1C30CCu) { return; }
    ctx->pc = 0x1C30CCu;
label_1c30cc:
    // 0x1c30cc: 0x8e030038
    ctx->pc = 0x1c30ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1c30d0:
    // 0x1c30d0: 0x24020005
    ctx->pc = 0x1c30d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1c30d4:
    // 0x1c30d4: 0x38630001
    ctx->pc = 0x1c30d4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
label_1c30d8:
    // 0x1c30d8: 0xae030038
    ctx->pc = 0x1c30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_1c30dc:
    // 0x1c30dc: 0x1000000f
label_1c30e0:
    if (ctx->pc == 0x1C30E0u) {
        ctx->pc = 0x1C30E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C30E4u;
        goto label_1c30e4;
    }
    ctx->pc = 0x1C30DCu;
    {
        const bool branch_taken_0x1c30dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C30E0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c30dc) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C30E4u;
label_1c30e4:
    // 0x1c30e4: 0x8e020010
    ctx->pc = 0x1c30e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1c30e8:
    // 0x1c30e8: 0x2442ffff
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c30ec:
    // 0x1c30ec: 0x1440000b
label_1c30f0:
    if (ctx->pc == 0x1C30F0u) {
        ctx->pc = 0x1C30F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1C30F4u;
        goto label_1c30f4;
    }
    ctx->pc = 0x1C30ECu;
    {
        const bool branch_taken_0x1c30ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C30F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1c30ec) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C30F4u;
label_1c30f4:
    // 0x1c30f4: 0x1000000f
label_1c30f8:
    if (ctx->pc == 0x1C30F8u) {
        ctx->pc = 0x1C30F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C30FCu;
        goto label_1c30fc;
    }
    ctx->pc = 0x1C30F4u;
    {
        const bool branch_taken_0x1c30f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C30F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c30f4) {
            ctx->pc = 0x1C3134u;
            goto label_1c3134;
        }
    }
    ctx->pc = 0x1C30FCu;
label_1c30fc:
    // 0x1c30fc: 0x9602000a
    ctx->pc = 0x1c30fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_1c3100:
    // 0x1c3100: 0x3042fff0
    ctx->pc = 0x1c3100u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65520));
label_1c3104:
    // 0x1c3104: 0x10400005
label_1c3108:
    if (ctx->pc == 0x1C3108u) {
        ctx->pc = 0x1C310Cu;
        goto label_1c310c;
    }
    ctx->pc = 0x1C3104u;
    {
        const bool branch_taken_0x1c3104 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c3104) {
            ctx->pc = 0x1C311Cu;
            goto label_1c311c;
        }
    }
    ctx->pc = 0x1C310Cu;
label_1c310c:
    // 0x1c310c: 0xc07165c
label_1c3110:
    if (ctx->pc == 0x1C3110u) {
        ctx->pc = 0x1C3114u;
        goto label_1c3114;
    }
    ctx->pc = 0x1C310Cu;
    SET_GPR_U32(ctx, 31, 0x1C3114u);
    ctx->pc = 0x1C5970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5970_0x1c5970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3114u; }
    }
    if (ctx->pc != 0x1C3114u) { return; }
    ctx->pc = 0x1C3114u;
label_1c3114:
    // 0x1c3114: 0x10000007
label_1c3118:
    if (ctx->pc == 0x1C3118u) {
        ctx->pc = 0x1C3118u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C311Cu;
        goto label_1c311c;
    }
    ctx->pc = 0x1C3114u;
    {
        const bool branch_taken_0x1c3114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C3118u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1c3114) {
            ctx->pc = 0x1C3134u;
            goto label_1c3134;
        }
    }
    ctx->pc = 0x1C311Cu;
label_1c311c:
    // 0x1c311c: 0x200202d
    ctx->pc = 0x1c311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3120:
    // 0x1c3120: 0xc0713c4
label_1c3124:
    if (ctx->pc == 0x1C3124u) {
        ctx->pc = 0x1C3128u;
        goto label_1c3128;
    }
    ctx->pc = 0x1C3120u;
    SET_GPR_U32(ctx, 31, 0x1C3128u);
    ctx->pc = 0x1C4F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4F10_0x1c4f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3128u; }
    }
    if (ctx->pc != 0x1C3128u) { return; }
    ctx->pc = 0x1C3128u;
label_1c3128:
    // 0x1c3128: 0xc07146c
label_1c312c:
    if (ctx->pc == 0x1C312Cu) {
        ctx->pc = 0x1C312Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C3130u;
        goto label_1c3130;
    }
    ctx->pc = 0x1C3128u;
    SET_GPR_U32(ctx, 31, 0x1C3130u);
    ctx->pc = 0x1C312Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1C51B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C51B0_0x1c51b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3130u; }
    }
    if (ctx->pc != 0x1C3130u) { return; }
    ctx->pc = 0x1C3130u;
label_1c3130:
    // 0x1c3130: 0x24020001
    ctx->pc = 0x1c3130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c3134:
    // 0x1c3134: 0xdfbf0010
    ctx->pc = 0x1c3134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3138:
    // 0x1c3138: 0x7bb00000
    ctx->pc = 0x1c3138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c313c:
    // 0x1c313c: 0x3e00008
label_1c3140:
    if (ctx->pc == 0x1C3140u) {
        ctx->pc = 0x1C3140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C3144u;
        goto label_1c3144;
    }
    ctx->pc = 0x1C313Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3140u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2D00u: goto label_1c2d00;
            case 0x1C2D04u: goto label_1c2d04;
            case 0x1C2D08u: goto label_1c2d08;
            case 0x1C2D0Cu: goto label_1c2d0c;
            case 0x1C2D10u: goto label_1c2d10;
            case 0x1C2D14u: goto label_1c2d14;
            case 0x1C2D18u: goto label_1c2d18;
            case 0x1C2D1Cu: goto label_1c2d1c;
            case 0x1C2D20u: goto label_1c2d20;
            case 0x1C2D24u: goto label_1c2d24;
            case 0x1C2D28u: goto label_1c2d28;
            case 0x1C2D2Cu: goto label_1c2d2c;
            case 0x1C2D30u: goto label_1c2d30;
            case 0x1C2D34u: goto label_1c2d34;
            case 0x1C2D38u: goto label_1c2d38;
            case 0x1C2D3Cu: goto label_1c2d3c;
            case 0x1C2D40u: goto label_1c2d40;
            case 0x1C2D44u: goto label_1c2d44;
            case 0x1C2D48u: goto label_1c2d48;
            case 0x1C2D4Cu: goto label_1c2d4c;
            case 0x1C2D50u: goto label_1c2d50;
            case 0x1C2D54u: goto label_1c2d54;
            case 0x1C2D58u: goto label_1c2d58;
            case 0x1C2D5Cu: goto label_1c2d5c;
            case 0x1C2D60u: goto label_1c2d60;
            case 0x1C2D64u: goto label_1c2d64;
            case 0x1C2D68u: goto label_1c2d68;
            case 0x1C2D6Cu: goto label_1c2d6c;
            case 0x1C2D70u: goto label_1c2d70;
            case 0x1C2D74u: goto label_1c2d74;
            case 0x1C2D78u: goto label_1c2d78;
            case 0x1C2D7Cu: goto label_1c2d7c;
            case 0x1C2D80u: goto label_1c2d80;
            case 0x1C2D84u: goto label_1c2d84;
            case 0x1C2D88u: goto label_1c2d88;
            case 0x1C2D8Cu: goto label_1c2d8c;
            case 0x1C2D90u: goto label_1c2d90;
            case 0x1C2D94u: goto label_1c2d94;
            case 0x1C2D98u: goto label_1c2d98;
            case 0x1C2D9Cu: goto label_1c2d9c;
            case 0x1C2DA0u: goto label_1c2da0;
            case 0x1C2DA4u: goto label_1c2da4;
            case 0x1C2DA8u: goto label_1c2da8;
            case 0x1C2DACu: goto label_1c2dac;
            case 0x1C2DB0u: goto label_1c2db0;
            case 0x1C2DB4u: goto label_1c2db4;
            case 0x1C2DB8u: goto label_1c2db8;
            case 0x1C2DBCu: goto label_1c2dbc;
            case 0x1C2DC0u: goto label_1c2dc0;
            case 0x1C2DC4u: goto label_1c2dc4;
            case 0x1C2DC8u: goto label_1c2dc8;
            case 0x1C2DCCu: goto label_1c2dcc;
            case 0x1C2DD0u: goto label_1c2dd0;
            case 0x1C2DD4u: goto label_1c2dd4;
            case 0x1C2DD8u: goto label_1c2dd8;
            case 0x1C2DDCu: goto label_1c2ddc;
            case 0x1C2DE0u: goto label_1c2de0;
            case 0x1C2DE4u: goto label_1c2de4;
            case 0x1C2DE8u: goto label_1c2de8;
            case 0x1C2DECu: goto label_1c2dec;
            case 0x1C2DF0u: goto label_1c2df0;
            case 0x1C2DF4u: goto label_1c2df4;
            case 0x1C2DF8u: goto label_1c2df8;
            case 0x1C2DFCu: goto label_1c2dfc;
            case 0x1C2E00u: goto label_1c2e00;
            case 0x1C2E04u: goto label_1c2e04;
            case 0x1C2E08u: goto label_1c2e08;
            case 0x1C2E0Cu: goto label_1c2e0c;
            case 0x1C2E10u: goto label_1c2e10;
            case 0x1C2E14u: goto label_1c2e14;
            case 0x1C2E18u: goto label_1c2e18;
            case 0x1C2E1Cu: goto label_1c2e1c;
            case 0x1C2E20u: goto label_1c2e20;
            case 0x1C2E24u: goto label_1c2e24;
            case 0x1C2E28u: goto label_1c2e28;
            case 0x1C2E2Cu: goto label_1c2e2c;
            case 0x1C2E30u: goto label_1c2e30;
            case 0x1C2E34u: goto label_1c2e34;
            case 0x1C2E38u: goto label_1c2e38;
            case 0x1C2E3Cu: goto label_1c2e3c;
            case 0x1C2E40u: goto label_1c2e40;
            case 0x1C2E44u: goto label_1c2e44;
            case 0x1C2E48u: goto label_1c2e48;
            case 0x1C2E4Cu: goto label_1c2e4c;
            case 0x1C2E50u: goto label_1c2e50;
            case 0x1C2E54u: goto label_1c2e54;
            case 0x1C2E58u: goto label_1c2e58;
            case 0x1C2E5Cu: goto label_1c2e5c;
            case 0x1C2E60u: goto label_1c2e60;
            case 0x1C2E64u: goto label_1c2e64;
            case 0x1C2E68u: goto label_1c2e68;
            case 0x1C2E6Cu: goto label_1c2e6c;
            case 0x1C2E70u: goto label_1c2e70;
            case 0x1C2E74u: goto label_1c2e74;
            case 0x1C2E78u: goto label_1c2e78;
            case 0x1C2E7Cu: goto label_1c2e7c;
            case 0x1C2E80u: goto label_1c2e80;
            case 0x1C2E84u: goto label_1c2e84;
            case 0x1C2E88u: goto label_1c2e88;
            case 0x1C2E8Cu: goto label_1c2e8c;
            case 0x1C2E90u: goto label_1c2e90;
            case 0x1C2E94u: goto label_1c2e94;
            case 0x1C2E98u: goto label_1c2e98;
            case 0x1C2E9Cu: goto label_1c2e9c;
            case 0x1C2EA0u: goto label_1c2ea0;
            case 0x1C2EA4u: goto label_1c2ea4;
            case 0x1C2EA8u: goto label_1c2ea8;
            case 0x1C2EACu: goto label_1c2eac;
            case 0x1C2EB0u: goto label_1c2eb0;
            case 0x1C2EB4u: goto label_1c2eb4;
            case 0x1C2EB8u: goto label_1c2eb8;
            case 0x1C2EBCu: goto label_1c2ebc;
            case 0x1C2EC0u: goto label_1c2ec0;
            case 0x1C2EC4u: goto label_1c2ec4;
            case 0x1C2EC8u: goto label_1c2ec8;
            case 0x1C2ECCu: goto label_1c2ecc;
            case 0x1C2ED0u: goto label_1c2ed0;
            case 0x1C2ED4u: goto label_1c2ed4;
            case 0x1C2ED8u: goto label_1c2ed8;
            case 0x1C2EDCu: goto label_1c2edc;
            case 0x1C2EE0u: goto label_1c2ee0;
            case 0x1C2EE4u: goto label_1c2ee4;
            case 0x1C2EE8u: goto label_1c2ee8;
            case 0x1C2EECu: goto label_1c2eec;
            case 0x1C2EF0u: goto label_1c2ef0;
            case 0x1C2EF4u: goto label_1c2ef4;
            case 0x1C2EF8u: goto label_1c2ef8;
            case 0x1C2EFCu: goto label_1c2efc;
            case 0x1C2F00u: goto label_1c2f00;
            case 0x1C2F04u: goto label_1c2f04;
            case 0x1C2F08u: goto label_1c2f08;
            case 0x1C2F0Cu: goto label_1c2f0c;
            case 0x1C2F10u: goto label_1c2f10;
            case 0x1C2F14u: goto label_1c2f14;
            case 0x1C2F18u: goto label_1c2f18;
            case 0x1C2F1Cu: goto label_1c2f1c;
            case 0x1C2F20u: goto label_1c2f20;
            case 0x1C2F24u: goto label_1c2f24;
            case 0x1C2F28u: goto label_1c2f28;
            case 0x1C2F2Cu: goto label_1c2f2c;
            case 0x1C2F30u: goto label_1c2f30;
            case 0x1C2F34u: goto label_1c2f34;
            case 0x1C2F38u: goto label_1c2f38;
            case 0x1C2F3Cu: goto label_1c2f3c;
            case 0x1C2F40u: goto label_1c2f40;
            case 0x1C2F44u: goto label_1c2f44;
            case 0x1C2F48u: goto label_1c2f48;
            case 0x1C2F4Cu: goto label_1c2f4c;
            case 0x1C2F50u: goto label_1c2f50;
            case 0x1C2F54u: goto label_1c2f54;
            case 0x1C2F58u: goto label_1c2f58;
            case 0x1C2F5Cu: goto label_1c2f5c;
            case 0x1C2F60u: goto label_1c2f60;
            case 0x1C2F64u: goto label_1c2f64;
            case 0x1C2F68u: goto label_1c2f68;
            case 0x1C2F6Cu: goto label_1c2f6c;
            case 0x1C2F70u: goto label_1c2f70;
            case 0x1C2F74u: goto label_1c2f74;
            case 0x1C2F78u: goto label_1c2f78;
            case 0x1C2F7Cu: goto label_1c2f7c;
            case 0x1C2F80u: goto label_1c2f80;
            case 0x1C2F84u: goto label_1c2f84;
            case 0x1C2F88u: goto label_1c2f88;
            case 0x1C2F8Cu: goto label_1c2f8c;
            case 0x1C2F90u: goto label_1c2f90;
            case 0x1C2F94u: goto label_1c2f94;
            case 0x1C2F98u: goto label_1c2f98;
            case 0x1C2F9Cu: goto label_1c2f9c;
            case 0x1C2FA0u: goto label_1c2fa0;
            case 0x1C2FA4u: goto label_1c2fa4;
            case 0x1C2FA8u: goto label_1c2fa8;
            case 0x1C2FACu: goto label_1c2fac;
            case 0x1C2FB0u: goto label_1c2fb0;
            case 0x1C2FB4u: goto label_1c2fb4;
            case 0x1C2FB8u: goto label_1c2fb8;
            case 0x1C2FBCu: goto label_1c2fbc;
            case 0x1C2FC0u: goto label_1c2fc0;
            case 0x1C2FC4u: goto label_1c2fc4;
            case 0x1C2FC8u: goto label_1c2fc8;
            case 0x1C2FCCu: goto label_1c2fcc;
            case 0x1C2FD0u: goto label_1c2fd0;
            case 0x1C2FD4u: goto label_1c2fd4;
            case 0x1C2FD8u: goto label_1c2fd8;
            case 0x1C2FDCu: goto label_1c2fdc;
            case 0x1C2FE0u: goto label_1c2fe0;
            case 0x1C2FE4u: goto label_1c2fe4;
            case 0x1C2FE8u: goto label_1c2fe8;
            case 0x1C2FECu: goto label_1c2fec;
            case 0x1C2FF0u: goto label_1c2ff0;
            case 0x1C2FF4u: goto label_1c2ff4;
            case 0x1C2FF8u: goto label_1c2ff8;
            case 0x1C2FFCu: goto label_1c2ffc;
            case 0x1C3000u: goto label_1c3000;
            case 0x1C3004u: goto label_1c3004;
            case 0x1C3008u: goto label_1c3008;
            case 0x1C300Cu: goto label_1c300c;
            case 0x1C3010u: goto label_1c3010;
            case 0x1C3014u: goto label_1c3014;
            case 0x1C3018u: goto label_1c3018;
            case 0x1C301Cu: goto label_1c301c;
            case 0x1C3020u: goto label_1c3020;
            case 0x1C3024u: goto label_1c3024;
            case 0x1C3028u: goto label_1c3028;
            case 0x1C302Cu: goto label_1c302c;
            case 0x1C3030u: goto label_1c3030;
            case 0x1C3034u: goto label_1c3034;
            case 0x1C3038u: goto label_1c3038;
            case 0x1C303Cu: goto label_1c303c;
            case 0x1C3040u: goto label_1c3040;
            case 0x1C3044u: goto label_1c3044;
            case 0x1C3048u: goto label_1c3048;
            case 0x1C304Cu: goto label_1c304c;
            case 0x1C3050u: goto label_1c3050;
            case 0x1C3054u: goto label_1c3054;
            case 0x1C3058u: goto label_1c3058;
            case 0x1C305Cu: goto label_1c305c;
            case 0x1C3060u: goto label_1c3060;
            case 0x1C3064u: goto label_1c3064;
            case 0x1C3068u: goto label_1c3068;
            case 0x1C306Cu: goto label_1c306c;
            case 0x1C3070u: goto label_1c3070;
            case 0x1C3074u: goto label_1c3074;
            case 0x1C3078u: goto label_1c3078;
            case 0x1C307Cu: goto label_1c307c;
            case 0x1C3080u: goto label_1c3080;
            case 0x1C3084u: goto label_1c3084;
            case 0x1C3088u: goto label_1c3088;
            case 0x1C308Cu: goto label_1c308c;
            case 0x1C3090u: goto label_1c3090;
            case 0x1C3094u: goto label_1c3094;
            case 0x1C3098u: goto label_1c3098;
            case 0x1C309Cu: goto label_1c309c;
            case 0x1C30A0u: goto label_1c30a0;
            case 0x1C30A4u: goto label_1c30a4;
            case 0x1C30A8u: goto label_1c30a8;
            case 0x1C30ACu: goto label_1c30ac;
            case 0x1C30B0u: goto label_1c30b0;
            case 0x1C30B4u: goto label_1c30b4;
            case 0x1C30B8u: goto label_1c30b8;
            case 0x1C30BCu: goto label_1c30bc;
            case 0x1C30C0u: goto label_1c30c0;
            case 0x1C30C4u: goto label_1c30c4;
            case 0x1C30C8u: goto label_1c30c8;
            case 0x1C30CCu: goto label_1c30cc;
            case 0x1C30D0u: goto label_1c30d0;
            case 0x1C30D4u: goto label_1c30d4;
            case 0x1C30D8u: goto label_1c30d8;
            case 0x1C30DCu: goto label_1c30dc;
            case 0x1C30E0u: goto label_1c30e0;
            case 0x1C30E4u: goto label_1c30e4;
            case 0x1C30E8u: goto label_1c30e8;
            case 0x1C30ECu: goto label_1c30ec;
            case 0x1C30F0u: goto label_1c30f0;
            case 0x1C30F4u: goto label_1c30f4;
            case 0x1C30F8u: goto label_1c30f8;
            case 0x1C30FCu: goto label_1c30fc;
            case 0x1C3100u: goto label_1c3100;
            case 0x1C3104u: goto label_1c3104;
            case 0x1C3108u: goto label_1c3108;
            case 0x1C310Cu: goto label_1c310c;
            case 0x1C3110u: goto label_1c3110;
            case 0x1C3114u: goto label_1c3114;
            case 0x1C3118u: goto label_1c3118;
            case 0x1C311Cu: goto label_1c311c;
            case 0x1C3120u: goto label_1c3120;
            case 0x1C3124u: goto label_1c3124;
            case 0x1C3128u: goto label_1c3128;
            case 0x1C312Cu: goto label_1c312c;
            case 0x1C3130u: goto label_1c3130;
            case 0x1C3134u: goto label_1c3134;
            case 0x1C3138u: goto label_1c3138;
            case 0x1C313Cu: goto label_1c313c;
            case 0x1C3140u: goto label_1c3140;
            case 0x1C3144u: goto label_1c3144;
            case 0x1C3148u: goto label_1c3148;
            case 0x1C314Cu: goto label_1c314c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3144u;
label_1c3144:
    // 0x1c3144: 0x0
    ctx->pc = 0x1c3144u;
    // NOP
label_1c3148:
    // 0x1c3148: 0x0
    ctx->pc = 0x1c3148u;
    // NOP
label_1c314c:
    // 0x1c314c: 0x0
    ctx->pc = 0x1c314cu;
    // NOP
}
