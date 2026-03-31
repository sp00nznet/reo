#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013ED28
// Address: 0x13ed28 - 0x13f1a0
void sub_0013ED28_0x13ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ed28u;

label_13ed28:
    // 0x13ed28: 0x27bdffc0
    ctx->pc = 0x13ed28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_13ed2c:
    // 0x13ed2c: 0x24030001
    ctx->pc = 0x13ed2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_13ed30:
    // 0x13ed30: 0xffb10018
    ctx->pc = 0x13ed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13ed34:
    // 0x13ed34: 0x80882d
    ctx->pc = 0x13ed34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13ed38:
    // 0x13ed38: 0xffb00010
    ctx->pc = 0x13ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_13ed3c:
    // 0x13ed3c: 0xffb20020
    ctx->pc = 0x13ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13ed40:
    // 0x13ed40: 0xffb30028
    ctx->pc = 0x13ed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_13ed44:
    // 0x13ed44: 0xffb40030
    ctx->pc = 0x13ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_13ed48:
    // 0x13ed48: 0xffbf0038
    ctx->pc = 0x13ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_13ed4c:
    // 0x13ed4c: 0x82220050
    ctx->pc = 0x13ed4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_13ed50:
    // 0x13ed50: 0x1443005d
label_13ed54:
    if (ctx->pc == 0x13ED54u) {
        ctx->pc = 0x13ED54u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x13ED58u;
        goto label_13ed58;
    }
    ctx->pc = 0x13ED50u;
    {
        const bool branch_taken_0x13ed50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x13ED54u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x13ed50) {
            ctx->pc = 0x13EEC8u;
            goto label_13eec8;
        }
    }
    ctx->pc = 0x13ED58u;
label_13ed58:
    // 0x13ed58: 0x82220026
    ctx->pc = 0x13ed58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_13ed5c:
    // 0x13ed5c: 0x902d
    ctx->pc = 0x13ed5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ed60:
    // 0x13ed60: 0x92230026
    ctx->pc = 0x13ed60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_13ed64:
    // 0x13ed64: 0x18400018
label_13ed68:
    if (ctx->pc == 0x13ED68u) {
        ctx->pc = 0x13ED68u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13ED6Cu;
        goto label_13ed6c;
    }
    ctx->pc = 0x13ED64u;
    {
        const bool branch_taken_0x13ed64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13ED68u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ed64) {
            ctx->pc = 0x13EDC8u;
            goto label_13edc8;
        }
    }
    ctx->pc = 0x13ED6Cu;
label_13ed6c:
    // 0x13ed6c: 0x24140001
    ctx->pc = 0x13ed6cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_13ed70:
    // 0x13ed70: 0x26300008
    ctx->pc = 0x13ed70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 8));
label_13ed74:
    // 0x13ed74: 0x0
    ctx->pc = 0x13ed74u;
    // NOP
label_13ed78:
    // 0x13ed78: 0xc04e274
label_13ed7c:
    if (ctx->pc == 0x13ED7Cu) {
        ctx->pc = 0x13ED7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x13ED80u;
        goto label_13ed80;
    }
    ctx->pc = 0x13ED78u;
    SET_GPR_U32(ctx, 31, 0x13ED80u);
    ctx->pc = 0x13ED7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1389D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001389D0_0x1389d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ED80u; }
    }
    if (ctx->pc != 0x13ED80u) { return; }
    ctx->pc = 0x13ED80u;
label_13ed80:
    // 0x13ed80: 0x1054000b
label_13ed84:
    if (ctx->pc == 0x13ED84u) {
        ctx->pc = 0x13ED84u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13ED88u;
        goto label_13ed88;
    }
    ctx->pc = 0x13ED80u;
    {
        const bool branch_taken_0x13ed80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x13ED84u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ed80) {
            ctx->pc = 0x13EDB0u;
            goto label_13edb0;
        }
    }
    ctx->pc = 0x13ED88u;
label_13ed88:
    // 0x13ed88: 0x8e020000
    ctx->pc = 0x13ed88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13ed8c:
    // 0x13ed8c: 0x8c440008
    ctx->pc = 0x13ed8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ed90:
    // 0x13ed90: 0x8c830000
    ctx->pc = 0x13ed90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ed94:
    // 0x13ed94: 0x8c620024
    ctx->pc = 0x13ed94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13ed98:
    // 0x13ed98: 0x40f809
label_13ed9c:
    if (ctx->pc == 0x13ED9Cu) {
        ctx->pc = 0x13EDA0u;
        goto label_13eda0;
    }
    ctx->pc = 0x13ED98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EDA0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EDA0u; }
            if (ctx->pc != 0x13EDA0u) { return; }
        }
    }
    ctx->pc = 0x13EDA0u;
label_13eda0:
    // 0x13eda0: 0x8e23005c
    ctx->pc = 0x13eda0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_13eda4:
    // 0x13eda4: 0x26440001
    ctx->pc = 0x13eda4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 1));
label_13eda8:
    // 0x13eda8: 0x431026
    ctx->pc = 0x13eda8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13edac:
    // 0x13edac: 0x82900a
    ctx->pc = 0x13edacu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
label_13edb0:
    // 0x13edb0: 0x82220026
    ctx->pc = 0x13edb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_13edb4:
    // 0x13edb4: 0x26730001
    ctx->pc = 0x13edb4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_13edb8:
    // 0x13edb8: 0x26100004
    ctx->pc = 0x13edb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_13edbc:
    // 0x13edbc: 0x262102a
    ctx->pc = 0x13edbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_13edc0:
    // 0x13edc0: 0x1440ffed
label_13edc4:
    if (ctx->pc == 0x13EDC4u) {
        ctx->pc = 0x13EDC4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
        ctx->pc = 0x13EDC8u;
        goto label_13edc8;
    }
    ctx->pc = 0x13EDC0u;
    {
        const bool branch_taken_0x13edc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13EDC4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
        if (branch_taken_0x13edc0) {
            ctx->pc = 0x13ED78u;
            goto label_13ed78;
        }
    }
    ctx->pc = 0x13EDC8u;
label_13edc8:
    // 0x13edc8: 0x31600
    ctx->pc = 0x13edc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
label_13edcc:
    // 0x13edcc: 0x21603
    ctx->pc = 0x13edccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_13edd0:
    // 0x13edd0: 0x1642003d
label_13edd4:
    if (ctx->pc == 0x13EDD4u) {
        ctx->pc = 0x13EDD4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x13EDD8u;
        goto label_13edd8;
    }
    ctx->pc = 0x13EDD0u;
    {
        const bool branch_taken_0x13edd0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x13EDD4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x13edd0) {
            ctx->pc = 0x13EEC8u;
            goto label_13eec8;
        }
    }
    ctx->pc = 0x13EDD8u;
label_13edd8:
    // 0x13edd8: 0x1a40003b
label_13eddc:
    if (ctx->pc == 0x13EDDCu) {
        ctx->pc = 0x13EDDCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EDE0u;
        goto label_13ede0;
    }
    ctx->pc = 0x13EDD8u;
    {
        const bool branch_taken_0x13edd8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x13EDDCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13edd8) {
            ctx->pc = 0x13EEC8u;
            goto label_13eec8;
        }
    }
    ctx->pc = 0x13EDE0u;
