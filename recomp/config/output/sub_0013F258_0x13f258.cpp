#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013F258
// Address: 0x13f258 - 0x13f270
void sub_0013F258_0x13f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13f258u;

    // 0x13f258: 0x27bdfff0
    ctx->pc = 0x13f258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f25c: 0xffbf0000
    ctx->pc = 0x13f25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f260: 0xdfbf0000
    ctx->pc = 0x13f260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f264: 0x80505b4
    ctx->pc = 0x13F264u;
    ctx->pc = 0x13F268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1416D0u;
    sub_001416D0_0x1416d0(rdram, ctx, runtime); return;
    ctx->pc = 0x13F26Cu;
    // 0x13f26c: 0x0
    ctx->pc = 0x13f26cu;
    // NOP
}
