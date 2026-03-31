#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A2C80
// Address: 0x1a2c80 - 0x1a2c90
void sub_001A2C80_0x1a2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a2c80u;

    // 0x1a2c80: 0x3e00008
    ctx->pc = 0x1A2C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2C88u;
    // 0x1a2c88: 0x0
    ctx->pc = 0x1a2c88u;
    // NOP
    // 0x1a2c8c: 0x0
    ctx->pc = 0x1a2c8cu;
    // NOP
}
