#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017CE18
// Address: 0x17ce18 - 0x17ce20
void sub_0017CE18_0x17ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ce18u;

    // 0x17ce18: 0x3e00008
    ctx->pc = 0x17CE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CE1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17CE20u;
}