label_13ede0:
    // 0x13ede0: 0x26320010
    ctx->pc = 0x13ede0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 16));
label_13ede4:
    // 0x13ede4: 0x26300008
    ctx->pc = 0x13ede4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 8));
label_13ede8:
    // 0x13ede8: 0x8e020000
    ctx->pc = 0x13ede8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13edec:
    // 0x13edec: 0x0
    ctx->pc = 0x13edecu;
    // NOP
label_13edf0:
    // 0x13edf0: 0x3c067fff
    ctx->pc = 0x13edf0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_13edf4:
    // 0x13edf4: 0x3a0382d
    ctx->pc = 0x13edf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13edf8:
    // 0x13edf8: 0x282d
    ctx->pc = 0x13edf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13edfc:
    // 0x13edfc: 0x8c440008
    ctx->pc = 0x13edfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ee00:
    // 0x13ee00: 0x8c830000
    ctx->pc = 0x13ee00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ee04:
    // 0x13ee04: 0x8c620018
    ctx->pc = 0x13ee04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_13ee08:
    // 0x13ee08: 0x40f809
label_13ee0c:
    if (ctx->pc == 0x13EE0Cu) {
        ctx->pc = 0x13EE0Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = 0x13EE10u;
        goto label_13ee10;
    }
    ctx->pc = 0x13EE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EE10u);
        ctx->pc = 0x13EE0Cu;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EE10u; }
            if (ctx->pc != 0x13EE10u) { return; }
        }
    }
    ctx->pc = 0x13EE10u;
label_13ee10:
    // 0x13ee10: 0x8e070000
    ctx->pc = 0x13ee10u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13ee14:
    // 0x13ee14: 0x3a0302d
    ctx->pc = 0x13ee14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13ee18:
    // 0x13ee18: 0x8ce40008
    ctx->pc = 0x13ee18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_13ee1c:
    // 0x13ee1c: 0x8c830000
    ctx->pc = 0x13ee1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ee20:
    // 0x13ee20: 0x8c620020
    ctx->pc = 0x13ee20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13ee24:
    // 0x13ee24: 0x40f809
label_13ee28:
    if (ctx->pc == 0x13EE28u) {
        ctx->pc = 0x13EE28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EE2Cu;
        goto label_13ee2c;
    }
    ctx->pc = 0x13EE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EE2Cu);
        ctx->pc = 0x13EE28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EE2Cu; }
            if (ctx->pc != 0x13EE2Cu) { return; }
        }
    }
    ctx->pc = 0x13EE2Cu;
label_13ee2c:
    // 0x13ee2c: 0x8e030000
    ctx->pc = 0x13ee2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13ee30:
    // 0x13ee30: 0x3c067fff
    ctx->pc = 0x13ee30u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_13ee34:
    // 0x13ee34: 0x282d
    ctx->pc = 0x13ee34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ee38:
    // 0x13ee38: 0x8c640008
    ctx->pc = 0x13ee38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_13ee3c:
    // 0x13ee3c: 0x34c6ffff
    ctx->pc = 0x13ee3cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_13ee40:
    // 0x13ee40: 0x8c830000
    ctx->pc = 0x13ee40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ee44:
    // 0x13ee44: 0x8c620018
    ctx->pc = 0x13ee44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_13ee48:
    // 0x13ee48: 0x40f809
label_13ee4c:
    if (ctx->pc == 0x13EE4Cu) {
        ctx->pc = 0x13EE4Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EE50u;
        goto label_13ee50;
    }
    ctx->pc = 0x13EE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EE50u);
        ctx->pc = 0x13EE4Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EE50u; }
            if (ctx->pc != 0x13EE50u) { return; }
        }
    }
    ctx->pc = 0x13EE50u;
label_13ee50:
    // 0x13ee50: 0x282d
    ctx->pc = 0x13ee50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ee54:
    // 0x13ee54: 0x8fa30004
    ctx->pc = 0x13ee54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_13ee58:
    // 0x13ee58: 0x8e22005c
    ctx->pc = 0x13ee58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_13ee5c:
    // 0x13ee5c: 0x1062000a
label_13ee60:
    if (ctx->pc == 0x13EE60u) {
        ctx->pc = 0x13EE60u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EE64u;
        goto label_13ee64;
    }
    ctx->pc = 0x13EE5Cu;
    {
        const bool branch_taken_0x13ee5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13EE60u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ee5c) {
            ctx->pc = 0x13EE88u;
            goto label_13ee88;
        }
    }
    ctx->pc = 0x13EE64u;
label_13ee64:
    // 0x13ee64: 0x0
    ctx->pc = 0x13ee64u;
    // NOP
label_13ee68:
    // 0x13ee68: 0x0
    ctx->pc = 0x13ee68u;
    // NOP
label_13ee6c:
    // 0x13ee6c: 0x0
    ctx->pc = 0x13ee6cu;
    // NOP
label_13ee70:
    // 0x13ee70: 0x0
    ctx->pc = 0x13ee70u;
    // NOP
label_13ee74:
    // 0x13ee74: 0x0
    ctx->pc = 0x13ee74u;
    // NOP
label_13ee78:
    // 0x13ee78: 0x0
    ctx->pc = 0x13ee78u;
    // NOP
label_13ee7c:
    // 0x13ee7c: 0x1000fffa
label_13ee80:
    if (ctx->pc == 0x13EE80u) {
        ctx->pc = 0x13EE84u;
        goto label_13ee84;
    }
    ctx->pc = 0x13EE7Cu;
    {
        const bool branch_taken_0x13ee7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ee7c) {
            ctx->pc = 0x13EE68u;
            goto label_13ee68;
        }
    }
    ctx->pc = 0x13EE84u;
label_13ee84:
    // 0x13ee84: 0x0
    ctx->pc = 0x13ee84u;
    // NOP
label_13ee88:
    // 0x13ee88: 0x8e020000
    ctx->pc = 0x13ee88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13ee8c:
    // 0x13ee8c: 0x26100004
    ctx->pc = 0x13ee8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_13ee90:
    // 0x13ee90: 0x8c440008
    ctx->pc = 0x13ee90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13ee94:
    // 0x13ee94: 0x8c830000
    ctx->pc = 0x13ee94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ee98:
    // 0x13ee98: 0x8c620020
    ctx->pc = 0x13ee98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_13ee9c:
    // 0x13ee9c: 0x40f809
label_13eea0:
    if (ctx->pc == 0x13EEA0u) {
        ctx->pc = 0x13EEA0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x13EEA4u;
        goto label_13eea4;
    }
    ctx->pc = 0x13EE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13EEA4u);
        ctx->pc = 0x13EEA0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13EEA4u; }
            if (ctx->pc != 0x13EEA4u) { return; }
        }
    }
    ctx->pc = 0x13EEA4u;
label_13eea4:
    // 0x13eea4: 0xa2200053
    ctx->pc = 0x13eea4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 0));
label_13eea8:
    // 0x13eea8: 0x8e440000
    ctx->pc = 0x13eea8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13eeac:
    // 0x13eeac: 0xc04e2f4
