#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7CA0
// Address: 0x1c7ca0 - 0x1c7cb0
void sub_001C7CA0_0x1c7ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7ca0u;

    // 0x1c7ca0: 0x3e00008
    ctx->pc = 0x1C7CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7CA8u;
    // 0x1c7ca8: 0x0
    ctx->pc = 0x1c7ca8u;
    // NOP
    // 0x1c7cac: 0x0
    ctx->pc = 0x1c7cacu;
    // NOP
}
