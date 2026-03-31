#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00160B60
// Address: 0x160b60 - 0x160b78
void sub_00160B60_0x160b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x160b60u;

    // 0x160b60: 0x27bdfff0
    ctx->pc = 0x160b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160b64: 0xffbf0000
    ctx->pc = 0x160b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160b68: 0xdfbf0000
    ctx->pc = 0x160b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b6c: 0x805f3d8
    ctx->pc = 0x160B6Cu;
    ctx->pc = 0x160B70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17CF60u;
    entry_17cf60_0x17d078(rdram, ctx, runtime); return;
    ctx->pc = 0x160B74u;
    // 0x160b74: 0x0
    ctx->pc = 0x160b74u;
    // NOP
}
