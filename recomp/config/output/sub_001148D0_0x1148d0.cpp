#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001148D0
// Address: 0x1148d0 - 0x1148f0
void sub_001148D0_0x1148d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1148d0u;

    // 0x1148d0: 0x2403ff98
    ctx->pc = 0x1148d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x1148d4: 0xc
    ctx->pc = 0x1148d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1148d8: 0x3e00008
    ctx->pc = 0x1148D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1148E0u;
    // 0x1148e0: 0x2403ff96
    ctx->pc = 0x1148e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x1148e4: 0xc
    ctx->pc = 0x1148e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1148e8: 0x3e00008
    ctx->pc = 0x1148E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1148F0u;
}
