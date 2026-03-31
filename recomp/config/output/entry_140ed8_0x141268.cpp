#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_140ed8
// Address: 0x140ed8 - 0x141268
void entry_140ed8_0x141268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x140ed8u;

label_140ed8:
    // 0x140ed8: 0x27bdfff0
    ctx->pc = 0x140ed8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_140edc:
    // 0x140edc: 0x3c030023
    ctx->pc = 0x140edcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_140ee0:
    // 0x140ee0: 0xffbf0000
    ctx->pc = 0x140ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_140ee4:
    // 0x140ee4: 0x24639a74
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941300));
label_140ee8:
    // 0x140ee8: 0x8c620000
    ctx->pc = 0x140ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_140eec:
    // 0x140eec: 0x2442ffff
    ctx->pc = 0x140eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_140ef0:
    // 0x140ef0: 0x14400005
label_140ef4:
    if (ctx->pc == 0x140EF4u) {
        ctx->pc = 0x140EF4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x140EF8u;
        goto label_140ef8;
    }
    ctx->pc = 0x140EF0u;
    {
        const bool branch_taken_0x140ef0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x140EF4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x140ef0) {
            ctx->pc = 0x140F08u;
            goto label_140f08;
        }
    }
    ctx->pc = 0x140EF8u;
label_140ef8:
    // 0x140ef8: 0xdfbf0000
    ctx->pc = 0x140ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140efc:
    // 0x140efc: 0x804e4fa
label_140f00:
    if (ctx->pc == 0x140F00u) {
        ctx->pc = 0x140F00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x140F04u;
        goto label_140f04;
    }
    ctx->pc = 0x140EFCu;
    ctx->pc = 0x140F00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1393E8u;
    sub_001393E8_0x1393e8(rdram, ctx, runtime); return;
    ctx->pc = 0x140F04u;
label_140f04:
    // 0x140f04: 0x0
    ctx->pc = 0x140f04u;
    // NOP
label_140f08:
    // 0x140f08: 0xdfbf0000
    ctx->pc = 0x140f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140f0c:
    // 0x140f0c: 0x3e00008
label_140f10:
    if (ctx->pc == 0x140F10u) {
        ctx->pc = 0x140F10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x140F14u;
        goto label_140f14;
    }
    ctx->pc = 0x140F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140F10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140F14u;
label_140f14:
    // 0x140f14: 0x0
    ctx->pc = 0x140f14u;
    // NOP
label_140f18:
    // 0x140f18: 0x27bdffe0
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_140f1c:
    // 0x140f1c: 0xffb00000
    ctx->pc = 0x140f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_140f20:
    // 0x140f20: 0xa0802d
    ctx->pc = 0x140f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140f24:
    // 0x140f24: 0xffb10008
    ctx->pc = 0x140f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_140f28:
    // 0x140f28: 0x16000009
label_140f2c:
    if (ctx->pc == 0x140F2Cu) {
        ctx->pc = 0x140F2Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x140F30u;
        goto label_140f30;
    }
    ctx->pc = 0x140F28u;
    {
        const bool branch_taken_0x140f28 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x140F2Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x140f28) {
            ctx->pc = 0x140F50u;
            goto label_140f50;
        }
    }
    ctx->pc = 0x140F30u;
label_140f30:
    // 0x140f30: 0x0
    ctx->pc = 0x140f30u;
    // NOP
label_140f34:
    // 0x140f34: 0x0
    ctx->pc = 0x140f34u;
    // NOP
label_140f38:
    // 0x140f38: 0x0
    ctx->pc = 0x140f38u;
    // NOP
label_140f3c:
    // 0x140f3c: 0x0
    ctx->pc = 0x140f3cu;
    // NOP
label_140f40:
    // 0x140f40: 0x0
    ctx->pc = 0x140f40u;
    // NOP
label_140f44:
    // 0x140f44: 0x1000fffa
label_140f48:
    if (ctx->pc == 0x140F48u) {
        ctx->pc = 0x140F4Cu;
        goto label_140f4c;
    }
    ctx->pc = 0x140F44u;
    {
        const bool branch_taken_0x140f44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x140f44) {
            ctx->pc = 0x140F30u;
            goto label_140f30;
        }
    }
    ctx->pc = 0x140F4Cu;
label_140f4c:
    // 0x140f4c: 0x0
    ctx->pc = 0x140f4cu;
    // NOP
label_140f50:
    // 0x140f50: 0xc04fc96
label_140f54:
    if (ctx->pc == 0x140F54u) {
        ctx->pc = 0x140F54u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x140F58u;
        goto label_140f58;
    }
    ctx->pc = 0x140F50u;
    SET_GPR_U32(ctx, 31, 0x140F58u);
    ctx->pc = 0x140F54u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140F58u; }
    }
    if (ctx->pc != 0x140F58u) { return; }
    ctx->pc = 0x140F58u;
label_140f58:
    // 0x140f58: 0x5a200012
label_140f5c:
    if (ctx->pc == 0x140F5Cu) {
        ctx->pc = 0x140F5Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x140F60u;
        goto label_140f60;
    }
    ctx->pc = 0x140F58u;
    {
        const bool branch_taken_0x140f58 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x140f58) {
            ctx->pc = 0x140F5Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x140FA4u;
            goto label_140fa4;
        }
    }
    ctx->pc = 0x140F60u;
