#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_130df8
// Address: 0x130df8 - 0x130e18
void entry_130df8_0x130e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130df8u;

    // 0x130df8: 0x8c830018
    ctx->pc = 0x130df8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x130dfc: 0x24020001
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e00: 0xaca30000
    ctx->pc = 0x130e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x130e04: 0x8c850014
    ctx->pc = 0x130e04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x130e08: 0x3e00008
    ctx->pc = 0x130E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130E10u;
    // 0x130e10: 0x3e00008
    ctx->pc = 0x130E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E14u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130E18u;
}
