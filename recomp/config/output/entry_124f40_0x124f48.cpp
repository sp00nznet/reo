#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124f40
// Address: 0x124f40 - 0x124f48
void entry_124f40_0x124f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f40u;

    // 0x124f40: 0x3e00008
    ctx->pc = 0x124F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F44u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F48u;
}
