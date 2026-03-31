#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8F40
// Address: 0x1b8f40 - 0x1b91e0
void sub_001B8F40_0x1b8f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8f40u;

label_1b8f40:
    // 0x1b8f40: 0x94820bb4
    ctx->pc = 0x1b8f40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2996)));
label_1b8f44:
    // 0x1b8f44: 0x10400008
label_1b8f48:
    if (ctx->pc == 0x1B8F48u) {
        ctx->pc = 0x1B8F48u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
        ctx->pc = 0x1B8F4Cu;
        goto label_1b8f4c;
    }
    ctx->pc = 0x1B8F44u;
    {
        const bool branch_taken_0x1b8f44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8F48u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b8f44) {
            ctx->pc = 0x1B8F68u;
            goto label_1b8f68;
        }
    }
    ctx->pc = 0x1B8F4Cu;
label_1b8f4c:
    // 0x1b8f4c: 0x3c020073
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)115 << 16));
label_1b8f50:
    // 0x1b8f50: 0x2463ffff
    ctx->pc = 0x1b8f50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b8f54:
    // 0x1b8f54: 0x244213c1
    ctx->pc = 0x1b8f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5057));
label_1b8f58:
    // 0x1b8f58: 0x31840
    ctx->pc = 0x1b8f58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_1b8f5c:
    // 0x1b8f5c: 0x431021
    ctx->pc = 0x1b8f5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8f60:
    // 0x1b8f60: 0x1000000a
label_1b8f64:
    if (ctx->pc == 0x1B8F64u) {
        ctx->pc = 0x1B8F64u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1B8F68u;
        goto label_1b8f68;
    }
    ctx->pc = 0x1B8F60u;
    {
        const bool branch_taken_0x1b8f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8F64u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1b8f60) {
            ctx->pc = 0x1B8F8Cu;
            goto label_1b8f8c;
        }
    }
    ctx->pc = 0x1B8F68u;
label_1b8f68:
    // 0x1b8f68: 0x90850bbc
    ctx->pc = 0x1b8f68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3004)));
label_1b8f6c:
    // 0x1b8f6c: 0x3c020073
    ctx->pc = 0x1b8f6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)115 << 16));
label_1b8f70:
    // 0x1b8f70: 0x90830b98
    ctx->pc = 0x1b8f70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2968)));
label_1b8f74:
    // 0x1b8f74: 0x244214f0
    ctx->pc = 0x1b8f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5360));
label_1b8f78:
    // 0x1b8f78: 0x452021
    ctx->pc = 0x1b8f78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b8f7c:
    // 0x1b8f7c: 0x31040
    ctx->pc = 0x1b8f7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_1b8f80:
    // 0x1b8f80: 0x431021
    ctx->pc = 0x1b8f80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8f84:
    // 0x1b8f84: 0x441021
    ctx->pc = 0x1b8f84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b8f88:
    // 0x1b8f88: 0x80420000
    ctx->pc = 0x1b8f88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b8f8c:
    // 0x1b8f8c: 0x3e00008
label_1b8f90:
    if (ctx->pc == 0x1B8F90u) {
        ctx->pc = 0x1B8F94u;
        goto label_1b8f94;
    }
    ctx->pc = 0x1B8F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8F40u: goto label_1b8f40;
            case 0x1B8F44u: goto label_1b8f44;
            case 0x1B8F48u: goto label_1b8f48;
            case 0x1B8F4Cu: goto label_1b8f4c;
            case 0x1B8F50u: goto label_1b8f50;
            case 0x1B8F54u: goto label_1b8f54;
            case 0x1B8F58u: goto label_1b8f58;
            case 0x1B8F5Cu: goto label_1b8f5c;
            case 0x1B8F60u: goto label_1b8f60;
            case 0x1B8F64u: goto label_1b8f64;
            case 0x1B8F68u: goto label_1b8f68;
            case 0x1B8F6Cu: goto label_1b8f6c;
            case 0x1B8F70u: goto label_1b8f70;
            case 0x1B8F74u: goto label_1b8f74;
            case 0x1B8F78u: goto label_1b8f78;
            case 0x1B8F7Cu: goto label_1b8f7c;
            case 0x1B8F80u: goto label_1b8f80;
            case 0x1B8F84u: goto label_1b8f84;
            case 0x1B8F88u: goto label_1b8f88;
            case 0x1B8F8Cu: goto label_1b8f8c;
            case 0x1B8F90u: goto label_1b8f90;
            case 0x1B8F94u: goto label_1b8f94;
            case 0x1B8F98u: goto label_1b8f98;
            case 0x1B8F9Cu: goto label_1b8f9c;
            case 0x1B8FA0u: goto label_1b8fa0;
            case 0x1B8FA4u: goto label_1b8fa4;
            case 0x1B8FA8u: goto label_1b8fa8;
            case 0x1B8FACu: goto label_1b8fac;
            case 0x1B8FB0u: goto label_1b8fb0;
            case 0x1B8FB4u: goto label_1b8fb4;
            case 0x1B8FB8u: goto label_1b8fb8;
            case 0x1B8FBCu: goto label_1b8fbc;
            case 0x1B8FC0u: goto label_1b8fc0;
            case 0x1B8FC4u: goto label_1b8fc4;
            case 0x1B8FC8u: goto label_1b8fc8;
            case 0x1B8FCCu: goto label_1b8fcc;
            case 0x1B8FD0u: goto label_1b8fd0;
            case 0x1B8FD4u: goto label_1b8fd4;
            case 0x1B8FD8u: goto label_1b8fd8;
            case 0x1B8FDCu: goto label_1b8fdc;
            case 0x1B8FE0u: goto label_1b8fe0;
            case 0x1B8FE4u: goto label_1b8fe4;
            case 0x1B8FE8u: goto label_1b8fe8;
            case 0x1B8FECu: goto label_1b8fec;
            case 0x1B8FF0u: goto label_1b8ff0;
            case 0x1B8FF4u: goto label_1b8ff4;
            case 0x1B8FF8u: goto label_1b8ff8;
            case 0x1B8FFCu: goto label_1b8ffc;
            case 0x1B9000u: goto label_1b9000;
            case 0x1B9004u: goto label_1b9004;
            case 0x1B9008u: goto label_1b9008;
            case 0x1B900Cu: goto label_1b900c;
            case 0x1B9010u: goto label_1b9010;
            case 0x1B9014u: goto label_1b9014;
            case 0x1B9018u: goto label_1b9018;
            case 0x1B901Cu: goto label_1b901c;
            case 0x1B9020u: goto label_1b9020;
            case 0x1B9024u: goto label_1b9024;
            case 0x1B9028u: goto label_1b9028;
            case 0x1B902Cu: goto label_1b902c;
            case 0x1B9030u: goto label_1b9030;
            case 0x1B9034u: goto label_1b9034;
            case 0x1B9038u: goto label_1b9038;
            case 0x1B903Cu: goto label_1b903c;
            case 0x1B9040u: goto label_1b9040;
            case 0x1B9044u: goto label_1b9044;
            case 0x1B9048u: goto label_1b9048;
            case 0x1B904Cu: goto label_1b904c;
            case 0x1B9050u: goto label_1b9050;
            case 0x1B9054u: goto label_1b9054;
            case 0x1B9058u: goto label_1b9058;
            case 0x1B905Cu: goto label_1b905c;
            case 0x1B9060u: goto label_1b9060;
            case 0x1B9064u: goto label_1b9064;
            case 0x1B9068u: goto label_1b9068;
            case 0x1B906Cu: goto label_1b906c;
            case 0x1B9070u: goto label_1b9070;
            case 0x1B9074u: goto label_1b9074;
            case 0x1B9078u: goto label_1b9078;
            case 0x1B907Cu: goto label_1b907c;
            case 0x1B9080u: goto label_1b9080;
            case 0x1B9084u: goto label_1b9084;
            case 0x1B9088u: goto label_1b9088;
            case 0x1B908Cu: goto label_1b908c;
            case 0x1B9090u: goto label_1b9090;
            case 0x1B9094u: goto label_1b9094;
            case 0x1B9098u: goto label_1b9098;
            case 0x1B909Cu: goto label_1b909c;
            case 0x1B90A0u: goto label_1b90a0;
            case 0x1B90A4u: goto label_1b90a4;
            case 0x1B90A8u: goto label_1b90a8;
            case 0x1B90ACu: goto label_1b90ac;
            case 0x1B90B0u: goto label_1b90b0;
            case 0x1B90B4u: goto label_1b90b4;
            case 0x1B90B8u: goto label_1b90b8;
            case 0x1B90BCu: goto label_1b90bc;
            case 0x1B90C0u: goto label_1b90c0;
            case 0x1B90C4u: goto label_1b90c4;
            case 0x1B90C8u: goto label_1b90c8;
            case 0x1B90CCu: goto label_1b90cc;
            case 0x1B90D0u: goto label_1b90d0;
            case 0x1B90D4u: goto label_1b90d4;
            case 0x1B90D8u: goto label_1b90d8;
            case 0x1B90DCu: goto label_1b90dc;
            case 0x1B90E0u: goto label_1b90e0;
            case 0x1B90E4u: goto label_1b90e4;
            case 0x1B90E8u: goto label_1b90e8;
            case 0x1B90ECu: goto label_1b90ec;
            case 0x1B90F0u: goto label_1b90f0;
            case 0x1B90F4u: goto label_1b90f4;
            case 0x1B90F8u: goto label_1b90f8;
            case 0x1B90FCu: goto label_1b90fc;
            case 0x1B9100u: goto label_1b9100;
            case 0x1B9104u: goto label_1b9104;
            case 0x1B9108u: goto label_1b9108;
            case 0x1B910Cu: goto label_1b910c;
            case 0x1B9110u: goto label_1b9110;
            case 0x1B9114u: goto label_1b9114;
            case 0x1B9118u: goto label_1b9118;
            case 0x1B911Cu: goto label_1b911c;
            case 0x1B9120u: goto label_1b9120;
            case 0x1B9124u: goto label_1b9124;
            case 0x1B9128u: goto label_1b9128;
            case 0x1B912Cu: goto label_1b912c;
            case 0x1B9130u: goto label_1b9130;
            case 0x1B9134u: goto label_1b9134;
            case 0x1B9138u: goto label_1b9138;
            case 0x1B913Cu: goto label_1b913c;
            case 0x1B9140u: goto label_1b9140;
            case 0x1B9144u: goto label_1b9144;
            case 0x1B9148u: goto label_1b9148;
            case 0x1B914Cu: goto label_1b914c;
            case 0x1B9150u: goto label_1b9150;
            case 0x1B9154u: goto label_1b9154;
            case 0x1B9158u: goto label_1b9158;
            case 0x1B915Cu: goto label_1b915c;
            case 0x1B9160u: goto label_1b9160;
            case 0x1B9164u: goto label_1b9164;
            case 0x1B9168u: goto label_1b9168;
            case 0x1B916Cu: goto label_1b916c;
            case 0x1B9170u: goto label_1b9170;
            case 0x1B9174u: goto label_1b9174;
            case 0x1B9178u: goto label_1b9178;
            case 0x1B917Cu: goto label_1b917c;
            case 0x1B9180u: goto label_1b9180;
            case 0x1B9184u: goto label_1b9184;
            case 0x1B9188u: goto label_1b9188;
            case 0x1B918Cu: goto label_1b918c;
            case 0x1B9190u: goto label_1b9190;
            case 0x1B9194u: goto label_1b9194;
            case 0x1B9198u: goto label_1b9198;
            case 0x1B919Cu: goto label_1b919c;
            case 0x1B91A0u: goto label_1b91a0;
            case 0x1B91A4u: goto label_1b91a4;
            case 0x1B91A8u: goto label_1b91a8;
            case 0x1B91ACu: goto label_1b91ac;
            case 0x1B91B0u: goto label_1b91b0;
            case 0x1B91B4u: goto label_1b91b4;
            case 0x1B91B8u: goto label_1b91b8;
            case 0x1B91BCu: goto label_1b91bc;
            case 0x1B91C0u: goto label_1b91c0;
            case 0x1B91C4u: goto label_1b91c4;
            case 0x1B91C8u: goto label_1b91c8;
            case 0x1B91CCu: goto label_1b91cc;
            case 0x1B91D0u: goto label_1b91d0;
            case 0x1B91D4u: goto label_1b91d4;
            case 0x1B91D8u: goto label_1b91d8;
            case 0x1B91DCu: goto label_1b91dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B8F94u;
