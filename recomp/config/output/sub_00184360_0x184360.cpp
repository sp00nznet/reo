#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00184360
// Address: 0x184360 - 0x184828
void sub_00184360_0x184360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x184360u;

    // 0x184360: 0x27bdfb00
    ctx->pc = 0x184360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966016));
    // 0x184364: 0xffb104b8
    ctx->pc = 0x184364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1208), GPR_U64(ctx, 17));
    // 0x184368: 0x80882d
    ctx->pc = 0x184368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18436c: 0x111040
    ctx->pc = 0x18436cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x184370: 0xffb004b0
    ctx->pc = 0x184370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 16));
    // 0x184374: 0x511021
    ctx->pc = 0x184374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x184378: 0xffb304c8
    ctx->pc = 0x184378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1224), GPR_U64(ctx, 19));
    // 0x18437c: 0x21140
    ctx->pc = 0x18437cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x184380: 0xffbe04f0
    ctx->pc = 0x184380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 30));
    // 0x184384: 0x511021
    ctx->pc = 0x184384u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x184388: 0xffb204c0
    ctx->pc = 0x184388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 18));
    // 0x18438c: 0x21080
    ctx->pc = 0x18438cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x184390: 0xffb404d0
    ctx->pc = 0x184390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 20));
    // 0x184394: 0xffb504d8
    ctx->pc = 0x184394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1240), GPR_U64(ctx, 21));
    // 0x184398: 0xa0802d
    ctx->pc = 0x184398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18439c: 0xffb604e0
    ctx->pc = 0x18439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 22));
    // 0x1843a0: 0xc0f02d
    ctx->pc = 0x1843a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843a4: 0xffb704e8
    ctx->pc = 0x1843a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1256), GPR_U64(ctx, 23));
    // 0x1843a8: 0x3c130023
    ctx->pc = 0x1843a8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x1843ac: 0x2673fa18
    ctx->pc = 0x1843acu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294965784));
    // 0x1843b0: 0x2629821
    ctx->pc = 0x1843b0u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1843b4: 0xffbf04f8
    ctx->pc = 0x1843b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1272), GPR_U64(ctx, 31));
    // 0x1843b8: 0xafa704a4
    ctx->pc = 0x1843b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 7));
    // 0x1843bc: 0xc062210
    ctx->pc = 0x1843BCu;
    SET_GPR_U32(ctx, 31, 0x1843C4u);
    ctx->pc = 0x1843C0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 8));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843C4u; }
    }
    if (ctx->pc != 0x1843C4u) { return; }
    ctx->pc = 0x1843C4u;
    // 0x1843c4: 0x14400004
    ctx->pc = 0x1843C4u;
    {
        const bool branch_taken_0x1843c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1843C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x1843c4) {
            ctx->pc = 0x1843D8u;
            goto label_1843d8;
        }
    }
    ctx->pc = 0x1843CCu;
    // 0x1843cc: 0x3c028101
    ctx->pc = 0x1843ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1843d0: 0x10000108
    ctx->pc = 0x1843D0u;
    {
        const bool branch_taken_0x1843d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1843D4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x1843d0) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x1843D8u;
