#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_138278
// Address: 0x138278 - 0x138288
void entry_138278_0x138288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138278u;

    // 0x138278: 0x3c030022
    ctx->pc = 0x138278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13827c: 0x3e00008
    ctx->pc = 0x13827Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138280u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294949880)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138284u;
    // 0x138284: 0x0
    ctx->pc = 0x138284u;
    // NOP
}
