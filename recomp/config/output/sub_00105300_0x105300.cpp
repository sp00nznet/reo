#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00105300
// Address: 0x105300 - 0x105360
void sub_00105300_0x105300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105300u;

    // 0x105300: 0x3c020011
    ctx->pc = 0x105300u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
    // 0x105304: 0x3c030011
    ctx->pc = 0x105304u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17 << 16));
    // 0x105308: 0x3c080011
    ctx->pc = 0x105308u;
    SET_GPR_U32(ctx, 8, ((uint32_t)17 << 16));
    // 0x10530c: 0x3c090011
    ctx->pc = 0x10530cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)17 << 16));
    // 0x105310: 0x2442a970
    ctx->pc = 0x105310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945136));
    // 0x105314: 0x2463a9d8
    ctx->pc = 0x105314u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945240));
    // 0x105318: 0x2508aa58
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294945368));
    // 0x10531c: 0x2529aac0
    ctx->pc = 0x10531cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294945472));
    // 0x105320: 0xac870054
    ctx->pc = 0x105320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x105324: 0xa485000c
    ctx->pc = 0x105324u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x105328: 0xa486000e
    ctx->pc = 0x105328u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x10532c: 0xac820020
    ctx->pc = 0x10532cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x105330: 0xac830024
    ctx->pc = 0x105330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x105334: 0xac880028
    ctx->pc = 0x105334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x105338: 0xac89002c
    ctx->pc = 0x105338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x10533c: 0xac800000
    ctx->pc = 0x10533cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x105340: 0xac800004
    ctx->pc = 0x105340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x105344: 0xac800008
    ctx->pc = 0x105344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x105348: 0xac800010
    ctx->pc = 0x105348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x10534c: 0xac800014
    ctx->pc = 0x10534cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x105350: 0xac800018
    ctx->pc = 0x105350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x105354: 0x3e00008
    ctx->pc = 0x105354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105358u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10535Cu;
    // 0x10535c: 0x0
    ctx->pc = 0x10535cu;
    // NOP
}
