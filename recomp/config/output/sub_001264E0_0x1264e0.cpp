#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001264E0
// Address: 0x1264e0 - 0x1264f8
void sub_001264E0_0x1264e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1264e0u;

    // 0x1264e0: 0x27bdfff0
    ctx->pc = 0x1264e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1264e4: 0xffbf0000
    ctx->pc = 0x1264e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1264e8: 0xdfbf0000
    ctx->pc = 0x1264e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1264ec: 0x80505b4
    ctx->pc = 0x1264ECu;
    ctx->pc = 0x1264F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1416D0u;
    sub_001416D0_0x1416d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1264F4u;
    // 0x1264f4: 0x0
    ctx->pc = 0x1264f4u;
    // NOP
}
