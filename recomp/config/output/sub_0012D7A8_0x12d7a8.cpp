#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012D7A8
// Address: 0x12d7a8 - 0x12d7c0
void sub_0012D7A8_0x12d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d7a8u;

    // 0x12d7a8: 0x27bdfff0
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d7ac: 0xffbf0000
    ctx->pc = 0x12d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d7b0: 0x8c840004
    ctx->pc = 0x12d7b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d7b4: 0xdfbf0000
    ctx->pc = 0x12d7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7b8: 0x804939e
    ctx->pc = 0x12D7B8u;
    ctx->pc = 0x12D7BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124E78u;
    sub_00124E78_0x124e78(rdram, ctx, runtime); return;
    ctx->pc = 0x12D7C0u;
}
