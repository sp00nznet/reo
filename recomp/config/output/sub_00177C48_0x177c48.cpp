#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177C48
// Address: 0x177c48 - 0x177c78
void sub_00177C48_0x177c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177c48u;

    // 0x177c48: 0x51100
    ctx->pc = 0x177c48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x177c4c: 0x451021
    ctx->pc = 0x177c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177c50: 0x21080
    ctx->pc = 0x177c50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x177c54: 0x822021
    ctx->pc = 0x177c54u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x177c58: 0x3e00008
    ctx->pc = 0x177C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6816)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177C60u;
    // 0x177c60: 0x51100
    ctx->pc = 0x177c60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x177c64: 0x451021
    ctx->pc = 0x177c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177c68: 0x21080
    ctx->pc = 0x177c68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x177c6c: 0x822021
    ctx->pc = 0x177c6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x177c70: 0x3e00008
    ctx->pc = 0x177C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C74u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 6820), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177C78u;
}
