#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7400
// Address: 0x1d7400 - 0x1d7450
void sub_001D7400_0x1d7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7400u;

    // 0x1d7400: 0x27bdffe0
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7404: 0xffbf0010
    ctx->pc = 0x1d7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7408: 0x7fb00000
    ctx->pc = 0x1d7408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d740c: 0xc076500
    ctx->pc = 0x1D740Cu;
    SET_GPR_U32(ctx, 31, 0x1D7414u);
    ctx->pc = 0x1D7410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1D9400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9400_0x1d9400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7414u; }
    }
    if (ctx->pc != 0x1D7414u) { return; }
    ctx->pc = 0x1D7414u;
    // 0x1d7414: 0x2143c
    ctx->pc = 0x1d7414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d7418: 0x2143f
    ctx->pc = 0x1d7418u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d741c: 0x4410004
    ctx->pc = 0x1D741Cu;
    {
        const bool branch_taken_0x1d741c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d741c) {
            ctx->pc = 0x1D7430u;
            goto label_1d7430;
        }
    }
    ctx->pc = 0x1D7424u;
    // 0x1d7424: 0x10000004
    ctx->pc = 0x1D7424u;
    {
        const bool branch_taken_0x1d7424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D7428u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d7424) {
            ctx->pc = 0x1D7438u;
            goto label_1d7438;
        }
    }
    ctx->pc = 0x1D742Cu;
    // 0x1d742c: 0x0
    ctx->pc = 0x1d742cu;
    // NOP
label_1d7430:
    // 0x1d7430: 0xae020000
    ctx->pc = 0x1d7430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d7434: 0x102d
    ctx->pc = 0x1d7434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7438:
    // 0x1d7438: 0xdfbf0010
    ctx->pc = 0x1d7438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d743c: 0x7bb00000
    ctx->pc = 0x1d743cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7440: 0x3e00008
    ctx->pc = 0x1D7440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7444u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7430u: goto label_1d7430;
            case 0x1D7438u: goto label_1d7438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D7448u;
    // 0x1d7448: 0x0
    ctx->pc = 0x1d7448u;
    // NOP
    // 0x1d744c: 0x0
    ctx->pc = 0x1d744cu;
    // NOP
}
