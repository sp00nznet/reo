#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015E318
// Address: 0x15e318 - 0x15e3f0
void sub_0015E318_0x15e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15e318u;

    // 0x15e318: 0x8c820008
    ctx->pc = 0x15e318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15e31c: 0x8486000c
    ctx->pc = 0x15e31cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15e320: 0xaca20000
    ctx->pc = 0x15e320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15e324: 0x8483000e
    ctx->pc = 0x15e324u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x15e328: 0x8c820000
    ctx->pc = 0x15e328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e32c: 0xaca60014
    ctx->pc = 0x15e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 6));
    // 0x15e330: 0xaca20004
    ctx->pc = 0x15e330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x15e334: 0xaca3000c
    ctx->pc = 0x15e334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x15e338: 0x8c820004
    ctx->pc = 0x15e338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15e33c: 0xaca60010
    ctx->pc = 0x15e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x15e340: 0x3e00008
    ctx->pc = 0x15E340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E344u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E398u: goto label_15e398;
            case 0x15E3D0u: goto label_15e3d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E348u;
    // 0x15e348: 0x27bdffd0
    ctx->pc = 0x15e348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e34c: 0xffb30018
    ctx->pc = 0x15e34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15e350: 0xffb00000
    ctx->pc = 0x15e350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e354: 0xffb10008
    ctx->pc = 0x15e354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15e358: 0xffb20010
    ctx->pc = 0x15e358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15e35c: 0xffbf0020
    ctx->pc = 0x15e35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e360: 0xc057ff0
    ctx->pc = 0x15E360u;
    SET_GPR_U32(ctx, 31, 0x15E368u);
    ctx->pc = 0x15E364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E368u; }
    }
    if (ctx->pc != 0x15E368u) { return; }
    ctx->pc = 0x15E368u;
    // 0x15e368: 0x1440000b
    ctx->pc = 0x15E368u;
    {
        const bool branch_taken_0x15e368 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15E36Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15e368) {
            ctx->pc = 0x15E398u;
            goto label_15e398;
        }
    }
    ctx->pc = 0x15E370u;
    // 0x15e370: 0x3c040024
    ctx->pc = 0x15e370u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15e374: 0xdfb00000
    ctx->pc = 0x15e374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e378: 0xdfb10008
    ctx->pc = 0x15e378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e37c: 0x2484ed28
    ctx->pc = 0x15e37cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962472));
    // 0x15e380: 0xdfb20010
    ctx->pc = 0x15e380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e384: 0xdfb30018
    ctx->pc = 0x15e384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e388: 0xdfbf0020
    ctx->pc = 0x15e388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e38c: 0x8058dd4
    ctx->pc = 0x15E38Cu;
    ctx->pc = 0x15E390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15E394u;
    // 0x15e394: 0x0
    ctx->pc = 0x15e394u;
    // NOP
label_15e398:
    // 0x15e398: 0x8e72007c
    ctx->pc = 0x15e398u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x15e39c: 0x8e700080
    ctx->pc = 0x15e39cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x15e3a0: 0xc057ec8
    ctx->pc = 0x15E3A0u;
    SET_GPR_U32(ctx, 31, 0x15E3A8u);
    ctx->pc = 0x15E3A4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->pc = 0x15FB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FB20_0x15fb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3A8u; }
    }
    if (ctx->pc != 0x15E3A8u) { return; }
    ctx->pc = 0x15E3A8u;
    // 0x15e3a8: 0x212802a
    ctx->pc = 0x15e3a8u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x15e3ac: 0x40202d
    ctx->pc = 0x15e3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3b0: 0x12000007
    ctx->pc = 0x15E3B0u;
    {
        const bool branch_taken_0x15e3b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15E3B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15e3b0) {
            ctx->pc = 0x15E3D0u;
            goto label_15e3d0;
        }
    }
    ctx->pc = 0x15E3B8u;
    // 0x15e3b8: 0xc05d00c
    ctx->pc = 0x15E3B8u;
    SET_GPR_U32(ctx, 31, 0x15E3C0u);
    ctx->pc = 0x174030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174030_0x174030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E3C0u; }
    }
    if (ctx->pc != 0x15E3C0u) { return; }
    ctx->pc = 0x15E3C0u;
    // 0x15e3c0: 0x8e630080
    ctx->pc = 0x15e3c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x15e3c4: 0x24630001
    ctx->pc = 0x15e3c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e3c8: 0xae63007c
    ctx->pc = 0x15e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 3));
    // 0x15e3cc: 0xae630080
    ctx->pc = 0x15e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
label_15e3d0:
    // 0x15e3d0: 0xdfb00000
    ctx->pc = 0x15e3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e3d4: 0xdfb10008
    ctx->pc = 0x15e3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15e3d8: 0xdfb20010
    ctx->pc = 0x15e3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e3dc: 0xdfb30018
    ctx->pc = 0x15e3dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e3e0: 0xdfbf0020
    ctx->pc = 0x15e3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e3e4: 0x3e00008
    ctx->pc = 0x15E3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E3E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15E398u: goto label_15e398;
            case 0x15E3D0u: goto label_15e3d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E3ECu;
    // 0x15e3ec: 0x0
    ctx->pc = 0x15e3ecu;
    // NOP
}