label_1843d8:
    // 0x1843d8: 0x3c028101
    ctx->pc = 0x1843d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1843dc: 0x2231818
    ctx->pc = 0x1843dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1843e0: 0x3c040028
    ctx->pc = 0x1843e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x1843e4: 0x832021
    ctx->pc = 0x1843e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1843e8: 0x8c8463d4
    ctx->pc = 0x1843e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 25556)));
    // 0x1843ec: 0x10800101
    ctx->pc = 0x1843ECu;
    {
        const bool branch_taken_0x1843ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1843F0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x1843ec) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x1843F4u;
    // 0x1843f4: 0x27b20420
    ctx->pc = 0x1843f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 1056));
    // 0x1843f8: 0x200282d
    ctx->pc = 0x1843f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843fc: 0x220202d
    ctx->pc = 0x1843fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184400: 0xc0609a2
    ctx->pc = 0x184400u;
    SET_GPR_U32(ctx, 31, 0x184408u);
    ctx->pc = 0x184404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184408u; }
    }
    if (ctx->pc != 0x184408u) { return; }
    ctx->pc = 0x184408u;
    // 0x184408: 0x10400005
    ctx->pc = 0x184408u;
    {
        const bool branch_taken_0x184408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x184408) {
            ctx->pc = 0x184420u;
            goto label_184420;
        }
    }
    ctx->pc = 0x184410u;
    // 0x184410: 0xc06089c
    ctx->pc = 0x184410u;
    SET_GPR_U32(ctx, 31, 0x184418u);
    ctx->pc = 0x184414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184418u; }
    }
    if (ctx->pc != 0x184418u) { return; }
    ctx->pc = 0x184418u;
    // 0x184418: 0x14400005
    ctx->pc = 0x184418u;
    {
        const bool branch_taken_0x184418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184418) {
            ctx->pc = 0x184430u;
            goto label_184430;
        }
    }
    ctx->pc = 0x184420u;
label_184420:
    // 0x184420: 0x3c028101
    ctx->pc = 0x184420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x184424: 0x100000f3
    ctx->pc = 0x184424u;
    {
        const bool branch_taken_0x184424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184428u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x184424) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x18442Cu;
    // 0x18442c: 0x0
    ctx->pc = 0x18442cu;
    // NOP
label_184430:
    // 0x184430: 0xc060880
    ctx->pc = 0x184430u;
    SET_GPR_U32(ctx, 31, 0x184438u);
    ctx->pc = 0x184434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184438u; }
    }
    if (ctx->pc != 0x184438u) { return; }
    ctx->pc = 0x184438u;
    // 0x184438: 0x54400005
    ctx->pc = 0x184438u;
    {
        const bool branch_taken_0x184438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184438) {
            ctx->pc = 0x18443Cu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->pc = 0x184450u;
            goto label_184450;
        }
    }
    ctx->pc = 0x184440u;
    // 0x184440: 0x3c028101
    ctx->pc = 0x184440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x184444: 0x100000eb
    ctx->pc = 0x184444u;
    {
        const bool branch_taken_0x184444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184448u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x184444) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x18444Cu;
    // 0x18444c: 0x0
    ctx->pc = 0x18444cu;
    // NOP
label_184450:
    // 0x184450: 0x220202d
    ctx->pc = 0x184450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184454: 0x3a0282d
    ctx->pc = 0x184454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184458: 0x382d
    ctx->pc = 0x184458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18445c: 0xc060c02
    ctx->pc = 0x18445Cu;
    SET_GPR_U32(ctx, 31, 0x184464u);
    ctx->pc = 0x184460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183008u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00183008_0x183008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184464u; }
    }
    if (ctx->pc != 0x184464u) { return; }
    ctx->pc = 0x184464u;
    // 0x184464: 0x144000e4
    ctx->pc = 0x184464u;
    {
        const bool branch_taken_0x184464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184468u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
        if (branch_taken_0x184464) {
            ctx->pc = 0x1847F8u;
            goto label_1847f8;
        }
    }
    ctx->pc = 0x18446Cu;
    // 0x18446c: 0x27b00040
    ctx->pc = 0x18446cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
    // 0x184470: 0xc042c56
    ctx->pc = 0x184470u;
    SET_GPR_U32(ctx, 31, 0x184478u);
    ctx->pc = 0x184474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184478u; }
    }
    if (ctx->pc != 0x184478u) { return; }
    ctx->pc = 0x184478u;
    // 0x184478: 0x2c430020
    ctx->pc = 0x184478u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x18447c: 0x3c028101
    ctx->pc = 0x18447cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x184480: 0x106000dc
    ctx->pc = 0x184480u;
    {
        const bool branch_taken_0x184480 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x184484u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x184480) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x184488u;
    // 0x184488: 0x3c050024
    ctx->pc = 0x184488u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18448c: 0x200202d
    ctx->pc = 0x18448cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184490: 0xc042b9e
    ctx->pc = 0x184490u;
    SET_GPR_U32(ctx, 31, 0x184498u);
    ctx->pc = 0x184494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 6064));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184498u; }
    }
    if (ctx->pc != 0x184498u) { return; }
    ctx->pc = 0x184498u;
    // 0x184498: 0x50400005
    ctx->pc = 0x184498u;
    {
        const bool branch_taken_0x184498 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x184498) {
            ctx->pc = 0x18449Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
            ctx->pc = 0x1844B0u;
            goto label_1844b0;
        }
    }
    ctx->pc = 0x1844A0u;
    // 0x1844a0: 0x3c028101
    ctx->pc = 0x1844a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1844a4: 0x100000d3
    ctx->pc = 0x1844A4u;
    {
        const bool branch_taken_0x1844a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1844A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x1844a4) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x1844ACu;
    // 0x1844ac: 0x0
    ctx->pc = 0x1844acu;
    // NOP
