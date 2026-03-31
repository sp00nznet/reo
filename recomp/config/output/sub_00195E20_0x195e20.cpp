#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00195E20
// Address: 0x195e20 - 0x195e30
void sub_00195E20_0x195e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x195e20u;

    // 0x195e20: 0x24020001
    ctx->pc = 0x195e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x195e24: 0x3c01002a
    ctx->pc = 0x195e24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195e28: 0x3e00008
    ctx->pc = 0x195E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966704), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195E30u;
}
