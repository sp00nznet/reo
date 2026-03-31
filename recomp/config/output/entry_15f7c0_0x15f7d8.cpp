#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15f7c0
// Address: 0x15f7c0 - 0x15f7d8
void entry_15f7c0_0x15f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f7c0u;

    // 0x15f7c0: 0x27bdfff0
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f7c4: 0xffbf0000
    ctx->pc = 0x15f7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f7c8: 0x8c840040
    ctx->pc = 0x15f7c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15f7cc: 0xdfbf0000
    ctx->pc = 0x15f7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f7d0: 0x8059856
    ctx->pc = 0x15F7D0u;
    ctx->pc = 0x15F7D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x166158u;
    entry_166158_0x1661e8(rdram, ctx, runtime); return;
    ctx->pc = 0x15F7D8u;
}
