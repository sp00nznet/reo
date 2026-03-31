#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001D7390
// Address: 0x1d7390 - 0x1d73c0
void sub_001D7390_0x1d7390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1d7390u;

    // 0x1d7390: 0x3c010034
    ctx->pc = 0x1d7390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d7394: 0x24020003
    ctx->pc = 0x1d7394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d7398: 0xac2045f8
    ctx->pc = 0x1d7398u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17912), GPR_U32(ctx, 0));
    // 0x1d739c: 0x24030001
    ctx->pc = 0x1d739cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d73a0: 0x3c010034
    ctx->pc = 0x1d73a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d73a4: 0xac2245e8
    ctx->pc = 0x1d73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17896), GPR_U32(ctx, 2));
    // 0x1d73a8: 0x3c010034
    ctx->pc = 0x1d73a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1d73ac: 0x102d
    ctx->pc = 0x1d73acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d73b0: 0x3e00008
    ctx->pc = 0x1D73B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D73B4u;
        WRITE8(ADD32(GPR_U32(ctx, 1), 17923), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D73B8u;
    // 0x1d73b8: 0x0
    ctx->pc = 0x1d73b8u;
    // NOP
    // 0x1d73bc: 0x0
    ctx->pc = 0x1d73bcu;
    // NOP
}
