#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00372210
// Address: 0x372210 - 0x3724f0
void sub_00372210_0x372210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x372210u;

    // 0x372210: 0x27bdff20
    ctx->pc = 0x372210u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x372214: 0xffbf0090
    ctx->pc = 0x372214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x372218: 0x7fbe0080
    ctx->pc = 0x372218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37221c: 0x7fb70070
    ctx->pc = 0x37221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x372220: 0x7fb60060
    ctx->pc = 0x372220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x372224: 0x7fb50050
    ctx->pc = 0x372224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x372228: 0x7fb40040
    ctx->pc = 0x372228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37222c: 0x7fb30030
    ctx->pc = 0x37222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x372230: 0x7fb20020
    ctx->pc = 0x372230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372234: 0x7fb10010
    ctx->pc = 0x372234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x372238: 0x7fb00000
    ctx->pc = 0x372238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37223c: 0x80830001
    ctx->pc = 0x37223cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x372240: 0x10600087
    ctx->pc = 0x372240u;
    {
        const bool branch_taken_0x372240 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x372244u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x372240) {
            ctx->pc = 0x372460u;
            goto label_372460;
        }
    }
    ctx->pc = 0x372248u;
    // 0x372248: 0xc0dd46c
    ctx->pc = 0x372248u;
    SET_GPR_U32(ctx, 31, 0x372250u);
    ctx->pc = 0x37224Cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 96));
    ctx->pc = 0x3751B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003751B0_0x3751b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372250u; }
    }
    if (ctx->pc != 0x372250u) { return; }
    ctx->pc = 0x372250u;
    // 0x372250: 0x882d
    ctx->pc = 0x372250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372254: 0x1000007e
    ctx->pc = 0x372254u;
    {
        const bool branch_taken_0x372254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372258u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 29), 160));
        if (branch_taken_0x372254) {
            ctx->pc = 0x372450u;
            goto label_372450;
        }
    }
    ctx->pc = 0x37225Cu;
label_37225c:
    // 0x37225c: 0x111040
    ctx->pc = 0x37225cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x372260: 0x3c03004a
    ctx->pc = 0x372260u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x372264: 0x512021
    ctx->pc = 0x372264u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x372268: 0x2463eef0
    ctx->pc = 0x372268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962928));
    // 0x37226c: 0x711021
    ctx->pc = 0x37226cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x372270: 0x42080
    ctx->pc = 0x372270u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x372274: 0x90452b38
    ctx->pc = 0x372274u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11064)));
    // 0x372278: 0x641021
    ctx->pc = 0x372278u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37227c: 0xc1acb88
    ctx->pc = 0x37227Cu;
    SET_GPR_U32(ctx, 31, 0x372284u);
    ctx->pc = 0x372280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 11088));
    ctx->pc = 0x6B2E20u;
    {
        auto targetFn = runtime->lookupFunction(0x6B2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372284u; }
        if (ctx->pc != 0x372284u) { return; }
    }
    ctx->pc = 0x372284u;
    // 0x372284: 0x2711821
    ctx->pc = 0x372284u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x372288: 0x802d
    ctx->pc = 0x372288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37228c: 0x24762b20
    ctx->pc = 0x37228cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 3), 11040));
    // 0x372290: 0x1000006a
    ctx->pc = 0x372290u;
    {
        const bool branch_taken_0x372290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x372294u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x372290) {
            ctx->pc = 0x37243Cu;
            goto label_37243c;
        }
    }
    ctx->pc = 0x372298u;
