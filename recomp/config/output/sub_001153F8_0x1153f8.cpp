#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001153F8
// Address: 0x1153f8 - 0x1154d0
void sub_001153F8_0x1153f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1153f8u;

    // 0x1153f8: 0x27bdff80
    ctx->pc = 0x1153f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1153fc: 0xffb00050
    ctx->pc = 0x1153fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x115400: 0x3c100021
    ctx->pc = 0x115400u;
    SET_GPR_U32(ctx, 16, ((uint32_t)33 << 16));
    // 0x115404: 0xffbf0070
    ctx->pc = 0x115404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115408: 0x8e029d38
    ctx->pc = 0x115408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294942008)));
    // 0x11540c: 0x1c40001c
    ctx->pc = 0x11540Cu;
    {
        const bool branch_taken_0x11540c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x115410u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        if (branch_taken_0x11540c) {
            ctx->pc = 0x115480u;
            goto label_115480;
        }
    }
    ctx->pc = 0x115414u;
    // 0x115414: 0x240200ff
    ctx->pc = 0x115414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x115418: 0xafa00038
    ctx->pc = 0x115418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x11541c: 0xafa20034
    ctx->pc = 0x11541cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x115420: 0xc045188
    ctx->pc = 0x115420u;
    SET_GPR_U32(ctx, 31, 0x115428u);
    ctx->pc = 0x115424u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115428u; }
    }
    if (ctx->pc != 0x115428u) { return; }
    ctx->pc = 0x115428u;
    // 0x115428: 0x3c110026
    ctx->pc = 0x115428u;
    SET_GPR_U32(ctx, 17, ((uint32_t)38 << 16));
    // 0x11542c: 0x4400014
    ctx->pc = 0x11542Cu;
    {
        const bool branch_taken_0x11542c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115430u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294944304), GPR_U32(ctx, 2));
        if (branch_taken_0x11542c) {
            ctx->pc = 0x115480u;
            goto label_115480;
        }
    }
    ctx->pc = 0x115434u;
    // 0x115434: 0x3c020011
    ctx->pc = 0x115434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17 << 16));
    // 0x115438: 0x3c030026
    ctx->pc = 0x115438u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x11543c: 0x3c050026
    ctx->pc = 0x11543cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x115440: 0x24425320
    ctx->pc = 0x115440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21280));
    // 0x115444: 0x2463a230
    ctx->pc = 0x115444u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943280));
    // 0x115448: 0x24a51cf0
    ctx->pc = 0x115448u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7408));
    // 0x11544c: 0x24060400
    ctx->pc = 0x11544cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x115450: 0xafa20004
    ctx->pc = 0x115450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x115454: 0xafa30008
    ctx->pc = 0x115454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x115458: 0x3a0202d
    ctx->pc = 0x115458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11545c: 0xafa6000c
    ctx->pc = 0x11545cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x115460: 0xafa50010
    ctx->pc = 0x115460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x115464: 0xc045108
    ctx->pc = 0x115464u;
    SET_GPR_U32(ctx, 31, 0x11546Cu);
    ctx->pc = 0x115468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x114420u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114420_0x114420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11546Cu; }
    }
    if (ctx->pc != 0x11546Cu) { return; }
    ctx->pc = 0x11546Cu;
    // 0x11546c: 0x40202d
    ctx->pc = 0x11546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115470: 0x4810005
    ctx->pc = 0x115470u;
    {
        const bool branch_taken_0x115470 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x115474u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294942008), GPR_U32(ctx, 4));
        if (branch_taken_0x115470) {
            ctx->pc = 0x115488u;
            goto label_115488;
        }
    }
    ctx->pc = 0x115478u;
    // 0x115478: 0xc04518c
    ctx->pc = 0x115478u;
    SET_GPR_U32(ctx, 31, 0x115480u);
    ctx->pc = 0x11547Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294944304)));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115480u; }
    }
    if (ctx->pc != 0x115480u) { return; }
    ctx->pc = 0x115480u;
label_115480:
    // 0x115480: 0x1000000d
    ctx->pc = 0x115480u;
    {
        const bool branch_taken_0x115480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115484u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x115480) {
            ctx->pc = 0x1154B8u;
            goto label_1154b8;
        }
    }
    ctx->pc = 0x115488u;
label_115488:
    // 0x115488: 0x3c020026
    ctx->pc = 0x115488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x11548c: 0x2443a638
    ctx->pc = 0x11548cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294944312));
    // 0x115490: 0xac40a638
    ctx->pc = 0x115490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944312), GPR_U32(ctx, 0));
    // 0x115494: 0x60282d
    ctx->pc = 0x115494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115498: 0xc045110
    ctx->pc = 0x115498u;
    SET_GPR_U32(ctx, 31, 0x1154A0u);
    ctx->pc = 0x11549Cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x114440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114440_0x114440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154A0u; }
    }
    if (ctx->pc != 0x1154A0u) { return; }
    ctx->pc = 0x1154A0u;
    // 0x1154a0: 0xc045144
    ctx->pc = 0x1154A0u;
    SET_GPR_U32(ctx, 31, 0x1154A8u);
    ctx->pc = 0x114510u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114510_0x114510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154A8u; }
    }
    if (ctx->pc != 0x1154A8u) { return; }
    ctx->pc = 0x1154A8u;
    // 0x1154a8: 0x40202d
    ctx->pc = 0x1154a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154ac: 0xc04512c
    ctx->pc = 0x1154ACu;
    SET_GPR_U32(ctx, 31, 0x1154B4u);
    ctx->pc = 0x1154B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1144B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144B0_0x1144b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154B4u; }
    }
    if (ctx->pc != 0x1154B4u) { return; }
    ctx->pc = 0x1154B4u;
    // 0x1154b4: 0x8e029d38
    ctx->pc = 0x1154b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294942008)));
label_1154b8:
    // 0x1154b8: 0xdfbf0070
    ctx->pc = 0x1154b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1154bc: 0xdfb10060
    ctx->pc = 0x1154bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1154c0: 0xdfb00050
    ctx->pc = 0x1154c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1154c4: 0x3e00008
    ctx->pc = 0x1154C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1154C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115480u: goto label_115480;
            case 0x115488u: goto label_115488;
            case 0x1154B8u: goto label_1154b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1154CCu;
    // 0x1154cc: 0x0
    ctx->pc = 0x1154ccu;
    // NOP
}
