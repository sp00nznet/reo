#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00377B20
// Address: 0x377b20 - 0x377b30
void sub_00377B20_0x377b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x377b20u;

    // 0x377b20: 0x3c010057
    ctx->pc = 0x377b20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x377b24: 0x3e00008
    ctx->pc = 0x377B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377B28u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294946560), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377B2Cu;
    // 0x377b2c: 0x0
    ctx->pc = 0x377b2cu;
    // NOP
}
