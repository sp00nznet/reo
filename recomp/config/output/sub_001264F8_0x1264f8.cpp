#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001264F8
// Address: 0x1264f8 - 0x126510
void sub_001264F8_0x1264f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1264f8u;

    // 0x1264f8: 0x27bdfff0
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1264fc: 0xffbf0000
    ctx->pc = 0x1264fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126500: 0xdfbf0000
    ctx->pc = 0x126500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126504: 0x80505ba
    ctx->pc = 0x126504u;
    ctx->pc = 0x126508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1416E8u;
    sub_001416E8_0x1416e8(rdram, ctx, runtime); return;
    ctx->pc = 0x12650Cu;
    // 0x12650c: 0x0
    ctx->pc = 0x12650cu;
    // NOP
}
