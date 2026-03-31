#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_104f00
// Address: 0x104f00 - 0x1050b0
void entry_104f00_0x1050b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x104f00u;

label_104f00:
    // 0x104f00: 0x27bdffd0
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_104f04:
    // 0x104f04: 0xffb40020
    ctx->pc = 0x104f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_104f08:
    // 0x104f08: 0x3c140021
    ctx->pc = 0x104f08u;
    SET_GPR_U32(ctx, 20, ((uint32_t)33 << 16));
label_104f0c:
    // 0x104f0c: 0xffb30018
    ctx->pc = 0x104f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_104f10:
    // 0x104f10: 0xffb00000
    ctx->pc = 0x104f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_104f14:
    // 0x104f14: 0xffb10008
    ctx->pc = 0x104f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_104f18:
    // 0x104f18: 0xffb20010
    ctx->pc = 0x104f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_104f1c:
    // 0x104f1c: 0xffbf0028
    ctx->pc = 0x104f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_104f20:
    // 0x104f20: 0x8e8297f0
    ctx->pc = 0x104f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294940656)));
label_104f24:
    // 0x104f24: 0x8c520148
    ctx->pc = 0x104f24u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_104f28:
    // 0x104f28: 0x12400011
label_104f2c:
    if (ctx->pc == 0x104F2Cu) {
        ctx->pc = 0x104F2Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104F30u;
        goto label_104f30;
    }
    ctx->pc = 0x104F28u;
    {
        const bool branch_taken_0x104f28 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x104F2Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104f28) {
            ctx->pc = 0x104F70u;
            goto label_104f70;
        }
    }
    ctx->pc = 0x104F30u;
label_104f30:
    // 0x104f30: 0x8e500004
    ctx->pc = 0x104f30u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_104f34:
    // 0x104f34: 0x0
    ctx->pc = 0x104f34u;
    // NOP
label_104f38:
    // 0x104f38: 0x2610ffff
    ctx->pc = 0x104f38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_104f3c:
    // 0x104f3c: 0x6000009
label_104f40:
    if (ctx->pc == 0x104F40u) {
        ctx->pc = 0x104F40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x104F44u;
        goto label_104f44;
    }
    ctx->pc = 0x104F3Cu;
    {
        const bool branch_taken_0x104f3c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x104F40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x104f3c) {
            ctx->pc = 0x104F64u;
            goto label_104f64;
        }
    }
    ctx->pc = 0x104F44u;
label_104f44:
    // 0x104f44: 0x101080
    ctx->pc = 0x104f44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_104f48:
    // 0x104f48: 0x438821
    ctx->pc = 0x104f48u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_104f4c:
    // 0x104f4c: 0x8e220000
    ctx->pc = 0x104f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_104f50:
    // 0x104f50: 0x2631fffc
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967292));
label_104f54:
    // 0x104f54: 0x40f809
