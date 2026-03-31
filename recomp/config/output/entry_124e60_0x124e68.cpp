#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124e60
// Address: 0x124e60 - 0x124e68
void entry_124e60_0x124e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124e60u;

    // 0x124e60: 0x3e00008
    ctx->pc = 0x124E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E68u;
}
