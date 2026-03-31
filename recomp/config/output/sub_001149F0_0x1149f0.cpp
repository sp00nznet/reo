#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001149F0
// Address: 0x1149f0 - 0x114a00
void sub_001149F0_0x1149f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1149f0u;

    // 0x1149f0: 0x2403ff89
    ctx->pc = 0x1149f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967177));
    // 0x1149f4: 0xc
    ctx->pc = 0x1149f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1149f8: 0x3e00008
    ctx->pc = 0x1149F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114A00u;
}
