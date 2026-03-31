#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001F71F0
// Address: 0x1f71f0 - 0x1f7380
void sub_001F71F0_0x1f71f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1f71f0u;

    // 0x1f71f0: 0x27bdffb0
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f71f4: 0xffbf0040
    ctx->pc = 0x1f71f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f71f8: 0x7fb30030
    ctx->pc = 0x1f71f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f71fc: 0x7fb20020
    ctx->pc = 0x1f71fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f7200: 0x3c130037
    ctx->pc = 0x1f7200u;
    SET_GPR_U32(ctx, 19, ((uint32_t)55 << 16));
    // 0x1f7204: 0x7fb10010
    ctx->pc = 0x1f7204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f7208: 0x2673f080
    ctx->pc = 0x1f7208u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x1f720c: 0x7fb00000
    ctx->pc = 0x1f720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f7210: 0x8e630014
    ctx->pc = 0x1f7210u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1f7214: 0x10600052
    ctx->pc = 0x1F7214u;
    {
        const bool branch_taken_0x1f7214 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F7218u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f7214) {
            ctx->pc = 0x1F7360u;
            goto label_1f7360;
        }
    }
    ctx->pc = 0x1F721Cu;
    // 0x1f721c: 0x3c110036
    ctx->pc = 0x1f721cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    // 0x1f7220: 0x3c050026
    ctx->pc = 0x1f7220u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x1f7224: 0x26317080
    ctx->pc = 0x1f7224u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28800));
    // 0x1f7228: 0x24a59c00
    ctx->pc = 0x1f7228u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294941696));
    // 0x1f722c: 0x8e300008
    ctx->pc = 0x1f722cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f7230: 0x220202d
    ctx->pc = 0x1f7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7234: 0x24060008
    ctx->pc = 0x1f7234u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f7238: 0xc042d10
    ctx->pc = 0x1F7238u;
    SET_GPR_U32(ctx, 31, 0x1F7240u);
    ctx->pc = 0x1F723Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7240u; }
    }
    if (ctx->pc != 0x1F7240u) { return; }
    ctx->pc = 0x1F7240u;
    // 0x1f7240: 0x14400047
    ctx->pc = 0x1F7240u;
    {
        const bool branch_taken_0x1f7240 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f7240) {
            ctx->pc = 0x1F7360u;
            goto label_1f7360;
        }
    }
    ctx->pc = 0x1F7248u;
    // 0x1f7248: 0x1200000d
    ctx->pc = 0x1F7248u;
    {
        const bool branch_taken_0x1f7248 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F724Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f7248) {
            ctx->pc = 0x1F7280u;
            goto label_1f7280;
        }
    }
    ctx->pc = 0x1F7250u;
    // 0x1f7250: 0x3c040031
    ctx->pc = 0x1f7250u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1f7254: 0x260282d
    ctx->pc = 0x1f7254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7258: 0x248465a8
    ctx->pc = 0x1f7258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26024));
    // 0x1f725c: 0xc042d10
    ctx->pc = 0x1F725Cu;
    SET_GPR_U32(ctx, 31, 0x1F7264u);
    ctx->pc = 0x1F7260u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7264u; }
    }
    if (ctx->pc != 0x1F7264u) { return; }
    ctx->pc = 0x1F7264u;
    // 0x1f7264: 0x4410005
    ctx->pc = 0x1F7264u;
    {
        const bool branch_taken_0x1f7264 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7268u;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x1f7264) {
            ctx->pc = 0x1F727Cu;
            goto label_1f727c;
        }
    }
    ctx->pc = 0x1F726Cu;
    // 0x1f726c: 0x260282d
    ctx->pc = 0x1f726cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7270: 0x248465a8
    ctx->pc = 0x1f7270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26024));
    // 0x1f7274: 0xc042d7e
    ctx->pc = 0x1F7274u;
    SET_GPR_U32(ctx, 31, 0x1F727Cu);
    ctx->pc = 0x1F7278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F727Cu; }
    }
    if (ctx->pc != 0x1F727Cu) { return; }
    ctx->pc = 0x1F727Cu;
