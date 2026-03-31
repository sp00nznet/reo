#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00122690
// Address: 0x122690 - 0x1226a8
void sub_00122690_0x122690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122690u;

    // 0x122690: 0x27bdfff0
    ctx->pc = 0x122690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x122694: 0xffbf0000
    ctx->pc = 0x122694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122698: 0xdfbf0000
    ctx->pc = 0x122698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12269c: 0x8047e1e
    ctx->pc = 0x12269Cu;
    ctx->pc = 0x1226A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x11F878u;
    entry_11f878_0x11fbb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1226A4u;
    // 0x1226a4: 0x0
    ctx->pc = 0x1226a4u;
    // NOP
}
