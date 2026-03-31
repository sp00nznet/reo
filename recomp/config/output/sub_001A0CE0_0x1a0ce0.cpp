#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A0CE0
// Address: 0x1a0ce0 - 0x1a0cf0
void sub_001A0CE0_0x1a0ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a0ce0u;

    // 0x1a0ce0: 0x24030002
    ctx->pc = 0x1a0ce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0ce4: 0x3c01002a
    ctx->pc = 0x1a0ce4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x1a0ce8: 0x3e00008
    ctx->pc = 0x1A0CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CECu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966704), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0CF0u;
}
