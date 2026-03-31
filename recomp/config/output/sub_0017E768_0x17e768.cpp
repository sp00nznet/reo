#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017E768
// Address: 0x17e768 - 0x17e778
void sub_0017E768_0x17e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e768u;

    // 0x17e768: 0x24020015
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
    // 0x17e76c: 0x3e00008
    ctx->pc = 0x17E76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E770u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E774u;
    // 0x17e774: 0x0
    ctx->pc = 0x17e774u;
    // NOP
}
