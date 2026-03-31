#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D630
// Address: 0x16d630 - 0x16d648
void sub_0016D630_0x16d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d630u;

    // 0x16d630: 0x27bdfff0
    ctx->pc = 0x16d630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d634: 0xffbf0000
    ctx->pc = 0x16d634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d638: 0x8c851b38
    ctx->pc = 0x16d638u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6968)));
    // 0x16d63c: 0xdfbf0000
    ctx->pc = 0x16d63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d640: 0x8059f40
    ctx->pc = 0x16D640u;
    ctx->pc = 0x16D644u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x167D00u;
    sub_00167D00_0x167d00(rdram, ctx, runtime); return;
    ctx->pc = 0x16D648u;
}