label_1b8f94:
    // 0x1b8f94: 0x0
    ctx->pc = 0x1b8f94u;
    // NOP
label_1b8f98:
    // 0x1b8f98: 0x0
    ctx->pc = 0x1b8f98u;
    // NOP
label_1b8f9c:
    // 0x1b8f9c: 0x0
    ctx->pc = 0x1b8f9cu;
    // NOP
label_1b8fa0:
    // 0x1b8fa0: 0x90860003
    ctx->pc = 0x1b8fa0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1b8fa4:
    // 0x1b8fa4: 0x24870038
    ctx->pc = 0x1b8fa4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 56));
label_1b8fa8:
    // 0x1b8fa8: 0x24080001
    ctx->pc = 0x1b8fa8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b8fac:
    // 0x1b8fac: 0x482d
    ctx->pc = 0x1b8facu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fb0:
    // 0x1b8fb0: 0x502d
    ctx->pc = 0x1b8fb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fb4:
    // 0x1b8fb4: 0x806e4f4
label_1b8fb8:
    if (ctx->pc == 0x1B8FB8u) {
        ctx->pc = 0x1B8FB8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1B8FBCu;
        goto label_1b8fbc;
    }
    ctx->pc = 0x1B8FB4u;
    ctx->pc = 0x1B8FB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1B93D0u;
    sub_001B93D0_0x1b93d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1B8FBCu;
label_1b8fbc:
    // 0x1b8fbc: 0x0
    ctx->pc = 0x1b8fbcu;
    // NOP
label_1b8fc0:
    // 0x1b8fc0: 0x27bdffc0
    ctx->pc = 0x1b8fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b8fc4:
    // 0x1b8fc4: 0xffbf0020
    ctx->pc = 0x1b8fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b8fc8:
    // 0x1b8fc8: 0x7fb10010
    ctx->pc = 0x1b8fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8fcc:
    // 0x1b8fcc: 0x80882d
    ctx->pc = 0x1b8fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8fd0:
    // 0x1b8fd0: 0x7fb00000
    ctx->pc = 0x1b8fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8fd4:
    // 0x1b8fd4: 0xc06bb20
label_1b8fd8:
    if (ctx->pc == 0x1B8FD8u) {
        ctx->pc = 0x1B8FD8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B8FDCu;
        goto label_1b8fdc;
    }
    ctx->pc = 0x1B8FD4u;
    SET_GPR_U32(ctx, 31, 0x1B8FDCu);
    ctx->pc = 0x1B8FD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AEC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC80_0x1aec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8FDCu; }
    }
    if (ctx->pc != 0x1B8FDCu) { return; }
    ctx->pc = 0x1B8FDCu;
label_1b8fdc:
    // 0x1b8fdc: 0x3043ffff
    ctx->pc = 0x1b8fdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
label_1b8fe0:
    // 0x1b8fe0: 0x92220b98
    ctx->pc = 0x1b8fe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2968)));
label_1b8fe4:
    // 0x1b8fe4: 0x2c410008
    ctx->pc = 0x1b8fe4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 8));
label_1b8fe8:
    // 0x1b8fe8: 0x10200013
label_1b8fec:
    if (ctx->pc == 0x1B8FECu) {
        ctx->pc = 0x1B8FECu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x1B8FF0u;
        goto label_1b8ff0;
    }
    ctx->pc = 0x1B8FE8u;
    {
        const bool branch_taken_0x1b8fe8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B8FECu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1b8fe8) {
            ctx->pc = 0x1B9038u;
            goto label_1b9038;
        }
    }
    ctx->pc = 0x1B8FF0u;
label_1b8ff0:
    // 0x1b8ff0: 0x3c030025
    ctx->pc = 0x1b8ff0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
label_1b8ff4:
    // 0x1b8ff4: 0x21080
    ctx->pc = 0x1b8ff4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1b8ff8:
    // 0x1b8ff8: 0x24630190
    ctx->pc = 0x1b8ff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 400));
label_1b8ffc:
    // 0x1b8ffc: 0x431021
    ctx->pc = 0x1b8ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9000:
    // 0x1b9000: 0x8c420000
    ctx->pc = 0x1b9000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9004:
    // 0x1b9004: 0x400008
