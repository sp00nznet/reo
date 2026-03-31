#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D1D0
// Address: 0x15d1d0 - 0x15d470
void sub_0015D1D0_0x15d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d1d0u;

label_15d1d0:
    // 0x15d1d0: 0x27bdfff0
    ctx->pc = 0x15d1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_15d1d4:
    // 0x15d1d4: 0xffb00000
    ctx->pc = 0x15d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15d1d8:
    // 0x15d1d8: 0x80802d
    ctx->pc = 0x15d1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d1dc:
    // 0x15d1dc: 0x1200003a
label_15d1e0:
    if (ctx->pc == 0x15D1E0u) {
        ctx->pc = 0x15D1E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x15D1E4u;
        goto label_15d1e4;
    }
    ctx->pc = 0x15D1DCu;
    {
        const bool branch_taken_0x15d1dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D1E0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x15d1dc) {
            ctx->pc = 0x15D2C8u;
            goto label_15d2c8;
        }
    }
    ctx->pc = 0x15D1E4u;
label_15d1e4:
    // 0x15d1e4: 0xc057cbc
label_15d1e8:
    if (ctx->pc == 0x15D1E8u) {
        ctx->pc = 0x15D1ECu;
        goto label_15d1ec;
    }
    ctx->pc = 0x15D1E4u;
    SET_GPR_U32(ctx, 31, 0x15D1ECu);
    ctx->pc = 0x15F2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F2F0_0x15f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D1ECu; }
    }
    if (ctx->pc != 0x15D1ECu) { return; }
    ctx->pc = 0x15D1ECu;
label_15d1ec:
    // 0x15d1ec: 0xae000004
    ctx->pc = 0x15d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15d1f0:
    // 0x15d1f0: 0xc058652
label_15d1f4:
    if (ctx->pc == 0x15D1F4u) {
        ctx->pc = 0x15D1F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D1F8u;
        goto label_15d1f8;
    }
    ctx->pc = 0x15D1F0u;
    SET_GPR_U32(ctx, 31, 0x15D1F8u);
    ctx->pc = 0x15D1F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161948_0x161948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D1F8u; }
    }
    if (ctx->pc != 0x15D1F8u) { return; }
    ctx->pc = 0x15D1F8u;
label_15d1f8:
    // 0x15d1f8: 0x8e0400a8
    ctx->pc = 0x15d1f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_15d1fc:
    // 0x15d1fc: 0x50800004
label_15d200:
    if (ctx->pc == 0x15D200u) {
        ctx->pc = 0x15D200u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x15D204u;
        goto label_15d204;
    }
    ctx->pc = 0x15D1FCu;
    {
        const bool branch_taken_0x15d1fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d1fc) {
            ctx->pc = 0x15D200u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x15D210u;
            goto label_15d210;
        }
    }
    ctx->pc = 0x15D204u;
label_15d204:
    // 0x15d204: 0xc0582de
label_15d208:
    if (ctx->pc == 0x15D208u) {
        ctx->pc = 0x15D20Cu;
        goto label_15d20c;
    }
    ctx->pc = 0x15D204u;
    SET_GPR_U32(ctx, 31, 0x15D20Cu);
    ctx->pc = 0x160B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B78_0x160b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D20Cu; }
    }
    if (ctx->pc != 0x15D20Cu) { return; }
    ctx->pc = 0x15D20Cu;
label_15d20c:
    // 0x15d20c: 0x8e04004c
    ctx->pc = 0x15d20cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_15d210:
    // 0x15d210: 0x50800004
label_15d214:
    if (ctx->pc == 0x15D214u) {
        ctx->pc = 0x15D214u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->pc = 0x15D218u;
        goto label_15d218;
    }
    ctx->pc = 0x15D210u;
    {
        const bool branch_taken_0x15d210 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d210) {
            ctx->pc = 0x15D214u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x15D224u;
            goto label_15d224;
        }
    }
    ctx->pc = 0x15D218u;
label_15d218:
    // 0x15d218: 0xc04f32e
label_15d21c:
    if (ctx->pc == 0x15D21Cu) {
        ctx->pc = 0x15D220u;
        goto label_15d220;
    }
    ctx->pc = 0x15D218u;
    SET_GPR_U32(ctx, 31, 0x15D220u);
    ctx->pc = 0x13CCB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CCB8_0x13ccb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D220u; }
    }
    if (ctx->pc != 0x15D220u) { return; }
    ctx->pc = 0x15D220u;
label_15d220:
    // 0x15d220: 0x8e040044
    ctx->pc = 0x15d220u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_15d224:
    // 0x15d224: 0x50800004
label_15d228:
    if (ctx->pc == 0x15D228u) {
        ctx->pc = 0x15D228u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->pc = 0x15D22Cu;
        goto label_15d22c;
    }
    ctx->pc = 0x15D224u;
    {
        const bool branch_taken_0x15d224 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d224) {
            ctx->pc = 0x15D228u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->pc = 0x15D238u;
            goto label_15d238;
        }
    }
    ctx->pc = 0x15D22Cu;
label_15d22c:
    // 0x15d22c: 0xc059176
label_15d230:
    if (ctx->pc == 0x15D230u) {
        ctx->pc = 0x15D234u;
        goto label_15d234;
    }
    ctx->pc = 0x15D22Cu;
    SET_GPR_U32(ctx, 31, 0x15D234u);
    ctx->pc = 0x1645D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001645D8_0x1645d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D234u; }
    }
    if (ctx->pc != 0x15D234u) { return; }
    ctx->pc = 0x15D234u;
label_15d234:
    // 0x15d234: 0x8e04012c
    ctx->pc = 0x15d234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_15d238:
    // 0x15d238: 0x50800006
label_15d23c:
    if (ctx->pc == 0x15D23Cu) {
        ctx->pc = 0x15D23Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 332)));
        ctx->pc = 0x15D240u;
        goto label_15d240;
    }
    ctx->pc = 0x15D238u;
    {
        const bool branch_taken_0x15d238 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d238) {
            ctx->pc = 0x15D23Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->pc = 0x15D254u;
            goto label_15d254;
        }
    }
    ctx->pc = 0x15D240u;
label_15d240:
    // 0x15d240: 0x8c830000
    ctx->pc = 0x15d240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d244:
    // 0x15d244: 0x8c62000c
    ctx->pc = 0x15d244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_15d248:
    // 0x15d248: 0x40f809