label_13eeb0:
    if (ctx->pc == 0x13EEB0u) {
        ctx->pc = 0x13EEB0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x13EEB4u;
        goto label_13eeb4;
    }
    ctx->pc = 0x13EEACu;
    SET_GPR_U32(ctx, 31, 0x13EEB4u);
    ctx->pc = 0x13EEB0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x138BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138BD0_0x138bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EEB4u; }
    }
    if (ctx->pc != 0x13EEB4u) { return; }
    ctx->pc = 0x13EEB4u;
label_13eeb4:
    // 0x13eeb4: 0x82220026
    ctx->pc = 0x13eeb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_13eeb8:
    // 0x13eeb8: 0x262102a
    ctx->pc = 0x13eeb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_13eebc:
    // 0x13eebc: 0x5440ffcc
label_13eec0:
    if (ctx->pc == 0x13EEC0u) {
        ctx->pc = 0x13EEC0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x13EEC4u;
        goto label_13eec4;
    }
    ctx->pc = 0x13EEBCu;
    {
        const bool branch_taken_0x13eebc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13eebc) {
            ctx->pc = 0x13EEC0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x13EDF0u;
            goto label_13edf0;
        }
    }
    ctx->pc = 0x13EEC4u;
label_13eec4:
    // 0x13eec4: 0xdfb00010
    ctx->pc = 0x13eec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13eec8:
    // 0x13eec8: 0xdfb10018
    ctx->pc = 0x13eec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13eecc:
    // 0x13eecc: 0xdfb20020
    ctx->pc = 0x13eeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13eed0:
    // 0x13eed0: 0xdfb30028
    ctx->pc = 0x13eed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13eed4:
    // 0x13eed4: 0xdfb40030
    ctx->pc = 0x13eed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13eed8:
    // 0x13eed8: 0xdfbf0038
    ctx->pc = 0x13eed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_13eedc:
    // 0x13eedc: 0x3e00008
label_13eee0:
    if (ctx->pc == 0x13EEE0u) {
        ctx->pc = 0x13EEE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x13EEE4u;
        goto label_13eee4;
    }
    ctx->pc = 0x13EEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EEE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EEE4u;
label_13eee4:
    // 0x13eee4: 0x0
    ctx->pc = 0x13eee4u;
    // NOP
label_13eee8:
    // 0x13eee8: 0x27bdffe0
    ctx->pc = 0x13eee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_13eeec:
    // 0x13eeec: 0xffb00000
    ctx->pc = 0x13eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13eef0:
    // 0x13eef0: 0xffb10008
    ctx->pc = 0x13eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13eef4:
    // 0x13eef4: 0x2411000f
    ctx->pc = 0x13eef4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 15));
label_13eef8:
    // 0x13eef8: 0xffb20010
    ctx->pc = 0x13eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13eefc:
    // 0x13eefc: 0xffbf0018
    ctx->pc = 0x13eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13ef00:
    // 0x13ef00: 0xc04fc86
label_13ef04:
    if (ctx->pc == 0x13EF04u) {
        ctx->pc = 0x13EF04u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x13EF08u;
        goto label_13ef08;
    }
    ctx->pc = 0x13EF00u;
    SET_GPR_U32(ctx, 31, 0x13EF08u);
    ctx->pc = 0x13EF04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13F218u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F218_0x13f218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF08u; }
    }
    if (ctx->pc != 0x13EF08u) { return; }
    ctx->pc = 0x13EF08u;
label_13ef08:
    // 0x13ef08: 0x3c020022
    ctx->pc = 0x13ef08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
label_13ef0c:
    // 0x13ef0c: 0x24503880
    ctx->pc = 0x13ef0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 14464));
label_13ef10:
    // 0x13ef10: 0x82020000
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_13ef14:
    // 0x13ef14: 0x54520004
label_13ef18:
    if (ctx->pc == 0x13EF18u) {
        ctx->pc = 0x13EF18u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x13EF1Cu;
        goto label_13ef1c;
    }
    ctx->pc = 0x13EF14u;
    {
        const bool branch_taken_0x13ef14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x13ef14) {
            ctx->pc = 0x13EF18u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->pc = 0x13EF28u;
            goto label_13ef28;
        }
    }
    ctx->pc = 0x13EF1Cu;
label_13ef1c:
    // 0x13ef1c: 0xc04fb4a
label_13ef20:
    if (ctx->pc == 0x13EF20u) {
        ctx->pc = 0x13EF20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EF24u;
        goto label_13ef24;
    }
    ctx->pc = 0x13EF1Cu;
    SET_GPR_U32(ctx, 31, 0x13EF24u);
    ctx->pc = 0x13EF20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ED28u;
    goto label_13ed28;
    ctx->pc = 0x13EF24u;
label_13ef24:
    // 0x13ef24: 0x2631ffff
    ctx->pc = 0x13ef24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_13ef28:
    // 0x13ef28: 0x621fff9
label_13ef2c:
    if (ctx->pc == 0x13EF2Cu) {
        ctx->pc = 0x13EF2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x13EF30u;
        goto label_13ef30;
    }
    ctx->pc = 0x13EF28u;
    {
        const bool branch_taken_0x13ef28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x13EF2Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 96));
        if (branch_taken_0x13ef28) {
            ctx->pc = 0x13EF10u;
            goto label_13ef10;
        }
    }
    ctx->pc = 0x13EF30u;
label_13ef30:
    // 0x13ef30: 0xc04fc8c
label_13ef34:
    if (ctx->pc == 0x13EF34u) {
        ctx->pc = 0x13EF38u;
        goto label_13ef38;
    }
    ctx->pc = 0x13EF30u;
    SET_GPR_U32(ctx, 31, 0x13EF38u);
    ctx->pc = 0x13F230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F230_0x13f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF38u; }
    }
    if (ctx->pc != 0x13EF38u) { return; }
    ctx->pc = 0x13EF38u;
label_13ef38:
    // 0x13ef38: 0xc04e276
label_13ef3c:
    if (ctx->pc == 0x13EF3Cu) {
        ctx->pc = 0x13EF40u;
        goto label_13ef40;
    }
    ctx->pc = 0x13EF38u;
    SET_GPR_U32(ctx, 31, 0x13EF40u);
    ctx->pc = 0x1389D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001389D8_0x1389d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EF40u; }
    }
    if (ctx->pc != 0x13EF40u) { return; }
    ctx->pc = 0x13EF40u;
label_13ef40:
    // 0x13ef40: 0xdfb00000
    ctx->pc = 0x13ef40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ef44:
    // 0x13ef44: 0xdfb10008
    ctx->pc = 0x13ef44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13ef48:
    // 0x13ef48: 0xdfb20010
    ctx->pc = 0x13ef48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ef4c:
    // 0x13ef4c: 0xdfbf0018
    ctx->pc = 0x13ef4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13ef50:
    // 0x13ef50: 0x805049a
label_13ef54:
    if (ctx->pc == 0x13EF54u) {
        ctx->pc = 0x13EF54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x13EF58u;
        goto label_13ef58;
    }
    ctx->pc = 0x13EF50u;
    ctx->pc = 0x13EF54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x141268u;
    entry_141268_0x141280(rdram, ctx, runtime); return;
    ctx->pc = 0x13EF58u;