label_1b9008:
    if (ctx->pc == 0x1B9008u) {
        ctx->pc = 0x1B900Cu;
        goto label_1b900c;
    }
    ctx->pc = 0x1B9004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8F40u: goto label_1b8f40;
            case 0x1B8F44u: goto label_1b8f44;
            case 0x1B8F48u: goto label_1b8f48;
            case 0x1B8F4Cu: goto label_1b8f4c;
            case 0x1B8F50u: goto label_1b8f50;
            case 0x1B8F54u: goto label_1b8f54;
            case 0x1B8F58u: goto label_1b8f58;
            case 0x1B8F5Cu: goto label_1b8f5c;
            case 0x1B8F60u: goto label_1b8f60;
            case 0x1B8F64u: goto label_1b8f64;
            case 0x1B8F68u: goto label_1b8f68;
            case 0x1B8F6Cu: goto label_1b8f6c;
            case 0x1B8F70u: goto label_1b8f70;
            case 0x1B8F74u: goto label_1b8f74;
            case 0x1B8F78u: goto label_1b8f78;
            case 0x1B8F7Cu: goto label_1b8f7c;
            case 0x1B8F80u: goto label_1b8f80;
            case 0x1B8F84u: goto label_1b8f84;
            case 0x1B8F88u: goto label_1b8f88;
            case 0x1B8F8Cu: goto label_1b8f8c;
            case 0x1B8F90u: goto label_1b8f90;
            case 0x1B8F94u: goto label_1b8f94;
            case 0x1B8F98u: goto label_1b8f98;
            case 0x1B8F9Cu: goto label_1b8f9c;
            case 0x1B8FA0u: goto label_1b8fa0;
            case 0x1B8FA4u: goto label_1b8fa4;
            case 0x1B8FA8u: goto label_1b8fa8;
            case 0x1B8FACu: goto label_1b8fac;
            case 0x1B8FB0u: goto label_1b8fb0;
            case 0x1B8FB4u: goto label_1b8fb4;
            case 0x1B8FB8u: goto label_1b8fb8;
            case 0x1B8FBCu: goto label_1b8fbc;
            case 0x1B8FC0u: goto label_1b8fc0;
            case 0x1B8FC4u: goto label_1b8fc4;
            case 0x1B8FC8u: goto label_1b8fc8;
            case 0x1B8FCCu: goto label_1b8fcc;
            case 0x1B8FD0u: goto label_1b8fd0;
            case 0x1B8FD4u: goto label_1b8fd4;
            case 0x1B8FD8u: goto label_1b8fd8;
            case 0x1B8FDCu: goto label_1b8fdc;
            case 0x1B8FE0u: goto label_1b8fe0;
            case 0x1B8FE4u: goto label_1b8fe4;
            case 0x1B8FE8u: goto label_1b8fe8;
            case 0x1B8FECu: goto label_1b8fec;
            case 0x1B8FF0u: goto label_1b8ff0;
            case 0x1B8FF4u: goto label_1b8ff4;
            case 0x1B8FF8u: goto label_1b8ff8;
            case 0x1B8FFCu: goto label_1b8ffc;
            case 0x1B9000u: goto label_1b9000;
            case 0x1B9004u: goto label_1b9004;
            case 0x1B9008u: goto label_1b9008;
            case 0x1B900Cu: goto label_1b900c;
            case 0x1B9010u: goto label_1b9010;
            case 0x1B9014u: goto label_1b9014;
            case 0x1B9018u: goto label_1b9018;
            case 0x1B901Cu: goto label_1b901c;
            case 0x1B9020u: goto label_1b9020;
            case 0x1B9024u: goto label_1b9024;
            case 0x1B9028u: goto label_1b9028;
            case 0x1B902Cu: goto label_1b902c;
            case 0x1B9030u: goto label_1b9030;
            case 0x1B9034u: goto label_1b9034;
            case 0x1B9038u: goto label_1b9038;
            case 0x1B903Cu: goto label_1b903c;
            case 0x1B9040u: goto label_1b9040;
            case 0x1B9044u: goto label_1b9044;
            case 0x1B9048u: goto label_1b9048;
            case 0x1B904Cu: goto label_1b904c;
            case 0x1B9050u: goto label_1b9050;
            case 0x1B9054u: goto label_1b9054;
            case 0x1B9058u: goto label_1b9058;
            case 0x1B905Cu: goto label_1b905c;
            case 0x1B9060u: goto label_1b9060;
            case 0x1B9064u: goto label_1b9064;
            case 0x1B9068u: goto label_1b9068;
            case 0x1B906Cu: goto label_1b906c;
            case 0x1B9070u: goto label_1b9070;
            case 0x1B9074u: goto label_1b9074;
            case 0x1B9078u: goto label_1b9078;
            case 0x1B907Cu: goto label_1b907c;
            case 0x1B9080u: goto label_1b9080;
            case 0x1B9084u: goto label_1b9084;
            case 0x1B9088u: goto label_1b9088;
            case 0x1B908Cu: goto label_1b908c;
            case 0x1B9090u: goto label_1b9090;
            case 0x1B9094u: goto label_1b9094;
            case 0x1B9098u: goto label_1b9098;
            case 0x1B909Cu: goto label_1b909c;
            case 0x1B90A0u: goto label_1b90a0;
            case 0x1B90A4u: goto label_1b90a4;
            case 0x1B90A8u: goto label_1b90a8;
            case 0x1B90ACu: goto label_1b90ac;
            case 0x1B90B0u: goto label_1b90b0;
            case 0x1B90B4u: goto label_1b90b4;
            case 0x1B90B8u: goto label_1b90b8;
            case 0x1B90BCu: goto label_1b90bc;
            case 0x1B90C0u: goto label_1b90c0;
            case 0x1B90C4u: goto label_1b90c4;
            case 0x1B90C8u: goto label_1b90c8;
            case 0x1B90CCu: goto label_1b90cc;
            case 0x1B90D0u: goto label_1b90d0;
            case 0x1B90D4u: goto label_1b90d4;
            case 0x1B90D8u: goto label_1b90d8;
            case 0x1B90DCu: goto label_1b90dc;
            case 0x1B90E0u: goto label_1b90e0;
            case 0x1B90E4u: goto label_1b90e4;
            case 0x1B90E8u: goto label_1b90e8;
            case 0x1B90ECu: goto label_1b90ec;
            case 0x1B90F0u: goto label_1b90f0;
            case 0x1B90F4u: goto label_1b90f4;
            case 0x1B90F8u: goto label_1b90f8;
            case 0x1B90FCu: goto label_1b90fc;
            case 0x1B9100u: goto label_1b9100;
            case 0x1B9104u: goto label_1b9104;
            case 0x1B9108u: goto label_1b9108;
            case 0x1B910Cu: goto label_1b910c;
            case 0x1B9110u: goto label_1b9110;
            case 0x1B9114u: goto label_1b9114;
            case 0x1B9118u: goto label_1b9118;
            case 0x1B911Cu: goto label_1b911c;
            case 0x1B9120u: goto label_1b9120;
            case 0x1B9124u: goto label_1b9124;
            case 0x1B9128u: goto label_1b9128;
            case 0x1B912Cu: goto label_1b912c;
            case 0x1B9130u: goto label_1b9130;
            case 0x1B9134u: goto label_1b9134;
            case 0x1B9138u: goto label_1b9138;
            case 0x1B913Cu: goto label_1b913c;
            case 0x1B9140u: goto label_1b9140;
            case 0x1B9144u: goto label_1b9144;
            case 0x1B9148u: goto label_1b9148;
            case 0x1B914Cu: goto label_1b914c;
            case 0x1B9150u: goto label_1b9150;
            case 0x1B9154u: goto label_1b9154;
            case 0x1B9158u: goto label_1b9158;
            case 0x1B915Cu: goto label_1b915c;
            case 0x1B9160u: goto label_1b9160;
            case 0x1B9164u: goto label_1b9164;
            case 0x1B9168u: goto label_1b9168;
            case 0x1B916Cu: goto label_1b916c;
            case 0x1B9170u: goto label_1b9170;
            case 0x1B9174u: goto label_1b9174;
            case 0x1B9178u: goto label_1b9178;
            case 0x1B917Cu: goto label_1b917c;
            case 0x1B9180u: goto label_1b9180;
            case 0x1B9184u: goto label_1b9184;
            case 0x1B9188u: goto label_1b9188;
            case 0x1B918Cu: goto label_1b918c;
            case 0x1B9190u: goto label_1b9190;
            case 0x1B9194u: goto label_1b9194;
            case 0x1B9198u: goto label_1b9198;
            case 0x1B919Cu: goto label_1b919c;
            case 0x1B91A0u: goto label_1b91a0;
            case 0x1B91A4u: goto label_1b91a4;
            case 0x1B91A8u: goto label_1b91a8;
            case 0x1B91ACu: goto label_1b91ac;
            case 0x1B91B0u: goto label_1b91b0;
            case 0x1B91B4u: goto label_1b91b4;
            case 0x1B91B8u: goto label_1b91b8;
            case 0x1B91BCu: goto label_1b91bc;
            case 0x1B91C0u: goto label_1b91c0;
            case 0x1B91C4u: goto label_1b91c4;
            case 0x1B91C8u: goto label_1b91c8;
            case 0x1B91CCu: goto label_1b91cc;
            case 0x1B91D0u: goto label_1b91d0;
            case 0x1B91D4u: goto label_1b91d4;
            case 0x1B91D8u: goto label_1b91d8;
            case 0x1B91DCu: goto label_1b91dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B900Cu;
label_1b900c:
    // 0x1b900c: 0x3082ffff
    ctx->pc = 0x1b900cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
label_1b9010:
    // 0x1b9010: 0x2442000a
    ctx->pc = 0x1b9010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10));
label_1b9014:
    // 0x1b9014: 0x10000008
label_1b9018:
    if (ctx->pc == 0x1B9018u) {
        ctx->pc = 0x1B9018u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
        ctx->pc = 0x1B901Cu;
        goto label_1b901c;
    }
    ctx->pc = 0x1B9014u;
    {
        const bool branch_taken_0x1b9014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9018u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b9014) {
            ctx->pc = 0x1B9038u;
            goto label_1b9038;
        }
    }
    ctx->pc = 0x1B901Cu;
