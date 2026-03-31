#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BC2B0
// Address: 0x1bc2b0 - 0x1bc380
void sub_001BC2B0_0x1bc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bc2b0u;

    // 0x1bc2b0: 0x3c010031
    ctx->pc = 0x1bc2b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc2b4: 0xa02065e0
    ctx->pc = 0x1bc2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 26080), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc2b8: 0x3c010031
    ctx->pc = 0x1bc2b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc2bc: 0xa42065e4
    ctx->pc = 0x1bc2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26084), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bc2c0: 0x3c010031
    ctx->pc = 0x1bc2c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc2c4: 0xa42065e6
    ctx->pc = 0x1bc2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26086), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bc2c8: 0x3c010031
    ctx->pc = 0x1bc2c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc2cc: 0xac2065f4
    ctx->pc = 0x1bc2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26100), GPR_U32(ctx, 0));
    // 0x1bc2d0: 0x3c010031
    ctx->pc = 0x1bc2d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49 << 16));
    // 0x1bc2d4: 0x806f0e0
    ctx->pc = 0x1BC2D4u;
    ctx->pc = 0x1BC2D8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 26098), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1BC380u;
    sub_001BC380_0x1bc380(rdram, ctx, runtime); return;
    ctx->pc = 0x1BC2DCu;
    // 0x1bc2dc: 0x0
    ctx->pc = 0x1bc2dcu;
    // NOP
    // 0x1bc2e0: 0x3c080031
    ctx->pc = 0x1bc2e0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)49 << 16));
    // 0x1bc2e4: 0x14800014
    ctx->pc = 0x1BC2E4u;
    {
        const bool branch_taken_0x1bc2e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BC2E8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 26048));
        if (branch_taken_0x1bc2e4) {
            ctx->pc = 0x1BC338u;
            goto label_1bc338;
        }
    }
    ctx->pc = 0x1BC2ECu;
    // 0x1bc2ec: 0x24070001
    ctx->pc = 0x1bc2ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc2f0: 0x24c30001
    ctx->pc = 0x1bc2f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bc2f4: 0x44860000
    ctx->pc = 0x1bc2f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x1bc2f8: 0xa1070000
    ctx->pc = 0x1bc2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1bc2fc: 0xad040004
    ctx->pc = 0x1bc2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x1bc300: 0xad05000c
    ctx->pc = 0x1bc300u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x1bc304: 0x46800020
    ctx->pc = 0x1bc304u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1bc308: 0xad030008
    ctx->pc = 0x1bc308u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1bc30c: 0x240400ff
    ctx->pc = 0x1bc30cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc310: 0x3c033f80
    ctx->pc = 0x1bc310u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1bc314: 0xa1040010
    ctx->pc = 0x1bc314u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bc318: 0xad030014
    ctx->pc = 0x1bc318u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
    // 0x1bc31c: 0x44830800
    ctx->pc = 0x1bc31cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1bc320: 0x0
    ctx->pc = 0x1bc320u;
    // NOP
    // 0x1bc324: 0x46000803
    ctx->pc = 0x1bc324u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bc328: 0x0
    ctx->pc = 0x1bc328u;
    // NOP
    // 0x1bc32c: 0x0
    ctx->pc = 0x1bc32cu;
    // NOP
    // 0x1bc330: 0x10000010
    ctx->pc = 0x1BC330u;
    {
        const bool branch_taken_0x1bc330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BC334u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
        if (branch_taken_0x1bc330) {
            ctx->pc = 0x1BC374u;
            goto label_1bc374;
        }
    }
    ctx->pc = 0x1BC338u;
label_1bc338:
    // 0x1bc338: 0x44860000
    ctx->pc = 0x1bc338u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x1bc33c: 0x24030001
    ctx->pc = 0x1bc33cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc340: 0xa1030000
    ctx->pc = 0x1bc340u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bc344: 0x24c70001
    ctx->pc = 0x1bc344u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bc348: 0x46800020
    ctx->pc = 0x1bc348u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1bc34c: 0x3c033f80
    ctx->pc = 0x1bc34cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1bc350: 0xad040004
    ctx->pc = 0x1bc350u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x1bc354: 0xad05000c
    ctx->pc = 0x1bc354u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x1bc358: 0xad070008
    ctx->pc = 0x1bc358u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x1bc35c: 0xa1000010
    ctx->pc = 0x1bc35cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bc360: 0xad000014
    ctx->pc = 0x1bc360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x1bc364: 0x44830800
    ctx->pc = 0x1bc364u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1bc368: 0x0
    ctx->pc = 0x1bc368u;
    // NOP
    // 0x1bc36c: 0x46000803
    ctx->pc = 0x1bc36cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bc370: 0xe5000018
    ctx->pc = 0x1bc370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_1bc374:
    // 0x1bc374: 0x3e00008
    ctx->pc = 0x1BC374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BC338u: goto label_1bc338;
            case 0x1BC374u: goto label_1bc374;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BC37Cu;
    // 0x1bc37c: 0x0
    ctx->pc = 0x1bc37cu;
    // NOP
}
