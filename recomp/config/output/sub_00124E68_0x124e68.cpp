#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00124E68
// Address: 0x124e68 - 0x124e78
void sub_00124E68_0x124e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124e68u;

    // 0x124e68: 0x3e00008
    ctx->pc = 0x124E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E6Cu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E70u;
    // 0x124e70: 0x3e00008
    ctx->pc = 0x124E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E74u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124E78u;
}
