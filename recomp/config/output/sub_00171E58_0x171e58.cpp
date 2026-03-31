#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00171E58
// Address: 0x171e58 - 0x171e68
void sub_00171E58_0x171e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x171e58u;

    // 0x171e58: 0x8c831b30
    ctx->pc = 0x171e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6960)));
    // 0x171e5c: 0x3e00008
    ctx->pc = 0x171E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2568)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171E64u;
    // 0x171e64: 0x0
    ctx->pc = 0x171e64u;
    // NOP
}
