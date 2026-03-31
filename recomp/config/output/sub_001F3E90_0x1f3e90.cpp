#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F3E90
// Address: 0x1f3e90 - 0x1f42c0
void sub_001F3E90_0x1f3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f3e90u;

label_1f3e90:
    // 0x1f3e90: 0x27bdffd0
    ctx->pc = 0x1f3e90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f3e94:
    // 0x1f3e94: 0xffb00010
    ctx->pc = 0x1f3e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1f3e98:
    // 0x1f3e98: 0xffbe0018
    ctx->pc = 0x1f3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
label_1f3e9c:
    // 0x1f3e9c: 0xffbf0020
    ctx->pc = 0x1f3e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f3ea0:
    // 0x1f3ea0: 0x3a0f02d
    ctx->pc = 0x1f3ea0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ea4:
    // 0x1f3ea4: 0xafc40000
    ctx->pc = 0x1f3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_1f3ea8:
    // 0x1f3ea8: 0xafc50004
    ctx->pc = 0x1f3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_1f3eac:
    // 0x1f3eac: 0xc0102d
    ctx->pc = 0x1f3eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3eb0:
    // 0x1f3eb0: 0x8fc30004
    ctx->pc = 0x1f3eb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f3eb4:
    // 0x1f3eb4: 0x621821
    ctx->pc = 0x1f3eb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3eb8:
    // 0x1f3eb8: 0xafc30004
    ctx->pc = 0x1f3eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_1f3ebc:
    // 0x1f3ebc: 0x8fc40000
    ctx->pc = 0x1f3ebcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f3ec0:
    // 0x1f3ec0: 0xc07cd3b
label_1f3ec4:
    if (ctx->pc == 0x1F3EC4u) {
        ctx->pc = 0x1F3EC8u;
        goto label_1f3ec8;
    }
    ctx->pc = 0x1F3EC0u;
    SET_GPR_U32(ctx, 31, 0x1F3EC8u);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EC8u; }
    }
    if (ctx->pc != 0x1F3EC8u) { return; }
    ctx->pc = 0x1F3EC8u;
label_1f3ec8:
    // 0x1f3ec8: 0x8fc30004
    ctx->pc = 0x1f3ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f3ecc:
    // 0x1f3ecc: 0x62102b
    ctx->pc = 0x1f3eccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3ed0:
    // 0x1f3ed0: 0x1440000f
label_1f3ed4:
    if (ctx->pc == 0x1F3ED4u) {
        ctx->pc = 0x1F3ED8u;
        goto label_1f3ed8;
    }
    ctx->pc = 0x1F3ED0u;
    {
        const bool branch_taken_0x1f3ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3ed0) {
            ctx->pc = 0x1F3F10u;
            goto label_1f3f10;
        }
    }
    ctx->pc = 0x1F3ED8u;
label_1f3ed8:
    // 0x1f3ed8: 0x8fc40000
    ctx->pc = 0x1f3ed8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f3edc:
    // 0x1f3edc: 0xc07cd3b
label_1f3ee0:
    if (ctx->pc == 0x1F3EE0u) {
        ctx->pc = 0x1F3EE4u;
        goto label_1f3ee4;
    }
    ctx->pc = 0x1F3EDCu;
    SET_GPR_U32(ctx, 31, 0x1F3EE4u);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EE4u; }
    }
    if (ctx->pc != 0x1F3EE4u) { return; }
    ctx->pc = 0x1F3EE4u;
label_1f3ee4:
    // 0x1f3ee4: 0x40802d
    ctx->pc = 0x1f3ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ee8:
    // 0x1f3ee8: 0x8fc40000
    ctx->pc = 0x1f3ee8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1f3eec:
    // 0x1f3eec: 0xc07c6b6
label_1f3ef0:
    if (ctx->pc == 0x1F3EF0u) {
        ctx->pc = 0x1F3EF4u;
        goto label_1f3ef4;
    }
    ctx->pc = 0x1F3EECu;
    SET_GPR_U32(ctx, 31, 0x1F3EF4u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EF4u; }
    }
    if (ctx->pc != 0x1F3EF4u) { return; }
    ctx->pc = 0x1F3EF4u;
label_1f3ef4:
    // 0x1f3ef4: 0x2021021
    ctx->pc = 0x1f3ef4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1f3ef8:
    // 0x1f3ef8: 0x8fc30004
    ctx->pc = 0x1f3ef8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f3efc:
    // 0x1f3efc: 0x62102b
    ctx->pc = 0x1f3efcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3f00:
    // 0x1f3f00: 0x10400003
label_1f3f04:
    if (ctx->pc == 0x1F3F04u) {
        ctx->pc = 0x1F3F08u;
        goto label_1f3f08;
    }
    ctx->pc = 0x1F3F00u;
    {
        const bool branch_taken_0x1f3f00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3f00) {
            ctx->pc = 0x1F3F10u;
            goto label_1f3f10;
        }
    }
    ctx->pc = 0x1F3F08u;
label_1f3f08:
    // 0x1f3f08: 0x10000004
label_1f3f0c:
    if (ctx->pc == 0x1F3F0Cu) {
        ctx->pc = 0x1F3F10u;
        goto label_1f3f10;
    }
    ctx->pc = 0x1F3F08u;
    {
        const bool branch_taken_0x1f3f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3f08) {
            ctx->pc = 0x1F3F1Cu;
            goto label_1f3f1c;
        }
    }
    ctx->pc = 0x1F3F10u;
label_1f3f10:
    // 0x1f3f10: 0x102d
    ctx->pc = 0x1f3f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f14:
    // 0x1f3f14: 0x10000002
label_1f3f18:
    if (ctx->pc == 0x1F3F18u) {
        ctx->pc = 0x1F3F1Cu;
        goto label_1f3f1c;
    }
    ctx->pc = 0x1F3F14u;
    {
        const bool branch_taken_0x1f3f14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3f14) {
            ctx->pc = 0x1F3F20u;
            goto label_1f3f20;
        }
    }
    ctx->pc = 0x1F3F1Cu;
label_1f3f1c:
    // 0x1f3f1c: 0x8fc20004
    ctx->pc = 0x1f3f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1f3f20:
    // 0x1f3f20: 0x3c0e82d
    ctx->pc = 0x1f3f20u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f24:
    // 0x1f3f24: 0xdfb00010
    ctx->pc = 0x1f3f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3f28:
    // 0x1f3f28: 0xdfbe0018
    ctx->pc = 0x1f3f28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f3f2c:
    // 0x1f3f2c: 0xdfbf0020
    ctx->pc = 0x1f3f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f3f30:
    // 0x1f3f30: 0x27bd0030
    ctx->pc = 0x1f3f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
label_1f3f34:
    // 0x1f3f34: 0x3e00008
