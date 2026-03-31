#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177448
// Address: 0x177448 - 0x177450
void sub_00177448_0x177448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177448u;

    // 0x177448: 0x3e00008
    ctx->pc = 0x177448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17744Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 3880)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177450u;
}
