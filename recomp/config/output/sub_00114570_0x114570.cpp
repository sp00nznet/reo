#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114570
// Address: 0x114570 - 0x114590
void sub_00114570_0x114570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114570u;

    // 0x114570: 0x24030035
    ctx->pc = 0x114570u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 53));
    // 0x114574: 0xc
    ctx->pc = 0x114574u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114578: 0x3e00008
    ctx->pc = 0x114578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114580u;
    // 0x114580: 0x2403ffca
    ctx->pc = 0x114580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x114584: 0xc
    ctx->pc = 0x114584u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114588: 0x3e00008
    ctx->pc = 0x114588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114590u;
}