label_372298:
    // 0x372298: 0x92c30000
    ctx->pc = 0x372298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37229c: 0x70a821
    ctx->pc = 0x37229cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3722a0: 0x2751821
    ctx->pc = 0x3722a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x3722a4: 0x906408a0
    ctx->pc = 0x3722a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2208)));
    // 0x3722a8: 0x30830001
    ctx->pc = 0x3722a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 1));
    // 0x3722ac: 0x10600062
    ctx->pc = 0x3722ACu;
    {
        const bool branch_taken_0x3722ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x3722B0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 128));
        if (branch_taken_0x3722ac) {
            ctx->pc = 0x372438u;
            goto label_372438;
        }
    }
    ctx->pc = 0x3722B4u;
    // 0x3722b4: 0x14600060
    ctx->pc = 0x3722B4u;
    {
        const bool branch_taken_0x3722b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x3722b4) {
            ctx->pc = 0x372438u;
            goto label_372438;
        }
    }
    ctx->pc = 0x3722BCu;
    // 0x3722bc: 0x8e440808
    ctx->pc = 0x3722bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x3722c0: 0x1518c0
    ctx->pc = 0x3722c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 3));
    // 0x3722c4: 0x752821
    ctx->pc = 0x3722c4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3722c8: 0x52840
    ctx->pc = 0x3722c8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x3722cc: 0x2403ffff
    ctx->pc = 0x3722ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3722d0: 0xb52821
    ctx->pc = 0x3722d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x3722d4: 0x5a0c0
    ctx->pc = 0x3722d4u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 5), 3));
    // 0x3722d8: 0x942021
    ctx->pc = 0x3722d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3722dc: 0x8c840000
    ctx->pc = 0x3722dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3722e0: 0x10830055
    ctx->pc = 0x3722E0u;
    {
        const bool branch_taken_0x3722e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x3722e0) {
            ctx->pc = 0x372438u;
            goto label_372438;
        }
    }
    ctx->pc = 0x3722E8u;
    // 0x3722e8: 0x10800053
    ctx->pc = 0x3722E8u;
    {
        const bool branch_taken_0x3722e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x3722e8) {
            ctx->pc = 0x372438u;
            goto label_372438;
        }
    }
    ctx->pc = 0x3722F0u;
    // 0x3722f0: 0x151143
    ctx->pc = 0x3722f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 5));
    // 0x3722f4: 0x32a3001f
    ctx->pc = 0x3722f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 21), 31));
    // 0x3722f8: 0x22080
    ctx->pc = 0x3722f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    // 0x3722fc: 0x24020001
    ctx->pc = 0x3722fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x372300: 0x621804
    ctx->pc = 0x372300u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x372304: 0x2641021
    ctx->pc = 0x372304u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x372308: 0x8c422c70
    ctx->pc = 0x372308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11376)));
    // 0x37230c: 0x431024
    ctx->pc = 0x37230cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372310: 0x10400012
    ctx->pc = 0x372310u;
    {
        const bool branch_taken_0x372310 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x372314u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 6));
        if (branch_taken_0x372310) {
            ctx->pc = 0x37235Cu;
            goto label_37235c;
        }
    }
    ctx->pc = 0x372318u;
    // 0x372318: 0x151080
    ctx->pc = 0x372318u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x37231c: 0x2621021
    ctx->pc = 0x37231cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x372320: 0x8c462c80
    ctx->pc = 0x372320u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 11392)));
    // 0x372324: 0x10c0000c
    ctx->pc = 0x372324u;
    {
        const bool branch_taken_0x372324 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x372328u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
        if (branch_taken_0x372324) {
            ctx->pc = 0x372358u;
            goto label_372358;
        }
    }
    ctx->pc = 0x37232Cu;
    // 0x37232c: 0x24040008
    ctx->pc = 0x37232cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_372330:
    // 0x372330: 0x8cc30000
    ctx->pc = 0x372330u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x372334: 0x2484ffff
    ctx->pc = 0x372334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x372338: 0x8cc20004
    ctx->pc = 0x372338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x37233c: 0xaca30000
    ctx->pc = 0x37233cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x372340: 0x24c60008
    ctx->pc = 0x372340u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x372344: 0xaca20004
    ctx->pc = 0x372344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x372348: 0x1c80fff9
    ctx->pc = 0x372348u;
    {
        const bool branch_taken_0x372348 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x37234Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x372348) {
            ctx->pc = 0x372330u;
            goto label_372330;
        }
    }
    ctx->pc = 0x372350u;
    // 0x372350: 0x1000000e
    ctx->pc = 0x372350u;
    {
        const bool branch_taken_0x372350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x372350) {
            ctx->pc = 0x37238Cu;
            goto label_37238c;
        }
    }
    ctx->pc = 0x372358u;
