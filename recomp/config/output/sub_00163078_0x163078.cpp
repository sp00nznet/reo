#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163078
// Address: 0x163078 - 0x1632c0
void sub_00163078_0x163078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163078u;

label_163078:
    // 0x163078: 0x27bdffe0
    ctx->pc = 0x163078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16307c:
    // 0x16307c: 0xffb00000
    ctx->pc = 0x16307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163080:
    // 0x163080: 0x80802d
    ctx->pc = 0x163080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163084:
    // 0x163084: 0xffb10008
    ctx->pc = 0x163084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_163088:
    // 0x163088: 0xffbf0010
    ctx->pc = 0x163088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16308c:
    // 0x16308c: 0xc058d10
label_163090:
    if (ctx->pc == 0x163090u) {
        ctx->pc = 0x163090u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163094u;
        goto label_163094;
    }
    ctx->pc = 0x16308Cu;
    SET_GPR_U32(ctx, 31, 0x163094u);
    ctx->pc = 0x163090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163094u; }
    }
    if (ctx->pc != 0x163094u) { return; }
    ctx->pc = 0x163094u;
label_163094:
    // 0x163094: 0x24030001
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_163098:
    // 0x163098: 0x5443000b
label_16309c:
    if (ctx->pc == 0x16309Cu) {
        ctx->pc = 0x16309Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1630A0u;
        goto label_1630a0;
    }
    ctx->pc = 0x163098u;
    {
        const bool branch_taken_0x163098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x163098) {
            ctx->pc = 0x16309Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1630C8u;
            goto label_1630c8;
        }
    }
    ctx->pc = 0x1630A0u;
label_1630a0:
    // 0x1630a0: 0xc058d08
label_1630a4:
    if (ctx->pc == 0x1630A4u) {
        ctx->pc = 0x1630A8u;
        goto label_1630a8;
    }
    ctx->pc = 0x1630A0u;
    SET_GPR_U32(ctx, 31, 0x1630A8u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630A8u; }
    }
    if (ctx->pc != 0x1630A8u) { return; }
    ctx->pc = 0x1630A8u;
label_1630a8:
    // 0x1630a8: 0x10400006
label_1630ac:
    if (ctx->pc == 0x1630ACu) {
        ctx->pc = 0x1630ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1630B0u;
        goto label_1630b0;
    }
    ctx->pc = 0x1630A8u;
    {
        const bool branch_taken_0x1630a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1630ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x1630a8) {
            ctx->pc = 0x1630C4u;
            goto label_1630c4;
        }
    }
    ctx->pc = 0x1630B0u;
label_1630b0:
    // 0x1630b0: 0x8c420024
    ctx->pc = 0x1630b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1630b4:
    // 0x1630b4: 0x50400004
label_1630b8:
    if (ctx->pc == 0x1630B8u) {
        ctx->pc = 0x1630B8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1630BCu;
        goto label_1630bc;
    }
    ctx->pc = 0x1630B4u;
    {
        const bool branch_taken_0x1630b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1630b4) {
            ctx->pc = 0x1630B8u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x1630C8u;
            goto label_1630c8;
        }
    }
    ctx->pc = 0x1630BCu;
label_1630bc:
    // 0x1630bc: 0x40f809
label_1630c0:
    if (ctx->pc == 0x1630C0u) {
        ctx->pc = 0x1630C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1630C4u;
        goto label_1630c4;
    }
    ctx->pc = 0x1630BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1630C4u);
        ctx->pc = 0x1630C0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163078u: goto label_163078;
            case 0x16307Cu: goto label_16307c;
            case 0x163080u: goto label_163080;
            case 0x163084u: goto label_163084;
            case 0x163088u: goto label_163088;
            case 0x16308Cu: goto label_16308c;
            case 0x163090u: goto label_163090;
            case 0x163094u: goto label_163094;
            case 0x163098u: goto label_163098;
            case 0x16309Cu: goto label_16309c;
            case 0x1630A0u: goto label_1630a0;
            case 0x1630A4u: goto label_1630a4;
            case 0x1630A8u: goto label_1630a8;
            case 0x1630ACu: goto label_1630ac;
            case 0x1630B0u: goto label_1630b0;
            case 0x1630B4u: goto label_1630b4;
            case 0x1630B8u: goto label_1630b8;
            case 0x1630BCu: goto label_1630bc;
            case 0x1630C0u: goto label_1630c0;
            case 0x1630C4u: goto label_1630c4;
            case 0x1630C8u: goto label_1630c8;
            case 0x1630CCu: goto label_1630cc;
            case 0x1630D0u: goto label_1630d0;
            case 0x1630D4u: goto label_1630d4;
            case 0x1630D8u: goto label_1630d8;
            case 0x1630DCu: goto label_1630dc;
            case 0x1630E0u: goto label_1630e0;
            case 0x1630E4u: goto label_1630e4;
            case 0x1630E8u: goto label_1630e8;
            case 0x1630ECu: goto label_1630ec;
            case 0x1630F0u: goto label_1630f0;
            case 0x1630F4u: goto label_1630f4;
            case 0x1630F8u: goto label_1630f8;
            case 0x1630FCu: goto label_1630fc;
            case 0x163100u: goto label_163100;
            case 0x163104u: goto label_163104;
            case 0x163108u: goto label_163108;
            case 0x16310Cu: goto label_16310c;
            case 0x163110u: goto label_163110;
            case 0x163114u: goto label_163114;
            case 0x163118u: goto label_163118;
            case 0x16311Cu: goto label_16311c;
            case 0x163120u: goto label_163120;
            case 0x163124u: goto label_163124;
            case 0x163128u: goto label_163128;
            case 0x16312Cu: goto label_16312c;
            case 0x163130u: goto label_163130;
            case 0x163134u: goto label_163134;
            case 0x163138u: goto label_163138;
            case 0x16313Cu: goto label_16313c;
            case 0x163140u: goto label_163140;
            case 0x163144u: goto label_163144;
            case 0x163148u: goto label_163148;
            case 0x16314Cu: goto label_16314c;
            case 0x163150u: goto label_163150;
            case 0x163154u: goto label_163154;
            case 0x163158u: goto label_163158;
            case 0x16315Cu: goto label_16315c;
            case 0x163160u: goto label_163160;
            case 0x163164u: goto label_163164;
            case 0x163168u: goto label_163168;
            case 0x16316Cu: goto label_16316c;
            case 0x163170u: goto label_163170;
            case 0x163174u: goto label_163174;
            case 0x163178u: goto label_163178;
            case 0x16317Cu: goto label_16317c;
            case 0x163180u: goto label_163180;
            case 0x163184u: goto label_163184;
            case 0x163188u: goto label_163188;
            case 0x16318Cu: goto label_16318c;
            case 0x163190u: goto label_163190;
            case 0x163194u: goto label_163194;
            case 0x163198u: goto label_163198;
            case 0x16319Cu: goto label_16319c;
            case 0x1631A0u: goto label_1631a0;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631A8u: goto label_1631a8;
            case 0x1631ACu: goto label_1631ac;
            case 0x1631B0u: goto label_1631b0;
            case 0x1631B4u: goto label_1631b4;
            case 0x1631B8u: goto label_1631b8;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631C0u: goto label_1631c0;
            case 0x1631C4u: goto label_1631c4;
            case 0x1631C8u: goto label_1631c8;
            case 0x1631CCu: goto label_1631cc;
            case 0x1631D0u: goto label_1631d0;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631D8u: goto label_1631d8;
            case 0x1631DCu: goto label_1631dc;
            case 0x1631E0u: goto label_1631e0;
            case 0x1631E4u: goto label_1631e4;
            case 0x1631E8u: goto label_1631e8;
            case 0x1631ECu: goto label_1631ec;
            case 0x1631F0u: goto label_1631f0;
            case 0x1631F4u: goto label_1631f4;
            case 0x1631F8u: goto label_1631f8;
            case 0x1631FCu: goto label_1631fc;
            case 0x163200u: goto label_163200;
            case 0x163204u: goto label_163204;
            case 0x163208u: goto label_163208;
            case 0x16320Cu: goto label_16320c;
            case 0x163210u: goto label_163210;
            case 0x163214u: goto label_163214;
            case 0x163218u: goto label_163218;
            case 0x16321Cu: goto label_16321c;
            case 0x163220u: goto label_163220;
            case 0x163224u: goto label_163224;
            case 0x163228u: goto label_163228;
            case 0x16322Cu: goto label_16322c;
            case 0x163230u: goto label_163230;
            case 0x163234u: goto label_163234;
            case 0x163238u: goto label_163238;
            case 0x16323Cu: goto label_16323c;
            case 0x163240u: goto label_163240;
            case 0x163244u: goto label_163244;
            case 0x163248u: goto label_163248;
            case 0x16324Cu: goto label_16324c;
            case 0x163250u: goto label_163250;
            case 0x163254u: goto label_163254;
            case 0x163258u: goto label_163258;
            case 0x16325Cu: goto label_16325c;
            case 0x163260u: goto label_163260;
            case 0x163264u: goto label_163264;
            case 0x163268u: goto label_163268;
            case 0x16326Cu: goto label_16326c;
            case 0x163270u: goto label_163270;
            case 0x163274u: goto label_163274;
            case 0x163278u: goto label_163278;
            case 0x16327Cu: goto label_16327c;
            case 0x163280u: goto label_163280;
            case 0x163284u: goto label_163284;
            case 0x163288u: goto label_163288;
            case 0x16328Cu: goto label_16328c;
            case 0x163290u: goto label_163290;
            case 0x163294u: goto label_163294;
            case 0x163298u: goto label_163298;
            case 0x16329Cu: goto label_16329c;
            case 0x1632A0u: goto label_1632a0;
            case 0x1632A4u: goto label_1632a4;
            case 0x1632A8u: goto label_1632a8;
            case 0x1632ACu: goto label_1632ac;
            case 0x1632B0u: goto label_1632b0;
            case 0x1632B4u: goto label_1632b4;
            case 0x1632B8u: goto label_1632b8;
            case 0x1632BCu: goto label_1632bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1630C4u; }
            if (ctx->pc != 0x1630C4u) { return; }
        }
    }
    ctx->pc = 0x1630C4u;
