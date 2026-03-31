#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012CFD8
// Address: 0x12cfd8 - 0x12d338
void sub_0012CFD8_0x12cfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12cfd8u;

label_12cfd8:
    // 0x12cfd8: 0x27bdffb0
    ctx->pc = 0x12cfd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_12cfdc:
    // 0x12cfdc: 0xffb20030
    ctx->pc = 0x12cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_12cfe0:
    // 0x12cfe0: 0x80902d
    ctx->pc = 0x12cfe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12cfe4:
    // 0x12cfe4: 0xffb00020
    ctx->pc = 0x12cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_12cfe8:
    // 0x12cfe8: 0xffb10028
    ctx->pc = 0x12cfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_12cfec:
    // 0x12cfec: 0xffb30038
    ctx->pc = 0x12cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_12cff0:
    // 0x12cff0: 0xffb40040
    ctx->pc = 0x12cff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_12cff4:
    // 0x12cff4: 0xffbf0048
    ctx->pc = 0x12cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_12cff8:
    // 0x12cff8: 0x8e43003c
    ctx->pc = 0x12cff8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_12cffc:
    // 0x12cffc: 0x8e540004
    ctx->pc = 0x12cffcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_12d000:
    // 0x12d000: 0x460000a
label_12d004:
    if (ctx->pc == 0x12D004u) {
        ctx->pc = 0x12D004u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x12D008u;
        goto label_12d008;
    }
    ctx->pc = 0x12D000u;
    {
        const bool branch_taken_0x12d000 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12D004u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x12d000) {
            ctx->pc = 0x12D02Cu;
            goto label_12d02c;
        }
    }
    ctx->pc = 0x12D008u;
label_12d008:
    // 0x12d008: 0x8e420040
    ctx->pc = 0x12d008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_12d00c:
    // 0x12d00c: 0x43102a
    ctx->pc = 0x12d00cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_12d010:
    // 0x12d010: 0x54400007
label_12d014:
    if (ctx->pc == 0x12D014u) {
        ctx->pc = 0x12D014u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x12D018u;
        goto label_12d018;
    }
    ctx->pc = 0x12D010u;
    {
        const bool branch_taken_0x12d010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d010) {
            ctx->pc = 0x12D014u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->pc = 0x12D030u;
            goto label_12d030;
        }
    }
    ctx->pc = 0x12D018u;
label_12d018:
    // 0x12d018: 0x8e420048
    ctx->pc = 0x12d018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_12d01c:
    // 0x12d01c: 0x50400004
label_12d020:
    if (ctx->pc == 0x12D020u) {
        ctx->pc = 0x12D020u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->pc = 0x12D024u;
        goto label_12d024;
    }
    ctx->pc = 0x12D01Cu;
    {
        const bool branch_taken_0x12d01c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d01c) {
            ctx->pc = 0x12D020u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->pc = 0x12D030u;
            goto label_12d030;
        }
    }
    ctx->pc = 0x12D024u;
label_12d024:
    // 0x12d024: 0x40f809
label_12d028:
    if (ctx->pc == 0x12D028u) {
        ctx->pc = 0x12D028u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->pc = 0x12D02Cu;
        goto label_12d02c;
    }
    ctx->pc = 0x12D024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D02Cu);
        ctx->pc = 0x12D028u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D02Cu; }
            if (ctx->pc != 0x12D02Cu) { return; }
        }
    }
    ctx->pc = 0x12D02Cu;
label_12d02c:
    // 0x12d02c: 0x82430003
    ctx->pc = 0x12d02cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_12d030:
    // 0x12d030: 0x24020001
    ctx->pc = 0x12d030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12d034:
    // 0x12d034: 0x5462000c
label_12d038:
    if (ctx->pc == 0x12D038u) {
        ctx->pc = 0x12D038u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12D03Cu;
        goto label_12d03c;
    }
    ctx->pc = 0x12D034u;
    {
        const bool branch_taken_0x12d034 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x12d034) {
            ctx->pc = 0x12D038u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x12D068u;
            goto label_12d068;
        }
    }
    ctx->pc = 0x12D03Cu;
label_12d03c:
    // 0x12d03c: 0x8e230000
    ctx->pc = 0x12d03cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d040:
    // 0x12d040: 0x220202d
    ctx->pc = 0x12d040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d044:
    // 0x12d044: 0x8c620024
    ctx->pc = 0x12d044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_12d048:
    // 0x12d048: 0x40f809
