#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_114260
// Address: 0x114260 - 0x114270
void entry_114260_0x114270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114260u;

    // 0x114260: 0x24030006
    ctx->pc = 0x114260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x114264: 0xc
    ctx->pc = 0x114264u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114268: 0x3e00008
    ctx->pc = 0x114268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114270u;
}