label_140f60:
    // 0x140f60: 0x200282d
    ctx->pc = 0x140f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140f64:
    // 0x140f64: 0x0
    ctx->pc = 0x140f64u;
    // NOP
label_140f68:
    // 0x140f68: 0x24b00010
    ctx->pc = 0x140f68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 16));
label_140f6c:
    // 0x140f6c: 0x82020000
    ctx->pc = 0x140f6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_140f70:
    // 0x140f70: 0x54400009
label_140f74:
    if (ctx->pc == 0x140F74u) {
        ctx->pc = 0x140F74u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x140F78u;
        goto label_140f78;
    }
    ctx->pc = 0x140F70u;
    {
        const bool branch_taken_0x140f70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x140f70) {
            ctx->pc = 0x140F74u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x140F98u;
            goto label_140f98;
        }
    }
    ctx->pc = 0x140F78u;
label_140f78:
    // 0x140f78: 0x8ca20014
    ctx->pc = 0x140f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_140f7c:
    // 0x140f7c: 0x24a60018
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 24));
label_140f80:
    // 0x140f80: 0x8c440004
    ctx->pc = 0x140f80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_140f84:
    // 0x140f84: 0x8c830000
    ctx->pc = 0x140f84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_140f88:
    // 0x140f88: 0x8c620020
    ctx->pc = 0x140f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_140f8c:
    // 0x140f8c: 0x40f809
label_140f90:
    if (ctx->pc == 0x140F90u) {
        ctx->pc = 0x140F90u;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->pc = 0x140F94u;
        goto label_140f94;
    }
    ctx->pc = 0x140F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140F94u);
        ctx->pc = 0x140F90u;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x140F94u; }
            if (ctx->pc != 0x140F94u) { return; }
        }
    }
    ctx->pc = 0x140F94u;
label_140f94:
    // 0x140f94: 0x2631ffff
    ctx->pc = 0x140f94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_140f98:
    // 0x140f98: 0x1620fff3
label_140f9c:
    if (ctx->pc == 0x140F9Cu) {
        ctx->pc = 0x140F9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x140FA0u;
        goto label_140fa0;
    }
    ctx->pc = 0x140F98u;
    {
        const bool branch_taken_0x140f98 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x140F9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x140f98) {
            ctx->pc = 0x140F68u;
            goto label_140f68;
        }
    }
    ctx->pc = 0x140FA0u;
label_140fa0:
    // 0x140fa0: 0xdfb00000
    ctx->pc = 0x140fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140fa4:
    // 0x140fa4: 0xdfb10008
    ctx->pc = 0x140fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_140fa8:
    // 0x140fa8: 0xdfbf0010
    ctx->pc = 0x140fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140fac:
    // 0x140fac: 0x804fc9c
label_140fb0:
    if (ctx->pc == 0x140FB0u) {
        ctx->pc = 0x140FB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x140FB4u;
        goto label_140fb4;
    }
    ctx->pc = 0x140FACu;
    ctx->pc = 0x140FB0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x140FB4u;
label_140fb4:
    // 0x140fb4: 0x0
    ctx->pc = 0x140fb4u;
    // NOP
label_140fb8:
    // 0x140fb8: 0x27bdffa0
    ctx->pc = 0x140fb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_140fbc:
    // 0x140fbc: 0xffb10018
    ctx->pc = 0x140fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_140fc0:
    // 0x140fc0: 0xffb20020
    ctx->pc = 0x140fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_140fc4:
    // 0x140fc4: 0x902d
    ctx->pc = 0x140fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140fc8:
    // 0x140fc8: 0xffb30028
    ctx->pc = 0x140fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_140fcc:
    // 0x140fcc: 0x982d
    ctx->pc = 0x140fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140fd0:
    // 0x140fd0: 0xffb50038
    ctx->pc = 0x140fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_140fd4:
    // 0x140fd4: 0xffb60040
    ctx->pc = 0x140fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_140fd8:
    // 0x140fd8: 0xa0b02d
    ctx->pc = 0x140fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140fdc:
    // 0x140fdc: 0xffb70048
    ctx->pc = 0x140fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_140fe0:
    // 0x140fe0: 0x24170001
    ctx->pc = 0x140fe0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_140fe4:
    // 0x140fe4: 0xffb00010
    ctx->pc = 0x140fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_140fe8:
    // 0x140fe8: 0xffb40030
    ctx->pc = 0x140fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_140fec:
    // 0x140fec: 0xffbf0050
    ctx->pc = 0x140fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_140ff0:
    // 0x140ff0: 0xc04fc96
label_140ff4:
    if (ctx->pc == 0x140FF4u) {
        ctx->pc = 0x140FF4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 22), 16));
        ctx->pc = 0x140FF8u;
        goto label_140ff8;
    }
    ctx->pc = 0x140FF0u;
    SET_GPR_U32(ctx, 31, 0x140FF8u);
    ctx->pc = 0x140FF4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 22), 16));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FF8u; }
    }
    if (ctx->pc != 0x140FF8u) { return; }
    ctx->pc = 0x140FF8u;
label_140ff8:
    // 0x140ff8: 0x3c020023
    ctx->pc = 0x140ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_140ffc:
    // 0x140ffc: 0x24519a90
    ctx->pc = 0x140ffcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294941328));
label_141000:
    // 0x141000: 0x82220000
    ctx->pc = 0x141000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_141004:
    // 0x141004: 0x5457001f