label_12d04c:
    if (ctx->pc == 0x12D04Cu) {
        ctx->pc = 0x12D04Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12D050u;
        goto label_12d050;
    }
    ctx->pc = 0x12D048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D050u);
        ctx->pc = 0x12D04Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D050u; }
            if (ctx->pc != 0x12D050u) { return; }
        }
    }
    ctx->pc = 0x12D050u;
label_12d050:
    // 0x12d050: 0x54400005
label_12d054:
    if (ctx->pc == 0x12D054u) {
        ctx->pc = 0x12D054u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12D058u;
        goto label_12d058;
    }
    ctx->pc = 0x12D050u;
    {
        const bool branch_taken_0x12d050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d050) {
            ctx->pc = 0x12D054u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x12D068u;
            goto label_12d068;
        }
    }
    ctx->pc = 0x12D058u;
label_12d058:
    // 0x12d058: 0x24020003
    ctx->pc = 0x12d058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_12d05c:
    // 0x12d05c: 0x100000ad
label_12d060:
    if (ctx->pc == 0x12D060u) {
        ctx->pc = 0x12D060u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12D064u;
        goto label_12d064;
    }
    ctx->pc = 0x12D05Cu;
    {
        const bool branch_taken_0x12d05c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D060u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12d05c) {
            ctx->pc = 0x12D314u;
            goto label_12d314;
        }
    }
    ctx->pc = 0x12D064u;
label_12d064:
    // 0x12d064: 0x0
    ctx->pc = 0x12d064u;
    // NOP
label_12d068:
    // 0x12d068: 0x26530014
    ctx->pc = 0x12d068u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 20));
label_12d06c:
    // 0x12d06c: 0x3c067fff
    ctx->pc = 0x12d06cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_12d070:
    // 0x12d070: 0x220202d
    ctx->pc = 0x12d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d074:
    // 0x12d074: 0x8c430018
    ctx->pc = 0x12d074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_12d078:
    // 0x12d078: 0x24050001
    ctx->pc = 0x12d078u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12d07c:
    // 0x12d07c: 0x34c6ffff
    ctx->pc = 0x12d07cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_12d080:
    // 0x12d080: 0x60f809
label_12d084:
    if (ctx->pc == 0x12D084u) {
        ctx->pc = 0x12D084u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D088u;
        goto label_12d088;
    }
    ctx->pc = 0x12D080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12D088u);
        ctx->pc = 0x12D084u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D088u; }
            if (ctx->pc != 0x12D088u) { return; }
        }
    }
    ctx->pc = 0x12D088u;
label_12d088:
    // 0x12d088: 0xc04939a
label_12d08c:
    if (ctx->pc == 0x12D08Cu) {
        ctx->pc = 0x12D08Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D090u;
        goto label_12d090;
    }
    ctx->pc = 0x12D088u;
    SET_GPR_U32(ctx, 31, 0x12D090u);
    ctx->pc = 0x12D08Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E68_0x124e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D090u; }
    }
    if (ctx->pc != 0x12D090u) { return; }
    ctx->pc = 0x12D090u;
label_12d090:
    // 0x12d090: 0x1440005f
label_12d094:
    if (ctx->pc == 0x12D094u) {
        ctx->pc = 0x12D098u;
        goto label_12d098;
    }
    ctx->pc = 0x12D090u;
    {
        const bool branch_taken_0x12d090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d090) {
            ctx->pc = 0x12D210u;
            goto label_12d210;
        }
    }
    ctx->pc = 0x12D098u;
label_12d098:
    // 0x12d098: 0x8e460018
    ctx->pc = 0x12d098u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_12d09c:
    // 0x12d09c: 0x28c20004
    ctx->pc = 0x12d09cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
label_12d0a0:
    // 0x12d0a0: 0x1440005b
label_12d0a4:
    if (ctx->pc == 0x12D0A4u) {
        ctx->pc = 0x12D0A4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
        ctx->pc = 0x12D0A8u;
        goto label_12d0a8;
    }
    ctx->pc = 0x12D0A0u;
    {
        const bool branch_taken_0x12d0a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D0A4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
        if (branch_taken_0x12d0a0) {
            ctx->pc = 0x12D210u;
            goto label_12d210;
        }
    }
    ctx->pc = 0x12D0A8u;
