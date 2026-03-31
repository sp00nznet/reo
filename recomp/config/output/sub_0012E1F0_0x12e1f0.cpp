#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012E1F0
// Address: 0x12e1f0 - 0x12e208
void sub_0012E1F0_0x12e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12e1f0u;

    // 0x12e1f0: 0x94820008
    ctx->pc = 0x12e1f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e1f4: 0xa4a20000
    ctx->pc = 0x12e1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x12e1f8: 0x9483000a
    ctx->pc = 0x12e1f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x12e1fc: 0x3e00008
    ctx->pc = 0x12E1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E200u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E204u;
    // 0x12e204: 0x0
    ctx->pc = 0x12e204u;
    // NOP
}
