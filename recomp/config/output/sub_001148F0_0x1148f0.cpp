#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001148F0
// Address: 0x1148f0 - 0x114930
void sub_001148F0_0x1148f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1148f0u;

    // 0x1148f0: 0x2403006b
    ctx->pc = 0x1148f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 107));
    // 0x1148f4: 0xc
    ctx->pc = 0x1148f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1148f8: 0x3e00008
    ctx->pc = 0x1148F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114900u;
    // 0x114900: 0x2403006c
    ctx->pc = 0x114900u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 108));
    // 0x114904: 0xc
    ctx->pc = 0x114904u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114908: 0x3e00008
    ctx->pc = 0x114908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114910u;
    // 0x114910: 0x2403006d
    ctx->pc = 0x114910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 109));
    // 0x114914: 0xc
    ctx->pc = 0x114914u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114918: 0x3e00008
    ctx->pc = 0x114918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114920u;
    // 0x114920: 0x2403006e
    ctx->pc = 0x114920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 110));
    // 0x114924: 0xc
    ctx->pc = 0x114924u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114928: 0x3e00008
    ctx->pc = 0x114928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114930u;
}
