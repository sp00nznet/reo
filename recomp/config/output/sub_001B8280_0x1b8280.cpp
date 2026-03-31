#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B8280
// Address: 0x1b8280 - 0x1b8290
void sub_001B8280_0x1b8280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b8280u;

    // 0x1b8280: 0x3c010032
    ctx->pc = 0x1b8280u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b8284: 0x3e00008
    ctx->pc = 0x1B8284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8288u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16816)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B828Cu;
    // 0x1b828c: 0x0
    ctx->pc = 0x1b828cu;
    // NOP
}