label_372358:
    // 0x372358: 0x151180
    ctx->pc = 0x372358u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 6));
label_37235c:
    // 0x37235c: 0x27a500a0
    ctx->pc = 0x37235cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x372360: 0x2621021
    ctx->pc = 0x372360u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x372364: 0x24040008
    ctx->pc = 0x372364u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x372368: 0x24460b20
    ctx->pc = 0x372368u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 2848));
label_37236c:
    // 0x37236c: 0x8cc30000
    ctx->pc = 0x37236cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x372370: 0x2484ffff
    ctx->pc = 0x372370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x372374: 0x8cc20004
    ctx->pc = 0x372374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x372378: 0xaca30000
    ctx->pc = 0x372378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x37237c: 0x24c60008
    ctx->pc = 0x37237cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x372380: 0xaca20004
    ctx->pc = 0x372380u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x372384: 0x1c80fff9
    ctx->pc = 0x372384u;
    {
        const bool branch_taken_0x372384 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x372388u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x372384) {
            ctx->pc = 0x37236Cu;
            goto label_37236c;
        }
    }
    ctx->pc = 0x37238Cu;
label_37238c:
    // 0x37238c: 0x3c05004a
    ctx->pc = 0x37238cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)74 << 16));
    // 0x372390: 0x27a400a0
    ctx->pc = 0x372390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x372394: 0xc064028
    ctx->pc = 0x372394u;
    SET_GPR_U32(ctx, 31, 0x37239Cu);
    ctx->pc = 0x372398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965104));
    ctx->pc = 0x1900A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1900A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37239Cu; }
        if (ctx->pc != 0x37239Cu) { return; }
    }
    ctx->pc = 0x37239Cu;
    // 0x37239c: 0x2404001a
    ctx->pc = 0x37239cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    // 0x3723a0: 0xc06bde0
    ctx->pc = 0x3723A0u;
    SET_GPR_U32(ctx, 31, 0x3723A8u);
    ctx->pc = 0x3723A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3723A8u; }
        if (ctx->pc != 0x3723A8u) { return; }
    }
    ctx->pc = 0x3723A8u;
    // 0x3723a8: 0x8e420808
    ctx->pc = 0x3723a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x3723ac: 0x542021
    ctx->pc = 0x3723acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3723b0: 0x90820088
    ctx->pc = 0x3723b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3723b4: 0x10400004
    ctx->pc = 0x3723B4u;
    {
        const bool branch_taken_0x3723b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3723B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x3723b4) {
            ctx->pc = 0x3723C8u;
            goto label_3723c8;
        }
    }
    ctx->pc = 0x3723BCu;
    // 0x3723bc: 0x2621021
    ctx->pc = 0x3723bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3723c0: 0xc0dd2c8
    ctx->pc = 0x3723C0u;
    SET_GPR_U32(ctx, 31, 0x3723C8u);
    ctx->pc = 0x3723C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2336));
    ctx->pc = 0x374B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00374B20_0x374b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3723C8u; }
    }
    if (ctx->pc != 0x3723C8u) { return; }
    ctx->pc = 0x3723C8u;
label_3723c8:
    // 0x3723c8: 0x10000012
    ctx->pc = 0x3723C8u;
    {
        const bool branch_taken_0x3723c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3723CCu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3723c8) {
            ctx->pc = 0x372414u;
            goto label_372414;
        }
    }
    ctx->pc = 0x3723D0u;
