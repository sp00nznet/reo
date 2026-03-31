#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163720
// Address: 0x163720 - 0x163738
void sub_00163720_0x163720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163720u;

    // 0x163720: 0x27bdfff0
    ctx->pc = 0x163720u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163724: 0xffbf0000
    ctx->pc = 0x163724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163728: 0xdfbf0000
    ctx->pc = 0x163728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16372c: 0x80505f0
    ctx->pc = 0x16372Cu;
    ctx->pc = 0x163730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1417C0u;
    entry_1417c0_0x141800(rdram, ctx, runtime); return;
    ctx->pc = 0x163734u;
    // 0x163734: 0x0
    ctx->pc = 0x163734u;
    // NOP
}
