#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E230
// Address: 0x16e230 - 0x16e360
void sub_0016E230_0x16e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e230u;

    // 0x16e230: 0x27bdffb0
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e234: 0x102d
    ctx->pc = 0x16e234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e238: 0xffb00010
    ctx->pc = 0x16e238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16e23c: 0x80802d
    ctx->pc = 0x16e23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e240: 0xffb10018
    ctx->pc = 0x16e240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16e244: 0xa0882d
    ctx->pc = 0x16e244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e248: 0xffb20020
    ctx->pc = 0x16e248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16e24c: 0x2612090c
    ctx->pc = 0x16e24cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2316));
    // 0x16e250: 0xffb40030
    ctx->pc = 0x16e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16e254: 0xe0a02d
    ctx->pc = 0x16e254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e258: 0xffb50038
    ctx->pc = 0x16e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16e25c: 0xc0a82d
    ctx->pc = 0x16e25cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e260: 0xffb30028
    ctx->pc = 0x16e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16e264: 0x220202d
    ctx->pc = 0x16e264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e268: 0xffbf0040
    ctx->pc = 0x16e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16e26c: 0x3a0282d
    ctx->pc = 0x16e26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e270: 0x8e430010
    ctx->pc = 0x16e270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x16e274: 0x14600030
    ctx->pc = 0x16E274u;
    {
        const bool branch_taken_0x16e274 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E278u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 6960)));
        if (branch_taken_0x16e274) {
            ctx->pc = 0x16E338u;
            goto label_16e338;
        }
    }
    ctx->pc = 0x16E27Cu;
    // 0x16e27c: 0xc0564c6
    ctx->pc = 0x16E27Cu;
    SET_GPR_U32(ctx, 31, 0x16E284u);
    ctx->pc = 0x159318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159318_0x159318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E284u; }
    }
    if (ctx->pc != 0x16E284u) { return; }
    ctx->pc = 0x16E284u;
    // 0x16e284: 0x10400008
    ctx->pc = 0x16E284u;
    {
        const bool branch_taken_0x16e284 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E288u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e284) {
            ctx->pc = 0x16E2A8u;
            goto label_16e2a8;
        }
    }
    ctx->pc = 0x16E28Cu;
    // 0x16e28c: 0x3c05ff00
    ctx->pc = 0x16e28cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16e290: 0x200202d
    ctx->pc = 0x16e290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e294: 0xc05a704
    ctx->pc = 0x16E294u;
    SET_GPR_U32(ctx, 31, 0x16E29Cu);
    ctx->pc = 0x16E298u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3862));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E29Cu; }
    }
    if (ctx->pc != 0x16E29Cu) { return; }
    ctx->pc = 0x16E29Cu;
    // 0x16e29c: 0x10000027
    ctx->pc = 0x16E29Cu;
    {
        const bool branch_taken_0x16e29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E2A0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16e29c) {
            ctx->pc = 0x16E33Cu;
            goto label_16e33c;
        }
    }
    ctx->pc = 0x16E2A4u;
    // 0x16e2a4: 0x0
    ctx->pc = 0x16e2a4u;
    // NOP
label_16e2a8:
    // 0x16e2a8: 0x27a50004
    ctx->pc = 0x16e2a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
    // 0x16e2ac: 0x27a60008
    ctx->pc = 0x16e2acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    // 0x16e2b0: 0xc0564de
    ctx->pc = 0x16E2B0u;
    SET_GPR_U32(ctx, 31, 0x16E2B8u);
    ctx->pc = 0x16E2B4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x159378u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159378_0x159378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2B8u; }
    }
    if (ctx->pc != 0x16E2B8u) { return; }
    ctx->pc = 0x16E2B8u;
    // 0x16e2b8: 0x200202d
    ctx->pc = 0x16e2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2bc: 0xc05d58a
    ctx->pc = 0x16E2BCu;
    SET_GPR_U32(ctx, 31, 0x16E2C4u);
    ctx->pc = 0x16E2C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2C4u; }
    }
    if (ctx->pc != 0x16E2C4u) { return; }
    ctx->pc = 0x16E2C4u;
    // 0x16e2c4: 0x200202d
    ctx->pc = 0x16e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2c8: 0x14400003
    ctx->pc = 0x16E2C8u;
    {
        const bool branch_taken_0x16e2c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E2CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16e2c8) {
            ctx->pc = 0x16E2D8u;
            goto label_16e2d8;
        }
    }
    ctx->pc = 0x16E2D0u;
    // 0x16e2d0: 0x1000000d
    ctx->pc = 0x16E2D0u;
    {
        const bool branch_taken_0x16e2d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E2D4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 0));
        if (branch_taken_0x16e2d0) {
            ctx->pc = 0x16E308u;
            goto label_16e308;
        }
    }
    ctx->pc = 0x16E2D8u;
