#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114510
// Address: 0x114510 - 0x114520
void sub_00114510_0x114510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114510u;

    // 0x114510: 0x2403002f
    ctx->pc = 0x114510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
    // 0x114514: 0xc
    ctx->pc = 0x114514u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114518: 0x3e00008
    ctx->pc = 0x114518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114520u;
}
