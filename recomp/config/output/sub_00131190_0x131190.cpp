#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00131190
// Address: 0x131190 - 0x131338
void sub_00131190_0x131190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131190u;

    // 0x131190: 0x27bdfff0
    ctx->pc = 0x131190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131194: 0x80102d
    ctx->pc = 0x131194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131198: 0xffb00000
    ctx->pc = 0x131198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13119c: 0x802d
    ctx->pc = 0x13119cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311a0: 0x10400009
    ctx->pc = 0x1311A0u;
    {
        const bool branch_taken_0x1311a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1311A4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x1311a0) {
            ctx->pc = 0x1311C8u;
            goto label_1311c8;
        }
    }
    ctx->pc = 0x1311A8u;
    // 0x1311a8: 0x8c470004
    ctx->pc = 0x1311a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1311ac: 0x8c440000
    ctx->pc = 0x1311acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1311b0: 0x8c450008
    ctx->pc = 0x1311b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1311b4: 0xc04eaac
    ctx->pc = 0x1311B4u;
    SET_GPR_U32(ctx, 31, 0x1311BCu);
    ctx->pc = 0x1311B8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->pc = 0x13AAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AAB0_0x13aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1311BCu; }
    }
    if (ctx->pc != 0x1311BCu) { return; }
    ctx->pc = 0x1311BCu;
    // 0x1311bc: 0x10000006
    ctx->pc = 0x1311BCu;
    {
        const bool branch_taken_0x1311bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1311C0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1311bc) {
            ctx->pc = 0x1311D8u;
            goto label_1311d8;
        }
    }
    ctx->pc = 0x1311C4u;
    // 0x1311c4: 0x0
    ctx->pc = 0x1311c4u;
    // NOP
label_1311c8:
    // 0x1311c8: 0x282d
    ctx->pc = 0x1311c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311cc: 0x302d
    ctx->pc = 0x1311ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311d0: 0xc04eaac
    ctx->pc = 0x1311D0u;
    SET_GPR_U32(ctx, 31, 0x1311D8u);
    ctx->pc = 0x1311D4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AAB0_0x13aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1311D8u; }
    }
    if (ctx->pc != 0x1311D8u) { return; }
    ctx->pc = 0x1311D8u;
label_1311d8:
    // 0x1311d8: 0x200102d
    ctx->pc = 0x1311d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311dc: 0xdfb00000
    ctx->pc = 0x1311dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1311e0: 0xdfbf0008
    ctx->pc = 0x1311e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1311e4: 0x3e00008
    ctx->pc = 0x1311E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1311E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1311C8u: goto label_1311c8;
            case 0x1311D8u: goto label_1311d8;
            case 0x131238u: goto label_131238;
            case 0x131240u: goto label_131240;
            case 0x131298u: goto label_131298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1311ECu;
    // 0x1311ec: 0x0
    ctx->pc = 0x1311ecu;
    // NOP
    // 0x1311f0: 0x27bdfff0
    ctx->pc = 0x1311f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1311f4: 0x80102d
    ctx->pc = 0x1311f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311f8: 0xffb00000
    ctx->pc = 0x1311f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1311fc: 0x802d
    ctx->pc = 0x1311fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131200: 0xa0182d
    ctx->pc = 0x131200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131204: 0x282d
    ctx->pc = 0x131204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131208: 0xc0382d
    ctx->pc = 0x131208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13120c: 0x302d
    ctx->pc = 0x13120cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131210: 0x10400009
    ctx->pc = 0x131210u;
    {
        const bool branch_taken_0x131210 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x131214u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x131210) {
            ctx->pc = 0x131238u;
            goto label_131238;
        }
    }
    ctx->pc = 0x131218u;
    // 0x131218: 0xe0282d
    ctx->pc = 0x131218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13121c: 0x8c47000c
    ctx->pc = 0x13121cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x131220: 0x8c480004
    ctx->pc = 0x131220u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131224: 0x60202d
    ctx->pc = 0x131224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131228: 0xc04eb18
    ctx->pc = 0x131228u;
    SET_GPR_U32(ctx, 31, 0x131230u);
    ctx->pc = 0x13122Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x13AC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AC60_0x13ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131230u; }
    }
    if (ctx->pc != 0x131230u) { return; }
    ctx->pc = 0x131230u;
    // 0x131230: 0x10000003
    ctx->pc = 0x131230u;
    {
        const bool branch_taken_0x131230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x131234u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x131230) {
            ctx->pc = 0x131240u;
            goto label_131240;
        }
    }
    ctx->pc = 0x131238u;
label_131238:
    // 0x131238: 0xc04eaac
    ctx->pc = 0x131238u;
    SET_GPR_U32(ctx, 31, 0x131240u);
    ctx->pc = 0x13123Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AAB0_0x13aab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131240u; }
    }
    if (ctx->pc != 0x131240u) { return; }
    ctx->pc = 0x131240u;