label_1b901c:
    // 0x1b901c: 0x3082ffff
    ctx->pc = 0x1b901cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
label_1b9020:
    // 0x1b9020: 0x2442000c
    ctx->pc = 0x1b9020u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
label_1b9024:
    // 0x1b9024: 0x10000004
label_1b9028:
    if (ctx->pc == 0x1B9028u) {
        ctx->pc = 0x1B9028u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
        ctx->pc = 0x1B902Cu;
        goto label_1b902c;
    }
    ctx->pc = 0x1B9024u;
    {
        const bool branch_taken_0x1b9024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B9028u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x1b9024) {
            ctx->pc = 0x1B9038u;
            goto label_1b9038;
        }
    }
    ctx->pc = 0x1B902Cu;
label_1b902c:
    // 0x1b902c: 0x3082ffff
    ctx->pc = 0x1b902cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
label_1b9030:
    // 0x1b9030: 0x2442000e
    ctx->pc = 0x1b9030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_1b9034:
    // 0x1b9034: 0x3050ffff
    ctx->pc = 0x1b9034u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
label_1b9038:
    // 0x1b9038: 0xc6220038
    ctx->pc = 0x1b9038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b903c:
    // 0x1b903c: 0x27a70030
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
label_1b9040:
    // 0x1b9040: 0xc621003c
    ctx->pc = 0x1b9040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9044:
    // 0x1b9044: 0x3205ffff
    ctx->pc = 0x1b9044u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 65535));
label_1b9048:
    // 0x1b9048: 0xc6200040
    ctx->pc = 0x1b9048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b904c:
    // 0x1b904c: 0x2404000c
    ctx->pc = 0x1b904cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
label_1b9050:
    // 0x1b9050: 0x24080001
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_1b9054:
    // 0x1b9054: 0x482d
    ctx->pc = 0x1b9054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9058:
    // 0x1b9058: 0xe4e20000
    ctx->pc = 0x1b9058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1b905c:
    // 0x1b905c: 0xe4e10004
    ctx->pc = 0x1b905cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1b9060:
    // 0x1b9060: 0xe4e00008
    ctx->pc = 0x1b9060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1b9064:
    // 0x1b9064: 0x92260003
    ctx->pc = 0x1b9064u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1b9068:
    // 0x1b9068: 0xc06e4f4
label_1b906c:
    if (ctx->pc == 0x1B906Cu) {
        ctx->pc = 0x1B906Cu;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B9070u;
        goto label_1b9070;
    }
    ctx->pc = 0x1B9068u;
    SET_GPR_U32(ctx, 31, 0x1B9070u);
    ctx->pc = 0x1B906Cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1B93D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B93D0_0x1b93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9070u; }
    }
    if (ctx->pc != 0x1B9070u) { return; }
    ctx->pc = 0x1B9070u;
label_1b9070:
    // 0x1b9070: 0xdfbf0020
    ctx->pc = 0x1b9070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9074:
    // 0x1b9074: 0x7bb10010
    ctx->pc = 0x1b9074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9078:
    // 0x1b9078: 0x7bb00000
    ctx->pc = 0x1b9078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b907c:
    // 0x1b907c: 0x3e00008
label_1b9080:
    if (ctx->pc == 0x1B9080u) {
        ctx->pc = 0x1B9080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B9084u;
        goto label_1b9084;
    }
    ctx->pc = 0x1B907Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9080u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8F40u: goto label_1b8f40;
            case 0x1B8F44u: goto label_1b8f44;
            case 0x1B8F48u: goto label_1b8f48;
            case 0x1B8F4Cu: goto label_1b8f4c;
            case 0x1B8F50u: goto label_1b8f50;
            case 0x1B8F54u: goto label_1b8f54;
            case 0x1B8F58u: goto label_1b8f58;
            case 0x1B8F5Cu: goto label_1b8f5c;
            case 0x1B8F60u: goto label_1b8f60;
            case 0x1B8F64u: goto label_1b8f64;
            case 0x1B8F68u: goto label_1b8f68;
            case 0x1B8F6Cu: goto label_1b8f6c;
            case 0x1B8F70u: goto label_1b8f70;
            case 0x1B8F74u: goto label_1b8f74;
            case 0x1B8F78u: goto label_1b8f78;
            case 0x1B8F7Cu: goto label_1b8f7c;
            case 0x1B8F80u: goto label_1b8f80;
            case 0x1B8F84u: goto label_1b8f84;
            case 0x1B8F88u: goto label_1b8f88;
            case 0x1B8F8Cu: goto label_1b8f8c;
            case 0x1B8F90u: goto label_1b8f90;
            case 0x1B8F94u: goto label_1b8f94;
            case 0x1B8F98u: goto label_1b8f98;
            case 0x1B8F9Cu: goto label_1b8f9c;
            case 0x1B8FA0u: goto label_1b8fa0;
            case 0x1B8FA4u: goto label_1b8fa4;
            case 0x1B8FA8u: goto label_1b8fa8;
            case 0x1B8FACu: goto label_1b8fac;
            case 0x1B8FB0u: goto label_1b8fb0;
            case 0x1B8FB4u: goto label_1b8fb4;
            case 0x1B8FB8u: goto label_1b8fb8;
            case 0x1B8FBCu: goto label_1b8fbc;
            case 0x1B8FC0u: goto label_1b8fc0;
            case 0x1B8FC4u: goto label_1b8fc4;
            case 0x1B8FC8u: goto label_1b8fc8;
            case 0x1B8FCCu: goto label_1b8fcc;
            case 0x1B8FD0u: goto label_1b8fd0;
            case 0x1B8FD4u: goto label_1b8fd4;
            case 0x1B8FD8u: goto label_1b8fd8;
            case 0x1B8FDCu: goto label_1b8fdc;
            case 0x1B8FE0u: goto label_1b8fe0;
            case 0x1B8FE4u: goto label_1b8fe4;
            case 0x1B8FE8u: goto label_1b8fe8;
            case 0x1B8FECu: goto label_1b8fec;
            case 0x1B8FF0u: goto label_1b8ff0;
            case 0x1B8FF4u: goto label_1b8ff4;
            case 0x1B8FF8u: goto label_1b8ff8;
            case 0x1B8FFCu: goto label_1b8ffc;
            case 0x1B9000u: goto label_1b9000;
            case 0x1B9004u: goto label_1b9004;
            case 0x1B9008u: goto label_1b9008;
            case 0x1B900Cu: goto label_1b900c;
            case 0x1B9010u: goto label_1b9010;
            case 0x1B9014u: goto label_1b9014;
            case 0x1B9018u: goto label_1b9018;
            case 0x1B901Cu: goto label_1b901c;
            case 0x1B9020u: goto label_1b9020;
            case 0x1B9024u: goto label_1b9024;
            case 0x1B9028u: goto label_1b9028;
            case 0x1B902Cu: goto label_1b902c;
            case 0x1B9030u: goto label_1b9030;
            case 0x1B9034u: goto label_1b9034;
            case 0x1B9038u: goto label_1b9038;
            case 0x1B903Cu: goto label_1b903c;
            case 0x1B9040u: goto label_1b9040;
            case 0x1B9044u: goto label_1b9044;
            case 0x1B9048u: goto label_1b9048;
            case 0x1B904Cu: goto label_1b904c;
            case 0x1B9050u: goto label_1b9050;
            case 0x1B9054u: goto label_1b9054;
            case 0x1B9058u: goto label_1b9058;
            case 0x1B905Cu: goto label_1b905c;
            case 0x1B9060u: goto label_1b9060;
            case 0x1B9064u: goto label_1b9064;
            case 0x1B9068u: goto label_1b9068;
            case 0x1B906Cu: goto label_1b906c;
            case 0x1B9070u: goto label_1b9070;
            case 0x1B9074u: goto label_1b9074;
            case 0x1B9078u: goto label_1b9078;
            case 0x1B907Cu: goto label_1b907c;
            case 0x1B9080u: goto label_1b9080;
            case 0x1B9084u: goto label_1b9084;
            case 0x1B9088u: goto label_1b9088;
            case 0x1B908Cu: goto label_1b908c;
            case 0x1B9090u: goto label_1b9090;
            case 0x1B9094u: goto label_1b9094;
            case 0x1B9098u: goto label_1b9098;
            case 0x1B909Cu: goto label_1b909c;
            case 0x1B90A0u: goto label_1b90a0;
            case 0x1B90A4u: goto label_1b90a4;
            case 0x1B90A8u: goto label_1b90a8;
            case 0x1B90ACu: goto label_1b90ac;
            case 0x1B90B0u: goto label_1b90b0;
            case 0x1B90B4u: goto label_1b90b4;
            case 0x1B90B8u: goto label_1b90b8;
            case 0x1B90BCu: goto label_1b90bc;
            case 0x1B90C0u: goto label_1b90c0;
            case 0x1B90C4u: goto label_1b90c4;
            case 0x1B90C8u: goto label_1b90c8;
            case 0x1B90CCu: goto label_1b90cc;
            case 0x1B90D0u: goto label_1b90d0;
            case 0x1B90D4u: goto label_1b90d4;
            case 0x1B90D8u: goto label_1b90d8;
            case 0x1B90DCu: goto label_1b90dc;
            case 0x1B90E0u: goto label_1b90e0;
            case 0x1B90E4u: goto label_1b90e4;
            case 0x1B90E8u: goto label_1b90e8;
            case 0x1B90ECu: goto label_1b90ec;
            case 0x1B90F0u: goto label_1b90f0;
            case 0x1B90F4u: goto label_1b90f4;
            case 0x1B90F8u: goto label_1b90f8;
            case 0x1B90FCu: goto label_1b90fc;
            case 0x1B9100u: goto label_1b9100;
            case 0x1B9104u: goto label_1b9104;
            case 0x1B9108u: goto label_1b9108;
            case 0x1B910Cu: goto label_1b910c;
            case 0x1B9110u: goto label_1b9110;
            case 0x1B9114u: goto label_1b9114;
            case 0x1B9118u: goto label_1b9118;
            case 0x1B911Cu: goto label_1b911c;
            case 0x1B9120u: goto label_1b9120;
            case 0x1B9124u: goto label_1b9124;
            case 0x1B9128u: goto label_1b9128;
            case 0x1B912Cu: goto label_1b912c;
            case 0x1B9130u: goto label_1b9130;
            case 0x1B9134u: goto label_1b9134;
            case 0x1B9138u: goto label_1b9138;
            case 0x1B913Cu: goto label_1b913c;
            case 0x1B9140u: goto label_1b9140;
            case 0x1B9144u: goto label_1b9144;
            case 0x1B9148u: goto label_1b9148;
            case 0x1B914Cu: goto label_1b914c;
            case 0x1B9150u: goto label_1b9150;
            case 0x1B9154u: goto label_1b9154;
            case 0x1B9158u: goto label_1b9158;
            case 0x1B915Cu: goto label_1b915c;
            case 0x1B9160u: goto label_1b9160;
            case 0x1B9164u: goto label_1b9164;
            case 0x1B9168u: goto label_1b9168;
            case 0x1B916Cu: goto label_1b916c;
            case 0x1B9170u: goto label_1b9170;
            case 0x1B9174u: goto label_1b9174;
            case 0x1B9178u: goto label_1b9178;
            case 0x1B917Cu: goto label_1b917c;
            case 0x1B9180u: goto label_1b9180;
            case 0x1B9184u: goto label_1b9184;
            case 0x1B9188u: goto label_1b9188;
            case 0x1B918Cu: goto label_1b918c;
            case 0x1B9190u: goto label_1b9190;
            case 0x1B9194u: goto label_1b9194;
            case 0x1B9198u: goto label_1b9198;
            case 0x1B919Cu: goto label_1b919c;
            case 0x1B91A0u: goto label_1b91a0;
            case 0x1B91A4u: goto label_1b91a4;
            case 0x1B91A8u: goto label_1b91a8;
            case 0x1B91ACu: goto label_1b91ac;
            case 0x1B91B0u: goto label_1b91b0;
            case 0x1B91B4u: goto label_1b91b4;
            case 0x1B91B8u: goto label_1b91b8;
            case 0x1B91BCu: goto label_1b91bc;
            case 0x1B91C0u: goto label_1b91c0;
            case 0x1B91C4u: goto label_1b91c4;
            case 0x1B91C8u: goto label_1b91c8;
            case 0x1B91CCu: goto label_1b91cc;
            case 0x1B91D0u: goto label_1b91d0;
            case 0x1B91D4u: goto label_1b91d4;
            case 0x1B91D8u: goto label_1b91d8;
            case 0x1B91DCu: goto label_1b91dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9084u;
