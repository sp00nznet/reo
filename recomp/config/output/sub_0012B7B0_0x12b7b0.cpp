#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0012B7B0
// Address: 0x12b7b0 - 0x12b800
void sub_0012B7B0_0x12b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12b7b0u;

    // 0x12b7b0: 0x3c030021
    ctx->pc = 0x12b7b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x12b7b4: 0x3c040021
    ctx->pc = 0x12b7b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)33 << 16));
    // 0x12b7b8: 0x3c050021
    ctx->pc = 0x12b7b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)33 << 16));
    // 0x12b7bc: 0x3c060021
    ctx->pc = 0x12b7bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)33 << 16));
    // 0x12b7c0: 0x3c070021
    ctx->pc = 0x12b7c0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)33 << 16));
    // 0x12b7c4: 0x3c080021
    ctx->pc = 0x12b7c4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)33 << 16));
    // 0x12b7c8: 0x24020001
    ctx->pc = 0x12b7c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b7cc: 0x246304f8
    ctx->pc = 0x12b7ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1272));
    // 0x12b7d0: 0x24840508
    ctx->pc = 0x12b7d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1288));
    // 0x12b7d4: 0x24a50518
    ctx->pc = 0x12b7d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1304));
    // 0x12b7d8: 0x24c60528
    ctx->pc = 0x12b7d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1320));
    // 0x12b7dc: 0x24e70538
    ctx->pc = 0x12b7dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1336));
    // 0x12b7e0: 0x25080548
    ctx->pc = 0x12b7e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1352));
    // 0x12b7e4: 0xfc620000
    ctx->pc = 0x12b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x12b7e8: 0xfc820000
    ctx->pc = 0x12b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x12b7ec: 0xfca20000
    ctx->pc = 0x12b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x12b7f0: 0xfcc20000
    ctx->pc = 0x12b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x12b7f4: 0xfce20000
    ctx->pc = 0x12b7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x12b7f8: 0x3e00008
    ctx->pc = 0x12B7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B7FCu;
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B800u;
}
