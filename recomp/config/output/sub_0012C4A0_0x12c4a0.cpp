#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C4A0
// Address: 0x12c4a0 - 0x12c4c8
void sub_0012C4A0_0x12c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c4a0u;

    // 0x12c4a0: 0x27bdfff0
    ctx->pc = 0x12c4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c4a4: 0xffb00000
    ctx->pc = 0x12c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c4a8: 0xffbf0008
    ctx->pc = 0x12c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c4ac: 0xc04f2cc
    ctx->pc = 0x12C4ACu;
    SET_GPR_U32(ctx, 31, 0x12C4B4u);
    ctx->pc = 0x12C4B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13CB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CB30_0x13cb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4B4u; }
    }
    if (ctx->pc != 0x12C4B4u) { return; }
    ctx->pc = 0x12C4B4u;
    // 0x12c4b4: 0xdfbf0008
    ctx->pc = 0x12c4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c4b8: 0x200202d
    ctx->pc = 0x12c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4bc: 0xdfb00000
    ctx->pc = 0x12c4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c4c0: 0x804e80e
    ctx->pc = 0x12C4C0u;
    ctx->pc = 0x12C4C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13A038u;
    entry_13a038_0x13a058(rdram, ctx, runtime); return;
    ctx->pc = 0x12C4C8u;
}
