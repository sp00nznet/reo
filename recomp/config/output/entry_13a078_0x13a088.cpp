#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13a078
// Address: 0x13a078 - 0x13a088
void entry_13a078_0x13a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a078u;

    // 0x13a078: 0x3c030022
    ctx->pc = 0x13a078u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13a07c: 0x3e00008
    ctx->pc = 0x13A07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A080u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294953964)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A084u;
    // 0x13a084: 0x0
    ctx->pc = 0x13a084u;
    // NOP
}
