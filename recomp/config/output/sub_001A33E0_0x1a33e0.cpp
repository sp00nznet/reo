#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A33E0
// Address: 0x1a33e0 - 0x1a3480
void sub_001A33E0_0x1a33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a33e0u;

    // 0x1a33e0: 0x27bdffd0
    ctx->pc = 0x1a33e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a33e4: 0xffbf0020
    ctx->pc = 0x1a33e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a33e8: 0x7fb10010
    ctx->pc = 0x1a33e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a33ec: 0xa0882d
    ctx->pc = 0x1a33ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33f0: 0xc068d64
    ctx->pc = 0x1A33F0u;
    SET_GPR_U32(ctx, 31, 0x1A33F8u);
    ctx->pc = 0x1A33F4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A3590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3590_0x1a3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A33F8u; }
    }
    if (ctx->pc != 0x1A33F8u) { return; }
    ctx->pc = 0x1A33F8u;
    // 0x1a33f8: 0x40802d
    ctx->pc = 0x1a33f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33fc: 0x2405000a
    ctx->pc = 0x1a33fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a3400: 0xc068d68
    ctx->pc = 0x1A3400u;
    SET_GPR_U32(ctx, 31, 0x1A3408u);
    ctx->pc = 0x1A3404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35A0_0x1a35a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3408u; }
    }
    if (ctx->pc != 0x1A3408u) { return; }
    ctx->pc = 0x1A3408u;
    // 0x1a3408: 0x10400003
    ctx->pc = 0x1A3408u;
    {
        const bool branch_taken_0x1a3408 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A340Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3408) {
            ctx->pc = 0x1A3418u;
            goto label_1a3418;
        }
    }
    ctx->pc = 0x1A3410u;
    // 0x1a3410: 0x10000015
    ctx->pc = 0x1A3410u;
    {
        const bool branch_taken_0x1a3410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3414u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3410) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3418u;
label_1a3418:
    // 0x1a3418: 0x2405000a
    ctx->pc = 0x1a3418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a341c: 0xc068d7c
    ctx->pc = 0x1A341Cu;
    SET_GPR_U32(ctx, 31, 0x1A3424u);
    ctx->pc = 0x1A3420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3424u; }
    }
    if (ctx->pc != 0x1A3424u) { return; }
    ctx->pc = 0x1A3424u;
    // 0x1a3424: 0x14400003
    ctx->pc = 0x1A3424u;
    {
        const bool branch_taken_0x1a3424 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3424) {
            ctx->pc = 0x1A3434u;
            goto label_1a3434;
        }
    }
    ctx->pc = 0x1A342Cu;
    // 0x1a342c: 0x1000000e
    ctx->pc = 0x1A342Cu;
    {
        const bool branch_taken_0x1a342c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3430u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a342c) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3434u;
label_1a3434:
    // 0x1a3434: 0x8c430004
    ctx->pc = 0x1a3434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a3438: 0x71082b
    ctx->pc = 0x1a3438u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a343c: 0x10200003
    ctx->pc = 0x1A343Cu;
    {
        const bool branch_taken_0x1a343c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3440u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a343c) {
            ctx->pc = 0x1A344Cu;
            goto label_1a344c;
        }
    }
    ctx->pc = 0x1A3444u;
    // 0x1a3444: 0x10000008
    ctx->pc = 0x1A3444u;
    {
        const bool branch_taken_0x1a3444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3448u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3444) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A344Cu;
label_1a344c:
    // 0x1a344c: 0x40202d
    ctx->pc = 0x1a344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3450: 0xc068d7c
    ctx->pc = 0x1A3450u;
    SET_GPR_U32(ctx, 31, 0x1A3458u);
    ctx->pc = 0x1A3454u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3458u; }
    }
    if (ctx->pc != 0x1A3458u) { return; }
    ctx->pc = 0x1A3458u;
    // 0x1a3458: 0x14400003
    ctx->pc = 0x1A3458u;
    {
        const bool branch_taken_0x1a3458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3458) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3460u;
    // 0x1a3460: 0x10000001
    ctx->pc = 0x1A3460u;
    {
        const bool branch_taken_0x1a3460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3464u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a3460) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3468u;
label_1a3468:
    // 0x1a3468: 0xdfbf0020
    ctx->pc = 0x1a3468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a346c: 0x7bb10010
    ctx->pc = 0x1a346cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3470: 0x7bb00000
    ctx->pc = 0x1a3470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3474: 0x3e00008
    ctx->pc = 0x1A3474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3478u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3418u: goto label_1a3418;
            case 0x1A3434u: goto label_1a3434;
            case 0x1A344Cu: goto label_1a344c;
            case 0x1A3468u: goto label_1a3468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A347Cu;
    // 0x1a347c: 0x0
    ctx->pc = 0x1a347cu;
    // NOP
}
