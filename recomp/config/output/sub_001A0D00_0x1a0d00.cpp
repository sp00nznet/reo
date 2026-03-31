#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0D00
// Address: 0x1a0d00 - 0x1a0d10
void sub_001A0D00_0x1a0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0d00u;

    // 0x1a0d00: 0x3c010029
    ctx->pc = 0x1a0d00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x1a0d04: 0x3e00008
    ctx->pc = 0x1A0D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D08u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 16800), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0D0Cu;
    // 0x1a0d0c: 0x0
    ctx->pc = 0x1a0d0cu;
    // NOP
}