label_1630c4:
    // 0x1630c4: 0xdfb00000
    ctx->pc = 0x1630c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1630c8:
    // 0x1630c8: 0xdfb10008
    ctx->pc = 0x1630c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1630cc:
    // 0x1630cc: 0xdfbf0010
    ctx->pc = 0x1630ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1630d0:
    // 0x1630d0: 0x3e00008
label_1630d4:
    if (ctx->pc == 0x1630D4u) {
        ctx->pc = 0x1630D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1630D8u;
        goto label_1630d8;
    }
    ctx->pc = 0x1630D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1630D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163078u: goto label_163078;
            case 0x16307Cu: goto label_16307c;
            case 0x163080u: goto label_163080;
            case 0x163084u: goto label_163084;
            case 0x163088u: goto label_163088;
            case 0x16308Cu: goto label_16308c;
            case 0x163090u: goto label_163090;
            case 0x163094u: goto label_163094;
            case 0x163098u: goto label_163098;
            case 0x16309Cu: goto label_16309c;
            case 0x1630A0u: goto label_1630a0;
            case 0x1630A4u: goto label_1630a4;
            case 0x1630A8u: goto label_1630a8;
            case 0x1630ACu: goto label_1630ac;
            case 0x1630B0u: goto label_1630b0;
            case 0x1630B4u: goto label_1630b4;
            case 0x1630B8u: goto label_1630b8;
            case 0x1630BCu: goto label_1630bc;
            case 0x1630C0u: goto label_1630c0;
            case 0x1630C4u: goto label_1630c4;
            case 0x1630C8u: goto label_1630c8;
            case 0x1630CCu: goto label_1630cc;
            case 0x1630D0u: goto label_1630d0;
            case 0x1630D4u: goto label_1630d4;
            case 0x1630D8u: goto label_1630d8;
            case 0x1630DCu: goto label_1630dc;
            case 0x1630E0u: goto label_1630e0;
            case 0x1630E4u: goto label_1630e4;
            case 0x1630E8u: goto label_1630e8;
            case 0x1630ECu: goto label_1630ec;
            case 0x1630F0u: goto label_1630f0;
            case 0x1630F4u: goto label_1630f4;
            case 0x1630F8u: goto label_1630f8;
            case 0x1630FCu: goto label_1630fc;
            case 0x163100u: goto label_163100;
            case 0x163104u: goto label_163104;
            case 0x163108u: goto label_163108;
            case 0x16310Cu: goto label_16310c;
            case 0x163110u: goto label_163110;
            case 0x163114u: goto label_163114;
            case 0x163118u: goto label_163118;
            case 0x16311Cu: goto label_16311c;
            case 0x163120u: goto label_163120;
            case 0x163124u: goto label_163124;
            case 0x163128u: goto label_163128;
            case 0x16312Cu: goto label_16312c;
            case 0x163130u: goto label_163130;
            case 0x163134u: goto label_163134;
            case 0x163138u: goto label_163138;
            case 0x16313Cu: goto label_16313c;
            case 0x163140u: goto label_163140;
            case 0x163144u: goto label_163144;
            case 0x163148u: goto label_163148;
            case 0x16314Cu: goto label_16314c;
            case 0x163150u: goto label_163150;
            case 0x163154u: goto label_163154;
            case 0x163158u: goto label_163158;
            case 0x16315Cu: goto label_16315c;
            case 0x163160u: goto label_163160;
            case 0x163164u: goto label_163164;
            case 0x163168u: goto label_163168;
            case 0x16316Cu: goto label_16316c;
            case 0x163170u: goto label_163170;
            case 0x163174u: goto label_163174;
            case 0x163178u: goto label_163178;
            case 0x16317Cu: goto label_16317c;
            case 0x163180u: goto label_163180;
            case 0x163184u: goto label_163184;
            case 0x163188u: goto label_163188;
            case 0x16318Cu: goto label_16318c;
            case 0x163190u: goto label_163190;
            case 0x163194u: goto label_163194;
            case 0x163198u: goto label_163198;
            case 0x16319Cu: goto label_16319c;
            case 0x1631A0u: goto label_1631a0;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631A8u: goto label_1631a8;
            case 0x1631ACu: goto label_1631ac;
            case 0x1631B0u: goto label_1631b0;
            case 0x1631B4u: goto label_1631b4;
            case 0x1631B8u: goto label_1631b8;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631C0u: goto label_1631c0;
            case 0x1631C4u: goto label_1631c4;
            case 0x1631C8u: goto label_1631c8;
            case 0x1631CCu: goto label_1631cc;
            case 0x1631D0u: goto label_1631d0;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631D8u: goto label_1631d8;
            case 0x1631DCu: goto label_1631dc;
            case 0x1631E0u: goto label_1631e0;
            case 0x1631E4u: goto label_1631e4;
            case 0x1631E8u: goto label_1631e8;
            case 0x1631ECu: goto label_1631ec;
            case 0x1631F0u: goto label_1631f0;
            case 0x1631F4u: goto label_1631f4;
            case 0x1631F8u: goto label_1631f8;
            case 0x1631FCu: goto label_1631fc;
            case 0x163200u: goto label_163200;
            case 0x163204u: goto label_163204;
            case 0x163208u: goto label_163208;
            case 0x16320Cu: goto label_16320c;
            case 0x163210u: goto label_163210;
            case 0x163214u: goto label_163214;
            case 0x163218u: goto label_163218;
            case 0x16321Cu: goto label_16321c;
            case 0x163220u: goto label_163220;
            case 0x163224u: goto label_163224;
            case 0x163228u: goto label_163228;
            case 0x16322Cu: goto label_16322c;
            case 0x163230u: goto label_163230;
            case 0x163234u: goto label_163234;
            case 0x163238u: goto label_163238;
            case 0x16323Cu: goto label_16323c;
            case 0x163240u: goto label_163240;
            case 0x163244u: goto label_163244;
            case 0x163248u: goto label_163248;
            case 0x16324Cu: goto label_16324c;
            case 0x163250u: goto label_163250;
            case 0x163254u: goto label_163254;
            case 0x163258u: goto label_163258;
            case 0x16325Cu: goto label_16325c;
            case 0x163260u: goto label_163260;
            case 0x163264u: goto label_163264;
            case 0x163268u: goto label_163268;
            case 0x16326Cu: goto label_16326c;
            case 0x163270u: goto label_163270;
            case 0x163274u: goto label_163274;
            case 0x163278u: goto label_163278;
            case 0x16327Cu: goto label_16327c;
            case 0x163280u: goto label_163280;
            case 0x163284u: goto label_163284;
            case 0x163288u: goto label_163288;
            case 0x16328Cu: goto label_16328c;
            case 0x163290u: goto label_163290;
            case 0x163294u: goto label_163294;
            case 0x163298u: goto label_163298;
            case 0x16329Cu: goto label_16329c;
            case 0x1632A0u: goto label_1632a0;
            case 0x1632A4u: goto label_1632a4;
            case 0x1632A8u: goto label_1632a8;
            case 0x1632ACu: goto label_1632ac;
            case 0x1632B0u: goto label_1632b0;
            case 0x1632B4u: goto label_1632b4;
            case 0x1632B8u: goto label_1632b8;
            case 0x1632BCu: goto label_1632bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1630D8u;
