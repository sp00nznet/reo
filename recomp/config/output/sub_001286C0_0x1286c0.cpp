#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001286C0
// Address: 0x1286c0 - 0x128710
void sub_001286C0_0x1286c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1286c0u;

    // 0x1286c0: 0x27bdfff0
    ctx->pc = 0x1286c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1286c4: 0x3c080021
    ctx->pc = 0x1286c4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x1286c8: 0xffbf0000
    ctx->pc = 0x1286c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1286cc: 0x2402ffc0
    ctx->pc = 0x1286ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1286d0: 0x2508d2d0
    ctx->pc = 0x1286d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955728));
    // 0x1286d4: 0x24090800
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1286d8: 0xdfbf0000
    ctx->pc = 0x1286d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1286dc: 0x1024024
    ctx->pc = 0x1286dcu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1286e0: 0x804a1d8
    ctx->pc = 0x1286E0u;
    ctx->pc = 0x1286E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x128760u;
    entry_128760_0x1287a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1286E8u;
    // 0x1286e8: 0x27bdfff0
    ctx->pc = 0x1286e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1286ec: 0x3c080021
    ctx->pc = 0x1286ecu;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x1286f0: 0xffbf0000
    ctx->pc = 0x1286f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1286f4: 0x2402ffc0
    ctx->pc = 0x1286f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1286f8: 0x2508d2d0
    ctx->pc = 0x1286f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955728));
    // 0x1286fc: 0x24090800
    ctx->pc = 0x1286fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x128700: 0xdfbf0000
    ctx->pc = 0x128700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128704: 0x1024024
    ctx->pc = 0x128704u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x128708: 0x804a1ea
    ctx->pc = 0x128708u;
    ctx->pc = 0x12870Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1287A8u;
    entry_1287a8_0x1287e0(rdram, ctx, runtime); return;
    ctx->pc = 0x128710u;
}