label_12d0a8:
    // 0x12d0a8: 0x8e640000
    ctx->pc = 0x12d0a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12d0ac:
    // 0x12d0ac: 0x94830000
    ctx->pc = 0x12d0acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_12d0b0:
    // 0x12d0b0: 0x90820001
    ctx->pc = 0x12d0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_12d0b4:
    // 0x12d0b4: 0x31a00
    ctx->pc = 0x12d0b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_12d0b8:
    // 0x12d0b8: 0x431025
    ctx->pc = 0x12d0b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12d0bc:
    // 0x12d0bc: 0x3042ffff
    ctx->pc = 0x12d0bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_12d0c0:
    // 0x12d0c0: 0x14450053
label_12d0c4:
    if (ctx->pc == 0x12D0C4u) {
        ctx->pc = 0x12D0C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x12D0C8u;
        goto label_12d0c8;
    }
    ctx->pc = 0x12D0C0u;
    {
        const bool branch_taken_0x12d0c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x12D0C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x12d0c0) {
            ctx->pc = 0x12D210u;
            goto label_12d210;
        }
    }
    ctx->pc = 0x12D0C8u;
label_12d0c8:
    // 0x12d0c8: 0xc0282d
    ctx->pc = 0x12d0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12d0cc:
    // 0x12d0cc: 0xa2420001
    ctx->pc = 0x12d0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_12d0d0:
    // 0x12d0d0: 0xc049bc8
label_12d0d4:
    if (ctx->pc == 0x12D0D4u) {
        ctx->pc = 0x12D0D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D0D8u;
        goto label_12d0d8;
    }
    ctx->pc = 0x12D0D0u;
    SET_GPR_U32(ctx, 31, 0x12D0D8u);
    ctx->pc = 0x12D0D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x126F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00126F20_0x126f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0D8u; }
    }
    if (ctx->pc != 0x12D0D8u) { return; }
    ctx->pc = 0x12D0D8u;
label_12d0d8:
    // 0x12d0d8: 0x5440003f
label_12d0dc:
    if (ctx->pc == 0x12D0DCu) {
        ctx->pc = 0x12D0DCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D0E0u;
        goto label_12d0e0;
    }
    ctx->pc = 0x12D0D8u;
    {
        const bool branch_taken_0x12d0d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d0d8) {
            ctx->pc = 0x12D0DCu;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12D1D8u;
            goto label_12d1d8;
        }
    }
    ctx->pc = 0x12D0E0u;
label_12d0e0:
    // 0x12d0e0: 0x87a50010
    ctx->pc = 0x12d0e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_12d0e4:
    // 0x12d0e4: 0x8e420018
    ctx->pc = 0x12d0e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_12d0e8:
    // 0x12d0e8: 0x45102a
    ctx->pc = 0x12d0e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
label_12d0ec:
    // 0x12d0ec: 0x54400067
label_12d0f0:
    if (ctx->pc == 0x12D0F0u) {
        ctx->pc = 0x12D0F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12D0F4u;
        goto label_12d0f4;
    }
    ctx->pc = 0x12D0ECu;
    {
        const bool branch_taken_0x12d0ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d0ec) {
            ctx->pc = 0x12D0F0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x12D28Cu;
            goto label_12d28c;
        }
    }
    ctx->pc = 0x12D0F4u;
label_12d0f4:
    // 0x12d0f4: 0x260202d
    ctx->pc = 0x12d0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12d0f8:
    // 0x12d0f8: 0x260302d
    ctx->pc = 0x12d0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12d0fc:
    // 0x12d0fc: 0xc0501f8
label_12d100:
    if (ctx->pc == 0x12D100u) {
        ctx->pc = 0x12D100u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D104u;
        goto label_12d104;
    }
    ctx->pc = 0x12D0FCu;
    SET_GPR_U32(ctx, 31, 0x12D104u);
    ctx->pc = 0x12D100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D104u; }
    }
    if (ctx->pc != 0x12D104u) { return; }
    ctx->pc = 0x12D104u;
label_12d104:
    // 0x12d104: 0x8e230000
    ctx->pc = 0x12d104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d108:
    // 0x12d108: 0x220202d
    ctx->pc = 0x12d108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d10c:
    // 0x12d10c: 0x282d
    ctx->pc = 0x12d10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d110:
    // 0x12d110: 0x8c620020
    ctx->pc = 0x12d110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12d114:
    // 0x12d114: 0x40f809