label_1630d8:
    // 0x1630d8: 0x27bdffe0
    ctx->pc = 0x1630d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1630dc:
    // 0x1630dc: 0xffb00000
    ctx->pc = 0x1630dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1630e0:
    // 0x1630e0: 0x80802d
    ctx->pc = 0x1630e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1630e4:
    // 0x1630e4: 0xffb10008
    ctx->pc = 0x1630e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1630e8:
    // 0x1630e8: 0xffbf0010
    ctx->pc = 0x1630e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1630ec:
    // 0x1630ec: 0xc058d10
label_1630f0:
    if (ctx->pc == 0x1630F0u) {
        ctx->pc = 0x1630F0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1630F4u;
        goto label_1630f4;
    }
    ctx->pc = 0x1630ECu;
    SET_GPR_U32(ctx, 31, 0x1630F4u);
    ctx->pc = 0x1630F0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1630F4u; }
    }
    if (ctx->pc != 0x1630F4u) { return; }
    ctx->pc = 0x1630F4u;
label_1630f4:
    // 0x1630f4: 0x24030001
    ctx->pc = 0x1630f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1630f8:
    // 0x1630f8: 0x5443000b
label_1630fc:
    if (ctx->pc == 0x1630FCu) {
        ctx->pc = 0x1630FCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163100u;
        goto label_163100;
    }
    ctx->pc = 0x1630F8u;
    {
        const bool branch_taken_0x1630f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1630f8) {
            ctx->pc = 0x1630FCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163128u;
            goto label_163128;
        }
    }
    ctx->pc = 0x163100u;
label_163100:
    // 0x163100: 0xc058d08
label_163104:
    if (ctx->pc == 0x163104u) {
        ctx->pc = 0x163108u;
        goto label_163108;
    }
    ctx->pc = 0x163100u;
    SET_GPR_U32(ctx, 31, 0x163108u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163108u; }
    }
    if (ctx->pc != 0x163108u) { return; }
    ctx->pc = 0x163108u;
label_163108:
    // 0x163108: 0x10400006
label_16310c:
    if (ctx->pc == 0x16310Cu) {
        ctx->pc = 0x16310Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x163110u;
        goto label_163110;
    }
    ctx->pc = 0x163108u;
    {
        const bool branch_taken_0x163108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16310Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x163108) {
            ctx->pc = 0x163124u;
            goto label_163124;
        }
    }
    ctx->pc = 0x163110u;
label_163110:
    // 0x163110: 0x8c420028
    ctx->pc = 0x163110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_163114:
    // 0x163114: 0x50400004
label_163118:
    if (ctx->pc == 0x163118u) {
        ctx->pc = 0x163118u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16311Cu;
        goto label_16311c;
    }
    ctx->pc = 0x163114u;
    {
        const bool branch_taken_0x163114 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x163114) {
            ctx->pc = 0x163118u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x163128u;
            goto label_163128;
        }
    }
    ctx->pc = 0x16311Cu;
label_16311c:
    // 0x16311c: 0x40f809
label_163120:
    if (ctx->pc == 0x163120u) {
        ctx->pc = 0x163120u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163124u;
        goto label_163124;
    }
    ctx->pc = 0x16311Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163124u);
        ctx->pc = 0x163120u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163078u: goto label_163078;
            case 0x16307Cu: goto label_16307c;
            case 0x163080u: goto label_163080;
            case 0x163084u: goto label_163084;
            case 0x163088u: goto label_163088;
            case 0x16308Cu: goto label_16308c;
            case 0x163090u: goto label_163090;
            case 0x163094u: goto label_163094;
            case 0x163098u: goto label_163098;
            case 0x16309Cu: goto label_16309c;
            case 0x1630A0u: goto label_1630a0;
            case 0x1630A4u: goto label_1630a4;
            case 0x1630A8u: goto label_1630a8;
            case 0x1630ACu: goto label_1630ac;
            case 0x1630B0u: goto label_1630b0;
            case 0x1630B4u: goto label_1630b4;
            case 0x1630B8u: goto label_1630b8;
            case 0x1630BCu: goto label_1630bc;
            case 0x1630C0u: goto label_1630c0;
            case 0x1630C4u: goto label_1630c4;
            case 0x1630C8u: goto label_1630c8;
            case 0x1630CCu: goto label_1630cc;
            case 0x1630D0u: goto label_1630d0;
            case 0x1630D4u: goto label_1630d4;
            case 0x1630D8u: goto label_1630d8;
            case 0x1630DCu: goto label_1630dc;
            case 0x1630E0u: goto label_1630e0;
            case 0x1630E4u: goto label_1630e4;
            case 0x1630E8u: goto label_1630e8;
            case 0x1630ECu: goto label_1630ec;
            case 0x1630F0u: goto label_1630f0;
            case 0x1630F4u: goto label_1630f4;
            case 0x1630F8u: goto label_1630f8;
            case 0x1630FCu: goto label_1630fc;
            case 0x163100u: goto label_163100;
            case 0x163104u: goto label_163104;
            case 0x163108u: goto label_163108;
            case 0x16310Cu: goto label_16310c;
            case 0x163110u: goto label_163110;
            case 0x163114u: goto label_163114;
            case 0x163118u: goto label_163118;
            case 0x16311Cu: goto label_16311c;
            case 0x163120u: goto label_163120;
            case 0x163124u: goto label_163124;
            case 0x163128u: goto label_163128;
            case 0x16312Cu: goto label_16312c;
            case 0x163130u: goto label_163130;
            case 0x163134u: goto label_163134;
            case 0x163138u: goto label_163138;
            case 0x16313Cu: goto label_16313c;
            case 0x163140u: goto label_163140;
            case 0x163144u: goto label_163144;
            case 0x163148u: goto label_163148;
            case 0x16314Cu: goto label_16314c;
            case 0x163150u: goto label_163150;
            case 0x163154u: goto label_163154;
            case 0x163158u: goto label_163158;
            case 0x16315Cu: goto label_16315c;
            case 0x163160u: goto label_163160;
            case 0x163164u: goto label_163164;
            case 0x163168u: goto label_163168;
            case 0x16316Cu: goto label_16316c;
            case 0x163170u: goto label_163170;
            case 0x163174u: goto label_163174;
            case 0x163178u: goto label_163178;
            case 0x16317Cu: goto label_16317c;
            case 0x163180u: goto label_163180;
            case 0x163184u: goto label_163184;
            case 0x163188u: goto label_163188;
            case 0x16318Cu: goto label_16318c;
            case 0x163190u: goto label_163190;
            case 0x163194u: goto label_163194;
            case 0x163198u: goto label_163198;
            case 0x16319Cu: goto label_16319c;
            case 0x1631A0u: goto label_1631a0;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631A8u: goto label_1631a8;
            case 0x1631ACu: goto label_1631ac;
            case 0x1631B0u: goto label_1631b0;
            case 0x1631B4u: goto label_1631b4;
            case 0x1631B8u: goto label_1631b8;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631C0u: goto label_1631c0;
            case 0x1631C4u: goto label_1631c4;
            case 0x1631C8u: goto label_1631c8;
            case 0x1631CCu: goto label_1631cc;
            case 0x1631D0u: goto label_1631d0;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631D8u: goto label_1631d8;
            case 0x1631DCu: goto label_1631dc;
            case 0x1631E0u: goto label_1631e0;
            case 0x1631E4u: goto label_1631e4;
            case 0x1631E8u: goto label_1631e8;
            case 0x1631ECu: goto label_1631ec;
            case 0x1631F0u: goto label_1631f0;
            case 0x1631F4u: goto label_1631f4;
            case 0x1631F8u: goto label_1631f8;
            case 0x1631FCu: goto label_1631fc;
            case 0x163200u: goto label_163200;
            case 0x163204u: goto label_163204;
            case 0x163208u: goto label_163208;
            case 0x16320Cu: goto label_16320c;
            case 0x163210u: goto label_163210;
            case 0x163214u: goto label_163214;
            case 0x163218u: goto label_163218;
            case 0x16321Cu: goto label_16321c;
            case 0x163220u: goto label_163220;
            case 0x163224u: goto label_163224;
            case 0x163228u: goto label_163228;
            case 0x16322Cu: goto label_16322c;
            case 0x163230u: goto label_163230;
            case 0x163234u: goto label_163234;
            case 0x163238u: goto label_163238;
            case 0x16323Cu: goto label_16323c;
            case 0x163240u: goto label_163240;
            case 0x163244u: goto label_163244;
            case 0x163248u: goto label_163248;
            case 0x16324Cu: goto label_16324c;
            case 0x163250u: goto label_163250;
            case 0x163254u: goto label_163254;
            case 0x163258u: goto label_163258;
            case 0x16325Cu: goto label_16325c;
            case 0x163260u: goto label_163260;
            case 0x163264u: goto label_163264;
            case 0x163268u: goto label_163268;
            case 0x16326Cu: goto label_16326c;
            case 0x163270u: goto label_163270;
            case 0x163274u: goto label_163274;
            case 0x163278u: goto label_163278;
            case 0x16327Cu: goto label_16327c;
            case 0x163280u: goto label_163280;
            case 0x163284u: goto label_163284;
            case 0x163288u: goto label_163288;
            case 0x16328Cu: goto label_16328c;
            case 0x163290u: goto label_163290;
            case 0x163294u: goto label_163294;
            case 0x163298u: goto label_163298;
            case 0x16329Cu: goto label_16329c;
            case 0x1632A0u: goto label_1632a0;
            case 0x1632A4u: goto label_1632a4;
            case 0x1632A8u: goto label_1632a8;
            case 0x1632ACu: goto label_1632ac;
            case 0x1632B0u: goto label_1632b0;
            case 0x1632B4u: goto label_1632b4;
            case 0x1632B8u: goto label_1632b8;
            case 0x1632BCu: goto label_1632bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163124u; }
            if (ctx->pc != 0x163124u) { return; }
        }
    }
    ctx->pc = 0x163124u;
