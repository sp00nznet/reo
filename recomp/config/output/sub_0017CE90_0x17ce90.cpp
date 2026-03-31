#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017CE90
// Address: 0x17ce90 - 0x17cea0
void sub_0017CE90_0x17ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ce90u;

    // 0x17ce90: 0x3c020024
    ctx->pc = 0x17ce90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17ce94: 0x3e00008
    ctx->pc = 0x17CE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5008));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CE9Cu;
    // 0x17ce9c: 0x0
    ctx->pc = 0x17ce9cu;
    // NOP
}