label_16e2d8:
    // 0x16e2d8: 0xc059d42
    ctx->pc = 0x16E2D8u;
    SET_GPR_U32(ctx, 31, 0x16E2E0u);
    ctx->pc = 0x167508u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00167508_0x167508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E0u; }
    }
    if (ctx->pc != 0x16E2E0u) { return; }
    ctx->pc = 0x16E2E0u;
    // 0x16e2e0: 0x8fa3000c
    ctx->pc = 0x16e2e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16e2e4: 0x40202d
    ctx->pc = 0x16e2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2e8: 0x2402ffff
    ctx->pc = 0x16e2e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e2ec: 0x14620004
    ctx->pc = 0x16E2ECu;
    {
        const bool branch_taken_0x16e2ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16E2F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
        if (branch_taken_0x16e2ec) {
            ctx->pc = 0x16E300u;
            goto label_16e300;
        }
    }
    ctx->pc = 0x16E2F4u;
    // 0x16e2f4: 0x8fa30004
    ctx->pc = 0x16e2f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16e2f8: 0xafa3000c
    ctx->pc = 0x16e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x16e2fc: 0x64102a
    ctx->pc = 0x16e2fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_16e300:
    // 0x16e300: 0x82180a
    ctx->pc = 0x16e300u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x16e304: 0xae6300e8
    ctx->pc = 0x16e304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 3));
label_16e308:
    // 0x16e308: 0x8fa50000
    ctx->pc = 0x16e308u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e30c: 0x280302d
    ctx->pc = 0x16e30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e310: 0xc05b8d8
    ctx->pc = 0x16E310u;
    SET_GPR_U32(ctx, 31, 0x16E318u);
    ctx->pc = 0x16E314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E360_0x16e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E318u; }
    }
    if (ctx->pc != 0x16E318u) { return; }
    ctx->pc = 0x16E318u;
    // 0x16e318: 0x240202d
    ctx->pc = 0x16e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e31c: 0x8fa50000
    ctx->pc = 0x16e31cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e320: 0x2a0302d
    ctx->pc = 0x16e320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e324: 0xc05b91e
    ctx->pc = 0x16E324u;
    SET_GPR_U32(ctx, 31, 0x16E32Cu);
    ctx->pc = 0x16E328u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x16E478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E478_0x16e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E32Cu; }
    }
    if (ctx->pc != 0x16E32Cu) { return; }
    ctx->pc = 0x16E32Cu;
    // 0x16e32c: 0x200202d
    ctx->pc = 0x16e32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e330: 0xc05b92c
    ctx->pc = 0x16E330u;
    SET_GPR_U32(ctx, 31, 0x16E338u);
    ctx->pc = 0x16E334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E4B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E4B0_0x16e4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E338u; }
    }
    if (ctx->pc != 0x16E338u) { return; }
    ctx->pc = 0x16E338u;
label_16e338:
    // 0x16e338: 0xdfb00010
    ctx->pc = 0x16e338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e33c:
    // 0x16e33c: 0xdfb10018
    ctx->pc = 0x16e33cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e340: 0xdfb20020
    ctx->pc = 0x16e340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e344: 0xdfb30028
    ctx->pc = 0x16e344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16e348: 0xdfb40030
    ctx->pc = 0x16e348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e34c: 0xdfb50038
    ctx->pc = 0x16e34cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e350: 0xdfbf0040
    ctx->pc = 0x16e350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e354: 0x3e00008
    ctx->pc = 0x16E354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E358u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E300u: goto label_16e300;
            case 0x16E308u: goto label_16e308;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E35Cu;
    // 0x16e35c: 0x0
    ctx->pc = 0x16e35cu;
    // NOP
}
