#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15f7a8
// Address: 0x15f7a8 - 0x15f7c0
void entry_15f7a8_0x15f7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f7a8u;

    // 0x15f7a8: 0x27bdfff0
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f7ac: 0xffbf0000
    ctx->pc = 0x15f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f7b0: 0x8c840040
    ctx->pc = 0x15f7b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15f7b4: 0xdfbf0000
    ctx->pc = 0x15f7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f7b8: 0x80598b8
    ctx->pc = 0x15F7B8u;
    ctx->pc = 0x15F7BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1662E0u;
    entry_1662e0_0x166350(rdram, ctx, runtime); return;
    ctx->pc = 0x15F7C0u;
}
