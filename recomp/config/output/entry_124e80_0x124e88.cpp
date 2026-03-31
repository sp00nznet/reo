#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124e80
// Address: 0x124e80 - 0x124e88
void entry_124e80_0x124e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124e80u;

    // 0x124e80: 0x3e00008
    ctx->pc = 0x124E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E84u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E88u;
}
