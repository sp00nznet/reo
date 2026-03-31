#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1EA0
// Address: 0x1c1ea0 - 0x1c1ee0
void sub_001C1EA0_0x1c1ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1ea0u;

    // 0x1c1ea0: 0x3c020023
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c1ea4: 0x41880
    ctx->pc = 0x1c1ea4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1ea8: 0x24425a10
    ctx->pc = 0x1c1ea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23056));
    // 0x1c1eac: 0x431021
    ctx->pc = 0x1c1eacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1eb0: 0x3e00008
    ctx->pc = 0x1C1EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1EB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1EB8u;
    // 0x1c1eb8: 0x0
    ctx->pc = 0x1c1eb8u;
    // NOP
    // 0x1c1ebc: 0x0
    ctx->pc = 0x1c1ebcu;
    // NOP
    // 0x1c1ec0: 0x3c020023
    ctx->pc = 0x1c1ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1c1ec4: 0x41880
    ctx->pc = 0x1c1ec4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1ec8: 0x24425c80
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23680));
    // 0x1c1ecc: 0x431021
    ctx->pc = 0x1c1eccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1ed0: 0x3e00008
    ctx->pc = 0x1C1ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1ED4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1ED8u;
    // 0x1c1ed8: 0x0
    ctx->pc = 0x1c1ed8u;
    // NOP
    // 0x1c1edc: 0x0
    ctx->pc = 0x1c1edcu;
    // NOP
}
