#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013D498
// Address: 0x13d498 - 0x13d4b8
void sub_0013D498_0x13d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13d498u;

    // 0x13d498: 0x27bdfff0
    ctx->pc = 0x13d498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d49c: 0xffbf0000
    ctx->pc = 0x13d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d4a0: 0xc04fc96
    ctx->pc = 0x13D4A0u;
    SET_GPR_U32(ctx, 31, 0x13D4A8u);
    ctx->pc = 0x13F258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F258_0x13f258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D4A8u; }
    }
    if (ctx->pc != 0x13D4A8u) { return; }
    ctx->pc = 0x13D4A8u;
    // 0x13d4a8: 0xdfbf0000
    ctx->pc = 0x13d4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d4ac: 0x3e00008
    ctx->pc = 0x13D4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D4B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D4B4u;
    // 0x13d4b4: 0x0
    ctx->pc = 0x13d4b4u;
    // NOP
}
