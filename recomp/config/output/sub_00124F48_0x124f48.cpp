#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124F48
// Address: 0x124f48 - 0x124f50
void sub_00124F48_0x124f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f48u;

    // 0x124f48: 0x3e00008
    ctx->pc = 0x124F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 200)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F50u;
}