label_104f58:
    if (ctx->pc == 0x104F58u) {
        ctx->pc = 0x104F58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = 0x104F5Cu;
        goto label_104f5c;
    }
    ctx->pc = 0x104F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104F5Cu);
        ctx->pc = 0x104F58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x104F00u: goto label_104f00;
            case 0x104F04u: goto label_104f04;
            case 0x104F08u: goto label_104f08;
            case 0x104F0Cu: goto label_104f0c;
            case 0x104F10u: goto label_104f10;
            case 0x104F14u: goto label_104f14;
            case 0x104F18u: goto label_104f18;
            case 0x104F1Cu: goto label_104f1c;
            case 0x104F20u: goto label_104f20;
            case 0x104F24u: goto label_104f24;
            case 0x104F28u: goto label_104f28;
            case 0x104F2Cu: goto label_104f2c;
            case 0x104F30u: goto label_104f30;
            case 0x104F34u: goto label_104f34;
            case 0x104F38u: goto label_104f38;
            case 0x104F3Cu: goto label_104f3c;
            case 0x104F40u: goto label_104f40;
            case 0x104F44u: goto label_104f44;
            case 0x104F48u: goto label_104f48;
            case 0x104F4Cu: goto label_104f4c;
            case 0x104F50u: goto label_104f50;
            case 0x104F54u: goto label_104f54;
            case 0x104F58u: goto label_104f58;
            case 0x104F5Cu: goto label_104f5c;
            case 0x104F60u: goto label_104f60;
            case 0x104F64u: goto label_104f64;
            case 0x104F68u: goto label_104f68;
            case 0x104F6Cu: goto label_104f6c;
            case 0x104F70u: goto label_104f70;
            case 0x104F74u: goto label_104f74;
            case 0x104F78u: goto label_104f78;
            case 0x104F7Cu: goto label_104f7c;
            case 0x104F80u: goto label_104f80;
            case 0x104F84u: goto label_104f84;
            case 0x104F88u: goto label_104f88;
            case 0x104F8Cu: goto label_104f8c;
            case 0x104F90u: goto label_104f90;
            case 0x104F94u: goto label_104f94;
            case 0x104F98u: goto label_104f98;
            case 0x104F9Cu: goto label_104f9c;
            case 0x104FA0u: goto label_104fa0;
            case 0x104FA4u: goto label_104fa4;
            case 0x104FA8u: goto label_104fa8;
            case 0x104FACu: goto label_104fac;
            case 0x104FB0u: goto label_104fb0;
            case 0x104FB4u: goto label_104fb4;
            case 0x104FB8u: goto label_104fb8;
            case 0x104FBCu: goto label_104fbc;
            case 0x104FC0u: goto label_104fc0;
            case 0x104FC4u: goto label_104fc4;
            case 0x104FC8u: goto label_104fc8;
            case 0x104FCCu: goto label_104fcc;
            case 0x104FD0u: goto label_104fd0;
            case 0x104FD4u: goto label_104fd4;
            case 0x104FD8u: goto label_104fd8;
            case 0x104FDCu: goto label_104fdc;
            case 0x104FE0u: goto label_104fe0;
            case 0x104FE4u: goto label_104fe4;
            case 0x104FE8u: goto label_104fe8;
            case 0x104FECu: goto label_104fec;
            case 0x104FF0u: goto label_104ff0;
            case 0x104FF4u: goto label_104ff4;
            case 0x104FF8u: goto label_104ff8;
            case 0x104FFCu: goto label_104ffc;
            case 0x105000u: goto label_105000;
            case 0x105004u: goto label_105004;
            case 0x105008u: goto label_105008;
            case 0x10500Cu: goto label_10500c;
            case 0x105010u: goto label_105010;
            case 0x105014u: goto label_105014;
            case 0x105018u: goto label_105018;
            case 0x10501Cu: goto label_10501c;
            case 0x105020u: goto label_105020;
            case 0x105024u: goto label_105024;
            case 0x105028u: goto label_105028;
            case 0x10502Cu: goto label_10502c;
            case 0x105030u: goto label_105030;
            case 0x105034u: goto label_105034;
            case 0x105038u: goto label_105038;
            case 0x10503Cu: goto label_10503c;
            case 0x105040u: goto label_105040;
            case 0x105044u: goto label_105044;
            case 0x105048u: goto label_105048;
            case 0x10504Cu: goto label_10504c;
            case 0x105050u: goto label_105050;
            case 0x105054u: goto label_105054;
            case 0x105058u: goto label_105058;
            case 0x10505Cu: goto label_10505c;
            case 0x105060u: goto label_105060;
            case 0x105064u: goto label_105064;
            case 0x105068u: goto label_105068;
            case 0x10506Cu: goto label_10506c;
            case 0x105070u: goto label_105070;
            case 0x105074u: goto label_105074;
            case 0x105078u: goto label_105078;
            case 0x10507Cu: goto label_10507c;
            case 0x105080u: goto label_105080;
            case 0x105084u: goto label_105084;
            case 0x105088u: goto label_105088;
            case 0x10508Cu: goto label_10508c;
            case 0x105090u: goto label_105090;
            case 0x105094u: goto label_105094;
            case 0x105098u: goto label_105098;
            case 0x10509Cu: goto label_10509c;
            case 0x1050A0u: goto label_1050a0;
            case 0x1050A4u: goto label_1050a4;
            case 0x1050A8u: goto label_1050a8;
            case 0x1050ACu: goto label_1050ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x104F5Cu; }
            if (ctx->pc != 0x104F5Cu) { return; }
        }
    }
    ctx->pc = 0x104F5Cu;
label_104f5c:
    // 0x104f5c: 0x603fffc
label_104f60:
    if (ctx->pc == 0x104F60u) {
        ctx->pc = 0x104F60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x104F64u;
        goto label_104f64;
    }
    ctx->pc = 0x104F5Cu;
    {
        const bool branch_taken_0x104f5c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x104f5c) {
            ctx->pc = 0x104F60u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x104F50u;
            goto label_104f50;
        }
    }
    ctx->pc = 0x104F64u;
label_104f64:
    // 0x104f64: 0x8e520000
    ctx->pc = 0x104f64u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_104f68:
    // 0x104f68: 0x5640fff3
label_104f6c:
    if (ctx->pc == 0x104F6Cu) {
        ctx->pc = 0x104F6Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x104F70u;
        goto label_104f70;
    }
    ctx->pc = 0x104F68u;
    {
        const bool branch_taken_0x104f68 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x104f68) {
            ctx->pc = 0x104F6Cu;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x104F38u;
            goto label_104f38;
        }
    }
    ctx->pc = 0x104F70u;
