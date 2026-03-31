#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001618B0
// Address: 0x1618b0 - 0x1618c0
void sub_001618B0_0x1618b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1618b0u;

    // 0x1618b0: 0x8c82000c
    ctx->pc = 0x1618b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1618b4: 0x38420002
    ctx->pc = 0x1618b4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x1618b8: 0x3e00008
    ctx->pc = 0x1618B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618BCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1618C0u;
}
