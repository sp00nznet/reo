#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001145A0
// Address: 0x1145a0 - 0x1145b0
void sub_001145A0_0x1145a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1145a0u;

    // 0x1145a0: 0x2403ffc8
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x1145a4: 0xc
    ctx->pc = 0x1145a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1145a8: 0x3e00008
    ctx->pc = 0x1145A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1145B0u;
}
