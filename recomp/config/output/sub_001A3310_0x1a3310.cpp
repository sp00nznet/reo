#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3310
// Address: 0x1a3310 - 0x1a33b0
void sub_001A3310_0x1a3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3310u;

    // 0x1a3310: 0x27bdffd0
    ctx->pc = 0x1a3310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3314: 0xffbf0020
    ctx->pc = 0x1a3314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3318: 0x7fb10010
    ctx->pc = 0x1a3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a331c: 0xa0882d
    ctx->pc = 0x1a331cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3320: 0xc068d64
    ctx->pc = 0x1A3320u;
    SET_GPR_U32(ctx, 31, 0x1A3328u);
    ctx->pc = 0x1A3324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A3590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3590_0x1a3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3328u; }
    }
    if (ctx->pc != 0x1A3328u) { return; }
    ctx->pc = 0x1A3328u;
    // 0x1a3328: 0x40802d
    ctx->pc = 0x1a3328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a332c: 0x24050009
    ctx->pc = 0x1a332cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a3330: 0xc068d68
    ctx->pc = 0x1A3330u;
    SET_GPR_U32(ctx, 31, 0x1A3338u);
    ctx->pc = 0x1A3334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35A0_0x1a35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3338u; }
    }
    if (ctx->pc != 0x1A3338u) { return; }
    ctx->pc = 0x1A3338u;
    // 0x1a3338: 0x10400003
    ctx->pc = 0x1A3338u;
    {
        const bool branch_taken_0x1a3338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A333Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3338) {
            ctx->pc = 0x1A3348u;
            goto label_1a3348;
        }
    }
    ctx->pc = 0x1A3340u;
    // 0x1a3340: 0x10000015
    ctx->pc = 0x1A3340u;
    {
        const bool branch_taken_0x1a3340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3344u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3340) {
            ctx->pc = 0x1A3398u;
            goto label_1a3398;
        }
    }
    ctx->pc = 0x1A3348u;
label_1a3348:
    // 0x1a3348: 0x24050009
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a334c: 0xc068d7c
    ctx->pc = 0x1A334Cu;
    SET_GPR_U32(ctx, 31, 0x1A3354u);
    ctx->pc = 0x1A3350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3354u; }
    }
    if (ctx->pc != 0x1A3354u) { return; }
    ctx->pc = 0x1A3354u;
    // 0x1a3354: 0x14400003
    ctx->pc = 0x1A3354u;
    {
        const bool branch_taken_0x1a3354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3354) {
            ctx->pc = 0x1A3364u;
            goto label_1a3364;
        }
    }
    ctx->pc = 0x1A335Cu;
    // 0x1a335c: 0x1000000e
    ctx->pc = 0x1A335Cu;
    {
        const bool branch_taken_0x1a335c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3360u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a335c) {
            ctx->pc = 0x1A3398u;
            goto label_1a3398;
        }
    }
    ctx->pc = 0x1A3364u;
label_1a3364:
    // 0x1a3364: 0x8c430004
    ctx->pc = 0x1a3364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3368: 0x71082b
    ctx->pc = 0x1a3368u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a336c: 0x10200003
    ctx->pc = 0x1A336Cu;
    {
        const bool branch_taken_0x1a336c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3370u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a336c) {
            ctx->pc = 0x1A337Cu;
            goto label_1a337c;
        }
    }
    ctx->pc = 0x1A3374u;
    // 0x1a3374: 0x10000008
    ctx->pc = 0x1A3374u;
    {
        const bool branch_taken_0x1a3374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3378u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3374) {
            ctx->pc = 0x1A3398u;
            goto label_1a3398;
        }
    }
    ctx->pc = 0x1A337Cu;
label_1a337c:
    // 0x1a337c: 0x40202d
    ctx->pc = 0x1a337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3380: 0xc068d7c
    ctx->pc = 0x1A3380u;
    SET_GPR_U32(ctx, 31, 0x1A3388u);
    ctx->pc = 0x1A3384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3388u; }
    }
    if (ctx->pc != 0x1A3388u) { return; }
    ctx->pc = 0x1A3388u;
    // 0x1a3388: 0x14400003
    ctx->pc = 0x1A3388u;
    {
        const bool branch_taken_0x1a3388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3388) {
            ctx->pc = 0x1A3398u;
            goto label_1a3398;
        }
    }
    ctx->pc = 0x1A3390u;
    // 0x1a3390: 0x10000001
    ctx->pc = 0x1A3390u;
    {
        const bool branch_taken_0x1a3390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3394u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3390) {
            ctx->pc = 0x1A3398u;
            goto label_1a3398;
        }
    }
    ctx->pc = 0x1A3398u;
label_1a3398:
    // 0x1a3398: 0xdfbf0020
    ctx->pc = 0x1a3398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a339c: 0x7bb10010
    ctx->pc = 0x1a339cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a33a0: 0x7bb00000
    ctx->pc = 0x1a33a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a33a4: 0x3e00008
    ctx->pc = 0x1A33A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A33A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3348u: goto label_1a3348;
            case 0x1A3364u: goto label_1a3364;
            case 0x1A337Cu: goto label_1a337c;
            case 0x1A3398u: goto label_1a3398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A33ACu;
    // 0x1a33ac: 0x0
    ctx->pc = 0x1a33acu;
    // NOP
}
