#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D868
// Address: 0x12d868 - 0x12d880
void sub_0012D868_0x12d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d868u;

    // 0x12d868: 0x27bdfff0
    ctx->pc = 0x12d868u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d86c: 0xffbf0000
    ctx->pc = 0x12d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d870: 0x8c840004
    ctx->pc = 0x12d870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d874: 0xdfbf0000
    ctx->pc = 0x12d874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d878: 0x80493c6
    ctx->pc = 0x12D878u;
    ctx->pc = 0x12D87Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124F18u;
    entry_124f18_0x124f20(rdram, ctx, runtime); return;
    ctx->pc = 0x12D880u;
}
