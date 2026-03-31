#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A130
// Address: 0x13a130 - 0x13a140
void sub_0013A130_0x13a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a130u;

    // 0x13a130: 0x8c820014
    ctx->pc = 0x13a130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13a134: 0x212f8
    ctx->pc = 0x13a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x13a138: 0x3e00008
    ctx->pc = 0x13A138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A13Cu;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A140u;
}
