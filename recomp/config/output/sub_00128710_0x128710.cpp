#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00128710
// Address: 0x128710 - 0x128738
void sub_00128710_0x128710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128710u;

    // 0x128710: 0x27bdfff0
    ctx->pc = 0x128710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128714: 0x3c080021
    ctx->pc = 0x128714u;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x128718: 0xffbf0000
    ctx->pc = 0x128718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12871c: 0x2402ffc0
    ctx->pc = 0x12871cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x128720: 0x2508d2d0
    ctx->pc = 0x128720u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955728));
    // 0x128724: 0x24090800
    ctx->pc = 0x128724u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x128728: 0xdfbf0000
    ctx->pc = 0x128728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12872c: 0x1024024
    ctx->pc = 0x12872cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x128730: 0x804a1f8
    ctx->pc = 0x128730u;
    ctx->pc = 0x128734u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1287E0u;
    entry_1287e0_0x128828(rdram, ctx, runtime); return;
    ctx->pc = 0x128738u;
}
