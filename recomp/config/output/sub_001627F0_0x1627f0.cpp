#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001627F0
// Address: 0x1627f0 - 0x162808
void sub_001627F0_0x1627f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1627f0u;

    // 0x1627f0: 0x27bdfff0
    ctx->pc = 0x1627f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1627f4: 0xffbf0000
    ctx->pc = 0x1627f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1627f8: 0x8c84004c
    ctx->pc = 0x1627f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1627fc: 0xdfbf0000
    ctx->pc = 0x1627fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162800: 0x804f434
    ctx->pc = 0x162800u;
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D0D0u;
    sub_0013D0D0_0x13d0d0(rdram, ctx, runtime); return;
    ctx->pc = 0x162808u;
}
