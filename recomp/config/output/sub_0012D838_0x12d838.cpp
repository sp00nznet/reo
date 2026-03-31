#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D838
// Address: 0x12d838 - 0x12d868
void sub_0012D838_0x12d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d838u;

    // 0x12d838: 0x27bdfff0
    ctx->pc = 0x12d838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d83c: 0xffbf0000
    ctx->pc = 0x12d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d840: 0x8c840004
    ctx->pc = 0x12d840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d844: 0xdfbf0000
    ctx->pc = 0x12d844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d848: 0x80493c4
    ctx->pc = 0x12D848u;
    ctx->pc = 0x12D84Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F10u;
    entry_124f10_0x124f18(rdram, ctx, runtime); return;
    ctx->pc = 0x12D850u;
    // 0x12d850: 0x27bdfff0
    ctx->pc = 0x12d850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d854: 0xffbf0000
    ctx->pc = 0x12d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d858: 0x8c840004
    ctx->pc = 0x12d858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d85c: 0xdfbf0000
    ctx->pc = 0x12d85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d860: 0x80493c2
    ctx->pc = 0x12D860u;
    ctx->pc = 0x12D864u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F08u;
    entry_124f08_0x124f10(rdram, ctx, runtime); return;
    ctx->pc = 0x12D868u;
}
