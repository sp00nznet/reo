#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1382e0
// Address: 0x1382e0 - 0x1382f0
void entry_1382e0_0x1382f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1382e0u;

    // 0x1382e0: 0x3c030022
    ctx->pc = 0x1382e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x1382e4: 0x3e00008
    ctx->pc = 0x1382E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1382E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294949884)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1382ECu;
    // 0x1382ec: 0x0
    ctx->pc = 0x1382ecu;
    // NOP
}
