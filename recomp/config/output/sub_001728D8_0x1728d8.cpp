#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001728D8
// Address: 0x1728d8 - 0x172908
void sub_001728D8_0x1728d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1728d8u;

    // 0x1728d8: 0x27bdfff0
    ctx->pc = 0x1728d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1728dc: 0xffb00000
    ctx->pc = 0x1728dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1728e0: 0xffbf0008
    ctx->pc = 0x1728e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1728e4: 0xc05ca42
    ctx->pc = 0x1728E4u;
    SET_GPR_U32(ctx, 31, 0x1728ECu);
    ctx->pc = 0x1728E8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172908u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172908_0x172908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728ECu; }
    }
    if (ctx->pc != 0x1728ECu) { return; }
    ctx->pc = 0x1728ECu;
    // 0x1728ec: 0xc05ca6c
    ctx->pc = 0x1728ECu;
    SET_GPR_U32(ctx, 31, 0x1728F4u);
    ctx->pc = 0x1728F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1729B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001729B0_0x1729b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728F4u; }
    }
    if (ctx->pc != 0x1728F4u) { return; }
    ctx->pc = 0x1728F4u;
    // 0x1728f4: 0x200202d
    ctx->pc = 0x1728f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728f8: 0xdfbf0008
    ctx->pc = 0x1728f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1728fc: 0xdfb00000
    ctx->pc = 0x1728fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172900: 0x805ca8e
    ctx->pc = 0x172900u;
    ctx->pc = 0x172904u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x172A38u;
    entry_172a38_0x172ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x172908u;
}
