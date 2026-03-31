#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00195E30
// Address: 0x195e30 - 0x195e50
void sub_00195E30_0x195e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x195e30u;

    // 0x195e30: 0x24020002
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x195e34: 0x3c01002a
    ctx->pc = 0x195e34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x195e38: 0xac22fdb0
    ctx->pc = 0x195e38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966704), GPR_U32(ctx, 2));
    // 0x195e3c: 0x3e00008
    ctx->pc = 0x195E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195E44u;
    // 0x195e44: 0x0
    ctx->pc = 0x195e44u;
    // NOP
    // 0x195e48: 0x0
    ctx->pc = 0x195e48u;
    // NOP
    // 0x195e4c: 0x0
    ctx->pc = 0x195e4cu;
    // NOP
}
