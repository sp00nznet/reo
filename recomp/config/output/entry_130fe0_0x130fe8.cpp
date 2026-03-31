#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_130fe0
// Address: 0x130fe0 - 0x130fe8
void entry_130fe0_0x130fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130fe0u;

    // 0x130fe0: 0x3e00008
    ctx->pc = 0x130FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130FE4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130FE8u;
}
