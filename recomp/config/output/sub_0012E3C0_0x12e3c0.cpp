#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E3C0
// Address: 0x12e3c0 - 0x12e3d0
void sub_0012E3C0_0x12e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e3c0u;

    // 0x12e3c0: 0xa486000a
    ctx->pc = 0x12e3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x12e3c4: 0x3e00008
    ctx->pc = 0x12E3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E3C8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E3CCu;
    // 0x12e3cc: 0x0
    ctx->pc = 0x12e3ccu;
    // NOP
}
