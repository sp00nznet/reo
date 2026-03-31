#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00114390
// Address: 0x114390 - 0x1143a0
void sub_00114390_0x114390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114390u;

    // 0x114390: 0x24030017
    ctx->pc = 0x114390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
    // 0x114394: 0xc
    ctx->pc = 0x114394u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x114398: 0x3e00008
    ctx->pc = 0x114398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1143A0u;
}
