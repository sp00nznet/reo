#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114560
// Address: 0x114560 - 0x114570
void sub_00114560_0x114560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114560u;

    // 0x114560: 0x2403ffcc
    ctx->pc = 0x114560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x114564: 0xc
    ctx->pc = 0x114564u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114568: 0x3e00008
    ctx->pc = 0x114568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114570u;
}
