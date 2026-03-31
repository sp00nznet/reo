#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D6E0
// Address: 0x12d6e0 - 0x12d6e8
void sub_0012D6E0_0x12d6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d6e0u;

    // 0x12d6e0: 0x3e00008
    ctx->pc = 0x12D6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D6E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D6E8u;
}
