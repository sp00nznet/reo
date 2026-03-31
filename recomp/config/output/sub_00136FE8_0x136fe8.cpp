#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00136FE8
// Address: 0x136fe8 - 0x137310
void sub_00136FE8_0x136fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x136fe8u;

label_136fe8:
    // 0x136fe8: 0x27bdffe0
    ctx->pc = 0x136fe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_136fec:
    // 0x136fec: 0xffb00000
    ctx->pc = 0x136fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_136ff0:
    // 0x136ff0: 0x80802d
    ctx->pc = 0x136ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136ff4:
    // 0x136ff4: 0xffb10008
    ctx->pc = 0x136ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_136ff8:
    // 0x136ff8: 0xa0882d
    ctx->pc = 0x136ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_136ffc:
    // 0x136ffc: 0xffb20010
    ctx->pc = 0x136ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_137000:
    // 0x137000: 0x16000004
label_137004:
    if (ctx->pc == 0x137004u) {
        ctx->pc = 0x137004u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x137008u;
        goto label_137008;
    }
    ctx->pc = 0x137000u;
    {
        const bool branch_taken_0x137000 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x137004u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x137000) {
            ctx->pc = 0x137014u;
            goto label_137014;
        }
    }
    ctx->pc = 0x137008u;
label_137008:
    // 0x137008: 0xc04d61e
label_13700c:
    if (ctx->pc == 0x13700Cu) {
        ctx->pc = 0x137010u;
        goto label_137010;
    }
    ctx->pc = 0x137008u;
    SET_GPR_U32(ctx, 31, 0x137010u);
    ctx->pc = 0x135878u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135878_0x135878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137010u; }
    }
    if (ctx->pc != 0x137010u) { return; }
    ctx->pc = 0x137010u;
label_137010:
    // 0x137010: 0x40802d
    ctx->pc = 0x137010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137014:
    // 0x137014: 0xc04dbe6
label_137018:
    if (ctx->pc == 0x137018u) {
        ctx->pc = 0x137018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13701Cu;
        goto label_13701c;
    }
    ctx->pc = 0x137014u;
    SET_GPR_U32(ctx, 31, 0x13701Cu);
    ctx->pc = 0x137018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00136F98_0x136f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13701Cu; }
    }
    if (ctx->pc != 0x13701Cu) { return; }
    ctx->pc = 0x13701Cu;
label_13701c:
    // 0x13701c: 0x3c030026
    ctx->pc = 0x13701cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_137020:
    // 0x137020: 0x24722278
    ctx->pc = 0x137020u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 8824));
label_137024:
    // 0x137024: 0x24030001
    ctx->pc = 0x137024u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_137028:
    // 0x137028: 0x220282d
    ctx->pc = 0x137028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13702c:
    // 0x13702c: 0x1443000e
label_137030:
    if (ctx->pc == 0x137030u) {
        ctx->pc = 0x137030u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x137034u;
        goto label_137034;
    }
    ctx->pc = 0x13702Cu;
    {
        const bool branch_taken_0x13702c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x137030u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13702c) {
            ctx->pc = 0x137068u;
            goto label_137068;
        }
    }
    ctx->pc = 0x137034u;
label_137034:
    // 0x137034: 0xc042bf0
label_137038:
    if (ctx->pc == 0x137038u) {
        ctx->pc = 0x13703Cu;
        goto label_13703c;
    }
    ctx->pc = 0x137034u;
    SET_GPR_U32(ctx, 31, 0x13703Cu);
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13703Cu; }
    }
    if (ctx->pc != 0x13703Cu) { return; }
    ctx->pc = 0x13703Cu;
label_13703c:
    // 0x13703c: 0x3c050024
    ctx->pc = 0x13703cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_137040:
    // 0x137040: 0x200302d
    ctx->pc = 0x137040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137044:
    // 0x137044: 0xdfb00000
    ctx->pc = 0x137044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137048:
    // 0x137048: 0x220202d
    ctx->pc = 0x137048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13704c:
    // 0x13704c: 0xdfb10008
    ctx->pc = 0x13704cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_137050:
    // 0x137050: 0x240382d
    ctx->pc = 0x137050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_137054:
    // 0x137054: 0xdfb20010
    ctx->pc = 0x137054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137058:
    // 0x137058: 0xdfbf0018
    ctx->pc = 0x137058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13705c:
    // 0x13705c: 0x24a5c3d8
    ctx->pc = 0x13705cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294951896));
label_137060:
    // 0x137060: 0x8042a0c
label_137064:
    if (ctx->pc == 0x137064u) {
        ctx->pc = 0x137064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x137068u;
        goto label_137068;
    }
    ctx->pc = 0x137060u;
    ctx->pc = 0x137064u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10A830u;
    sub_0010A830_0x10a830(rdram, ctx, runtime); return;
    ctx->pc = 0x137068u;
