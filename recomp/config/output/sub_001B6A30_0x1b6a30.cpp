#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B6A30
// Address: 0x1b6a30 - 0x1b6a40
void sub_001B6A30_0x1b6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b6a30u;

    // 0x1b6a30: 0x8c82008c
    ctx->pc = 0x1b6a30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1b6a34: 0x3e00008
    ctx->pc = 0x1B6A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6A38u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6A3Cu;
    // 0x1b6a3c: 0x0
    ctx->pc = 0x1b6a3cu;
    // NOP
}
