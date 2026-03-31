#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E73C0
// Address: 0x1e73c0 - 0x1e7438
void sub_001E73C0_0x1e73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e73c0u;

    // 0x1e73c0: 0x27bdffe0
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e73c4: 0xffbe0010
    ctx->pc = 0x1e73c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x1e73c8: 0xffbf0018
    ctx->pc = 0x1e73c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e73cc: 0x3a0f02d
    ctx->pc = 0x1e73ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73d0: 0xafc40000
    ctx->pc = 0x1e73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e73d4: 0x24040018
    ctx->pc = 0x1e73d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e73d8: 0xc079f1f
    ctx->pc = 0x1E73D8u;
    SET_GPR_U32(ctx, 31, 0x1E73E0u);
    ctx->pc = 0x1E7C7Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7C7C_0x1e7c7c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E73E0u; }
    }
    if (ctx->pc != 0x1E73E0u) { return; }
    ctx->pc = 0x1E73E0u;
    // 0x1e73e0: 0xafc20004
    ctx->pc = 0x1e73e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x1e73e4: 0x8fc20004
    ctx->pc = 0x1e73e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e73e8: 0x14400004
    ctx->pc = 0x1E73E8u;
    {
        const bool branch_taken_0x1e73e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e73e8) {
            ctx->pc = 0x1E73FCu;
            goto label_1e73fc;
        }
    }
    ctx->pc = 0x1E73F0u;
    // 0x1e73f0: 0x8fc20004
    ctx->pc = 0x1e73f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e73f4: 0x1000000a
    ctx->pc = 0x1E73F4u;
    {
        const bool branch_taken_0x1e73f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e73f4) {
            ctx->pc = 0x1E7420u;
            goto label_1e7420;
        }
    }
    ctx->pc = 0x1E73FCu;
label_1e73fc:
    // 0x1e73fc: 0x8fc20004
    ctx->pc = 0x1e73fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7400: 0xac400000
    ctx->pc = 0x1e7400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e7404: 0x8fc20004
    ctx->pc = 0x1e7404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e7408: 0x24420004
    ctx->pc = 0x1e7408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1e740c: 0x40202d
    ctx->pc = 0x1e740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7410: 0x282d
    ctx->pc = 0x1e7410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7414: 0xc07c417
    ctx->pc = 0x1E7414u;
    SET_GPR_U32(ctx, 31, 0x1E741Cu);
    ctx->pc = 0x1F105Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F105C_0x1f105c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E741Cu; }
    }
    if (ctx->pc != 0x1E741Cu) { return; }
    ctx->pc = 0x1E741Cu;
    // 0x1e741c: 0x8fc20004
    ctx->pc = 0x1e741cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1e7420:
    // 0x1e7420: 0x3c0e82d
    ctx->pc = 0x1e7420u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7424: 0xdfbe0010
    ctx->pc = 0x1e7424u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7428: 0xdfbf0018
    ctx->pc = 0x1e7428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e742c: 0x27bd0020
    ctx->pc = 0x1e742cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e7430: 0x3e00008
    ctx->pc = 0x1E7430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E73FCu: goto label_1e73fc;
            case 0x1E7420u: goto label_1e7420;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7438u;
}
