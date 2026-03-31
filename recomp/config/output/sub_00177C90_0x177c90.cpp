#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177C90
// Address: 0x177c90 - 0x177cb0
void sub_00177C90_0x177c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177c90u;

    // 0x177c90: 0x51100
    ctx->pc = 0x177c90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x177c94: 0x451021
    ctx->pc = 0x177c94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177c98: 0x21080
    ctx->pc = 0x177c98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x177c9c: 0x822021
    ctx->pc = 0x177c9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x177ca0: 0x8c821aac
    ctx->pc = 0x177ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6828)));
    // 0x177ca4: 0x3e00008
    ctx->pc = 0x177CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177CA8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177CACu;
    // 0x177cac: 0x0
    ctx->pc = 0x177cacu;
    // NOP
}
