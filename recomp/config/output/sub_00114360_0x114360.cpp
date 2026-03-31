#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114360
// Address: 0x114360 - 0x114370
void sub_00114360_0x114360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114360u;

    // 0x114360: 0x24030014
    ctx->pc = 0x114360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x114364: 0xc
    ctx->pc = 0x114364u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114368: 0x3e00008
    ctx->pc = 0x114368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114370u;
}
