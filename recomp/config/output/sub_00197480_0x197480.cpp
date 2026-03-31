#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00197480
// Address: 0x197480 - 0x197490
void sub_00197480_0x197480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x197480u;

    // 0x197480: 0x3c01002a
    ctx->pc = 0x197480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x197484: 0x3e00008
    ctx->pc = 0x197484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197488u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966608)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19748Cu;
    // 0x19748c: 0x0
    ctx->pc = 0x19748cu;
    // NOP
}
