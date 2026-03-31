#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160B58
// Address: 0x160b58 - 0x160b60
void sub_00160B58_0x160b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160b58u;

    // 0x160b58: 0x3e00008
    ctx->pc = 0x160B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6175));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160B60u;
}
