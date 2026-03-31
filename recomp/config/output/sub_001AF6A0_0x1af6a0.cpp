#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF6A0
// Address: 0x1af6a0 - 0x1af710
void sub_001AF6A0_0x1af6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af6a0u;

    // 0x1af6a0: 0x41040
    ctx->pc = 0x1af6a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1af6a4: 0x3c010032
    ctx->pc = 0x1af6a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af6a8: 0x441821
    ctx->pc = 0x1af6a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1af6ac: 0x3c020023
    ctx->pc = 0x1af6acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1af6b0: 0x24040014
    ctx->pc = 0x1af6b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1af6b4: 0x24424350
    ctx->pc = 0x1af6b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17232));
    // 0x1af6b8: 0x433021
    ctx->pc = 0x1af6b8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1af6bc: 0x90c30000
    ctx->pc = 0x1af6bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1af6c0: 0x3c02ff00
    ctx->pc = 0x1af6c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x1af6c4: 0xa023407c
    ctx->pc = 0x1af6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16508), (uint8_t)GPR_U32(ctx, 3));
    // 0x1af6c8: 0x3c010032
    ctx->pc = 0x1af6c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af6cc: 0x90c50001
    ctx->pc = 0x1af6ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1af6d0: 0x9023407c
    ctx->pc = 0x1af6d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16508)));
    // 0x1af6d4: 0x3c010032
    ctx->pc = 0x1af6d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af6d8: 0x31c00
    ctx->pc = 0x1af6d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1af6dc: 0xa025407d
    ctx->pc = 0x1af6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16509), (uint8_t)GPR_U32(ctx, 5));
    // 0x1af6e0: 0x622825
    ctx->pc = 0x1af6e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af6e4: 0x3c010032
    ctx->pc = 0x1af6e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af6e8: 0x9022407d
    ctx->pc = 0x1af6e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16509)));
    // 0x1af6ec: 0x90c60002
    ctx->pc = 0x1af6ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1af6f0: 0x3c010032
    ctx->pc = 0x1af6f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af6f4: 0x21a00
    ctx->pc = 0x1af6f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x1af6f8: 0xa026407e
    ctx->pc = 0x1af6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 16510), (uint8_t)GPR_U32(ctx, 6));
    // 0x1af6fc: 0xa31825
    ctx->pc = 0x1af6fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1af700: 0x3c010032
    ctx->pc = 0x1af700u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af704: 0x9022407e
    ctx->pc = 0x1af704u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16510)));
    // 0x1af708: 0x806bde0
    ctx->pc = 0x1AF708u;
    ctx->pc = 0x1AF70Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AF780u;
    sub_001AF780_0x1af780(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF710u;
}
