#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B5650
// Address: 0x1b5650 - 0x1b5670
void sub_001B5650_0x1b5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b5650u;

    // 0x1b5650: 0x3c010023
    ctx->pc = 0x1b5650u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b5654: 0x8c234768
    ctx->pc = 0x1b5654u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b5658: 0x3e00008
    ctx->pc = 0x1B5658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B565Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5660u;
    // 0x1b5660: 0x3c010023
    ctx->pc = 0x1b5660u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b5664: 0x8c224768
    ctx->pc = 0x1b5664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b5668: 0x3e00008
    ctx->pc = 0x1B5668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B566Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 128)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5670u;
}
