#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00117F08
// Address: 0x117f08 - 0x1180d0
void sub_00117F08_0x117f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117f08u;

label_117f08:
    // 0x117f08: 0x27bdff80
    ctx->pc = 0x117f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_117f0c:
    // 0x117f0c: 0xffb40060
    ctx->pc = 0x117f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_117f10:
    // 0x117f10: 0xffb20040
    ctx->pc = 0x117f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_117f14:
    // 0x117f14: 0xa02d
    ctx->pc = 0x117f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117f18:
    // 0x117f18: 0xffb10030
    ctx->pc = 0x117f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_117f1c:
    // 0x117f1c: 0xffbf0070
    ctx->pc = 0x117f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_117f20:
    // 0x117f20: 0x80882d
    ctx->pc = 0x117f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_117f24:
    // 0x117f24: 0xffb30050
    ctx->pc = 0x117f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_117f28:
    // 0x117f28: 0xffb00020
    ctx->pc = 0x117f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_117f2c:
    // 0x117f2c: 0x8e220004
    ctx->pc = 0x117f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_117f30:
    // 0x117f30: 0x8e240024
    ctx->pc = 0x117f30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_117f34:
    // 0x117f34: 0x8e250008
    ctx->pc = 0x117f34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_117f38:
    // 0x117f38: 0x40f809
