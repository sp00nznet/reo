#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00189420
// Address: 0x189420 - 0x189580
void sub_00189420_0x189420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189420u;

    // 0x189420: 0x27bdff80
    ctx->pc = 0x189420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x189424: 0xffb40050
    ctx->pc = 0x189424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x189428: 0xffb20030
    ctx->pc = 0x189428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x18942c: 0xe0a02d
    ctx->pc = 0x18942cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189430: 0xffb10020
    ctx->pc = 0x189430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x189434: 0x80902d
    ctx->pc = 0x189434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189438: 0xffb00010
    ctx->pc = 0x189438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18943c: 0xffbf0070
    ctx->pc = 0x18943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x189440: 0xc0802d
    ctx->pc = 0x189440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189444: 0xffb50060
    ctx->pc = 0x189444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x189448: 0xffb30040
    ctx->pc = 0x189448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x18944c: 0x8e030000
    ctx->pc = 0x18944cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189450: 0x28621081
    ctx->pc = 0x189450u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4225));
    // 0x189454: 0x14400007
    ctx->pc = 0x189454u;
    {
        const bool branch_taken_0x189454 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x189458u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189454) {
            ctx->pc = 0x189474u;
            goto label_189474;
        }
    }
    ctx->pc = 0x18945Cu;
    // 0x18945c: 0x3c040024
    ctx->pc = 0x18945cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x189460: 0x60282d
    ctx->pc = 0x189460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189464: 0xc0625f6
    ctx->pc = 0x189464u;
    SET_GPR_U32(ctx, 31, 0x18946Cu);
    ctx->pc = 0x189468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6696));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18946Cu; }
    }
    if (ctx->pc != 0x18946Cu) { return; }
    ctx->pc = 0x18946Cu;
    // 0x18946c: 0x1000003a
    ctx->pc = 0x18946Cu;
    {
        const bool branch_taken_0x18946c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189470u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18946c) {
            ctx->pc = 0x189558u;
            goto label_189558;
        }
    }
    ctx->pc = 0x189474u;
label_189474:
    // 0x189474: 0x3c150029
    ctx->pc = 0x189474u;
    SET_GPR_U32(ctx, 21, ((uint32_t)41 << 16));
    // 0x189478: 0x3c130029
    ctx->pc = 0x189478u;
    SET_GPR_U32(ctx, 19, ((uint32_t)41 << 16));
    // 0x18947c: 0xc045198
    ctx->pc = 0x18947Cu;
    SET_GPR_U32(ctx, 31, 0x189484u);
    ctx->pc = 0x189480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189484u; }
    }
    if (ctx->pc != 0x189484u) { return; }
    ctx->pc = 0x189484u;
    // 0x189484: 0xae720e80
    ctx->pc = 0x189484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3712), GPR_U32(ctx, 18));
    // 0x189488: 0x26640e80
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 3712));
    // 0x18948c: 0xac910004
    ctx->pc = 0x18948cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x189490: 0x8e020000
    ctx->pc = 0x189490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189494: 0xac820008
    ctx->pc = 0x189494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x189498: 0x8e030000
    ctx->pc = 0x189498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18949c: 0x1860000e
    ctx->pc = 0x18949Cu;
    {
        const bool branch_taken_0x18949c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1894A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18949c) {
            ctx->pc = 0x1894D8u;
            goto label_1894d8;
        }
    }
    ctx->pc = 0x1894A4u;
    // 0x1894a4: 0x2486000c
    ctx->pc = 0x1894a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1894a8: 0x3c070029
    ctx->pc = 0x1894a8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)41 << 16));
    // 0x1894ac: 0x2851021
    ctx->pc = 0x1894acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1894b0:
    // 0x1894b0: 0xc52021
    ctx->pc = 0x1894b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1894b4: 0x90430000
    ctx->pc = 0x1894b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894b8: 0x24a50001
    ctx->pc = 0x1894b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1894bc: 0xa0830000
    ctx->pc = 0x1894bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1894c0: 0x8e020000
    ctx->pc = 0x1894c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1894c4: 0xa2102a
    ctx->pc = 0x1894c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1894c8: 0x1440fff9
    ctx->pc = 0x1894C8u;
    {
        const bool branch_taken_0x1894c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1894CCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        if (branch_taken_0x1894c8) {
            ctx->pc = 0x1894B0u;
            goto label_1894b0;
        }
    }
    ctx->pc = 0x1894D0u;
    // 0x1894d0: 0x10000003
    ctx->pc = 0x1894D0u;
    {
        const bool branch_taken_0x1894d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1894D4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 2992));
        if (branch_taken_0x1894d0) {
            ctx->pc = 0x1894E0u;
            goto label_1894e0;
        }
    }
    ctx->pc = 0x1894D8u;
label_1894d8:
    // 0x1894d8: 0x3c070029
    ctx->pc = 0x1894d8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)41 << 16));
    // 0x1894dc: 0x24f00bb0
    ctx->pc = 0x1894dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 2992));
