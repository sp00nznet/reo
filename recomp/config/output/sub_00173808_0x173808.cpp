#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173808
// Address: 0x173808 - 0x173860
void sub_00173808_0x173808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173808u;

    // 0x173808: 0x27bdfff0
    ctx->pc = 0x173808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17380c: 0x282d
    ctx->pc = 0x17380cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173810: 0x24060010
    ctx->pc = 0x173810u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x173814: 0xffb00000
    ctx->pc = 0x173814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173818: 0xffbf0008
    ctx->pc = 0x173818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17381c: 0xc0558b4
    ctx->pc = 0x17381Cu;
    SET_GPR_U32(ctx, 31, 0x173824u);
    ctx->pc = 0x173820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1562D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001562D0_0x1562d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173824u; }
    }
    if (ctx->pc != 0x173824u) { return; }
    ctx->pc = 0x173824u;
    // 0x173824: 0xae000000
    ctx->pc = 0x173824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x173828: 0xae000028
    ctx->pc = 0x173828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x17382c: 0xae000004
    ctx->pc = 0x17382cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x173830: 0xae000008
    ctx->pc = 0x173830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x173834: 0xae00000c
    ctx->pc = 0x173834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x173838: 0xae000010
    ctx->pc = 0x173838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17383c: 0xae000014
    ctx->pc = 0x17383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x173840: 0xae000018
    ctx->pc = 0x173840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x173844: 0xae00001c
    ctx->pc = 0x173844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x173848: 0xae000020
    ctx->pc = 0x173848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x17384c: 0xae000024
    ctx->pc = 0x17384cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x173850: 0xdfbf0008
    ctx->pc = 0x173850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173854: 0xdfb00000
    ctx->pc = 0x173854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173858: 0x3e00008
    ctx->pc = 0x173858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17385Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173860u;
}
