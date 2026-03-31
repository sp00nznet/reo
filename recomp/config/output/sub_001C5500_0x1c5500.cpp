#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C5500
// Address: 0x1c5500 - 0x1c5520
void sub_001C5500_0x1c5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c5500u;

    // 0x1c5500: 0x3c010001
    ctx->pc = 0x1c5500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)1 << 16));
    // 0x1c5504: 0x24067000
    ctx->pc = 0x1c5504u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1c5508: 0x812821
    ctx->pc = 0x1c5508u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1c550c: 0x3c040032
    ctx->pc = 0x1c550cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x1c5510: 0x8041eac
    ctx->pc = 0x1C5510u;
    ctx->pc = 0x1C5514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937440));
    ctx->pc = 0x107AB0u;
    sub_00107AB0_0x107ab0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5518u;
    // 0x1c5518: 0x0
    ctx->pc = 0x1c5518u;
    // NOP
    // 0x1c551c: 0x0
    ctx->pc = 0x1c551cu;
    // NOP
}
