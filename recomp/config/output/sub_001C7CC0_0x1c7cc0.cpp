#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C7CC0
// Address: 0x1c7cc0 - 0x1c7cd0
void sub_001C7CC0_0x1c7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c7cc0u;

    // 0x1c7cc0: 0x8c830008
    ctx->pc = 0x1c7cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c7cc4: 0x8c820004
    ctx->pc = 0x1c7cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c7cc8: 0x3e00008
    ctx->pc = 0x1C7CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CCCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7CD0u;
}
