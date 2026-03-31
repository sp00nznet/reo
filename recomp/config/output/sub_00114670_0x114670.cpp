#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114670
// Address: 0x114670 - 0x1146c0
void sub_00114670_0x114670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114670u;

    // 0x114670: 0x24030045
    ctx->pc = 0x114670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
    // 0x114674: 0xc
    ctx->pc = 0x114674u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114678: 0x3e00008
    ctx->pc = 0x114678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114680u;
    // 0x114680: 0x2403ffba
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x114684: 0xc
    ctx->pc = 0x114684u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114688: 0x3e00008
    ctx->pc = 0x114688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114690u;
    // 0x114690: 0x24030047
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x114694: 0xc
    ctx->pc = 0x114694u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114698: 0x3e00008
    ctx->pc = 0x114698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1146A0u;
    // 0x1146a0: 0x2403ffb8
    ctx->pc = 0x1146a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x1146a4: 0xc
    ctx->pc = 0x1146a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1146a8: 0x3e00008
    ctx->pc = 0x1146A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1146B0u;
    // 0x1146b0: 0x24030049
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 73));
    // 0x1146b4: 0xc
    ctx->pc = 0x1146b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1146b8: 0x3e00008
    ctx->pc = 0x1146B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1146C0u;
}