label_137068:
    // 0x137068: 0xdfb00000
    ctx->pc = 0x137068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13706c:
    // 0x13706c: 0xdfb10008
    ctx->pc = 0x13706cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_137070:
    // 0x137070: 0xdfb20010
    ctx->pc = 0x137070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137074:
    // 0x137074: 0xdfbf0018
    ctx->pc = 0x137074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_137078:
    // 0x137078: 0x3e00008
label_13707c:
    if (ctx->pc == 0x13707Cu) {
        ctx->pc = 0x13707Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x137080u;
        goto label_137080;
    }
    ctx->pc = 0x137078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13707Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137080u;
label_137080:
    // 0x137080: 0x27bdfff0
    ctx->pc = 0x137080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_137084:
    // 0x137084: 0xffbf0000
    ctx->pc = 0x137084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_137088:
    // 0x137088: 0xc04d558
label_13708c:
    if (ctx->pc == 0x13708Cu) {
        ctx->pc = 0x137090u;
        goto label_137090;
    }
    ctx->pc = 0x137088u;
    SET_GPR_U32(ctx, 31, 0x137090u);
    ctx->pc = 0x135560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135560_0x135560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137090u; }
    }
    if (ctx->pc != 0x137090u) { return; }
    ctx->pc = 0x137090u;
label_137090:
    // 0x137090: 0xdfbf0000
    ctx->pc = 0x137090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137094:
    // 0x137094: 0x2102b
    ctx->pc = 0x137094u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_137098:
    // 0x137098: 0x3e00008
label_13709c:
    if (ctx->pc == 0x13709Cu) {
        ctx->pc = 0x13709Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1370A0u;
        goto label_1370a0;
    }
    ctx->pc = 0x137098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13709Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1370A0u;
label_1370a0:
    // 0x1370a0: 0x27bdffe0
    ctx->pc = 0x1370a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1370a4:
    // 0x1370a4: 0xffb10008
    ctx->pc = 0x1370a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1370a8:
    // 0x1370a8: 0x80882d
    ctx->pc = 0x1370a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1370ac:
    // 0x1370ac: 0xffb00000
    ctx->pc = 0x1370acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1370b0:
    // 0x1370b0: 0x802d
    ctx->pc = 0x1370b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1370b4:
    // 0x1370b4: 0x16200006
label_1370b8:
    if (ctx->pc == 0x1370B8u) {
        ctx->pc = 0x1370B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1370BCu;
        goto label_1370bc;
    }
    ctx->pc = 0x1370B4u;
    {
        const bool branch_taken_0x1370b4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1370B8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1370b4) {
            ctx->pc = 0x1370D0u;
            goto label_1370d0;
        }
    }
    ctx->pc = 0x1370BCu;
label_1370bc:
    // 0x1370bc: 0x3c040024
    ctx->pc = 0x1370bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1370c0:
    // 0x1370c0: 0xc04d480
label_1370c4:
    if (ctx->pc == 0x1370C4u) {
        ctx->pc = 0x1370C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951904));
        ctx->pc = 0x1370C8u;
        goto label_1370c8;
    }
    ctx->pc = 0x1370C0u;
    SET_GPR_U32(ctx, 31, 0x1370C8u);
    ctx->pc = 0x1370C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951904));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1370C8u; }
    }
    if (ctx->pc != 0x1370C8u) { return; }
    ctx->pc = 0x1370C8u;
label_1370c8:
    // 0x1370c8: 0x10000016
label_1370cc:
    if (ctx->pc == 0x1370CCu) {
        ctx->pc = 0x1370CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1370D0u;
        goto label_1370d0;
    }
    ctx->pc = 0x1370C8u;
    {
        const bool branch_taken_0x1370c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1370CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1370c8) {
            ctx->pc = 0x137124u;
            goto label_137124;
        }
    }
    ctx->pc = 0x1370D0u;
label_1370d0:
    // 0x1370d0: 0x8e220000
    ctx->pc = 0x1370d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1370d4:
    // 0x1370d4: 0x8c420060
    ctx->pc = 0x1370d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1370d8:
    // 0x1370d8: 0x10400011
label_1370dc:
    if (ctx->pc == 0x1370DCu) {
        ctx->pc = 0x1370DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1370E0u;
        goto label_1370e0;
    }
    ctx->pc = 0x1370D8u;
    {
        const bool branch_taken_0x1370d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1370DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 200));
        if (branch_taken_0x1370d8) {
            ctx->pc = 0x137120u;
            goto label_137120;
        }
    }
    ctx->pc = 0x1370E0u;