label_104f70:
    // 0x104f70: 0x8e8497f0
    ctx->pc = 0x104f70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294940656)));
label_104f74:
    // 0x104f74: 0x8c82003c
    ctx->pc = 0x104f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_104f78:
    // 0x104f78: 0x50400004
label_104f7c:
    if (ctx->pc == 0x104F7Cu) {
        ctx->pc = 0x104F7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104F80u;
        goto label_104f80;
    }
    ctx->pc = 0x104F78u;
    {
        const bool branch_taken_0x104f78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x104f78) {
            ctx->pc = 0x104F7Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x104F8Cu;
            goto label_104f8c;
        }
    }
    ctx->pc = 0x104F80u;
label_104f80:
    // 0x104f80: 0x40f809
label_104f84:
    if (ctx->pc == 0x104F84u) {
        ctx->pc = 0x104F88u;
        goto label_104f88;
    }
    ctx->pc = 0x104F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x104F88u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x104F00u: goto label_104f00;
            case 0x104F04u: goto label_104f04;
            case 0x104F08u: goto label_104f08;
            case 0x104F0Cu: goto label_104f0c;
            case 0x104F10u: goto label_104f10;
            case 0x104F14u: goto label_104f14;
            case 0x104F18u: goto label_104f18;
            case 0x104F1Cu: goto label_104f1c;
            case 0x104F20u: goto label_104f20;
            case 0x104F24u: goto label_104f24;
            case 0x104F28u: goto label_104f28;
            case 0x104F2Cu: goto label_104f2c;
            case 0x104F30u: goto label_104f30;
            case 0x104F34u: goto label_104f34;
            case 0x104F38u: goto label_104f38;
            case 0x104F3Cu: goto label_104f3c;
            case 0x104F40u: goto label_104f40;
            case 0x104F44u: goto label_104f44;
            case 0x104F48u: goto label_104f48;
            case 0x104F4Cu: goto label_104f4c;
            case 0x104F50u: goto label_104f50;
            case 0x104F54u: goto label_104f54;
            case 0x104F58u: goto label_104f58;
            case 0x104F5Cu: goto label_104f5c;
            case 0x104F60u: goto label_104f60;
            case 0x104F64u: goto label_104f64;
            case 0x104F68u: goto label_104f68;
            case 0x104F6Cu: goto label_104f6c;
            case 0x104F70u: goto label_104f70;
            case 0x104F74u: goto label_104f74;
            case 0x104F78u: goto label_104f78;
            case 0x104F7Cu: goto label_104f7c;
            case 0x104F80u: goto label_104f80;
            case 0x104F84u: goto label_104f84;
            case 0x104F88u: goto label_104f88;
            case 0x104F8Cu: goto label_104f8c;
            case 0x104F90u: goto label_104f90;
            case 0x104F94u: goto label_104f94;
            case 0x104F98u: goto label_104f98;
            case 0x104F9Cu: goto label_104f9c;
            case 0x104FA0u: goto label_104fa0;
            case 0x104FA4u: goto label_104fa4;
            case 0x104FA8u: goto label_104fa8;
            case 0x104FACu: goto label_104fac;
            case 0x104FB0u: goto label_104fb0;
            case 0x104FB4u: goto label_104fb4;
            case 0x104FB8u: goto label_104fb8;
            case 0x104FBCu: goto label_104fbc;
            case 0x104FC0u: goto label_104fc0;
            case 0x104FC4u: goto label_104fc4;
            case 0x104FC8u: goto label_104fc8;
            case 0x104FCCu: goto label_104fcc;
            case 0x104FD0u: goto label_104fd0;
            case 0x104FD4u: goto label_104fd4;
            case 0x104FD8u: goto label_104fd8;
            case 0x104FDCu: goto label_104fdc;
            case 0x104FE0u: goto label_104fe0;
            case 0x104FE4u: goto label_104fe4;
            case 0x104FE8u: goto label_104fe8;
            case 0x104FECu: goto label_104fec;
            case 0x104FF0u: goto label_104ff0;
            case 0x104FF4u: goto label_104ff4;
            case 0x104FF8u: goto label_104ff8;
            case 0x104FFCu: goto label_104ffc;
            case 0x105000u: goto label_105000;
            case 0x105004u: goto label_105004;
            case 0x105008u: goto label_105008;
            case 0x10500Cu: goto label_10500c;
            case 0x105010u: goto label_105010;
            case 0x105014u: goto label_105014;
            case 0x105018u: goto label_105018;
            case 0x10501Cu: goto label_10501c;
            case 0x105020u: goto label_105020;
            case 0x105024u: goto label_105024;
            case 0x105028u: goto label_105028;
            case 0x10502Cu: goto label_10502c;
            case 0x105030u: goto label_105030;
            case 0x105034u: goto label_105034;
            case 0x105038u: goto label_105038;
            case 0x10503Cu: goto label_10503c;
            case 0x105040u: goto label_105040;
            case 0x105044u: goto label_105044;
            case 0x105048u: goto label_105048;
            case 0x10504Cu: goto label_10504c;
            case 0x105050u: goto label_105050;
            case 0x105054u: goto label_105054;
            case 0x105058u: goto label_105058;
            case 0x10505Cu: goto label_10505c;
            case 0x105060u: goto label_105060;
            case 0x105064u: goto label_105064;
            case 0x105068u: goto label_105068;
            case 0x10506Cu: goto label_10506c;
            case 0x105070u: goto label_105070;
            case 0x105074u: goto label_105074;
            case 0x105078u: goto label_105078;
            case 0x10507Cu: goto label_10507c;
            case 0x105080u: goto label_105080;
            case 0x105084u: goto label_105084;
            case 0x105088u: goto label_105088;
            case 0x10508Cu: goto label_10508c;
            case 0x105090u: goto label_105090;
            case 0x105094u: goto label_105094;
            case 0x105098u: goto label_105098;
            case 0x10509Cu: goto label_10509c;
            case 0x1050A0u: goto label_1050a0;
            case 0x1050A4u: goto label_1050a4;
            case 0x1050A8u: goto label_1050a8;
            case 0x1050ACu: goto label_1050ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x104F88u; }
            if (ctx->pc != 0x104F88u) { return; }
        }
    }
    ctx->pc = 0x104F88u;
