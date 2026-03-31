#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001143F0
// Address: 0x1143f0 - 0x114420
void sub_001143F0_0x1143f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1143f0u;

    // 0x1143f0: 0x2403ffe3
    ctx->pc = 0x1143f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x1143f4: 0xc
    ctx->pc = 0x1143f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1143f8: 0x3e00008
    ctx->pc = 0x1143F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114400u;
    // 0x114400: 0x2403ff02
    ctx->pc = 0x114400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x114404: 0xc
    ctx->pc = 0x114404u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114408: 0x3e00008
    ctx->pc = 0x114408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114410u;
    // 0x114410: 0x2403ff01
    ctx->pc = 0x114410u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x114414: 0xc
    ctx->pc = 0x114414u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114418: 0x3e00008
    ctx->pc = 0x114418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114420u;
}