label_1f3f38:
    if (ctx->pc == 0x1F3F38u) {
        ctx->pc = 0x1F3F3Cu;
        goto label_1f3f3c;
    }
    ctx->pc = 0x1F3F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3F3Cu;
label_1f3f3c:
    // 0x1f3f3c: 0x0
    ctx->pc = 0x1f3f3cu;
    // NOP
label_1f3f40:
    // 0x1f3f40: 0x10000009
label_1f3f44:
    if (ctx->pc == 0x1F3F44u) {
        ctx->pc = 0x1F3F44u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F48u;
        goto label_1f3f48;
    }
    ctx->pc = 0x1F3F40u;
    {
        const bool branch_taken_0x1f3f40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3F44u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f40) {
            ctx->pc = 0x1F3F68u;
            goto label_1f3f68;
        }
    }
    ctx->pc = 0x1F3F48u;
label_1f3f48:
    // 0x1f3f48: 0x80420e0d
    ctx->pc = 0x1f3f48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3597)));
label_1f3f4c:
    // 0x1f3f4c: 0x4400003
label_1f3f50:
    if (ctx->pc == 0x1F3F50u) {
        ctx->pc = 0x1F3F50u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 3));
        ctx->pc = 0x1F3F54u;
        goto label_1f3f54;
    }
    ctx->pc = 0x1F3F4Cu;
    {
        const bool branch_taken_0x1f3f4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F3F50u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 3));
        if (branch_taken_0x1f3f4c) {
            ctx->pc = 0x1F3F5Cu;
            goto label_1f3f5c;
        }
    }
    ctx->pc = 0x1F3F54u;
label_1f3f54:
    // 0x1f3f54: 0x14200003
label_1f3f58:
    if (ctx->pc == 0x1F3F58u) {
        ctx->pc = 0x1F3F5Cu;
        goto label_1f3f5c;
    }
    ctx->pc = 0x1F3F54u;
    {
        const bool branch_taken_0x1f3f54 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3f54) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3F5Cu;
label_1f3f5c:
    // 0x1f3f5c: 0x10000006
label_1f3f60:
    if (ctx->pc == 0x1F3F60u) {
        ctx->pc = 0x1F3F60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1F3F64u;
        goto label_1f3f64;
    }
    ctx->pc = 0x1F3F5Cu;
    {
        const bool branch_taken_0x1f3f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3F60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1f3f5c) {
            ctx->pc = 0x1F3F78u;
            goto label_1f3f78;
        }
    }
    ctx->pc = 0x1F3F64u;
label_1f3f64:
    // 0x1f3f64: 0x24630001
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f3f68:
    // 0x1f3f68: 0x28620010
    ctx->pc = 0x1f3f68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 16));
label_1f3f6c:
    // 0x1f3f6c: 0x1440fff6
label_1f3f70:
    if (ctx->pc == 0x1F3F70u) {
        ctx->pc = 0x1F3F70u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1F3F74u;
        goto label_1f3f74;
    }
    ctx->pc = 0x1F3F6Cu;
    {
        const bool branch_taken_0x1f3f6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F3F70u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x1f3f6c) {
            ctx->pc = 0x1F3F48u;
            goto label_1f3f48;
        }
    }
    ctx->pc = 0x1F3F74u;
label_1f3f74:
    // 0x1f3f74: 0x102d
    ctx->pc = 0x1f3f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f78:
    // 0x1f3f78: 0x3e00008
label_1f3f7c:
    if (ctx->pc == 0x1F3F7Cu) {
        ctx->pc = 0x1F3F80u;
        goto label_1f3f80;
    }
    ctx->pc = 0x1F3F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3F80u;
label_1f3f80:
    // 0x1f3f80: 0x302d
    ctx->pc = 0x1f3f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f84:
    // 0x1f3f84: 0x861821
    ctx->pc = 0x1f3f84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1f3f88:
    // 0x1f3f88: 0x24650e0d
    ctx->pc = 0x1f3f88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 3597));
label_1f3f8c:
    // 0x1f3f8c: 0x80630e0d
    ctx->pc = 0x1f3f8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3597)));
label_1f3f90:
    // 0x1f3f90: 0x4600003
label_1f3f94:
    if (ctx->pc == 0x1F3F94u) {
        ctx->pc = 0x1F3F94u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 3));
        ctx->pc = 0x1F3F98u;
        goto label_1f3f98;
    }
    ctx->pc = 0x1F3F90u;
    {
        const bool branch_taken_0x1f3f90 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1F3F94u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x1f3f90) {
            ctx->pc = 0x1F3FA0u;
            goto label_1f3fa0;
        }
    }
    ctx->pc = 0x1F3F98u;
label_1f3f98:
    // 0x1f3f98: 0x14200002
label_1f3f9c:
    if (ctx->pc == 0x1F3F9Cu) {
        ctx->pc = 0x1F3FA0u;
        goto label_1f3fa0;
    }
    ctx->pc = 0x1F3F98u;
    {
        const bool branch_taken_0x1f3f98 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3f98) {
            ctx->pc = 0x1F3FA4u;
            goto label_1f3fa4;
        }
    }
    ctx->pc = 0x1F3FA0u;
label_1f3fa0:
    // 0x1f3fa0: 0xa0a00000
    ctx->pc = 0x1f3fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f3fa4:
    // 0x1f3fa4: 0x24c60001
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1f3fa8:
    // 0x1f3fa8: 0x28c30010
    ctx->pc = 0x1f3fa8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 16));
label_1f3fac:
    // 0x1f3fac: 0x1460fff6
label_1f3fb0:
    if (ctx->pc == 0x1F3FB0u) {
        ctx->pc = 0x1F3FB0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->pc = 0x1F3FB4u;
        goto label_1f3fb4;
    }
    ctx->pc = 0x1F3FACu;
    {
        const bool branch_taken_0x1f3fac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F3FB0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        if (branch_taken_0x1f3fac) {
            ctx->pc = 0x1F3F88u;
            goto label_1f3f88;
        }
    }
    ctx->pc = 0x1F3FB4u;
label_1f3fb4:
    // 0x1f3fb4: 0x3e00008
label_1f3fb8:
    if (ctx->pc == 0x1F3FB8u) {
        ctx->pc = 0x1F3FBCu;
        goto label_1f3fbc;
    }
    ctx->pc = 0x1F3FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3FBCu;
label_1f3fbc:
    // 0x1f3fbc: 0x0
    ctx->pc = 0x1f3fbcu;
    // NOP
label_1f3fc0:
    // 0x1f3fc0: 0x27bdfff0
    ctx->pc = 0x1f3fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f3fc4:
    // 0x1f3fc4: 0x3c040036
    ctx->pc = 0x1f3fc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_1f3fc8:
    // 0x1f3fc8: 0xffbf0000
    ctx->pc = 0x1f3fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f3fcc:
    // 0x1f3fcc: 0x3c010035
    ctx->pc = 0x1f3fccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
