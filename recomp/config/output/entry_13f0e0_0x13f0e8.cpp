#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f0e0
// Address: 0x13f0e0 - 0x13f0e8
void entry_13f0e0_0x13f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f0e0u;

    // 0x13f0e0: 0x3e00008
    ctx->pc = 0x13F0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F0E8u;
}
