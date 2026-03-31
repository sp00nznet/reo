#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E1D0
// Address: 0x12e1d0 - 0x12e1e0
void sub_0012E1D0_0x12e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e1d0u;

    // 0x12e1d0: 0xa4860006
    ctx->pc = 0x12e1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x12e1d4: 0x3e00008
    ctx->pc = 0x12E1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E1D8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E1DCu;
    // 0x12e1dc: 0x0
    ctx->pc = 0x12e1dcu;
    // NOP
}
