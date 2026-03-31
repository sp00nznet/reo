#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B620
// Address: 0x12b620 - 0x12b638
void sub_0012B620_0x12b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b620u;

    // 0x12b620: 0x27bdfff0
    ctx->pc = 0x12b620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b624: 0xffbf0000
    ctx->pc = 0x12b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b628: 0xdfbf0000
    ctx->pc = 0x12b628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b62c: 0x805076c
    ctx->pc = 0x12B62Cu;
    ctx->pc = 0x12B630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141DB0u;
    entry_141db0_0x141df0(rdram, ctx, runtime); return;
    ctx->pc = 0x12B634u;
    // 0x12b634: 0x0
    ctx->pc = 0x12b634u;
    // NOP
}
