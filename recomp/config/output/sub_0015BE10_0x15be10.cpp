#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015BE10
// Address: 0x15be10 - 0x15be30
void sub_0015BE10_0x15be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15be10u;

    // 0x15be10: 0x24024000
    ctx->pc = 0x15be10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x15be14: 0xaca20000
    ctx->pc = 0x15be14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15be18: 0x24030700
    ctx->pc = 0x15be18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1792));
    // 0x15be1c: 0xacc30000
    ctx->pc = 0x15be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x15be20: 0x8ca20000
    ctx->pc = 0x15be20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15be24: 0x3e00008
    ctx->pc = 0x15BE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE28u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BE2Cu;
    // 0x15be2c: 0x0
    ctx->pc = 0x15be2cu;
    // NOP
}
