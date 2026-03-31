#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018C850
// Address: 0x18c850 - 0x18c870
void sub_0018C850_0x18c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18c850u;

    // 0x18c850: 0xac800000
    ctx->pc = 0x18c850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18c854: 0x3c025100
    ctx->pc = 0x18c854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20736 << 16));
    // 0x18c858: 0xac800004
    ctx->pc = 0x18c858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x18c85c: 0xa21025
    ctx->pc = 0x18c85cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18c860: 0xac800008
    ctx->pc = 0x18c860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x18c864: 0xac82000c
    ctx->pc = 0x18c864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x18c868: 0x3e00008
    ctx->pc = 0x18C868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C86Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C870u;
}