label_3723d0:
    // 0x3723d0: 0x26a3003a
    ctx->pc = 0x3723d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 58));
    // 0x3723d4: 0x821021
    ctx->pc = 0x3723d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3723d8: 0x306400ff
    ctx->pc = 0x3723d8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 255));
    // 0x3723dc: 0x8c430008
    ctx->pc = 0x3723dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3723e0: 0x31840
    ctx->pc = 0x3723e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x3723e4: 0x3c02004f
    ctx->pc = 0x3723e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)79 << 16));
    // 0x3723e8: 0x2431821
    ctx->pc = 0x3723e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3723ec: 0x2442dd90
    ctx->pc = 0x3723ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x3723f0: 0x94650008
    ctx->pc = 0x3723f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3723f4: 0x518c0
    ctx->pc = 0x3723f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x3723f8: 0x651821
    ctx->pc = 0x3723f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3723fc: 0x31840
    ctx->pc = 0x3723fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x372400: 0x651821
    ctx->pc = 0x372400u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x372404: 0x31880
    ctx->pc = 0x372404u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x372408: 0xc06bde0
    ctx->pc = 0x372408u;
    SET_GPR_U32(ctx, 31, 0x372410u);
    ctx->pc = 0x37240Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372410u; }
        if (ctx->pc != 0x372410u) { return; }
    }
    ctx->pc = 0x372410u;
    // 0x372410: 0x26b50001
    ctx->pc = 0x372410u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_372414:
    // 0x372414: 0x8e420808
    ctx->pc = 0x372414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2056)));
    // 0x372418: 0x2822021
    ctx->pc = 0x372418u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37241c: 0x8c820004
    ctx->pc = 0x37241cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x372420: 0x2a2102a
    ctx->pc = 0x372420u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 2)));
    // 0x372424: 0x1440ffea
    ctx->pc = 0x372424u;
    {
        const bool branch_taken_0x372424 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x372428u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
        if (branch_taken_0x372424) {
            ctx->pc = 0x3723D0u;
            goto label_3723d0;
        }
    }
    ctx->pc = 0x37242Cu;
    // 0x37242c: 0x8c840000
    ctx->pc = 0x37242cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x372430: 0xc06305c
    ctx->pc = 0x372430u;
    SET_GPR_U32(ctx, 31, 0x372438u);
    ctx->pc = 0x372434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C170u;
    {
        auto targetFn = runtime->lookupFunction(0x18C170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x372438u; }
        if (ctx->pc != 0x372438u) { return; }
    }
    ctx->pc = 0x372438u;
label_372438:
    // 0x372438: 0x26100001
    ctx->pc = 0x372438u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_37243c:
    // 0x37243c: 0x92e30000
    ctx->pc = 0x37243cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x372440: 0x203182a
    ctx->pc = 0x372440u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x372444: 0x1460ff94
    ctx->pc = 0x372444u;
    {
        const bool branch_taken_0x372444 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x372444) {
            ctx->pc = 0x372298u;
            goto label_372298;
        }
    }
    ctx->pc = 0x37244Cu;
    // 0x37244c: 0x26310001
    ctx->pc = 0x37244cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_372450:
    // 0x372450: 0x92630003
    ctx->pc = 0x372450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x372454: 0x223182a
    ctx->pc = 0x372454u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x372458: 0x1460ff80
    ctx->pc = 0x372458u;
    {
        const bool branch_taken_0x372458 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x372458) {
            ctx->pc = 0x37225Cu;
            goto label_37225c;
        }
    }
    ctx->pc = 0x372460u;