label_15d24c:
    if (ctx->pc == 0x15D24Cu) {
        ctx->pc = 0x15D250u;
        goto label_15d250;
    }
    ctx->pc = 0x15D248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D250u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1D0u: goto label_15d1d0;
            case 0x15D1D4u: goto label_15d1d4;
            case 0x15D1D8u: goto label_15d1d8;
            case 0x15D1DCu: goto label_15d1dc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1E8u: goto label_15d1e8;
            case 0x15D1ECu: goto label_15d1ec;
            case 0x15D1F0u: goto label_15d1f0;
            case 0x15D1F4u: goto label_15d1f4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D1FCu: goto label_15d1fc;
            case 0x15D200u: goto label_15d200;
            case 0x15D204u: goto label_15d204;
            case 0x15D208u: goto label_15d208;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D210u: goto label_15d210;
            case 0x15D214u: goto label_15d214;
            case 0x15D218u: goto label_15d218;
            case 0x15D21Cu: goto label_15d21c;
            case 0x15D220u: goto label_15d220;
            case 0x15D224u: goto label_15d224;
            case 0x15D228u: goto label_15d228;
            case 0x15D22Cu: goto label_15d22c;
            case 0x15D230u: goto label_15d230;
            case 0x15D234u: goto label_15d234;
            case 0x15D238u: goto label_15d238;
            case 0x15D23Cu: goto label_15d23c;
            case 0x15D240u: goto label_15d240;
            case 0x15D244u: goto label_15d244;
            case 0x15D248u: goto label_15d248;
            case 0x15D24Cu: goto label_15d24c;
            case 0x15D250u: goto label_15d250;
            case 0x15D254u: goto label_15d254;
            case 0x15D258u: goto label_15d258;
            case 0x15D25Cu: goto label_15d25c;
            case 0x15D260u: goto label_15d260;
            case 0x15D264u: goto label_15d264;
            case 0x15D268u: goto label_15d268;
            case 0x15D26Cu: goto label_15d26c;
            case 0x15D270u: goto label_15d270;
            case 0x15D274u: goto label_15d274;
            case 0x15D278u: goto label_15d278;
            case 0x15D27Cu: goto label_15d27c;
            case 0x15D280u: goto label_15d280;
            case 0x15D284u: goto label_15d284;
            case 0x15D288u: goto label_15d288;
            case 0x15D28Cu: goto label_15d28c;
            case 0x15D290u: goto label_15d290;
            case 0x15D294u: goto label_15d294;
            case 0x15D298u: goto label_15d298;
            case 0x15D29Cu: goto label_15d29c;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D2A4u: goto label_15d2a4;
            case 0x15D2A8u: goto label_15d2a8;
            case 0x15D2ACu: goto label_15d2ac;
            case 0x15D2B0u: goto label_15d2b0;
            case 0x15D2B4u: goto label_15d2b4;
            case 0x15D2B8u: goto label_15d2b8;
            case 0x15D2BCu: goto label_15d2bc;
            case 0x15D2C0u: goto label_15d2c0;
            case 0x15D2C4u: goto label_15d2c4;
            case 0x15D2C8u: goto label_15d2c8;
            case 0x15D2CCu: goto label_15d2cc;
            case 0x15D2D0u: goto label_15d2d0;
            case 0x15D2D4u: goto label_15d2d4;
            case 0x15D2D8u: goto label_15d2d8;
            case 0x15D2DCu: goto label_15d2dc;
            case 0x15D2E0u: goto label_15d2e0;
            case 0x15D2E4u: goto label_15d2e4;
            case 0x15D2E8u: goto label_15d2e8;
            case 0x15D2ECu: goto label_15d2ec;
            case 0x15D2F0u: goto label_15d2f0;
            case 0x15D2F4u: goto label_15d2f4;
            case 0x15D2F8u: goto label_15d2f8;
            case 0x15D2FCu: goto label_15d2fc;
            case 0x15D300u: goto label_15d300;
            case 0x15D304u: goto label_15d304;
            case 0x15D308u: goto label_15d308;
            case 0x15D30Cu: goto label_15d30c;
            case 0x15D310u: goto label_15d310;
            case 0x15D314u: goto label_15d314;
            case 0x15D318u: goto label_15d318;
            case 0x15D31Cu: goto label_15d31c;
            case 0x15D320u: goto label_15d320;
            case 0x15D324u: goto label_15d324;
            case 0x15D328u: goto label_15d328;
            case 0x15D32Cu: goto label_15d32c;
            case 0x15D330u: goto label_15d330;
            case 0x15D334u: goto label_15d334;
            case 0x15D338u: goto label_15d338;
            case 0x15D33Cu: goto label_15d33c;
            case 0x15D340u: goto label_15d340;
            case 0x15D344u: goto label_15d344;
            case 0x15D348u: goto label_15d348;
            case 0x15D34Cu: goto label_15d34c;
            case 0x15D350u: goto label_15d350;
            case 0x15D354u: goto label_15d354;
            case 0x15D358u: goto label_15d358;
            case 0x15D35Cu: goto label_15d35c;
            case 0x15D360u: goto label_15d360;
            case 0x15D364u: goto label_15d364;
            case 0x15D368u: goto label_15d368;
            case 0x15D36Cu: goto label_15d36c;
            case 0x15D370u: goto label_15d370;
            case 0x15D374u: goto label_15d374;
            case 0x15D378u: goto label_15d378;
            case 0x15D37Cu: goto label_15d37c;
            case 0x15D380u: goto label_15d380;
            case 0x15D384u: goto label_15d384;
            case 0x15D388u: goto label_15d388;
            case 0x15D38Cu: goto label_15d38c;
            case 0x15D390u: goto label_15d390;
            case 0x15D394u: goto label_15d394;
            case 0x15D398u: goto label_15d398;
            case 0x15D39Cu: goto label_15d39c;
            case 0x15D3A0u: goto label_15d3a0;
            case 0x15D3A4u: goto label_15d3a4;
            case 0x15D3A8u: goto label_15d3a8;
            case 0x15D3ACu: goto label_15d3ac;
            case 0x15D3B0u: goto label_15d3b0;
            case 0x15D3B4u: goto label_15d3b4;
            case 0x15D3B8u: goto label_15d3b8;
            case 0x15D3BCu: goto label_15d3bc;
            case 0x15D3C0u: goto label_15d3c0;
            case 0x15D3C4u: goto label_15d3c4;
            case 0x15D3C8u: goto label_15d3c8;
            case 0x15D3CCu: goto label_15d3cc;
            case 0x15D3D0u: goto label_15d3d0;
            case 0x15D3D4u: goto label_15d3d4;
            case 0x15D3D8u: goto label_15d3d8;
            case 0x15D3DCu: goto label_15d3dc;
            case 0x15D3E0u: goto label_15d3e0;
            case 0x15D3E4u: goto label_15d3e4;
            case 0x15D3E8u: goto label_15d3e8;
            case 0x15D3ECu: goto label_15d3ec;
            case 0x15D3F0u: goto label_15d3f0;
            case 0x15D3F4u: goto label_15d3f4;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D3FCu: goto label_15d3fc;
            case 0x15D400u: goto label_15d400;
            case 0x15D404u: goto label_15d404;
            case 0x15D408u: goto label_15d408;
            case 0x15D40Cu: goto label_15d40c;
            case 0x15D410u: goto label_15d410;
            case 0x15D414u: goto label_15d414;
            case 0x15D418u: goto label_15d418;
            case 0x15D41Cu: goto label_15d41c;
            case 0x15D420u: goto label_15d420;
            case 0x15D424u: goto label_15d424;
            case 0x15D428u: goto label_15d428;
            case 0x15D42Cu: goto label_15d42c;
            case 0x15D430u: goto label_15d430;
            case 0x15D434u: goto label_15d434;
            case 0x15D438u: goto label_15d438;
            case 0x15D43Cu: goto label_15d43c;
            case 0x15D440u: goto label_15d440;
            case 0x15D444u: goto label_15d444;
            case 0x15D448u: goto label_15d448;
            case 0x15D44Cu: goto label_15d44c;
            case 0x15D450u: goto label_15d450;
            case 0x15D454u: goto label_15d454;
            case 0x15D458u: goto label_15d458;
            case 0x15D45Cu: goto label_15d45c;
            case 0x15D460u: goto label_15d460;
            case 0x15D464u: goto label_15d464;
            case 0x15D468u: goto label_15d468;
            case 0x15D46Cu: goto label_15d46c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D250u; }
            if (ctx->pc != 0x15D250u) { return; }
        }
    }
    ctx->pc = 0x15D250u;
label_15d250:
    // 0x15d250: 0x8e04014c
    ctx->pc = 0x15d250u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_15d254:
    // 0x15d254: 0x50800006
