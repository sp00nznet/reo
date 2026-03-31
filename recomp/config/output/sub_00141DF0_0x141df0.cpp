#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141DF0
// Address: 0x141df0 - 0x141e08
void sub_00141DF0_0x141df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141df0u;

    // 0x141df0: 0x3c020026
    ctx->pc = 0x141df0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x141df4: 0x244249e0
    ctx->pc = 0x141df4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18912));
    // 0x141df8: 0xac450004
    ctx->pc = 0x141df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x141dfc: 0x3e00008
    ctx->pc = 0x141DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141E00u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141E04u;
    // 0x141e04: 0x0
    ctx->pc = 0x141e04u;
    // NOP
}
