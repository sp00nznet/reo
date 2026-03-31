#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C1290
// Address: 0x1c1290 - 0x1c12a0
void sub_001C1290_0x1c1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c1290u;

    // 0x1c1290: 0x3c010032
    ctx->pc = 0x1c1290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1c1294: 0x3e00008
    ctx->pc = 0x1C1294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1298u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 27792), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C129Cu;
    // 0x1c129c: 0x0
    ctx->pc = 0x1c129cu;
    // NOP
}
