#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1C60
// Address: 0x1a1c60 - 0x1a1cb0
void sub_001A1C60_0x1a1c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1c60u;

    // 0x1a1c60: 0x8c830008
    ctx->pc = 0x1a1c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1c64: 0xac83000c
    ctx->pc = 0x1a1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1a1c68: 0xac850008
    ctx->pc = 0x1a1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1a1c6c: 0x8c850008
    ctx->pc = 0x1a1c6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1c70: 0x8c83000c
    ctx->pc = 0x1a1c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a1c74: 0x651826
    ctx->pc = 0x1a1c74u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a1c78: 0xa31824
    ctx->pc = 0x1a1c78u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a1c7c: 0xac830010
    ctx->pc = 0x1a1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1a1c80: 0x8c85000c
    ctx->pc = 0x1a1c80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a1c84: 0x8c830008
    ctx->pc = 0x1a1c84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1c88: 0xa31826
    ctx->pc = 0x1a1c88u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a1c8c: 0xa31824
    ctx->pc = 0x1a1c8cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a1c90: 0xac830014
    ctx->pc = 0x1a1c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1a1c94: 0x8c850010
    ctx->pc = 0x1a1c94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a1c98: 0x8c830014
    ctx->pc = 0x1a1c98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a1c9c: 0xa31825
    ctx->pc = 0x1a1c9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a1ca0: 0x3e00008
    ctx->pc = 0x1A1CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1CA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1CA8u;
    // 0x1a1ca8: 0x0
    ctx->pc = 0x1a1ca8u;
    // NOP
    // 0x1a1cac: 0x0
    ctx->pc = 0x1a1cacu;
    // NOP
}