label_104f88:
    // 0x104f88: 0x260202d
    ctx->pc = 0x104f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_104f8c:
    // 0x104f8c: 0xdfb30018
    ctx->pc = 0x104f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_104f90:
    // 0x104f90: 0xdfb00000
    ctx->pc = 0x104f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104f94:
    // 0x104f94: 0xdfb10008
    ctx->pc = 0x104f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_104f98:
    // 0x104f98: 0xdfb20010
    ctx->pc = 0x104f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_104f9c:
    // 0x104f9c: 0xdfb40020
    ctx->pc = 0x104f9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_104fa0:
    // 0x104fa0: 0xdfbf0028
    ctx->pc = 0x104fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_104fa4:
    // 0x104fa4: 0x8040086
label_104fa8:
    if (ctx->pc == 0x104FA8u) {
        ctx->pc = 0x104FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x104FACu;
        goto label_104fac;
    }
    ctx->pc = 0x104FA4u;
    ctx->pc = 0x104FA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x100218u;
    sub_00100218_0x100218(rdram, ctx, runtime); return;
    ctx->pc = 0x104FACu;
label_104fac:
    // 0x104fac: 0x0
    ctx->pc = 0x104facu;
    // NOP
label_104fb0:
    // 0x104fb0: 0x27bdffe0
    ctx->pc = 0x104fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_104fb4:
    // 0x104fb4: 0x102d
    ctx->pc = 0x104fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104fb8:
    // 0x104fb8: 0xffb00000
    ctx->pc = 0x104fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_104fbc:
    // 0x104fbc: 0x80802d
    ctx->pc = 0x104fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_104fc0:
    // 0x104fc0: 0xffb10008
    ctx->pc = 0x104fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_104fc4:
    // 0x104fc4: 0x12000035
label_104fc8:
    if (ctx->pc == 0x104FC8u) {
        ctx->pc = 0x104FC8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x104FCCu;
        goto label_104fcc;
    }
    ctx->pc = 0x104FC4u;
    {
        const bool branch_taken_0x104fc4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x104FC8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x104fc4) {
            ctx->pc = 0x10509Cu;
            goto label_10509c;
        }
    }
    ctx->pc = 0x104FCCu;
label_104fcc:
    // 0x104fcc: 0x8e030054
    ctx->pc = 0x104fccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_104fd0:
    // 0x104fd0: 0x54600005
label_104fd4:
    if (ctx->pc == 0x104FD4u) {
        ctx->pc = 0x104FD4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->pc = 0x104FD8u;
        goto label_104fd8;
    }
    ctx->pc = 0x104FD0u;
    {
        const bool branch_taken_0x104fd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x104fd0) {
            ctx->pc = 0x104FD4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->pc = 0x104FE8u;
            goto label_104fe8;
        }
    }
    ctx->pc = 0x104FD8u;
label_104fd8:
    // 0x104fd8: 0x3c020021
    ctx->pc = 0x104fd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
label_104fdc:
    // 0x104fdc: 0x8c4397f0
    ctx->pc = 0x104fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
label_104fe0:
    // 0x104fe0: 0xae030054
    ctx->pc = 0x104fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_104fe4:
    // 0x104fe4: 0x8c620038
    ctx->pc = 0x104fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_104fe8:
    // 0x104fe8: 0x54400004
