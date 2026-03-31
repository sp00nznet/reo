#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173C00
// Address: 0x173c00 - 0x173c10
void sub_00173C00_0x173c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173c00u;

    // 0x173c00: 0x3c030023
    ctx->pc = 0x173c00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x173c04: 0x3e00008
    ctx->pc = 0x173C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294963588)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173C0Cu;
    // 0x173c0c: 0x0
    ctx->pc = 0x173c0cu;
    // NOP
}
