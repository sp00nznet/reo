#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17c7e0
// Address: 0x17c7e0 - 0x17c800
void entry_17c7e0_0x17c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17c7e0u;

    // 0x17c7e0: 0x27bdfff0
    ctx->pc = 0x17c7e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c7e4: 0xffbf0000
    ctx->pc = 0x17c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c7e8: 0x8c86003c
    ctx->pc = 0x17c7e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17c7ec: 0x8ca5004c
    ctx->pc = 0x17c7ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x17c7f0: 0x8c840024
    ctx->pc = 0x17c7f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17c7f4: 0xdfbf0000
    ctx->pc = 0x17c7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c7f8: 0x805f834
    ctx->pc = 0x17C7F8u;
    ctx->pc = 0x17C7FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17E0D0u;
    entry_17e0d0_0x17e120(rdram, ctx, runtime); return;
    ctx->pc = 0x17C800u;
}
