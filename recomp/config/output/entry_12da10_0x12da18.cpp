#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12da10
// Address: 0x12da10 - 0x12da18
void entry_12da10_0x12da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12da10u;

    // 0x12da10: 0x3e00008
    ctx->pc = 0x12DA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA14u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DA18u;
}
