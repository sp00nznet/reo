#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169B28
// Address: 0x169b28 - 0x169b38
void sub_00169B28_0x169b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169b28u;

    // 0x169b28: 0x248401fc
    ctx->pc = 0x169b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 508));
    // 0x169b2c: 0xac800004
    ctx->pc = 0x169b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x169b30: 0x3e00008
    ctx->pc = 0x169B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B34u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169B38u;
}
