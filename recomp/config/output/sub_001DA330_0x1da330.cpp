#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DA330
// Address: 0x1da330 - 0x1da430
void sub_001DA330_0x1da330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1da330u;

    // 0x1da330: 0x27bdfff0
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da334: 0xffbf0000
    ctx->pc = 0x1da334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da338: 0xc076514
    ctx->pc = 0x1DA338u;
    SET_GPR_U32(ctx, 31, 0x1DA340u);
    ctx->pc = 0x1D9450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9450_0x1d9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA340u; }
    }
    if (ctx->pc != 0x1DA340u) { return; }
    ctx->pc = 0x1DA340u;
    // 0x1da340: 0x3c040035
    ctx->pc = 0x1da340u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1da344: 0x282d
    ctx->pc = 0x1da344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da348: 0x248482d0
    ctx->pc = 0x1da348u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935248));
    // 0x1da34c: 0xc041f1a
    ctx->pc = 0x1DA34Cu;
    SET_GPR_U32(ctx, 31, 0x1DA354u);
    ctx->pc = 0x1DA350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2464));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA354u; }
    }
    if (ctx->pc != 0x1DA354u) { return; }
    ctx->pc = 0x1DA354u;
    // 0x1da354: 0x3c010035
    ctx->pc = 0x1da354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da358: 0xc076518
    ctx->pc = 0x1DA358u;
    SET_GPR_U32(ctx, 31, 0x1DA360u);
    ctx->pc = 0x1DA35Cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935240), GPR_U32(ctx, 0));
    ctx->pc = 0x1D9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9460_0x1d9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA360u; }
    }
    if (ctx->pc != 0x1DA360u) { return; }
    ctx->pc = 0x1DA360u;
    // 0x1da360: 0xdfbf0000
    ctx->pc = 0x1da360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da364: 0x3e00008
    ctx->pc = 0x1DA364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA368u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA3B0u: goto label_1da3b0;
            case 0x1DA3E8u: goto label_1da3e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA36Cu;
    // 0x1da36c: 0x0
    ctx->pc = 0x1da36cu;
    // NOP
    // 0x1da370: 0x27bdffd0
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da374: 0x3c010035
    ctx->pc = 0x1da374u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da378: 0xffbf0000
    ctx->pc = 0x1da378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da37c: 0x8c2282c0
    ctx->pc = 0x1da37cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294935232)));
    // 0x1da380: 0x1440000b
    ctx->pc = 0x1DA380u;
    {
        const bool branch_taken_0x1da380 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA384u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1da380) {
            ctx->pc = 0x1DA3B0u;
            goto label_1da3b0;
        }
    }
    ctx->pc = 0x1DA388u;
    // 0x1da388: 0x282d
    ctx->pc = 0x1da388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da38c: 0xc041f1a
    ctx->pc = 0x1DA38Cu;
    SET_GPR_U32(ctx, 31, 0x1DA394u);
    ctx->pc = 0x1DA390u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA394u; }
    }
    if (ctx->pc != 0x1DA394u) { return; }
    ctx->pc = 0x1DA394u;
    // 0x1da394: 0x24020001
    ctx->pc = 0x1da394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da398: 0x27a40010
    ctx->pc = 0x1da398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1da39c: 0xafa20018
    ctx->pc = 0x1da39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1da3a0: 0xc045188
    ctx->pc = 0x1DA3A0u;
    SET_GPR_U32(ctx, 31, 0x1DA3A8u);
    ctx->pc = 0x1DA3A4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3A8u; }
    }
    if (ctx->pc != 0x1DA3A8u) { return; }
    ctx->pc = 0x1DA3A8u;
    // 0x1da3a8: 0x3c010035
    ctx->pc = 0x1da3a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da3ac: 0xac2282c0
    ctx->pc = 0x1da3acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935232), GPR_U32(ctx, 2));
label_1da3b0:
    // 0x1da3b0: 0x3c010035
    ctx->pc = 0x1da3b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da3b4: 0x8c2282b8
    ctx->pc = 0x1da3b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294935224)));
    // 0x1da3b8: 0x1440000b
    ctx->pc = 0x1DA3B8u;
    {
        const bool branch_taken_0x1da3b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA3BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1da3b8) {
            ctx->pc = 0x1DA3E8u;
            goto label_1da3e8;
        }
    }
    ctx->pc = 0x1DA3C0u;
    // 0x1da3c0: 0x282d
    ctx->pc = 0x1da3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3c4: 0xc041f1a
    ctx->pc = 0x1DA3C4u;
    SET_GPR_U32(ctx, 31, 0x1DA3CCu);
    ctx->pc = 0x1DA3C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3CCu; }
    }
    if (ctx->pc != 0x1DA3CCu) { return; }
    ctx->pc = 0x1DA3CCu;
    // 0x1da3cc: 0x24020001
    ctx->pc = 0x1da3ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da3d0: 0x27a40010
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1da3d4: 0xafa20014
    ctx->pc = 0x1da3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1da3d8: 0xc045188
    ctx->pc = 0x1DA3D8u;
    SET_GPR_U32(ctx, 31, 0x1DA3E0u);
    ctx->pc = 0x1DA3DCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3E0u; }
    }
    if (ctx->pc != 0x1DA3E0u) { return; }
    ctx->pc = 0x1DA3E0u;
    // 0x1da3e0: 0x3c010035
    ctx->pc = 0x1da3e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da3e4: 0xac2282b8
    ctx->pc = 0x1da3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935224), GPR_U32(ctx, 2));
label_1da3e8:
    // 0x1da3e8: 0x3c040035
    ctx->pc = 0x1da3e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1da3ec: 0x24848c90
    ctx->pc = 0x1da3ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937744));
    // 0x1da3f0: 0x240500ff
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da3f4: 0xc041f1a
    ctx->pc = 0x1DA3F4u;
    SET_GPR_U32(ctx, 31, 0x1DA3FCu);
    ctx->pc = 0x1DA3F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3FCu; }
    }
    if (ctx->pc != 0x1DA3FCu) { return; }
    ctx->pc = 0x1DA3FCu;
    // 0x1da3fc: 0x3c040035
    ctx->pc = 0x1da3fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x1da400: 0x240500ff
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1da404: 0x24848c70
    ctx->pc = 0x1da404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937712));
    // 0x1da408: 0xc041f1a
    ctx->pc = 0x1DA408u;
    SET_GPR_U32(ctx, 31, 0x1DA410u);
    ctx->pc = 0x1DA40Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA410u; }
    }
    if (ctx->pc != 0x1DA410u) { return; }
    ctx->pc = 0x1DA410u;
    // 0x1da410: 0x3c010035
    ctx->pc = 0x1da410u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da414: 0xac208c88
    ctx->pc = 0x1da414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937736), GPR_U32(ctx, 0));
    // 0x1da418: 0x3c010035
    ctx->pc = 0x1da418u;
    SET_GPR_U32(ctx, 1, ((uint32_t)53 << 16));
    // 0x1da41c: 0xac208c80
    ctx->pc = 0x1da41cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937728), GPR_U32(ctx, 0));
    // 0x1da420: 0xdfbf0000
    ctx->pc = 0x1da420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da424: 0x3e00008
    ctx->pc = 0x1DA424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA3B0u: goto label_1da3b0;
            case 0x1DA3E8u: goto label_1da3e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA42Cu;
    // 0x1da42c: 0x0
    ctx->pc = 0x1da42cu;
    // NOP
}
