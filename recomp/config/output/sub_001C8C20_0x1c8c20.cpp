#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8C20
// Address: 0x1c8c20 - 0x1c8c30
void sub_001C8C20_0x1c8c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8c20u;

    // 0x1c8c20: 0x3c010034
    ctx->pc = 0x1c8c20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1c8c24: 0x3e00008
    ctx->pc = 0x1C8C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8C28u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948432), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8C2Cu;
    // 0x1c8c2c: 0x0
    ctx->pc = 0x1c8c2cu;
    // NOP
}
