#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001581D0
// Address: 0x1581d0 - 0x1581e8
void sub_001581D0_0x1581d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1581d0u;

    // 0x1581d0: 0x27bdfff0
    ctx->pc = 0x1581d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1581d4: 0xffbf0000
    ctx->pc = 0x1581d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1581d8: 0xdfbf0000
    ctx->pc = 0x1581d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1581dc: 0x805607a
    ctx->pc = 0x1581DCu;
    ctx->pc = 0x1581E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1581E8u;
    sub_001581E8_0x1581e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1581E4u;
    // 0x1581e4: 0x0
    ctx->pc = 0x1581e4u;
    // NOP
}