label_1844b0:
    // 0x1844b0: 0x240202d
    ctx->pc = 0x1844b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1844b4: 0x245017c8
    ctx->pc = 0x1844b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 6088));
    // 0x1844b8: 0xc042b9e
    ctx->pc = 0x1844B8u;
    SET_GPR_U32(ctx, 31, 0x1844C0u);
    ctx->pc = 0x1844BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AE78_0x10ae78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844C0u; }
    }
    if (ctx->pc != 0x1844C0u) { return; }
    ctx->pc = 0x1844C0u;
    // 0x1844c0: 0x1440002d
    ctx->pc = 0x1844C0u;
    {
        const bool branch_taken_0x1844c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1844C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1844c0) {
            ctx->pc = 0x184578u;
            goto label_184578;
        }
    }
    ctx->pc = 0x1844C8u;
    // 0x1844c8: 0x3c0302d
    ctx->pc = 0x1844c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1844cc: 0x30c20007
    ctx->pc = 0x1844ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 7));
    // 0x1844d0: 0x10400019
    ctx->pc = 0x1844D0u;
    {
        const bool branch_taken_0x1844d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1844D4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1844d0) {
            ctx->pc = 0x184538u;
            goto label_184538;
        }
    }
    ctx->pc = 0x1844D8u;
    // 0x1844d8: 0x27a20200
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 512));
label_1844dc:
    // 0x1844dc: 0x68640007
    ctx->pc = 0x1844dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1844e0: 0x6c640000
    ctx->pc = 0x1844e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1844e4: 0x6865000f
    ctx->pc = 0x1844e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1844e8: 0x6c650008
    ctx->pc = 0x1844e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1844ec: 0x68670017
    ctx->pc = 0x1844ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1844f0: 0x6c670010
    ctx->pc = 0x1844f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1844f4: 0x6868001f
    ctx->pc = 0x1844f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1844f8: 0x6c680018
    ctx->pc = 0x1844f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1844fc: 0xb0c40007
    ctx->pc = 0x1844fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184500: 0xb4c40000
    ctx->pc = 0x184500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184504: 0xb0c5000f
    ctx->pc = 0x184504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184508: 0xb4c50008
    ctx->pc = 0x184508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18450c: 0xb0c70017
    ctx->pc = 0x18450cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184510: 0xb4c70010
    ctx->pc = 0x184510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184514: 0xb0c8001f
    ctx->pc = 0x184514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184518: 0xb4c80018
    ctx->pc = 0x184518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18451c: 0x24630020
    ctx->pc = 0x18451cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x184520: 0x0
    ctx->pc = 0x184520u;
    // NOP
    // 0x184524: 0x0
    ctx->pc = 0x184524u;
    // NOP
    // 0x184528: 0x1462ffec
    ctx->pc = 0x184528u;
    {
        const bool branch_taken_0x184528 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18452Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x184528) {
            ctx->pc = 0x1844DCu;
            goto label_1844dc;
        }
    }
    ctx->pc = 0x184530u;
    // 0x184530: 0x1000007d
    ctx->pc = 0x184530u;
    {
        const bool branch_taken_0x184530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x184530) {
            ctx->pc = 0x184728u;
            goto label_184728;
        }
    }
    ctx->pc = 0x184538u;
