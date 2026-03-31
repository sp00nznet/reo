#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c8d0
// Address: 0x17c8d0 - 0x17c8f0
void entry_17c8d0_0x17c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c8d0u;

    // 0x17c8d0: 0x27bdfff0
    ctx->pc = 0x17c8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c8d4: 0xffbf0000
    ctx->pc = 0x17c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c8d8: 0x8c86003c
    ctx->pc = 0x17c8d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c8dc: 0x8ca5004c
    ctx->pc = 0x17c8dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c8e0: 0x8c840030
    ctx->pc = 0x17c8e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17c8e4: 0xdfbf0000
    ctx->pc = 0x17c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c8e8: 0x805e9de
    ctx->pc = 0x17C8E8u;
    ctx->pc = 0x17C8ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A778u;
    entry_17a778_0x17a7b8(rdram, ctx, runtime); return;
    ctx->pc = 0x17C8F0u;
}
