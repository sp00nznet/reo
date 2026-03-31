#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163EA8
// Address: 0x163ea8 - 0x163ee0
void sub_00163EA8_0x163ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163ea8u;

    // 0x163ea8: 0x27bdfff0
    ctx->pc = 0x163ea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163eac: 0xffb00000
    ctx->pc = 0x163eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163eb0: 0xffbf0008
    ctx->pc = 0x163eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x163eb4: 0xc058da4
    ctx->pc = 0x163EB4u;
    SET_GPR_U32(ctx, 31, 0x163EBCu);
    ctx->pc = 0x163690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163690_0x163690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EBCu; }
    }
    if (ctx->pc != 0x163EBCu) { return; }
    ctx->pc = 0x163EBCu;
    // 0x163ebc: 0xc058fb8
    ctx->pc = 0x163EBCu;
    SET_GPR_U32(ctx, 31, 0x163EC4u);
    ctx->pc = 0x163EC0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163EE0_0x163ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EC4u; }
    }
    if (ctx->pc != 0x163EC4u) { return; }
    ctx->pc = 0x163EC4u;
    // 0x163ec4: 0xc058dac
    ctx->pc = 0x163EC4u;
    SET_GPR_U32(ctx, 31, 0x163ECCu);
    ctx->pc = 0x163EC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1636B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001636B0_0x1636b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163ECCu; }
    }
    if (ctx->pc != 0x163ECCu) { return; }
    ctx->pc = 0x163ECCu;
    // 0x163ecc: 0x102d
    ctx->pc = 0x163eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ed0: 0xdfb00000
    ctx->pc = 0x163ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ed4: 0xdfbf0008
    ctx->pc = 0x163ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163ed8: 0x3e00008
    ctx->pc = 0x163ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163EDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163EE0u;
}