label_15d258:
    if (ctx->pc == 0x15D258u) {
        ctx->pc = 0x15D258u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x15D25Cu;
        goto label_15d25c;
    }
    ctx->pc = 0x15D254u;
    {
        const bool branch_taken_0x15d254 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d254) {
            ctx->pc = 0x15D258u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->pc = 0x15D270u;
            goto label_15d270;
        }
    }
    ctx->pc = 0x15D25Cu;
label_15d25c:
    // 0x15d25c: 0x8c830000
    ctx->pc = 0x15d25cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d260:
    // 0x15d260: 0x8c62000c
    ctx->pc = 0x15d260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_15d264:
    // 0x15d264: 0x40f809
label_15d268:
    if (ctx->pc == 0x15D268u) {
        ctx->pc = 0x15D26Cu;
        goto label_15d26c;
    }
    ctx->pc = 0x15D264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D26Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1D0u: goto label_15d1d0;
            case 0x15D1D4u: goto label_15d1d4;
            case 0x15D1D8u: goto label_15d1d8;
            case 0x15D1DCu: goto label_15d1dc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1E8u: goto label_15d1e8;
            case 0x15D1ECu: goto label_15d1ec;
            case 0x15D1F0u: goto label_15d1f0;
            case 0x15D1F4u: goto label_15d1f4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D1FCu: goto label_15d1fc;
            case 0x15D200u: goto label_15d200;
            case 0x15D204u: goto label_15d204;
            case 0x15D208u: goto label_15d208;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D210u: goto label_15d210;
            case 0x15D214u: goto label_15d214;
            case 0x15D218u: goto label_15d218;
            case 0x15D21Cu: goto label_15d21c;
            case 0x15D220u: goto label_15d220;
            case 0x15D224u: goto label_15d224;
            case 0x15D228u: goto label_15d228;
            case 0x15D22Cu: goto label_15d22c;
            case 0x15D230u: goto label_15d230;
            case 0x15D234u: goto label_15d234;
            case 0x15D238u: goto label_15d238;
            case 0x15D23Cu: goto label_15d23c;
            case 0x15D240u: goto label_15d240;
            case 0x15D244u: goto label_15d244;
            case 0x15D248u: goto label_15d248;
            case 0x15D24Cu: goto label_15d24c;
            case 0x15D250u: goto label_15d250;
            case 0x15D254u: goto label_15d254;
            case 0x15D258u: goto label_15d258;
            case 0x15D25Cu: goto label_15d25c;
            case 0x15D260u: goto label_15d260;
            case 0x15D264u: goto label_15d264;
            case 0x15D268u: goto label_15d268;
            case 0x15D26Cu: goto label_15d26c;
            case 0x15D270u: goto label_15d270;
            case 0x15D274u: goto label_15d274;
            case 0x15D278u: goto label_15d278;
            case 0x15D27Cu: goto label_15d27c;
            case 0x15D280u: goto label_15d280;
            case 0x15D284u: goto label_15d284;
            case 0x15D288u: goto label_15d288;
            case 0x15D28Cu: goto label_15d28c;
            case 0x15D290u: goto label_15d290;
            case 0x15D294u: goto label_15d294;
            case 0x15D298u: goto label_15d298;
            case 0x15D29Cu: goto label_15d29c;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D2A4u: goto label_15d2a4;
            case 0x15D2A8u: goto label_15d2a8;
            case 0x15D2ACu: goto label_15d2ac;
            case 0x15D2B0u: goto label_15d2b0;
            case 0x15D2B4u: goto label_15d2b4;
            case 0x15D2B8u: goto label_15d2b8;
            case 0x15D2BCu: goto label_15d2bc;
            case 0x15D2C0u: goto label_15d2c0;
            case 0x15D2C4u: goto label_15d2c4;
            case 0x15D2C8u: goto label_15d2c8;
            case 0x15D2CCu: goto label_15d2cc;
            case 0x15D2D0u: goto label_15d2d0;
            case 0x15D2D4u: goto label_15d2d4;
            case 0x15D2D8u: goto label_15d2d8;
            case 0x15D2DCu: goto label_15d2dc;
            case 0x15D2E0u: goto label_15d2e0;
            case 0x15D2E4u: goto label_15d2e4;
            case 0x15D2E8u: goto label_15d2e8;
            case 0x15D2ECu: goto label_15d2ec;
            case 0x15D2F0u: goto label_15d2f0;
            case 0x15D2F4u: goto label_15d2f4;
            case 0x15D2F8u: goto label_15d2f8;
            case 0x15D2FCu: goto label_15d2fc;
            case 0x15D300u: goto label_15d300;
            case 0x15D304u: goto label_15d304;
            case 0x15D308u: goto label_15d308;
            case 0x15D30Cu: goto label_15d30c;
            case 0x15D310u: goto label_15d310;
            case 0x15D314u: goto label_15d314;
            case 0x15D318u: goto label_15d318;
            case 0x15D31Cu: goto label_15d31c;
            case 0x15D320u: goto label_15d320;
            case 0x15D324u: goto label_15d324;
            case 0x15D328u: goto label_15d328;
            case 0x15D32Cu: goto label_15d32c;
            case 0x15D330u: goto label_15d330;
            case 0x15D334u: goto label_15d334;
            case 0x15D338u: goto label_15d338;
            case 0x15D33Cu: goto label_15d33c;
            case 0x15D340u: goto label_15d340;
            case 0x15D344u: goto label_15d344;
            case 0x15D348u: goto label_15d348;
            case 0x15D34Cu: goto label_15d34c;
            case 0x15D350u: goto label_15d350;
            case 0x15D354u: goto label_15d354;
            case 0x15D358u: goto label_15d358;
            case 0x15D35Cu: goto label_15d35c;
            case 0x15D360u: goto label_15d360;
            case 0x15D364u: goto label_15d364;
            case 0x15D368u: goto label_15d368;
            case 0x15D36Cu: goto label_15d36c;
            case 0x15D370u: goto label_15d370;
            case 0x15D374u: goto label_15d374;
            case 0x15D378u: goto label_15d378;
            case 0x15D37Cu: goto label_15d37c;
            case 0x15D380u: goto label_15d380;
            case 0x15D384u: goto label_15d384;
            case 0x15D388u: goto label_15d388;
            case 0x15D38Cu: goto label_15d38c;
            case 0x15D390u: goto label_15d390;
            case 0x15D394u: goto label_15d394;
            case 0x15D398u: goto label_15d398;
            case 0x15D39Cu: goto label_15d39c;
            case 0x15D3A0u: goto label_15d3a0;
            case 0x15D3A4u: goto label_15d3a4;
            case 0x15D3A8u: goto label_15d3a8;
            case 0x15D3ACu: goto label_15d3ac;
            case 0x15D3B0u: goto label_15d3b0;
            case 0x15D3B4u: goto label_15d3b4;
            case 0x15D3B8u: goto label_15d3b8;
            case 0x15D3BCu: goto label_15d3bc;
            case 0x15D3C0u: goto label_15d3c0;
            case 0x15D3C4u: goto label_15d3c4;
            case 0x15D3C8u: goto label_15d3c8;
            case 0x15D3CCu: goto label_15d3cc;
            case 0x15D3D0u: goto label_15d3d0;
            case 0x15D3D4u: goto label_15d3d4;
            case 0x15D3D8u: goto label_15d3d8;
            case 0x15D3DCu: goto label_15d3dc;
            case 0x15D3E0u: goto label_15d3e0;
            case 0x15D3E4u: goto label_15d3e4;
            case 0x15D3E8u: goto label_15d3e8;
            case 0x15D3ECu: goto label_15d3ec;
            case 0x15D3F0u: goto label_15d3f0;
            case 0x15D3F4u: goto label_15d3f4;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D3FCu: goto label_15d3fc;
            case 0x15D400u: goto label_15d400;
            case 0x15D404u: goto label_15d404;
            case 0x15D408u: goto label_15d408;
            case 0x15D40Cu: goto label_15d40c;
            case 0x15D410u: goto label_15d410;
            case 0x15D414u: goto label_15d414;
            case 0x15D418u: goto label_15d418;
            case 0x15D41Cu: goto label_15d41c;
            case 0x15D420u: goto label_15d420;
            case 0x15D424u: goto label_15d424;
            case 0x15D428u: goto label_15d428;
            case 0x15D42Cu: goto label_15d42c;
            case 0x15D430u: goto label_15d430;
            case 0x15D434u: goto label_15d434;
            case 0x15D438u: goto label_15d438;
            case 0x15D43Cu: goto label_15d43c;
            case 0x15D440u: goto label_15d440;
            case 0x15D444u: goto label_15d444;
            case 0x15D448u: goto label_15d448;
            case 0x15D44Cu: goto label_15d44c;
            case 0x15D450u: goto label_15d450;
            case 0x15D454u: goto label_15d454;
            case 0x15D458u: goto label_15d458;
            case 0x15D45Cu: goto label_15d45c;
            case 0x15D460u: goto label_15d460;
            case 0x15D464u: goto label_15d464;
            case 0x15D468u: goto label_15d468;
            case 0x15D46Cu: goto label_15d46c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D26Cu; }
            if (ctx->pc != 0x15D26Cu) { return; }
        }
    }
    ctx->pc = 0x15D26Cu;
