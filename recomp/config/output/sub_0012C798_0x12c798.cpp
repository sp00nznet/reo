#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C798
// Address: 0x12c798 - 0x12c7c8
void sub_0012C798_0x12c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c798u;

    // 0x12c798: 0x27bdfff0
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c79c: 0xffbf0000
    ctx->pc = 0x12c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c7a0: 0xdfbf0000
    ctx->pc = 0x12c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c7a4: 0x804fbba
    ctx->pc = 0x12C7A4u;
    ctx->pc = 0x12C7A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EEE8u;
    entry_13eee8_0x13ef58(rdram, ctx, runtime); return;
    ctx->pc = 0x12C7ACu;
    // 0x12c7ac: 0x0
    ctx->pc = 0x12c7acu;
    // NOP
    // 0x12c7b0: 0x27bdfff0
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c7b4: 0xffbf0000
    ctx->pc = 0x12c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c7b8: 0xdfbf0000
    ctx->pc = 0x12c7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c7bc: 0x804fbd6
    ctx->pc = 0x12C7BCu;
    ctx->pc = 0x12C7C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EF58u;
    entry_13ef58_0x13ef78(rdram, ctx, runtime); return;
    ctx->pc = 0x12C7C4u;
    // 0x12c7c4: 0x0
    ctx->pc = 0x12c7c4u;
    // NOP
}
