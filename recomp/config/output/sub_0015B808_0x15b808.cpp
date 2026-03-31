#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015B808
// Address: 0x15b808 - 0x15b820
void sub_0015B808_0x15b808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15b808u;

    // 0x15b808: 0x27bdfff0
    ctx->pc = 0x15b808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15b80c: 0xffbf0000
    ctx->pc = 0x15b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b810: 0xdfbf0000
    ctx->pc = 0x15b810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b814: 0x80540a6
    ctx->pc = 0x15B814u;
    ctx->pc = 0x15B818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x150298u;
    entry_150298_0x1502c0(rdram, ctx, runtime); return;
    ctx->pc = 0x15B81Cu;
    // 0x15b81c: 0x0
    ctx->pc = 0x15b81cu;
    // NOP
}