label_1b9084:
    // 0x1b9084: 0x0
    ctx->pc = 0x1b9084u;
    // NOP
label_1b9088:
    // 0x1b9088: 0x0
    ctx->pc = 0x1b9088u;
    // NOP
label_1b908c:
    // 0x1b908c: 0x0
    ctx->pc = 0x1b908cu;
    // NOP
label_1b9090:
    // 0x1b9090: 0x27bdfff0
    ctx->pc = 0x1b9090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b9094:
    // 0x1b9094: 0xffbf0000
    ctx->pc = 0x1b9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9098:
    // 0x1b9098: 0xc15d1a0
label_1b909c:
    if (ctx->pc == 0x1B909Cu) {
        ctx->pc = 0x1B909Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 56));
        ctx->pc = 0x1B90A0u;
        goto label_1b90a0;
    }
    ctx->pc = 0x1B9098u;
    SET_GPR_U32(ctx, 31, 0x1B90A0u);
    ctx->pc = 0x1B909Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 56));
    ctx->pc = 0x574680u;
    {
        auto targetFn = runtime->lookupFunction(0x574680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90A0u; }
        if (ctx->pc != 0x1B90A0u) { return; }
    }
    ctx->pc = 0x1B90A0u;
label_1b90a0:
    // 0x1b90a0: 0xdfbf0000
    ctx->pc = 0x1b90a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b90a4:
    // 0x1b90a4: 0x304200ff
    ctx->pc = 0x1b90a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1b90a8:
    // 0x1b90a8: 0x38420001
    ctx->pc = 0x1b90a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_1b90ac:
    // 0x1b90ac: 0x2102b
    ctx->pc = 0x1b90acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b90b0:
    // 0x1b90b0: 0x3e00008