label_13ef58:
    // 0x13ef58: 0x27bdfff0
    ctx->pc = 0x13ef58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ef5c:
    // 0x13ef5c: 0x3c040024
    ctx->pc = 0x13ef5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13ef60:
    // 0x13ef60: 0xffbf0000
    ctx->pc = 0x13ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ef64:
    // 0x13ef64: 0x2484d898
    ctx->pc = 0x13ef64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957208));
label_13ef68:
    // 0x13ef68: 0xdfbf0000
    ctx->pc = 0x13ef68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ef6c:
    // 0x13ef6c: 0x8045a12
label_13ef70:
    if (ctx->pc == 0x13EF70u) {
        ctx->pc = 0x13EF70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13EF74u;
        goto label_13ef74;
    }
    ctx->pc = 0x13EF6Cu;
    ctx->pc = 0x13EF70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13EF74u;
label_13ef74:
    // 0x13ef74: 0x0
    ctx->pc = 0x13ef74u;
    // NOP
label_13ef78:
    // 0x13ef78: 0x3e00008
label_13ef7c:
    if (ctx->pc == 0x13EF7Cu) {
        ctx->pc = 0x13EF7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x13EF80u;
        goto label_13ef80;
    }
    ctx->pc = 0x13EF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EF7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EF80u;
label_13ef80:
    // 0x13ef80: 0xa0302d
    ctx->pc = 0x13ef80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13ef84:
    // 0x13ef84: 0x3402bb80
    ctx->pc = 0x13ef84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
label_13ef88:
    // 0x13ef88: 0x46001a
    ctx->pc = 0x13ef88u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13ef8c:
    // 0x13ef8c: 0x27bdfff0
    ctx->pc = 0x13ef8cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13ef90:
    // 0x13ef90: 0xffbf0000
    ctx->pc = 0x13ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13ef94:
    // 0x13ef94: 0x50c00001
label_13ef98:
    if (ctx->pc == 0x13EF98u) {
        ctx->pc = 0x13EF98u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13EF9Cu;
        goto label_13ef9c;
    }
    ctx->pc = 0x13EF94u;
    {
        const bool branch_taken_0x13ef94 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ef94) {
            ctx->pc = 0x13EF98u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13EF9Cu;
            goto label_13ef9c;
        }
    }
    ctx->pc = 0x13EF9Cu;
label_13ef9c:
    // 0x13ef9c: 0x1810
    ctx->pc = 0x13ef9cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_13efa0:
    // 0x13efa0: 0x5060000d
label_13efa4:
    if (ctx->pc == 0x13EFA4u) {
        ctx->pc = 0x13EFA4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
        ctx->pc = 0x13EFA8u;
        goto label_13efa8;
    }
    ctx->pc = 0x13EFA0u;
    {
        const bool branch_taken_0x13efa0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x13efa0) {
            ctx->pc = 0x13EFA4u;
            SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
            ctx->pc = 0x13EFD8u;
            goto label_13efd8;
        }
    }
    ctx->pc = 0x13EFA8u;
label_13efa8:
    // 0x13efa8: 0x3c040024
    ctx->pc = 0x13efa8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13efac:
    // 0x13efac: 0xc045a12
label_13efb0:
    if (ctx->pc == 0x13EFB0u) {
        ctx->pc = 0x13EFB0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
        ctx->pc = 0x13EFB4u;
        goto label_13efb4;
    }
    ctx->pc = 0x13EFACu;
    SET_GPR_U32(ctx, 31, 0x13EFB4u);
    ctx->pc = 0x13EFB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EFB4u; }
    }
    if (ctx->pc != 0x13EFB4u) { return; }
    ctx->pc = 0x13EFB4u;
label_13efb4:
    // 0x13efb4: 0x0
    ctx->pc = 0x13efb4u;
    // NOP
label_13efb8:
    // 0x13efb8: 0x0
    ctx->pc = 0x13efb8u;
    // NOP
label_13efbc:
    // 0x13efbc: 0x0
    ctx->pc = 0x13efbcu;
    // NOP
label_13efc0:
    // 0x13efc0: 0x0
    ctx->pc = 0x13efc0u;
    // NOP
label_13efc4:
    // 0x13efc4: 0x0
    ctx->pc = 0x13efc4u;
    // NOP
label_13efc8:
    // 0x13efc8: 0x0
    ctx->pc = 0x13efc8u;
    // NOP
label_13efcc:
    // 0x13efcc: 0x1000fffa
label_13efd0:
    if (ctx->pc == 0x13EFD0u) {
        ctx->pc = 0x13EFD4u;
        goto label_13efd4;
    }
    ctx->pc = 0x13EFCCu;
    {
        const bool branch_taken_0x13efcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13efcc) {
            ctx->pc = 0x13EFB8u;
            goto label_13efb8;
        }
    }
    ctx->pc = 0x13EFD4u;
label_13efd4:
    // 0x13efd4: 0x0
    ctx->pc = 0x13efd4u;
    // NOP
label_13efd8:
    // 0x13efd8: 0x10c20014
label_13efdc:
    if (ctx->pc == 0x13EFDCu) {
        ctx->pc = 0x13EFDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x13EFE0u;
        goto label_13efe0;
    }
    ctx->pc = 0x13EFD8u;
    {
        const bool branch_taken_0x13efd8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x13EFDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x13efd8) {
            ctx->pc = 0x13F02Cu;
            goto label_13f02c;
        }
    }
    ctx->pc = 0x13EFE0u;
label_13efe0:
    // 0x13efe0: 0x46001a
    ctx->pc = 0x13efe0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_13efe4:
    // 0x13efe4: 0x50c00001
label_13efe8:
    if (ctx->pc == 0x13EFE8u) {
        ctx->pc = 0x13EFE8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x13EFECu;
        goto label_13efec;
    }
    ctx->pc = 0x13EFE4u;
    {
        const bool branch_taken_0x13efe4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x13efe4) {
            ctx->pc = 0x13EFE8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13EFECu;
            goto label_13efec;
        }
    }
    ctx->pc = 0x13EFECu;
label_13efec:
    // 0x13efec: 0x1012
    ctx->pc = 0x13efecu;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_13eff0:
    // 0x13eff0: 0x30420001
    ctx->pc = 0x13eff0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_13eff4:
    // 0x13eff4: 0x1040000c
label_13eff8:
    if (ctx->pc == 0x13EFF8u) {
        ctx->pc = 0x13EFF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13EFFCu;
        goto label_13effc;
    }
    ctx->pc = 0x13EFF4u;
    {
        const bool branch_taken_0x13eff4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13EFF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13eff4) {
            ctx->pc = 0x13F028u;
            goto label_13f028;
        }
    }
    ctx->pc = 0x13EFFCu;
label_13effc:
    // 0x13effc: 0x3c040024
    ctx->pc = 0x13effcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f000:
    // 0x13f000: 0xc045a12
label_13f004:
    if (ctx->pc == 0x13F004u) {
        ctx->pc = 0x13F004u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
        ctx->pc = 0x13F008u;
        goto label_13f008;
    }
    ctx->pc = 0x13F000u;
    SET_GPR_U32(ctx, 31, 0x13F008u);
    ctx->pc = 0x13F004u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F008u; }
    }
    if (ctx->pc != 0x13F008u) { return; }
    ctx->pc = 0x13F008u;