label_12d118:
    if (ctx->pc == 0x12D118u) {
        ctx->pc = 0x12D118u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D11Cu;
        goto label_12d11c;
    }
    ctx->pc = 0x12D114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D11Cu);
        ctx->pc = 0x12D118u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D11Cu; }
            if (ctx->pc != 0x12D11Cu) { return; }
        }
    }
    ctx->pc = 0x12D11Cu;
label_12d11c:
    // 0x12d11c: 0x8e230000
    ctx->pc = 0x12d11cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d120:
    // 0x12d120: 0x220202d
    ctx->pc = 0x12d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d124:
    // 0x12d124: 0x24050001
    ctx->pc = 0x12d124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12d128:
    // 0x12d128: 0x8c62001c
    ctx->pc = 0x12d128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12d12c:
    // 0x12d12c: 0x40f809
label_12d130:
    if (ctx->pc == 0x12D130u) {
        ctx->pc = 0x12D130u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D134u;
        goto label_12d134;
    }
    ctx->pc = 0x12D12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D134u);
        ctx->pc = 0x12D130u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D134u; }
            if (ctx->pc != 0x12D134u) { return; }
        }
    }
    ctx->pc = 0x12D134u;
label_12d134:
    // 0x12d134: 0x10000028
label_12d138:
    if (ctx->pc == 0x12D138u) {
        ctx->pc = 0x12D138u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D13Cu;
        goto label_12d13c;
    }
    ctx->pc = 0x12D134u;
    {
        const bool branch_taken_0x12d134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D138u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d134) {
            ctx->pc = 0x12D1D8u;
            goto label_12d1d8;
        }
    }
    ctx->pc = 0x12D13Cu;
label_12d13c:
    // 0x12d13c: 0x0
    ctx->pc = 0x12d13cu;
    // NOP
label_12d140:
    // 0x12d140: 0xa4802a
    ctx->pc = 0x12d140u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
label_12d144:
    // 0x12d144: 0x52000013
label_12d148:
    if (ctx->pc == 0x12D148u) {
        ctx->pc = 0x12D148u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D14Cu;
        goto label_12d14c;
    }
    ctx->pc = 0x12D144u;
    {
        const bool branch_taken_0x12d144 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d144) {
            ctx->pc = 0x12D148u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12D194u;
            goto label_12d194;
        }
    }
    ctx->pc = 0x12D14Cu;
label_12d14c:
    // 0x12d14c: 0x8e620000
    ctx->pc = 0x12d14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12d150:
    // 0x12d150: 0x80430000
    ctx->pc = 0x12d150u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12d154:
    // 0x12d154: 0x5460000f
label_12d158:
    if (ctx->pc == 0x12D158u) {
        ctx->pc = 0x12D158u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D15Cu;
        goto label_12d15c;
    }
    ctx->pc = 0x12D154u;
    {
        const bool branch_taken_0x12d154 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d154) {
            ctx->pc = 0x12D158u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x12D194u;
            goto label_12d194;
        }
    }
    ctx->pc = 0x12D15Cu;
label_12d15c:
    // 0x12d15c: 0x80302d
    ctx->pc = 0x12d15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12d160:
    // 0x12d160: 0x24a50001
    ctx->pc = 0x12d160u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_12d164:
    // 0x12d164: 0x0
    ctx->pc = 0x12d164u;
    // NOP
label_12d168:
    // 0x12d168: 0xa6102a
    ctx->pc = 0x12d168u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
label_12d16c:
    // 0x12d16c: 0x50400008
label_12d170:
    if (ctx->pc == 0x12D170u) {
        ctx->pc = 0x12D170u;
        SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
        ctx->pc = 0x12D174u;
        goto label_12d174;
    }
    ctx->pc = 0x12D16Cu;
    {
        const bool branch_taken_0x12d16c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d16c) {
            ctx->pc = 0x12D170u;
            SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
            ctx->pc = 0x12D190u;
            goto label_12d190;
        }
    }
    ctx->pc = 0x12D174u;
label_12d174:
    // 0x12d174: 0x8e420014
    ctx->pc = 0x12d174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_12d178:
    // 0x12d178: 0x451021
    ctx->pc = 0x12d178u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12d17c:
    // 0x12d17c: 0x80430000
    ctx->pc = 0x12d17cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12d180:
    // 0x12d180: 0x0
    ctx->pc = 0x12d180u;
    // NOP
label_12d184:
    // 0x12d184: 0x5060fff8