label_141008:
    if (ctx->pc == 0x141008u) {
        ctx->pc = 0x141008u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x14100Cu;
        goto label_14100c;
    }
    ctx->pc = 0x141004u;
    {
        const bool branch_taken_0x141004 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        if (branch_taken_0x141004) {
            ctx->pc = 0x141008u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x141084u;
            goto label_141084;
        }
    }
    ctx->pc = 0x14100Cu;
label_14100c:
    // 0x14100c: 0x121100
    ctx->pc = 0x14100cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
label_141010:
    // 0x141010: 0x24140080
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 128));
label_141014:
    // 0x141014: 0x1000000e
label_141018:
    if (ctx->pc == 0x141018u) {
        ctx->pc = 0x141018u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->pc = 0x14101Cu;
        goto label_14101c;
    }
    ctx->pc = 0x141014u;
    {
        const bool branch_taken_0x141014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x141018u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x141014) {
            ctx->pc = 0x141050u;
            goto label_141050;
        }
    }
    ctx->pc = 0x14101Cu;
label_14101c:
    // 0x14101c: 0x0
    ctx->pc = 0x14101cu;
    // NOP
label_141020:
    // 0x141020: 0x26520001
    ctx->pc = 0x141020u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_141024:
    // 0x141024: 0x9222000c
    ctx->pc = 0x141024u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_141028:
    // 0x141028: 0x8e230010
    ctx->pc = 0x141028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_14102c:
    // 0x14102c: 0xa2020001
    ctx->pc = 0x14102cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_141030:
    // 0x141030: 0xae030004
    ctx->pc = 0x141030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_141034:
    // 0x141034: 0x96220002
    ctx->pc = 0x141034u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_141038:
    // 0x141038: 0x6ba30007
    ctx->pc = 0x141038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_14103c:
    // 0x14103c: 0x6fa30000
    ctx->pc = 0x14103cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_141040:
    // 0x141040: 0xb203000f
    ctx->pc = 0x141040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_141044:
    // 0x141044: 0xb6030008
    ctx->pc = 0x141044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_141048:
    // 0x141048: 0xa6020002
    ctx->pc = 0x141048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_14104c:
    // 0x14104c: 0x26100010
    ctx->pc = 0x14104cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_141050:
    // 0x141050: 0x1254000f
label_141054:
    if (ctx->pc == 0x141054u) {
        ctx->pc = 0x141054u;
        SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
        ctx->pc = 0x141058u;
        goto label_141058;
    }
    ctx->pc = 0x141050u;
    {
        const bool branch_taken_0x141050 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 20));
        ctx->pc = 0x141054u;
        SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
        if (branch_taken_0x141050) {
            ctx->pc = 0x141090u;
            goto label_141090;
        }
    }
    ctx->pc = 0x141058u;
label_141058:
    // 0x141058: 0x8e240004
    ctx->pc = 0x141058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14105c:
    // 0x14105c: 0x8e25000c
    ctx->pc = 0x14105cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_141060:
    // 0x141060: 0x34c6ffff
    ctx->pc = 0x141060u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_141064:
    // 0x141064: 0x8c830000
    ctx->pc = 0x141064u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141068:
    // 0x141068: 0x8c620018
    ctx->pc = 0x141068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_14106c:
    // 0x14106c: 0x40f809
label_141070:
    if (ctx->pc == 0x141070u) {
        ctx->pc = 0x141070u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141074u;
        goto label_141074;
    }
    ctx->pc = 0x14106Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141074u);
        ctx->pc = 0x141070u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141074u; }
            if (ctx->pc != 0x141074u) { return; }
        }
    }
    ctx->pc = 0x141074u;
label_141074:
    // 0x141074: 0x8fa30004
    ctx->pc = 0x141074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_141078:
    // 0x141078: 0x5460ffe9
label_14107c:
    if (ctx->pc == 0x14107Cu) {
        ctx->pc = 0x14107Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x141080u;
        goto label_141080;
    }
    ctx->pc = 0x141078u;
    {
        const bool branch_taken_0x141078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x141078) {
            ctx->pc = 0x14107Cu;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x141080u;
label_141080:
    // 0x141080: 0x26730001
    ctx->pc = 0x141080u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_141084:
    // 0x141084: 0x2a620020
    ctx->pc = 0x141084u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 32));
label_141088:
    // 0x141088: 0x1440ffdd
label_14108c:
    if (ctx->pc == 0x14108Cu) {
        ctx->pc = 0x14108Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x141090u;
        goto label_141090;
    }
    ctx->pc = 0x141088u;
    {
        const bool branch_taken_0x141088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14108Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
        if (branch_taken_0x141088) {
            ctx->pc = 0x141000u;
            goto label_141000;
        }
    }
    ctx->pc = 0x141090u;
label_141090:
    // 0x141090: 0xc04fc9c
label_141094:
    if (ctx->pc == 0x141094u) {
        ctx->pc = 0x141098u;
        goto label_141098;
    }
    ctx->pc = 0x141090u;
    SET_GPR_U32(ctx, 31, 0x141098u);
    ctx->pc = 0x13F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F270_0x13f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141098u; }
    }
    if (ctx->pc != 0x141098u) { return; }
    ctx->pc = 0x141098u;
