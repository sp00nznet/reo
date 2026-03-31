#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B55D0
// Address: 0x1b55d0 - 0x1b55f0
void sub_001B55D0_0x1b55d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b55d0u;

    // 0x1b55d0: 0x3c010023
    ctx->pc = 0x1b55d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b55d4: 0x8c234768
    ctx->pc = 0x1b55d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b55d8: 0xac64006c
    ctx->pc = 0x1b55d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
    // 0x1b55dc: 0x3c010023
    ctx->pc = 0x1b55dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b55e0: 0x8c234768
    ctx->pc = 0x1b55e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b55e4: 0x3e00008
    ctx->pc = 0x1B55E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B55E8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B55ECu;
    // 0x1b55ec: 0x0
    ctx->pc = 0x1b55ecu;
    // NOP
}
