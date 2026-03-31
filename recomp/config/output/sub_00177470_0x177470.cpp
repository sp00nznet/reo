#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177470
// Address: 0x177470 - 0x1774b0
void sub_00177470_0x177470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177470u;

    // 0x177470: 0xdc870008
    ctx->pc = 0x177470u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x177474: 0xdc880010
    ctx->pc = 0x177474u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x177478: 0xdc860000
    ctx->pc = 0x177478u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17747c: 0xa7482a
    ctx->pc = 0x17747cu;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x177480: 0x8c830018
    ctx->pc = 0x177480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x177484: 0x105102a
    ctx->pc = 0x177484u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x177488: 0xa2400b
    ctx->pc = 0x177488u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
    // 0x17748c: 0xc5302d
    ctx->pc = 0x17748cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x177490: 0xa9380b
    ctx->pc = 0x177490u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
    // 0x177494: 0x24630001
    ctx->pc = 0x177494u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x177498: 0xac830018
    ctx->pc = 0x177498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x17749c: 0xfc860000
    ctx->pc = 0x17749cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1774a0: 0xfc870008
    ctx->pc = 0x1774a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1774a4: 0x3e00008
    ctx->pc = 0x1774A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1774A8u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1774ACu;
    // 0x1774ac: 0x0
    ctx->pc = 0x1774acu;
    // NOP
}
