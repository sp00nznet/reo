#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CCFD0
// Address: 0x1ccfd0 - 0x1cd030
void sub_001CCFD0_0x1ccfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ccfd0u;

    // 0x1ccfd0: 0x80302d
    ctx->pc = 0x1ccfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd4: 0x27bdfff0
    ctx->pc = 0x1ccfd4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfd8: 0xa0202d
    ctx->pc = 0x1ccfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfdc: 0x2402ffff
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccfe0: 0x14820007
    ctx->pc = 0x1CCFE0u;
    {
        const bool branch_taken_0x1ccfe0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CCFE4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x1ccfe0) {
            ctx->pc = 0x1CD000u;
            goto label_1cd000;
        }
    }
    ctx->pc = 0x1CCFE8u;
    // 0x1ccfe8: 0x3c010023
    ctx->pc = 0x1ccfe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ccfec: 0x8c2466c8
    ctx->pc = 0x1ccfecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    // 0x1ccff0: 0x14820003
    ctx->pc = 0x1CCFF0u;
    {
        const bool branch_taken_0x1ccff0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x1ccff0) {
            ctx->pc = 0x1CD000u;
            goto label_1cd000;
        }
    }
    ctx->pc = 0x1CCFF8u;
    // 0x1ccff8: 0x1000000a
    ctx->pc = 0x1CCFF8u;
    {
        const bool branch_taken_0x1ccff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCFFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccff8) {
            ctx->pc = 0x1CD024u;
            goto label_1cd024;
        }
    }
    ctx->pc = 0x1CD000u;
label_1cd000:
    // 0x1cd000: 0xc0732cc
    ctx->pc = 0x1CD000u;
    SET_GPR_U32(ctx, 31, 0x1CD008u);
    ctx->pc = 0x1CCB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB30_0x1ccb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD008u; }
    }
    if (ctx->pc != 0x1CD008u) { return; }
    ctx->pc = 0x1CD008u;
    // 0x1cd008: 0x10400003
    ctx->pc = 0x1CD008u;
    {
        const bool branch_taken_0x1cd008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD00Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cd008) {
            ctx->pc = 0x1CD018u;
            goto label_1cd018;
        }
    }
    ctx->pc = 0x1CD010u;
    // 0x1cd010: 0x10000004
    ctx->pc = 0x1CD010u;
    {
        const bool branch_taken_0x1cd010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CD014u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1cd010) {
            ctx->pc = 0x1CD024u;
            goto label_1cd024;
        }
    }
    ctx->pc = 0x1CD018u;
label_1cd018:
    // 0x1cd018: 0xc0732e4
    ctx->pc = 0x1CD018u;
    SET_GPR_U32(ctx, 31, 0x1CD020u);
    ctx->pc = 0x1CCB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB90_0x1ccb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD020u; }
    }
    if (ctx->pc != 0x1CD020u) { return; }
    ctx->pc = 0x1CD020u;
    // 0x1cd020: 0x8c420000
    ctx->pc = 0x1cd020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd024:
    // 0x1cd024: 0xdfbf0000
    ctx->pc = 0x1cd024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd028: 0x3e00008
    ctx->pc = 0x1CD028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD02Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CD000u: goto label_1cd000;
            case 0x1CD018u: goto label_1cd018;
            case 0x1CD024u: goto label_1cd024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CD030u;
}