label_15d26c:
    // 0x15d26c: 0x8e040040
    ctx->pc = 0x15d26cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_15d270:
    // 0x15d270: 0x10800003
label_15d274:
    if (ctx->pc == 0x15D274u) {
        ctx->pc = 0x15D278u;
        goto label_15d278;
    }
    ctx->pc = 0x15D270u;
    {
        const bool branch_taken_0x15d270 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d270) {
            ctx->pc = 0x15D280u;
            goto label_15d280;
        }
    }
    ctx->pc = 0x15D278u;
label_15d278:
    // 0x15d278: 0xc057288
label_15d27c:
    if (ctx->pc == 0x15D27Cu) {
        ctx->pc = 0x15D280u;
        goto label_15d280;
    }
    ctx->pc = 0x15D278u;
    SET_GPR_U32(ctx, 31, 0x15D280u);
    ctx->pc = 0x15CA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA20_0x15ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D280u; }
    }
    if (ctx->pc != 0x15D280u) { return; }
    ctx->pc = 0x15D280u;
label_15d280:
    // 0x15d280: 0xc058cdc
label_15d284:
    if (ctx->pc == 0x15D284u) {
        ctx->pc = 0x15D284u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 492));
        ctx->pc = 0x15D288u;
        goto label_15d288;
    }
    ctx->pc = 0x15D280u;
    SET_GPR_U32(ctx, 31, 0x15D288u);
    ctx->pc = 0x15D284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 492));
    ctx->pc = 0x163370u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163370_0x163370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D288u; }
    }
    if (ctx->pc != 0x15D288u) { return; }
    ctx->pc = 0x15D288u;
label_15d288:
    // 0x15d288: 0xc0575d0
label_15d28c:
    if (ctx->pc == 0x15D28Cu) {
        ctx->pc = 0x15D28Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D290u;
        goto label_15d290;
    }
    ctx->pc = 0x15D288u;
    SET_GPR_U32(ctx, 31, 0x15D290u);
    ctx->pc = 0x15D28Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D740_0x15d740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D290u; }
    }
    if (ctx->pc != 0x15D290u) { return; }
    ctx->pc = 0x15D290u;
label_15d290:
    // 0x15d290: 0xc0575f0
label_15d294:
    if (ctx->pc == 0x15D294u) {
        ctx->pc = 0x15D294u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D298u;
        goto label_15d298;
    }
    ctx->pc = 0x15D290u;
    SET_GPR_U32(ctx, 31, 0x15D298u);
    ctx->pc = 0x15D294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D7C0_0x15d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D298u; }
    }
    if (ctx->pc != 0x15D298u) { return; }
    ctx->pc = 0x15D298u;
label_15d298:
    // 0x15d298: 0x10400003
label_15d29c:
    if (ctx->pc == 0x15D29Cu) {
        ctx->pc = 0x15D29Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        ctx->pc = 0x15D2A0u;
        goto label_15d2a0;
    }
    ctx->pc = 0x15D298u;
    {
        const bool branch_taken_0x15d298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D29Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x15d298) {
            ctx->pc = 0x15D2A8u;
            goto label_15d2a8;
        }
    }
    ctx->pc = 0x15D2A0u;
label_15d2a0:
    // 0x15d2a0: 0xc058dd4
label_15d2a4:
    if (ctx->pc == 0x15D2A4u) {
        ctx->pc = 0x15D2A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962008));
        ctx->pc = 0x15D2A8u;
        goto label_15d2a8;
    }
    ctx->pc = 0x15D2A0u;
    SET_GPR_U32(ctx, 31, 0x15D2A8u);
    ctx->pc = 0x15D2A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962008));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2A8u; }
    }
    if (ctx->pc != 0x15D2A8u) { return; }
    ctx->pc = 0x15D2A8u;
label_15d2a8:
    // 0x15d2a8: 0x200202d
    ctx->pc = 0x15d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d2ac:
    // 0x15d2ac: 0x282d
    ctx->pc = 0x15d2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d2b0:
    // 0x15d2b0: 0xc041f1a
label_15d2b4:
    if (ctx->pc == 0x15D2B4u) {
        ctx->pc = 0x15D2B4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 528));
        ctx->pc = 0x15D2B8u;
        goto label_15d2b8;
    }
    ctx->pc = 0x15D2B0u;
    SET_GPR_U32(ctx, 31, 0x15D2B8u);
    ctx->pc = 0x15D2B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2B8u; }
    }
    if (ctx->pc != 0x15D2B8u) { return; }
    ctx->pc = 0x15D2B8u;
label_15d2b8:
    // 0x15d2b8: 0xae000004
    ctx->pc = 0x15d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15d2bc:
    // 0x15d2bc: 0x3c020023
    ctx->pc = 0x15d2bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_15d2c0:
    // 0x15d2c0: 0x2442dce8
    ctx->pc = 0x15d2c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958312));
label_15d2c4:
    // 0x15d2c4: 0xae020000
    ctx->pc = 0x15d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_15d2c8:
    // 0x15d2c8: 0xdfb00000
    ctx->pc = 0x15d2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d2cc:
    // 0x15d2cc: 0xdfbf0008
    ctx->pc = 0x15d2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15d2d0:
    // 0x15d2d0: 0x3e00008