label_1f727c:
    // 0x1f727c: 0x302d
    ctx->pc = 0x1f727cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7280:
    // 0x1f7280: 0x10000032
    ctx->pc = 0x1F7280u;
    {
        const bool branch_taken_0x1f7280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F7284u;
        SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
        if (branch_taken_0x1f7280) {
            ctx->pc = 0x1F734Cu;
            goto label_1f734c;
        }
    }
    ctx->pc = 0x1F7288u;
label_1f7288:
    // 0x1f7288: 0x8e220000
    ctx->pc = 0x1f7288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f728c: 0x8e270004
    ctx->pc = 0x1f728cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f7290: 0x8e250008
    ctx->pc = 0x1f7290u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f7294: 0x16420020
    ctx->pc = 0x1F7294u;
    {
        const bool branch_taken_0x1f7294 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F7298u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x1f7294) {
            ctx->pc = 0x1F7318u;
            goto label_1f7318;
        }
    }
    ctx->pc = 0x1F729Cu;
    // 0x1f729c: 0xa41024
    ctx->pc = 0x1f729cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f72a0: 0x10400011
    ctx->pc = 0x1F72A0u;
    {
        const bool branch_taken_0x1f72a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F72A4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1f72a0) {
            ctx->pc = 0x1F72E8u;
            goto label_1f72e8;
        }
    }
    ctx->pc = 0x1F72A8u;
    // 0x1f72a8: 0x8e280000
    ctx->pc = 0x1f72a8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f72ac: 0x5187c
    ctx->pc = 0x1f72acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 1));
    // 0x1f72b0: 0x3187e
    ctx->pc = 0x1f72b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1f72b4: 0x282d
    ctx->pc = 0x1f72b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72b8: 0x10000006
    ctx->pc = 0x1F72B8u;
    {
        const bool branch_taken_0x1f72b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F72BCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1f72b8) {
            ctx->pc = 0x1F72D4u;
            goto label_1f72d4;
        }
    }
    ctx->pc = 0x1F72C0u;
label_1f72c0:
    // 0x1f72c0: 0x91020000
    ctx->pc = 0x1f72c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f72c4: 0x24a50001
    ctx->pc = 0x1f72c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f72c8: 0xa0e20000
    ctx->pc = 0x1f72c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f72cc: 0x25080001
    ctx->pc = 0x1f72ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f72d0: 0x24e70001
    ctx->pc = 0x1f72d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1f72d4:
    // 0x1f72d4: 0xa3102a
    ctx->pc = 0x1f72d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1f72d8: 0x1440fff9
    ctx->pc = 0x1F72D8u;
    {
        const bool branch_taken_0x1f72d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f72d8) {
            ctx->pc = 0x1F72C0u;
            goto label_1f72c0;
        }
    }
    ctx->pc = 0x1F72E0u;
    // 0x1f72e0: 0x10000014
    ctx->pc = 0x1F72E0u;
    {
        const bool branch_taken_0x1f72e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F72E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 3));
        if (branch_taken_0x1f72e0) {
            ctx->pc = 0x1F7334u;
            goto label_1f7334;
        }
    }
    ctx->pc = 0x1F72E8u;
label_1f72e8:
    // 0x1f72e8: 0x10000007
    ctx->pc = 0x1F72E8u;
    {
        const bool branch_taken_0x1f72e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F72ECu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
        if (branch_taken_0x1f72e8) {
            ctx->pc = 0x1F7308u;
            goto label_1f7308;
        }
    }
    ctx->pc = 0x1F72F0u;
label_1f72f0:
    // 0x1f72f0: 0x92220000
    ctx->pc = 0x1f72f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f72f4: 0x24630001
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f72f8: 0xa0e20000
    ctx->pc = 0x1f72f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f72fc: 0x26310001
    ctx->pc = 0x1f72fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7300: 0x24e70001
    ctx->pc = 0x1f7300u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f7304: 0x65102a
    ctx->pc = 0x1f7304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
