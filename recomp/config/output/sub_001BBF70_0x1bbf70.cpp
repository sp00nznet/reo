#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BBF70
// Address: 0x1bbf70 - 0x1bbfa0
void sub_001BBF70_0x1bbf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bbf70u;

    // 0x1bbf70: 0x27bdfff0
    ctx->pc = 0x1bbf70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbf74: 0x3c040031
    ctx->pc = 0x1bbf74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x1bbf78: 0xffbf0000
    ctx->pc = 0x1bbf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbf7c: 0x248465e0
    ctx->pc = 0x1bbf7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26080));
    // 0x1bbf80: 0x282d
    ctx->pc = 0x1bbf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf84: 0xc041f1a
    ctx->pc = 0x1BBF84u;
    SET_GPR_U32(ctx, 31, 0x1BBF8Cu);
    ctx->pc = 0x1BBF88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF8Cu; }
    }
    if (ctx->pc != 0x1BBF8Cu) { return; }
    ctx->pc = 0x1BBF8Cu;
    // 0x1bbf8c: 0xc06f0e0
    ctx->pc = 0x1BBF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF94u);
    ctx->pc = 0x1BC380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC380_0x1bc380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF94u; }
    }
    if (ctx->pc != 0x1BBF94u) { return; }
    ctx->pc = 0x1BBF94u;
    // 0x1bbf94: 0xdfbf0000
    ctx->pc = 0x1bbf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbf98: 0x3e00008
    ctx->pc = 0x1BBF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBFA0u;
}
