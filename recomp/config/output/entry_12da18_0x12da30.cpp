#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12da18
// Address: 0x12da18 - 0x12da30
void entry_12da18_0x12da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12da18u;

    // 0x12da18: 0x27bdfff0
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12da1c: 0xffbf0000
    ctx->pc = 0x12da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12da20: 0x8c840004
    ctx->pc = 0x12da20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12da24: 0xdfbf0000
    ctx->pc = 0x12da24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12da28: 0x80493a0
    ctx->pc = 0x12DA28u;
    ctx->pc = 0x12DA2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124E80u;
    entry_124e80_0x124e88(rdram, ctx, runtime); return;
    ctx->pc = 0x12DA30u;
}
