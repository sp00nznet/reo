#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c7c0
// Address: 0x17c7c0 - 0x17c7e0
void entry_17c7c0_0x17c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c7c0u;

    // 0x17c7c0: 0x27bdfff0
    ctx->pc = 0x17c7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c7c4: 0xffbf0000
    ctx->pc = 0x17c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c7c8: 0x8c86003c
    ctx->pc = 0x17c7c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c7cc: 0x8ca5004c
    ctx->pc = 0x17c7ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c7d0: 0x8c840024
    ctx->pc = 0x17c7d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17c7d4: 0xdfbf0000
    ctx->pc = 0x17c7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c7d8: 0x805f798
    ctx->pc = 0x17C7D8u;
    ctx->pc = 0x17C7DCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17DE60u;
    entry_17de60_0x17deb0(rdram, ctx, runtime); return;
    ctx->pc = 0x17C7E0u;
}