label_117f3c:
    if (ctx->pc == 0x117F3Cu) {
        ctx->pc = 0x117F3Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x117F40u;
        goto label_117f40;
    }
    ctx->pc = 0x117F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117F40u);
        ctx->pc = 0x117F3Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F10u: goto label_117f10;
            case 0x117F14u: goto label_117f14;
            case 0x117F18u: goto label_117f18;
            case 0x117F1Cu: goto label_117f1c;
            case 0x117F20u: goto label_117f20;
            case 0x117F24u: goto label_117f24;
            case 0x117F28u: goto label_117f28;
            case 0x117F2Cu: goto label_117f2c;
            case 0x117F30u: goto label_117f30;
            case 0x117F34u: goto label_117f34;
            case 0x117F38u: goto label_117f38;
            case 0x117F3Cu: goto label_117f3c;
            case 0x117F40u: goto label_117f40;
            case 0x117F44u: goto label_117f44;
            case 0x117F48u: goto label_117f48;
            case 0x117F4Cu: goto label_117f4c;
            case 0x117F50u: goto label_117f50;
            case 0x117F54u: goto label_117f54;
            case 0x117F58u: goto label_117f58;
            case 0x117F5Cu: goto label_117f5c;
            case 0x117F60u: goto label_117f60;
            case 0x117F64u: goto label_117f64;
            case 0x117F68u: goto label_117f68;
            case 0x117F6Cu: goto label_117f6c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F78u: goto label_117f78;
            case 0x117F7Cu: goto label_117f7c;
            case 0x117F80u: goto label_117f80;
            case 0x117F84u: goto label_117f84;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x117F90u: goto label_117f90;
            case 0x117F94u: goto label_117f94;
            case 0x117F98u: goto label_117f98;
            case 0x117F9Cu: goto label_117f9c;
            case 0x117FA0u: goto label_117fa0;
            case 0x117FA4u: goto label_117fa4;
            case 0x117FA8u: goto label_117fa8;
            case 0x117FACu: goto label_117fac;
            case 0x117FB0u: goto label_117fb0;
            case 0x117FB4u: goto label_117fb4;
            case 0x117FB8u: goto label_117fb8;
            case 0x117FBCu: goto label_117fbc;
            case 0x117FC0u: goto label_117fc0;
            case 0x117FC4u: goto label_117fc4;
            case 0x117FC8u: goto label_117fc8;
            case 0x117FCCu: goto label_117fcc;
            case 0x117FD0u: goto label_117fd0;
            case 0x117FD4u: goto label_117fd4;
            case 0x117FD8u: goto label_117fd8;
            case 0x117FDCu: goto label_117fdc;
            case 0x117FE0u: goto label_117fe0;
            case 0x117FE4u: goto label_117fe4;
            case 0x117FE8u: goto label_117fe8;
            case 0x117FECu: goto label_117fec;
            case 0x117FF0u: goto label_117ff0;
            case 0x117FF4u: goto label_117ff4;
            case 0x117FF8u: goto label_117ff8;
            case 0x117FFCu: goto label_117ffc;
            case 0x118000u: goto label_118000;
            case 0x118004u: goto label_118004;
            case 0x118008u: goto label_118008;
            case 0x11800Cu: goto label_11800c;
            case 0x118010u: goto label_118010;
            case 0x118014u: goto label_118014;
            case 0x118018u: goto label_118018;
            case 0x11801Cu: goto label_11801c;
            case 0x118020u: goto label_118020;
            case 0x118024u: goto label_118024;
            case 0x118028u: goto label_118028;
            case 0x11802Cu: goto label_11802c;
            case 0x118030u: goto label_118030;
            case 0x118034u: goto label_118034;
            case 0x118038u: goto label_118038;
            case 0x11803Cu: goto label_11803c;
            case 0x118040u: goto label_118040;
            case 0x118044u: goto label_118044;
            case 0x118048u: goto label_118048;
            case 0x11804Cu: goto label_11804c;
            case 0x118050u: goto label_118050;
            case 0x118054u: goto label_118054;
            case 0x118058u: goto label_118058;
            case 0x11805Cu: goto label_11805c;
            case 0x118060u: goto label_118060;
            case 0x118064u: goto label_118064;
            case 0x118068u: goto label_118068;
            case 0x11806Cu: goto label_11806c;
            case 0x118070u: goto label_118070;
            case 0x118074u: goto label_118074;
            case 0x118078u: goto label_118078;
            case 0x11807Cu: goto label_11807c;
            case 0x118080u: goto label_118080;
            case 0x118084u: goto label_118084;
            case 0x118088u: goto label_118088;
            case 0x11808Cu: goto label_11808c;
            case 0x118090u: goto label_118090;
            case 0x118094u: goto label_118094;
            case 0x118098u: goto label_118098;
            case 0x11809Cu: goto label_11809c;
            case 0x1180A0u: goto label_1180a0;
            case 0x1180A4u: goto label_1180a4;
            case 0x1180A8u: goto label_1180a8;
            case 0x1180ACu: goto label_1180ac;
            case 0x1180B0u: goto label_1180b0;
            case 0x1180B4u: goto label_1180b4;
            case 0x1180B8u: goto label_1180b8;
            case 0x1180BCu: goto label_1180bc;
            case 0x1180C0u: goto label_1180c0;
            case 0x1180C4u: goto label_1180c4;
            case 0x1180C8u: goto label_1180c8;
            case 0x1180CCu: goto label_1180cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117F40u; }
            if (ctx->pc != 0x117F40u) { return; }
        }
    }
    ctx->pc = 0x117F40u;
label_117f40:
    // 0x117f40: 0x40902d
    ctx->pc = 0x117f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117f44:
    // 0x117f44: 0x56400001
label_117f48:
    if (ctx->pc == 0x117F48u) {
        ctx->pc = 0x117F48u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x117F4Cu;
        goto label_117f4c;
    }
    ctx->pc = 0x117F44u;
    {
        const bool branch_taken_0x117f44 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x117f44) {
            ctx->pc = 0x117F48u;
            SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->pc = 0x117F4Cu;
            goto label_117f4c;
        }
    }
    ctx->pc = 0x117F4Cu;
label_117f4c:
    // 0x117f4c: 0x8e25000c
    ctx->pc = 0x117f4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_117f50:
    // 0x117f50: 0x18a00003
label_117f54:
    if (ctx->pc == 0x117F54u) {
        ctx->pc = 0x117F58u;
        goto label_117f58;
    }
    ctx->pc = 0x117F50u;
    {
        const bool branch_taken_0x117f50 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x117f50) {
            ctx->pc = 0x117F60u;
            goto label_117f60;
        }
    }
    ctx->pc = 0x117F58u;
