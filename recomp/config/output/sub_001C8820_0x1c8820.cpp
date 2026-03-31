#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C8820
// Address: 0x1c8820 - 0x1c8830
void sub_001C8820_0x1c8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c8820u;

    // 0x1c8820: 0x3e00008
    ctx->pc = 0x1C8820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8824u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 72));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8828u;
    // 0x1c8828: 0x0
    ctx->pc = 0x1c8828u;
    // NOP
    // 0x1c882c: 0x0
    ctx->pc = 0x1c882cu;
    // NOP
}
