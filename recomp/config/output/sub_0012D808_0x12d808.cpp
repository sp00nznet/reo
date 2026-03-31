#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D808
// Address: 0x12d808 - 0x12d838
void sub_0012D808_0x12d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d808u;

    // 0x12d808: 0x27bdfff0
    ctx->pc = 0x12d808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d80c: 0xffbf0000
    ctx->pc = 0x12d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d810: 0x8c840004
    ctx->pc = 0x12d810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d814: 0xdfbf0000
    ctx->pc = 0x12d814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d818: 0x80493be
    ctx->pc = 0x12D818u;
    ctx->pc = 0x12D81Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124EF8u;
    sub_00124EF8_0x124ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x12D820u;
    // 0x12d820: 0x27bdfff0
    ctx->pc = 0x12d820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d824: 0xffbf0000
    ctx->pc = 0x12d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d828: 0x8c840004
    ctx->pc = 0x12d828u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d82c: 0xdfbf0000
    ctx->pc = 0x12d82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d830: 0x80493c0
    ctx->pc = 0x12D830u;
    ctx->pc = 0x12D834u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F00u;
    entry_124f00_0x124f08(rdram, ctx, runtime); return;
    ctx->pc = 0x12D838u;
}
