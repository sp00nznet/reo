#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D8B0
// Address: 0x12d8b0 - 0x12d8c8
void sub_0012D8B0_0x12d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d8b0u;

    // 0x12d8b0: 0x27bdfff0
    ctx->pc = 0x12d8b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d8b4: 0xffbf0000
    ctx->pc = 0x12d8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d8b8: 0x8c840004
    ctx->pc = 0x12d8b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d8bc: 0xdfbf0000
    ctx->pc = 0x12d8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d8c0: 0x80493ce
    ctx->pc = 0x12D8C0u;
    ctx->pc = 0x12D8C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F38u;
    entry_124f38_0x124f40(rdram, ctx, runtime); return;
    ctx->pc = 0x12D8C8u;
}