label_15d2d4:
    if (ctx->pc == 0x15D2D4u) {
        ctx->pc = 0x15D2D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x15D2D8u;
        goto label_15d2d8;
    }
    ctx->pc = 0x15D2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D2D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1D0u: goto label_15d1d0;
            case 0x15D1D4u: goto label_15d1d4;
            case 0x15D1D8u: goto label_15d1d8;
            case 0x15D1DCu: goto label_15d1dc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1E8u: goto label_15d1e8;
            case 0x15D1ECu: goto label_15d1ec;
            case 0x15D1F0u: goto label_15d1f0;
            case 0x15D1F4u: goto label_15d1f4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D1FCu: goto label_15d1fc;
            case 0x15D200u: goto label_15d200;
            case 0x15D204u: goto label_15d204;
            case 0x15D208u: goto label_15d208;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D210u: goto label_15d210;
            case 0x15D214u: goto label_15d214;
            case 0x15D218u: goto label_15d218;
            case 0x15D21Cu: goto label_15d21c;
            case 0x15D220u: goto label_15d220;
            case 0x15D224u: goto label_15d224;
            case 0x15D228u: goto label_15d228;
            case 0x15D22Cu: goto label_15d22c;
            case 0x15D230u: goto label_15d230;
            case 0x15D234u: goto label_15d234;
            case 0x15D238u: goto label_15d238;
            case 0x15D23Cu: goto label_15d23c;
            case 0x15D240u: goto label_15d240;
            case 0x15D244u: goto label_15d244;
            case 0x15D248u: goto label_15d248;
            case 0x15D24Cu: goto label_15d24c;
            case 0x15D250u: goto label_15d250;
            case 0x15D254u: goto label_15d254;
            case 0x15D258u: goto label_15d258;
            case 0x15D25Cu: goto label_15d25c;
            case 0x15D260u: goto label_15d260;
            case 0x15D264u: goto label_15d264;
            case 0x15D268u: goto label_15d268;
            case 0x15D26Cu: goto label_15d26c;
            case 0x15D270u: goto label_15d270;
            case 0x15D274u: goto label_15d274;
            case 0x15D278u: goto label_15d278;
            case 0x15D27Cu: goto label_15d27c;
            case 0x15D280u: goto label_15d280;
            case 0x15D284u: goto label_15d284;
            case 0x15D288u: goto label_15d288;
            case 0x15D28Cu: goto label_15d28c;
            case 0x15D290u: goto label_15d290;
            case 0x15D294u: goto label_15d294;
            case 0x15D298u: goto label_15d298;
            case 0x15D29Cu: goto label_15d29c;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D2A4u: goto label_15d2a4;
            case 0x15D2A8u: goto label_15d2a8;
            case 0x15D2ACu: goto label_15d2ac;
            case 0x15D2B0u: goto label_15d2b0;
            case 0x15D2B4u: goto label_15d2b4;
            case 0x15D2B8u: goto label_15d2b8;
            case 0x15D2BCu: goto label_15d2bc;
            case 0x15D2C0u: goto label_15d2c0;
            case 0x15D2C4u: goto label_15d2c4;
            case 0x15D2C8u: goto label_15d2c8;
            case 0x15D2CCu: goto label_15d2cc;
            case 0x15D2D0u: goto label_15d2d0;
            case 0x15D2D4u: goto label_15d2d4;
            case 0x15D2D8u: goto label_15d2d8;
            case 0x15D2DCu: goto label_15d2dc;
            case 0x15D2E0u: goto label_15d2e0;
            case 0x15D2E4u: goto label_15d2e4;
            case 0x15D2E8u: goto label_15d2e8;
            case 0x15D2ECu: goto label_15d2ec;
            case 0x15D2F0u: goto label_15d2f0;
            case 0x15D2F4u: goto label_15d2f4;
            case 0x15D2F8u: goto label_15d2f8;
            case 0x15D2FCu: goto label_15d2fc;
            case 0x15D300u: goto label_15d300;
            case 0x15D304u: goto label_15d304;
            case 0x15D308u: goto label_15d308;
            case 0x15D30Cu: goto label_15d30c;
            case 0x15D310u: goto label_15d310;
            case 0x15D314u: goto label_15d314;
            case 0x15D318u: goto label_15d318;
            case 0x15D31Cu: goto label_15d31c;
            case 0x15D320u: goto label_15d320;
            case 0x15D324u: goto label_15d324;
            case 0x15D328u: goto label_15d328;
            case 0x15D32Cu: goto label_15d32c;
            case 0x15D330u: goto label_15d330;
            case 0x15D334u: goto label_15d334;
            case 0x15D338u: goto label_15d338;
            case 0x15D33Cu: goto label_15d33c;
            case 0x15D340u: goto label_15d340;
            case 0x15D344u: goto label_15d344;
            case 0x15D348u: goto label_15d348;
            case 0x15D34Cu: goto label_15d34c;
            case 0x15D350u: goto label_15d350;
            case 0x15D354u: goto label_15d354;
            case 0x15D358u: goto label_15d358;
            case 0x15D35Cu: goto label_15d35c;
            case 0x15D360u: goto label_15d360;
            case 0x15D364u: goto label_15d364;
            case 0x15D368u: goto label_15d368;
            case 0x15D36Cu: goto label_15d36c;
            case 0x15D370u: goto label_15d370;
            case 0x15D374u: goto label_15d374;
            case 0x15D378u: goto label_15d378;
            case 0x15D37Cu: goto label_15d37c;
            case 0x15D380u: goto label_15d380;
            case 0x15D384u: goto label_15d384;
            case 0x15D388u: goto label_15d388;
            case 0x15D38Cu: goto label_15d38c;
            case 0x15D390u: goto label_15d390;
            case 0x15D394u: goto label_15d394;
            case 0x15D398u: goto label_15d398;
            case 0x15D39Cu: goto label_15d39c;
            case 0x15D3A0u: goto label_15d3a0;
            case 0x15D3A4u: goto label_15d3a4;
            case 0x15D3A8u: goto label_15d3a8;
            case 0x15D3ACu: goto label_15d3ac;
            case 0x15D3B0u: goto label_15d3b0;
            case 0x15D3B4u: goto label_15d3b4;
            case 0x15D3B8u: goto label_15d3b8;
            case 0x15D3BCu: goto label_15d3bc;
            case 0x15D3C0u: goto label_15d3c0;
            case 0x15D3C4u: goto label_15d3c4;
            case 0x15D3C8u: goto label_15d3c8;
            case 0x15D3CCu: goto label_15d3cc;
            case 0x15D3D0u: goto label_15d3d0;
            case 0x15D3D4u: goto label_15d3d4;
            case 0x15D3D8u: goto label_15d3d8;
            case 0x15D3DCu: goto label_15d3dc;
            case 0x15D3E0u: goto label_15d3e0;
            case 0x15D3E4u: goto label_15d3e4;
            case 0x15D3E8u: goto label_15d3e8;
            case 0x15D3ECu: goto label_15d3ec;
            case 0x15D3F0u: goto label_15d3f0;
            case 0x15D3F4u: goto label_15d3f4;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D3FCu: goto label_15d3fc;
            case 0x15D400u: goto label_15d400;
            case 0x15D404u: goto label_15d404;
            case 0x15D408u: goto label_15d408;
            case 0x15D40Cu: goto label_15d40c;
            case 0x15D410u: goto label_15d410;
            case 0x15D414u: goto label_15d414;
            case 0x15D418u: goto label_15d418;
            case 0x15D41Cu: goto label_15d41c;
            case 0x15D420u: goto label_15d420;
            case 0x15D424u: goto label_15d424;
            case 0x15D428u: goto label_15d428;
            case 0x15D42Cu: goto label_15d42c;
            case 0x15D430u: goto label_15d430;
            case 0x15D434u: goto label_15d434;
            case 0x15D438u: goto label_15d438;
            case 0x15D43Cu: goto label_15d43c;
            case 0x15D440u: goto label_15d440;
            case 0x15D444u: goto label_15d444;
            case 0x15D448u: goto label_15d448;
            case 0x15D44Cu: goto label_15d44c;
            case 0x15D450u: goto label_15d450;
            case 0x15D454u: goto label_15d454;
            case 0x15D458u: goto label_15d458;
            case 0x15D45Cu: goto label_15d45c;
            case 0x15D460u: goto label_15d460;
            case 0x15D464u: goto label_15d464;
            case 0x15D468u: goto label_15d468;
            case 0x15D46Cu: goto label_15d46c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D2D8u;
