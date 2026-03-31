#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124F50
// Address: 0x124f50 - 0x124f58
void sub_00124F50_0x124f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124f50u;

    // 0x124f50: 0x3e00008
    ctx->pc = 0x124F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F54u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124F58u;
}
