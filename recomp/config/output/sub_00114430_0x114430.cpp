#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114430
// Address: 0x114430 - 0x114440
void sub_00114430_0x114430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114430u;

    // 0x114430: 0x24030021
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x114434: 0xc
    ctx->pc = 0x114434u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114438: 0x3e00008
    ctx->pc = 0x114438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114440u;
}