label_184538:
    // 0x184538: 0x27a20200
    ctx->pc = 0x184538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 512));
label_18453c:
    // 0x18453c: 0xdc640000
    ctx->pc = 0x18453cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184540: 0xdc650008
    ctx->pc = 0x184540u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x184544: 0xdc670010
    ctx->pc = 0x184544u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x184548: 0xdc680018
    ctx->pc = 0x184548u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x18454c: 0xfcc40000
    ctx->pc = 0x18454cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x184550: 0xfcc50008
    ctx->pc = 0x184550u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x184554: 0xfcc70010
    ctx->pc = 0x184554u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x184558: 0xfcc80018
    ctx->pc = 0x184558u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x18455c: 0x24630020
    ctx->pc = 0x18455cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x184560: 0x0
    ctx->pc = 0x184560u;
    // NOP
    // 0x184564: 0x0
    ctx->pc = 0x184564u;
    // NOP
    // 0x184568: 0x1462fff4
    ctx->pc = 0x184568u;
    {
        const bool branch_taken_0x184568 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18456Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x184568) {
            ctx->pc = 0x18453Cu;
            goto label_18453c;
        }
    }
    ctx->pc = 0x184570u;
    // 0x184570: 0x1000006d
    ctx->pc = 0x184570u;
    {
        const bool branch_taken_0x184570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x184570) {
            ctx->pc = 0x184728u;
            goto label_184728;
        }
    }
    ctx->pc = 0x184578u;
label_184578:
    // 0x184578: 0xc060948
    ctx->pc = 0x184578u;
    SET_GPR_U32(ctx, 31, 0x184580u);
    ctx->pc = 0x18457Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1057));
    ctx->pc = 0x182520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182520_0x182520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184580u; }
    }
    if (ctx->pc != 0x184580u) { return; }
    ctx->pc = 0x184580u;
    // 0x184580: 0x3c168101
    ctx->pc = 0x184580u;
    SET_GPR_U32(ctx, 22, ((uint32_t)33025 << 16));
    // 0x184584: 0x3c178101
    ctx->pc = 0x184584u;
    SET_GPR_U32(ctx, 23, ((uint32_t)33025 << 16));
    // 0x184588: 0x40802d
    ctx->pc = 0x184588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18458c: 0x27b20200
    ctx->pc = 0x18458cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 512));
    // 0x184590: 0x27b30400
    ctx->pc = 0x184590u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 1024));
    // 0x184594: 0x24140001
    ctx->pc = 0x184594u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x184598: 0x36d60002
    ctx->pc = 0x184598u;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), 2));
    // 0x18459c: 0x36f79fff
    ctx->pc = 0x18459cu;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), 40959));
