#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D8C8
// Address: 0x12d8c8 - 0x12d8f8
void sub_0012D8C8_0x12d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d8c8u;

    // 0x12d8c8: 0x27bdfff0
    ctx->pc = 0x12d8c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d8cc: 0xffbf0000
    ctx->pc = 0x12d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d8d0: 0x8c840004
    ctx->pc = 0x12d8d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d8d4: 0xdfbf0000
    ctx->pc = 0x12d8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d8d8: 0x80493d0
    ctx->pc = 0x12D8D8u;
    ctx->pc = 0x12D8DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F40u;
    entry_124f40_0x124f48(rdram, ctx, runtime); return;
    ctx->pc = 0x12D8E0u;
    // 0x12d8e0: 0x27bdfff0
    ctx->pc = 0x12d8e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d8e4: 0xffbf0000
    ctx->pc = 0x12d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d8e8: 0x8c840004
    ctx->pc = 0x12d8e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d8ec: 0xdfbf0000
    ctx->pc = 0x12d8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d8f0: 0x80493d2
    ctx->pc = 0x12D8F0u;
    ctx->pc = 0x12D8F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F48u;
    sub_00124F48_0x124f48(rdram, ctx, runtime); return;
    ctx->pc = 0x12D8F8u;
}