label_163124:
    // 0x163124: 0xdfb00000
    ctx->pc = 0x163124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163128:
    // 0x163128: 0xdfb10008
    ctx->pc = 0x163128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16312c:
    // 0x16312c: 0xdfbf0010
    ctx->pc = 0x16312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163130:
    // 0x163130: 0x3e00008
label_163134:
    if (ctx->pc == 0x163134u) {
        ctx->pc = 0x163134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x163138u;
        goto label_163138;
    }
    ctx->pc = 0x163130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163078u: goto label_163078;
            case 0x16307Cu: goto label_16307c;
            case 0x163080u: goto label_163080;
            case 0x163084u: goto label_163084;
            case 0x163088u: goto label_163088;
            case 0x16308Cu: goto label_16308c;
            case 0x163090u: goto label_163090;
            case 0x163094u: goto label_163094;
            case 0x163098u: goto label_163098;
            case 0x16309Cu: goto label_16309c;
            case 0x1630A0u: goto label_1630a0;
            case 0x1630A4u: goto label_1630a4;
            case 0x1630A8u: goto label_1630a8;
            case 0x1630ACu: goto label_1630ac;
            case 0x1630B0u: goto label_1630b0;
            case 0x1630B4u: goto label_1630b4;
            case 0x1630B8u: goto label_1630b8;
            case 0x1630BCu: goto label_1630bc;
            case 0x1630C0u: goto label_1630c0;
            case 0x1630C4u: goto label_1630c4;
            case 0x1630C8u: goto label_1630c8;
            case 0x1630CCu: goto label_1630cc;
            case 0x1630D0u: goto label_1630d0;
            case 0x1630D4u: goto label_1630d4;
            case 0x1630D8u: goto label_1630d8;
            case 0x1630DCu: goto label_1630dc;
            case 0x1630E0u: goto label_1630e0;
            case 0x1630E4u: goto label_1630e4;
            case 0x1630E8u: goto label_1630e8;
            case 0x1630ECu: goto label_1630ec;
            case 0x1630F0u: goto label_1630f0;
            case 0x1630F4u: goto label_1630f4;
            case 0x1630F8u: goto label_1630f8;
            case 0x1630FCu: goto label_1630fc;
            case 0x163100u: goto label_163100;
            case 0x163104u: goto label_163104;
            case 0x163108u: goto label_163108;
            case 0x16310Cu: goto label_16310c;
            case 0x163110u: goto label_163110;
            case 0x163114u: goto label_163114;
            case 0x163118u: goto label_163118;
            case 0x16311Cu: goto label_16311c;
            case 0x163120u: goto label_163120;
            case 0x163124u: goto label_163124;
            case 0x163128u: goto label_163128;
            case 0x16312Cu: goto label_16312c;
            case 0x163130u: goto label_163130;
            case 0x163134u: goto label_163134;
            case 0x163138u: goto label_163138;
            case 0x16313Cu: goto label_16313c;
            case 0x163140u: goto label_163140;
            case 0x163144u: goto label_163144;
            case 0x163148u: goto label_163148;
            case 0x16314Cu: goto label_16314c;
            case 0x163150u: goto label_163150;
            case 0x163154u: goto label_163154;
            case 0x163158u: goto label_163158;
            case 0x16315Cu: goto label_16315c;
            case 0x163160u: goto label_163160;
            case 0x163164u: goto label_163164;
            case 0x163168u: goto label_163168;
            case 0x16316Cu: goto label_16316c;
            case 0x163170u: goto label_163170;
            case 0x163174u: goto label_163174;
            case 0x163178u: goto label_163178;
            case 0x16317Cu: goto label_16317c;
            case 0x163180u: goto label_163180;
            case 0x163184u: goto label_163184;
            case 0x163188u: goto label_163188;
            case 0x16318Cu: goto label_16318c;
            case 0x163190u: goto label_163190;
            case 0x163194u: goto label_163194;
            case 0x163198u: goto label_163198;
            case 0x16319Cu: goto label_16319c;
            case 0x1631A0u: goto label_1631a0;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631A8u: goto label_1631a8;
            case 0x1631ACu: goto label_1631ac;
            case 0x1631B0u: goto label_1631b0;
            case 0x1631B4u: goto label_1631b4;
            case 0x1631B8u: goto label_1631b8;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631C0u: goto label_1631c0;
            case 0x1631C4u: goto label_1631c4;
            case 0x1631C8u: goto label_1631c8;
            case 0x1631CCu: goto label_1631cc;
            case 0x1631D0u: goto label_1631d0;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631D8u: goto label_1631d8;
            case 0x1631DCu: goto label_1631dc;
            case 0x1631E0u: goto label_1631e0;
            case 0x1631E4u: goto label_1631e4;
            case 0x1631E8u: goto label_1631e8;
            case 0x1631ECu: goto label_1631ec;
            case 0x1631F0u: goto label_1631f0;
            case 0x1631F4u: goto label_1631f4;
            case 0x1631F8u: goto label_1631f8;
            case 0x1631FCu: goto label_1631fc;
            case 0x163200u: goto label_163200;
            case 0x163204u: goto label_163204;
            case 0x163208u: goto label_163208;
            case 0x16320Cu: goto label_16320c;
            case 0x163210u: goto label_163210;
            case 0x163214u: goto label_163214;
            case 0x163218u: goto label_163218;
            case 0x16321Cu: goto label_16321c;
            case 0x163220u: goto label_163220;
            case 0x163224u: goto label_163224;
            case 0x163228u: goto label_163228;
            case 0x16322Cu: goto label_16322c;
            case 0x163230u: goto label_163230;
            case 0x163234u: goto label_163234;
            case 0x163238u: goto label_163238;
            case 0x16323Cu: goto label_16323c;
            case 0x163240u: goto label_163240;
            case 0x163244u: goto label_163244;
            case 0x163248u: goto label_163248;
            case 0x16324Cu: goto label_16324c;
            case 0x163250u: goto label_163250;
            case 0x163254u: goto label_163254;
            case 0x163258u: goto label_163258;
            case 0x16325Cu: goto label_16325c;
            case 0x163260u: goto label_163260;
            case 0x163264u: goto label_163264;
            case 0x163268u: goto label_163268;
            case 0x16326Cu: goto label_16326c;
            case 0x163270u: goto label_163270;
            case 0x163274u: goto label_163274;
            case 0x163278u: goto label_163278;
            case 0x16327Cu: goto label_16327c;
            case 0x163280u: goto label_163280;
            case 0x163284u: goto label_163284;
            case 0x163288u: goto label_163288;
            case 0x16328Cu: goto label_16328c;
            case 0x163290u: goto label_163290;
            case 0x163294u: goto label_163294;
            case 0x163298u: goto label_163298;
            case 0x16329Cu: goto label_16329c;
            case 0x1632A0u: goto label_1632a0;
            case 0x1632A4u: goto label_1632a4;
            case 0x1632A8u: goto label_1632a8;
            case 0x1632ACu: goto label_1632ac;
            case 0x1632B0u: goto label_1632b0;
            case 0x1632B4u: goto label_1632b4;
            case 0x1632B8u: goto label_1632b8;
            case 0x1632BCu: goto label_1632bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163138u;
