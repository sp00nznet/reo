#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0014F6B0
// Address: 0x14f6b0 - 0x14f6d0
void sub_0014F6B0_0x14f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14f6b0u;

    // 0x14f6b0: 0x27bdfff0
    ctx->pc = 0x14f6b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14f6b4: 0x3c060023
    ctx->pc = 0x14f6b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x14f6b8: 0xffbf0000
    ctx->pc = 0x14f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14f6bc: 0x24c6a808
    ctx->pc = 0x14f6bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294944776));
    // 0x14f6c0: 0xdfbf0000
    ctx->pc = 0x14f6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f6c4: 0x8053db4
    ctx->pc = 0x14F6C4u;
    ctx->pc = 0x14F6C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x14F6D0u;
    sub_0014F6D0_0x14f6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x14F6CCu;
    // 0x14f6cc: 0x0
    ctx->pc = 0x14f6ccu;
    // NOP
}