label_1845a0:
    // 0x1845a0: 0x200282d
    ctx->pc = 0x1845a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845a4: 0xc042bf0
    ctx->pc = 0x1845A4u;
    SET_GPR_U32(ctx, 31, 0x1845ACu);
    ctx->pc = 0x1845A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845ACu; }
    }
    if (ctx->pc != 0x1845ACu) { return; }
    ctx->pc = 0x1845ACu;
    // 0x1845ac: 0x202d
    ctx->pc = 0x1845acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845b0: 0x3c020024
    ctx->pc = 0x1845b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1845b4: 0xc060948
    ctx->pc = 0x1845B4u;
    SET_GPR_U32(ctx, 31, 0x1845BCu);
    ctx->pc = 0x1845B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 6088));
    ctx->pc = 0x182520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182520_0x182520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845BCu; }
    }
    if (ctx->pc != 0x1845BCu) { return; }
    ctx->pc = 0x1845BCu;
    // 0x1845bc: 0x240202d
    ctx->pc = 0x1845bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845c0: 0x40802d
    ctx->pc = 0x1845c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845c4: 0x240102d
    ctx->pc = 0x1845c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845c8: 0x290a80a
    ctx->pc = 0x1845c8u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 20));
    // 0x1845cc: 0x3a0182d
    ctx->pc = 0x1845ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1845d0:
    // 0x1845d0: 0xdc650000
    ctx->pc = 0x1845d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1845d4: 0xdc660008
    ctx->pc = 0x1845d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1845d8: 0xdc670010
    ctx->pc = 0x1845d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1845dc: 0xdc680018
    ctx->pc = 0x1845dcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1845e0: 0xfc450000
    ctx->pc = 0x1845e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1845e4: 0xfc460008
    ctx->pc = 0x1845e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x1845e8: 0xfc470010
    ctx->pc = 0x1845e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x1845ec: 0xfc480018
    ctx->pc = 0x1845ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x1845f0: 0x24630020
    ctx->pc = 0x1845f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1845f4: 0x0
    ctx->pc = 0x1845f4u;
    // NOP
    // 0x1845f8: 0x0
    ctx->pc = 0x1845f8u;
    // NOP
    // 0x1845fc: 0x1464fff4
    ctx->pc = 0x1845FCu;
    {
        const bool branch_taken_0x1845fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x184600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x1845fc) {
            ctx->pc = 0x1845D0u;
            goto label_1845d0;
        }
    }
    ctx->pc = 0x184604u;
    // 0x184604: 0x8fa80210
    ctx->pc = 0x184604u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x184608: 0x220202d
    ctx->pc = 0x184608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18460c: 0x8fa90204
    ctx->pc = 0x18460cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x184610: 0x3a0282d
    ctx->pc = 0x184610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184614: 0x27a604a0
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 1184));
    // 0x184618: 0xc061038
    ctx->pc = 0x184618u;
    SET_GPR_U32(ctx, 31, 0x184620u);
    ctx->pc = 0x18461Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1840E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001840E0_0x1840e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184620u; }
    }
    if (ctx->pc != 0x184620u) { return; }
    ctx->pc = 0x184620u;
    // 0x184620: 0x97a30000
    ctx->pc = 0x184620u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184624: 0x40202d
    ctx->pc = 0x184624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184628: 0x3c028101
    ctx->pc = 0x184628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18462c: 0x30632000
    ctx->pc = 0x18462cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8192));
    // 0x184630: 0x14600070
    ctx->pc = 0x184630u;
    {
        const bool branch_taken_0x184630 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x184634u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
        if (branch_taken_0x184630) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x184638u;
    // 0x184638: 0x12b40007
    ctx->pc = 0x184638u;
    {
        const bool branch_taken_0x184638 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 20));
        if (branch_taken_0x184638) {
            ctx->pc = 0x184658u;
            goto label_184658;
        }
    }
    ctx->pc = 0x184640u;
    // 0x184640: 0x1080ffd7
    ctx->pc = 0x184640u;
    {
        const bool branch_taken_0x184640 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x184644u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        if (branch_taken_0x184640) {
            ctx->pc = 0x1845A0u;
            goto label_1845a0;
        }
    }
    ctx->pc = 0x184648u;
    // 0x184648: 0x2e0102d
    ctx->pc = 0x184648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18464c: 0x10000069
    ctx->pc = 0x18464Cu;
    {
        const bool branch_taken_0x18464c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184650u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x18464c) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x184654u;
    // 0x184654: 0x0
    ctx->pc = 0x184654u;
    // NOP
