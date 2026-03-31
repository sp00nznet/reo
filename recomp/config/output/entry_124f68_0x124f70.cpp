#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124f68
// Address: 0x124f68 - 0x124f70
void entry_124f68_0x124f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f68u;

    // 0x124f68: 0x3e00008
    ctx->pc = 0x124F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 204));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F70u;
}
