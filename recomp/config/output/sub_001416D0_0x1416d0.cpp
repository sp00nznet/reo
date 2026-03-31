#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001416D0
// Address: 0x1416d0 - 0x1416e8
void sub_001416D0_0x1416d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1416d0u;

    // 0x1416d0: 0x27bdfff0
    ctx->pc = 0x1416d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1416d4: 0x24040001
    ctx->pc = 0x1416d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1416d8: 0xffbf0000
    ctx->pc = 0x1416d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1416dc: 0xdfbf0000
    ctx->pc = 0x1416dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1416e0: 0x8050578
    ctx->pc = 0x1416E0u;
    ctx->pc = 0x1416E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1415E0u;
    entry_1415e0_0x141640(rdram, ctx, runtime); return;
    ctx->pc = 0x1416E8u;
}