label_163138:
    // 0x163138: 0x27bdffe0
    ctx->pc = 0x163138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16313c:
    // 0x16313c: 0xffb00000
    ctx->pc = 0x16313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163140:
    // 0x163140: 0x80802d
    ctx->pc = 0x163140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163144:
    // 0x163144: 0xffb10008
    ctx->pc = 0x163144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_163148:
    // 0x163148: 0xffbf0010
    ctx->pc = 0x163148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16314c:
    // 0x16314c: 0xc058d10
label_163150:
    if (ctx->pc == 0x163150u) {
        ctx->pc = 0x163150u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163154u;
        goto label_163154;
    }
    ctx->pc = 0x16314Cu;
    SET_GPR_U32(ctx, 31, 0x163154u);
    ctx->pc = 0x163150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163440_0x163440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163154u; }
    }
    if (ctx->pc != 0x163154u) { return; }
    ctx->pc = 0x163154u;
label_163154:
    // 0x163154: 0x24030001
    ctx->pc = 0x163154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_163158:
    // 0x163158: 0x1443000c
label_16315c:
    if (ctx->pc == 0x16315Cu) {
        ctx->pc = 0x16315Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163160u;
        goto label_163160;
    }
    ctx->pc = 0x163158u;
    {
        const bool branch_taken_0x163158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16315Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163158) {
            ctx->pc = 0x16318Cu;
            goto label_16318c;
        }
    }
    ctx->pc = 0x163160u;
label_163160:
    // 0x163160: 0xc058d08
label_163164:
    if (ctx->pc == 0x163164u) {
        ctx->pc = 0x163168u;
        goto label_163168;
    }
    ctx->pc = 0x163160u;
    SET_GPR_U32(ctx, 31, 0x163168u);
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163168u; }
    }
    if (ctx->pc != 0x163168u) { return; }
    ctx->pc = 0x163168u;
label_163168:
    // 0x163168: 0x10400007
label_16316c:
    if (ctx->pc == 0x16316Cu) {
        ctx->pc = 0x16316Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x163170u;
        goto label_163170;
    }
    ctx->pc = 0x163168u;
    {
        const bool branch_taken_0x163168 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16316Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        if (branch_taken_0x163168) {
            ctx->pc = 0x163188u;
            goto label_163188;
        }
    }
    ctx->pc = 0x163170u;
label_163170:
    // 0x163170: 0x8c42002c
    ctx->pc = 0x163170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_163174:
    // 0x163174: 0x50400005
label_163178:
    if (ctx->pc == 0x163178u) {
        ctx->pc = 0x163178u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16317Cu;
        goto label_16317c;
    }
    ctx->pc = 0x163174u;
    {
        const bool branch_taken_0x163174 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x163174) {
            ctx->pc = 0x163178u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16318Cu;
            goto label_16318c;
        }
    }
    ctx->pc = 0x16317Cu;
label_16317c:
    // 0x16317c: 0x40f809
label_163180:
    if (ctx->pc == 0x163180u) {
        ctx->pc = 0x163184u;
        goto label_163184;
    }
    ctx->pc = 0x16317Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163184u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163078u: goto label_163078;
            case 0x16307Cu: goto label_16307c;
            case 0x163080u: goto label_163080;
            case 0x163084u: goto label_163084;
            case 0x163088u: goto label_163088;
            case 0x16308Cu: goto label_16308c;
            case 0x163090u: goto label_163090;
            case 0x163094u: goto label_163094;
            case 0x163098u: goto label_163098;
            case 0x16309Cu: goto label_16309c;
            case 0x1630A0u: goto label_1630a0;
            case 0x1630A4u: goto label_1630a4;
            case 0x1630A8u: goto label_1630a8;
            case 0x1630ACu: goto label_1630ac;
            case 0x1630B0u: goto label_1630b0;
            case 0x1630B4u: goto label_1630b4;
            case 0x1630B8u: goto label_1630b8;
            case 0x1630BCu: goto label_1630bc;
            case 0x1630C0u: goto label_1630c0;
            case 0x1630C4u: goto label_1630c4;
            case 0x1630C8u: goto label_1630c8;
            case 0x1630CCu: goto label_1630cc;
            case 0x1630D0u: goto label_1630d0;
            case 0x1630D4u: goto label_1630d4;
            case 0x1630D8u: goto label_1630d8;
            case 0x1630DCu: goto label_1630dc;
            case 0x1630E0u: goto label_1630e0;
            case 0x1630E4u: goto label_1630e4;
            case 0x1630E8u: goto label_1630e8;
            case 0x1630ECu: goto label_1630ec;
            case 0x1630F0u: goto label_1630f0;
            case 0x1630F4u: goto label_1630f4;
            case 0x1630F8u: goto label_1630f8;
            case 0x1630FCu: goto label_1630fc;
            case 0x163100u: goto label_163100;
            case 0x163104u: goto label_163104;
            case 0x163108u: goto label_163108;
            case 0x16310Cu: goto label_16310c;
            case 0x163110u: goto label_163110;
            case 0x163114u: goto label_163114;
            case 0x163118u: goto label_163118;
            case 0x16311Cu: goto label_16311c;
            case 0x163120u: goto label_163120;
            case 0x163124u: goto label_163124;
            case 0x163128u: goto label_163128;
            case 0x16312Cu: goto label_16312c;
            case 0x163130u: goto label_163130;
            case 0x163134u: goto label_163134;
            case 0x163138u: goto label_163138;
            case 0x16313Cu: goto label_16313c;
            case 0x163140u: goto label_163140;
            case 0x163144u: goto label_163144;
            case 0x163148u: goto label_163148;
            case 0x16314Cu: goto label_16314c;
            case 0x163150u: goto label_163150;
            case 0x163154u: goto label_163154;
            case 0x163158u: goto label_163158;
            case 0x16315Cu: goto label_16315c;
            case 0x163160u: goto label_163160;
            case 0x163164u: goto label_163164;
            case 0x163168u: goto label_163168;
            case 0x16316Cu: goto label_16316c;
            case 0x163170u: goto label_163170;
            case 0x163174u: goto label_163174;
            case 0x163178u: goto label_163178;
            case 0x16317Cu: goto label_16317c;
            case 0x163180u: goto label_163180;
            case 0x163184u: goto label_163184;
            case 0x163188u: goto label_163188;
            case 0x16318Cu: goto label_16318c;
            case 0x163190u: goto label_163190;
            case 0x163194u: goto label_163194;
            case 0x163198u: goto label_163198;
            case 0x16319Cu: goto label_16319c;
            case 0x1631A0u: goto label_1631a0;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631A8u: goto label_1631a8;
            case 0x1631ACu: goto label_1631ac;
            case 0x1631B0u: goto label_1631b0;
            case 0x1631B4u: goto label_1631b4;
            case 0x1631B8u: goto label_1631b8;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631C0u: goto label_1631c0;
            case 0x1631C4u: goto label_1631c4;
            case 0x1631C8u: goto label_1631c8;
            case 0x1631CCu: goto label_1631cc;
            case 0x1631D0u: goto label_1631d0;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631D8u: goto label_1631d8;
            case 0x1631DCu: goto label_1631dc;
            case 0x1631E0u: goto label_1631e0;
            case 0x1631E4u: goto label_1631e4;
            case 0x1631E8u: goto label_1631e8;
            case 0x1631ECu: goto label_1631ec;
            case 0x1631F0u: goto label_1631f0;
            case 0x1631F4u: goto label_1631f4;
            case 0x1631F8u: goto label_1631f8;
            case 0x1631FCu: goto label_1631fc;
            case 0x163200u: goto label_163200;
            case 0x163204u: goto label_163204;
            case 0x163208u: goto label_163208;
            case 0x16320Cu: goto label_16320c;
            case 0x163210u: goto label_163210;
            case 0x163214u: goto label_163214;
            case 0x163218u: goto label_163218;
            case 0x16321Cu: goto label_16321c;
            case 0x163220u: goto label_163220;
            case 0x163224u: goto label_163224;
            case 0x163228u: goto label_163228;
            case 0x16322Cu: goto label_16322c;
            case 0x163230u: goto label_163230;
            case 0x163234u: goto label_163234;
            case 0x163238u: goto label_163238;
            case 0x16323Cu: goto label_16323c;
            case 0x163240u: goto label_163240;
            case 0x163244u: goto label_163244;
            case 0x163248u: goto label_163248;
            case 0x16324Cu: goto label_16324c;
            case 0x163250u: goto label_163250;
            case 0x163254u: goto label_163254;
            case 0x163258u: goto label_163258;
            case 0x16325Cu: goto label_16325c;
            case 0x163260u: goto label_163260;
            case 0x163264u: goto label_163264;
            case 0x163268u: goto label_163268;
            case 0x16326Cu: goto label_16326c;
            case 0x163270u: goto label_163270;
            case 0x163274u: goto label_163274;
            case 0x163278u: goto label_163278;
            case 0x16327Cu: goto label_16327c;
            case 0x163280u: goto label_163280;
            case 0x163284u: goto label_163284;
            case 0x163288u: goto label_163288;
            case 0x16328Cu: goto label_16328c;
            case 0x163290u: goto label_163290;
            case 0x163294u: goto label_163294;
            case 0x163298u: goto label_163298;
            case 0x16329Cu: goto label_16329c;
            case 0x1632A0u: goto label_1632a0;
            case 0x1632A4u: goto label_1632a4;
            case 0x1632A8u: goto label_1632a8;
            case 0x1632ACu: goto label_1632ac;
            case 0x1632B0u: goto label_1632b0;
            case 0x1632B4u: goto label_1632b4;
            case 0x1632B8u: goto label_1632b8;
            case 0x1632BCu: goto label_1632bc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163184u; }
            if (ctx->pc != 0x163184u) { return; }
        }
    }
    ctx->pc = 0x163184u;
