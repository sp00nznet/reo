#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001480C8
// Address: 0x1480c8 - 0x1480d8
void sub_001480C8_0x1480c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1480c8u;

    // 0x1480c8: 0x8c820008
    ctx->pc = 0x1480c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1480cc: 0x3e00008
    ctx->pc = 0x1480CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1480D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1480D4u;
    // 0x1480d4: 0x0
    ctx->pc = 0x1480d4u;
    // NOP
}
