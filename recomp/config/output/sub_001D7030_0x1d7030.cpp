#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7030
// Address: 0x1d7030 - 0x1d7050
void sub_001D7030_0x1d7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7030u;

    // 0x1d7030: 0x3c010034
    ctx->pc = 0x1d7030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7034: 0x24030004
    ctx->pc = 0x1d7034u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d7038: 0xa0204603
    ctx->pc = 0x1d7038u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17923), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d703c: 0x102d
    ctx->pc = 0x1d703cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7040: 0x3c010034
    ctx->pc = 0x1d7040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7044: 0x3e00008
    ctx->pc = 0x1D7044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7048u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D704Cu;
    // 0x1d704c: 0x0
    ctx->pc = 0x1d704cu;
    // NOP
}
