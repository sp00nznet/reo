#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012DA30
// Address: 0x12da30 - 0x12da38
void sub_0012DA30_0x12da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12da30u;

    // 0x12da30: 0x3e00008
    ctx->pc = 0x12DA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 88));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DA38u;
}
