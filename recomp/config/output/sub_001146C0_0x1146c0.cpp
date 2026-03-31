#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001146C0
// Address: 0x1146c0 - 0x1146d0
void sub_001146C0_0x1146c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1146c0u;

    // 0x1146c0: 0x2403004a
    ctx->pc = 0x1146c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 74));
    // 0x1146c4: 0xc
    ctx->pc = 0x1146c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1146c8: 0x3e00008
    ctx->pc = 0x1146C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1146D0u;
}