label_15d2d8:
    // 0x15d2d8: 0x27bdff70
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_15d2dc:
    // 0x15d2dc: 0xffb10068
    ctx->pc = 0x15d2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_15d2e0:
    // 0x15d2e0: 0x80882d
    ctx->pc = 0x15d2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d2e4:
    // 0x15d2e4: 0xffb00060
    ctx->pc = 0x15d2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_15d2e8:
    // 0x15d2e8: 0xa0802d
    ctx->pc = 0x15d2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15d2ec:
    // 0x15d2ec: 0xffb20070
    ctx->pc = 0x15d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_15d2f0:
    // 0x15d2f0: 0xc0902d
    ctx->pc = 0x15d2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15d2f4:
    // 0x15d2f4: 0xffb30078
    ctx->pc = 0x15d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_15d2f8:
    // 0x15d2f8: 0x12200003
label_15d2fc:
    if (ctx->pc == 0x15D2FCu) {
        ctx->pc = 0x15D2FCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->pc = 0x15D300u;
        goto label_15d300;
    }
    ctx->pc = 0x15D2F8u;
    {
        const bool branch_taken_0x15d2f8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D2FCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        if (branch_taken_0x15d2f8) {
            ctx->pc = 0x15D308u;
            goto label_15d308;
        }
    }
    ctx->pc = 0x15D300u;
label_15d300:
    // 0x15d300: 0x16400007
label_15d304:
    if (ctx->pc == 0x15D304u) {
        ctx->pc = 0x15D308u;
        goto label_15d308;
    }
    ctx->pc = 0x15D300u;
    {
        const bool branch_taken_0x15d300 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x15d300) {
            ctx->pc = 0x15D320u;
            goto label_15d320;
        }
    }
    ctx->pc = 0x15D308u;
label_15d308:
    // 0x15d308: 0x3c040024
    ctx->pc = 0x15d308u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_15d30c:
    // 0x15d30c: 0xc058dd4
label_15d310:
    if (ctx->pc == 0x15D310u) {
        ctx->pc = 0x15D310u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962032));
        ctx->pc = 0x15D314u;
        goto label_15d314;
    }
    ctx->pc = 0x15D30Cu;
    SET_GPR_U32(ctx, 31, 0x15D314u);
    ctx->pc = 0x15D310u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962032));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D314u; }
    }
    if (ctx->pc != 0x15D314u) { return; }
    ctx->pc = 0x15D314u;
label_15d314:
    // 0x15d314: 0x1000004f
label_15d318:
    if (ctx->pc == 0x15D318u) {
        ctx->pc = 0x15D318u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x15D31Cu;
        goto label_15d31c;
    }
    ctx->pc = 0x15D314u;
    {
        const bool branch_taken_0x15d314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D318u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x15d314) {
            ctx->pc = 0x15D454u;
            goto label_15d454;
        }
    }
    ctx->pc = 0x15D31Cu;
label_15d31c:
    // 0x15d31c: 0x0
    ctx->pc = 0x15d31cu;
    // NOP
label_15d320:
    // 0x15d320: 0x5e000007
label_15d324:
    if (ctx->pc == 0x15D324u) {
        ctx->pc = 0x15D324u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D328u;
        goto label_15d328;
    }
    ctx->pc = 0x15D320u;
    {
        const bool branch_taken_0x15d320 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x15d320) {
            ctx->pc = 0x15D324u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x15D340u;
            goto label_15d340;
        }
    }
    ctx->pc = 0x15D328u;
label_15d328:
    // 0x15d328: 0x3c040024
    ctx->pc = 0x15d328u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_15d32c:
    // 0x15d32c: 0xc058dd4
label_15d330:
    if (ctx->pc == 0x15D330u) {
        ctx->pc = 0x15D330u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962072));
        ctx->pc = 0x15D334u;
        goto label_15d334;
    }
    ctx->pc = 0x15D32Cu;
    SET_GPR_U32(ctx, 31, 0x15D334u);
    ctx->pc = 0x15D330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962072));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D334u; }
    }
    if (ctx->pc != 0x15D334u) { return; }
    ctx->pc = 0x15D334u;
label_15d334:
    // 0x15d334: 0x10000047
label_15d338:
    if (ctx->pc == 0x15D338u) {
        ctx->pc = 0x15D338u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x15D33Cu;
        goto label_15d33c;
    }
    ctx->pc = 0x15D334u;
    {
        const bool branch_taken_0x15d334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D338u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x15d334) {
            ctx->pc = 0x15D454u;
            goto label_15d454;
        }
    }
    ctx->pc = 0x15D33Cu;
label_15d33c:
    // 0x15d33c: 0x0
    ctx->pc = 0x15d33cu;
    // NOP
label_15d340:
    // 0x15d340: 0x282d
    ctx->pc = 0x15d340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d344:
    // 0x15d344: 0xc041f1a
label_15d348:
    if (ctx->pc == 0x15D348u) {
        ctx->pc = 0x15D348u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x15D34Cu;
        goto label_15d34c;
    }
    ctx->pc = 0x15D344u;
    SET_GPR_U32(ctx, 31, 0x15D34Cu);
    ctx->pc = 0x15D348u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D34Cu; }
    }
    if (ctx->pc != 0x15D34Cu) { return; }
    ctx->pc = 0x15D34Cu;
label_15d34c:
    // 0x15d34c: 0x220202d
    ctx->pc = 0x15d34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d350:
    // 0x15d350: 0x27b30020
    ctx->pc = 0x15d350u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 32));
label_15d354:
    // 0x15d354: 0x200282d
    ctx->pc = 0x15d354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d358:
    // 0x15d358: 0xc05a07a
label_15d35c:
    if (ctx->pc == 0x15D35Cu) {
        ctx->pc = 0x15D35Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D360u;
        goto label_15d360;
    }
    ctx->pc = 0x15D358u;
    SET_GPR_U32(ctx, 31, 0x15D360u);
    ctx->pc = 0x15D35Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1681E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001681E8_0x1681e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D360u; }
    }
    if (ctx->pc != 0x15D360u) { return; }
    ctx->pc = 0x15D360u;
label_15d360:
    // 0x15d360: 0x83a20020
    ctx->pc = 0x15d360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_15d364:
    // 0x15d364: 0x10400003
label_15d368:
    if (ctx->pc == 0x15D368u) {
        ctx->pc = 0x15D368u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
        ctx->pc = 0x15D36Cu;
        goto label_15d36c;
    }
    ctx->pc = 0x15D364u;
    {
        const bool branch_taken_0x15d364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D368u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
        if (branch_taken_0x15d364) {
            ctx->pc = 0x15D374u;
            goto label_15d374;
        }
    }
    ctx->pc = 0x15D36Cu;
label_15d36c:
    // 0x15d36c: 0x14400014
label_15d370:
    if (ctx->pc == 0x15D370u) {
        ctx->pc = 0x15D374u;
        goto label_15d374;
    }
    ctx->pc = 0x15D36Cu;
    {
        const bool branch_taken_0x15d36c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15d36c) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D374u;
