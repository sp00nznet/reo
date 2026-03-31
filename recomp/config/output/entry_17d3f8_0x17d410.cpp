#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17d3f8
// Address: 0x17d3f8 - 0x17d410
void entry_17d3f8_0x17d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d3f8u;

    // 0x17d3f8: 0x27bdfff0
    ctx->pc = 0x17d3f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d3fc: 0xffbf0000
    ctx->pc = 0x17d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d400: 0x8c840024
    ctx->pc = 0x17d400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17d404: 0xdfbf0000
    ctx->pc = 0x17d404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d408: 0x805f8d4
    ctx->pc = 0x17D408u;
    ctx->pc = 0x17D40Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E350u;
    entry_17e350_0x17e368(rdram, ctx, runtime); return;
    ctx->pc = 0x17D410u;
}
