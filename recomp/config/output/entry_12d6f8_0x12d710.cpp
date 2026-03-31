#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12d6f8
// Address: 0x12d6f8 - 0x12d710
void entry_12d6f8_0x12d710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d6f8u;

    // 0x12d6f8: 0x27bdfff0
    ctx->pc = 0x12d6f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d6fc: 0xffbf0000
    ctx->pc = 0x12d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d700: 0x8c840004
    ctx->pc = 0x12d700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d704: 0xdfbf0000
    ctx->pc = 0x12d704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d708: 0x80493fc
    ctx->pc = 0x12D708u;
    ctx->pc = 0x12D70Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x124FF0u;
    entry_124ff0_0x125058(rdram, ctx, runtime); return;
    ctx->pc = 0x12D710u;
}
