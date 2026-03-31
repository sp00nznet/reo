#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A6660
// Address: 0x1a6660 - 0x1a66a0
void sub_001A6660_0x1a6660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a6660u;

    // 0x1a6660: 0x27bdfff0
    ctx->pc = 0x1a6660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6664: 0xffbf0000
    ctx->pc = 0x1a6664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6668: 0xc06224e
    ctx->pc = 0x1A6668u;
    SET_GPR_U32(ctx, 31, 0x1A6670u);
    ctx->pc = 0x188938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188938_0x188938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6670u; }
    }
    if (ctx->pc != 0x1A6670u) { return; }
    ctx->pc = 0x1A6670u;
    // 0x1a6670: 0x24030001
    ctx->pc = 0x1a6670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6674: 0x10430003
    ctx->pc = 0x1A6674u;
    {
        const bool branch_taken_0x1a6674 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A6678u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a6674) {
            ctx->pc = 0x1A6684u;
            goto label_1a6684;
        }
    }
    ctx->pc = 0x1A667Cu;
    // 0x1a667c: 0x10000005
    ctx->pc = 0x1A667Cu;
    {
        const bool branch_taken_0x1a667c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A6680u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a667c) {
            ctx->pc = 0x1A6694u;
            goto label_1a6694;
        }
    }
    ctx->pc = 0x1A6684u;
label_1a6684:
    // 0x1a6684: 0xc0600b4
    ctx->pc = 0x1A6684u;
    SET_GPR_U32(ctx, 31, 0x1A668Cu);
    ctx->pc = 0x1802D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001802D0_0x1802d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A668Cu; }
    }
    if (ctx->pc != 0x1A668Cu) { return; }
    ctx->pc = 0x1A668Cu;
    // 0x1a668c: 0x38420001
    ctx->pc = 0x1a668cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1a6690: 0x2c420001
    ctx->pc = 0x1a6690u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1a6694:
    // 0x1a6694: 0xdfbf0000
    ctx->pc = 0x1a6694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6698: 0x3e00008
    ctx->pc = 0x1A6698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A669Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6684u: goto label_1a6684;
            case 0x1A6694u: goto label_1a6694;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A66A0u;
}