label_163184:
    // 0x163184: 0x40882d
    ctx->pc = 0x163184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163188:
    // 0x163188: 0x220102d
    ctx->pc = 0x163188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16318c:
    // 0x16318c: 0xdfb00000
    ctx->pc = 0x16318cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163190:
    // 0x163190: 0xdfb10008
    ctx->pc = 0x163190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_163194:
    // 0x163194: 0xdfbf0010
    ctx->pc = 0x163194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163198:
    // 0x163198: 0x3e00008
label_16319c:
    if (ctx->pc == 0x16319Cu) {
        ctx->pc = 0x16319Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1631A0u;
        goto label_1631a0;
    }
    ctx->pc = 0x163198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16319Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163078u: goto label_163078;
            case 0x16307Cu: goto label_16307c;
            case 0x163080u: goto label_163080;
            case 0x163084u: goto label_163084;
            case 0x163088u: goto label_163088;
            case 0x16308Cu: goto label_16308c;
            case 0x163090u: goto label_163090;
            case 0x163094u: goto label_163094;
            case 0x163098u: goto label_163098;
            case 0x16309Cu: goto label_16309c;
            case 0x1630A0u: goto label_1630a0;
            case 0x1630A4u: goto label_1630a4;
            case 0x1630A8u: goto label_1630a8;
            case 0x1630ACu: goto label_1630ac;
            case 0x1630B0u: goto label_1630b0;
            case 0x1630B4u: goto label_1630b4;
            case 0x1630B8u: goto label_1630b8;
            case 0x1630BCu: goto label_1630bc;
            case 0x1630C0u: goto label_1630c0;
            case 0x1630C4u: goto label_1630c4;
            case 0x1630C8u: goto label_1630c8;
            case 0x1630CCu: goto label_1630cc;
            case 0x1630D0u: goto label_1630d0;
            case 0x1630D4u: goto label_1630d4;
            case 0x1630D8u: goto label_1630d8;
            case 0x1630DCu: goto label_1630dc;
            case 0x1630E0u: goto label_1630e0;
            case 0x1630E4u: goto label_1630e4;
            case 0x1630E8u: goto label_1630e8;
            case 0x1630ECu: goto label_1630ec;
            case 0x1630F0u: goto label_1630f0;
            case 0x1630F4u: goto label_1630f4;
            case 0x1630F8u: goto label_1630f8;
            case 0x1630FCu: goto label_1630fc;
            case 0x163100u: goto label_163100;
            case 0x163104u: goto label_163104;
            case 0x163108u: goto label_163108;
            case 0x16310Cu: goto label_16310c;
            case 0x163110u: goto label_163110;
            case 0x163114u: goto label_163114;
            case 0x163118u: goto label_163118;
            case 0x16311Cu: goto label_16311c;
            case 0x163120u: goto label_163120;
            case 0x163124u: goto label_163124;
            case 0x163128u: goto label_163128;
            case 0x16312Cu: goto label_16312c;
            case 0x163130u: goto label_163130;
            case 0x163134u: goto label_163134;
            case 0x163138u: goto label_163138;
            case 0x16313Cu: goto label_16313c;
            case 0x163140u: goto label_163140;
            case 0x163144u: goto label_163144;
            case 0x163148u: goto label_163148;
            case 0x16314Cu: goto label_16314c;
            case 0x163150u: goto label_163150;
            case 0x163154u: goto label_163154;
            case 0x163158u: goto label_163158;
            case 0x16315Cu: goto label_16315c;
            case 0x163160u: goto label_163160;
            case 0x163164u: goto label_163164;
            case 0x163168u: goto label_163168;
            case 0x16316Cu: goto label_16316c;
            case 0x163170u: goto label_163170;
            case 0x163174u: goto label_163174;
            case 0x163178u: goto label_163178;
            case 0x16317Cu: goto label_16317c;
            case 0x163180u: goto label_163180;
            case 0x163184u: goto label_163184;
            case 0x163188u: goto label_163188;
            case 0x16318Cu: goto label_16318c;
            case 0x163190u: goto label_163190;
            case 0x163194u: goto label_163194;
            case 0x163198u: goto label_163198;
            case 0x16319Cu: goto label_16319c;
            case 0x1631A0u: goto label_1631a0;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631A8u: goto label_1631a8;
            case 0x1631ACu: goto label_1631ac;
            case 0x1631B0u: goto label_1631b0;
            case 0x1631B4u: goto label_1631b4;
            case 0x1631B8u: goto label_1631b8;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631C0u: goto label_1631c0;
            case 0x1631C4u: goto label_1631c4;
            case 0x1631C8u: goto label_1631c8;
            case 0x1631CCu: goto label_1631cc;
            case 0x1631D0u: goto label_1631d0;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631D8u: goto label_1631d8;
            case 0x1631DCu: goto label_1631dc;
            case 0x1631E0u: goto label_1631e0;
            case 0x1631E4u: goto label_1631e4;
            case 0x1631E8u: goto label_1631e8;
            case 0x1631ECu: goto label_1631ec;
            case 0x1631F0u: goto label_1631f0;
            case 0x1631F4u: goto label_1631f4;
            case 0x1631F8u: goto label_1631f8;
            case 0x1631FCu: goto label_1631fc;
            case 0x163200u: goto label_163200;
            case 0x163204u: goto label_163204;
            case 0x163208u: goto label_163208;
            case 0x16320Cu: goto label_16320c;
            case 0x163210u: goto label_163210;
            case 0x163214u: goto label_163214;
            case 0x163218u: goto label_163218;
            case 0x16321Cu: goto label_16321c;
            case 0x163220u: goto label_163220;
            case 0x163224u: goto label_163224;
            case 0x163228u: goto label_163228;
            case 0x16322Cu: goto label_16322c;
            case 0x163230u: goto label_163230;
            case 0x163234u: goto label_163234;
            case 0x163238u: goto label_163238;
            case 0x16323Cu: goto label_16323c;
            case 0x163240u: goto label_163240;
            case 0x163244u: goto label_163244;
            case 0x163248u: goto label_163248;
            case 0x16324Cu: goto label_16324c;
            case 0x163250u: goto label_163250;
            case 0x163254u: goto label_163254;
            case 0x163258u: goto label_163258;
            case 0x16325Cu: goto label_16325c;
            case 0x163260u: goto label_163260;
            case 0x163264u: goto label_163264;
            case 0x163268u: goto label_163268;
            case 0x16326Cu: goto label_16326c;
            case 0x163270u: goto label_163270;
            case 0x163274u: goto label_163274;
            case 0x163278u: goto label_163278;
            case 0x16327Cu: goto label_16327c;
            case 0x163280u: goto label_163280;
            case 0x163284u: goto label_163284;
            case 0x163288u: goto label_163288;
            case 0x16328Cu: goto label_16328c;
            case 0x163290u: goto label_163290;
            case 0x163294u: goto label_163294;
            case 0x163298u: goto label_163298;
            case 0x16329Cu: goto label_16329c;
            case 0x1632A0u: goto label_1632a0;
            case 0x1632A4u: goto label_1632a4;
            case 0x1632A8u: goto label_1632a8;
            case 0x1632ACu: goto label_1632ac;
            case 0x1632B0u: goto label_1632b0;
            case 0x1632B4u: goto label_1632b4;
            case 0x1632B8u: goto label_1632b8;
            case 0x1632BCu: goto label_1632bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1631A0u;