label_117f58:
    // 0x117f58: 0xc045bf4
label_117f5c:
    if (ctx->pc == 0x117F5Cu) {
        ctx->pc = 0x117F5Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x117F60u;
        goto label_117f60;
    }
    ctx->pc = 0x117F58u;
    SET_GPR_U32(ctx, 31, 0x117F60u);
    ctx->pc = 0x117F5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F60u; }
    }
    if (ctx->pc != 0x117F60u) { return; }
    ctx->pc = 0x117F60u;
label_117f60:
    // 0x117f60: 0x1a800003
label_117f64:
    if (ctx->pc == 0x117F64u) {
        ctx->pc = 0x117F64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117F68u;
        goto label_117f68;
    }
    ctx->pc = 0x117F60u;
    {
        const bool branch_taken_0x117f60 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x117F64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117f60) {
            ctx->pc = 0x117F70u;
            goto label_117f70;
        }
    }
    ctx->pc = 0x117F68u;
label_117f68:
    // 0x117f68: 0xc045bf4
label_117f6c:
    if (ctx->pc == 0x117F6Cu) {
        ctx->pc = 0x117F6Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117F70u;
        goto label_117f70;
    }
    ctx->pc = 0x117F68u;
    SET_GPR_U32(ctx, 31, 0x117F70u);
    ctx->pc = 0x117F6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116FD0_0x116fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F70u; }
    }
    if (ctx->pc != 0x117F70u) { return; }
    ctx->pc = 0x117F70u;
label_117f70:
    // 0x117f70: 0xc047598
label_117f74:
    if (ctx->pc == 0x117F74u) {
        ctx->pc = 0x117F78u;
        goto label_117f78;
    }
    ctx->pc = 0x117F70u;
    SET_GPR_U32(ctx, 31, 0x117F78u);
    ctx->pc = 0x11D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D660_0x11d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F78u; }
    }
    if (ctx->pc != 0x117F78u) { return; }
    ctx->pc = 0x117F78u;
label_117f78:
    // 0x117f78: 0x8e250034
    ctx->pc = 0x117f78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_117f7c:
    // 0x117f7c: 0x30a20004
    ctx->pc = 0x117f7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 4));
label_117f80:
    // 0x117f80: 0x10400006
label_117f84:
    if (ctx->pc == 0x117F84u) {
        ctx->pc = 0x117F84u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x117F88u;
        goto label_117f88;
    }
    ctx->pc = 0x117F80u;
    {
        const bool branch_taken_0x117f80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x117F84u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x117f80) {
            ctx->pc = 0x117F9Cu;
            goto label_117f9c;
        }
    }
    ctx->pc = 0x117F88u;
label_117f88:
    // 0x117f88: 0x3c040026
    ctx->pc = 0x117f88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
label_117f8c:
    // 0x117f8c: 0xc045cd0
label_117f90:
    if (ctx->pc == 0x117F90u) {
        ctx->pc = 0x117F90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
        ctx->pc = 0x117F94u;
        goto label_117f94;
    }
    ctx->pc = 0x117F8Cu;
    SET_GPR_U32(ctx, 31, 0x117F94u);
    ctx->pc = 0x117F90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
    ctx->pc = 0x117340u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117340_0x117340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117F94u; }
    }
    if (ctx->pc != 0x117F94u) { return; }
    ctx->pc = 0x117F94u;
label_117f94:
    // 0x117f94: 0x10000005
label_117f98:
    if (ctx->pc == 0x117F98u) {
        ctx->pc = 0x117F98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117F9Cu;
        goto label_117f9c;
    }
    ctx->pc = 0x117F94u;
    {
        const bool branch_taken_0x117f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117F98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x117f94) {
            ctx->pc = 0x117FACu;
            goto label_117fac;
        }
    }
    ctx->pc = 0x117F9Cu;
label_117f9c:
    // 0x117f9c: 0x3c040026
    ctx->pc = 0x117f9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
label_117fa0:
    // 0x117fa0: 0xc045cc4