label_15d374:
    // 0x15d374: 0x6ba20007
    ctx->pc = 0x15d374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d378:
    // 0x15d378: 0x6fa20000
    ctx->pc = 0x15d378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d37c:
    // 0x15d37c: 0x6ba3000f
    ctx->pc = 0x15d37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d380:
    // 0x15d380: 0x6fa30008
    ctx->pc = 0x15d380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d384:
    // 0x15d384: 0x6ba40017
    ctx->pc = 0x15d384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d388:
    // 0x15d388: 0x6fa40010
    ctx->pc = 0x15d388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d38c:
    // 0x15d38c: 0x6ba5001f
    ctx->pc = 0x15d38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d390:
    // 0x15d390: 0x6fa50018
    ctx->pc = 0x15d390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d394:
    // 0x15d394: 0xb2420007
    ctx->pc = 0x15d394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d398:
    // 0x15d398: 0xb6420000
    ctx->pc = 0x15d398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d39c:
    // 0x15d39c: 0xb243000f
    ctx->pc = 0x15d39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d3a0:
    // 0x15d3a0: 0xb6430008
    ctx->pc = 0x15d3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d3a4:
    // 0x15d3a4: 0xb2440017
    ctx->pc = 0x15d3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d3a8:
    // 0x15d3a8: 0xb6440010
    ctx->pc = 0x15d3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d3ac:
    // 0x15d3ac: 0xb245001f
    ctx->pc = 0x15d3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d3b0:
    // 0x15d3b0: 0xb6450018
    ctx->pc = 0x15d3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d3b4:
    // 0x15d3b4: 0x10000026
label_15d3b8:
    if (ctx->pc == 0x15D3B8u) {
        ctx->pc = 0x15D3B8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x15D3BCu;
        goto label_15d3bc;
    }
    ctx->pc = 0x15D3B4u;
    {
        const bool branch_taken_0x15d3b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D3B8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x15d3b4) {
            ctx->pc = 0x15D450u;
            goto label_15d450;
        }
    }
    ctx->pc = 0x15D3BCu;
label_15d3bc:
    // 0x15d3bc: 0x0
    ctx->pc = 0x15d3bcu;
    // NOP
label_15d3c0:
    // 0x15d3c0: 0xc05751c
label_15d3c4:
    if (ctx->pc == 0x15D3C4u) {
        ctx->pc = 0x15D3C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D3C8u;
        goto label_15d3c8;
    }
    ctx->pc = 0x15D3C0u;
    SET_GPR_U32(ctx, 31, 0x15D3C8u);
    ctx->pc = 0x15D3C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D470_0x15d470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3C8u; }
    }
    if (ctx->pc != 0x15D3C8u) { return; }
    ctx->pc = 0x15D3C8u;
label_15d3c8:
    // 0x15d3c8: 0x220202d
    ctx->pc = 0x15d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d3cc:
    // 0x15d3cc: 0x8fa30038
    ctx->pc = 0x15d3ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_15d3d0:
    // 0x15d3d0: 0x200282d
    ctx->pc = 0x15d3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d3d4:
    // 0x15d3d4: 0x8faa0034
    ctx->pc = 0x15d3d4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_15d3d8:
    // 0x15d3d8: 0x3a0302d
    ctx->pc = 0x15d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15d3dc:
    // 0x15d3dc: 0x8fa70040
    ctx->pc = 0x15d3dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15d3e0:
    // 0x15d3e0: 0x8fa8004c
    ctx->pc = 0x15d3e0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_15d3e4:
    // 0x15d3e4: 0x83a90048
    ctx->pc = 0x15d3e4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
label_15d3e8:
    // 0x15d3e8: 0xafa3000c
    ctx->pc = 0x15d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_15d3ec:
    // 0x15d3ec: 0xafa20004
    ctx->pc = 0x15d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_15d3f0:
    // 0x15d3f0: 0xafaa0008
    ctx->pc = 0x15d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_15d3f4:
    // 0x15d3f4: 0xafa70010
    ctx->pc = 0x15d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_15d3f8:
    // 0x15d3f8: 0xafa80014
    ctx->pc = 0x15d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_15d3fc:
    // 0x15d3fc: 0xc057968
label_15d400:
    if (ctx->pc == 0x15D400u) {
        ctx->pc = 0x15D400u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
        ctx->pc = 0x15D404u;
        goto label_15d404;
    }
    ctx->pc = 0x15D3FCu;
    SET_GPR_U32(ctx, 31, 0x15D404u);
    ctx->pc = 0x15D400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    ctx->pc = 0x15E5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E5A0_0x15e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D404u; }
    }
    if (ctx->pc != 0x15D404u) { return; }
    ctx->pc = 0x15D404u;
label_15d404:
    // 0x15d404: 0xc057530
label_15d408:
    if (ctx->pc == 0x15D408u) {
        ctx->pc = 0x15D408u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15D40Cu;
        goto label_15d40c;
    }
    ctx->pc = 0x15D404u;
    SET_GPR_U32(ctx, 31, 0x15D40Cu);
    ctx->pc = 0x15D408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D4C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4C0_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D40Cu; }
    }
    if (ctx->pc != 0x15D40Cu) { return; }
    ctx->pc = 0x15D40Cu;
label_15d40c:
    // 0x15d40c: 0xafa20000
    ctx->pc = 0x15d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_15d410:
    // 0x15d410: 0x6ba20007
    ctx->pc = 0x15d410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d414:
    // 0x15d414: 0x6fa20000
    ctx->pc = 0x15d414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d418:
    // 0x15d418: 0x6ba3000f
    ctx->pc = 0x15d418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d41c:
    // 0x15d41c: 0x6fa30008
    ctx->pc = 0x15d41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d420:
    // 0x15d420: 0x6ba40017
    ctx->pc = 0x15d420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d424:
    // 0x15d424: 0x6fa40010
    ctx->pc = 0x15d424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d428:
    // 0x15d428: 0x6ba5001f
    ctx->pc = 0x15d428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_15d42c:
    // 0x15d42c: 0x6fa50018
    ctx->pc = 0x15d42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_15d430:
    // 0x15d430: 0xb2420007
    ctx->pc = 0x15d430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d434:
    // 0x15d434: 0xb6420000
    ctx->pc = 0x15d434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d438:
    // 0x15d438: 0xb243000f
    ctx->pc = 0x15d438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d43c:
    // 0x15d43c: 0xb6430008
    ctx->pc = 0x15d43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d440:
    // 0x15d440: 0xb2440017
    ctx->pc = 0x15d440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d444:
    // 0x15d444: 0xb6440010
    ctx->pc = 0x15d444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d448:
    // 0x15d448: 0xb245001f
    ctx->pc = 0x15d448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d44c:
    // 0x15d44c: 0xb6450018
    ctx->pc = 0x15d44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15d450:
    // 0x15d450: 0xdfb00060
    ctx->pc = 0x15d450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15d454:
    // 0x15d454: 0xdfb10068
    ctx->pc = 0x15d454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_15d458:
    // 0x15d458: 0xdfb20070
    ctx->pc = 0x15d458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15d45c:
    // 0x15d45c: 0xdfb30078
    ctx->pc = 0x15d45cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_15d460:
    // 0x15d460: 0xdfbf0080
    ctx->pc = 0x15d460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_15d464:
    // 0x15d464: 0x3e00008