label_12d188:
    if (ctx->pc == 0x12D188u) {
        ctx->pc = 0x12D188u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x12D18Cu;
        goto label_12d18c;
    }
    ctx->pc = 0x12D184u;
    {
        const bool branch_taken_0x12d184 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d184) {
            ctx->pc = 0x12D188u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x12D168u;
            goto label_12d168;
        }
    }
    ctx->pc = 0x12D18Cu;
label_12d18c:
    // 0x12d18c: 0xa4802a
    ctx->pc = 0x12d18cu;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
label_12d190:
    // 0x12d190: 0x280202d
    ctx->pc = 0x12d190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12d194:
    // 0x12d194: 0x280302d
    ctx->pc = 0x12d194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12d198:
    // 0x12d198: 0xc0501f8
label_12d19c:
    if (ctx->pc == 0x12D19Cu) {
        ctx->pc = 0x12D19Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D1A0u;
        goto label_12d1a0;
    }
    ctx->pc = 0x12D198u;
    SET_GPR_U32(ctx, 31, 0x12D1A0u);
    ctx->pc = 0x12D19Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1407E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001407E0_0x1407e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1A0u; }
    }
    if (ctx->pc != 0x12D1A0u) { return; }
    ctx->pc = 0x12D1A0u;
label_12d1a0:
    // 0x12d1a0: 0x8e230000
    ctx->pc = 0x12d1a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d1a4:
    // 0x12d1a4: 0x220202d
    ctx->pc = 0x12d1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d1a8:
    // 0x12d1a8: 0x282d
    ctx->pc = 0x12d1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d1ac:
    // 0x12d1ac: 0x8c620020
    ctx->pc = 0x12d1acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_12d1b0:
    // 0x12d1b0: 0x40f809
label_12d1b4:
    if (ctx->pc == 0x12D1B4u) {
        ctx->pc = 0x12D1B4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D1B8u;
        goto label_12d1b8;
    }
    ctx->pc = 0x12D1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D1B8u);
        ctx->pc = 0x12D1B4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D1B8u; }
            if (ctx->pc != 0x12D1B8u) { return; }
        }
    }
    ctx->pc = 0x12D1B8u;
label_12d1b8:
    // 0x12d1b8: 0x8e230000
    ctx->pc = 0x12d1b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d1bc:
    // 0x12d1bc: 0x220202d
    ctx->pc = 0x12d1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d1c0:
    // 0x12d1c0: 0x24050001
    ctx->pc = 0x12d1c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12d1c4:
    // 0x12d1c4: 0x8c62001c
    ctx->pc = 0x12d1c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12d1c8:
    // 0x12d1c8: 0x40f809
label_12d1cc:
    if (ctx->pc == 0x12D1CCu) {
        ctx->pc = 0x12D1CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D1D0u;
        goto label_12d1d0;
    }
    ctx->pc = 0x12D1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D1D0u);
        ctx->pc = 0x12D1CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D1D0u; }
            if (ctx->pc != 0x12D1D0u) { return; }
        }
    }
    ctx->pc = 0x12D1D0u;
label_12d1d0:
    // 0x12d1d0: 0x16000051
label_12d1d4:
    if (ctx->pc == 0x12D1D4u) {
        ctx->pc = 0x12D1D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12D1D8u;
        goto label_12d1d8;
    }
    ctx->pc = 0x12D1D0u;
    {
        const bool branch_taken_0x12d1d0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D1D4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12d1d0) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D1D8u;
label_12d1d8:
    // 0x12d1d8: 0x8e230000
    ctx->pc = 0x12d1d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d1dc:
    // 0x12d1dc: 0x3c067fff
    ctx->pc = 0x12d1dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_12d1e0:
    // 0x12d1e0: 0x220202d
    ctx->pc = 0x12d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d1e4:
    // 0x12d1e4: 0x24050001
    ctx->pc = 0x12d1e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_12d1e8:
    // 0x12d1e8: 0x8c620018
    ctx->pc = 0x12d1e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_12d1ec:
    // 0x12d1ec: 0x34c6ffff
    ctx->pc = 0x12d1ecu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_12d1f0:
    // 0x12d1f0: 0x40f809
label_12d1f4:
    if (ctx->pc == 0x12D1F4u) {
        ctx->pc = 0x12D1F4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D1F8u;
        goto label_12d1f8;
    }
    ctx->pc = 0x12D1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D1F8u);
        ctx->pc = 0x12D1F4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D1F8u; }
            if (ctx->pc != 0x12D1F8u) { return; }
        }
    }
    ctx->pc = 0x12D1F8u;