label_104fec:
    if (ctx->pc == 0x104FECu) {
        ctx->pc = 0x104FECu;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x104FF0u;
        goto label_104ff0;
    }
    ctx->pc = 0x104FE8u;
    {
        const bool branch_taken_0x104fe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x104fe8) {
            ctx->pc = 0x104FECu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x104FFCu;
            goto label_104ffc;
        }
    }
    ctx->pc = 0x104FF0u;
label_104ff0:
    // 0x104ff0: 0xc041544
label_104ff4:
    if (ctx->pc == 0x104FF4u) {
        ctx->pc = 0x104FF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x104FF8u;
        goto label_104ff8;
    }
    ctx->pc = 0x104FF0u;
    SET_GPR_U32(ctx, 31, 0x104FF8u);
    ctx->pc = 0x104FF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00105510_0x105510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104FF8u; }
    }
    if (ctx->pc != 0x104FF8u) { return; }
    ctx->pc = 0x104FF8u;
label_104ff8:
    // 0x104ff8: 0x8603000c
    ctx->pc = 0x104ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_104ffc:
    // 0x104ffc: 0x102d
    ctx->pc = 0x104ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105000:
    // 0x105000: 0x10600026
label_105004:
    if (ctx->pc == 0x105004u) {
        ctx->pc = 0x105004u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x105008u;
        goto label_105008;
    }
    ctx->pc = 0x105000u;
    {
        const bool branch_taken_0x105000 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x105004u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x105000) {
            ctx->pc = 0x10509Cu;
            goto label_10509c;
        }
    }
    ctx->pc = 0x105008u;
label_105008:
    // 0x105008: 0x30820008
    ctx->pc = 0x105008u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
label_10500c:
    // 0x10500c: 0x10400004
label_105010:
    if (ctx->pc == 0x105010u) {
        ctx->pc = 0x105010u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x105014u;
        goto label_105014;
    }
    ctx->pc = 0x10500Cu;
    {
        const bool branch_taken_0x10500c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x105010u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10500c) {
            ctx->pc = 0x105020u;
            goto label_105020;
        }
    }
    ctx->pc = 0x105014u;
label_105014:
    // 0x105014: 0xc04142c
label_105018:
    if (ctx->pc == 0x105018u) {
        ctx->pc = 0x105018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10501Cu;
        goto label_10501c;
    }
    ctx->pc = 0x105014u;
    SET_GPR_U32(ctx, 31, 0x10501Cu);
    ctx->pc = 0x105018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1050B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001050B0_0x1050b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10501Cu; }
    }
    if (ctx->pc != 0x10501Cu) { return; }
    ctx->pc = 0x10501Cu;
label_10501c:
    // 0x10501c: 0x40882d
    ctx->pc = 0x10501cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105020:
    // 0x105020: 0x8e02002c
    ctx->pc = 0x105020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_105024:
    // 0x105024: 0x50400007
label_105028:
    if (ctx->pc == 0x105028u) {
        ctx->pc = 0x105028u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x10502Cu;
        goto label_10502c;
    }
    ctx->pc = 0x105024u;
    {
        const bool branch_taken_0x105024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x105024) {
            ctx->pc = 0x105028u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x105044u;
            goto label_105044;
        }
    }
    ctx->pc = 0x10502Cu;
label_10502c:
    // 0x10502c: 0x40f809
