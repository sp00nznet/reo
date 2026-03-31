#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B0D8
// Address: 0x12b0d8 - 0x12b0f0
void sub_0012B0D8_0x12b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b0d8u;

    // 0x12b0d8: 0x27bdfff0
    ctx->pc = 0x12b0d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b0dc: 0xffbf0000
    ctx->pc = 0x12b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b0e0: 0xdfbf0000
    ctx->pc = 0x12b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b0e4: 0x8045150
    ctx->pc = 0x12B0E4u;
    ctx->pc = 0x12B0E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x114540u;
    sub_00114540_0x114540(rdram, ctx, runtime); return;
    ctx->pc = 0x12B0ECu;
    // 0x12b0ec: 0x0
    ctx->pc = 0x12b0ecu;
    // NOP
}