label_117fa4:
    if (ctx->pc == 0x117FA4u) {
        ctx->pc = 0x117FA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
        ctx->pc = 0x117FA8u;
        goto label_117fa8;
    }
    ctx->pc = 0x117FA0u;
    SET_GPR_U32(ctx, 31, 0x117FA8u);
    ctx->pc = 0x117FA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
    ctx->pc = 0x117310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117310_0x117310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FA8u; }
    }
    if (ctx->pc != 0x117FA8u) { return; }
    ctx->pc = 0x117FA8u;
label_117fa8:
    // 0x117fa8: 0x40802d
    ctx->pc = 0x117fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117fac:
    // 0x117fac: 0xc0475ae
label_117fb0:
    if (ctx->pc == 0x117FB0u) {
        ctx->pc = 0x117FB4u;
        goto label_117fb4;
    }
    ctx->pc = 0x117FACu;
    SET_GPR_U32(ctx, 31, 0x117FB4u);
    ctx->pc = 0x11D6B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6B8_0x11d6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FB4u; }
    }
    if (ctx->pc != 0x117FB4u) { return; }
    ctx->pc = 0x117FB4u;
label_117fb4:
    // 0x117fb4: 0x3c038000
    ctx->pc = 0x117fb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
label_117fb8:
    // 0x117fb8: 0x8e24001c
    ctx->pc = 0x117fb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_117fbc:
    // 0x117fbc: 0x3463000a
    ctx->pc = 0x117fbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 10));
label_117fc0:
    // 0x117fc0: 0xae030020
    ctx->pc = 0x117fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_117fc4:
    // 0x117fc4: 0xae04001c
    ctx->pc = 0x117fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_117fc8:
    // 0x117fc8: 0x8e220030
    ctx->pc = 0x117fc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_117fcc:
    // 0x117fcc: 0x5040000e
label_117fd0:
    if (ctx->pc == 0x117FD0u) {
        ctx->pc = 0x117FD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x117FD4u;
        goto label_117fd4;
    }
    ctx->pc = 0x117FCCu;
    {
        const bool branch_taken_0x117fcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x117fcc) {
            ctx->pc = 0x117FD0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->pc = 0x118008u;
            goto label_118008;
        }
    }
    ctx->pc = 0x117FD4u;
label_117fd4:
    // 0x117fd4: 0x0
    ctx->pc = 0x117fd4u;
    // NOP
label_117fd8:
    // 0x117fd8: 0x3c048000
    ctx->pc = 0x117fd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
label_117fdc:
    // 0x117fdc: 0x8e280028
    ctx->pc = 0x117fdcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_117fe0:
    // 0x117fe0: 0x34840008
    ctx->pc = 0x117fe0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
label_117fe4:
    // 0x117fe4: 0x200282d
    ctx->pc = 0x117fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117fe8:
    // 0x117fe8: 0x24060040
    ctx->pc = 0x117fe8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
label_117fec:
    // 0x117fec: 0x240382d
    ctx->pc = 0x117fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_117ff0:
    // 0x117ff0: 0xc045b82
label_117ff4:
    if (ctx->pc == 0x117FF4u) {
        ctx->pc = 0x117FF4u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117FF8u;
        goto label_117ff8;
    }
    ctx->pc = 0x117FF0u;
    SET_GPR_U32(ctx, 31, 0x117FF8u);
    ctx->pc = 0x117FF4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E08_0x116e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FF8u; }
    }
    if (ctx->pc != 0x117FF8u) { return; }
    ctx->pc = 0x117FF8u;
label_117ff8:
    // 0x117ff8: 0x1040fff7
label_117ffc:
    if (ctx->pc == 0x117FFCu) {
        ctx->pc = 0x117FFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x118000u;
        goto label_118000;
    }
    ctx->pc = 0x117FF8u;
    {
        const bool branch_taken_0x117ff8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x117FFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x117ff8) {
            ctx->pc = 0x117FD8u;
            goto label_117fd8;
        }
    }
    ctx->pc = 0x118000u;
label_118000:
    // 0x118000: 0x1000002c