label_105030:
    if (ctx->pc == 0x105030u) {
        ctx->pc = 0x105030u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x105034u;
        goto label_105034;
    }
    ctx->pc = 0x10502Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x105034u);
        ctx->pc = 0x105030u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x104F00u: goto label_104f00;
            case 0x104F04u: goto label_104f04;
            case 0x104F08u: goto label_104f08;
            case 0x104F0Cu: goto label_104f0c;
            case 0x104F10u: goto label_104f10;
            case 0x104F14u: goto label_104f14;
            case 0x104F18u: goto label_104f18;
            case 0x104F1Cu: goto label_104f1c;
            case 0x104F20u: goto label_104f20;
            case 0x104F24u: goto label_104f24;
            case 0x104F28u: goto label_104f28;
            case 0x104F2Cu: goto label_104f2c;
            case 0x104F30u: goto label_104f30;
            case 0x104F34u: goto label_104f34;
            case 0x104F38u: goto label_104f38;
            case 0x104F3Cu: goto label_104f3c;
            case 0x104F40u: goto label_104f40;
            case 0x104F44u: goto label_104f44;
            case 0x104F48u: goto label_104f48;
            case 0x104F4Cu: goto label_104f4c;
            case 0x104F50u: goto label_104f50;
            case 0x104F54u: goto label_104f54;
            case 0x104F58u: goto label_104f58;
            case 0x104F5Cu: goto label_104f5c;
            case 0x104F60u: goto label_104f60;
            case 0x104F64u: goto label_104f64;
            case 0x104F68u: goto label_104f68;
            case 0x104F6Cu: goto label_104f6c;
            case 0x104F70u: goto label_104f70;
            case 0x104F74u: goto label_104f74;
            case 0x104F78u: goto label_104f78;
            case 0x104F7Cu: goto label_104f7c;
            case 0x104F80u: goto label_104f80;
            case 0x104F84u: goto label_104f84;
            case 0x104F88u: goto label_104f88;
            case 0x104F8Cu: goto label_104f8c;
            case 0x104F90u: goto label_104f90;
            case 0x104F94u: goto label_104f94;
            case 0x104F98u: goto label_104f98;
            case 0x104F9Cu: goto label_104f9c;
            case 0x104FA0u: goto label_104fa0;
            case 0x104FA4u: goto label_104fa4;
            case 0x104FA8u: goto label_104fa8;
            case 0x104FACu: goto label_104fac;
            case 0x104FB0u: goto label_104fb0;
            case 0x104FB4u: goto label_104fb4;
            case 0x104FB8u: goto label_104fb8;
            case 0x104FBCu: goto label_104fbc;
            case 0x104FC0u: goto label_104fc0;
            case 0x104FC4u: goto label_104fc4;
            case 0x104FC8u: goto label_104fc8;
            case 0x104FCCu: goto label_104fcc;
            case 0x104FD0u: goto label_104fd0;
            case 0x104FD4u: goto label_104fd4;
            case 0x104FD8u: goto label_104fd8;
            case 0x104FDCu: goto label_104fdc;
            case 0x104FE0u: goto label_104fe0;
            case 0x104FE4u: goto label_104fe4;
            case 0x104FE8u: goto label_104fe8;
            case 0x104FECu: goto label_104fec;
            case 0x104FF0u: goto label_104ff0;
            case 0x104FF4u: goto label_104ff4;
            case 0x104FF8u: goto label_104ff8;
            case 0x104FFCu: goto label_104ffc;
            case 0x105000u: goto label_105000;
            case 0x105004u: goto label_105004;
            case 0x105008u: goto label_105008;
            case 0x10500Cu: goto label_10500c;
            case 0x105010u: goto label_105010;
            case 0x105014u: goto label_105014;
            case 0x105018u: goto label_105018;
            case 0x10501Cu: goto label_10501c;
            case 0x105020u: goto label_105020;
            case 0x105024u: goto label_105024;
            case 0x105028u: goto label_105028;
            case 0x10502Cu: goto label_10502c;
            case 0x105030u: goto label_105030;
            case 0x105034u: goto label_105034;
            case 0x105038u: goto label_105038;
            case 0x10503Cu: goto label_10503c;
            case 0x105040u: goto label_105040;
            case 0x105044u: goto label_105044;
            case 0x105048u: goto label_105048;
            case 0x10504Cu: goto label_10504c;
            case 0x105050u: goto label_105050;
            case 0x105054u: goto label_105054;
            case 0x105058u: goto label_105058;
            case 0x10505Cu: goto label_10505c;
            case 0x105060u: goto label_105060;
            case 0x105064u: goto label_105064;
            case 0x105068u: goto label_105068;
            case 0x10506Cu: goto label_10506c;
            case 0x105070u: goto label_105070;
            case 0x105074u: goto label_105074;
            case 0x105078u: goto label_105078;
            case 0x10507Cu: goto label_10507c;
            case 0x105080u: goto label_105080;
            case 0x105084u: goto label_105084;
            case 0x105088u: goto label_105088;
            case 0x10508Cu: goto label_10508c;
            case 0x105090u: goto label_105090;
            case 0x105094u: goto label_105094;
            case 0x105098u: goto label_105098;
            case 0x10509Cu: goto label_10509c;
            case 0x1050A0u: goto label_1050a0;
            case 0x1050A4u: goto label_1050a4;
            case 0x1050A8u: goto label_1050a8;
            case 0x1050ACu: goto label_1050ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x105034u; }
            if (ctx->pc != 0x105034u) { return; }
        }
    }
    ctx->pc = 0x105034u;
label_105034:
    // 0x105034: 0x2403ffff
    ctx->pc = 0x105034u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_105038:
    // 0x105038: 0x28420000
    ctx->pc = 0x105038u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
label_10503c:
    // 0x10503c: 0x62880b
    ctx->pc = 0x10503cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_105040:
    // 0x105040: 0x9602000c
    ctx->pc = 0x105040u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_105044:
    // 0x105044: 0x30420080
    ctx->pc = 0x105044u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
label_105048:
    // 0x105048: 0x50400005