label_1f3fd0:
    // 0x1f3fd0: 0xac2057c0
    ctx->pc = 0x1f3fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22464), GPR_U32(ctx, 0));
label_1f3fd4:
    // 0x1f3fd4: 0x3c050026
    ctx->pc = 0x1f3fd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_1f3fd8:
    // 0x1f3fd8: 0x24020001
    ctx->pc = 0x1f3fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f3fdc:
    // 0x1f3fdc: 0x3c010036
    ctx->pc = 0x1f3fdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f3fe0:
    // 0x1f3fe0: 0x2484ead0
    ctx->pc = 0x1f3fe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961872));
label_1f3fe4:
    // 0x1f3fe4: 0xac22eaf0
    ctx->pc = 0x1f3fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961904), GPR_U32(ctx, 2));
label_1f3fe8:
    // 0x1f3fe8: 0xc042bf0
label_1f3fec:
    if (ctx->pc == 0x1F3FECu) {
        ctx->pc = 0x1F3FECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941472));
        ctx->pc = 0x1F3FF0u;
        goto label_1f3ff0;
    }
    ctx->pc = 0x1F3FE8u;
    SET_GPR_U32(ctx, 31, 0x1F3FF0u);
    ctx->pc = 0x1F3FECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941472));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FF0u; }
    }
    if (ctx->pc != 0x1F3FF0u) { return; }
    ctx->pc = 0x1F3FF0u;
label_1f3ff0:
    // 0x1f3ff0: 0x3c010036
    ctx->pc = 0x1f3ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f3ff4:
    // 0x1f3ff4: 0x3c020036
    ctx->pc = 0x1f3ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_1f3ff8:
    // 0x1f3ff8: 0xac20ec70
    ctx->pc = 0x1f3ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962288), GPR_U32(ctx, 0));
label_1f3ffc:
    // 0x1f3ffc: 0x2442ead0
    ctx->pc = 0x1f3ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961872));
label_1f4000:
    // 0x1f4000: 0x3c010035
    ctx->pc = 0x1f4000u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
label_1f4004:
    // 0x1f4004: 0x382d
    ctx->pc = 0x1f4004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4008:
    // 0x1f4008: 0xac2257c8
    ctx->pc = 0x1f4008u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22472), GPR_U32(ctx, 2));
label_1f400c:
    // 0x1f400c: 0x3c010036
    ctx->pc = 0x1f400cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4010:
    // 0x1f4010: 0xac20ec40
    ctx->pc = 0x1f4010u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962240), GPR_U32(ctx, 0));
label_1f4014:
    // 0x1f4014: 0x3c060023
    ctx->pc = 0x1f4014u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
label_1f4018:
    // 0x1f4018: 0x3c040036
    ctx->pc = 0x1f4018u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_1f401c:
    // 0x1f401c: 0x24c67310
    ctx->pc = 0x1f401cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 29456));
label_1f4020:
    // 0x1f4020: 0x2484ec50
    ctx->pc = 0x1f4020u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962256));
label_1f4024:
    // 0x1f4024: 0x71e3c
    ctx->pc = 0x1f4024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
label_1f4028:
    // 0x1f4028: 0x24e20001
    ctx->pc = 0x1f4028u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 1));
label_1f402c:
    // 0x1f402c: 0x31e3f
    ctx->pc = 0x1f402cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1f4030:
    // 0x1f4030: 0x23e3c
    ctx->pc = 0x1f4030u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
label_1f4034:
    // 0x1f4034: 0x31880
    ctx->pc = 0x1f4034u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1f4038:
    // 0x1f4038: 0x73e3f
    ctx->pc = 0x1f4038u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_1f403c:
    // 0x1f403c: 0xc31021
    ctx->pc = 0x1f403cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f4040:
    // 0x1f4040: 0x8c450000
    ctx->pc = 0x1f4040u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4044:
    // 0x1f4044: 0x831821
    ctx->pc = 0x1f4044u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f4048:
    // 0x1f4048: 0x28e20005
    ctx->pc = 0x1f4048u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 5));
label_1f404c:
    // 0x1f404c: 0x1440fff5
label_1f4050:
    if (ctx->pc == 0x1F4050u) {
        ctx->pc = 0x1F4050u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x1F4054u;
        goto label_1f4054;
    }
    ctx->pc = 0x1F404Cu;
    {
        const bool branch_taken_0x1f404c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4050u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1f404c) {
            ctx->pc = 0x1F4024u;
            goto label_1f4024;
        }
    }
    ctx->pc = 0x1F4054u;
label_1f4054:
    // 0x1f4054: 0x3c010036
    ctx->pc = 0x1f4054u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4058:
    // 0x1f4058: 0x3c040036
    ctx->pc = 0x1f4058u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_1f405c:
    // 0x1f405c: 0xa020ebd4
    ctx->pc = 0x1f405cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294962132), (uint8_t)GPR_U32(ctx, 0));
label_1f4060:
    // 0x1f4060: 0x24020005
    ctx->pc = 0x1f4060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1f4064:
    // 0x1f4064: 0x3c010036
    ctx->pc = 0x1f4064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4068:
    // 0x1f4068: 0x2484eb00
    ctx->pc = 0x1f4068u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961920));
label_1f406c:
    // 0x1f406c: 0xa422ebb0
    ctx->pc = 0x1f406cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962096), (uint16_t)GPR_U32(ctx, 2));
label_1f4070:
    // 0x1f4070: 0x282d
    ctx->pc = 0x1f4070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4074:
    // 0x1f4074: 0x3c010036
    ctx->pc = 0x1f4074u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4078:
    // 0x1f4078: 0x24060094
    ctx->pc = 0x1f4078u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 148));
label_1f407c:
    // 0x1f407c: 0xc041f1a
label_1f4080:
    if (ctx->pc == 0x1F4080u) {
        ctx->pc = 0x1F4080u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962136), GPR_U32(ctx, 0));
        ctx->pc = 0x1F4084u;
        goto label_1f4084;
    }
    ctx->pc = 0x1F407Cu;
    SET_GPR_U32(ctx, 31, 0x1F4084u);
    ctx->pc = 0x1F4080u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962136), GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4084u; }
    }
    if (ctx->pc != 0x1F4084u) { return; }
    ctx->pc = 0x1F4084u;
label_1f4084:
    // 0x1f4084: 0x24020080
    ctx->pc = 0x1f4084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1f4088:
    // 0x1f4088: 0x3c010036
    ctx->pc = 0x1f4088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f408c:
    // 0x1f408c: 0xac22eb14
    ctx->pc = 0x1f408cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961940), GPR_U32(ctx, 2));
