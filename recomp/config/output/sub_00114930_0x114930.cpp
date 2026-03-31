#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114930
// Address: 0x114930 - 0x114960
void sub_00114930_0x114930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114930u;

    // 0x114930: 0x2403006f
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 111));
    // 0x114934: 0xc
    ctx->pc = 0x114934u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114938: 0x3e00008
    ctx->pc = 0x114938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114940u;
    // 0x114940: 0x24030070
    ctx->pc = 0x114940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 112));
    // 0x114944: 0xc
    ctx->pc = 0x114944u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114948: 0x3e00008
    ctx->pc = 0x114948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114950u;
    // 0x114950: 0x2403ff90
    ctx->pc = 0x114950u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x114954: 0xc
    ctx->pc = 0x114954u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114958: 0x3e00008
    ctx->pc = 0x114958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114960u;
}