label_1370e0:
    // 0x1370e0: 0x8e240004
    ctx->pc = 0x1370e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1370e4:
    // 0x1370e4: 0x302d
    ctx->pc = 0x1370e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1370e8:
    // 0x1370e8: 0x40f809
label_1370ec:
    if (ctx->pc == 0x1370ECu) {
        ctx->pc = 0x1370ECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1370F0u;
        goto label_1370f0;
    }
    ctx->pc = 0x1370E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1370F0u);
        ctx->pc = 0x1370ECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1370F0u; }
            if (ctx->pc != 0x1370F0u) { return; }
        }
    }
    ctx->pc = 0x1370F0u;
label_1370f0:
    // 0x1370f0: 0x8e230000
    ctx->pc = 0x1370f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1370f4:
    // 0x1370f4: 0x40802d
    ctx->pc = 0x1370f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1370f8:
    // 0x1370f8: 0x8e240004
    ctx->pc = 0x1370f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1370fc:
    // 0x1370fc: 0x8c620060
    ctx->pc = 0x1370fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_137100:
    // 0x137100: 0x240500c9
    ctx->pc = 0x137100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 201));
label_137104:
    // 0x137104: 0x302d
    ctx->pc = 0x137104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137108:
    // 0x137108: 0x40f809
label_13710c:
    if (ctx->pc == 0x13710Cu) {
        ctx->pc = 0x13710Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x137110u;
        goto label_137110;
    }
    ctx->pc = 0x137108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137110u);
        ctx->pc = 0x13710Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x137110u; }
            if (ctx->pc != 0x137110u) { return; }
        }
    }
    ctx->pc = 0x137110u;
label_137110:
    // 0x137110: 0x10803c
    ctx->pc = 0x137110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_137114:
    // 0x137114: 0x2103c
    ctx->pc = 0x137114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_137118:
    // 0x137118: 0x2103e
    ctx->pc = 0x137118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_13711c:
    // 0x13711c: 0x202802d
    ctx->pc = 0x13711cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_137120:
    // 0x137120: 0x200102d
    ctx->pc = 0x137120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137124:
    // 0x137124: 0xdfb00000
    ctx->pc = 0x137124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137128:
    // 0x137128: 0xdfb10008
    ctx->pc = 0x137128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13712c:
    // 0x13712c: 0xdfbf0010
    ctx->pc = 0x13712cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_137130:
    // 0x137130: 0x3e00008
label_137134:
    if (ctx->pc == 0x137134u) {
        ctx->pc = 0x137134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x137138u;
        goto label_137138;
    }
    ctx->pc = 0x137130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137138u;
label_137138:
    // 0x137138: 0x27bdfd70
    ctx->pc = 0x137138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_13713c:
    // 0x13713c: 0xffb10268
    ctx->pc = 0x13713cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_137140:
    // 0x137140: 0x80882d
    ctx->pc = 0x137140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137144:
    // 0x137144: 0xffb30278
    ctx->pc = 0x137144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_137148:
    // 0x137148: 0x27b30130
    ctx->pc = 0x137148u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 304));
label_13714c:
    // 0x13714c: 0x3a0202d
    ctx->pc = 0x13714cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137150:
    // 0x137150: 0x220302d
    ctx->pc = 0x137150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137154:
    // 0x137154: 0x260282d
    ctx->pc = 0x137154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137158:
    // 0x137158: 0xffb00260
    ctx->pc = 0x137158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_13715c:
    // 0x13715c: 0xffb20270
    ctx->pc = 0x13715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_137160:
    // 0x137160: 0xffbf0280
    ctx->pc = 0x137160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_137164:
    // 0x137164: 0xc04d6b4
label_137168:
    if (ctx->pc == 0x137168u) {
        ctx->pc = 0x137168u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13716Cu;
        goto label_13716c;
    }
    ctx->pc = 0x137164u;
    SET_GPR_U32(ctx, 31, 0x13716Cu);
    ctx->pc = 0x137168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135AD0_0x135ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13716Cu; }
    }
    if (ctx->pc != 0x13716Cu) { return; }
    ctx->pc = 0x13716Cu;
label_13716c:
    // 0x13716c: 0x3a0202d
    ctx->pc = 0x13716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137170:
    // 0x137170: 0x260282d
    ctx->pc = 0x137170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137174:
    // 0x137174: 0xc04d622
label_137178:
    if (ctx->pc == 0x137178u) {
        ctx->pc = 0x137178u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13717Cu;
        goto label_13717c;
    }
    ctx->pc = 0x137174u;
    SET_GPR_U32(ctx, 31, 0x13717Cu);
    ctx->pc = 0x137178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135888u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135888_0x135888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13717Cu; }
    }
    if (ctx->pc != 0x13717Cu) { return; }
    ctx->pc = 0x13717Cu;
