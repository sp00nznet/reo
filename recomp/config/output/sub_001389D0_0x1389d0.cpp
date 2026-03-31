#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001389D0
// Address: 0x1389d0 - 0x1389d8
void sub_001389D0_0x1389d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1389d0u;

    // 0x1389d0: 0x3e00008
    ctx->pc = 0x1389D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1389D4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1389D8u;
}
