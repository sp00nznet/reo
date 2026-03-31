#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012C700
// Address: 0x12c700 - 0x12c718
void sub_0012C700_0x12c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c700u;

    // 0x12c700: 0x27bdfff0
    ctx->pc = 0x12c700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c704: 0xffbf0000
    ctx->pc = 0x12c704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c708: 0xdfbf0000
    ctx->pc = 0x12c708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c70c: 0x804fb14
    ctx->pc = 0x12C70Cu;
    ctx->pc = 0x12C710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13EC50u;
    sub_0013EC50_0x13ec50(rdram, ctx, runtime); return;
    ctx->pc = 0x12C714u;
    // 0x12c714: 0x0
    ctx->pc = 0x12c714u;
    // NOP
}