label_1631a0:
    // 0x1631a0: 0x27bdffb0
    ctx->pc = 0x1631a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1631a4:
    // 0x1631a4: 0xffb00010
    ctx->pc = 0x1631a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1631a8:
    // 0x1631a8: 0x80802d
    ctx->pc = 0x1631a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1631ac:
    // 0x1631ac: 0xffb10018
    ctx->pc = 0x1631acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1631b0:
    // 0x1631b0: 0xc0882d
    ctx->pc = 0x1631b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1631b4:
    // 0x1631b4: 0xffb20020
    ctx->pc = 0x1631b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1631b8:
    // 0x1631b8: 0x261201ec
    ctx->pc = 0x1631b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 492));
label_1631bc:
    // 0x1631bc: 0xffb30028
    ctx->pc = 0x1631bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1631c0:
    // 0x1631c0: 0xa0982d
    ctx->pc = 0x1631c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1631c4:
    // 0x1631c4: 0xffb40030
    ctx->pc = 0x1631c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1631c8:
    // 0x1631c8: 0xffb50038
    ctx->pc = 0x1631c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1631cc:
    // 0x1631cc: 0xffbf0040
    ctx->pc = 0x1631ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1631d0:
    // 0x1631d0: 0xc058d08
label_1631d4:
    if (ctx->pc == 0x1631D4u) {
        ctx->pc = 0x1631D4u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1631D8u;
        goto label_1631d8;
    }
    ctx->pc = 0x1631D0u;
    SET_GPR_U32(ctx, 31, 0x1631D8u);
    ctx->pc = 0x1631D4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163420_0x163420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631D8u; }
    }
    if (ctx->pc != 0x1631D8u) { return; }
    ctx->pc = 0x1631D8u;
label_1631d8:
    // 0x1631d8: 0x50400031
label_1631dc:
    if (ctx->pc == 0x1631DCu) {
        ctx->pc = 0x1631DCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1631E0u;
        goto label_1631e0;
    }
    ctx->pc = 0x1631D8u;
    {
        const bool branch_taken_0x1631d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1631d8) {
            ctx->pc = 0x1631DCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x1632A0u;
            goto label_1632a0;
        }
    }
    ctx->pc = 0x1631E0u;
label_1631e0:
    // 0x1631e0: 0xc058b48
label_1631e4:
    if (ctx->pc == 0x1631E4u) {
        ctx->pc = 0x1631E8u;
        goto label_1631e8;
    }
    ctx->pc = 0x1631E0u;
    SET_GPR_U32(ctx, 31, 0x1631E8u);
    ctx->pc = 0x162D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162D20_0x162d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631E8u; }
    }
    if (ctx->pc != 0x1631E8u) { return; }
    ctx->pc = 0x1631E8u;
label_1631e8:
    // 0x1631e8: 0x8e150040
    ctx->pc = 0x1631e8u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1631ec:
    // 0x1631ec: 0xae510008
    ctx->pc = 0x1631ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_1631f0:
    // 0x1631f0: 0x3a0202d
    ctx->pc = 0x1631f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1631f4:
    // 0x1631f4: 0xae530004
    ctx->pc = 0x1631f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
label_1631f8:
    // 0x1631f8: 0x27a50004
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
label_1631fc:
    // 0x1631fc: 0xae540010
    ctx->pc = 0x1631fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
label_163200:
    // 0x163200: 0xc058b7a
label_163204:
    if (ctx->pc == 0x163204u) {
        ctx->pc = 0x163204u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x163208u;
        goto label_163208;
    }
    ctx->pc = 0x163200u;
    SET_GPR_U32(ctx, 31, 0x163208u);
    ctx->pc = 0x163204u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x162DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162DE8_0x162de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163208u; }
    }
    if (ctx->pc != 0x163208u) { return; }
    ctx->pc = 0x163208u;
label_163208:
    // 0x163208: 0x3c040024
    ctx->pc = 0x163208u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_16320c:
    // 0x16320c: 0x222102a
    ctx->pc = 0x16320cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_163210:
    // 0x163210: 0x14400019
label_163214:
    if (ctx->pc == 0x163214u) {
        ctx->pc = 0x163214u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1048));
        ctx->pc = 0x163218u;
        goto label_163218;
    }
    ctx->pc = 0x163210u;
    {
        const bool branch_taken_0x163210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x163214u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1048));
        if (branch_taken_0x163210) {
            ctx->pc = 0x163278u;
            goto label_163278;
        }
    }
    ctx->pc = 0x163218u;
label_163218:
    // 0x163218: 0x8fa40000
    ctx->pc = 0x163218u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16321c:
    // 0x16321c: 0x8fa50004
    ctx->pc = 0x16321cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_163220:
    // 0x163220: 0x8fa60008
    ctx->pc = 0x163220u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_163224:
    // 0x163224: 0xc04fe2a
label_163228:
    if (ctx->pc == 0x163228u) {
        ctx->pc = 0x163228u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->pc = 0x16322Cu;
        goto label_16322c;
    }
    ctx->pc = 0x163224u;
    SET_GPR_U32(ctx, 31, 0x16322Cu);
    ctx->pc = 0x163228u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->pc = 0x13F8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A8_0x13f8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16322Cu; }
    }
    if (ctx->pc != 0x16322Cu) { return; }
    ctx->pc = 0x16322Cu;
label_16322c:
    // 0x16322c: 0x40882d
    ctx->pc = 0x16322cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163230:
    // 0x163230: 0x16200005
label_163234:
    if (ctx->pc == 0x163234u) {
        ctx->pc = 0x163234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163238u;
        goto label_163238;
    }
    ctx->pc = 0x163230u;
    {
        const bool branch_taken_0x163230 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x163234u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163230) {
            ctx->pc = 0x163248u;
            goto label_163248;
        }
    }
    ctx->pc = 0x163238u;
label_163238:
    // 0x163238: 0x3c040024
    ctx->pc = 0x163238u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_16323c:
    // 0x16323c: 0x1000000e
label_163240:
    if (ctx->pc == 0x163240u) {
        ctx->pc = 0x163240u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1096));
        ctx->pc = 0x163244u;
        goto label_163244;
    }
    ctx->pc = 0x16323Cu;
    {
        const bool branch_taken_0x16323c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163240u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1096));
        if (branch_taken_0x16323c) {
            ctx->pc = 0x163278u;
            goto label_163278;
        }
    }
    ctx->pc = 0x163244u;
label_163244:
    // 0x163244: 0x0
    ctx->pc = 0x163244u;
    // NOP
label_163248:
    // 0x163248: 0xae51000c
    ctx->pc = 0x163248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_16324c:
    // 0x16324c: 0xc058b94
label_163250:
    if (ctx->pc == 0x163250u) {
        ctx->pc = 0x163250u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163254u;
        goto label_163254;
    }
    ctx->pc = 0x16324Cu;
    SET_GPR_U32(ctx, 31, 0x163254u);
    ctx->pc = 0x163250u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x162E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162E50_0x162e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163254u; }
    }
    if (ctx->pc != 0x163254u) { return; }
    ctx->pc = 0x163254u;
label_163254:
    // 0x163254: 0x2a0202d
    ctx->pc = 0x163254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_163258:
    // 0x163258: 0x40802d
    ctx->pc = 0x163258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16325c:
    // 0x16325c: 0x268500c0
    ctx->pc = 0x16325cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 192));
label_163260:
    // 0x163260: 0x220302d
    ctx->pc = 0x163260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163264:
    // 0x163264: 0x382d
    ctx->pc = 0x163264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163268:
    // 0x163268: 0x16000007
label_16326c:
    if (ctx->pc == 0x16326Cu) {
        ctx->pc = 0x16326Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163270u;
        goto label_163270;
    }
    ctx->pc = 0x163268u;
    {
        const bool branch_taken_0x163268 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16326Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163268) {
            ctx->pc = 0x163288u;
            goto label_163288;
        }
    }
    ctx->pc = 0x163270u;
label_163270:
    // 0x163270: 0x3c040024
    ctx->pc = 0x163270u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_163274:
    // 0x163274: 0x24840470
    ctx->pc = 0x163274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1136));
label_163278:
    // 0x163278: 0xc058dd4
label_16327c:
    if (ctx->pc == 0x16327Cu) {
        ctx->pc = 0x163280u;
        goto label_163280;
    }
    ctx->pc = 0x163278u;
    SET_GPR_U32(ctx, 31, 0x163280u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163280u; }
    }
    if (ctx->pc != 0x163280u) { return; }
    ctx->pc = 0x163280u;
label_163280:
    // 0x163280: 0x10000006
label_163284:
    if (ctx->pc == 0x163284u) {
        ctx->pc = 0x163284u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163288u;
        goto label_163288;
    }
    ctx->pc = 0x163280u;
    {
        const bool branch_taken_0x163280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163284u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163280) {
            ctx->pc = 0x16329Cu;
            goto label_16329c;
        }
    }
    ctx->pc = 0x163288u;
