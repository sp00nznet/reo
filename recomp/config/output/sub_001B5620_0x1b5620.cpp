#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B5620
// Address: 0x1b5620 - 0x1b5640
void sub_001B5620_0x1b5620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b5620u;

    // 0x1b5620: 0x3c010023
    ctx->pc = 0x1b5620u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b5624: 0x8c234768
    ctx->pc = 0x1b5624u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b5628: 0x3e00008
    ctx->pc = 0x1B5628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B562Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5630u;
    // 0x1b5630: 0x3c010023
    ctx->pc = 0x1b5630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b5634: 0x8c234768
    ctx->pc = 0x1b5634u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b5638: 0x3e00008
    ctx->pc = 0x1B5638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B563Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5640u;
}
