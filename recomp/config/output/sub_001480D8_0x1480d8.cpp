#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001480D8
// Address: 0x1480d8 - 0x1480e8
void sub_001480D8_0x1480d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1480d8u;

    // 0x1480d8: 0x8c82000c
    ctx->pc = 0x1480d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1480dc: 0x3e00008
    ctx->pc = 0x1480DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1480E0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1480E4u;
    // 0x1480e4: 0x0
    ctx->pc = 0x1480e4u;
    // NOP
}
