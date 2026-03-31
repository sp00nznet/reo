#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163738
// Address: 0x163738 - 0x163750
void sub_00163738_0x163738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163738u;

    // 0x163738: 0x27bdfff0
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16373c: 0xffbf0000
    ctx->pc = 0x16373cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163740: 0xdfbf0000
    ctx->pc = 0x163740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163744: 0x8050864
    ctx->pc = 0x163744u;
    ctx->pc = 0x163748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x142190u;
    sub_00142190_0x142190(rdram, ctx, runtime); return;
    ctx->pc = 0x16374Cu;
    // 0x16374c: 0x0
    ctx->pc = 0x16374cu;
    // NOP
}