label_1f4090:
    // 0x1f4090: 0x3c010036
    ctx->pc = 0x1f4090u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4094:
    // 0x1f4094: 0x8c22eb14
    ctx->pc = 0x1f4094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961940)));
label_1f4098:
    // 0x1f4098: 0x3c010001
    ctx->pc = 0x1f4098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
label_1f409c:
    // 0x1f409c: 0x41082a
    ctx->pc = 0x1f409cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
label_1f40a0:
    // 0x1f40a0: 0x14200005
label_1f40a4:
    if (ctx->pc == 0x1F40A4u) {
        ctx->pc = 0x1F40A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
        ctx->pc = 0x1F40A8u;
        goto label_1f40a8;
    }
    ctx->pc = 0x1F40A0u;
    {
        const bool branch_taken_0x1f40a0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F40A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
        if (branch_taken_0x1f40a0) {
            ctx->pc = 0x1F40B8u;
            goto label_1f40b8;
        }
    }
    ctx->pc = 0x1F40A8u;
label_1f40a8:
    // 0x1f40a8: 0x3402ffff
    ctx->pc = 0x1f40a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
label_1f40ac:
    // 0x1f40ac: 0x3c010036
    ctx->pc = 0x1f40acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f40b0:
    // 0x1f40b0: 0xac22eb14
    ctx->pc = 0x1f40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961940), GPR_U32(ctx, 2));
label_1f40b4:
    // 0x1f40b4: 0x24020300
    ctx->pc = 0x1f40b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
label_1f40b8:
    // 0x1f40b8: 0x3c010036
    ctx->pc = 0x1f40b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f40bc:
    // 0x1f40bc: 0xac22eb18
    ctx->pc = 0x1f40bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961944), GPR_U32(ctx, 2));
label_1f40c0:
    // 0x1f40c0: 0x3c030036
    ctx->pc = 0x1f40c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
label_1f40c4:
    // 0x1f40c4: 0x2463efa0
    ctx->pc = 0x1f40c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963104));
label_1f40c8:
    // 0x1f40c8: 0x3c010036
    ctx->pc = 0x1f40c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f40cc:
    // 0x1f40cc: 0x3c020036
    ctx->pc = 0x1f40ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_1f40d0:
    // 0x1f40d0: 0xac23eb1c
    ctx->pc = 0x1f40d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961948), GPR_U32(ctx, 3));
label_1f40d4:
    // 0x1f40d4: 0x2442ec90
    ctx->pc = 0x1f40d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962320));
label_1f40d8:
    // 0x1f40d8: 0x3c010036
    ctx->pc = 0x1f40d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f40dc:
    // 0x1f40dc: 0xac22eb24
    ctx->pc = 0x1f40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961956), GPR_U32(ctx, 2));
label_1f40e0:
    // 0x1f40e0: 0x3c010036
    ctx->pc = 0x1f40e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f40e4:
    // 0x1f40e4: 0x8c23eb1c
    ctx->pc = 0x1f40e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294961948)));
label_1f40e8:
    // 0x1f40e8: 0x3c010036
    ctx->pc = 0x1f40e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f40ec:
    // 0x1f40ec: 0x24630008
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_1f40f0:
    // 0x1f40f0: 0x8c22eb24
    ctx->pc = 0x1f40f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961956)));
label_1f40f4:
    // 0x1f40f4: 0x3c010036
    ctx->pc = 0x1f40f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f40f8:
    // 0x1f40f8: 0x24420008
    ctx->pc = 0x1f40f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_1f40fc:
    // 0x1f40fc: 0xac23eb20
    ctx->pc = 0x1f40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961952), GPR_U32(ctx, 3));
label_1f4100:
    // 0x1f4100: 0x3c010036
    ctx->pc = 0x1f4100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4104:
    // 0x1f4104: 0xc042652
label_1f4108:
    if (ctx->pc == 0x1F4108u) {
        ctx->pc = 0x1F4108u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961960), GPR_U32(ctx, 2));
        ctx->pc = 0x1F410Cu;
        goto label_1f410c;
    }
    ctx->pc = 0x1F4104u;
    SET_GPR_U32(ctx, 31, 0x1F410Cu);
    ctx->pc = 0x1F4108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961960), GPR_U32(ctx, 2));
    ctx->pc = 0x109948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00109948_0x109948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F410Cu; }
    }
    if (ctx->pc != 0x1F410Cu) { return; }
    ctx->pc = 0x1F410Cu;
label_1f410c:
    // 0x1f410c: 0x3c010036
    ctx->pc = 0x1f410cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4110:
    // 0x1f4110: 0xa022eb31
    ctx->pc = 0x1f4110u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961969), (uint8_t)GPR_U32(ctx, 2));
label_1f4114:
    // 0x1f4114: 0x24020001
    ctx->pc = 0x1f4114u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f4118:
    // 0x1f4118: 0x3c010036
    ctx->pc = 0x1f4118u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f411c:
    // 0x1f411c: 0xa022eb38
    ctx->pc = 0x1f411cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961976), (uint8_t)GPR_U32(ctx, 2));
label_1f4120:
    // 0x1f4120: 0x3c010036
    ctx->pc = 0x1f4120u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4124:
    // 0x1f4124: 0x102d
    ctx->pc = 0x1f4124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4128:
    // 0x1f4128: 0xac20eb90
    ctx->pc = 0x1f4128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962064), GPR_U32(ctx, 0));
label_1f412c:
    // 0x1f412c: 0xdfbf0000
    ctx->pc = 0x1f412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4130:
    // 0x1f4130: 0x3e00008
label_1f4134:
    if (ctx->pc == 0x1F4134u) {
        ctx->pc = 0x1F4134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F4138u;
        goto label_1f4138;
    }
    ctx->pc = 0x1F4130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4138u;
label_1f4138:
    // 0x1f4138: 0x0
    ctx->pc = 0x1f4138u;
    // NOP
label_1f413c:
    // 0x1f413c: 0x0
    ctx->pc = 0x1f413cu;
    // NOP
label_1f4140:
    // 0x1f4140: 0x27bdfff0
    ctx->pc = 0x1f4140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f4144:
    // 0x1f4144: 0x3c040036
    ctx->pc = 0x1f4144u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_1f4148:
    // 0x1f4148: 0xffbf0000
    ctx->pc = 0x1f4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f414c:
    // 0x1f414c: 0x3c010036
    ctx->pc = 0x1f414cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4150:
    // 0x1f4150: 0xac20eaf0
    ctx->pc = 0x1f4150u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961904), GPR_U32(ctx, 0));