label_13717c:
    // 0x13717c: 0x220202d
    ctx->pc = 0x13717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137180:
    // 0x137180: 0x40902d
    ctx->pc = 0x137180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137184:
    // 0x137184: 0x240500ca
    ctx->pc = 0x137184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 202));
label_137188:
    // 0x137188: 0x8e420060
    ctx->pc = 0x137188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_13718c:
    // 0x13718c: 0x260302d
    ctx->pc = 0x13718cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137190:
    // 0x137190: 0x1040000e
label_137194:
    if (ctx->pc == 0x137194u) {
        ctx->pc = 0x137194u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x137198u;
        goto label_137198;
    }
    ctx->pc = 0x137190u;
    {
        const bool branch_taken_0x137190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x137194u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x137190) {
            ctx->pc = 0x1371CCu;
            goto label_1371cc;
        }
    }
    ctx->pc = 0x137198u;
label_137198:
    // 0x137198: 0x40f809
label_13719c:
    if (ctx->pc == 0x13719Cu) {
        ctx->pc = 0x1371A0u;
        goto label_1371a0;
    }
    ctx->pc = 0x137198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1371A0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1371A0u; }
            if (ctx->pc != 0x1371A0u) { return; }
        }
    }
    ctx->pc = 0x1371A0u;
label_1371a0:
    // 0x1371a0: 0x220202d
    ctx->pc = 0x1371a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1371a4:
    // 0x1371a4: 0x40802d
    ctx->pc = 0x1371a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1371a8:
    // 0x1371a8: 0x8e420060
    ctx->pc = 0x1371a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1371ac:
    // 0x1371ac: 0x260302d
    ctx->pc = 0x1371acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1371b0:
    // 0x1371b0: 0x240500cb
    ctx->pc = 0x1371b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 203));
label_1371b4:
    // 0x1371b4: 0x382d
    ctx->pc = 0x1371b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1371b8:
    // 0x1371b8: 0x40f809
label_1371bc:
    if (ctx->pc == 0x1371BCu) {
        ctx->pc = 0x1371BCu;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x1371C0u;
        goto label_1371c0;
    }
    ctx->pc = 0x1371B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1371C0u);
        ctx->pc = 0x1371BCu;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1371C0u; }
            if (ctx->pc != 0x1371C0u) { return; }
        }
    }
    ctx->pc = 0x1371C0u;
label_1371c0:
    // 0x1371c0: 0x2103c
    ctx->pc = 0x1371c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1371c4:
    // 0x1371c4: 0x2103e
    ctx->pc = 0x1371c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1371c8:
    // 0x1371c8: 0x202802d
    ctx->pc = 0x1371c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1371cc:
    // 0x1371cc: 0x200102d
    ctx->pc = 0x1371ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1371d0:
    // 0x1371d0: 0xdfb00260
    ctx->pc = 0x1371d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1371d4:
    // 0x1371d4: 0xdfb10268
    ctx->pc = 0x1371d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1371d8:
    // 0x1371d8: 0xdfb20270
    ctx->pc = 0x1371d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1371dc:
    // 0x1371dc: 0xdfb30278
    ctx->pc = 0x1371dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1371e0:
    // 0x1371e0: 0xdfbf0280
    ctx->pc = 0x1371e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1371e4:
    // 0x1371e4: 0x3e00008
label_1371e8:
    if (ctx->pc == 0x1371E8u) {
        ctx->pc = 0x1371E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1371ECu;
        goto label_1371ec;
    }
    ctx->pc = 0x1371E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1371E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1371ECu;
label_1371ec:
    // 0x1371ec: 0x0
    ctx->pc = 0x1371ecu;
    // NOP
label_1371f0:
    // 0x1371f0: 0x27bdfd70
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_1371f4:
    // 0x1371f4: 0xffb20270
    ctx->pc = 0x1371f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1371f8:
    // 0x1371f8: 0x80902d
    ctx->pc = 0x1371f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1371fc:
    // 0x1371fc: 0x3a0202d
    ctx->pc = 0x1371fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137200:
    // 0x137200: 0xffb10268
    ctx->pc = 0x137200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_137204:
    // 0x137204: 0xffb30278
    ctx->pc = 0x137204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_137208:
    // 0x137208: 0xffb40280
    ctx->pc = 0x137208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_13720c:
    // 0x13720c: 0xffb00260
    ctx->pc = 0x13720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_137210:
    // 0x137210: 0xffbf0288
    ctx->pc = 0x137210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_137214:
    // 0x137214: 0xc04d558
