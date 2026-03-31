#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00169BE0
// Address: 0x169be0 - 0x169bf8
void sub_00169BE0_0x169be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x169be0u;

    // 0x169be0: 0x27bdfff0
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169be4: 0xffbf0000
    ctx->pc = 0x169be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169be8: 0xdfbf0000
    ctx->pc = 0x169be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bec: 0x805a6fe
    ctx->pc = 0x169BECu;
    ctx->pc = 0x169BF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169BF8u;
    sub_00169BF8_0x169bf8(rdram, ctx, runtime); return;
    ctx->pc = 0x169BF4u;
    // 0x169bf4: 0x0
    ctx->pc = 0x169bf4u;
    // NOP
}