label_10504c:
    if (ctx->pc == 0x10504Cu) {
        ctx->pc = 0x10504Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x105050u;
        goto label_105050;
    }
    ctx->pc = 0x105048u;
    {
        const bool branch_taken_0x105048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x105048) {
            ctx->pc = 0x10504Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->pc = 0x105060u;
            goto label_105060;
        }
    }
    ctx->pc = 0x105050u;
label_105050:
    // 0x105050: 0x8e040054
    ctx->pc = 0x105050u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_105054:
    // 0x105054: 0xc041636
label_105058:
    if (ctx->pc == 0x105058u) {
        ctx->pc = 0x105058u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x10505Cu;
        goto label_10505c;
    }
    ctx->pc = 0x105054u;
    SET_GPR_U32(ctx, 31, 0x10505Cu);
    ctx->pc = 0x105058u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10505Cu; }
    }
    if (ctx->pc != 0x10505Cu) { return; }
    ctx->pc = 0x10505Cu;
label_10505c:
    // 0x10505c: 0x8e050030
    ctx->pc = 0x10505cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_105060:
    // 0x105060: 0x10a00006
label_105064:
    if (ctx->pc == 0x105064u) {
        ctx->pc = 0x105064u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x105068u;
        goto label_105068;
    }
    ctx->pc = 0x105060u;
    {
        const bool branch_taken_0x105060 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x105064u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x105060) {
            ctx->pc = 0x10507Cu;
            goto label_10507c;
        }
    }
    ctx->pc = 0x105068u;
label_105068:
    // 0x105068: 0x50a20004
label_10506c:
    if (ctx->pc == 0x10506Cu) {
        ctx->pc = 0x10506Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x105070u;
        goto label_105070;
    }
    ctx->pc = 0x105068u;
    {
        const bool branch_taken_0x105068 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x105068) {
            ctx->pc = 0x10506Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x10507Cu;
            goto label_10507c;
        }
    }
    ctx->pc = 0x105070u;
label_105070:
    // 0x105070: 0xc041636
label_105074:
    if (ctx->pc == 0x105074u) {
        ctx->pc = 0x105074u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x105078u;
        goto label_105078;
    }
    ctx->pc = 0x105070u;
    SET_GPR_U32(ctx, 31, 0x105078u);
    ctx->pc = 0x105074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105078u; }
    }
    if (ctx->pc != 0x105078u) { return; }
    ctx->pc = 0x105078u;
label_105078:
    // 0x105078: 0xae000030
    ctx->pc = 0x105078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_10507c:
    // 0x10507c: 0x8e050044
    ctx->pc = 0x10507cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_105080:
    // 0x105080: 0x50a00005
label_105084:
    if (ctx->pc == 0x105084u) {
        ctx->pc = 0x105084u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x105088u;
        goto label_105088;
    }
    ctx->pc = 0x105080u;
    {
        const bool branch_taken_0x105080 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x105080) {
            ctx->pc = 0x105084u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x105098u;
            goto label_105098;
        }
    }
    ctx->pc = 0x105088u;
label_105088:
    // 0x105088: 0xc041636
label_10508c:
    if (ctx->pc == 0x10508Cu) {
        ctx->pc = 0x10508Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x105090u;
        goto label_105090;
    }
    ctx->pc = 0x105088u;
    SET_GPR_U32(ctx, 31, 0x105090u);
    ctx->pc = 0x10508Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1058D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001058D8_0x1058d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105090u; }
    }
    if (ctx->pc != 0x105090u) { return; }
    ctx->pc = 0x105090u;
label_105090:
    // 0x105090: 0xae000044
    ctx->pc = 0x105090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_105094:
    // 0x105094: 0xa600000c
    ctx->pc = 0x105094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_105098:
    // 0x105098: 0x220102d
    ctx->pc = 0x105098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10509c:
    // 0x10509c: 0xdfb00000
    ctx->pc = 0x10509cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1050a0:
    // 0x1050a0: 0xdfb10008
    ctx->pc = 0x1050a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1050a4:
    // 0x1050a4: 0xdfbf0010
    ctx->pc = 0x1050a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1050a8:
    // 0x1050a8: 0x3e00008
