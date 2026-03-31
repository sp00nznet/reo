#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001635E8
// Address: 0x1635e8 - 0x163608
void sub_001635E8_0x1635e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1635e8u;

    // 0x1635e8: 0x27bdfff0
    ctx->pc = 0x1635e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1635ec: 0x3c020027
    ctx->pc = 0x1635ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1635f0: 0xffbf0000
    ctx->pc = 0x1635f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1635f4: 0x24040006
    ctx->pc = 0x1635f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1635f8: 0x8c450748
    ctx->pc = 0x1635f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1864)));
    // 0x1635fc: 0xdfbf0000
    ctx->pc = 0x1635fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163600: 0x80506f8
    ctx->pc = 0x163600u;
    ctx->pc = 0x163604u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141BE0u;
    sub_00141BE0_0x141be0(rdram, ctx, runtime); return;
    ctx->pc = 0x163608u;
}
