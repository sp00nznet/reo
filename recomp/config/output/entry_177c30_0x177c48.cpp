#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_177c30
// Address: 0x177c30 - 0x177c48
void entry_177c30_0x177c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177c30u;

    // 0x177c30: 0x51100
    ctx->pc = 0x177c30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x177c34: 0x451021
    ctx->pc = 0x177c34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177c38: 0x21080
    ctx->pc = 0x177c38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x177c3c: 0x822021
    ctx->pc = 0x177c3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x177c40: 0x3e00008
    ctx->pc = 0x177C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C44u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 6816), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177C48u;
}
