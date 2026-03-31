#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15d7b0
// Address: 0x15d7b0 - 0x15d7c0
void entry_15d7b0_0x15d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d7b0u;

    // 0x15d7b0: 0x8c820168
    ctx->pc = 0x15d7b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x15d7b4: 0x2442ffff
    ctx->pc = 0x15d7b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15d7b8: 0x3e00008
    ctx->pc = 0x15D7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D7BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D7C0u;
}