label_13f008:
    // 0x13f008: 0x0
    ctx->pc = 0x13f008u;
    // NOP
label_13f00c:
    // 0x13f00c: 0x0
    ctx->pc = 0x13f00cu;
    // NOP
label_13f010:
    // 0x13f010: 0x0
    ctx->pc = 0x13f010u;
    // NOP
label_13f014:
    // 0x13f014: 0x0
    ctx->pc = 0x13f014u;
    // NOP
label_13f018:
    // 0x13f018: 0x0
    ctx->pc = 0x13f018u;
    // NOP
label_13f01c:
    // 0x13f01c: 0x1000fffa
label_13f020:
    if (ctx->pc == 0x13F020u) {
        ctx->pc = 0x13F024u;
        goto label_13f024;
    }
    ctx->pc = 0x13F01Cu;
    {
        const bool branch_taken_0x13f01c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x13f01c) {
            ctx->pc = 0x13F008u;
            goto label_13f008;
        }
    }
    ctx->pc = 0x13F024u;
label_13f024:
    // 0x13f024: 0x0
    ctx->pc = 0x13f024u;
    // NOP
label_13f028:
    // 0x13f028: 0xdfbf0000
    ctx->pc = 0x13f028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f02c:
    // 0x13f02c: 0xac860028
    ctx->pc = 0x13f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
label_13f030:
    // 0x13f030: 0x3e00008
label_13f034:
    if (ctx->pc == 0x13F034u) {
        ctx->pc = 0x13F034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F038u;
        goto label_13f038;
    }
    ctx->pc = 0x13F030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F038u;
label_13f038:
    // 0x13f038: 0x5102a
    ctx->pc = 0x13f038u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 5)));
label_13f03c:
    // 0x13f03c: 0x2406fc19
    ctx->pc = 0x13f03cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294966297));
label_13f040:
    // 0x13f040: 0x2280b
    ctx->pc = 0x13f040u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
label_13f044:
    // 0x13f044: 0x28a3fc19
    ctx->pc = 0x13f044u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 4294966297));
label_13f048:
    // 0x13f048: 0xc3280b
    ctx->pc = 0x13f048u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
label_13f04c:
    // 0x13f04c: 0x3e00008
label_13f050:
    if (ctx->pc == 0x13F050u) {
        ctx->pc = 0x13F050u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->pc = 0x13F054u;
        goto label_13f054;
    }
    ctx->pc = 0x13F04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F050u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F054u;
label_13f054:
    // 0x13f054: 0x0
    ctx->pc = 0x13f054u;
    // NOP
label_13f058:
    // 0x13f058: 0x28c3fff1
    ctx->pc = 0x13f058u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 4294967281));
label_13f05c:
    // 0x13f05c: 0x2402fff1
    ctx->pc = 0x13f05cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967281));
label_13f060:
    // 0x13f060: 0xc3100a
    ctx->pc = 0x13f060u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
label_13f064:
    // 0x13f064: 0x2406000f
    ctx->pc = 0x13f064u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
label_13f068:
    // 0x13f068: 0x52880
    ctx->pc = 0x13f068u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_13f06c:
    // 0x13f06c: 0x28430010
    ctx->pc = 0x13f06cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 16));
label_13f070:
    // 0x13f070: 0xa42821
    ctx->pc = 0x13f070u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_13f074:
    // 0x13f074: 0xc3100a
    ctx->pc = 0x13f074u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
label_13f078:
    // 0x13f078: 0x3e00008
label_13f07c:
    if (ctx->pc == 0x13F07Cu) {
        ctx->pc = 0x13F07Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x13F080u;
        goto label_13f080;
    }
    ctx->pc = 0x13F078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F07Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F080u;
label_13f080:
    // 0x13f080: 0x27bdfff0
    ctx->pc = 0x13f080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f084:
    // 0x13f084: 0x24020010
    ctx->pc = 0x13f084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_13f088:
    // 0x13f088: 0x10a20007
label_13f08c:
    if (ctx->pc == 0x13F08Cu) {
        ctx->pc = 0x13F08Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x13F090u;
        goto label_13f090;
    }
    ctx->pc = 0x13F088u;
    {
        const bool branch_taken_0x13f088 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x13F08Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x13f088) {
            ctx->pc = 0x13F0A8u;
            goto label_13f0a8;
        }
    }
    ctx->pc = 0x13F090u;
label_13f090:
    // 0x13f090: 0x3c040024
    ctx->pc = 0x13f090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f094:
    // 0x13f094: 0xdfbf0000
    ctx->pc = 0x13f094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f098:
    // 0x13f098: 0x2484d8e0
    ctx->pc = 0x13f098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957280));
label_13f09c:
    // 0x13f09c: 0x8045a12
label_13f0a0:
    if (ctx->pc == 0x13F0A0u) {
        ctx->pc = 0x13F0A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F0A4u;
        goto label_13f0a4;
    }
    ctx->pc = 0x13F09Cu;
    ctx->pc = 0x13F0A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13F0A4u;
label_13f0a4:
    // 0x13f0a4: 0x0
    ctx->pc = 0x13f0a4u;
    // NOP
label_13f0a8:
    // 0x13f0a8: 0xdfbf0000
    ctx->pc = 0x13f0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f0ac:
    // 0x13f0ac: 0x3e00008
label_13f0b0:
    if (ctx->pc == 0x13F0B0u) {
        ctx->pc = 0x13F0B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F0B4u;
        goto label_13f0b4;
    }
    ctx->pc = 0x13F0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F0B4u;
label_13f0b4:
    // 0x13f0b4: 0x0
    ctx->pc = 0x13f0b4u;
    // NOP
label_13f0b8:
    // 0x13f0b8: 0x3c040024
    ctx->pc = 0x13f0b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f0bc:
    // 0x13f0bc: 0x27bdfff0
    ctx->pc = 0x13f0bcu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f0c0:
    // 0x13f0c0: 0xffbf0000
    ctx->pc = 0x13f0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f0c4:
    // 0x13f0c4: 0xc045a12
label_13f0c8:
    if (ctx->pc == 0x13F0C8u) {
        ctx->pc = 0x13F0C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957328));
        ctx->pc = 0x13F0CCu;
        goto label_13f0cc;
    }
    ctx->pc = 0x13F0C4u;
    SET_GPR_U32(ctx, 31, 0x13F0CCu);
    ctx->pc = 0x13F0C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957328));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F0CCu; }
    }
    if (ctx->pc != 0x13F0CCu) { return; }
    ctx->pc = 0x13F0CCu;
label_13f0cc:
    // 0x13f0cc: 0x102d
    ctx->pc = 0x13f0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f0d0:
    // 0x13f0d0: 0xdfbf0000
    ctx->pc = 0x13f0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f0d4:
    // 0x13f0d4: 0x3e00008
label_13f0d8:
    if (ctx->pc == 0x13F0D8u) {
        ctx->pc = 0x13F0D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F0DCu;
        goto label_13f0dc;
    }
    ctx->pc = 0x13F0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F0DCu;
label_13f0dc:
    // 0x13f0dc: 0x0
    ctx->pc = 0x13f0dcu;
    // NOP