label_131240:
    // 0x131240: 0x200102d
    ctx->pc = 0x131240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131244: 0xdfb00000
    ctx->pc = 0x131244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131248: 0xdfbf0008
    ctx->pc = 0x131248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13124c: 0x3e00008
    ctx->pc = 0x13124Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1311C8u: goto label_1311c8;
            case 0x1311D8u: goto label_1311d8;
            case 0x131238u: goto label_131238;
            case 0x131240u: goto label_131240;
            case 0x131298u: goto label_131298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131254u;
    // 0x131254: 0x0
    ctx->pc = 0x131254u;
    // NOP
    // 0x131258: 0x27bdfff0
    ctx->pc = 0x131258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13125c: 0xffb00000
    ctx->pc = 0x13125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131260: 0x80802d
    ctx->pc = 0x131260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131264: 0x1200000c
    ctx->pc = 0x131264u;
    {
        const bool branch_taken_0x131264 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x131268u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        if (branch_taken_0x131264) {
            ctx->pc = 0x131298u;
            goto label_131298;
        }
    }
    ctx->pc = 0x13126Cu;
    // 0x13126c: 0x8e040008
    ctx->pc = 0x13126cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x131270: 0x8e05000c
    ctx->pc = 0x131270u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x131274: 0x8e060010
    ctx->pc = 0x131274u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x131278: 0xc04eb7c
    ctx->pc = 0x131278u;
    SET_GPR_U32(ctx, 31, 0x131280u);
    ctx->pc = 0x13127Cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x13ADF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131280u; }
    }
    if (ctx->pc != 0x131280u) { return; }
    ctx->pc = 0x131280u;
    // 0x131280: 0x8e040000
    ctx->pc = 0x131280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131284: 0xdfbf0008
    ctx->pc = 0x131284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131288: 0xdfb00000
    ctx->pc = 0x131288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13128c: 0x804eb84
    ctx->pc = 0x13128Cu;
    ctx->pc = 0x131290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13AE10u;
    sub_0013AE10_0x13ae10(rdram, ctx, runtime); return;
    ctx->pc = 0x131294u;
    // 0x131294: 0x0
    ctx->pc = 0x131294u;
    // NOP
label_131298:
    // 0x131298: 0x282d
    ctx->pc = 0x131298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13129c: 0x302d
    ctx->pc = 0x13129cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312a0: 0xc04eb7c
    ctx->pc = 0x1312A0u;
    SET_GPR_U32(ctx, 31, 0x1312A8u);
    ctx->pc = 0x1312A4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13ADF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013ADF0_0x13adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1312A8u; }
    }
    if (ctx->pc != 0x1312A8u) { return; }
    ctx->pc = 0x1312A8u;
    // 0x1312a8: 0x202d
    ctx->pc = 0x1312a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312ac: 0xdfb00000
    ctx->pc = 0x1312acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1312b0: 0xdfbf0008
    ctx->pc = 0x1312b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1312b4: 0x804eb84
    ctx->pc = 0x1312B4u;
    ctx->pc = 0x1312B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13AE10u;
    sub_0013AE10_0x13ae10(rdram, ctx, runtime); return;
    ctx->pc = 0x1312BCu;
    // 0x1312bc: 0x0
    ctx->pc = 0x1312bcu;
    // NOP
    // 0x1312c0: 0x27bdfff0
    ctx->pc = 0x1312c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1312c4: 0xffbf0000
    ctx->pc = 0x1312c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1312c8: 0xdfbf0000
    ctx->pc = 0x1312c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1312cc: 0x804eb72
    ctx->pc = 0x1312CCu;
    ctx->pc = 0x1312D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13ADC8u;
    entry_13adc8_0x13adf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1312D4u;
    // 0x1312d4: 0x0
    ctx->pc = 0x1312d4u;
    // NOP
    // 0x1312d8: 0x27bdfff0
    ctx->pc = 0x1312d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1312dc: 0xffbf0000
    ctx->pc = 0x1312dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1312e0: 0xdfbf0000
    ctx->pc = 0x1312e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1312e4: 0x804e816
    ctx->pc = 0x1312E4u;
    ctx->pc = 0x1312E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13A058u;
    entry_13a058_0x13a078(rdram, ctx, runtime); return;
    ctx->pc = 0x1312ECu;
    // 0x1312ec: 0x0
    ctx->pc = 0x1312ecu;
    // NOP
    // 0x1312f0: 0x27bdfff0
    ctx->pc = 0x1312f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1312f4: 0xffbf0000
    ctx->pc = 0x1312f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1312f8: 0xdfbf0000
    ctx->pc = 0x1312f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1312fc: 0x804e81e
    ctx->pc = 0x1312FCu;
    ctx->pc = 0x131300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13A078u;
    entry_13a078_0x13a088(rdram, ctx, runtime); return;
    ctx->pc = 0x131304u;
    // 0x131304: 0x0
    ctx->pc = 0x131304u;
    // NOP
    // 0x131308: 0x27bdfff0
    ctx->pc = 0x131308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13130c: 0xffbf0000
    ctx->pc = 0x13130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131310: 0xdfbf0000
    ctx->pc = 0x131310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131314: 0x804ebba
    ctx->pc = 0x131314u;
    ctx->pc = 0x131318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13AEE8u;
    entry_13aee8_0x13af00(rdram, ctx, runtime); return;
    ctx->pc = 0x13131Cu;
    // 0x13131c: 0x0
    ctx->pc = 0x13131cu;
    // NOP
    // 0x131320: 0x27bdfff0
    ctx->pc = 0x131320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131324: 0xa0202d
    ctx->pc = 0x131324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131328: 0xffbf0000
    ctx->pc = 0x131328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13132c: 0xdfbf0000
    ctx->pc = 0x13132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131330: 0x804a034
    ctx->pc = 0x131330u;
    ctx->pc = 0x131334u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1280D0u;
    sub_001280D0_0x1280d0(rdram, ctx, runtime); return;
    ctx->pc = 0x131338u;
}
