#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124f00
// Address: 0x124f00 - 0x124f08
void entry_124f00_0x124f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f00u;

    // 0x124f00: 0x3e00008
    ctx->pc = 0x124F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F04u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F08u;
}
