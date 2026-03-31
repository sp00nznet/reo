#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1a5eb0
// Address: 0x1a5eb0 - 0x1a5ec0
void entry_1a5eb0_0x1a5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a5eb0u;

    // 0x1a5eb0: 0x3c01002b
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a5eb4: 0x3e00008
    ctx->pc = 0x1A5EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EB8u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 2448), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5EBCu;
    // 0x1a5ebc: 0x0
    ctx->pc = 0x1a5ebcu;
    // NOP
}
