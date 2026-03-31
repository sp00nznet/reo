#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114A00
// Address: 0x114a00 - 0x114a10
void sub_00114A00_0x114a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114a00u;

    // 0x114a00: 0x24030078
    ctx->pc = 0x114a00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 120));
    // 0x114a04: 0xc
    ctx->pc = 0x114a04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114a08: 0x3e00008
    ctx->pc = 0x114A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114A10u;
}
