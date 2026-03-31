#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D7D8
// Address: 0x12d7d8 - 0x12d808
void sub_0012D7D8_0x12d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d7d8u;

    // 0x12d7d8: 0x27bdfff0
    ctx->pc = 0x12d7d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d7dc: 0xffbf0000
    ctx->pc = 0x12d7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d7e0: 0x8c840004
    ctx->pc = 0x12d7e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d7e4: 0xdfbf0000
    ctx->pc = 0x12d7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7e8: 0x80493ba
    ctx->pc = 0x12D7E8u;
    ctx->pc = 0x12D7ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124EE8u;
    entry_124ee8_0x124ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7F0u;
    // 0x12d7f0: 0x27bdfff0
    ctx->pc = 0x12d7f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d7f4: 0xffbf0000
    ctx->pc = 0x12d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d7f8: 0x8c840004
    ctx->pc = 0x12d7f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d7fc: 0xdfbf0000
    ctx->pc = 0x12d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d800: 0x80493bc
    ctx->pc = 0x12D800u;
    ctx->pc = 0x12D804u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124EF0u;
    entry_124ef0_0x124ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x12D808u;
}