label_141098:
    // 0x141098: 0xaed20000
    ctx->pc = 0x141098u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_14109c:
    // 0x14109c: 0xdfb00010
    ctx->pc = 0x14109cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1410a0:
    // 0x1410a0: 0xdfb10018
    ctx->pc = 0x1410a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1410a4:
    // 0x1410a4: 0xdfb20020
    ctx->pc = 0x1410a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1410a8:
    // 0x1410a8: 0xdfb30028
    ctx->pc = 0x1410a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1410ac:
    // 0x1410ac: 0xdfb40030
    ctx->pc = 0x1410acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1410b0:
    // 0x1410b0: 0xdfb50038
    ctx->pc = 0x1410b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1410b4:
    // 0x1410b4: 0xdfb60040
    ctx->pc = 0x1410b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1410b8:
    // 0x1410b8: 0xdfb70048
    ctx->pc = 0x1410b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1410bc:
    // 0x1410bc: 0xdfbf0050
    ctx->pc = 0x1410bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1410c0:
    // 0x1410c0: 0x3e00008
label_1410c4:
    if (ctx->pc == 0x1410C4u) {
        ctx->pc = 0x1410C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1410C8u;
        goto label_1410c8;
    }
    ctx->pc = 0x1410C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1410C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1410C8u;
label_1410c8:
    // 0x1410c8: 0x27bdffe0
    ctx->pc = 0x1410c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1410cc:
    // 0x1410cc: 0xffb00000
    ctx->pc = 0x1410ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1410d0:
    // 0x1410d0: 0xa0802d
    ctx->pc = 0x1410d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1410d4:
    // 0x1410d4: 0xffb10008
    ctx->pc = 0x1410d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1410d8:
    // 0x1410d8: 0x16000009
label_1410dc:
    if (ctx->pc == 0x1410DCu) {
        ctx->pc = 0x1410DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1410E0u;
        goto label_1410e0;
    }
    ctx->pc = 0x1410D8u;
    {
        const bool branch_taken_0x1410d8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1410DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1410d8) {
            ctx->pc = 0x141100u;
            goto label_141100;
        }
    }
    ctx->pc = 0x1410E0u;
label_1410e0:
    // 0x1410e0: 0x0
    ctx->pc = 0x1410e0u;
    // NOP
label_1410e4:
    // 0x1410e4: 0x0
    ctx->pc = 0x1410e4u;
    // NOP
label_1410e8:
    // 0x1410e8: 0x0
    ctx->pc = 0x1410e8u;
    // NOP
label_1410ec:
    // 0x1410ec: 0x0
    ctx->pc = 0x1410ecu;
    // NOP
label_1410f0:
    // 0x1410f0: 0x0
    ctx->pc = 0x1410f0u;
    // NOP
label_1410f4:
    // 0x1410f4: 0x1000fffa
label_1410f8:
    if (ctx->pc == 0x1410F8u) {
        ctx->pc = 0x1410FCu;
        goto label_1410fc;
    }
    ctx->pc = 0x1410F4u;
    {
        const bool branch_taken_0x1410f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1410f4) {
            ctx->pc = 0x1410E0u;
            goto label_1410e0;
        }
    }
    ctx->pc = 0x1410FCu;
label_1410fc:
    // 0x1410fc: 0x0
    ctx->pc = 0x1410fcu;
    // NOP
label_141100:
    // 0x141100: 0xc04fc96
label_141104:
    if (ctx->pc == 0x141104u) {
        ctx->pc = 0x141104u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x141108u;
        goto label_141108;
    }
    ctx->pc = 0x141100u;
    SET_GPR_U32(ctx, 31, 0x141108u);
    ctx->pc = 0x141104u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141108u; }
    }
    if (ctx->pc != 0x141108u) { return; }
    ctx->pc = 0x141108u;
label_141108:
    // 0x141108: 0x5a20000f
label_14110c:
    if (ctx->pc == 0x14110Cu) {
        ctx->pc = 0x14110Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x141110u;
        goto label_141110;
    }
    ctx->pc = 0x141108u;
    {
        const bool branch_taken_0x141108 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x141108) {
            ctx->pc = 0x14110Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x141148u;
            goto label_141148;
        }
    }
    ctx->pc = 0x141110u;
label_141110:
    // 0x141110: 0x82020010
    ctx->pc = 0x141110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_141114:
    // 0x141114: 0x54400009
label_141118:
    if (ctx->pc == 0x141118u) {
        ctx->pc = 0x141118u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x14111Cu;
        goto label_14111c;
    }
    ctx->pc = 0x141114u;
    {
        const bool branch_taken_0x141114 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x141114) {
            ctx->pc = 0x141118u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x14113Cu;
            goto label_14113c;
        }
    }
    ctx->pc = 0x14111Cu;
label_14111c:
    // 0x14111c: 0x8e020014
    ctx->pc = 0x14111cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_141120:
    // 0x141120: 0x26060018
    ctx->pc = 0x141120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 24));
label_141124:
    // 0x141124: 0x8c440004
    ctx->pc = 0x141124u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_141128:
    // 0x141128: 0x8c830000
    ctx->pc = 0x141128u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14112c:
    // 0x14112c: 0x8c620020
    ctx->pc = 0x14112cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_141130:
    // 0x141130: 0x40f809