label_1f4154:
    // 0x1f4154: 0x2484eb00
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961920));
label_1f4158:
    // 0x1f4158: 0x3c010036
    ctx->pc = 0x1f4158u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f415c:
    // 0x1f415c: 0x282d
    ctx->pc = 0x1f415cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4160:
    // 0x1f4160: 0x24060094
    ctx->pc = 0x1f4160u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 148));
label_1f4164:
    // 0x1f4164: 0xc041f1a
label_1f4168:
    if (ctx->pc == 0x1F4168u) {
        ctx->pc = 0x1F4168u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962288), GPR_U32(ctx, 0));
        ctx->pc = 0x1F416Cu;
        goto label_1f416c;
    }
    ctx->pc = 0x1F4164u;
    SET_GPR_U32(ctx, 31, 0x1F416Cu);
    ctx->pc = 0x1F4168u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962288), GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F416Cu; }
    }
    if (ctx->pc != 0x1F416Cu) { return; }
    ctx->pc = 0x1F416Cu;
label_1f416c:
    // 0x1f416c: 0x24020080
    ctx->pc = 0x1f416cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_1f4170:
    // 0x1f4170: 0x3c010036
    ctx->pc = 0x1f4170u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4174:
    // 0x1f4174: 0xac22eb14
    ctx->pc = 0x1f4174u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961940), GPR_U32(ctx, 2));
label_1f4178:
    // 0x1f4178: 0x3c010036
    ctx->pc = 0x1f4178u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f417c:
    // 0x1f417c: 0x8c22eb14
    ctx->pc = 0x1f417cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961940)));
label_1f4180:
    // 0x1f4180: 0x3c010001
    ctx->pc = 0x1f4180u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
label_1f4184:
    // 0x1f4184: 0x41082a
    ctx->pc = 0x1f4184u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
label_1f4188:
    // 0x1f4188: 0x14200005
label_1f418c:
    if (ctx->pc == 0x1F418Cu) {
        ctx->pc = 0x1F418Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
        ctx->pc = 0x1F4190u;
        goto label_1f4190;
    }
    ctx->pc = 0x1F4188u;
    {
        const bool branch_taken_0x1f4188 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F418Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
        if (branch_taken_0x1f4188) {
            ctx->pc = 0x1F41A0u;
            goto label_1f41a0;
        }
    }
    ctx->pc = 0x1F4190u;
label_1f4190:
    // 0x1f4190: 0x3402ffff
    ctx->pc = 0x1f4190u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
label_1f4194:
    // 0x1f4194: 0x3c010036
    ctx->pc = 0x1f4194u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4198:
    // 0x1f4198: 0xac22eb14
    ctx->pc = 0x1f4198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961940), GPR_U32(ctx, 2));
label_1f419c:
    // 0x1f419c: 0x24020300
    ctx->pc = 0x1f419cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 768));
label_1f41a0:
    // 0x1f41a0: 0x3c010036
    ctx->pc = 0x1f41a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41a4:
    // 0x1f41a4: 0xac22eb18
    ctx->pc = 0x1f41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961944), GPR_U32(ctx, 2));
label_1f41a8:
    // 0x1f41a8: 0x3c030036
    ctx->pc = 0x1f41a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
label_1f41ac:
    // 0x1f41ac: 0x2463efa0
    ctx->pc = 0x1f41acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294963104));
label_1f41b0:
    // 0x1f41b0: 0x3c010036
    ctx->pc = 0x1f41b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41b4:
    // 0x1f41b4: 0x3c020036
    ctx->pc = 0x1f41b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_1f41b8:
    // 0x1f41b8: 0xac23eb1c
    ctx->pc = 0x1f41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961948), GPR_U32(ctx, 3));
label_1f41bc:
    // 0x1f41bc: 0x2442ec90
    ctx->pc = 0x1f41bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962320));
label_1f41c0:
    // 0x1f41c0: 0x3c010036
    ctx->pc = 0x1f41c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41c4:
    // 0x1f41c4: 0xac22eb24
    ctx->pc = 0x1f41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961956), GPR_U32(ctx, 2));
label_1f41c8:
    // 0x1f41c8: 0x3c010036
    ctx->pc = 0x1f41c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41cc:
    // 0x1f41cc: 0x8c23eb1c
    ctx->pc = 0x1f41ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294961948)));
label_1f41d0:
    // 0x1f41d0: 0x3c010036
    ctx->pc = 0x1f41d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41d4:
    // 0x1f41d4: 0x24630008
    ctx->pc = 0x1f41d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
label_1f41d8:
    // 0x1f41d8: 0x8c22eb24
    ctx->pc = 0x1f41d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294961956)));
label_1f41dc:
    // 0x1f41dc: 0x3c010036
    ctx->pc = 0x1f41dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41e0:
    // 0x1f41e0: 0x24420008
    ctx->pc = 0x1f41e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
label_1f41e4:
    // 0x1f41e4: 0xac23eb20
    ctx->pc = 0x1f41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961952), GPR_U32(ctx, 3));
label_1f41e8:
    // 0x1f41e8: 0x3c010036
    ctx->pc = 0x1f41e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41ec:
    // 0x1f41ec: 0xc042652
label_1f41f0:
    if (ctx->pc == 0x1F41F0u) {
        ctx->pc = 0x1F41F0u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961960), GPR_U32(ctx, 2));
        ctx->pc = 0x1F41F4u;
        goto label_1f41f4;
    }
    ctx->pc = 0x1F41ECu;
    SET_GPR_U32(ctx, 31, 0x1F41F4u);
    ctx->pc = 0x1F41F0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961960), GPR_U32(ctx, 2));
    ctx->pc = 0x109948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00109948_0x109948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F41F4u; }
    }
    if (ctx->pc != 0x1F41F4u) { return; }
    ctx->pc = 0x1F41F4u;
label_1f41f4:
    // 0x1f41f4: 0x3c010036
    ctx->pc = 0x1f41f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f41f8:
    // 0x1f41f8: 0xa022eb31
    ctx->pc = 0x1f41f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961969), (uint8_t)GPR_U32(ctx, 2));
label_1f41fc:
    // 0x1f41fc: 0x24020001
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f4200:
    // 0x1f4200: 0x3c010036
    ctx->pc = 0x1f4200u;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4204:
    // 0x1f4204: 0xa022eb38
    ctx->pc = 0x1f4204u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294961976), (uint8_t)GPR_U32(ctx, 2));
label_1f4208:
    // 0x1f4208: 0xdfbf0000
    ctx->pc = 0x1f4208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f420c:
    // 0x1f420c: 0x102d
    ctx->pc = 0x1f420cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4210:
    // 0x1f4210: 0x3e00008
label_1f4214:
    if (ctx->pc == 0x1F4214u) {
        ctx->pc = 0x1F4214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F4218u;
        goto label_1f4218;
    }
    ctx->pc = 0x1F4210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4214u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4218u;