label_137218:
    if (ctx->pc == 0x137218u) {
        ctx->pc = 0x137218u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13721Cu;
        goto label_13721c;
    }
    ctx->pc = 0x137214u;
    SET_GPR_U32(ctx, 31, 0x13721Cu);
    ctx->pc = 0x137218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x135560u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135560_0x135560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13721Cu; }
    }
    if (ctx->pc != 0x13721Cu) { return; }
    ctx->pc = 0x13721Cu;
label_13721c:
    // 0x13721c: 0x40882d
    ctx->pc = 0x13721cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137220:
    // 0x137220: 0x102d
    ctx->pc = 0x137220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137224:
    // 0x137224: 0x27b30130
    ctx->pc = 0x137224u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 304));
label_137228:
    // 0x137228: 0x3a0202d
    ctx->pc = 0x137228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13722c:
    // 0x13722c: 0x260282d
    ctx->pc = 0x13722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137230:
    // 0x137230: 0x12200017
label_137234:
    if (ctx->pc == 0x137234u) {
        ctx->pc = 0x137234u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x137238u;
        goto label_137238;
    }
    ctx->pc = 0x137230u;
    {
        const bool branch_taken_0x137230 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x137234u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x137230) {
            ctx->pc = 0x137290u;
            goto label_137290;
        }
    }
    ctx->pc = 0x137238u;
label_137238:
    // 0x137238: 0xc04d6b4
label_13723c:
    if (ctx->pc == 0x13723Cu) {
        ctx->pc = 0x137240u;
        goto label_137240;
    }
    ctx->pc = 0x137238u;
    SET_GPR_U32(ctx, 31, 0x137240u);
    ctx->pc = 0x135AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135AD0_0x135ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137240u; }
    }
    if (ctx->pc != 0x137240u) { return; }
    ctx->pc = 0x137240u;
label_137240:
    // 0x137240: 0x102d
    ctx->pc = 0x137240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137244:
    // 0x137244: 0x8e230060
    ctx->pc = 0x137244u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_137248:
    // 0x137248: 0x240202d
    ctx->pc = 0x137248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13724c:
    // 0x13724c: 0x280382d
    ctx->pc = 0x13724cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_137250:
    // 0x137250: 0x240500cc
    ctx->pc = 0x137250u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 204));
label_137254:
    // 0x137254: 0x1060000e
label_137258:
    if (ctx->pc == 0x137258u) {
        ctx->pc = 0x137258u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13725Cu;
        goto label_13725c;
    }
    ctx->pc = 0x137254u;
    {
        const bool branch_taken_0x137254 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x137258u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x137254) {
            ctx->pc = 0x137290u;
            goto label_137290;
        }
    }
    ctx->pc = 0x13725Cu;
label_13725c:
    // 0x13725c: 0x60f809
label_137260:
    if (ctx->pc == 0x137260u) {
        ctx->pc = 0x137264u;
        goto label_137264;
    }
    ctx->pc = 0x13725Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x137264u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x137264u; }
            if (ctx->pc != 0x137264u) { return; }
        }
    }
    ctx->pc = 0x137264u;
label_137264:
    // 0x137264: 0x240202d
    ctx->pc = 0x137264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_137268:
    // 0x137268: 0x40802d
    ctx->pc = 0x137268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13726c:
    // 0x13726c: 0x8e220060
    ctx->pc = 0x13726cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_137270:
    // 0x137270: 0x260302d
    ctx->pc = 0x137270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_137274:
    // 0x137274: 0x280382d
    ctx->pc = 0x137274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_137278:
    // 0x137278: 0x240500cd
    ctx->pc = 0x137278u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 205));
label_13727c:
    // 0x13727c: 0x40f809
label_137280:
    if (ctx->pc == 0x137280u) {
        ctx->pc = 0x137280u;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x137284u;
        goto label_137284;
    }
    ctx->pc = 0x13727Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137284u);
        ctx->pc = 0x137280u;
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x137284u; }
            if (ctx->pc != 0x137284u) { return; }
        }
    }
    ctx->pc = 0x137284u;
label_137284:
    // 0x137284: 0x2103c
    ctx->pc = 0x137284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_137288:
    // 0x137288: 0x2103e
    ctx->pc = 0x137288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_13728c:
    // 0x13728c: 0x202102d
    ctx->pc = 0x13728cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_137290:
    // 0x137290: 0xdfb00260
    ctx->pc = 0x137290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_137294:
    // 0x137294: 0xdfb10268
    ctx->pc = 0x137294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_137298:
    // 0x137298: 0xdfb20270
    ctx->pc = 0x137298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_13729c:
    // 0x13729c: 0xdfb30278
    ctx->pc = 0x13729cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1372a0:
    // 0x1372a0: 0xdfb40280
    ctx->pc = 0x1372a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1372a4:
    // 0x1372a4: 0xdfbf0288
    ctx->pc = 0x1372a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_1372a8:
    // 0x1372a8: 0x3e00008
