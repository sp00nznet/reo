#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1280a8
// Address: 0x1280a8 - 0x1280d0
void entry_1280a8_0x1280d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1280a8u;

    // 0x1280a8: 0x27bdfff0
    ctx->pc = 0x1280a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1280ac: 0x3c020021
    ctx->pc = 0x1280acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1280b0: 0xffbf0000
    ctx->pc = 0x1280b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1280b4: 0x3c030021
    ctx->pc = 0x1280b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1280b8: 0xac44c7b0
    ctx->pc = 0x1280b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952880), GPR_U32(ctx, 4));
    // 0x1280bc: 0xdfbf0000
    ctx->pc = 0x1280bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1280c0: 0x0
    ctx->pc = 0x1280c0u;
    // NOP
    // 0x1280c4: 0x805076c
    ctx->pc = 0x1280C4u;
    ctx->pc = 0x1280C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141DB0u;
    entry_141db0_0x141df0(rdram, ctx, runtime); return;
    ctx->pc = 0x1280CCu;
    // 0x1280cc: 0x0
    ctx->pc = 0x1280ccu;
    // NOP
}