label_1b90b4:
    if (ctx->pc == 0x1B90B4u) {
        ctx->pc = 0x1B90B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B90B8u;
        goto label_1b90b8;
    }
    ctx->pc = 0x1B90B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B90B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8F40u: goto label_1b8f40;
            case 0x1B8F44u: goto label_1b8f44;
            case 0x1B8F48u: goto label_1b8f48;
            case 0x1B8F4Cu: goto label_1b8f4c;
            case 0x1B8F50u: goto label_1b8f50;
            case 0x1B8F54u: goto label_1b8f54;
            case 0x1B8F58u: goto label_1b8f58;
            case 0x1B8F5Cu: goto label_1b8f5c;
            case 0x1B8F60u: goto label_1b8f60;
            case 0x1B8F64u: goto label_1b8f64;
            case 0x1B8F68u: goto label_1b8f68;
            case 0x1B8F6Cu: goto label_1b8f6c;
            case 0x1B8F70u: goto label_1b8f70;
            case 0x1B8F74u: goto label_1b8f74;
            case 0x1B8F78u: goto label_1b8f78;
            case 0x1B8F7Cu: goto label_1b8f7c;
            case 0x1B8F80u: goto label_1b8f80;
            case 0x1B8F84u: goto label_1b8f84;
            case 0x1B8F88u: goto label_1b8f88;
            case 0x1B8F8Cu: goto label_1b8f8c;
            case 0x1B8F90u: goto label_1b8f90;
            case 0x1B8F94u: goto label_1b8f94;
            case 0x1B8F98u: goto label_1b8f98;
            case 0x1B8F9Cu: goto label_1b8f9c;
            case 0x1B8FA0u: goto label_1b8fa0;
            case 0x1B8FA4u: goto label_1b8fa4;
            case 0x1B8FA8u: goto label_1b8fa8;
            case 0x1B8FACu: goto label_1b8fac;
            case 0x1B8FB0u: goto label_1b8fb0;
            case 0x1B8FB4u: goto label_1b8fb4;
            case 0x1B8FB8u: goto label_1b8fb8;
            case 0x1B8FBCu: goto label_1b8fbc;
            case 0x1B8FC0u: goto label_1b8fc0;
            case 0x1B8FC4u: goto label_1b8fc4;
            case 0x1B8FC8u: goto label_1b8fc8;
            case 0x1B8FCCu: goto label_1b8fcc;
            case 0x1B8FD0u: goto label_1b8fd0;
            case 0x1B8FD4u: goto label_1b8fd4;
            case 0x1B8FD8u: goto label_1b8fd8;
            case 0x1B8FDCu: goto label_1b8fdc;
            case 0x1B8FE0u: goto label_1b8fe0;
            case 0x1B8FE4u: goto label_1b8fe4;
            case 0x1B8FE8u: goto label_1b8fe8;
            case 0x1B8FECu: goto label_1b8fec;
            case 0x1B8FF0u: goto label_1b8ff0;
            case 0x1B8FF4u: goto label_1b8ff4;
            case 0x1B8FF8u: goto label_1b8ff8;
            case 0x1B8FFCu: goto label_1b8ffc;
            case 0x1B9000u: goto label_1b9000;
            case 0x1B9004u: goto label_1b9004;
            case 0x1B9008u: goto label_1b9008;
            case 0x1B900Cu: goto label_1b900c;
            case 0x1B9010u: goto label_1b9010;
            case 0x1B9014u: goto label_1b9014;
            case 0x1B9018u: goto label_1b9018;
            case 0x1B901Cu: goto label_1b901c;
            case 0x1B9020u: goto label_1b9020;
            case 0x1B9024u: goto label_1b9024;
            case 0x1B9028u: goto label_1b9028;
            case 0x1B902Cu: goto label_1b902c;
            case 0x1B9030u: goto label_1b9030;
            case 0x1B9034u: goto label_1b9034;
            case 0x1B9038u: goto label_1b9038;
            case 0x1B903Cu: goto label_1b903c;
            case 0x1B9040u: goto label_1b9040;
            case 0x1B9044u: goto label_1b9044;
            case 0x1B9048u: goto label_1b9048;
            case 0x1B904Cu: goto label_1b904c;
            case 0x1B9050u: goto label_1b9050;
            case 0x1B9054u: goto label_1b9054;
            case 0x1B9058u: goto label_1b9058;
            case 0x1B905Cu: goto label_1b905c;
            case 0x1B9060u: goto label_1b9060;
            case 0x1B9064u: goto label_1b9064;
            case 0x1B9068u: goto label_1b9068;
            case 0x1B906Cu: goto label_1b906c;
            case 0x1B9070u: goto label_1b9070;
            case 0x1B9074u: goto label_1b9074;
            case 0x1B9078u: goto label_1b9078;
            case 0x1B907Cu: goto label_1b907c;
            case 0x1B9080u: goto label_1b9080;
            case 0x1B9084u: goto label_1b9084;
            case 0x1B9088u: goto label_1b9088;
            case 0x1B908Cu: goto label_1b908c;
            case 0x1B9090u: goto label_1b9090;
            case 0x1B9094u: goto label_1b9094;
            case 0x1B9098u: goto label_1b9098;
            case 0x1B909Cu: goto label_1b909c;
            case 0x1B90A0u: goto label_1b90a0;
            case 0x1B90A4u: goto label_1b90a4;
            case 0x1B90A8u: goto label_1b90a8;
            case 0x1B90ACu: goto label_1b90ac;
            case 0x1B90B0u: goto label_1b90b0;
            case 0x1B90B4u: goto label_1b90b4;
            case 0x1B90B8u: goto label_1b90b8;
            case 0x1B90BCu: goto label_1b90bc;
            case 0x1B90C0u: goto label_1b90c0;
            case 0x1B90C4u: goto label_1b90c4;
            case 0x1B90C8u: goto label_1b90c8;
            case 0x1B90CCu: goto label_1b90cc;
            case 0x1B90D0u: goto label_1b90d0;
            case 0x1B90D4u: goto label_1b90d4;
            case 0x1B90D8u: goto label_1b90d8;
            case 0x1B90DCu: goto label_1b90dc;
            case 0x1B90E0u: goto label_1b90e0;
            case 0x1B90E4u: goto label_1b90e4;
            case 0x1B90E8u: goto label_1b90e8;
            case 0x1B90ECu: goto label_1b90ec;
            case 0x1B90F0u: goto label_1b90f0;
            case 0x1B90F4u: goto label_1b90f4;
            case 0x1B90F8u: goto label_1b90f8;
            case 0x1B90FCu: goto label_1b90fc;
            case 0x1B9100u: goto label_1b9100;
            case 0x1B9104u: goto label_1b9104;
            case 0x1B9108u: goto label_1b9108;
            case 0x1B910Cu: goto label_1b910c;
            case 0x1B9110u: goto label_1b9110;
            case 0x1B9114u: goto label_1b9114;
            case 0x1B9118u: goto label_1b9118;
            case 0x1B911Cu: goto label_1b911c;
            case 0x1B9120u: goto label_1b9120;
            case 0x1B9124u: goto label_1b9124;
            case 0x1B9128u: goto label_1b9128;
            case 0x1B912Cu: goto label_1b912c;
            case 0x1B9130u: goto label_1b9130;
            case 0x1B9134u: goto label_1b9134;
            case 0x1B9138u: goto label_1b9138;
            case 0x1B913Cu: goto label_1b913c;
            case 0x1B9140u: goto label_1b9140;
            case 0x1B9144u: goto label_1b9144;
            case 0x1B9148u: goto label_1b9148;
            case 0x1B914Cu: goto label_1b914c;
            case 0x1B9150u: goto label_1b9150;
            case 0x1B9154u: goto label_1b9154;
            case 0x1B9158u: goto label_1b9158;
            case 0x1B915Cu: goto label_1b915c;
            case 0x1B9160u: goto label_1b9160;
            case 0x1B9164u: goto label_1b9164;
            case 0x1B9168u: goto label_1b9168;
            case 0x1B916Cu: goto label_1b916c;
            case 0x1B9170u: goto label_1b9170;
            case 0x1B9174u: goto label_1b9174;
            case 0x1B9178u: goto label_1b9178;
            case 0x1B917Cu: goto label_1b917c;
            case 0x1B9180u: goto label_1b9180;
            case 0x1B9184u: goto label_1b9184;
            case 0x1B9188u: goto label_1b9188;
            case 0x1B918Cu: goto label_1b918c;
            case 0x1B9190u: goto label_1b9190;
            case 0x1B9194u: goto label_1b9194;
            case 0x1B9198u: goto label_1b9198;
            case 0x1B919Cu: goto label_1b919c;
            case 0x1B91A0u: goto label_1b91a0;
            case 0x1B91A4u: goto label_1b91a4;
            case 0x1B91A8u: goto label_1b91a8;
            case 0x1B91ACu: goto label_1b91ac;
            case 0x1B91B0u: goto label_1b91b0;
            case 0x1B91B4u: goto label_1b91b4;
            case 0x1B91B8u: goto label_1b91b8;
            case 0x1B91BCu: goto label_1b91bc;
            case 0x1B91C0u: goto label_1b91c0;
            case 0x1B91C4u: goto label_1b91c4;
            case 0x1B91C8u: goto label_1b91c8;
            case 0x1B91CCu: goto label_1b91cc;
            case 0x1B91D0u: goto label_1b91d0;
            case 0x1B91D4u: goto label_1b91d4;
            case 0x1B91D8u: goto label_1b91d8;
            case 0x1B91DCu: goto label_1b91dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B90B8u;
label_1b90b8:
    // 0x1b90b8: 0x0
    ctx->pc = 0x1b90b8u;
    // NOP
label_1b90bc:
    // 0x1b90bc: 0x0
    ctx->pc = 0x1b90bcu;
    // NOP
label_1b90c0:
    // 0x1b90c0: 0x27bdffc0
    ctx->pc = 0x1b90c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b90c4:
    // 0x1b90c4: 0xffbf0020
    ctx->pc = 0x1b90c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b90c8:
    // 0x1b90c8: 0x7fb10010
    ctx->pc = 0x1b90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b90cc:
    // 0x1b90cc: 0x7fb00000
    ctx->pc = 0x1b90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b90d0:
    // 0x1b90d0: 0xa0802d
    ctx->pc = 0x1b90d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b90d4:
    // 0x1b90d4: 0x12000012
label_1b90d8:
    if (ctx->pc == 0x1B90D8u) {
        ctx->pc = 0x1B90D8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B90DCu;
        goto label_1b90dc;
    }
    ctx->pc = 0x1B90D4u;
    {
        const bool branch_taken_0x1b90d4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B90D8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1b90d4) {
            ctx->pc = 0x1B9120u;
            goto label_1b9120;
        }
    }
    ctx->pc = 0x1B90DCu;
label_1b90dc:
    // 0x1b90dc: 0x92240c7c
    ctx->pc = 0x1b90dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3196)));
label_1b90e0:
    // 0x1b90e0: 0x240300ff
    ctx->pc = 0x1b90e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
label_1b90e4:
    // 0x1b90e4: 0x10830036
label_1b90e8:
    if (ctx->pc == 0x1B90E8u) {
        ctx->pc = 0x1B90ECu;
        goto label_1b90ec;
    }
    ctx->pc = 0x1B90E4u;
    {
        const bool branch_taken_0x1b90e4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1b90e4) {
            ctx->pc = 0x1B91C0u;
            goto label_1b91c0;
        }
    }
    ctx->pc = 0x1B90ECu;
label_1b90ec:
    // 0x1b90ec: 0xc16d338
label_1b90f0:
    if (ctx->pc == 0x1B90F0u) {
        ctx->pc = 0x1B90F0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
        ctx->pc = 0x1B90F4u;
        goto label_1b90f4;
    }
    ctx->pc = 0x1B90ECu;
    SET_GPR_U32(ctx, 31, 0x1B90F4u);
    ctx->pc = 0x1B90F0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x5B4CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x5B4CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B90F4u; }
        if (ctx->pc != 0x1B90F4u) { return; }
    }
    ctx->pc = 0x1B90F4u;
label_1b90f4:
    // 0x1b90f4: 0x2263c
    ctx->pc = 0x1b90f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_1b90f8:
    // 0x1b90f8: 0x2403ffff
    ctx->pc = 0x1b90f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b90fc:
    // 0x1b90fc: 0x4263f
    ctx->pc = 0x1b90fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_1b9100:
    // 0x1b9100: 0x1083002f
