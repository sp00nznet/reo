#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00173990
// Address: 0x173990 - 0x1739a8
void sub_00173990_0x173990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x173990u;

    // 0x173990: 0x27bdfff0
    ctx->pc = 0x173990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173994: 0x24050003
    ctx->pc = 0x173994u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x173998: 0xffbf0000
    ctx->pc = 0x173998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17399c: 0xdfbf0000
    ctx->pc = 0x17399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739a0: 0x805ded2
    ctx->pc = 0x1739A0u;
    ctx->pc = 0x1739A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177B48u;
    entry_177b48_0x177be0(rdram, ctx, runtime); return;
    ctx->pc = 0x1739A8u;
}
