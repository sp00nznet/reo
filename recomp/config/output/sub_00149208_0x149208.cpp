#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00149208
// Address: 0x149208 - 0x149218
void sub_00149208_0x149208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x149208u;

    // 0x149208: 0x3c020023
    ctx->pc = 0x149208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x14920c: 0x3e00008
    ctx->pc = 0x14920Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944768));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149214u;
    // 0x149214: 0x0
    ctx->pc = 0x149214u;
    // NOP
}