label_141134:
    if (ctx->pc == 0x141134u) {
        ctx->pc = 0x141134u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x141138u;
        goto label_141138;
    }
    ctx->pc = 0x141130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141138u);
        ctx->pc = 0x141134u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141138u; }
            if (ctx->pc != 0x141138u) { return; }
        }
    }
    ctx->pc = 0x141138u;
label_141138:
    // 0x141138: 0x2631ffff
    ctx->pc = 0x141138u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_14113c:
    // 0x14113c: 0x1620fff4
label_141140:
    if (ctx->pc == 0x141140u) {
        ctx->pc = 0x141140u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x141144u;
        goto label_141144;
    }
    ctx->pc = 0x14113Cu;
    {
        const bool branch_taken_0x14113c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x141140u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x14113c) {
            ctx->pc = 0x141110u;
            goto label_141110;
        }
    }
    ctx->pc = 0x141144u;
label_141144:
    // 0x141144: 0xdfb00000
    ctx->pc = 0x141144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141148:
    // 0x141148: 0xdfb10008
    ctx->pc = 0x141148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14114c:
    // 0x14114c: 0xdfbf0010
    ctx->pc = 0x14114cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141150:
    // 0x141150: 0x804fc9c
label_141154:
    if (ctx->pc == 0x141154u) {
        ctx->pc = 0x141154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x141158u;
        goto label_141158;
    }
    ctx->pc = 0x141150u;
    ctx->pc = 0x141154u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x13F270u;
    sub_0013F270_0x13f270(rdram, ctx, runtime); return;
    ctx->pc = 0x141158u;
label_141158:
    // 0x141158: 0x27bdffa0
    ctx->pc = 0x141158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_14115c:
    // 0x14115c: 0xffb10018
    ctx->pc = 0x14115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_141160:
    // 0x141160: 0xffb20020
    ctx->pc = 0x141160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_141164:
    // 0x141164: 0x902d
    ctx->pc = 0x141164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141168:
    // 0x141168: 0xffb30028
    ctx->pc = 0x141168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_14116c:
    // 0x14116c: 0x982d
    ctx->pc = 0x14116cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141170:
    // 0x141170: 0xffb50038
    ctx->pc = 0x141170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_141174:
    // 0x141174: 0xffb60040
    ctx->pc = 0x141174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_141178:
    // 0x141178: 0xa0b02d
    ctx->pc = 0x141178u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14117c:
    // 0x14117c: 0xffb70048
    ctx->pc = 0x14117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_141180:
    // 0x141180: 0x24170001
    ctx->pc = 0x141180u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_141184:
    // 0x141184: 0xffb00010
    ctx->pc = 0x141184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_141188:
    // 0x141188: 0xffb40030
    ctx->pc = 0x141188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_14118c:
    // 0x14118c: 0xffbf0050
    ctx->pc = 0x14118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_141190:
    // 0x141190: 0xc04fc96
label_141194:
    if (ctx->pc == 0x141194u) {
        ctx->pc = 0x141194u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 22), 16));
        ctx->pc = 0x141198u;
        goto label_141198;
    }
    ctx->pc = 0x141190u;
    SET_GPR_U32(ctx, 31, 0x141198u);
    ctx->pc = 0x141194u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 22), 16));
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141198u; }
    }
    if (ctx->pc != 0x141198u) { return; }
    ctx->pc = 0x141198u;
label_141198:
    // 0x141198: 0x3c020023
    ctx->pc = 0x141198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_14119c:
    // 0x14119c: 0x24519a90
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294941328));
label_1411a0:
    // 0x1411a0: 0x82220000
    ctx->pc = 0x1411a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1411a4:
    // 0x1411a4: 0x5457001f
label_1411a8:
    if (ctx->pc == 0x1411A8u) {
        ctx->pc = 0x1411A8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1411ACu;
        goto label_1411ac;
    }
    ctx->pc = 0x1411A4u;
    {
        const bool branch_taken_0x1411a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        if (branch_taken_0x1411a4) {
            ctx->pc = 0x1411A8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x141224u;
            goto label_141224;
        }
    }
    ctx->pc = 0x1411ACu;
label_1411ac:
    // 0x1411ac: 0x121100
    ctx->pc = 0x1411acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
label_1411b0:
    // 0x1411b0: 0x24140080
    ctx->pc = 0x1411b0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 128));
label_1411b4:
    // 0x1411b4: 0x1000000e
label_1411b8:
    if (ctx->pc == 0x1411B8u) {
        ctx->pc = 0x1411B8u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->pc = 0x1411BCu;
        goto label_1411bc;
    }
    ctx->pc = 0x1411B4u;
    {
        const bool branch_taken_0x1411b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1411B8u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x1411b4) {
            ctx->pc = 0x1411F0u;
            goto label_1411f0;
        }
    }
    ctx->pc = 0x1411BCu;
label_1411bc:
    // 0x1411bc: 0x0
    ctx->pc = 0x1411bcu;
    // NOP
