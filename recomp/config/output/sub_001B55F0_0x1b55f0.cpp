#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B55F0
// Address: 0x1b55f0 - 0x1b5610
void sub_001B55F0_0x1b55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b55f0u;

    // 0x1b55f0: 0x3c010023
    ctx->pc = 0x1b55f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b55f4: 0x8c234768
    ctx->pc = 0x1b55f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b55f8: 0xac640070
    ctx->pc = 0x1b55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 4));
    // 0x1b55fc: 0x3c010023
    ctx->pc = 0x1b55fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1b5600: 0x8c234768
    ctx->pc = 0x1b5600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 18280)));
    // 0x1b5604: 0x3e00008
    ctx->pc = 0x1B5604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5608u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B560Cu;
    // 0x1b560c: 0x0
    ctx->pc = 0x1b560cu;
    // NOP
}