label_1b9104:
    if (ctx->pc == 0x1B9104u) {
        ctx->pc = 0x1B9104u;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        ctx->pc = 0x1B9108u;
        goto label_1b9108;
    }
    ctx->pc = 0x1B9100u;
    {
        const bool branch_taken_0x1b9100 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1B9104u;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x1b9100) {
            ctx->pc = 0x1B91C0u;
            goto label_1b91c0;
        }
    }
    ctx->pc = 0x1B9108u;
label_1b9108:
    // 0x1b9108: 0x24634c20
    ctx->pc = 0x1b9108u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19488));
label_1b910c:
    // 0x1b910c: 0x641821
    ctx->pc = 0x1b910cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b9110:
    // 0x1b9110: 0x90700000
    ctx->pc = 0x1b9110u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9114:
    // 0x1b9114: 0x2a010004
    ctx->pc = 0x1b9114u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 4));
label_1b9118:
    // 0x1b9118: 0x10200029
label_1b911c:
    if (ctx->pc == 0x1B911Cu) {
        ctx->pc = 0x1B9120u;
        goto label_1b9120;
    }
    ctx->pc = 0x1B9118u;
    {
        const bool branch_taken_0x1b9118 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9118) {
            ctx->pc = 0x1B91C0u;
            goto label_1b91c0;
        }
    }
    ctx->pc = 0x1B9120u;
label_1b9120:
    // 0x1b9120: 0x3c01004c
    ctx->pc = 0x1b9120u;
    SET_GPR_U32(ctx, 1, ((uint32_t)76 << 16));
label_1b9124:
    // 0x1b9124: 0x3c03004a
    ctx->pc = 0x1b9124u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
label_1b9128:
    // 0x1b9128: 0x9026aded
    ctx->pc = 0x1b9128u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946285)));
label_1b912c:
    // 0x1b912c: 0x24635e12
    ctx->pc = 0x1b912cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24082));
label_1b9130:
    // 0x1b9130: 0x962401e2
    ctx->pc = 0x1b9130u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 482)));
label_1b9134:
    // 0x1b9134: 0x62900
    ctx->pc = 0x1b9134u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 4));
label_1b9138:
    // 0x1b9138: 0xa63023
    ctx->pc = 0x1b9138u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b913c:
    // 0x1b913c: 0x628c0
    ctx->pc = 0x1b913cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 3));
label_1b9140:
    // 0x1b9140: 0xc52821
    ctx->pc = 0x1b9140u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1b9144:
    // 0x1b9144: 0x53140
    ctx->pc = 0x1b9144u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 5));
label_1b9148:
    // 0x1b9148: 0x661821
    ctx->pc = 0x1b9148u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b914c:
    // 0x1b914c: 0x94630000
    ctx->pc = 0x1b914cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9150:
    // 0x1b9150: 0x1083001b
label_1b9154:
    if (ctx->pc == 0x1B9154u) {
        ctx->pc = 0x1B9158u;
        goto label_1b9158;
    }
    ctx->pc = 0x1B9150u;
    {
        const bool branch_taken_0x1b9150 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1b9150) {
            ctx->pc = 0x1B91C0u;
            goto label_1b91c0;
        }
    }
    ctx->pc = 0x1B9158u;
label_1b9158:
    // 0x1b9158: 0x3c02004a
    ctx->pc = 0x1b9158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_1b915c:
    // 0x1b915c: 0x26250038
    ctx->pc = 0x1b915cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 56));
label_1b9160:
    // 0x1b9160: 0x24425c30
    ctx->pc = 0x1b9160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
label_1b9164:
    // 0x1b9164: 0xc199770
label_1b9168:
    if (ctx->pc == 0x1B9168u) {
        ctx->pc = 0x1B9168u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = 0x1B916Cu;
        goto label_1b916c;
    }
    ctx->pc = 0x1B9164u;
    SET_GPR_U32(ctx, 31, 0x1B916Cu);
    ctx->pc = 0x1B9168u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x665DC0u;
    {
        auto targetFn = runtime->lookupFunction(0x665DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B916Cu; }
        if (ctx->pc != 0x1B916Cu) { return; }
    }
    ctx->pc = 0x1B916Cu;
label_1b916c:
    // 0x1b916c: 0x3c0344fa
    ctx->pc = 0x1b916cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)17658 << 16));
label_1b9170:
    // 0x1b9170: 0x44830800
    ctx->pc = 0x1b9170u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_1b9174:
    // 0x1b9174: 0x0
    ctx->pc = 0x1b9174u;
    // NOP
label_1b9178:
    // 0x1b9178: 0x46000834
    ctx->pc = 0x1b9178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b917c:
    // 0x1b917c: 0x45010010
label_1b9180:
    if (ctx->pc == 0x1B9180u) {
        ctx->pc = 0x1B9180u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        ctx->pc = 0x1B9184u;
        goto label_1b9184;
    }
    ctx->pc = 0x1B917Cu;
    {
        const bool branch_taken_0x1b917c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9180u;
        SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
        if (branch_taken_0x1b917c) {
            ctx->pc = 0x1B91C0u;
            goto label_1b91c0;
        }
    }
    ctx->pc = 0x1B9184u;
label_1b9184:
    // 0x1b9184: 0x26240038
    ctx->pc = 0x1b9184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 56));
label_1b9188:
    // 0x1b9188: 0x8c254c08
    ctx->pc = 0x1b9188u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 19464)));
label_1b918c:
    // 0x1b918c: 0x27a60038
    ctx->pc = 0x1b918cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 56));
label_1b9190:
    // 0x1b9190: 0xc06e52c
label_1b9194:
    if (ctx->pc == 0x1B9194u) {
        ctx->pc = 0x1B9194u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x1B9198u;
        goto label_1b9198;
    }
    ctx->pc = 0x1B9190u;
    SET_GPR_U32(ctx, 31, 0x1B9198u);
    ctx->pc = 0x1B9194u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 60));
    ctx->pc = 0x1B94B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B94B0_0x1b94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9198u; }
    }
    if (ctx->pc != 0x1B9198u) { return; }
    ctx->pc = 0x1B9198u;
label_1b9198:
    // 0x1b9198: 0x10400009
label_1b919c:
    if (ctx->pc == 0x1B919Cu) {
        ctx->pc = 0x1B91A0u;
        goto label_1b91a0;
    }
    ctx->pc = 0x1B9198u;
    {
        const bool branch_taken_0x1b9198 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1b9198) {
            ctx->pc = 0x1B91C0u;
            goto label_1b91c0;
        }
    }
    ctx->pc = 0x1B91A0u;
label_1b91a0:
    // 0x1b91a0: 0x8fa70038
    ctx->pc = 0x1b91a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b91a4:
    // 0x1b91a4: 0x26050004
    ctx->pc = 0x1b91a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4));
label_1b91a8:
    // 0x1b91a8: 0x8fa8003c
    ctx->pc = 0x1b91a8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1b91ac:
    // 0x1b91ac: 0x24040001
    ctx->pc = 0x1b91acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1b91b0:
    // 0x1b91b0: 0x302d
    ctx->pc = 0x1b91b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b91b4:
    // 0x1b91b4: 0x2409ffff
    ctx->pc = 0x1b91b4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b91b8:
    // 0x1b91b8: 0xc06b1fc
label_1b91bc:
    if (ctx->pc == 0x1B91BCu) {
        ctx->pc = 0x1B91BCu;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B91C0u;
        goto label_1b91c0;
    }
    ctx->pc = 0x1B91B8u;
    SET_GPR_U32(ctx, 31, 0x1B91C0u);
    ctx->pc = 0x1B91BCu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AC7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7F0_0x1ac7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91C0u; }
    }
    if (ctx->pc != 0x1B91C0u) { return; }
    ctx->pc = 0x1B91C0u;
label_1b91c0:
    // 0x1b91c0: 0xdfbf0020
    ctx->pc = 0x1b91c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b91c4:
    // 0x1b91c4: 0x7bb10010
    ctx->pc = 0x1b91c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b91c8:
    // 0x1b91c8: 0x7bb00000
    ctx->pc = 0x1b91c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b91cc:
    // 0x1b91cc: 0x3e00008
