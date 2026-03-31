#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177A30
// Address: 0x177a30 - 0x177a50
void sub_00177A30_0x177a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177a30u;

    // 0x177a30: 0x27bdfff0
    ctx->pc = 0x177a30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a34: 0x24050007
    ctx->pc = 0x177a34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x177a38: 0xffbf0000
    ctx->pc = 0x177a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177a3c: 0x24060008
    ctx->pc = 0x177a3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x177a40: 0xdfbf0000
    ctx->pc = 0x177a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a44: 0x805dec4
    ctx->pc = 0x177A44u;
    ctx->pc = 0x177A48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177B10u;
    sub_00177B10_0x177b10(rdram, ctx, runtime); return;
    ctx->pc = 0x177A4Cu;
    // 0x177a4c: 0x0
    ctx->pc = 0x177a4cu;
    // NOP
}
