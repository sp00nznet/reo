#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1DB0
// Address: 0x1a1db0 - 0x1a1e00
void sub_001A1DB0_0x1a1db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1db0u;

    // 0x1a1db0: 0x27bdfff0
    ctx->pc = 0x1a1db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1db4: 0xffbf0000
    ctx->pc = 0x1a1db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1db8: 0xc068768
    ctx->pc = 0x1A1DB8u;
    SET_GPR_U32(ctx, 31, 0x1A1DC0u);
    ctx->pc = 0x1A1DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1DA0_0x1a1da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1DC0u; }
    }
    if (ctx->pc != 0x1A1DC0u) { return; }
    ctx->pc = 0x1A1DC0u;
    // 0x1a1dc0: 0x24440014
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 20));
    // 0x1a1dc4: 0x302d
    ctx->pc = 0x1a1dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1dc8: 0x10000005
    ctx->pc = 0x1A1DC8u;
    {
        const bool branch_taken_0x1a1dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1DCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
        if (branch_taken_0x1a1dc8) {
            ctx->pc = 0x1A1DE0u;
            goto label_1a1de0;
        }
    }
    ctx->pc = 0x1A1DD0u;
label_1a1dd0:
    // 0x1a1dd0: 0x8c420008
    ctx->pc = 0x1a1dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1dd4: 0x24c60001
    ctx->pc = 0x1a1dd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a1dd8: 0x822021
    ctx->pc = 0x1a1dd8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a1ddc: 0x80102d
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de0:
    // 0x1a1de0: 0xc5182a
    ctx->pc = 0x1a1de0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x1a1de4: 0x1460fffa
    ctx->pc = 0x1A1DE4u;
    {
        const bool branch_taken_0x1a1de4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1de4) {
            ctx->pc = 0x1A1DD0u;
            goto label_1a1dd0;
        }
    }
    ctx->pc = 0x1A1DECu;
    // 0x1a1dec: 0xdfbf0000
    ctx->pc = 0x1a1decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1df0: 0x3e00008
    ctx->pc = 0x1A1DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1DF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1DD0u: goto label_1a1dd0;
            case 0x1A1DE0u: goto label_1a1de0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1DF8u;
    // 0x1a1df8: 0x0
    ctx->pc = 0x1a1df8u;
    // NOP
    // 0x1a1dfc: 0x0
    ctx->pc = 0x1a1dfcu;
    // NOP
}
