#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012CBB8
// Address: 0x12cbb8 - 0x12cbc0
void sub_0012CBB8_0x12cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12cbb8u;

    // 0x12cbb8: 0x3e00008
    ctx->pc = 0x12CBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CBBCu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CBC0u;
}
