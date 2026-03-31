#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114540
// Address: 0x114540 - 0x114550
void sub_00114540_0x114540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114540u;

    // 0x114540: 0x24030032
    ctx->pc = 0x114540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 50));
    // 0x114544: 0xc
    ctx->pc = 0x114544u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114548: 0x3e00008
    ctx->pc = 0x114548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114550u;
}
