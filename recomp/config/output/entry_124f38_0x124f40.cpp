#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_124f38
// Address: 0x124f38 - 0x124f40
void entry_124f38_0x124f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f38u;

    // 0x124f38: 0x3e00008
    ctx->pc = 0x124F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F40u;
}