label_184658:
    // 0x184658: 0x14800037
    ctx->pc = 0x184658u;
    {
        const bool branch_taken_0x184658 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x184658) {
            ctx->pc = 0x184738u;
            goto label_184738;
        }
    }
    ctx->pc = 0x184660u;
    // 0x184660: 0x13c00028
    ctx->pc = 0x184660u;
    {
        const bool branch_taken_0x184660 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x184664u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184660) {
            ctx->pc = 0x184704u;
            goto label_184704;
        }
    }
    ctx->pc = 0x184668u;
    // 0x184668: 0x30c20007
    ctx->pc = 0x184668u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 7));
    // 0x18466c: 0x10400018
    ctx->pc = 0x18466Cu;
    {
        const bool branch_taken_0x18466c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184670u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18466c) {
            ctx->pc = 0x1846D0u;
            goto label_1846d0;
        }
    }
    ctx->pc = 0x184674u;
label_184674:
    // 0x184674: 0x68620007
    ctx->pc = 0x184674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184678: 0x6c620000
    ctx->pc = 0x184678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18467c: 0x6864000f
    ctx->pc = 0x18467cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184680: 0x6c640008
    ctx->pc = 0x184680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184684: 0x68650017
    ctx->pc = 0x184684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184688: 0x6c650010
    ctx->pc = 0x184688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18468c: 0x6867001f
    ctx->pc = 0x18468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184690: 0x6c670018
    ctx->pc = 0x184690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184694: 0xb0c20007
    ctx->pc = 0x184694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184698: 0xb4c20000
    ctx->pc = 0x184698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18469c: 0xb0c4000f
    ctx->pc = 0x18469cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1846a0: 0xb4c40008
    ctx->pc = 0x1846a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1846a4: 0xb0c50017
    ctx->pc = 0x1846a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1846a8: 0xb4c50010
    ctx->pc = 0x1846a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1846ac: 0xb0c7001f
    ctx->pc = 0x1846acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1846b0: 0xb4c70018
    ctx->pc = 0x1846b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1846b4: 0x24630020
    ctx->pc = 0x1846b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1846b8: 0x0
    ctx->pc = 0x1846b8u;
    // NOP
    // 0x1846bc: 0x0
    ctx->pc = 0x1846bcu;
    // NOP
    // 0x1846c0: 0x1472ffec
    ctx->pc = 0x1846C0u;
    {
        const bool branch_taken_0x1846c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        ctx->pc = 0x1846C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x1846c0) {
            ctx->pc = 0x184674u;
            goto label_184674;
        }
    }
    ctx->pc = 0x1846C8u;
    // 0x1846c8: 0x1000000f
    ctx->pc = 0x1846C8u;
    {
        const bool branch_taken_0x1846c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1846CCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 1192)));
        if (branch_taken_0x1846c8) {
            ctx->pc = 0x184708u;
            goto label_184708;
        }
    }
    ctx->pc = 0x1846D0u;
label_1846d0:
    // 0x1846d0: 0xdc680000
    ctx->pc = 0x1846d0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1846d4: 0xdc620008
    ctx->pc = 0x1846d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1846d8: 0xdc640010
    ctx->pc = 0x1846d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1846dc: 0xdc650018
    ctx->pc = 0x1846dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1846e0: 0xfcc80000
    ctx->pc = 0x1846e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x1846e4: 0xfcc20008
    ctx->pc = 0x1846e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x1846e8: 0xfcc40010
    ctx->pc = 0x1846e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1846ec: 0xfcc50018
    ctx->pc = 0x1846ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 5));
    // 0x1846f0: 0x24630020
    ctx->pc = 0x1846f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1846f4: 0x0
    ctx->pc = 0x1846f4u;
    // NOP
    // 0x1846f8: 0x0
    ctx->pc = 0x1846f8u;
    // NOP
    // 0x1846fc: 0x1472fff4
    ctx->pc = 0x1846FCu;
    {
        const bool branch_taken_0x1846fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        ctx->pc = 0x184700u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x1846fc) {
            ctx->pc = 0x1846D0u;
            goto label_1846d0;
        }
    }
    ctx->pc = 0x184704u;
