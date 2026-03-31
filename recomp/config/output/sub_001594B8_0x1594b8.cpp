#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001594B8
// Address: 0x1594b8 - 0x1594e0
void sub_001594B8_0x1594b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1594b8u;

    // 0x1594b8: 0x51040
    ctx->pc = 0x1594b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1594bc: 0x451021
    ctx->pc = 0x1594bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1594c0: 0x21080
    ctx->pc = 0x1594c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1594c4: 0x822021
    ctx->pc = 0x1594c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1594c8: 0x24840388
    ctx->pc = 0x1594c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 904));
    // 0x1594cc: 0xac880008
    ctx->pc = 0x1594ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1594d0: 0xac860000
    ctx->pc = 0x1594d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1594d4: 0x3e00008
    ctx->pc = 0x1594D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594D8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1594DCu;
    // 0x1594dc: 0x0
    ctx->pc = 0x1594dcu;
    // NOP
}