label_1372ac:
    if (ctx->pc == 0x1372ACu) {
        ctx->pc = 0x1372ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1372B0u;
        goto label_1372b0;
    }
    ctx->pc = 0x1372A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1372ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1372B0u;
label_1372b0:
    // 0x1372b0: 0x27bdfff0
    ctx->pc = 0x1372b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1372b4:
    // 0x1372b4: 0x182d
    ctx->pc = 0x1372b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1372b8:
    // 0x1372b8: 0x14800007
label_1372bc:
    if (ctx->pc == 0x1372BCu) {
        ctx->pc = 0x1372BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1372C0u;
        goto label_1372c0;
    }
    ctx->pc = 0x1372B8u;
    {
        const bool branch_taken_0x1372b8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1372BCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1372b8) {
            ctx->pc = 0x1372D8u;
            goto label_1372d8;
        }
    }
    ctx->pc = 0x1372C0u;
label_1372c0:
    // 0x1372c0: 0x3c040024
    ctx->pc = 0x1372c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_1372c4:
    // 0x1372c4: 0xc04d480
label_1372c8:
    if (ctx->pc == 0x1372C8u) {
        ctx->pc = 0x1372C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951936));
        ctx->pc = 0x1372CCu;
        goto label_1372cc;
    }
    ctx->pc = 0x1372C4u;
    SET_GPR_U32(ctx, 31, 0x1372CCu);
    ctx->pc = 0x1372C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951936));
    ctx->pc = 0x135200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00135200_0x135200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1372CCu; }
    }
    if (ctx->pc != 0x1372CCu) { return; }
    ctx->pc = 0x1372CCu;
label_1372cc:
    // 0x1372cc: 0x1000000c
label_1372d0:
    if (ctx->pc == 0x1372D0u) {
        ctx->pc = 0x1372D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1372D4u;
        goto label_1372d4;
    }
    ctx->pc = 0x1372CCu;
    {
        const bool branch_taken_0x1372cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1372D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1372cc) {
            ctx->pc = 0x137300u;
            goto label_137300;
        }
    }
    ctx->pc = 0x1372D4u;
label_1372d4:
    // 0x1372d4: 0x0
    ctx->pc = 0x1372d4u;
    // NOP
label_1372d8:
    // 0x1372d8: 0x8c820000
    ctx->pc = 0x1372d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1372dc:
    // 0x1372dc: 0x8c420060
    ctx->pc = 0x1372dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1372e0:
    // 0x1372e0: 0x10400006
label_1372e4:
    if (ctx->pc == 0x1372E4u) {
        ctx->pc = 0x1372E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 299));
        ctx->pc = 0x1372E8u;
        goto label_1372e8;
    }
    ctx->pc = 0x1372E0u;
    {
        const bool branch_taken_0x1372e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1372E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 299));
        if (branch_taken_0x1372e0) {
            ctx->pc = 0x1372FCu;
            goto label_1372fc;
        }
    }
    ctx->pc = 0x1372E8u;
label_1372e8:
    // 0x1372e8: 0x8c840004
    ctx->pc = 0x1372e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1372ec:
    // 0x1372ec: 0x302d
    ctx->pc = 0x1372ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1372f0:
    // 0x1372f0: 0x40f809
label_1372f4:
    if (ctx->pc == 0x1372F4u) {
        ctx->pc = 0x1372F4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1372F8u;
        goto label_1372f8;
    }
    ctx->pc = 0x1372F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1372F8u);
        ctx->pc = 0x1372F4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1372F8u; }
            if (ctx->pc != 0x1372F8u) { return; }
        }
    }
    ctx->pc = 0x1372F8u;
label_1372f8:
    // 0x1372f8: 0x40182d
    ctx->pc = 0x1372f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1372fc:
    // 0x1372fc: 0x60102d
    ctx->pc = 0x1372fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_137300:
    // 0x137300: 0xdfbf0000
    ctx->pc = 0x137300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_137304:
    // 0x137304: 0x3e00008
