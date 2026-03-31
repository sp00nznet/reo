#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D6EB0
// Address: 0x1d6eb0 - 0x1d6ed0
void sub_001D6EB0_0x1d6eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d6eb0u;

    // 0x1d6eb0: 0x3c030023
    ctx->pc = 0x1d6eb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1d6eb4: 0x102d
    ctx->pc = 0x1d6eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6eb8: 0x246369a0
    ctx->pc = 0x1d6eb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 27040));
    // 0x1d6ebc: 0xad030000
    ctx->pc = 0x1d6ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1d6ec0: 0x3e00008
    ctx->pc = 0x1D6EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6EC4u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6EC8u;
    // 0x1d6ec8: 0x0
    ctx->pc = 0x1d6ec8u;
    // NOP
    // 0x1d6ecc: 0x0
    ctx->pc = 0x1d6eccu;
    // NOP
}