label_12d1f8:
    // 0x12d1f8: 0x8e440018
    ctx->pc = 0x12d1f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_12d1fc:
    // 0x12d1fc: 0x1480ffd0
label_12d200:
    if (ctx->pc == 0x12D200u) {
        ctx->pc = 0x12D200u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D204u;
        goto label_12d204;
    }
    ctx->pc = 0x12D1FCu;
    {
        const bool branch_taken_0x12d1fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D200u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12d1fc) {
            ctx->pc = 0x12D140u;
            goto label_12d140;
        }
    }
    ctx->pc = 0x12D204u;
label_12d204:
    // 0x12d204: 0x10000044
label_12d208:
    if (ctx->pc == 0x12D208u) {
        ctx->pc = 0x12D208u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12D20Cu;
        goto label_12d20c;
    }
    ctx->pc = 0x12D204u;
    {
        const bool branch_taken_0x12d204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D208u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12d204) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D20Cu;
label_12d20c:
    // 0x12d20c: 0x0
    ctx->pc = 0x12d20cu;
    // NOP
label_12d210:
    // 0x12d210: 0xc04b602
label_12d214:
    if (ctx->pc == 0x12D214u) {
        ctx->pc = 0x12D214u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D218u;
        goto label_12d218;
    }
    ctx->pc = 0x12D210u;
    SET_GPR_U32(ctx, 31, 0x12D218u);
    ctx->pc = 0x12D214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D808_0x12d808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D218u; }
    }
    if (ctx->pc != 0x12D218u) { return; }
    ctx->pc = 0x12D218u;
label_12d218:
    // 0x12d218: 0x8e430034
    ctx->pc = 0x12d218u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_12d21c:
    // 0x12d21c: 0x62182a
    ctx->pc = 0x12d21cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_12d220:
    // 0x12d220: 0x1460000b
label_12d224:
    if (ctx->pc == 0x12D224u) {
        ctx->pc = 0x12D224u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x12D228u;
        goto label_12d228;
    }
    ctx->pc = 0x12D220u;
    {
        const bool branch_taken_0x12d220 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D224u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x12d220) {
            ctx->pc = 0x12D250u;
            goto label_12d250;
        }
    }
    ctx->pc = 0x12D228u;
label_12d228:
    // 0x12d228: 0x220202d
    ctx->pc = 0x12d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d22c:
    // 0x12d22c: 0xa2420001
    ctx->pc = 0x12d22cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_12d230:
    // 0x12d230: 0x260302d
    ctx->pc = 0x12d230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12d234:
    // 0x12d234: 0x8e220000
    ctx->pc = 0x12d234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d238:
    // 0x12d238: 0x8c43001c
    ctx->pc = 0x12d238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_12d23c:
    // 0x12d23c: 0x60f809
label_12d240:
    if (ctx->pc == 0x12D240u) {
        ctx->pc = 0x12D240u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12D244u;
        goto label_12d244;
    }
    ctx->pc = 0x12D23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12D244u);
        ctx->pc = 0x12D240u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D244u; }
            if (ctx->pc != 0x12D244u) { return; }
        }
    }
    ctx->pc = 0x12D244u;
label_12d244:
    // 0x12d244: 0x10000034
label_12d248:
    if (ctx->pc == 0x12D248u) {
        ctx->pc = 0x12D248u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12D24Cu;
        goto label_12d24c;
    }
    ctx->pc = 0x12D244u;
    {
        const bool branch_taken_0x12d244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D248u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12d244) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D24Cu;
label_12d24c:
    // 0x12d24c: 0x0
    ctx->pc = 0x12d24cu;
    // NOP
label_12d250:
    // 0x12d250: 0xc04b5f6
label_12d254:
    if (ctx->pc == 0x12D254u) {
        ctx->pc = 0x12D254u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D258u;
        goto label_12d258;
    }
    ctx->pc = 0x12D250u;
    SET_GPR_U32(ctx, 31, 0x12D258u);
    ctx->pc = 0x12D254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12D7D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D7D8_0x12d7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D258u; }
    }
    if (ctx->pc != 0x12D258u) { return; }
    ctx->pc = 0x12D258u;
label_12d258:
    // 0x12d258: 0x8e44000c
    ctx->pc = 0x12d258u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_12d25c:
    // 0x12d25c: 0x40802d
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d260:
    // 0x12d260: 0x8c830000
    ctx->pc = 0x12d260u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12d264:
    // 0x12d264: 0x8c620024
    ctx->pc = 0x12d264u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_12d268:
    // 0x12d268: 0x40f809