label_118004:
    if (ctx->pc == 0x118004u) {
        ctx->pc = 0x118004u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x118008u;
        goto label_118008;
    }
    ctx->pc = 0x118000u;
    {
        const bool branch_taken_0x118000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x118004u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x118000) {
            ctx->pc = 0x1180B4u;
            goto label_1180b4;
        }
    }
    ctx->pc = 0x118008u;
label_118008:
    // 0x118008: 0x982d
    ctx->pc = 0x118008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11800c:
    // 0x11800c: 0x1a800007
label_118010:
    if (ctx->pc == 0x118010u) {
        ctx->pc = 0x118010u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x118014u;
        goto label_118014;
    }
    ctx->pc = 0x11800Cu;
    {
        const bool branch_taken_0x11800c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x118010u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x11800c) {
            ctx->pc = 0x11802Cu;
            goto label_11802c;
        }
    }
    ctx->pc = 0x118014u;
label_118014:
    // 0x118014: 0x8e220028
    ctx->pc = 0x118014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_118018:
    // 0x118018: 0x24130001
    ctx->pc = 0x118018u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_11801c:
    // 0x11801c: 0xafb20000
    ctx->pc = 0x11801cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_118020:
    // 0x118020: 0xafa20004
    ctx->pc = 0x118020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_118024:
    // 0x118024: 0xafb40008
    ctx->pc = 0x118024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_118028:
    // 0x118028: 0xafa0000c
    ctx->pc = 0x118028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_11802c:
    // 0x11802c: 0x132900
    ctx->pc = 0x11802cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 4));
label_118030:
    // 0x118030: 0x8e240020
    ctx->pc = 0x118030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_118034:
    // 0x118034: 0x3a51821
    ctx->pc = 0x118034u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_118038:
    // 0x118038: 0x27a20004
    ctx->pc = 0x118038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 4));
label_11803c:
    // 0x11803c: 0xac700000
    ctx->pc = 0x11803cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_118040:
    // 0x118040: 0x451021
    ctx->pc = 0x118040u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_118044:
    // 0x118044: 0xac440000
    ctx->pc = 0x118044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_118048:
    // 0x118048: 0x27a30008
    ctx->pc = 0x118048u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 8));
label_11804c:
    // 0x11804c: 0x651821
    ctx->pc = 0x11804cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_118050:
    // 0x118050: 0x24040040
    ctx->pc = 0x118050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
label_118054:
    // 0x118054: 0x27a2000c
    ctx->pc = 0x118054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 12));
label_118058:
    // 0x118058: 0xac640000
    ctx->pc = 0x118058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_11805c:
    // 0x11805c: 0x451021
    ctx->pc = 0x11805cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_118060:
    // 0x118060: 0x26730001
    ctx->pc = 0x118060u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_118064:
    // 0x118064: 0xac400000
    ctx->pc = 0x118064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_118068:
    // 0x118068: 0x3a0202d
    ctx->pc = 0x118068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11806c:
    // 0x11806c: 0x0
    ctx->pc = 0x11806cu;
    // NOP
label_118070:
    // 0x118070: 0xc045278
label_118074:
    if (ctx->pc == 0x118074u) {
        ctx->pc = 0x118074u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x118078u;
        goto label_118078;
    }
    ctx->pc = 0x118070u;
    SET_GPR_U32(ctx, 31, 0x118078u);
    ctx->pc = 0x118074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1149E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001149E0_0x1149e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118078u; }
    }
    if (ctx->pc != 0x118078u) { return; }
    ctx->pc = 0x118078u;
label_118078:
    // 0x118078: 0x1440000d
label_11807c:
    if (ctx->pc == 0x11807Cu) {
        ctx->pc = 0x11807Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x118080u;
        goto label_118080;
    }
    ctx->pc = 0x118078u;
    {
        const bool branch_taken_0x118078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11807Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x118078) {
            ctx->pc = 0x1180B0u;
            goto label_1180b0;
        }
    }
    ctx->pc = 0x118080u;
