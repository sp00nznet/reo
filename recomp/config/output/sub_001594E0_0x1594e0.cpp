#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001594E0
// Address: 0x1594e0 - 0x1594f8
void sub_001594E0_0x1594e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1594e0u;

    // 0x1594e0: 0x248403b8
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 952));
    // 0x1594e4: 0xac850000
    ctx->pc = 0x1594e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1594e8: 0xac860004
    ctx->pc = 0x1594e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1594ec: 0x3e00008
    ctx->pc = 0x1594ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1594F4u;
    // 0x1594f4: 0x0
    ctx->pc = 0x1594f4u;
    // NOP
}