label_12d26c:
    if (ctx->pc == 0x12D26Cu) {
        ctx->pc = 0x12D26Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D270u;
        goto label_12d270;
    }
    ctx->pc = 0x12D268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D270u);
        ctx->pc = 0x12D26Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D270u; }
            if (ctx->pc != 0x12D270u) { return; }
        }
    }
    ctx->pc = 0x12D270u;
label_12d270:
    // 0x12d270: 0x21fc2
    ctx->pc = 0x12d270u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_12d274:
    // 0x12d274: 0x621821
    ctx->pc = 0x12d274u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12d278:
    // 0x12d278: 0x31843
    ctx->pc = 0x12d278u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_12d27c:
    // 0x12d27c: 0x70182a
    ctx->pc = 0x12d27cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
label_12d280:
    // 0x12d280: 0x10600009
label_12d284:
    if (ctx->pc == 0x12D284u) {
        ctx->pc = 0x12D288u;
        goto label_12d288;
    }
    ctx->pc = 0x12D280u;
    {
        const bool branch_taken_0x12d280 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x12d280) {
            ctx->pc = 0x12D2A8u;
            goto label_12d2a8;
        }
    }
    ctx->pc = 0x12D288u;
label_12d288:
    // 0x12d288: 0x8e230000
    ctx->pc = 0x12d288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d28c:
    // 0x12d28c: 0x220202d
    ctx->pc = 0x12d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d290:
    // 0x12d290: 0x260302d
    ctx->pc = 0x12d290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12d294:
    // 0x12d294: 0x8c62001c
    ctx->pc = 0x12d294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12d298:
    // 0x12d298: 0x40f809
label_12d29c:
    if (ctx->pc == 0x12D29Cu) {
        ctx->pc = 0x12D29Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12D2A0u;
        goto label_12d2a0;
    }
    ctx->pc = 0x12D298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D2A0u);
        ctx->pc = 0x12D29Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D2A0u; }
            if (ctx->pc != 0x12D2A0u) { return; }
        }
    }
    ctx->pc = 0x12D2A0u;
label_12d2a0:
    // 0x12d2a0: 0x1000001d
label_12d2a4:
    if (ctx->pc == 0x12D2A4u) {
        ctx->pc = 0x12D2A4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x12D2A8u;
        goto label_12d2a8;
    }
    ctx->pc = 0x12D2A0u;
    {
        const bool branch_taken_0x12d2a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D2A4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x12d2a0) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D2A8u;
label_12d2a8:
    // 0x12d2a8: 0xc04939a
label_12d2ac:
    if (ctx->pc == 0x12D2ACu) {
        ctx->pc = 0x12D2ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D2B0u;
        goto label_12d2b0;
    }
    ctx->pc = 0x12D2A8u;
    SET_GPR_U32(ctx, 31, 0x12D2B0u);
    ctx->pc = 0x12D2ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E68_0x124e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2B0u; }
    }
    if (ctx->pc != 0x12D2B0u) { return; }
    ctx->pc = 0x12D2B0u;
label_12d2b0:
    // 0x12d2b0: 0x2403000a
    ctx->pc = 0x12d2b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_12d2b4:
    // 0x12d2b4: 0x14430006
label_12d2b8:
    if (ctx->pc == 0x12D2B8u) {
        ctx->pc = 0x12D2B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12D2BCu;
        goto label_12d2bc;
    }
    ctx->pc = 0x12D2B4u;
    {
        const bool branch_taken_0x12d2b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x12D2B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12d2b4) {
            ctx->pc = 0x12D2D0u;
            goto label_12d2d0;
        }
    }
    ctx->pc = 0x12D2BCu;
label_12d2bc:
    // 0x12d2bc: 0x8e230000
    ctx->pc = 0x12d2bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d2c0:
    // 0x12d2c0: 0x220202d
    ctx->pc = 0x12d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d2c4:
    // 0x12d2c4: 0x8c62001c
    ctx->pc = 0x12d2c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12d2c8:
    // 0x12d2c8: 0x40f809
label_12d2cc:
    if (ctx->pc == 0x12D2CCu) {
        ctx->pc = 0x12D2CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D2D0u;
        goto label_12d2d0;
    }
    ctx->pc = 0x12D2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D2D0u);
        ctx->pc = 0x12D2CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D2D0u; }
            if (ctx->pc != 0x12D2D0u) { return; }
        }
    }
    ctx->pc = 0x12D2D0u;
