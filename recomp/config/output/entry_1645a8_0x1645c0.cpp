#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_1645a8
// Address: 0x1645a8 - 0x1645c0
void entry_1645a8_0x1645c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1645a8u;

    // 0x1645a8: 0x27bdfff0
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1645ac: 0xffbf0000
    ctx->pc = 0x1645acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1645b0: 0xdfbf0000
    ctx->pc = 0x1645b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645b4: 0x804c3f8
    ctx->pc = 0x1645B4u;
    ctx->pc = 0x1645B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x130FE0u;
    entry_130fe0_0x130fe8(rdram, ctx, runtime); return;
    ctx->pc = 0x1645BCu;
    // 0x1645bc: 0x0
    ctx->pc = 0x1645bcu;
    // NOP
}