label_118080:
    // 0x118080: 0x3c030010
    ctx->pc = 0x118080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_118084:
    // 0x118084: 0x2404ffff
    ctx->pc = 0x118084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_118088:
    // 0x118088: 0x2463ffff
    ctx->pc = 0x118088u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_11808c:
    // 0x11808c: 0x0
    ctx->pc = 0x11808cu;
    // NOP
label_118090:
    // 0x118090: 0x0
    ctx->pc = 0x118090u;
    // NOP
label_118094:
    // 0x118094: 0x0
    ctx->pc = 0x118094u;
    // NOP
label_118098:
    // 0x118098: 0x0
    ctx->pc = 0x118098u;
    // NOP
label_11809c:
    // 0x11809c: 0x1464fffa
label_1180a0:
    if (ctx->pc == 0x1180A0u) {
        ctx->pc = 0x1180A4u;
        goto label_1180a4;
    }
    ctx->pc = 0x11809Cu;
    {
        const bool branch_taken_0x11809c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x11809c) {
            ctx->pc = 0x118088u;
            goto label_118088;
        }
    }
    ctx->pc = 0x1180A4u;
label_1180a4:
    // 0x1180a4: 0x5040fff2
label_1180a8:
    if (ctx->pc == 0x1180A8u) {
        ctx->pc = 0x1180A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1180ACu;
        goto label_1180ac;
    }
    ctx->pc = 0x1180A4u;
    {
        const bool branch_taken_0x1180a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1180a4) {
            ctx->pc = 0x1180A8u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x118070u;
            goto label_118070;
        }
    }
    ctx->pc = 0x1180ACu;
label_1180ac:
    // 0x1180ac: 0xdfbf0070
    ctx->pc = 0x1180acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1180b0:
    // 0x1180b0: 0xdfb40060
    ctx->pc = 0x1180b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1180b4:
    // 0x1180b4: 0xdfb30050
    ctx->pc = 0x1180b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1180b8:
    // 0x1180b8: 0xdfb20040
    ctx->pc = 0x1180b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1180bc:
    // 0x1180bc: 0xdfb10030
    ctx->pc = 0x1180bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1180c0:
    // 0x1180c0: 0xdfb00020
    ctx->pc = 0x1180c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1180c4:
    // 0x1180c4: 0x3e00008
