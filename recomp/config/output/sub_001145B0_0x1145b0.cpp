#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001145B0
// Address: 0x1145b0 - 0x114600
void sub_001145B0_0x1145b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1145b0u;

    // 0x1145b0: 0x24030039
    ctx->pc = 0x1145b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
    // 0x1145b4: 0xc
    ctx->pc = 0x1145b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1145b8: 0x3e00008
    ctx->pc = 0x1145B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1145C0u;
    // 0x1145c0: 0x2403ffc6
    ctx->pc = 0x1145c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x1145c4: 0xc
    ctx->pc = 0x1145c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1145c8: 0x3e00008
    ctx->pc = 0x1145C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1145D0u;
    // 0x1145d0: 0x2403003b
    ctx->pc = 0x1145d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 59));
    // 0x1145d4: 0xc
    ctx->pc = 0x1145d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1145d8: 0x3e00008
    ctx->pc = 0x1145D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1145E0u;
    // 0x1145e0: 0x2403003c
    ctx->pc = 0x1145e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1145e4: 0xc
    ctx->pc = 0x1145e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1145e8: 0x3e00008
    ctx->pc = 0x1145E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1145F0u;
    // 0x1145f0: 0x2403003d
    ctx->pc = 0x1145f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 61));
    // 0x1145f4: 0xc
    ctx->pc = 0x1145f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1145f8: 0x3e00008
    ctx->pc = 0x1145F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114600u;
}