label_137308:
    if (ctx->pc == 0x137308u) {
        ctx->pc = 0x137308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x13730Cu;
        goto label_13730c;
    }
    ctx->pc = 0x137304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136FE8u: goto label_136fe8;
            case 0x136FECu: goto label_136fec;
            case 0x136FF0u: goto label_136ff0;
            case 0x136FF4u: goto label_136ff4;
            case 0x136FF8u: goto label_136ff8;
            case 0x136FFCu: goto label_136ffc;
            case 0x137000u: goto label_137000;
            case 0x137004u: goto label_137004;
            case 0x137008u: goto label_137008;
            case 0x13700Cu: goto label_13700c;
            case 0x137010u: goto label_137010;
            case 0x137014u: goto label_137014;
            case 0x137018u: goto label_137018;
            case 0x13701Cu: goto label_13701c;
            case 0x137020u: goto label_137020;
            case 0x137024u: goto label_137024;
            case 0x137028u: goto label_137028;
            case 0x13702Cu: goto label_13702c;
            case 0x137030u: goto label_137030;
            case 0x137034u: goto label_137034;
            case 0x137038u: goto label_137038;
            case 0x13703Cu: goto label_13703c;
            case 0x137040u: goto label_137040;
            case 0x137044u: goto label_137044;
            case 0x137048u: goto label_137048;
            case 0x13704Cu: goto label_13704c;
            case 0x137050u: goto label_137050;
            case 0x137054u: goto label_137054;
            case 0x137058u: goto label_137058;
            case 0x13705Cu: goto label_13705c;
            case 0x137060u: goto label_137060;
            case 0x137064u: goto label_137064;
            case 0x137068u: goto label_137068;
            case 0x13706Cu: goto label_13706c;
            case 0x137070u: goto label_137070;
            case 0x137074u: goto label_137074;
            case 0x137078u: goto label_137078;
            case 0x13707Cu: goto label_13707c;
            case 0x137080u: goto label_137080;
            case 0x137084u: goto label_137084;
            case 0x137088u: goto label_137088;
            case 0x13708Cu: goto label_13708c;
            case 0x137090u: goto label_137090;
            case 0x137094u: goto label_137094;
            case 0x137098u: goto label_137098;
            case 0x13709Cu: goto label_13709c;
            case 0x1370A0u: goto label_1370a0;
            case 0x1370A4u: goto label_1370a4;
            case 0x1370A8u: goto label_1370a8;
            case 0x1370ACu: goto label_1370ac;
            case 0x1370B0u: goto label_1370b0;
            case 0x1370B4u: goto label_1370b4;
            case 0x1370B8u: goto label_1370b8;
            case 0x1370BCu: goto label_1370bc;
            case 0x1370C0u: goto label_1370c0;
            case 0x1370C4u: goto label_1370c4;
            case 0x1370C8u: goto label_1370c8;
            case 0x1370CCu: goto label_1370cc;
            case 0x1370D0u: goto label_1370d0;
            case 0x1370D4u: goto label_1370d4;
            case 0x1370D8u: goto label_1370d8;
            case 0x1370DCu: goto label_1370dc;
            case 0x1370E0u: goto label_1370e0;
            case 0x1370E4u: goto label_1370e4;
            case 0x1370E8u: goto label_1370e8;
            case 0x1370ECu: goto label_1370ec;
            case 0x1370F0u: goto label_1370f0;
            case 0x1370F4u: goto label_1370f4;
            case 0x1370F8u: goto label_1370f8;
            case 0x1370FCu: goto label_1370fc;
            case 0x137100u: goto label_137100;
            case 0x137104u: goto label_137104;
            case 0x137108u: goto label_137108;
            case 0x13710Cu: goto label_13710c;
            case 0x137110u: goto label_137110;
            case 0x137114u: goto label_137114;
            case 0x137118u: goto label_137118;
            case 0x13711Cu: goto label_13711c;
            case 0x137120u: goto label_137120;
            case 0x137124u: goto label_137124;
            case 0x137128u: goto label_137128;
            case 0x13712Cu: goto label_13712c;
            case 0x137130u: goto label_137130;
            case 0x137134u: goto label_137134;
            case 0x137138u: goto label_137138;
            case 0x13713Cu: goto label_13713c;
            case 0x137140u: goto label_137140;
            case 0x137144u: goto label_137144;
            case 0x137148u: goto label_137148;
            case 0x13714Cu: goto label_13714c;
            case 0x137150u: goto label_137150;
            case 0x137154u: goto label_137154;
            case 0x137158u: goto label_137158;
            case 0x13715Cu: goto label_13715c;
            case 0x137160u: goto label_137160;
            case 0x137164u: goto label_137164;
            case 0x137168u: goto label_137168;
            case 0x13716Cu: goto label_13716c;
            case 0x137170u: goto label_137170;
            case 0x137174u: goto label_137174;
            case 0x137178u: goto label_137178;
            case 0x13717Cu: goto label_13717c;
            case 0x137180u: goto label_137180;
            case 0x137184u: goto label_137184;
            case 0x137188u: goto label_137188;
            case 0x13718Cu: goto label_13718c;
            case 0x137190u: goto label_137190;
            case 0x137194u: goto label_137194;
            case 0x137198u: goto label_137198;
            case 0x13719Cu: goto label_13719c;
            case 0x1371A0u: goto label_1371a0;
            case 0x1371A4u: goto label_1371a4;
            case 0x1371A8u: goto label_1371a8;
            case 0x1371ACu: goto label_1371ac;
            case 0x1371B0u: goto label_1371b0;
            case 0x1371B4u: goto label_1371b4;
            case 0x1371B8u: goto label_1371b8;
            case 0x1371BCu: goto label_1371bc;
            case 0x1371C0u: goto label_1371c0;
            case 0x1371C4u: goto label_1371c4;
            case 0x1371C8u: goto label_1371c8;
            case 0x1371CCu: goto label_1371cc;
            case 0x1371D0u: goto label_1371d0;
            case 0x1371D4u: goto label_1371d4;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371DCu: goto label_1371dc;
            case 0x1371E0u: goto label_1371e0;
            case 0x1371E4u: goto label_1371e4;
            case 0x1371E8u: goto label_1371e8;
            case 0x1371ECu: goto label_1371ec;
            case 0x1371F0u: goto label_1371f0;
            case 0x1371F4u: goto label_1371f4;
            case 0x1371F8u: goto label_1371f8;
            case 0x1371FCu: goto label_1371fc;
            case 0x137200u: goto label_137200;
            case 0x137204u: goto label_137204;
            case 0x137208u: goto label_137208;
            case 0x13720Cu: goto label_13720c;
            case 0x137210u: goto label_137210;
            case 0x137214u: goto label_137214;
            case 0x137218u: goto label_137218;
            case 0x13721Cu: goto label_13721c;
            case 0x137220u: goto label_137220;
            case 0x137224u: goto label_137224;
            case 0x137228u: goto label_137228;
            case 0x13722Cu: goto label_13722c;
            case 0x137230u: goto label_137230;
            case 0x137234u: goto label_137234;
            case 0x137238u: goto label_137238;
            case 0x13723Cu: goto label_13723c;
            case 0x137240u: goto label_137240;
            case 0x137244u: goto label_137244;
            case 0x137248u: goto label_137248;
            case 0x13724Cu: goto label_13724c;
            case 0x137250u: goto label_137250;
            case 0x137254u: goto label_137254;
            case 0x137258u: goto label_137258;
            case 0x13725Cu: goto label_13725c;
            case 0x137260u: goto label_137260;
            case 0x137264u: goto label_137264;
            case 0x137268u: goto label_137268;
            case 0x13726Cu: goto label_13726c;
            case 0x137270u: goto label_137270;
            case 0x137274u: goto label_137274;
            case 0x137278u: goto label_137278;
            case 0x13727Cu: goto label_13727c;
            case 0x137280u: goto label_137280;
            case 0x137284u: goto label_137284;
            case 0x137288u: goto label_137288;
            case 0x13728Cu: goto label_13728c;
            case 0x137290u: goto label_137290;
            case 0x137294u: goto label_137294;
            case 0x137298u: goto label_137298;
            case 0x13729Cu: goto label_13729c;
            case 0x1372A0u: goto label_1372a0;
            case 0x1372A4u: goto label_1372a4;
            case 0x1372A8u: goto label_1372a8;
            case 0x1372ACu: goto label_1372ac;
            case 0x1372B0u: goto label_1372b0;
            case 0x1372B4u: goto label_1372b4;
            case 0x1372B8u: goto label_1372b8;
            case 0x1372BCu: goto label_1372bc;
            case 0x1372C0u: goto label_1372c0;
            case 0x1372C4u: goto label_1372c4;
            case 0x1372C8u: goto label_1372c8;
            case 0x1372CCu: goto label_1372cc;
            case 0x1372D0u: goto label_1372d0;
            case 0x1372D4u: goto label_1372d4;
            case 0x1372D8u: goto label_1372d8;
            case 0x1372DCu: goto label_1372dc;
            case 0x1372E0u: goto label_1372e0;
            case 0x1372E4u: goto label_1372e4;
            case 0x1372E8u: goto label_1372e8;
            case 0x1372ECu: goto label_1372ec;
            case 0x1372F0u: goto label_1372f0;
            case 0x1372F4u: goto label_1372f4;
            case 0x1372F8u: goto label_1372f8;
            case 0x1372FCu: goto label_1372fc;
            case 0x137300u: goto label_137300;
            case 0x137304u: goto label_137304;
            case 0x137308u: goto label_137308;
            case 0x13730Cu: goto label_13730c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13730Cu;
label_13730c:
    // 0x13730c: 0x0
    ctx->pc = 0x13730cu;
    // NOP
}