label_15d468:
    if (ctx->pc == 0x15D468u) {
        ctx->pc = 0x15D468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15D46Cu;
        goto label_15d46c;
    }
    ctx->pc = 0x15D464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1D0u: goto label_15d1d0;
            case 0x15D1D4u: goto label_15d1d4;
            case 0x15D1D8u: goto label_15d1d8;
            case 0x15D1DCu: goto label_15d1dc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1E8u: goto label_15d1e8;
            case 0x15D1ECu: goto label_15d1ec;
            case 0x15D1F0u: goto label_15d1f0;
            case 0x15D1F4u: goto label_15d1f4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D1FCu: goto label_15d1fc;
            case 0x15D200u: goto label_15d200;
            case 0x15D204u: goto label_15d204;
            case 0x15D208u: goto label_15d208;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D210u: goto label_15d210;
            case 0x15D214u: goto label_15d214;
            case 0x15D218u: goto label_15d218;
            case 0x15D21Cu: goto label_15d21c;
            case 0x15D220u: goto label_15d220;
            case 0x15D224u: goto label_15d224;
            case 0x15D228u: goto label_15d228;
            case 0x15D22Cu: goto label_15d22c;
            case 0x15D230u: goto label_15d230;
            case 0x15D234u: goto label_15d234;
            case 0x15D238u: goto label_15d238;
            case 0x15D23Cu: goto label_15d23c;
            case 0x15D240u: goto label_15d240;
            case 0x15D244u: goto label_15d244;
            case 0x15D248u: goto label_15d248;
            case 0x15D24Cu: goto label_15d24c;
            case 0x15D250u: goto label_15d250;
            case 0x15D254u: goto label_15d254;
            case 0x15D258u: goto label_15d258;
            case 0x15D25Cu: goto label_15d25c;
            case 0x15D260u: goto label_15d260;
            case 0x15D264u: goto label_15d264;
            case 0x15D268u: goto label_15d268;
            case 0x15D26Cu: goto label_15d26c;
            case 0x15D270u: goto label_15d270;
            case 0x15D274u: goto label_15d274;
            case 0x15D278u: goto label_15d278;
            case 0x15D27Cu: goto label_15d27c;
            case 0x15D280u: goto label_15d280;
            case 0x15D284u: goto label_15d284;
            case 0x15D288u: goto label_15d288;
            case 0x15D28Cu: goto label_15d28c;
            case 0x15D290u: goto label_15d290;
            case 0x15D294u: goto label_15d294;
            case 0x15D298u: goto label_15d298;
            case 0x15D29Cu: goto label_15d29c;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D2A4u: goto label_15d2a4;
            case 0x15D2A8u: goto label_15d2a8;
            case 0x15D2ACu: goto label_15d2ac;
            case 0x15D2B0u: goto label_15d2b0;
            case 0x15D2B4u: goto label_15d2b4;
            case 0x15D2B8u: goto label_15d2b8;
            case 0x15D2BCu: goto label_15d2bc;
            case 0x15D2C0u: goto label_15d2c0;
            case 0x15D2C4u: goto label_15d2c4;
            case 0x15D2C8u: goto label_15d2c8;
            case 0x15D2CCu: goto label_15d2cc;
            case 0x15D2D0u: goto label_15d2d0;
            case 0x15D2D4u: goto label_15d2d4;
            case 0x15D2D8u: goto label_15d2d8;
            case 0x15D2DCu: goto label_15d2dc;
            case 0x15D2E0u: goto label_15d2e0;
            case 0x15D2E4u: goto label_15d2e4;
            case 0x15D2E8u: goto label_15d2e8;
            case 0x15D2ECu: goto label_15d2ec;
            case 0x15D2F0u: goto label_15d2f0;
            case 0x15D2F4u: goto label_15d2f4;
            case 0x15D2F8u: goto label_15d2f8;
            case 0x15D2FCu: goto label_15d2fc;
            case 0x15D300u: goto label_15d300;
            case 0x15D304u: goto label_15d304;
            case 0x15D308u: goto label_15d308;
            case 0x15D30Cu: goto label_15d30c;
            case 0x15D310u: goto label_15d310;
            case 0x15D314u: goto label_15d314;
            case 0x15D318u: goto label_15d318;
            case 0x15D31Cu: goto label_15d31c;
            case 0x15D320u: goto label_15d320;
            case 0x15D324u: goto label_15d324;
            case 0x15D328u: goto label_15d328;
            case 0x15D32Cu: goto label_15d32c;
            case 0x15D330u: goto label_15d330;
            case 0x15D334u: goto label_15d334;
            case 0x15D338u: goto label_15d338;
            case 0x15D33Cu: goto label_15d33c;
            case 0x15D340u: goto label_15d340;
            case 0x15D344u: goto label_15d344;
            case 0x15D348u: goto label_15d348;
            case 0x15D34Cu: goto label_15d34c;
            case 0x15D350u: goto label_15d350;
            case 0x15D354u: goto label_15d354;
            case 0x15D358u: goto label_15d358;
            case 0x15D35Cu: goto label_15d35c;
            case 0x15D360u: goto label_15d360;
            case 0x15D364u: goto label_15d364;
            case 0x15D368u: goto label_15d368;
            case 0x15D36Cu: goto label_15d36c;
            case 0x15D370u: goto label_15d370;
            case 0x15D374u: goto label_15d374;
            case 0x15D378u: goto label_15d378;
            case 0x15D37Cu: goto label_15d37c;
            case 0x15D380u: goto label_15d380;
            case 0x15D384u: goto label_15d384;
            case 0x15D388u: goto label_15d388;
            case 0x15D38Cu: goto label_15d38c;
            case 0x15D390u: goto label_15d390;
            case 0x15D394u: goto label_15d394;
            case 0x15D398u: goto label_15d398;
            case 0x15D39Cu: goto label_15d39c;
            case 0x15D3A0u: goto label_15d3a0;
            case 0x15D3A4u: goto label_15d3a4;
            case 0x15D3A8u: goto label_15d3a8;
            case 0x15D3ACu: goto label_15d3ac;
            case 0x15D3B0u: goto label_15d3b0;
            case 0x15D3B4u: goto label_15d3b4;
            case 0x15D3B8u: goto label_15d3b8;
            case 0x15D3BCu: goto label_15d3bc;
            case 0x15D3C0u: goto label_15d3c0;
            case 0x15D3C4u: goto label_15d3c4;
            case 0x15D3C8u: goto label_15d3c8;
            case 0x15D3CCu: goto label_15d3cc;
            case 0x15D3D0u: goto label_15d3d0;
            case 0x15D3D4u: goto label_15d3d4;
            case 0x15D3D8u: goto label_15d3d8;
            case 0x15D3DCu: goto label_15d3dc;
            case 0x15D3E0u: goto label_15d3e0;
            case 0x15D3E4u: goto label_15d3e4;
            case 0x15D3E8u: goto label_15d3e8;
            case 0x15D3ECu: goto label_15d3ec;
            case 0x15D3F0u: goto label_15d3f0;
            case 0x15D3F4u: goto label_15d3f4;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D3FCu: goto label_15d3fc;
            case 0x15D400u: goto label_15d400;
            case 0x15D404u: goto label_15d404;
            case 0x15D408u: goto label_15d408;
            case 0x15D40Cu: goto label_15d40c;
            case 0x15D410u: goto label_15d410;
            case 0x15D414u: goto label_15d414;
            case 0x15D418u: goto label_15d418;
            case 0x15D41Cu: goto label_15d41c;
            case 0x15D420u: goto label_15d420;
            case 0x15D424u: goto label_15d424;
            case 0x15D428u: goto label_15d428;
            case 0x15D42Cu: goto label_15d42c;
            case 0x15D430u: goto label_15d430;
            case 0x15D434u: goto label_15d434;
            case 0x15D438u: goto label_15d438;
            case 0x15D43Cu: goto label_15d43c;
            case 0x15D440u: goto label_15d440;
            case 0x15D444u: goto label_15d444;
            case 0x15D448u: goto label_15d448;
            case 0x15D44Cu: goto label_15d44c;
            case 0x15D450u: goto label_15d450;
            case 0x15D454u: goto label_15d454;
            case 0x15D458u: goto label_15d458;
            case 0x15D45Cu: goto label_15d45c;
            case 0x15D460u: goto label_15d460;
            case 0x15D464u: goto label_15d464;
            case 0x15D468u: goto label_15d468;
            case 0x15D46Cu: goto label_15d46c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D46Cu;
label_15d46c:
    // 0x15d46c: 0x0
    ctx->pc = 0x15d46cu;
    // NOP
}
