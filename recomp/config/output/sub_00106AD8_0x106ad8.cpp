#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00106AD8
// Address: 0x106ad8 - 0x106af8
void sub_00106AD8_0x106ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106ad8u;

    // 0x106ad8: 0x27bdfff0
    ctx->pc = 0x106ad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106adc: 0x3c020021
    ctx->pc = 0x106adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x106ae0: 0xffbf0000
    ctx->pc = 0x106ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106ae4: 0x8c4497f0
    ctx->pc = 0x106ae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294940656)));
    // 0x106ae8: 0xdfbf0000
    ctx->pc = 0x106ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106aec: 0x8041aa8
    ctx->pc = 0x106AECu;
    ctx->pc = 0x106AF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x106AA0u;
    entry_106aa0_0x106ad8(rdram, ctx, runtime); return;
    ctx->pc = 0x106AF4u;
    // 0x106af4: 0x0
    ctx->pc = 0x106af4u;
    // NOP
}
