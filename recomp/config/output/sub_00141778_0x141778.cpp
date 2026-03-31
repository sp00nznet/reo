#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00141778
// Address: 0x141778 - 0x1417a8
void sub_00141778_0x141778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x141778u;

    // 0x141778: 0x27bdfff0
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14177c: 0x24040002
    ctx->pc = 0x14177cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x141780: 0xffbf0000
    ctx->pc = 0x141780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141784: 0xdfbf0000
    ctx->pc = 0x141784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141788: 0x8050590
    ctx->pc = 0x141788u;
    ctx->pc = 0x14178Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141640u;
    entry_141640_0x1416d0(rdram, ctx, runtime); return;
    ctx->pc = 0x141790u;
    // 0x141790: 0x27bdfff0
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141794: 0x24040003
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x141798: 0xffbf0000
    ctx->pc = 0x141798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14179c: 0xdfbf0000
    ctx->pc = 0x14179cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1417a0: 0x8050590
    ctx->pc = 0x1417A0u;
    ctx->pc = 0x1417A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141640u;
    entry_141640_0x1416d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1417A8u;
}
