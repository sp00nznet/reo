#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BE30
// Address: 0x15be30 - 0x15be38
void sub_0015BE30_0x15be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15be30u;

    // 0x15be30: 0x3e00008
    ctx->pc = 0x15BE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BE38u;
}
