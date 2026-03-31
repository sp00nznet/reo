#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001126F8
// Address: 0x1126f8 - 0x112708
void sub_001126F8_0x1126f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1126f8u;

    // 0x1126f8: 0x3c020021
    ctx->pc = 0x1126f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1126fc: 0x3e00008
    ctx->pc = 0x1126FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112700u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941808));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112704u;
    // 0x112704: 0x0
    ctx->pc = 0x112704u;
    // NOP
}