label_13f0e0:
    // 0x13f0e0: 0x3e00008
label_13f0e4:
    if (ctx->pc == 0x13F0E4u) {
        ctx->pc = 0x13F0E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = 0x13F0E8u;
        goto label_13f0e8;
    }
    ctx->pc = 0x13F0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F0E8u;
label_13f0e8:
    // 0x13f0e8: 0x3e00008
label_13f0ec:
    if (ctx->pc == 0x13F0ECu) {
        ctx->pc = 0x13F0ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x13F0F0u;
        goto label_13f0f0;
    }
    ctx->pc = 0x13F0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F0F0u;
label_13f0f0:
    // 0x13f0f0: 0x52880
    ctx->pc = 0x13f0f0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_13f0f4:
    // 0x13f0f4: 0xa42821
    ctx->pc = 0x13f0f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_13f0f8:
    // 0x13f0f8: 0x3e00008
label_13f0fc:
    if (ctx->pc == 0x13F0FCu) {
        ctx->pc = 0x13F0FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->pc = 0x13F100u;
        goto label_13f100;
    }
    ctx->pc = 0x13F0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F100u;
label_13f100:
    // 0x13f100: 0x3e00008
label_13f104:
    if (ctx->pc == 0x13F104u) {
        ctx->pc = 0x13F104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x13F108u;
        goto label_13f108;
    }
    ctx->pc = 0x13F100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F108u;
label_13f108:
    // 0x13f108: 0x3c040024
    ctx->pc = 0x13f108u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f10c:
    // 0x13f10c: 0x27bdfff0
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f110:
    // 0x13f110: 0xffbf0000
    ctx->pc = 0x13f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f114:
    // 0x13f114: 0xc045a12
label_13f118:
    if (ctx->pc == 0x13F118u) {
        ctx->pc = 0x13F118u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957368));
        ctx->pc = 0x13F11Cu;
        goto label_13f11c;
    }
    ctx->pc = 0x13F114u;
    SET_GPR_U32(ctx, 31, 0x13F11Cu);
    ctx->pc = 0x13F118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957368));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F11Cu; }
    }
    if (ctx->pc != 0x13F11Cu) { return; }
    ctx->pc = 0x13F11Cu;
label_13f11c:
    // 0x13f11c: 0x102d
    ctx->pc = 0x13f11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f120:
    // 0x13f120: 0xdfbf0000
    ctx->pc = 0x13f120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f124:
    // 0x13f124: 0x3e00008
label_13f128:
    if (ctx->pc == 0x13F128u) {
        ctx->pc = 0x13F128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F12Cu;
        goto label_13f12c;
    }
    ctx->pc = 0x13F124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F12Cu;
label_13f12c:
    // 0x13f12c: 0x0
    ctx->pc = 0x13f12cu;
    // NOP
label_13f130:
    // 0x13f130: 0x27bdfff0
    ctx->pc = 0x13f130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f134:
    // 0x13f134: 0x3c040024
    ctx->pc = 0x13f134u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f138:
    // 0x13f138: 0xffbf0000
    ctx->pc = 0x13f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f13c:
    // 0x13f13c: 0x2484d960
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957408));
label_13f140:
    // 0x13f140: 0xdfbf0000
    ctx->pc = 0x13f140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f144:
    // 0x13f144: 0x8045a12
label_13f148:
    if (ctx->pc == 0x13F148u) {
        ctx->pc = 0x13F148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F14Cu;
        goto label_13f14c;
    }
    ctx->pc = 0x13F144u;
    ctx->pc = 0x13F148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13F14Cu;
label_13f14c:
    // 0x13f14c: 0x0
    ctx->pc = 0x13f14cu;
    // NOP
label_13f150:
    // 0x13f150: 0x3e00008
label_13f154:
    if (ctx->pc == 0x13F154u) {
        ctx->pc = 0x13F158u;
        goto label_13f158;
    }
    ctx->pc = 0x13F150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F158u;
label_13f158:
    // 0x13f158: 0x3c040024
    ctx->pc = 0x13f158u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f15c:
    // 0x13f15c: 0x27bdfff0
    ctx->pc = 0x13f15cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f160:
    // 0x13f160: 0xffbf0000
    ctx->pc = 0x13f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f164:
    // 0x13f164: 0xc045a12
label_13f168:
    if (ctx->pc == 0x13F168u) {
        ctx->pc = 0x13F168u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957448));
        ctx->pc = 0x13F16Cu;
        goto label_13f16c;
    }
    ctx->pc = 0x13F164u;
    SET_GPR_U32(ctx, 31, 0x13F16Cu);
    ctx->pc = 0x13F168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957448));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F16Cu; }
    }
    if (ctx->pc != 0x13F16Cu) { return; }
    ctx->pc = 0x13F16Cu;
label_13f16c:
    // 0x13f16c: 0x102d
    ctx->pc = 0x13f16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13f170:
    // 0x13f170: 0xdfbf0000
    ctx->pc = 0x13f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f174:
    // 0x13f174: 0x3e00008