label_184704:
    // 0x184704: 0x8fa604a8
    ctx->pc = 0x184704u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_184708:
    // 0x184708: 0x10c00002
    ctx->pc = 0x184708u;
    {
        const bool branch_taken_0x184708 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x18470Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 1184)));
        if (branch_taken_0x184708) {
            ctx->pc = 0x184714u;
            goto label_184714;
        }
    }
    ctx->pc = 0x184710u;
    // 0x184710: 0xacc20000
    ctx->pc = 0x184710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_184714:
    // 0x184714: 0x8fa704a4
    ctx->pc = 0x184714u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x184718: 0x10e00003
    ctx->pc = 0x184718u;
    {
        const bool branch_taken_0x184718 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x184718) {
            ctx->pc = 0x184728u;
            goto label_184728;
        }
    }
    ctx->pc = 0x184720u;
    // 0x184720: 0x8fa20210
    ctx->pc = 0x184720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x184724: 0xace20000
    ctx->pc = 0x184724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_184728:
    // 0x184728: 0x3c028101
    ctx->pc = 0x184728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18472c: 0x10000031
    ctx->pc = 0x18472Cu;
    {
        const bool branch_taken_0x18472c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184730u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 17));
        if (branch_taken_0x18472c) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x184734u;
    // 0x184734: 0x0
    ctx->pc = 0x184734u;
    // NOP
label_184738:
    // 0x184738: 0x3c028101
    ctx->pc = 0x184738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18473c: 0x34420002
    ctx->pc = 0x18473cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x184740: 0x1482002c
    ctx->pc = 0x184740u;
    {
        const bool branch_taken_0x184740 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x184744u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184740) {
            ctx->pc = 0x1847F4u;
            goto label_1847f4;
        }
    }
    ctx->pc = 0x184748u;
    // 0x184748: 0x3c0302d
    ctx->pc = 0x184748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18474c: 0x30c20007
    ctx->pc = 0x18474cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 7));
    // 0x184750: 0x10400019
    ctx->pc = 0x184750u;
    {
        const bool branch_taken_0x184750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184754u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184750) {
            ctx->pc = 0x1847B8u;
            goto label_1847b8;
        }
    }
    ctx->pc = 0x184758u;
label_184758:
    // 0x184758: 0x68680007
    ctx->pc = 0x184758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18475c: 0x6c680000
    ctx->pc = 0x18475cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184760: 0x6862000f
    ctx->pc = 0x184760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184764: 0x6c620008
    ctx->pc = 0x184764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184768: 0x68640017
    ctx->pc = 0x184768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18476c: 0x6c640010
    ctx->pc = 0x18476cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184770: 0x6865001f
    ctx->pc = 0x184770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184774: 0x6c650018
    ctx->pc = 0x184774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184778: 0xb0c80007
    ctx->pc = 0x184778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18477c: 0xb4c80000
    ctx->pc = 0x18477cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184780: 0xb0c2000f
    ctx->pc = 0x184780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184784: 0xb4c20008
    ctx->pc = 0x184784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184788: 0xb0c40017
    ctx->pc = 0x184788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18478c: 0xb4c40010
    ctx->pc = 0x18478cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184790: 0xb0c5001f
    ctx->pc = 0x184790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184794: 0xb4c50018
    ctx->pc = 0x184794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184798: 0x24630020
    ctx->pc = 0x184798u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x18479c: 0x0
    ctx->pc = 0x18479cu;
    // NOP
    // 0x1847a0: 0x0
    ctx->pc = 0x1847a0u;
    // NOP
    // 0x1847a4: 0x1473ffec
    ctx->pc = 0x1847A4u;
    {
        const bool branch_taken_0x1847a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        ctx->pc = 0x1847A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x1847a4) {
            ctx->pc = 0x184758u;
            goto label_184758;
        }
    }
    ctx->pc = 0x1847ACu;
    // 0x1847ac: 0x1000000f
    ctx->pc = 0x1847ACu;
    {
        const bool branch_taken_0x1847ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1847ac) {
            ctx->pc = 0x1847ECu;
            goto label_1847ec;
        }
    }
    ctx->pc = 0x1847B4u;
    // 0x1847b4: 0x0
    ctx->pc = 0x1847b4u;
    // NOP
