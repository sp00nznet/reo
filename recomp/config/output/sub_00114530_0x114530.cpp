#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114530
// Address: 0x114530 - 0x114540
void sub_00114530_0x114530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114530u;

    // 0x114530: 0x2403ffcf
    ctx->pc = 0x114530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x114534: 0xc
    ctx->pc = 0x114534u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114538: 0x3e00008
    ctx->pc = 0x114538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114540u;
}