label_1180c8:
    if (ctx->pc == 0x1180C8u) {
        ctx->pc = 0x1180C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1180CCu;
        goto label_1180cc;
    }
    ctx->pc = 0x1180C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117F08u: goto label_117f08;
            case 0x117F0Cu: goto label_117f0c;
            case 0x117F10u: goto label_117f10;
            case 0x117F14u: goto label_117f14;
            case 0x117F18u: goto label_117f18;
            case 0x117F1Cu: goto label_117f1c;
            case 0x117F20u: goto label_117f20;
            case 0x117F24u: goto label_117f24;
            case 0x117F28u: goto label_117f28;
            case 0x117F2Cu: goto label_117f2c;
            case 0x117F30u: goto label_117f30;
            case 0x117F34u: goto label_117f34;
            case 0x117F38u: goto label_117f38;
            case 0x117F3Cu: goto label_117f3c;
            case 0x117F40u: goto label_117f40;
            case 0x117F44u: goto label_117f44;
            case 0x117F48u: goto label_117f48;
            case 0x117F4Cu: goto label_117f4c;
            case 0x117F50u: goto label_117f50;
            case 0x117F54u: goto label_117f54;
            case 0x117F58u: goto label_117f58;
            case 0x117F5Cu: goto label_117f5c;
            case 0x117F60u: goto label_117f60;
            case 0x117F64u: goto label_117f64;
            case 0x117F68u: goto label_117f68;
            case 0x117F6Cu: goto label_117f6c;
            case 0x117F70u: goto label_117f70;
            case 0x117F74u: goto label_117f74;
            case 0x117F78u: goto label_117f78;
            case 0x117F7Cu: goto label_117f7c;
            case 0x117F80u: goto label_117f80;
            case 0x117F84u: goto label_117f84;
            case 0x117F88u: goto label_117f88;
            case 0x117F8Cu: goto label_117f8c;
            case 0x117F90u: goto label_117f90;
            case 0x117F94u: goto label_117f94;
            case 0x117F98u: goto label_117f98;
            case 0x117F9Cu: goto label_117f9c;
            case 0x117FA0u: goto label_117fa0;
            case 0x117FA4u: goto label_117fa4;
            case 0x117FA8u: goto label_117fa8;
            case 0x117FACu: goto label_117fac;
            case 0x117FB0u: goto label_117fb0;
            case 0x117FB4u: goto label_117fb4;
            case 0x117FB8u: goto label_117fb8;
            case 0x117FBCu: goto label_117fbc;
            case 0x117FC0u: goto label_117fc0;
            case 0x117FC4u: goto label_117fc4;
            case 0x117FC8u: goto label_117fc8;
            case 0x117FCCu: goto label_117fcc;
            case 0x117FD0u: goto label_117fd0;
            case 0x117FD4u: goto label_117fd4;
            case 0x117FD8u: goto label_117fd8;
            case 0x117FDCu: goto label_117fdc;
            case 0x117FE0u: goto label_117fe0;
            case 0x117FE4u: goto label_117fe4;
            case 0x117FE8u: goto label_117fe8;
            case 0x117FECu: goto label_117fec;
            case 0x117FF0u: goto label_117ff0;
            case 0x117FF4u: goto label_117ff4;
            case 0x117FF8u: goto label_117ff8;
            case 0x117FFCu: goto label_117ffc;
            case 0x118000u: goto label_118000;
            case 0x118004u: goto label_118004;
            case 0x118008u: goto label_118008;
            case 0x11800Cu: goto label_11800c;
            case 0x118010u: goto label_118010;
            case 0x118014u: goto label_118014;
            case 0x118018u: goto label_118018;
            case 0x11801Cu: goto label_11801c;
            case 0x118020u: goto label_118020;
            case 0x118024u: goto label_118024;
            case 0x118028u: goto label_118028;
            case 0x11802Cu: goto label_11802c;
            case 0x118030u: goto label_118030;
            case 0x118034u: goto label_118034;
            case 0x118038u: goto label_118038;
            case 0x11803Cu: goto label_11803c;
            case 0x118040u: goto label_118040;
            case 0x118044u: goto label_118044;
            case 0x118048u: goto label_118048;
            case 0x11804Cu: goto label_11804c;
            case 0x118050u: goto label_118050;
            case 0x118054u: goto label_118054;
            case 0x118058u: goto label_118058;
            case 0x11805Cu: goto label_11805c;
            case 0x118060u: goto label_118060;
            case 0x118064u: goto label_118064;
            case 0x118068u: goto label_118068;
            case 0x11806Cu: goto label_11806c;
            case 0x118070u: goto label_118070;
            case 0x118074u: goto label_118074;
            case 0x118078u: goto label_118078;
            case 0x11807Cu: goto label_11807c;
            case 0x118080u: goto label_118080;
            case 0x118084u: goto label_118084;
            case 0x118088u: goto label_118088;
            case 0x11808Cu: goto label_11808c;
            case 0x118090u: goto label_118090;
            case 0x118094u: goto label_118094;
            case 0x118098u: goto label_118098;
            case 0x11809Cu: goto label_11809c;
            case 0x1180A0u: goto label_1180a0;
            case 0x1180A4u: goto label_1180a4;
            case 0x1180A8u: goto label_1180a8;
            case 0x1180ACu: goto label_1180ac;
            case 0x1180B0u: goto label_1180b0;
            case 0x1180B4u: goto label_1180b4;
            case 0x1180B8u: goto label_1180b8;
            case 0x1180BCu: goto label_1180bc;
            case 0x1180C0u: goto label_1180c0;
            case 0x1180C4u: goto label_1180c4;
            case 0x1180C8u: goto label_1180c8;
            case 0x1180CCu: goto label_1180cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1180CCu;
label_1180cc:
    // 0x1180cc: 0x0
    ctx->pc = 0x1180ccu;
    // NOP
}