label_1f7308:
    // 0x1f7308: 0x1440fff9
    ctx->pc = 0x1F7308u;
    {
        const bool branch_taken_0x1f7308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f7308) {
            ctx->pc = 0x1F72F0u;
            goto label_1f72f0;
        }
    }
    ctx->pc = 0x1F7310u;
    // 0x1f7310: 0x10000007
    ctx->pc = 0x1F7310u;
    {
        const bool branch_taken_0x1f7310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f7310) {
            ctx->pc = 0x1F7330u;
            goto label_1f7330;
        }
    }
    ctx->pc = 0x1F7318u;
label_1f7318:
    // 0x1f7318: 0xa41024
    ctx->pc = 0x1f7318u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f731c: 0x10400003
    ctx->pc = 0x1F731Cu;
    {
        const bool branch_taken_0x1f731c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f731c) {
            ctx->pc = 0x1F732Cu;
            goto label_1f732c;
        }
    }
    ctx->pc = 0x1F7324u;
    // 0x1f7324: 0x10000002
    ctx->pc = 0x1F7324u;
    {
        const bool branch_taken_0x1f7324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F7328u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1f7324) {
            ctx->pc = 0x1F7330u;
            goto label_1f7330;
        }
    }
    ctx->pc = 0x1F732Cu;
label_1f732c:
    // 0x1f732c: 0x2258821
    ctx->pc = 0x1f732cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1f7330:
    // 0x1f7330: 0x26230003
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 3));
label_1f7334:
    // 0x1f7334: 0x4610003
    ctx->pc = 0x1F7334u;
    {
        const bool branch_taken_0x1f7334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F7338u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x1f7334) {
            ctx->pc = 0x1F7344u;
            goto label_1f7344;
        }
    }
    ctx->pc = 0x1F733Cu;
    // 0x1f733c: 0x24620003
    ctx->pc = 0x1f733cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 3));
    // 0x1f7340: 0x21083
    ctx->pc = 0x1f7340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1f7344:
    // 0x1f7344: 0x28880
    ctx->pc = 0x1f7344u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f7348: 0x24c60001
    ctx->pc = 0x1f7348u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1f734c:
    // 0x1f734c: 0xd0102a
    ctx->pc = 0x1f734cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 16)));
    // 0x1f7350: 0x1440ffcd
    ctx->pc = 0x1F7350u;
    {
        const bool branch_taken_0x1f7350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f7350) {
            ctx->pc = 0x1F7288u;
            goto label_1f7288;
        }
    }
    ctx->pc = 0x1F7358u;
    // 0x1f7358: 0xc045228
    ctx->pc = 0x1F7358u;
    SET_GPR_U32(ctx, 31, 0x1F7360u);
    ctx->pc = 0x1F735Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7360u; }
    }
    if (ctx->pc != 0x1F7360u) { return; }
    ctx->pc = 0x1F7360u;
label_1f7360:
    // 0x1f7360: 0xdfbf0040
    ctx->pc = 0x1f7360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7364: 0x7bb30030
    ctx->pc = 0x1f7364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7368: 0x7bb20020
    ctx->pc = 0x1f7368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f736c: 0x7bb10010
    ctx->pc = 0x1f736cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7370: 0x7bb00000
    ctx->pc = 0x1f7370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7374: 0x3e00008
    ctx->pc = 0x1F7374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7378u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F727Cu: goto label_1f727c;
            case 0x1F7280u: goto label_1f7280;
            case 0x1F7288u: goto label_1f7288;
            case 0x1F72C0u: goto label_1f72c0;
            case 0x1F72D4u: goto label_1f72d4;
            case 0x1F72E8u: goto label_1f72e8;
            case 0x1F72F0u: goto label_1f72f0;
            case 0x1F7308u: goto label_1f7308;
            case 0x1F7318u: goto label_1f7318;
            case 0x1F732Cu: goto label_1f732c;
            case 0x1F7330u: goto label_1f7330;
            case 0x1F7334u: goto label_1f7334;
            case 0x1F7344u: goto label_1f7344;
            case 0x1F734Cu: goto label_1f734c;
            case 0x1F7360u: goto label_1f7360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F737Cu;
    // 0x1f737c: 0x0
    ctx->pc = 0x1f737cu;
    // NOP
}
