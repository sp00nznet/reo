#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114330
// Address: 0x114330 - 0x114340
void sub_00114330_0x114330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114330u;

    // 0x114330: 0x24030012
    ctx->pc = 0x114330u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x114334: 0xc
    ctx->pc = 0x114334u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114338: 0x3e00008
    ctx->pc = 0x114338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114340u;
}