label_1050ac:
    if (ctx->pc == 0x1050ACu) {
        ctx->pc = 0x1050ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1050B0u;
        goto label_fallthrough_0x1050a8;
    }
    ctx->pc = 0x1050A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1050ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x104F00u: goto label_104f00;
            case 0x104F04u: goto label_104f04;
            case 0x104F08u: goto label_104f08;
            case 0x104F0Cu: goto label_104f0c;
            case 0x104F10u: goto label_104f10;
            case 0x104F14u: goto label_104f14;
            case 0x104F18u: goto label_104f18;
            case 0x104F1Cu: goto label_104f1c;
            case 0x104F20u: goto label_104f20;
            case 0x104F24u: goto label_104f24;
            case 0x104F28u: goto label_104f28;
            case 0x104F2Cu: goto label_104f2c;
            case 0x104F30u: goto label_104f30;
            case 0x104F34u: goto label_104f34;
            case 0x104F38u: goto label_104f38;
            case 0x104F3Cu: goto label_104f3c;
            case 0x104F40u: goto label_104f40;
            case 0x104F44u: goto label_104f44;
            case 0x104F48u: goto label_104f48;
            case 0x104F4Cu: goto label_104f4c;
            case 0x104F50u: goto label_104f50;
            case 0x104F54u: goto label_104f54;
            case 0x104F58u: goto label_104f58;
            case 0x104F5Cu: goto label_104f5c;
            case 0x104F60u: goto label_104f60;
            case 0x104F64u: goto label_104f64;
            case 0x104F68u: goto label_104f68;
            case 0x104F6Cu: goto label_104f6c;
            case 0x104F70u: goto label_104f70;
            case 0x104F74u: goto label_104f74;
            case 0x104F78u: goto label_104f78;
            case 0x104F7Cu: goto label_104f7c;
            case 0x104F80u: goto label_104f80;
            case 0x104F84u: goto label_104f84;
            case 0x104F88u: goto label_104f88;
            case 0x104F8Cu: goto label_104f8c;
            case 0x104F90u: goto label_104f90;
            case 0x104F94u: goto label_104f94;
            case 0x104F98u: goto label_104f98;
            case 0x104F9Cu: goto label_104f9c;
            case 0x104FA0u: goto label_104fa0;
            case 0x104FA4u: goto label_104fa4;
            case 0x104FA8u: goto label_104fa8;
            case 0x104FACu: goto label_104fac;
            case 0x104FB0u: goto label_104fb0;
            case 0x104FB4u: goto label_104fb4;
            case 0x104FB8u: goto label_104fb8;
            case 0x104FBCu: goto label_104fbc;
            case 0x104FC0u: goto label_104fc0;
            case 0x104FC4u: goto label_104fc4;
            case 0x104FC8u: goto label_104fc8;
            case 0x104FCCu: goto label_104fcc;
            case 0x104FD0u: goto label_104fd0;
            case 0x104FD4u: goto label_104fd4;
            case 0x104FD8u: goto label_104fd8;
            case 0x104FDCu: goto label_104fdc;
            case 0x104FE0u: goto label_104fe0;
            case 0x104FE4u: goto label_104fe4;
            case 0x104FE8u: goto label_104fe8;
            case 0x104FECu: goto label_104fec;
            case 0x104FF0u: goto label_104ff0;
            case 0x104FF4u: goto label_104ff4;
            case 0x104FF8u: goto label_104ff8;
            case 0x104FFCu: goto label_104ffc;
            case 0x105000u: goto label_105000;
            case 0x105004u: goto label_105004;
            case 0x105008u: goto label_105008;
            case 0x10500Cu: goto label_10500c;
            case 0x105010u: goto label_105010;
            case 0x105014u: goto label_105014;
            case 0x105018u: goto label_105018;
            case 0x10501Cu: goto label_10501c;
            case 0x105020u: goto label_105020;
            case 0x105024u: goto label_105024;
            case 0x105028u: goto label_105028;
            case 0x10502Cu: goto label_10502c;
            case 0x105030u: goto label_105030;
            case 0x105034u: goto label_105034;
            case 0x105038u: goto label_105038;
            case 0x10503Cu: goto label_10503c;
            case 0x105040u: goto label_105040;
            case 0x105044u: goto label_105044;
            case 0x105048u: goto label_105048;
            case 0x10504Cu: goto label_10504c;
            case 0x105050u: goto label_105050;
            case 0x105054u: goto label_105054;
            case 0x105058u: goto label_105058;
            case 0x10505Cu: goto label_10505c;
            case 0x105060u: goto label_105060;
            case 0x105064u: goto label_105064;
            case 0x105068u: goto label_105068;
            case 0x10506Cu: goto label_10506c;
            case 0x105070u: goto label_105070;
            case 0x105074u: goto label_105074;
            case 0x105078u: goto label_105078;
            case 0x10507Cu: goto label_10507c;
            case 0x105080u: goto label_105080;
            case 0x105084u: goto label_105084;
            case 0x105088u: goto label_105088;
            case 0x10508Cu: goto label_10508c;
            case 0x105090u: goto label_105090;
            case 0x105094u: goto label_105094;
            case 0x105098u: goto label_105098;
            case 0x10509Cu: goto label_10509c;
            case 0x1050A0u: goto label_1050a0;
            case 0x1050A4u: goto label_1050a4;
            case 0x1050A8u: goto label_1050a8;
            case 0x1050ACu: goto label_1050ac;
            default: break;
        }
        return;
    }
label_fallthrough_0x1050a8:
    ctx->pc = 0x1050B0u;
}
