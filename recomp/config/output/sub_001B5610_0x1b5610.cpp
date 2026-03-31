#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B5610
// Address: 0x1b5610 - 0x1b5620
void sub_001B5610_0x1b5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b5610u;

    // 0x1b5610: 0x3c010023
    ctx->pc = 0x1b5610u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b5614: 0x8c234768
    ctx->pc = 0x1b5614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b5618: 0x3e00008
    ctx->pc = 0x1B5618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B561Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5620u;
}
