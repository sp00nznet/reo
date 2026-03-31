#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001480B0
// Address: 0x1480b0 - 0x1480c8
void sub_001480B0_0x1480b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1480b0u;

    // 0x1480b0: 0xac85000c
    ctx->pc = 0x1480b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1480b4: 0xac860004
    ctx->pc = 0x1480b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1480b8: 0xac850000
    ctx->pc = 0x1480b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1480bc: 0x3e00008
    ctx->pc = 0x1480BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1480C0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1480C4u;
    // 0x1480c4: 0x0
    ctx->pc = 0x1480c4u;
    // NOP
}
