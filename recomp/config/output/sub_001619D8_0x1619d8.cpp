#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001619D8
// Address: 0x1619d8 - 0x1619f8
void sub_001619D8_0x1619d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1619d8u;

    // 0x1619d8: 0x24820100
    ctx->pc = 0x1619d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 256));
    // 0x1619dc: 0x2403ffff
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1619e0: 0xac400008
    ctx->pc = 0x1619e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1619e4: 0xac400000
    ctx->pc = 0x1619e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1619e8: 0xac400004
    ctx->pc = 0x1619e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1619ec: 0x3e00008
    ctx->pc = 0x1619ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1619F0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1619F4u;
    // 0x1619f4: 0x0
    ctx->pc = 0x1619f4u;
    // NOP
}