label_372460:
    // 0x372460: 0xdfbf0090
    ctx->pc = 0x372460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x372464: 0x7bbe0080
    ctx->pc = 0x372464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x372468: 0x7bb70070
    ctx->pc = 0x372468u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37246c: 0x7bb60060
    ctx->pc = 0x37246cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x372470: 0x7bb50050
    ctx->pc = 0x372470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x372474: 0x7bb40040
    ctx->pc = 0x372474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372478: 0x7bb30030
    ctx->pc = 0x372478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37247c: 0x7bb20020
    ctx->pc = 0x37247cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372480: 0x7bb10010
    ctx->pc = 0x372480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372484: 0x7bb00000
    ctx->pc = 0x372484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372488: 0x3e00008
    ctx->pc = 0x372488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37248Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37225Cu: goto label_37225c;
            case 0x372298u: goto label_372298;
            case 0x372330u: goto label_372330;
            case 0x372358u: goto label_372358;
            case 0x37235Cu: goto label_37235c;
            case 0x37236Cu: goto label_37236c;
            case 0x37238Cu: goto label_37238c;
            case 0x3723C8u: goto label_3723c8;
            case 0x3723D0u: goto label_3723d0;
            case 0x372414u: goto label_372414;
            case 0x372438u: goto label_372438;
            case 0x37243Cu: goto label_37243c;
            case 0x372450u: goto label_372450;
            case 0x372460u: goto label_372460;
            case 0x3724B0u: goto label_3724b0;
            case 0x3724D0u: goto label_3724d0;
            case 0x3724D4u: goto label_3724d4;
            case 0x3724E4u: goto label_3724e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x372490u;
    // 0x372490: 0x42c3c
    ctx->pc = 0x372490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x372494: 0x3c01003e
    ctx->pc = 0x372494u;
    SET_GPR_U32(ctx, 1, ((uint32_t)62 << 16));
    // 0x372498: 0x8424ba50
    ctx->pc = 0x372498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294949456)));
    // 0x37249c: 0x3c03003d
    ctx->pc = 0x37249cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x3724a0: 0x52c3f
    ctx->pc = 0x3724a0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3724a4: 0x302d
    ctx->pc = 0x3724a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3724a8: 0x1000000a
    ctx->pc = 0x3724A8u;
    {
        const bool branch_taken_0x3724a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3724ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294939184));
        if (branch_taken_0x3724a8) {
            ctx->pc = 0x3724D4u;
            goto label_3724d4;
        }
    }
    ctx->pc = 0x3724B0u;
label_3724b0:
    // 0x3724b0: 0x3c010001
    ctx->pc = 0x3724b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x3724b4: 0x621021
    ctx->pc = 0x3724b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3724b8: 0x410821
    ctx->pc = 0x3724b8u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x3724bc: 0x84222824
    ctx->pc = 0x3724bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 10276)));
    // 0x3724c0: 0x14a20003
    ctx->pc = 0x3724C0u;
    {
        const bool branch_taken_0x3724c0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x3724C4u;
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
        if (branch_taken_0x3724c0) {
            ctx->pc = 0x3724D0u;
            goto label_3724d0;
        }
    }
    ctx->pc = 0x3724C8u;
    // 0x3724c8: 0x10000006
    ctx->pc = 0x3724C8u;
    {
        const bool branch_taken_0x3724c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3724CCu;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        if (branch_taken_0x3724c8) {
            ctx->pc = 0x3724E4u;
            goto label_3724e4;
        }
    }
    ctx->pc = 0x3724D0u;
label_3724d0:
    // 0x3724d0: 0x24c60001
    ctx->pc = 0x3724d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_3724d4:
    // 0x3724d4: 0xc4102a
    ctx->pc = 0x3724d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
    // 0x3724d8: 0x1440fff5
    ctx->pc = 0x3724D8u;
    {
        const bool branch_taken_0x3724d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3724DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x3724d8) {
            ctx->pc = 0x3724B0u;
            goto label_3724b0;
        }
    }
    ctx->pc = 0x3724E0u;
    // 0x3724e0: 0x2402ffff
    ctx->pc = 0x3724e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_3724e4:
    // 0x3724e4: 0x3e00008
    ctx->pc = 0x3724E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37225Cu: goto label_37225c;
            case 0x372298u: goto label_372298;
            case 0x372330u: goto label_372330;
            case 0x372358u: goto label_372358;
            case 0x37235Cu: goto label_37235c;
            case 0x37236Cu: goto label_37236c;
            case 0x37238Cu: goto label_37238c;
            case 0x3723C8u: goto label_3723c8;
            case 0x3723D0u: goto label_3723d0;
            case 0x372414u: goto label_372414;
            case 0x372438u: goto label_372438;
            case 0x37243Cu: goto label_37243c;
            case 0x372450u: goto label_372450;
            case 0x372460u: goto label_372460;
            case 0x3724B0u: goto label_3724b0;
            case 0x3724D0u: goto label_3724d0;
            case 0x3724D4u: goto label_3724d4;
            case 0x3724E4u: goto label_3724e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3724ECu;
    // 0x3724ec: 0x0
    ctx->pc = 0x3724ecu;
    // NOP
}
