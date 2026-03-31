#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001655E0
// Address: 0x1655e0 - 0x1655f8
void sub_001655E0_0x1655e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1655e0u;

    // 0x1655e0: 0x27bdfff0
    ctx->pc = 0x1655e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1655e4: 0xffbf0000
    ctx->pc = 0x1655e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1655e8: 0x8c851b7c
    ctx->pc = 0x1655e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7036)));
    // 0x1655ec: 0xdfbf0000
    ctx->pc = 0x1655ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1655f0: 0x8059f40
    ctx->pc = 0x1655F0u;
    ctx->pc = 0x1655F4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x167D00u;
    sub_00167D00_0x167d00(rdram, ctx, runtime); return;
    ctx->pc = 0x1655F8u;
}