label_1411c0:
    // 0x1411c0: 0x26520001
    ctx->pc = 0x1411c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1411c4:
    // 0x1411c4: 0x9222000c
    ctx->pc = 0x1411c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_1411c8:
    // 0x1411c8: 0x8e230010
    ctx->pc = 0x1411c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1411cc:
    // 0x1411cc: 0xa2020001
    ctx->pc = 0x1411ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1411d0:
    // 0x1411d0: 0xae030004
    ctx->pc = 0x1411d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1411d4:
    // 0x1411d4: 0x96220002
    ctx->pc = 0x1411d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1411d8:
    // 0x1411d8: 0x6ba30007
    ctx->pc = 0x1411d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_1411dc:
    // 0x1411dc: 0x6fa30000
    ctx->pc = 0x1411dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_1411e0:
    // 0x1411e0: 0xb203000f
    ctx->pc = 0x1411e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1411e4:
    // 0x1411e4: 0xb6030008
    ctx->pc = 0x1411e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1411e8:
    // 0x1411e8: 0xa6020002
    ctx->pc = 0x1411e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1411ec:
    // 0x1411ec: 0x26100010
    ctx->pc = 0x1411ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_1411f0:
    // 0x1411f0: 0x1254000f
label_1411f4:
    if (ctx->pc == 0x1411F4u) {
        ctx->pc = 0x1411F4u;
        SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
        ctx->pc = 0x1411F8u;
        goto label_1411f8;
    }
    ctx->pc = 0x1411F0u;
    {
        const bool branch_taken_0x1411f0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 20));
        ctx->pc = 0x1411F4u;
        SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
        if (branch_taken_0x1411f0) {
            ctx->pc = 0x141230u;
            goto label_141230;
        }
    }
    ctx->pc = 0x1411F8u;
label_1411f8:
    // 0x1411f8: 0x8e240004
    ctx->pc = 0x1411f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1411fc:
    // 0x1411fc: 0x8e25000c
    ctx->pc = 0x1411fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_141200:
    // 0x141200: 0x34c6ffff
    ctx->pc = 0x141200u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_141204:
    // 0x141204: 0x8c830000
    ctx->pc = 0x141204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141208:
    // 0x141208: 0x8c620018
    ctx->pc = 0x141208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_14120c:
    // 0x14120c: 0x40f809
label_141210:
    if (ctx->pc == 0x141210u) {
        ctx->pc = 0x141210u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141214u;
        goto label_141214;
    }
    ctx->pc = 0x14120Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141214u);
        ctx->pc = 0x141210u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141214u; }
            if (ctx->pc != 0x141214u) { return; }
        }
    }
    ctx->pc = 0x141214u;
label_141214:
    // 0x141214: 0x8fa30004
    ctx->pc = 0x141214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_141218:
    // 0x141218: 0x5460ffe9
label_14121c:
    if (ctx->pc == 0x14121Cu) {
        ctx->pc = 0x14121Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x141220u;
        goto label_141220;
    }
    ctx->pc = 0x141218u;
    {
        const bool branch_taken_0x141218 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x141218) {
            ctx->pc = 0x14121Cu;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1411C0u;
            goto label_1411c0;
        }
    }
    ctx->pc = 0x141220u;
label_141220:
    // 0x141220: 0x26730001
    ctx->pc = 0x141220u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_141224:
    // 0x141224: 0x2a620020
    ctx->pc = 0x141224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 32));
label_141228:
    // 0x141228: 0x1440ffdd
label_14122c:
    if (ctx->pc == 0x14122Cu) {
        ctx->pc = 0x14122Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x141230u;
        goto label_141230;
    }
    ctx->pc = 0x141228u;
    {
        const bool branch_taken_0x141228 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14122Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
        if (branch_taken_0x141228) {
            ctx->pc = 0x1411A0u;
            goto label_1411a0;
        }
    }
    ctx->pc = 0x141230u;
label_141230:
    // 0x141230: 0xc04fc9c
label_141234:
    if (ctx->pc == 0x141234u) {
        ctx->pc = 0x141238u;
        goto label_141238;
    }
    ctx->pc = 0x141230u;
    SET_GPR_U32(ctx, 31, 0x141238u);
    ctx->pc = 0x13F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F270_0x13f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141238u; }
    }
    if (ctx->pc != 0x141238u) { return; }
    ctx->pc = 0x141238u;
label_141238:
    // 0x141238: 0xaed20000
    ctx->pc = 0x141238u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_14123c:
    // 0x14123c: 0xdfb00010
    ctx->pc = 0x14123cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141240:
    // 0x141240: 0xdfb10018
    ctx->pc = 0x141240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_141244:
    // 0x141244: 0xdfb20020
    ctx->pc = 0x141244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141248:
    // 0x141248: 0xdfb30028
    ctx->pc = 0x141248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_14124c:
    // 0x14124c: 0xdfb40030
    ctx->pc = 0x14124cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_141250:
    // 0x141250: 0xdfb50038
    ctx->pc = 0x141250u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_141254:
    // 0x141254: 0xdfb60040
    ctx->pc = 0x141254u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_141258:
    // 0x141258: 0xdfb70048
    ctx->pc = 0x141258u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_14125c:
    // 0x14125c: 0xdfbf0050
    ctx->pc = 0x14125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_141260:
    // 0x141260: 0x3e00008
