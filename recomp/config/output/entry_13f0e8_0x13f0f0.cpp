#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13f0e8
// Address: 0x13f0e8 - 0x13f0f0
void entry_13f0e8_0x13f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f0e8u;

    // 0x13f0e8: 0x3e00008
    ctx->pc = 0x13F0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F0F0u;
}
