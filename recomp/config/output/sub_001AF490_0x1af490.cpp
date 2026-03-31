#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF490
// Address: 0x1af490 - 0x1af4d0
void sub_001AF490_0x1af490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af490u;

    // 0x1af490: 0x27bdfff0
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af494: 0x3c04004c
    ctx->pc = 0x1af494u;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1af498: 0xffbf0000
    ctx->pc = 0x1af498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af49c: 0x2484add0
    ctx->pc = 0x1af49cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946256));
    // 0x1af4a0: 0x282d
    ctx->pc = 0x1af4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4a4: 0xc041f1a
    ctx->pc = 0x1AF4A4u;
    SET_GPR_U32(ctx, 31, 0x1AF4ACu);
    ctx->pc = 0x1AF4A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 208));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4ACu; }
    }
    if (ctx->pc != 0x1AF4ACu) { return; }
    ctx->pc = 0x1AF4ACu;
    // 0x1af4ac: 0x3c04004c
    ctx->pc = 0x1af4acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)76 << 16));
    // 0x1af4b0: 0x282d
    ctx->pc = 0x1af4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af4b4: 0x24849a80
    ctx->pc = 0x1af4b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x1af4b8: 0xc041f1a
    ctx->pc = 0x1AF4B8u;
    SET_GPR_U32(ctx, 31, 0x1AF4C0u);
    ctx->pc = 0x1AF4BCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4692));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF4C0u; }
    }
    if (ctx->pc != 0x1AF4C0u) { return; }
    ctx->pc = 0x1AF4C0u;
    // 0x1af4c0: 0xdfbf0000
    ctx->pc = 0x1af4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af4c4: 0x3e00008
    ctx->pc = 0x1AF4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF4C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF4CCu;
    // 0x1af4cc: 0x0
    ctx->pc = 0x1af4ccu;
    // NOP
}