label_141264:
    if (ctx->pc == 0x141264u) {
        ctx->pc = 0x141264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x141268u;
        goto label_fallthrough_0x141260;
    }
    ctx->pc = 0x141260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140ED8u: goto label_140ed8;
            case 0x140EDCu: goto label_140edc;
            case 0x140EE0u: goto label_140ee0;
            case 0x140EE4u: goto label_140ee4;
            case 0x140EE8u: goto label_140ee8;
            case 0x140EECu: goto label_140eec;
            case 0x140EF0u: goto label_140ef0;
            case 0x140EF4u: goto label_140ef4;
            case 0x140EF8u: goto label_140ef8;
            case 0x140EFCu: goto label_140efc;
            case 0x140F00u: goto label_140f00;
            case 0x140F04u: goto label_140f04;
            case 0x140F08u: goto label_140f08;
            case 0x140F0Cu: goto label_140f0c;
            case 0x140F10u: goto label_140f10;
            case 0x140F14u: goto label_140f14;
            case 0x140F18u: goto label_140f18;
            case 0x140F1Cu: goto label_140f1c;
            case 0x140F20u: goto label_140f20;
            case 0x140F24u: goto label_140f24;
            case 0x140F28u: goto label_140f28;
            case 0x140F2Cu: goto label_140f2c;
            case 0x140F30u: goto label_140f30;
            case 0x140F34u: goto label_140f34;
            case 0x140F38u: goto label_140f38;
            case 0x140F3Cu: goto label_140f3c;
            case 0x140F40u: goto label_140f40;
            case 0x140F44u: goto label_140f44;
            case 0x140F48u: goto label_140f48;
            case 0x140F4Cu: goto label_140f4c;
            case 0x140F50u: goto label_140f50;
            case 0x140F54u: goto label_140f54;
            case 0x140F58u: goto label_140f58;
            case 0x140F5Cu: goto label_140f5c;
            case 0x140F60u: goto label_140f60;
            case 0x140F64u: goto label_140f64;
            case 0x140F68u: goto label_140f68;
            case 0x140F6Cu: goto label_140f6c;
            case 0x140F70u: goto label_140f70;
            case 0x140F74u: goto label_140f74;
            case 0x140F78u: goto label_140f78;
            case 0x140F7Cu: goto label_140f7c;
            case 0x140F80u: goto label_140f80;
            case 0x140F84u: goto label_140f84;
            case 0x140F88u: goto label_140f88;
            case 0x140F8Cu: goto label_140f8c;
            case 0x140F90u: goto label_140f90;
            case 0x140F94u: goto label_140f94;
            case 0x140F98u: goto label_140f98;
            case 0x140F9Cu: goto label_140f9c;
            case 0x140FA0u: goto label_140fa0;
            case 0x140FA4u: goto label_140fa4;
            case 0x140FA8u: goto label_140fa8;
            case 0x140FACu: goto label_140fac;
            case 0x140FB0u: goto label_140fb0;
            case 0x140FB4u: goto label_140fb4;
            case 0x140FB8u: goto label_140fb8;
            case 0x140FBCu: goto label_140fbc;
            case 0x140FC0u: goto label_140fc0;
            case 0x140FC4u: goto label_140fc4;
            case 0x140FC8u: goto label_140fc8;
            case 0x140FCCu: goto label_140fcc;
            case 0x140FD0u: goto label_140fd0;
            case 0x140FD4u: goto label_140fd4;
            case 0x140FD8u: goto label_140fd8;
            case 0x140FDCu: goto label_140fdc;
            case 0x140FE0u: goto label_140fe0;
            case 0x140FE4u: goto label_140fe4;
            case 0x140FE8u: goto label_140fe8;
            case 0x140FECu: goto label_140fec;
            case 0x140FF0u: goto label_140ff0;
            case 0x140FF4u: goto label_140ff4;
            case 0x140FF8u: goto label_140ff8;
            case 0x140FFCu: goto label_140ffc;
            case 0x141000u: goto label_141000;
            case 0x141004u: goto label_141004;
            case 0x141008u: goto label_141008;
            case 0x14100Cu: goto label_14100c;
            case 0x141010u: goto label_141010;
            case 0x141014u: goto label_141014;
            case 0x141018u: goto label_141018;
            case 0x14101Cu: goto label_14101c;
            case 0x141020u: goto label_141020;
            case 0x141024u: goto label_141024;
            case 0x141028u: goto label_141028;
            case 0x14102Cu: goto label_14102c;
            case 0x141030u: goto label_141030;
            case 0x141034u: goto label_141034;
            case 0x141038u: goto label_141038;
            case 0x14103Cu: goto label_14103c;
            case 0x141040u: goto label_141040;
            case 0x141044u: goto label_141044;
            case 0x141048u: goto label_141048;
            case 0x14104Cu: goto label_14104c;
            case 0x141050u: goto label_141050;
            case 0x141054u: goto label_141054;
            case 0x141058u: goto label_141058;
            case 0x14105Cu: goto label_14105c;
            case 0x141060u: goto label_141060;
            case 0x141064u: goto label_141064;
            case 0x141068u: goto label_141068;
            case 0x14106Cu: goto label_14106c;
            case 0x141070u: goto label_141070;
            case 0x141074u: goto label_141074;
            case 0x141078u: goto label_141078;
            case 0x14107Cu: goto label_14107c;
            case 0x141080u: goto label_141080;
            case 0x141084u: goto label_141084;
            case 0x141088u: goto label_141088;
            case 0x14108Cu: goto label_14108c;
            case 0x141090u: goto label_141090;
            case 0x141094u: goto label_141094;
            case 0x141098u: goto label_141098;
            case 0x14109Cu: goto label_14109c;
            case 0x1410A0u: goto label_1410a0;
            case 0x1410A4u: goto label_1410a4;
            case 0x1410A8u: goto label_1410a8;
            case 0x1410ACu: goto label_1410ac;
            case 0x1410B0u: goto label_1410b0;
            case 0x1410B4u: goto label_1410b4;
            case 0x1410B8u: goto label_1410b8;
            case 0x1410BCu: goto label_1410bc;
            case 0x1410C0u: goto label_1410c0;
            case 0x1410C4u: goto label_1410c4;
            case 0x1410C8u: goto label_1410c8;
            case 0x1410CCu: goto label_1410cc;
            case 0x1410D0u: goto label_1410d0;
            case 0x1410D4u: goto label_1410d4;
            case 0x1410D8u: goto label_1410d8;
            case 0x1410DCu: goto label_1410dc;
            case 0x1410E0u: goto label_1410e0;
            case 0x1410E4u: goto label_1410e4;
            case 0x1410E8u: goto label_1410e8;
            case 0x1410ECu: goto label_1410ec;
            case 0x1410F0u: goto label_1410f0;
            case 0x1410F4u: goto label_1410f4;
            case 0x1410F8u: goto label_1410f8;
            case 0x1410FCu: goto label_1410fc;
            case 0x141100u: goto label_141100;
            case 0x141104u: goto label_141104;
            case 0x141108u: goto label_141108;
            case 0x14110Cu: goto label_14110c;
            case 0x141110u: goto label_141110;
            case 0x141114u: goto label_141114;
            case 0x141118u: goto label_141118;
            case 0x14111Cu: goto label_14111c;
            case 0x141120u: goto label_141120;
            case 0x141124u: goto label_141124;
            case 0x141128u: goto label_141128;
            case 0x14112Cu: goto label_14112c;
            case 0x141130u: goto label_141130;
            case 0x141134u: goto label_141134;
            case 0x141138u: goto label_141138;
            case 0x14113Cu: goto label_14113c;
            case 0x141140u: goto label_141140;
            case 0x141144u: goto label_141144;
            case 0x141148u: goto label_141148;
            case 0x14114Cu: goto label_14114c;
            case 0x141150u: goto label_141150;
            case 0x141154u: goto label_141154;
            case 0x141158u: goto label_141158;
            case 0x14115Cu: goto label_14115c;
            case 0x141160u: goto label_141160;
            case 0x141164u: goto label_141164;
            case 0x141168u: goto label_141168;
            case 0x14116Cu: goto label_14116c;
            case 0x141170u: goto label_141170;
            case 0x141174u: goto label_141174;
            case 0x141178u: goto label_141178;
            case 0x14117Cu: goto label_14117c;
            case 0x141180u: goto label_141180;
            case 0x141184u: goto label_141184;
            case 0x141188u: goto label_141188;
            case 0x14118Cu: goto label_14118c;
            case 0x141190u: goto label_141190;
            case 0x141194u: goto label_141194;
            case 0x141198u: goto label_141198;
            case 0x14119Cu: goto label_14119c;
            case 0x1411A0u: goto label_1411a0;
            case 0x1411A4u: goto label_1411a4;
            case 0x1411A8u: goto label_1411a8;
            case 0x1411ACu: goto label_1411ac;
            case 0x1411B0u: goto label_1411b0;
            case 0x1411B4u: goto label_1411b4;
            case 0x1411B8u: goto label_1411b8;
            case 0x1411BCu: goto label_1411bc;
            case 0x1411C0u: goto label_1411c0;
            case 0x1411C4u: goto label_1411c4;
            case 0x1411C8u: goto label_1411c8;
            case 0x1411CCu: goto label_1411cc;
            case 0x1411D0u: goto label_1411d0;
            case 0x1411D4u: goto label_1411d4;
            case 0x1411D8u: goto label_1411d8;
            case 0x1411DCu: goto label_1411dc;
            case 0x1411E0u: goto label_1411e0;
            case 0x1411E4u: goto label_1411e4;
            case 0x1411E8u: goto label_1411e8;
            case 0x1411ECu: goto label_1411ec;
            case 0x1411F0u: goto label_1411f0;
            case 0x1411F4u: goto label_1411f4;
            case 0x1411F8u: goto label_1411f8;
            case 0x1411FCu: goto label_1411fc;
            case 0x141200u: goto label_141200;
            case 0x141204u: goto label_141204;
            case 0x141208u: goto label_141208;
            case 0x14120Cu: goto label_14120c;
            case 0x141210u: goto label_141210;
            case 0x141214u: goto label_141214;
            case 0x141218u: goto label_141218;
            case 0x14121Cu: goto label_14121c;
            case 0x141220u: goto label_141220;
            case 0x141224u: goto label_141224;
            case 0x141228u: goto label_141228;
            case 0x14122Cu: goto label_14122c;
            case 0x141230u: goto label_141230;
            case 0x141234u: goto label_141234;
            case 0x141238u: goto label_141238;
            case 0x14123Cu: goto label_14123c;
            case 0x141240u: goto label_141240;
            case 0x141244u: goto label_141244;
            case 0x141248u: goto label_141248;
            case 0x14124Cu: goto label_14124c;
            case 0x141250u: goto label_141250;
            case 0x141254u: goto label_141254;
            case 0x141258u: goto label_141258;
            case 0x14125Cu: goto label_14125c;
            case 0x141260u: goto label_141260;
            case 0x141264u: goto label_141264;
            default: break;
        }
        return;
    }
label_fallthrough_0x141260:
    ctx->pc = 0x141268u;
}
