#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_15f7d8
// Address: 0x15f7d8 - 0x15f7f0
void entry_15f7d8_0x15f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15f7d8u;

    // 0x15f7d8: 0x27bdfff0
    ctx->pc = 0x15f7d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15f7dc: 0xffbf0000
    ctx->pc = 0x15f7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f7e0: 0x8c840040
    ctx->pc = 0x15f7e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15f7e4: 0xdfbf0000
    ctx->pc = 0x15f7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f7e8: 0x805987a
    ctx->pc = 0x15F7E8u;
    ctx->pc = 0x15F7ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1661E8u;
    entry_1661e8_0x166260(rdram, ctx, runtime); return;
    ctx->pc = 0x15F7F0u;
}
