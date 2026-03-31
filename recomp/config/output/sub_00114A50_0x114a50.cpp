#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114A50
// Address: 0x114a50 - 0x114a80
void sub_00114A50_0x114a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114a50u;

    // 0x114a50: 0x2403007c
    ctx->pc = 0x114a50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 124));
    // 0x114a54: 0xc
    ctx->pc = 0x114a54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114a58: 0x3e00008
    ctx->pc = 0x114A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114A60u;
    // 0x114a60: 0x2403007d
    ctx->pc = 0x114a60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 125));
    // 0x114a64: 0xc
    ctx->pc = 0x114a64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114a68: 0x3e00008
    ctx->pc = 0x114A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114A70u;
    // 0x114a70: 0x2403007e
    ctx->pc = 0x114a70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 126));
    // 0x114a74: 0xc
    ctx->pc = 0x114a74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114a78: 0x3e00008
    ctx->pc = 0x114A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114A80u;
}
