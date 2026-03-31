#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C630
// Address: 0x12c630 - 0x12c648
void sub_0012C630_0x12c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c630u;

    // 0x12c630: 0x27bdfff0
    ctx->pc = 0x12c630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c634: 0xffbf0000
    ctx->pc = 0x12c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c638: 0xdfbf0000
    ctx->pc = 0x12c638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c63c: 0x804f8ae
    ctx->pc = 0x12C63Cu;
    ctx->pc = 0x12C640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13E2B8u;
    entry_13e2b8_0x13e568(rdram, ctx, runtime); return;
    ctx->pc = 0x12C644u;
    // 0x12c644: 0x0
    ctx->pc = 0x12c644u;
    // NOP
}
