#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114600
// Address: 0x114600 - 0x114620
void sub_00114600_0x114600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114600u;

    // 0x114600: 0x2403003e
    ctx->pc = 0x114600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 62));
    // 0x114604: 0xc
    ctx->pc = 0x114604u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114608: 0x3e00008
    ctx->pc = 0x114608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114610u;
    // 0x114610: 0x2403003f
    ctx->pc = 0x114610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x114614: 0xc
    ctx->pc = 0x114614u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114618: 0x3e00008
    ctx->pc = 0x114618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114620u;
}
