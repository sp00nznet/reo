#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015FE88
// Address: 0x15fe88 - 0x15fea0
void sub_0015FE88_0x15fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15fe88u;

    // 0x15fe88: 0x27bdfff0
    ctx->pc = 0x15fe88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15fe8c: 0xffbf0000
    ctx->pc = 0x15fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15fe90: 0x8c840040
    ctx->pc = 0x15fe90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15fe94: 0xdfbf0000
    ctx->pc = 0x15fe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fe98: 0x805d5c4
    ctx->pc = 0x15FE98u;
    ctx->pc = 0x15FE9Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x175710u;
    sub_00175710_0x175710(rdram, ctx, runtime); return;
    ctx->pc = 0x15FEA0u;
}
