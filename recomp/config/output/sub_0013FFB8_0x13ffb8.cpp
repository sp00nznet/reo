#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013FFB8
// Address: 0x13ffb8 - 0x13ffc0
void sub_0013FFB8_0x13ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ffb8u;

    // 0x13ffb8: 0x3e00008
    ctx->pc = 0x13FFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FFBCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FFC0u;
}
