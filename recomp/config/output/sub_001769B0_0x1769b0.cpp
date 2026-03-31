#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001769B0
// Address: 0x1769b0 - 0x1769c0
void sub_001769B0_0x1769b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1769b0u;

    // 0x1769b0: 0x63080
    ctx->pc = 0x1769b0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1769b4: 0x862021
    ctx->pc = 0x1769b4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1769b8: 0x3e00008
    ctx->pc = 0x1769B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1769BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 3264), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1769C0u;
}
