#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177C78
// Address: 0x177c78 - 0x177c90
void sub_00177C78_0x177c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177c78u;

    // 0x177c78: 0x51100
    ctx->pc = 0x177c78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x177c7c: 0x451021
    ctx->pc = 0x177c7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177c80: 0x21080
    ctx->pc = 0x177c80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x177c84: 0x822021
    ctx->pc = 0x177c84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x177c88: 0x3e00008
    ctx->pc = 0x177C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6820)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177C90u;
}
