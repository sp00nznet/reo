#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_162a28
// Address: 0x162a28 - 0x162a70
void entry_162a28_0x162a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162a28u;

    // 0x162a28: 0x27bdfff0
    ctx->pc = 0x162a28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162a2c: 0xffbf0000
    ctx->pc = 0x162a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162a30: 0x8c84004c
    ctx->pc = 0x162a30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x162a34: 0xdfbf0000
    ctx->pc = 0x162a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a38: 0x804f464
    ctx->pc = 0x162A38u;
    ctx->pc = 0x162A3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D190u;
    entry_13d190_0x13d228(rdram, ctx, runtime); return;
    ctx->pc = 0x162A40u;
    // 0x162a40: 0x27bdfff0
    ctx->pc = 0x162a40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162a44: 0xffbf0000
    ctx->pc = 0x162a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162a48: 0x8c84004c
    ctx->pc = 0x162a48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x162a4c: 0xdfbf0000
    ctx->pc = 0x162a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a50: 0x804f48a
    ctx->pc = 0x162A50u;
    ctx->pc = 0x162A54u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D228u;
    entry_13d228_0x13d2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x162A58u;
    // 0x162a58: 0x27bdfff0
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162a5c: 0xffbf0000
    ctx->pc = 0x162a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162a60: 0x8c84004c
    ctx->pc = 0x162a60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x162a64: 0xdfbf0000
    ctx->pc = 0x162a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a68: 0x804f4b0
    ctx->pc = 0x162A68u;
    ctx->pc = 0x162A6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D2C0u;
    entry_13d2c0_0x13d358(rdram, ctx, runtime); return;
    ctx->pc = 0x162A70u;
}