label_13f178:
    if (ctx->pc == 0x13F178u) {
        ctx->pc = 0x13F178u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F17Cu;
        goto label_13f17c;
    }
    ctx->pc = 0x13F174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F178u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ED28u: goto label_13ed28;
            case 0x13ED2Cu: goto label_13ed2c;
            case 0x13ED30u: goto label_13ed30;
            case 0x13ED34u: goto label_13ed34;
            case 0x13ED38u: goto label_13ed38;
            case 0x13ED3Cu: goto label_13ed3c;
            case 0x13ED40u: goto label_13ed40;
            case 0x13ED44u: goto label_13ed44;
            case 0x13ED48u: goto label_13ed48;
            case 0x13ED4Cu: goto label_13ed4c;
            case 0x13ED50u: goto label_13ed50;
            case 0x13ED54u: goto label_13ed54;
            case 0x13ED58u: goto label_13ed58;
            case 0x13ED5Cu: goto label_13ed5c;
            case 0x13ED60u: goto label_13ed60;
            case 0x13ED64u: goto label_13ed64;
            case 0x13ED68u: goto label_13ed68;
            case 0x13ED6Cu: goto label_13ed6c;
            case 0x13ED70u: goto label_13ed70;
            case 0x13ED74u: goto label_13ed74;
            case 0x13ED78u: goto label_13ed78;
            case 0x13ED7Cu: goto label_13ed7c;
            case 0x13ED80u: goto label_13ed80;
            case 0x13ED84u: goto label_13ed84;
            case 0x13ED88u: goto label_13ed88;
            case 0x13ED8Cu: goto label_13ed8c;
            case 0x13ED90u: goto label_13ed90;
            case 0x13ED94u: goto label_13ed94;
            case 0x13ED98u: goto label_13ed98;
            case 0x13ED9Cu: goto label_13ed9c;
            case 0x13EDA0u: goto label_13eda0;
            case 0x13EDA4u: goto label_13eda4;
            case 0x13EDA8u: goto label_13eda8;
            case 0x13EDACu: goto label_13edac;
            case 0x13EDB0u: goto label_13edb0;
            case 0x13EDB4u: goto label_13edb4;
            case 0x13EDB8u: goto label_13edb8;
            case 0x13EDBCu: goto label_13edbc;
            case 0x13EDC0u: goto label_13edc0;
            case 0x13EDC4u: goto label_13edc4;
            case 0x13EDC8u: goto label_13edc8;
            case 0x13EDCCu: goto label_13edcc;
            case 0x13EDD0u: goto label_13edd0;
            case 0x13EDD4u: goto label_13edd4;
            case 0x13EDD8u: goto label_13edd8;
            case 0x13EDDCu: goto label_13eddc;
            case 0x13EDE0u: goto label_13ede0;
            case 0x13EDE4u: goto label_13ede4;
            case 0x13EDE8u: goto label_13ede8;
            case 0x13EDECu: goto label_13edec;
            case 0x13EDF0u: goto label_13edf0;
            case 0x13EDF4u: goto label_13edf4;
            case 0x13EDF8u: goto label_13edf8;
            case 0x13EDFCu: goto label_13edfc;
            case 0x13EE00u: goto label_13ee00;
            case 0x13EE04u: goto label_13ee04;
            case 0x13EE08u: goto label_13ee08;
            case 0x13EE0Cu: goto label_13ee0c;
            case 0x13EE10u: goto label_13ee10;
            case 0x13EE14u: goto label_13ee14;
            case 0x13EE18u: goto label_13ee18;
            case 0x13EE1Cu: goto label_13ee1c;
            case 0x13EE20u: goto label_13ee20;
            case 0x13EE24u: goto label_13ee24;
            case 0x13EE28u: goto label_13ee28;
            case 0x13EE2Cu: goto label_13ee2c;
            case 0x13EE30u: goto label_13ee30;
            case 0x13EE34u: goto label_13ee34;
            case 0x13EE38u: goto label_13ee38;
            case 0x13EE3Cu: goto label_13ee3c;
            case 0x13EE40u: goto label_13ee40;
            case 0x13EE44u: goto label_13ee44;
            case 0x13EE48u: goto label_13ee48;
            case 0x13EE4Cu: goto label_13ee4c;
            case 0x13EE50u: goto label_13ee50;
            case 0x13EE54u: goto label_13ee54;
            case 0x13EE58u: goto label_13ee58;
            case 0x13EE5Cu: goto label_13ee5c;
            case 0x13EE60u: goto label_13ee60;
            case 0x13EE64u: goto label_13ee64;
            case 0x13EE68u: goto label_13ee68;
            case 0x13EE6Cu: goto label_13ee6c;
            case 0x13EE70u: goto label_13ee70;
            case 0x13EE74u: goto label_13ee74;
            case 0x13EE78u: goto label_13ee78;
            case 0x13EE7Cu: goto label_13ee7c;
            case 0x13EE80u: goto label_13ee80;
            case 0x13EE84u: goto label_13ee84;
            case 0x13EE88u: goto label_13ee88;
            case 0x13EE8Cu: goto label_13ee8c;
            case 0x13EE90u: goto label_13ee90;
            case 0x13EE94u: goto label_13ee94;
            case 0x13EE98u: goto label_13ee98;
            case 0x13EE9Cu: goto label_13ee9c;
            case 0x13EEA0u: goto label_13eea0;
            case 0x13EEA4u: goto label_13eea4;
            case 0x13EEA8u: goto label_13eea8;
            case 0x13EEACu: goto label_13eeac;
            case 0x13EEB0u: goto label_13eeb0;
            case 0x13EEB4u: goto label_13eeb4;
            case 0x13EEB8u: goto label_13eeb8;
            case 0x13EEBCu: goto label_13eebc;
            case 0x13EEC0u: goto label_13eec0;
            case 0x13EEC4u: goto label_13eec4;
            case 0x13EEC8u: goto label_13eec8;
            case 0x13EECCu: goto label_13eecc;
            case 0x13EED0u: goto label_13eed0;
            case 0x13EED4u: goto label_13eed4;
            case 0x13EED8u: goto label_13eed8;
            case 0x13EEDCu: goto label_13eedc;
            case 0x13EEE0u: goto label_13eee0;
            case 0x13EEE4u: goto label_13eee4;
            case 0x13EEE8u: goto label_13eee8;
            case 0x13EEECu: goto label_13eeec;
            case 0x13EEF0u: goto label_13eef0;
            case 0x13EEF4u: goto label_13eef4;
            case 0x13EEF8u: goto label_13eef8;
            case 0x13EEFCu: goto label_13eefc;
            case 0x13EF00u: goto label_13ef00;
            case 0x13EF04u: goto label_13ef04;
            case 0x13EF08u: goto label_13ef08;
            case 0x13EF0Cu: goto label_13ef0c;
            case 0x13EF10u: goto label_13ef10;
            case 0x13EF14u: goto label_13ef14;
            case 0x13EF18u: goto label_13ef18;
            case 0x13EF1Cu: goto label_13ef1c;
            case 0x13EF20u: goto label_13ef20;
            case 0x13EF24u: goto label_13ef24;
            case 0x13EF28u: goto label_13ef28;
            case 0x13EF2Cu: goto label_13ef2c;
            case 0x13EF30u: goto label_13ef30;
            case 0x13EF34u: goto label_13ef34;
            case 0x13EF38u: goto label_13ef38;
            case 0x13EF3Cu: goto label_13ef3c;
            case 0x13EF40u: goto label_13ef40;
            case 0x13EF44u: goto label_13ef44;
            case 0x13EF48u: goto label_13ef48;
            case 0x13EF4Cu: goto label_13ef4c;
            case 0x13EF50u: goto label_13ef50;
            case 0x13EF54u: goto label_13ef54;
            case 0x13EF58u: goto label_13ef58;
            case 0x13EF5Cu: goto label_13ef5c;
            case 0x13EF60u: goto label_13ef60;
            case 0x13EF64u: goto label_13ef64;
            case 0x13EF68u: goto label_13ef68;
            case 0x13EF6Cu: goto label_13ef6c;
            case 0x13EF70u: goto label_13ef70;
            case 0x13EF74u: goto label_13ef74;
            case 0x13EF78u: goto label_13ef78;
            case 0x13EF7Cu: goto label_13ef7c;
            case 0x13EF80u: goto label_13ef80;
            case 0x13EF84u: goto label_13ef84;
            case 0x13EF88u: goto label_13ef88;
            case 0x13EF8Cu: goto label_13ef8c;
            case 0x13EF90u: goto label_13ef90;
            case 0x13EF94u: goto label_13ef94;
            case 0x13EF98u: goto label_13ef98;
            case 0x13EF9Cu: goto label_13ef9c;
            case 0x13EFA0u: goto label_13efa0;
            case 0x13EFA4u: goto label_13efa4;
            case 0x13EFA8u: goto label_13efa8;
            case 0x13EFACu: goto label_13efac;
            case 0x13EFB0u: goto label_13efb0;
            case 0x13EFB4u: goto label_13efb4;
            case 0x13EFB8u: goto label_13efb8;
            case 0x13EFBCu: goto label_13efbc;
            case 0x13EFC0u: goto label_13efc0;
            case 0x13EFC4u: goto label_13efc4;
            case 0x13EFC8u: goto label_13efc8;
            case 0x13EFCCu: goto label_13efcc;
            case 0x13EFD0u: goto label_13efd0;
            case 0x13EFD4u: goto label_13efd4;
            case 0x13EFD8u: goto label_13efd8;
            case 0x13EFDCu: goto label_13efdc;
            case 0x13EFE0u: goto label_13efe0;
            case 0x13EFE4u: goto label_13efe4;
            case 0x13EFE8u: goto label_13efe8;
            case 0x13EFECu: goto label_13efec;
            case 0x13EFF0u: goto label_13eff0;
            case 0x13EFF4u: goto label_13eff4;
            case 0x13EFF8u: goto label_13eff8;
            case 0x13EFFCu: goto label_13effc;
            case 0x13F000u: goto label_13f000;
            case 0x13F004u: goto label_13f004;
            case 0x13F008u: goto label_13f008;
            case 0x13F00Cu: goto label_13f00c;
            case 0x13F010u: goto label_13f010;
            case 0x13F014u: goto label_13f014;
            case 0x13F018u: goto label_13f018;
            case 0x13F01Cu: goto label_13f01c;
            case 0x13F020u: goto label_13f020;
            case 0x13F024u: goto label_13f024;
            case 0x13F028u: goto label_13f028;
            case 0x13F02Cu: goto label_13f02c;
            case 0x13F030u: goto label_13f030;
            case 0x13F034u: goto label_13f034;
            case 0x13F038u: goto label_13f038;
            case 0x13F03Cu: goto label_13f03c;
            case 0x13F040u: goto label_13f040;
            case 0x13F044u: goto label_13f044;
            case 0x13F048u: goto label_13f048;
            case 0x13F04Cu: goto label_13f04c;
            case 0x13F050u: goto label_13f050;
            case 0x13F054u: goto label_13f054;
            case 0x13F058u: goto label_13f058;
            case 0x13F05Cu: goto label_13f05c;
            case 0x13F060u: goto label_13f060;
            case 0x13F064u: goto label_13f064;
            case 0x13F068u: goto label_13f068;
            case 0x13F06Cu: goto label_13f06c;
            case 0x13F070u: goto label_13f070;
            case 0x13F074u: goto label_13f074;
            case 0x13F078u: goto label_13f078;
            case 0x13F07Cu: goto label_13f07c;
            case 0x13F080u: goto label_13f080;
            case 0x13F084u: goto label_13f084;
            case 0x13F088u: goto label_13f088;
            case 0x13F08Cu: goto label_13f08c;
            case 0x13F090u: goto label_13f090;
            case 0x13F094u: goto label_13f094;
            case 0x13F098u: goto label_13f098;
            case 0x13F09Cu: goto label_13f09c;
            case 0x13F0A0u: goto label_13f0a0;
            case 0x13F0A4u: goto label_13f0a4;
            case 0x13F0A8u: goto label_13f0a8;
            case 0x13F0ACu: goto label_13f0ac;
            case 0x13F0B0u: goto label_13f0b0;
            case 0x13F0B4u: goto label_13f0b4;
            case 0x13F0B8u: goto label_13f0b8;
            case 0x13F0BCu: goto label_13f0bc;
            case 0x13F0C0u: goto label_13f0c0;
            case 0x13F0C4u: goto label_13f0c4;
            case 0x13F0C8u: goto label_13f0c8;
            case 0x13F0CCu: goto label_13f0cc;
            case 0x13F0D0u: goto label_13f0d0;
            case 0x13F0D4u: goto label_13f0d4;
            case 0x13F0D8u: goto label_13f0d8;
            case 0x13F0DCu: goto label_13f0dc;
            case 0x13F0E0u: goto label_13f0e0;
            case 0x13F0E4u: goto label_13f0e4;
            case 0x13F0E8u: goto label_13f0e8;
            case 0x13F0ECu: goto label_13f0ec;
            case 0x13F0F0u: goto label_13f0f0;
            case 0x13F0F4u: goto label_13f0f4;
            case 0x13F0F8u: goto label_13f0f8;
            case 0x13F0FCu: goto label_13f0fc;
            case 0x13F100u: goto label_13f100;
            case 0x13F104u: goto label_13f104;
            case 0x13F108u: goto label_13f108;
            case 0x13F10Cu: goto label_13f10c;
            case 0x13F110u: goto label_13f110;
            case 0x13F114u: goto label_13f114;
            case 0x13F118u: goto label_13f118;
            case 0x13F11Cu: goto label_13f11c;
            case 0x13F120u: goto label_13f120;
            case 0x13F124u: goto label_13f124;
            case 0x13F128u: goto label_13f128;
            case 0x13F12Cu: goto label_13f12c;
            case 0x13F130u: goto label_13f130;
            case 0x13F134u: goto label_13f134;
            case 0x13F138u: goto label_13f138;
            case 0x13F13Cu: goto label_13f13c;
            case 0x13F140u: goto label_13f140;
            case 0x13F144u: goto label_13f144;
            case 0x13F148u: goto label_13f148;
            case 0x13F14Cu: goto label_13f14c;
            case 0x13F150u: goto label_13f150;
            case 0x13F154u: goto label_13f154;
            case 0x13F158u: goto label_13f158;
            case 0x13F15Cu: goto label_13f15c;
            case 0x13F160u: goto label_13f160;
            case 0x13F164u: goto label_13f164;
            case 0x13F168u: goto label_13f168;
            case 0x13F16Cu: goto label_13f16c;
            case 0x13F170u: goto label_13f170;
            case 0x13F174u: goto label_13f174;
            case 0x13F178u: goto label_13f178;
            case 0x13F17Cu: goto label_13f17c;
            case 0x13F180u: goto label_13f180;
            case 0x13F184u: goto label_13f184;
            case 0x13F188u: goto label_13f188;
            case 0x13F18Cu: goto label_13f18c;
            case 0x13F190u: goto label_13f190;
            case 0x13F194u: goto label_13f194;
            case 0x13F198u: goto label_13f198;
            case 0x13F19Cu: goto label_13f19c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F17Cu;
label_13f17c:
    // 0x13f17c: 0x0
    ctx->pc = 0x13f17cu;
    // NOP
label_13f180:
    // 0x13f180: 0x27bdfff0
    ctx->pc = 0x13f180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_13f184:
    // 0x13f184: 0x3c040024
    ctx->pc = 0x13f184u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_13f188:
    // 0x13f188: 0xffbf0000
    ctx->pc = 0x13f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13f18c:
    // 0x13f18c: 0x2484d9b0
    ctx->pc = 0x13f18cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957488));
label_13f190:
    // 0x13f190: 0xdfbf0000
    ctx->pc = 0x13f190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f194:
    // 0x13f194: 0x8045a12
label_13f198:
    if (ctx->pc == 0x13F198u) {
        ctx->pc = 0x13F198u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13F19Cu;
        goto label_13f19c;
    }
    ctx->pc = 0x13F194u;
    ctx->pc = 0x13F198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116848u;
    sub_00116848_0x116848(rdram, ctx, runtime); return;
    ctx->pc = 0x13F19Cu;
label_13f19c:
    // 0x13f19c: 0x0
    ctx->pc = 0x13f19cu;
    // NOP
}
