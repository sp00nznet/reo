#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15f790
// Address: 0x15f790 - 0x15f7a8
void entry_15f790_0x15f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f790u;

    // 0x15f790: 0x27bdfff0
    ctx->pc = 0x15f790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f794: 0xffbf0000
    ctx->pc = 0x15f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f798: 0x8c840040
    ctx->pc = 0x15f798u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15f79c: 0xdfbf0000
    ctx->pc = 0x15f79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f7a0: 0x8059898
    ctx->pc = 0x15F7A0u;
    ctx->pc = 0x15F7A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x166260u;
    entry_166260_0x1662e0(rdram, ctx, runtime); return;
    ctx->pc = 0x15F7A8u;
}
