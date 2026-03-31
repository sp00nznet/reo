#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d3e0
// Address: 0x17d3e0 - 0x17d3f8
void entry_17d3e0_0x17d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d3e0u;

    // 0x17d3e0: 0x27bdfff0
    ctx->pc = 0x17d3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d3e4: 0xffbf0000
    ctx->pc = 0x17d3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d3e8: 0x8c840024
    ctx->pc = 0x17d3e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17d3ec: 0xdfbf0000
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d3f0: 0x805f8ae
    ctx->pc = 0x17D3F0u;
    ctx->pc = 0x17D3F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E2B8u;
    entry_17e2b8_0x17e320(rdram, ctx, runtime); return;
    ctx->pc = 0x17D3F8u;
}