label_163288:
    // 0x163288: 0x24020001
    ctx->pc = 0x163288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_16328c:
    // 0x16328c: 0xae500014
    ctx->pc = 0x16328cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_163290:
    // 0x163290: 0xc05a7fc
label_163294:
    if (ctx->pc == 0x163294u) {
        ctx->pc = 0x163294u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x163298u;
        goto label_163298;
    }
    ctx->pc = 0x163290u;
    SET_GPR_U32(ctx, 31, 0x163298u);
    ctx->pc = 0x163294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x169FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169FF0_0x169ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163298u; }
    }
    if (ctx->pc != 0x163298u) { return; }
    ctx->pc = 0x163298u;
label_163298:
    // 0x163298: 0x200102d
    ctx->pc = 0x163298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16329c:
    // 0x16329c: 0xdfb00010
    ctx->pc = 0x16329cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1632a0:
    // 0x1632a0: 0xdfb10018
    ctx->pc = 0x1632a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1632a4:
    // 0x1632a4: 0xdfb20020
    ctx->pc = 0x1632a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1632a8:
    // 0x1632a8: 0xdfb30028
    ctx->pc = 0x1632a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1632ac:
    // 0x1632ac: 0xdfb40030
    ctx->pc = 0x1632acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1632b0:
    // 0x1632b0: 0xdfb50038
    ctx->pc = 0x1632b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1632b4:
    // 0x1632b4: 0xdfbf0040
    ctx->pc = 0x1632b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1632b8:
    // 0x1632b8: 0x3e00008
label_1632bc:
    if (ctx->pc == 0x1632BCu) {
        ctx->pc = 0x1632BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1632C0u;
        goto label_fallthrough_0x1632b8;
    }
    ctx->pc = 0x1632B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1632BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163078u: goto label_163078;
            case 0x16307Cu: goto label_16307c;
            case 0x163080u: goto label_163080;
            case 0x163084u: goto label_163084;
            case 0x163088u: goto label_163088;
            case 0x16308Cu: goto label_16308c;
            case 0x163090u: goto label_163090;
            case 0x163094u: goto label_163094;
            case 0x163098u: goto label_163098;
            case 0x16309Cu: goto label_16309c;
            case 0x1630A0u: goto label_1630a0;
            case 0x1630A4u: goto label_1630a4;
            case 0x1630A8u: goto label_1630a8;
            case 0x1630ACu: goto label_1630ac;
            case 0x1630B0u: goto label_1630b0;
            case 0x1630B4u: goto label_1630b4;
            case 0x1630B8u: goto label_1630b8;
            case 0x1630BCu: goto label_1630bc;
            case 0x1630C0u: goto label_1630c0;
            case 0x1630C4u: goto label_1630c4;
            case 0x1630C8u: goto label_1630c8;
            case 0x1630CCu: goto label_1630cc;
            case 0x1630D0u: goto label_1630d0;
            case 0x1630D4u: goto label_1630d4;
            case 0x1630D8u: goto label_1630d8;
            case 0x1630DCu: goto label_1630dc;
            case 0x1630E0u: goto label_1630e0;
            case 0x1630E4u: goto label_1630e4;
            case 0x1630E8u: goto label_1630e8;
            case 0x1630ECu: goto label_1630ec;
            case 0x1630F0u: goto label_1630f0;
            case 0x1630F4u: goto label_1630f4;
            case 0x1630F8u: goto label_1630f8;
            case 0x1630FCu: goto label_1630fc;
            case 0x163100u: goto label_163100;
            case 0x163104u: goto label_163104;
            case 0x163108u: goto label_163108;
            case 0x16310Cu: goto label_16310c;
            case 0x163110u: goto label_163110;
            case 0x163114u: goto label_163114;
            case 0x163118u: goto label_163118;
            case 0x16311Cu: goto label_16311c;
            case 0x163120u: goto label_163120;
            case 0x163124u: goto label_163124;
            case 0x163128u: goto label_163128;
            case 0x16312Cu: goto label_16312c;
            case 0x163130u: goto label_163130;
            case 0x163134u: goto label_163134;
            case 0x163138u: goto label_163138;
            case 0x16313Cu: goto label_16313c;
            case 0x163140u: goto label_163140;
            case 0x163144u: goto label_163144;
            case 0x163148u: goto label_163148;
            case 0x16314Cu: goto label_16314c;
            case 0x163150u: goto label_163150;
            case 0x163154u: goto label_163154;
            case 0x163158u: goto label_163158;
            case 0x16315Cu: goto label_16315c;
            case 0x163160u: goto label_163160;
            case 0x163164u: goto label_163164;
            case 0x163168u: goto label_163168;
            case 0x16316Cu: goto label_16316c;
            case 0x163170u: goto label_163170;
            case 0x163174u: goto label_163174;
            case 0x163178u: goto label_163178;
            case 0x16317Cu: goto label_16317c;
            case 0x163180u: goto label_163180;
            case 0x163184u: goto label_163184;
            case 0x163188u: goto label_163188;
            case 0x16318Cu: goto label_16318c;
            case 0x163190u: goto label_163190;
            case 0x163194u: goto label_163194;
            case 0x163198u: goto label_163198;
            case 0x16319Cu: goto label_16319c;
            case 0x1631A0u: goto label_1631a0;
            case 0x1631A4u: goto label_1631a4;
            case 0x1631A8u: goto label_1631a8;
            case 0x1631ACu: goto label_1631ac;
            case 0x1631B0u: goto label_1631b0;
            case 0x1631B4u: goto label_1631b4;
            case 0x1631B8u: goto label_1631b8;
            case 0x1631BCu: goto label_1631bc;
            case 0x1631C0u: goto label_1631c0;
            case 0x1631C4u: goto label_1631c4;
            case 0x1631C8u: goto label_1631c8;
            case 0x1631CCu: goto label_1631cc;
            case 0x1631D0u: goto label_1631d0;
            case 0x1631D4u: goto label_1631d4;
            case 0x1631D8u: goto label_1631d8;
            case 0x1631DCu: goto label_1631dc;
            case 0x1631E0u: goto label_1631e0;
            case 0x1631E4u: goto label_1631e4;
            case 0x1631E8u: goto label_1631e8;
            case 0x1631ECu: goto label_1631ec;
            case 0x1631F0u: goto label_1631f0;
            case 0x1631F4u: goto label_1631f4;
            case 0x1631F8u: goto label_1631f8;
            case 0x1631FCu: goto label_1631fc;
            case 0x163200u: goto label_163200;
            case 0x163204u: goto label_163204;
            case 0x163208u: goto label_163208;
            case 0x16320Cu: goto label_16320c;
            case 0x163210u: goto label_163210;
            case 0x163214u: goto label_163214;
            case 0x163218u: goto label_163218;
            case 0x16321Cu: goto label_16321c;
            case 0x163220u: goto label_163220;
            case 0x163224u: goto label_163224;
            case 0x163228u: goto label_163228;
            case 0x16322Cu: goto label_16322c;
            case 0x163230u: goto label_163230;
            case 0x163234u: goto label_163234;
            case 0x163238u: goto label_163238;
            case 0x16323Cu: goto label_16323c;
            case 0x163240u: goto label_163240;
            case 0x163244u: goto label_163244;
            case 0x163248u: goto label_163248;
            case 0x16324Cu: goto label_16324c;
            case 0x163250u: goto label_163250;
            case 0x163254u: goto label_163254;
            case 0x163258u: goto label_163258;
            case 0x16325Cu: goto label_16325c;
            case 0x163260u: goto label_163260;
            case 0x163264u: goto label_163264;
            case 0x163268u: goto label_163268;
            case 0x16326Cu: goto label_16326c;
            case 0x163270u: goto label_163270;
            case 0x163274u: goto label_163274;
            case 0x163278u: goto label_163278;
            case 0x16327Cu: goto label_16327c;
            case 0x163280u: goto label_163280;
            case 0x163284u: goto label_163284;
            case 0x163288u: goto label_163288;
            case 0x16328Cu: goto label_16328c;
            case 0x163290u: goto label_163290;
            case 0x163294u: goto label_163294;
            case 0x163298u: goto label_163298;
            case 0x16329Cu: goto label_16329c;
            case 0x1632A0u: goto label_1632a0;
            case 0x1632A4u: goto label_1632a4;
            case 0x1632A8u: goto label_1632a8;
            case 0x1632ACu: goto label_1632ac;
            case 0x1632B0u: goto label_1632b0;
            case 0x1632B4u: goto label_1632b4;
            case 0x1632B8u: goto label_1632b8;
            case 0x1632BCu: goto label_1632bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1632b8:
    ctx->pc = 0x1632C0u;
}
