#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124f10
// Address: 0x124f10 - 0x124f18
void entry_124f10_0x124f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f10u;

    // 0x124f10: 0x3e00008
    ctx->pc = 0x124F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F14u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F18u;
}