label_12d2d0:
    // 0x12d2d0: 0xc04939a
label_12d2d4:
    if (ctx->pc == 0x12D2D4u) {
        ctx->pc = 0x12D2D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D2D8u;
        goto label_12d2d8;
    }
    ctx->pc = 0x12D2D0u;
    SET_GPR_U32(ctx, 31, 0x12D2D8u);
    ctx->pc = 0x12D2D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124E68_0x124e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D2D8u; }
    }
    if (ctx->pc != 0x12D2D8u) { return; }
    ctx->pc = 0x12D2D8u;
label_12d2d8:
    // 0x12d2d8: 0x2403000f
    ctx->pc = 0x12d2d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
label_12d2dc:
    // 0x12d2dc: 0x54430008
label_12d2e0:
    if (ctx->pc == 0x12D2E0u) {
        ctx->pc = 0x12D2E0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x12D2E4u;
        goto label_12d2e4;
    }
    ctx->pc = 0x12D2DCu;
    {
        const bool branch_taken_0x12d2dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x12d2dc) {
            ctx->pc = 0x12D2E0u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->pc = 0x12D300u;
            goto label_12d300;
        }
    }
    ctx->pc = 0x12D2E4u;
label_12d2e4:
    // 0x12d2e4: 0x8e230000
    ctx->pc = 0x12d2e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12d2e8:
    // 0x12d2e8: 0x220202d
    ctx->pc = 0x12d2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12d2ec:
    // 0x12d2ec: 0x260302d
    ctx->pc = 0x12d2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12d2f0:
    // 0x12d2f0: 0x8c62001c
    ctx->pc = 0x12d2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12d2f4:
    // 0x12d2f4: 0x40f809
label_12d2f8:
    if (ctx->pc == 0x12D2F8u) {
        ctx->pc = 0x12D2F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12D2FCu;
        goto label_12d2fc;
    }
    ctx->pc = 0x12D2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D2FCu);
        ctx->pc = 0x12D2F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D2FCu; }
            if (ctx->pc != 0x12D2FCu) { return; }
        }
    }
    ctx->pc = 0x12D2FCu;
label_12d2fc:
    // 0x12d2fc: 0x8e460018
    ctx->pc = 0x12d2fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_12d300:
    // 0x12d300: 0x280202d
    ctx->pc = 0x12d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12d304:
    // 0x12d304: 0xc04946a
label_12d308:
    if (ctx->pc == 0x12D308u) {
        ctx->pc = 0x12D308u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x12D30Cu;
        goto label_12d30c;
    }
    ctx->pc = 0x12D304u;
    SET_GPR_U32(ctx, 31, 0x12D30Cu);
    ctx->pc = 0x12D308u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->pc = 0x1251A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001251A8_0x1251a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D30Cu; }
    }
    if (ctx->pc != 0x12D30Cu) { return; }
    ctx->pc = 0x12D30Cu;
label_12d30c:
    // 0x12d30c: 0xc04948c
label_12d310:
    if (ctx->pc == 0x12D310u) {
        ctx->pc = 0x12D310u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D314u;
        goto label_12d314;
    }
    ctx->pc = 0x12D30Cu;
    SET_GPR_U32(ctx, 31, 0x12D314u);
    ctx->pc = 0x12D310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x125230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00125230_0x125230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D314u; }
    }
    if (ctx->pc != 0x12D314u) { return; }
    ctx->pc = 0x12D314u;
label_12d314:
    // 0x12d314: 0xdfb00020
    ctx->pc = 0x12d314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12d318:
    // 0x12d318: 0xdfb10028
    ctx->pc = 0x12d318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12d31c:
    // 0x12d31c: 0xdfb20030
    ctx->pc = 0x12d31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_12d320:
    // 0x12d320: 0xdfb30038
    ctx->pc = 0x12d320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_12d324:
    // 0x12d324: 0xdfb40040
    ctx->pc = 0x12d324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12d328:
    // 0x12d328: 0xdfbf0048
    ctx->pc = 0x12d328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_12d32c:
    // 0x12d32c: 0x3e00008
label_12d330:
    if (ctx->pc == 0x12D330u) {
        ctx->pc = 0x12D330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x12D334u;
        goto label_12d334;
    }
    ctx->pc = 0x12D32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12D334u;
label_12d334:
    // 0x12d334: 0x0
    ctx->pc = 0x12d334u;
    // NOP
}
