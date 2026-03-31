#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001305B8
// Address: 0x1305b8 - 0x1305c0
void sub_001305B8_0x1305b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1305b8u;

    // 0x1305b8: 0x3e00008
    ctx->pc = 0x1305B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1305BCu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1305C0u;
}