label_1f4218:
    // 0x1f4218: 0x0
    ctx->pc = 0x1f4218u;
    // NOP
label_1f421c:
    // 0x1f421c: 0x0
    ctx->pc = 0x1f421cu;
    // NOP
label_1f4220:
    // 0x1f4220: 0x27bdffd0
    ctx->pc = 0x1f4220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f4224:
    // 0x1f4224: 0x3c020023
    ctx->pc = 0x1f4224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_1f4228:
    // 0x1f4228: 0xffbf0020
    ctx->pc = 0x1f4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f422c:
    // 0x1f422c: 0x3c010036
    ctx->pc = 0x1f422cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)54 << 16));
label_1f4230:
    // 0x1f4230: 0x7fb10010
    ctx->pc = 0x1f4230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f4234:
    // 0x1f4234: 0x24427440
    ctx->pc = 0x1f4234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29760));
label_1f4238:
    // 0x1f4238: 0x7fb00000
    ctx->pc = 0x1f4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f423c:
    // 0x1f423c: 0x80882d
    ctx->pc = 0x1f423cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4240:
    // 0x1f4240: 0x8023eb00
    ctx->pc = 0x1f4240u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961920)));
label_1f4244:
    // 0x1f4244: 0x3c040036
    ctx->pc = 0x1f4244u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_1f4248:
    // 0x1f4248: 0x31880
    ctx->pc = 0x1f4248u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1f424c:
    // 0x1f424c: 0x431021
    ctx->pc = 0x1f424cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f4250:
    // 0x1f4250: 0x8c420000
    ctx->pc = 0x1f4250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4254:
    // 0x1f4254: 0x40f809
label_1f4258:
    if (ctx->pc == 0x1F4258u) {
        ctx->pc = 0x1F4258u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961920));
        ctx->pc = 0x1F425Cu;
        goto label_1f425c;
    }
    ctx->pc = 0x1F4254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F425Cu);
        ctx->pc = 0x1F4258u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961920));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F425Cu; }
            if (ctx->pc != 0x1F425Cu) { return; }
        }
    }
    ctx->pc = 0x1F425Cu;
label_1f425c:
    // 0x1f425c: 0x3c050036
    ctx->pc = 0x1f425cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)54 << 16));
label_1f4260:
    // 0x1f4260: 0x40802d
    ctx->pc = 0x1f4260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4264:
    // 0x1f4264: 0x220202d
    ctx->pc = 0x1f4264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4268:
    // 0x1f4268: 0x24a5eb88
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962056));
label_1f426c:
    // 0x1f426c: 0xc041eac
label_1f4270:
    if (ctx->pc == 0x1F4270u) {
        ctx->pc = 0x1F4270u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1F4274u;
        goto label_1f4274;
    }
    ctx->pc = 0x1F426Cu;
    SET_GPR_U32(ctx, 31, 0x1F4274u);
    ctx->pc = 0x1F4270u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4274u; }
    }
    if (ctx->pc != 0x1F4274u) { return; }
    ctx->pc = 0x1F4274u;
label_1f4274:
    // 0x1f4274: 0x200102d
    ctx->pc = 0x1f4274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4278:
    // 0x1f4278: 0xdfbf0020
    ctx->pc = 0x1f4278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f427c:
    // 0x1f427c: 0x7bb10010
    ctx->pc = 0x1f427cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4280:
    // 0x1f4280: 0x7bb00000
    ctx->pc = 0x1f4280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4284:
    // 0x1f4284: 0x3e00008
label_1f4288:
    if (ctx->pc == 0x1F4288u) {
        ctx->pc = 0x1F4288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F428Cu;
        goto label_1f428c;
    }
    ctx->pc = 0x1F4284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F428Cu;
label_1f428c:
    // 0x1f428c: 0x0
    ctx->pc = 0x1f428cu;
    // NOP
label_1f4290:
    // 0x1f4290: 0x27bdfff0
    ctx->pc = 0x1f4290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f4294:
    // 0x1f4294: 0x3c040036
    ctx->pc = 0x1f4294u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
label_1f4298:
    // 0x1f4298: 0xffbf0000
    ctx->pc = 0x1f4298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f429c:
    // 0x1f429c: 0x2484eb00
    ctx->pc = 0x1f429cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961920));
label_1f42a0:
    // 0x1f42a0: 0x282d
    ctx->pc = 0x1f42a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f42a4:
    // 0x1f42a4: 0xc041f1a
label_1f42a8:
    if (ctx->pc == 0x1F42A8u) {
        ctx->pc = 0x1F42A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x1F42ACu;
        goto label_1f42ac;
    }
    ctx->pc = 0x1F42A4u;
    SET_GPR_U32(ctx, 31, 0x1F42ACu);
    ctx->pc = 0x1F42A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 148));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F42ACu; }
    }
    if (ctx->pc != 0x1F42ACu) { return; }
    ctx->pc = 0x1F42ACu;
label_1f42ac:
    // 0x1f42ac: 0xdfbf0000
    ctx->pc = 0x1f42acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f42b0:
    // 0x1f42b0: 0x102d
    ctx->pc = 0x1f42b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f42b4:
    // 0x1f42b4: 0x3e00008