label_1894e0:
    // 0x1894e0: 0xc045ef8
    ctx->pc = 0x1894E0u;
    SET_GPR_U32(ctx, 31, 0x1894E8u);
    ctx->pc = 0x1894E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117BE0_0x117be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1894E8u; }
    }
    if (ctx->pc != 0x1894E8u) { return; }
    ctx->pc = 0x1894E8u;
    // 0x1894e8: 0x24030001
    ctx->pc = 0x1894e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1894ec: 0x14430004
    ctx->pc = 0x1894ECu;
    {
        const bool branch_taken_0x1894ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1894F0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 3712));
        if (branch_taken_0x1894ec) {
            ctx->pc = 0x189500u;
            goto label_189500;
        }
    }
    ctx->pc = 0x1894F4u;
    // 0x1894f4: 0x3c040024
    ctx->pc = 0x1894f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1894f8: 0x1000000e
    ctx->pc = 0x1894F8u;
    {
        const bool branch_taken_0x1894f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1894FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6744));
        if (branch_taken_0x1894f8) {
            ctx->pc = 0x189534u;
            goto label_189534;
        }
    }
    ctx->pc = 0x189500u;
label_189500:
    // 0x189500: 0x3c058000
    ctx->pc = 0x189500u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x189504: 0x200202d
    ctx->pc = 0x189504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189508: 0xafa00000
    ctx->pc = 0x189508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x18950c: 0x34a5131b
    ctx->pc = 0x18950cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4891));
    // 0x189510: 0x24060001
    ctx->pc = 0x189510u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x189514: 0x24081090
    ctx->pc = 0x189514u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4240));
    // 0x189518: 0xe0482d
    ctx->pc = 0x189518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18951c: 0x240a1090
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4240));
    // 0x189520: 0xc045e7a
    ctx->pc = 0x189520u;
    SET_GPR_U32(ctx, 31, 0x189528u);
    ctx->pc = 0x189524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189528u; }
    }
    if (ctx->pc != 0x189528u) { return; }
    ctx->pc = 0x189528u;
    // 0x189528: 0x4410008
    ctx->pc = 0x189528u;
    {
        const bool branch_taken_0x189528 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18952Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x189528) {
            ctx->pc = 0x18954Cu;
            goto label_18954c;
        }
    }
    ctx->pc = 0x189530u;
    // 0x189530: 0x24841a78
    ctx->pc = 0x189530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6776));
label_189534:
    // 0x189534: 0xc0625f6
    ctx->pc = 0x189534u;
    SET_GPR_U32(ctx, 31, 0x18953Cu);
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18953Cu; }
    }
    if (ctx->pc != 0x18953Cu) { return; }
    ctx->pc = 0x18953Cu;
    // 0x18953c: 0xc045190
    ctx->pc = 0x18953Cu;
    SET_GPR_U32(ctx, 31, 0x189544u);
    ctx->pc = 0x189540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189544u; }
    }
    if (ctx->pc != 0x189544u) { return; }
    ctx->pc = 0x189544u;
    // 0x189544: 0x10000004
    ctx->pc = 0x189544u;
    {
        const bool branch_taken_0x189544 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189548u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189544) {
            ctx->pc = 0x189558u;
            goto label_189558;
        }
    }
    ctx->pc = 0x18954Cu;
label_18954c:
    // 0x18954c: 0xc045190
    ctx->pc = 0x18954Cu;
    SET_GPR_U32(ctx, 31, 0x189554u);
    ctx->pc = 0x189550u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 16704)));
    ctx->pc = 0x114640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114640_0x114640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189554u; }
    }
    if (ctx->pc != 0x189554u) { return; }
    ctx->pc = 0x189554u;
    // 0x189554: 0x24020001
    ctx->pc = 0x189554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_189558:
    // 0x189558: 0xdfbf0070
    ctx->pc = 0x189558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18955c: 0xdfb50060
    ctx->pc = 0x18955cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189560: 0xdfb40050
    ctx->pc = 0x189560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189564: 0xdfb30040
    ctx->pc = 0x189564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189568: 0xdfb20030
    ctx->pc = 0x189568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18956c: 0xdfb10020
    ctx->pc = 0x18956cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189570: 0xdfb00010
    ctx->pc = 0x189570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189574: 0x3e00008
    ctx->pc = 0x189574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189474u: goto label_189474;
            case 0x1894B0u: goto label_1894b0;
            case 0x1894D8u: goto label_1894d8;
            case 0x1894E0u: goto label_1894e0;
            case 0x189500u: goto label_189500;
            case 0x189534u: goto label_189534;
            case 0x18954Cu: goto label_18954c;
            case 0x189558u: goto label_189558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18957Cu;
    // 0x18957c: 0x0
    ctx->pc = 0x18957cu;
    // NOP
}
