#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c8f0
// Address: 0x17c8f0 - 0x17c910
void entry_17c8f0_0x17c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c8f0u;

    // 0x17c8f0: 0x27bdfff0
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c8f4: 0xffbf0000
    ctx->pc = 0x17c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c8f8: 0x8c86003c
    ctx->pc = 0x17c8f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c8fc: 0x8ca5004c
    ctx->pc = 0x17c8fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c900: 0x8c840030
    ctx->pc = 0x17c900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17c904: 0xdfbf0000
    ctx->pc = 0x17c904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c908: 0x805e9ee
    ctx->pc = 0x17C908u;
    ctx->pc = 0x17C90Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A7B8u;
    entry_17a7b8_0x17a7d0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C910u;
}
