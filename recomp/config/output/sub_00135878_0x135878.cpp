#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00135878
// Address: 0x135878 - 0x135888
void sub_00135878_0x135878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x135878u;

    // 0x135878: 0x3c020026
    ctx->pc = 0x135878u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x13587c: 0x3e00008
    ctx->pc = 0x13587Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135880u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8808));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135884u;
    // 0x135884: 0x0
    ctx->pc = 0x135884u;
    // NOP
}