label_1847b8:
    // 0x1847b8: 0xdc670000
    ctx->pc = 0x1847b8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1847bc: 0xdc680008
    ctx->pc = 0x1847bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1847c0: 0xdc620010
    ctx->pc = 0x1847c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1847c4: 0xdc640018
    ctx->pc = 0x1847c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1847c8: 0xfcc70000
    ctx->pc = 0x1847c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x1847cc: 0xfcc80008
    ctx->pc = 0x1847ccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x1847d0: 0xfcc20010
    ctx->pc = 0x1847d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x1847d4: 0xfcc40018
    ctx->pc = 0x1847d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 4));
    // 0x1847d8: 0x24630020
    ctx->pc = 0x1847d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x1847dc: 0x0
    ctx->pc = 0x1847dcu;
    // NOP
    // 0x1847e0: 0x0
    ctx->pc = 0x1847e0u;
    // NOP
    // 0x1847e4: 0x1473fff4
    ctx->pc = 0x1847E4u;
    {
        const bool branch_taken_0x1847e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        ctx->pc = 0x1847E8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x1847e4) {
            ctx->pc = 0x1847B8u;
            goto label_1847b8;
        }
    }
    ctx->pc = 0x1847ECu;
label_1847ec:
    // 0x1847ec: 0x3c028101
    ctx->pc = 0x1847ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1847f0: 0x34420002
    ctx->pc = 0x1847f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_1847f4:
    // 0x1847f4: 0xdfb004b0
    ctx->pc = 0x1847f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_1847f8:
    // 0x1847f8: 0xdfb104b8
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1847fc: 0xdfb204c0
    ctx->pc = 0x1847fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x184800: 0xdfb304c8
    ctx->pc = 0x184800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x184804: 0xdfb404d0
    ctx->pc = 0x184804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x184808: 0xdfb504d8
    ctx->pc = 0x184808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1240)));
    // 0x18480c: 0xdfb604e0
    ctx->pc = 0x18480cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x184810: 0xdfb704e8
    ctx->pc = 0x184810u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1256)));
    // 0x184814: 0xdfbe04f0
    ctx->pc = 0x184814u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x184818: 0xdfbf04f8
    ctx->pc = 0x184818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1272)));
    // 0x18481c: 0x3e00008
    ctx->pc = 0x18481Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1280));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1843D8u: goto label_1843d8;
            case 0x184420u: goto label_184420;
            case 0x184430u: goto label_184430;
            case 0x184450u: goto label_184450;
            case 0x1844B0u: goto label_1844b0;
            case 0x1844DCu: goto label_1844dc;
            case 0x184538u: goto label_184538;
            case 0x18453Cu: goto label_18453c;
            case 0x184578u: goto label_184578;
            case 0x1845A0u: goto label_1845a0;
            case 0x1845D0u: goto label_1845d0;
            case 0x184658u: goto label_184658;
            case 0x184674u: goto label_184674;
            case 0x1846D0u: goto label_1846d0;
            case 0x184704u: goto label_184704;
            case 0x184708u: goto label_184708;
            case 0x184714u: goto label_184714;
            case 0x184728u: goto label_184728;
            case 0x184738u: goto label_184738;
            case 0x184758u: goto label_184758;
            case 0x1847B8u: goto label_1847b8;
            case 0x1847ECu: goto label_1847ec;
            case 0x1847F4u: goto label_1847f4;
            case 0x1847F8u: goto label_1847f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184824u;
    // 0x184824: 0x0
    ctx->pc = 0x184824u;
    // NOP
}
