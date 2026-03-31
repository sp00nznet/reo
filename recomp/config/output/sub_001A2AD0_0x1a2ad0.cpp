#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2AD0
// Address: 0x1a2ad0 - 0x1a2af0
void sub_001A2AD0_0x1a2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2ad0u;

    // 0x1a2ad0: 0x27bdfff0
    ctx->pc = 0x1a2ad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2ad4: 0xffbf0000
    ctx->pc = 0x1a2ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2ad8: 0xc068768
    ctx->pc = 0x1A2AD8u;
    SET_GPR_U32(ctx, 31, 0x1A2AE0u);
    ctx->pc = 0x1A1DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1DA0_0x1a1da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2AE0u; }
    }
    if (ctx->pc != 0x1A2AE0u) { return; }
    ctx->pc = 0x1A2AE0u;
    // 0x1a2ae0: 0xdfbf0000
    ctx->pc = 0x1a2ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2ae4: 0x8c420004
    ctx->pc = 0x1a2ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a2ae8: 0x3e00008
    ctx->pc = 0x1A2AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2AECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2AF0u;
}