label_1b91d0:
    if (ctx->pc == 0x1B91D0u) {
        ctx->pc = 0x1B91D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1B91D4u;
        goto label_1b91d4;
    }
    ctx->pc = 0x1B91CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B91D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B8F40u: goto label_1b8f40;
            case 0x1B8F44u: goto label_1b8f44;
            case 0x1B8F48u: goto label_1b8f48;
            case 0x1B8F4Cu: goto label_1b8f4c;
            case 0x1B8F50u: goto label_1b8f50;
            case 0x1B8F54u: goto label_1b8f54;
            case 0x1B8F58u: goto label_1b8f58;
            case 0x1B8F5Cu: goto label_1b8f5c;
            case 0x1B8F60u: goto label_1b8f60;
            case 0x1B8F64u: goto label_1b8f64;
            case 0x1B8F68u: goto label_1b8f68;
            case 0x1B8F6Cu: goto label_1b8f6c;
            case 0x1B8F70u: goto label_1b8f70;
            case 0x1B8F74u: goto label_1b8f74;
            case 0x1B8F78u: goto label_1b8f78;
            case 0x1B8F7Cu: goto label_1b8f7c;
            case 0x1B8F80u: goto label_1b8f80;
            case 0x1B8F84u: goto label_1b8f84;
            case 0x1B8F88u: goto label_1b8f88;
            case 0x1B8F8Cu: goto label_1b8f8c;
            case 0x1B8F90u: goto label_1b8f90;
            case 0x1B8F94u: goto label_1b8f94;
            case 0x1B8F98u: goto label_1b8f98;
            case 0x1B8F9Cu: goto label_1b8f9c;
            case 0x1B8FA0u: goto label_1b8fa0;
            case 0x1B8FA4u: goto label_1b8fa4;
            case 0x1B8FA8u: goto label_1b8fa8;
            case 0x1B8FACu: goto label_1b8fac;
            case 0x1B8FB0u: goto label_1b8fb0;
            case 0x1B8FB4u: goto label_1b8fb4;
            case 0x1B8FB8u: goto label_1b8fb8;
            case 0x1B8FBCu: goto label_1b8fbc;
            case 0x1B8FC0u: goto label_1b8fc0;
            case 0x1B8FC4u: goto label_1b8fc4;
            case 0x1B8FC8u: goto label_1b8fc8;
            case 0x1B8FCCu: goto label_1b8fcc;
            case 0x1B8FD0u: goto label_1b8fd0;
            case 0x1B8FD4u: goto label_1b8fd4;
            case 0x1B8FD8u: goto label_1b8fd8;
            case 0x1B8FDCu: goto label_1b8fdc;
            case 0x1B8FE0u: goto label_1b8fe0;
            case 0x1B8FE4u: goto label_1b8fe4;
            case 0x1B8FE8u: goto label_1b8fe8;
            case 0x1B8FECu: goto label_1b8fec;
            case 0x1B8FF0u: goto label_1b8ff0;
            case 0x1B8FF4u: goto label_1b8ff4;
            case 0x1B8FF8u: goto label_1b8ff8;
            case 0x1B8FFCu: goto label_1b8ffc;
            case 0x1B9000u: goto label_1b9000;
            case 0x1B9004u: goto label_1b9004;
            case 0x1B9008u: goto label_1b9008;
            case 0x1B900Cu: goto label_1b900c;
            case 0x1B9010u: goto label_1b9010;
            case 0x1B9014u: goto label_1b9014;
            case 0x1B9018u: goto label_1b9018;
            case 0x1B901Cu: goto label_1b901c;
            case 0x1B9020u: goto label_1b9020;
            case 0x1B9024u: goto label_1b9024;
            case 0x1B9028u: goto label_1b9028;
            case 0x1B902Cu: goto label_1b902c;
            case 0x1B9030u: goto label_1b9030;
            case 0x1B9034u: goto label_1b9034;
            case 0x1B9038u: goto label_1b9038;
            case 0x1B903Cu: goto label_1b903c;
            case 0x1B9040u: goto label_1b9040;
            case 0x1B9044u: goto label_1b9044;
            case 0x1B9048u: goto label_1b9048;
            case 0x1B904Cu: goto label_1b904c;
            case 0x1B9050u: goto label_1b9050;
            case 0x1B9054u: goto label_1b9054;
            case 0x1B9058u: goto label_1b9058;
            case 0x1B905Cu: goto label_1b905c;
            case 0x1B9060u: goto label_1b9060;
            case 0x1B9064u: goto label_1b9064;
            case 0x1B9068u: goto label_1b9068;
            case 0x1B906Cu: goto label_1b906c;
            case 0x1B9070u: goto label_1b9070;
            case 0x1B9074u: goto label_1b9074;
            case 0x1B9078u: goto label_1b9078;
            case 0x1B907Cu: goto label_1b907c;
            case 0x1B9080u: goto label_1b9080;
            case 0x1B9084u: goto label_1b9084;
            case 0x1B9088u: goto label_1b9088;
            case 0x1B908Cu: goto label_1b908c;
            case 0x1B9090u: goto label_1b9090;
            case 0x1B9094u: goto label_1b9094;
            case 0x1B9098u: goto label_1b9098;
            case 0x1B909Cu: goto label_1b909c;
            case 0x1B90A0u: goto label_1b90a0;
            case 0x1B90A4u: goto label_1b90a4;
            case 0x1B90A8u: goto label_1b90a8;
            case 0x1B90ACu: goto label_1b90ac;
            case 0x1B90B0u: goto label_1b90b0;
            case 0x1B90B4u: goto label_1b90b4;
            case 0x1B90B8u: goto label_1b90b8;
            case 0x1B90BCu: goto label_1b90bc;
            case 0x1B90C0u: goto label_1b90c0;
            case 0x1B90C4u: goto label_1b90c4;
            case 0x1B90C8u: goto label_1b90c8;
            case 0x1B90CCu: goto label_1b90cc;
            case 0x1B90D0u: goto label_1b90d0;
            case 0x1B90D4u: goto label_1b90d4;
            case 0x1B90D8u: goto label_1b90d8;
            case 0x1B90DCu: goto label_1b90dc;
            case 0x1B90E0u: goto label_1b90e0;
            case 0x1B90E4u: goto label_1b90e4;
            case 0x1B90E8u: goto label_1b90e8;
            case 0x1B90ECu: goto label_1b90ec;
            case 0x1B90F0u: goto label_1b90f0;
            case 0x1B90F4u: goto label_1b90f4;
            case 0x1B90F8u: goto label_1b90f8;
            case 0x1B90FCu: goto label_1b90fc;
            case 0x1B9100u: goto label_1b9100;
            case 0x1B9104u: goto label_1b9104;
            case 0x1B9108u: goto label_1b9108;
            case 0x1B910Cu: goto label_1b910c;
            case 0x1B9110u: goto label_1b9110;
            case 0x1B9114u: goto label_1b9114;
            case 0x1B9118u: goto label_1b9118;
            case 0x1B911Cu: goto label_1b911c;
            case 0x1B9120u: goto label_1b9120;
            case 0x1B9124u: goto label_1b9124;
            case 0x1B9128u: goto label_1b9128;
            case 0x1B912Cu: goto label_1b912c;
            case 0x1B9130u: goto label_1b9130;
            case 0x1B9134u: goto label_1b9134;
            case 0x1B9138u: goto label_1b9138;
            case 0x1B913Cu: goto label_1b913c;
            case 0x1B9140u: goto label_1b9140;
            case 0x1B9144u: goto label_1b9144;
            case 0x1B9148u: goto label_1b9148;
            case 0x1B914Cu: goto label_1b914c;
            case 0x1B9150u: goto label_1b9150;
            case 0x1B9154u: goto label_1b9154;
            case 0x1B9158u: goto label_1b9158;
            case 0x1B915Cu: goto label_1b915c;
            case 0x1B9160u: goto label_1b9160;
            case 0x1B9164u: goto label_1b9164;
            case 0x1B9168u: goto label_1b9168;
            case 0x1B916Cu: goto label_1b916c;
            case 0x1B9170u: goto label_1b9170;
            case 0x1B9174u: goto label_1b9174;
            case 0x1B9178u: goto label_1b9178;
            case 0x1B917Cu: goto label_1b917c;
            case 0x1B9180u: goto label_1b9180;
            case 0x1B9184u: goto label_1b9184;
            case 0x1B9188u: goto label_1b9188;
            case 0x1B918Cu: goto label_1b918c;
            case 0x1B9190u: goto label_1b9190;
            case 0x1B9194u: goto label_1b9194;
            case 0x1B9198u: goto label_1b9198;
            case 0x1B919Cu: goto label_1b919c;
            case 0x1B91A0u: goto label_1b91a0;
            case 0x1B91A4u: goto label_1b91a4;
            case 0x1B91A8u: goto label_1b91a8;
            case 0x1B91ACu: goto label_1b91ac;
            case 0x1B91B0u: goto label_1b91b0;
            case 0x1B91B4u: goto label_1b91b4;
            case 0x1B91B8u: goto label_1b91b8;
            case 0x1B91BCu: goto label_1b91bc;
            case 0x1B91C0u: goto label_1b91c0;
            case 0x1B91C4u: goto label_1b91c4;
            case 0x1B91C8u: goto label_1b91c8;
            case 0x1B91CCu: goto label_1b91cc;
            case 0x1B91D0u: goto label_1b91d0;
            case 0x1B91D4u: goto label_1b91d4;
            case 0x1B91D8u: goto label_1b91d8;
            case 0x1B91DCu: goto label_1b91dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B91D4u;
label_1b91d4:
    // 0x1b91d4: 0x0
    ctx->pc = 0x1b91d4u;
    // NOP
label_1b91d8:
    // 0x1b91d8: 0x0
    ctx->pc = 0x1b91d8u;
    // NOP
label_1b91dc:
    // 0x1b91dc: 0x0
    ctx->pc = 0x1b91dcu;
    // NOP
}