label_1f42b8:
    if (ctx->pc == 0x1F42B8u) {
        ctx->pc = 0x1F42B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1F42BCu;
        goto label_1f42bc;
    }
    ctx->pc = 0x1F42B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F42B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E90u: goto label_1f3e90;
            case 0x1F3E94u: goto label_1f3e94;
            case 0x1F3E98u: goto label_1f3e98;
            case 0x1F3E9Cu: goto label_1f3e9c;
            case 0x1F3EA0u: goto label_1f3ea0;
            case 0x1F3EA4u: goto label_1f3ea4;
            case 0x1F3EA8u: goto label_1f3ea8;
            case 0x1F3EACu: goto label_1f3eac;
            case 0x1F3EB0u: goto label_1f3eb0;
            case 0x1F3EB4u: goto label_1f3eb4;
            case 0x1F3EB8u: goto label_1f3eb8;
            case 0x1F3EBCu: goto label_1f3ebc;
            case 0x1F3EC0u: goto label_1f3ec0;
            case 0x1F3EC4u: goto label_1f3ec4;
            case 0x1F3EC8u: goto label_1f3ec8;
            case 0x1F3ECCu: goto label_1f3ecc;
            case 0x1F3ED0u: goto label_1f3ed0;
            case 0x1F3ED4u: goto label_1f3ed4;
            case 0x1F3ED8u: goto label_1f3ed8;
            case 0x1F3EDCu: goto label_1f3edc;
            case 0x1F3EE0u: goto label_1f3ee0;
            case 0x1F3EE4u: goto label_1f3ee4;
            case 0x1F3EE8u: goto label_1f3ee8;
            case 0x1F3EECu: goto label_1f3eec;
            case 0x1F3EF0u: goto label_1f3ef0;
            case 0x1F3EF4u: goto label_1f3ef4;
            case 0x1F3EF8u: goto label_1f3ef8;
            case 0x1F3EFCu: goto label_1f3efc;
            case 0x1F3F00u: goto label_1f3f00;
            case 0x1F3F04u: goto label_1f3f04;
            case 0x1F3F08u: goto label_1f3f08;
            case 0x1F3F0Cu: goto label_1f3f0c;
            case 0x1F3F10u: goto label_1f3f10;
            case 0x1F3F14u: goto label_1f3f14;
            case 0x1F3F18u: goto label_1f3f18;
            case 0x1F3F1Cu: goto label_1f3f1c;
            case 0x1F3F20u: goto label_1f3f20;
            case 0x1F3F24u: goto label_1f3f24;
            case 0x1F3F28u: goto label_1f3f28;
            case 0x1F3F2Cu: goto label_1f3f2c;
            case 0x1F3F30u: goto label_1f3f30;
            case 0x1F3F34u: goto label_1f3f34;
            case 0x1F3F38u: goto label_1f3f38;
            case 0x1F3F3Cu: goto label_1f3f3c;
            case 0x1F3F40u: goto label_1f3f40;
            case 0x1F3F44u: goto label_1f3f44;
            case 0x1F3F48u: goto label_1f3f48;
            case 0x1F3F4Cu: goto label_1f3f4c;
            case 0x1F3F50u: goto label_1f3f50;
            case 0x1F3F54u: goto label_1f3f54;
            case 0x1F3F58u: goto label_1f3f58;
            case 0x1F3F5Cu: goto label_1f3f5c;
            case 0x1F3F60u: goto label_1f3f60;
            case 0x1F3F64u: goto label_1f3f64;
            case 0x1F3F68u: goto label_1f3f68;
            case 0x1F3F6Cu: goto label_1f3f6c;
            case 0x1F3F70u: goto label_1f3f70;
            case 0x1F3F74u: goto label_1f3f74;
            case 0x1F3F78u: goto label_1f3f78;
            case 0x1F3F7Cu: goto label_1f3f7c;
            case 0x1F3F80u: goto label_1f3f80;
            case 0x1F3F84u: goto label_1f3f84;
            case 0x1F3F88u: goto label_1f3f88;
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3F90u: goto label_1f3f90;
            case 0x1F3F94u: goto label_1f3f94;
            case 0x1F3F98u: goto label_1f3f98;
            case 0x1F3F9Cu: goto label_1f3f9c;
            case 0x1F3FA0u: goto label_1f3fa0;
            case 0x1F3FA4u: goto label_1f3fa4;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FACu: goto label_1f3fac;
            case 0x1F3FB0u: goto label_1f3fb0;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FB8u: goto label_1f3fb8;
            case 0x1F3FBCu: goto label_1f3fbc;
            case 0x1F3FC0u: goto label_1f3fc0;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FC8u: goto label_1f3fc8;
            case 0x1F3FCCu: goto label_1f3fcc;
            case 0x1F3FD0u: goto label_1f3fd0;
            case 0x1F3FD4u: goto label_1f3fd4;
            case 0x1F3FD8u: goto label_1f3fd8;
            case 0x1F3FDCu: goto label_1f3fdc;
            case 0x1F3FE0u: goto label_1f3fe0;
            case 0x1F3FE4u: goto label_1f3fe4;
            case 0x1F3FE8u: goto label_1f3fe8;
            case 0x1F3FECu: goto label_1f3fec;
            case 0x1F3FF0u: goto label_1f3ff0;
            case 0x1F3FF4u: goto label_1f3ff4;
            case 0x1F3FF8u: goto label_1f3ff8;
            case 0x1F3FFCu: goto label_1f3ffc;
            case 0x1F4000u: goto label_1f4000;
            case 0x1F4004u: goto label_1f4004;
            case 0x1F4008u: goto label_1f4008;
            case 0x1F400Cu: goto label_1f400c;
            case 0x1F4010u: goto label_1f4010;
            case 0x1F4014u: goto label_1f4014;
            case 0x1F4018u: goto label_1f4018;
            case 0x1F401Cu: goto label_1f401c;
            case 0x1F4020u: goto label_1f4020;
            case 0x1F4024u: goto label_1f4024;
            case 0x1F4028u: goto label_1f4028;
            case 0x1F402Cu: goto label_1f402c;
            case 0x1F4030u: goto label_1f4030;
            case 0x1F4034u: goto label_1f4034;
            case 0x1F4038u: goto label_1f4038;
            case 0x1F403Cu: goto label_1f403c;
            case 0x1F4040u: goto label_1f4040;
            case 0x1F4044u: goto label_1f4044;
            case 0x1F4048u: goto label_1f4048;
            case 0x1F404Cu: goto label_1f404c;
            case 0x1F4050u: goto label_1f4050;
            case 0x1F4054u: goto label_1f4054;
            case 0x1F4058u: goto label_1f4058;
            case 0x1F405Cu: goto label_1f405c;
            case 0x1F4060u: goto label_1f4060;
            case 0x1F4064u: goto label_1f4064;
            case 0x1F4068u: goto label_1f4068;
            case 0x1F406Cu: goto label_1f406c;
            case 0x1F4070u: goto label_1f4070;
            case 0x1F4074u: goto label_1f4074;
            case 0x1F4078u: goto label_1f4078;
            case 0x1F407Cu: goto label_1f407c;
            case 0x1F4080u: goto label_1f4080;
            case 0x1F4084u: goto label_1f4084;
            case 0x1F4088u: goto label_1f4088;
            case 0x1F408Cu: goto label_1f408c;
            case 0x1F4090u: goto label_1f4090;
            case 0x1F4094u: goto label_1f4094;
            case 0x1F4098u: goto label_1f4098;
            case 0x1F409Cu: goto label_1f409c;
            case 0x1F40A0u: goto label_1f40a0;
            case 0x1F40A4u: goto label_1f40a4;
            case 0x1F40A8u: goto label_1f40a8;
            case 0x1F40ACu: goto label_1f40ac;
            case 0x1F40B0u: goto label_1f40b0;
            case 0x1F40B4u: goto label_1f40b4;
            case 0x1F40B8u: goto label_1f40b8;
            case 0x1F40BCu: goto label_1f40bc;
            case 0x1F40C0u: goto label_1f40c0;
            case 0x1F40C4u: goto label_1f40c4;
            case 0x1F40C8u: goto label_1f40c8;
            case 0x1F40CCu: goto label_1f40cc;
            case 0x1F40D0u: goto label_1f40d0;
            case 0x1F40D4u: goto label_1f40d4;
            case 0x1F40D8u: goto label_1f40d8;
            case 0x1F40DCu: goto label_1f40dc;
            case 0x1F40E0u: goto label_1f40e0;
            case 0x1F40E4u: goto label_1f40e4;
            case 0x1F40E8u: goto label_1f40e8;
            case 0x1F40ECu: goto label_1f40ec;
            case 0x1F40F0u: goto label_1f40f0;
            case 0x1F40F4u: goto label_1f40f4;
            case 0x1F40F8u: goto label_1f40f8;
            case 0x1F40FCu: goto label_1f40fc;
            case 0x1F4100u: goto label_1f4100;
            case 0x1F4104u: goto label_1f4104;
            case 0x1F4108u: goto label_1f4108;
            case 0x1F410Cu: goto label_1f410c;
            case 0x1F4110u: goto label_1f4110;
            case 0x1F4114u: goto label_1f4114;
            case 0x1F4118u: goto label_1f4118;
            case 0x1F411Cu: goto label_1f411c;
            case 0x1F4120u: goto label_1f4120;
            case 0x1F4124u: goto label_1f4124;
            case 0x1F4128u: goto label_1f4128;
            case 0x1F412Cu: goto label_1f412c;
            case 0x1F4130u: goto label_1f4130;
            case 0x1F4134u: goto label_1f4134;
            case 0x1F4138u: goto label_1f4138;
            case 0x1F413Cu: goto label_1f413c;
            case 0x1F4140u: goto label_1f4140;
            case 0x1F4144u: goto label_1f4144;
            case 0x1F4148u: goto label_1f4148;
            case 0x1F414Cu: goto label_1f414c;
            case 0x1F4150u: goto label_1f4150;
            case 0x1F4154u: goto label_1f4154;
            case 0x1F4158u: goto label_1f4158;
            case 0x1F415Cu: goto label_1f415c;
            case 0x1F4160u: goto label_1f4160;
            case 0x1F4164u: goto label_1f4164;
            case 0x1F4168u: goto label_1f4168;
            case 0x1F416Cu: goto label_1f416c;
            case 0x1F4170u: goto label_1f4170;
            case 0x1F4174u: goto label_1f4174;
            case 0x1F4178u: goto label_1f4178;
            case 0x1F417Cu: goto label_1f417c;
            case 0x1F4180u: goto label_1f4180;
            case 0x1F4184u: goto label_1f4184;
            case 0x1F4188u: goto label_1f4188;
            case 0x1F418Cu: goto label_1f418c;
            case 0x1F4190u: goto label_1f4190;
            case 0x1F4194u: goto label_1f4194;
            case 0x1F4198u: goto label_1f4198;
            case 0x1F419Cu: goto label_1f419c;
            case 0x1F41A0u: goto label_1f41a0;
            case 0x1F41A4u: goto label_1f41a4;
            case 0x1F41A8u: goto label_1f41a8;
            case 0x1F41ACu: goto label_1f41ac;
            case 0x1F41B0u: goto label_1f41b0;
            case 0x1F41B4u: goto label_1f41b4;
            case 0x1F41B8u: goto label_1f41b8;
            case 0x1F41BCu: goto label_1f41bc;
            case 0x1F41C0u: goto label_1f41c0;
            case 0x1F41C4u: goto label_1f41c4;
            case 0x1F41C8u: goto label_1f41c8;
            case 0x1F41CCu: goto label_1f41cc;
            case 0x1F41D0u: goto label_1f41d0;
            case 0x1F41D4u: goto label_1f41d4;
            case 0x1F41D8u: goto label_1f41d8;
            case 0x1F41DCu: goto label_1f41dc;
            case 0x1F41E0u: goto label_1f41e0;
            case 0x1F41E4u: goto label_1f41e4;
            case 0x1F41E8u: goto label_1f41e8;
            case 0x1F41ECu: goto label_1f41ec;
            case 0x1F41F0u: goto label_1f41f0;
            case 0x1F41F4u: goto label_1f41f4;
            case 0x1F41F8u: goto label_1f41f8;
            case 0x1F41FCu: goto label_1f41fc;
            case 0x1F4200u: goto label_1f4200;
            case 0x1F4204u: goto label_1f4204;
            case 0x1F4208u: goto label_1f4208;
            case 0x1F420Cu: goto label_1f420c;
            case 0x1F4210u: goto label_1f4210;
            case 0x1F4214u: goto label_1f4214;
            case 0x1F4218u: goto label_1f4218;
            case 0x1F421Cu: goto label_1f421c;
            case 0x1F4220u: goto label_1f4220;
            case 0x1F4224u: goto label_1f4224;
            case 0x1F4228u: goto label_1f4228;
            case 0x1F422Cu: goto label_1f422c;
            case 0x1F4230u: goto label_1f4230;
            case 0x1F4234u: goto label_1f4234;
            case 0x1F4238u: goto label_1f4238;
            case 0x1F423Cu: goto label_1f423c;
            case 0x1F4240u: goto label_1f4240;
            case 0x1F4244u: goto label_1f4244;
            case 0x1F4248u: goto label_1f4248;
            case 0x1F424Cu: goto label_1f424c;
            case 0x1F4250u: goto label_1f4250;
            case 0x1F4254u: goto label_1f4254;
            case 0x1F4258u: goto label_1f4258;
            case 0x1F425Cu: goto label_1f425c;
            case 0x1F4260u: goto label_1f4260;
            case 0x1F4264u: goto label_1f4264;
            case 0x1F4268u: goto label_1f4268;
            case 0x1F426Cu: goto label_1f426c;
            case 0x1F4270u: goto label_1f4270;
            case 0x1F4274u: goto label_1f4274;
            case 0x1F4278u: goto label_1f4278;
            case 0x1F427Cu: goto label_1f427c;
            case 0x1F4280u: goto label_1f4280;
            case 0x1F4284u: goto label_1f4284;
            case 0x1F4288u: goto label_1f4288;
            case 0x1F428Cu: goto label_1f428c;
            case 0x1F4290u: goto label_1f4290;
            case 0x1F4294u: goto label_1f4294;
            case 0x1F4298u: goto label_1f4298;
            case 0x1F429Cu: goto label_1f429c;
            case 0x1F42A0u: goto label_1f42a0;
            case 0x1F42A4u: goto label_1f42a4;
            case 0x1F42A8u: goto label_1f42a8;
            case 0x1F42ACu: goto label_1f42ac;
            case 0x1F42B0u: goto label_1f42b0;
            case 0x1F42B4u: goto label_1f42b4;
            case 0x1F42B8u: goto label_1f42b8;
            case 0x1F42BCu: goto label_1f42bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F42BCu;
label_1f42bc:
    // 0x1f42bc: 0x0
    ctx->pc = 0x1f42bcu;
    // NOP
}
