#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001E930C
// Address: 0x1e930c - 0x1e96b0
void sub_001E930C_0x1e930c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1e930cu;

    // 0x1e930c: 0x27bdffc0
    ctx->pc = 0x1e930cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e9310: 0xffbe0030
    ctx->pc = 0x1e9310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x1e9314: 0xffbf0038
    ctx->pc = 0x1e9314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e9318: 0x3a0f02d
    ctx->pc = 0x1e9318u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e931c: 0xafc40000
    ctx->pc = 0x1e931cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e9320: 0xafc50004
    ctx->pc = 0x1e9320u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e9324: 0xafc60008
    ctx->pc = 0x1e9324u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e9328: 0xafc7000c
    ctx->pc = 0x1e9328u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x1e932c: 0xafc80010
    ctx->pc = 0x1e932cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x1e9330: 0xafc90014
    ctx->pc = 0x1e9330u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 9));
    // 0x1e9334: 0xc0413bc
    ctx->pc = 0x1E9334u;
    SET_GPR_U32(ctx, 31, 0x1E933Cu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E933Cu; }
    }
    if (ctx->pc != 0x1E933Cu) { return; }
    ctx->pc = 0x1E933Cu;
    // 0x1e933c: 0xac400000
    ctx->pc = 0x1e933cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e9340: 0x8fc40000
    ctx->pc = 0x1e9340u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e9344: 0xc07a216
    ctx->pc = 0x1E9344u;
    SET_GPR_U32(ctx, 31, 0x1E934Cu);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E934Cu; }
    }
    if (ctx->pc != 0x1E934Cu) { return; }
    ctx->pc = 0x1E934Cu;
    // 0x1e934c: 0xafc20018
    ctx->pc = 0x1e934cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1e9350: 0x8fc20018
    ctx->pc = 0x1e9350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e9354: 0x14400009
    ctx->pc = 0x1E9354u;
    {
        const bool branch_taken_0x1e9354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9354) {
            ctx->pc = 0x1E937Cu;
            goto label_1e937c;
        }
    }
    ctx->pc = 0x1E935Cu;
    // 0x1e935c: 0xc0413bc
    ctx->pc = 0x1E935Cu;
    SET_GPR_U32(ctx, 31, 0x1E9364u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9364u; }
    }
    if (ctx->pc != 0x1E9364u) { return; }
    ctx->pc = 0x1E9364u;
    // 0x1e9364: 0x40182d
    ctx->pc = 0x1e9364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9368: 0x2402006c
    ctx->pc = 0x1e9368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e936c: 0xac620000
    ctx->pc = 0x1e936cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9370: 0x2402ffff
    ctx->pc = 0x1e9370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9374: 0x10000043
    ctx->pc = 0x1E9374u;
    {
        const bool branch_taken_0x1e9374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9374) {
            ctx->pc = 0x1E9484u;
            goto label_1e9484;
        }
    }
    ctx->pc = 0x1E937Cu;
label_1e937c:
    // 0x1e937c: 0x8fc20018
    ctx->pc = 0x1e937cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e9380: 0x94430004
    ctx->pc = 0x1e9380u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9384: 0x2402007f
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e9388: 0x10620009
    ctx->pc = 0x1E9388u;
    {
        const bool branch_taken_0x1e9388 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9388) {
            ctx->pc = 0x1E93B0u;
            goto label_1e93b0;
        }
    }
    ctx->pc = 0x1E9390u;
    // 0x1e9390: 0xc0413bc
    ctx->pc = 0x1E9390u;
    SET_GPR_U32(ctx, 31, 0x1E9398u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9398u; }
    }
    if (ctx->pc != 0x1E9398u) { return; }
    ctx->pc = 0x1E9398u;
    // 0x1e9398: 0x40182d
    ctx->pc = 0x1e9398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e939c: 0x2402000e
    ctx->pc = 0x1e939cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e93a0: 0xac620000
    ctx->pc = 0x1e93a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e93a4: 0x2402ffff
    ctx->pc = 0x1e93a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e93a8: 0x10000036
    ctx->pc = 0x1E93A8u;
    {
        const bool branch_taken_0x1e93a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e93a8) {
            ctx->pc = 0x1E9484u;
            goto label_1e9484;
        }
    }
    ctx->pc = 0x1E93B0u;
label_1e93b0:
    // 0x1e93b0: 0x8fc20018
    ctx->pc = 0x1e93b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e93b4: 0x94430002
    ctx->pc = 0x1e93b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e93b8: 0x24020002
    ctx->pc = 0x1e93b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e93bc: 0x10620009
    ctx->pc = 0x1E93BCu;
    {
        const bool branch_taken_0x1e93bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e93bc) {
            ctx->pc = 0x1E93E4u;
            goto label_1e93e4;
        }
    }
    ctx->pc = 0x1E93C4u;
    // 0x1e93c4: 0xc0413bc
    ctx->pc = 0x1E93C4u;
    SET_GPR_U32(ctx, 31, 0x1E93CCu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93CCu; }
    }
    if (ctx->pc != 0x1E93CCu) { return; }
    ctx->pc = 0x1E93CCu;
    // 0x1e93cc: 0x40182d
    ctx->pc = 0x1e93ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93d0: 0x2402006b
    ctx->pc = 0x1e93d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 107));
    // 0x1e93d4: 0xac620000
    ctx->pc = 0x1e93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e93d8: 0x2402ffff
    ctx->pc = 0x1e93d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e93dc: 0x10000029
    ctx->pc = 0x1E93DCu;
    {
        const bool branch_taken_0x1e93dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e93dc) {
            ctx->pc = 0x1E9484u;
            goto label_1e9484;
        }
    }
    ctx->pc = 0x1E93E4u;
label_1e93e4:
    // 0x1e93e4: 0x8fc30014
    ctx->pc = 0x1e93e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e93e8: 0x24020010
    ctx->pc = 0x1e93e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e93ec: 0x10620009
    ctx->pc = 0x1E93ECu;
    {
        const bool branch_taken_0x1e93ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e93ec) {
            ctx->pc = 0x1E9414u;
            goto label_1e9414;
        }
    }
    ctx->pc = 0x1E93F4u;
    // 0x1e93f4: 0xc0413bc
    ctx->pc = 0x1E93F4u;
    SET_GPR_U32(ctx, 31, 0x1E93FCu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E93FCu; }
    }
    if (ctx->pc != 0x1E93FCu) { return; }
    ctx->pc = 0x1E93FCu;
    // 0x1e93fc: 0x40182d
    ctx->pc = 0x1e93fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9400: 0x2402007d
    ctx->pc = 0x1e9400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 125));
    // 0x1e9404: 0xac620000
    ctx->pc = 0x1e9404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9408: 0x2402ffff
    ctx->pc = 0x1e9408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e940c: 0x1000001d
    ctx->pc = 0x1E940Cu;
    {
        const bool branch_taken_0x1e940c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e940c) {
            ctx->pc = 0x1E9484u;
            goto label_1e9484;
        }
    }
    ctx->pc = 0x1E9414u;
label_1e9414:
    // 0x1e9414: 0x8fc20010
    ctx->pc = 0x1e9414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9418: 0xafc20020
    ctx->pc = 0x1e9418u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1e941c: 0x8fc20018
    ctx->pc = 0x1e941cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e9420: 0x84440000
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9424: 0x87c50008
    ctx->pc = 0x1e9424u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e9428: 0x8fc20020
    ctx->pc = 0x1e9428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e942c: 0x88430007
    ctx->pc = 0x1e942cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1e9430: 0x98430004
    ctx->pc = 0x1e9430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1e9434: 0x8fc20020
    ctx->pc = 0x1e9434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1e9438: 0x94420002
    ctx->pc = 0x1e9438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e943c: 0x60302d
    ctx->pc = 0x1e943cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9440: 0x40382d
    ctx->pc = 0x1e9440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9444: 0x8fc80004
    ctx->pc = 0x1e9444u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9448: 0xc076114
    ctx->pc = 0x1E9448u;
    SET_GPR_U32(ctx, 31, 0x1E9450u);
    ctx->pc = 0x1D8450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8450_0x1d8450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9450u; }
    }
    if (ctx->pc != 0x1E9450u) { return; }
    ctx->pc = 0x1E9450u;
    // 0x1e9450: 0xa7c2001c
    ctx->pc = 0x1e9450u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9454: 0x87c2001c
    ctx->pc = 0x1e9454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e9458: 0x10400009
    ctx->pc = 0x1E9458u;
    {
        const bool branch_taken_0x1e9458 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9458) {
            ctx->pc = 0x1E9480u;
            goto label_1e9480;
        }
    }
    ctx->pc = 0x1E9460u;
    // 0x1e9460: 0xc0413bc
    ctx->pc = 0x1E9460u;
    SET_GPR_U32(ctx, 31, 0x1E9468u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9468u; }
    }
    if (ctx->pc != 0x1E9468u) { return; }
    ctx->pc = 0x1E9468u;
    // 0x1e9468: 0x40182d
    ctx->pc = 0x1e9468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e946c: 0x2402000e
    ctx->pc = 0x1e946cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e9470: 0xac620000
    ctx->pc = 0x1e9470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9474: 0x2402ffff
    ctx->pc = 0x1e9474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9478: 0x10000002
    ctx->pc = 0x1E9478u;
    {
        const bool branch_taken_0x1e9478 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9478) {
            ctx->pc = 0x1E9484u;
            goto label_1e9484;
        }
    }
    ctx->pc = 0x1E9480u;
label_1e9480:
    // 0x1e9480: 0x8fc20008
    ctx->pc = 0x1e9480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1e9484:
    // 0x1e9484: 0x3c0e82d
    ctx->pc = 0x1e9484u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9488: 0xdfbe0030
    ctx->pc = 0x1e9488u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e948c: 0xdfbf0038
    ctx->pc = 0x1e948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e9490: 0x27bd0040
    ctx->pc = 0x1e9490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9494: 0x3e00008
    ctx->pc = 0x1E9494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E937Cu: goto label_1e937c;
            case 0x1E93B0u: goto label_1e93b0;
            case 0x1E93E4u: goto label_1e93e4;
            case 0x1E9414u: goto label_1e9414;
            case 0x1E9480u: goto label_1e9480;
            case 0x1E9484u: goto label_1e9484;
            case 0x1E9504u: goto label_1e9504;
            case 0x1E9538u: goto label_1e9538;
            case 0x1E956Cu: goto label_1e956c;
            case 0x1E95A8u: goto label_1e95a8;
            case 0x1E95D4u: goto label_1e95d4;
            case 0x1E9604u: goto label_1e9604;
            case 0x1E9650u: goto label_1e9650;
            case 0x1E967Cu: goto label_1e967c;
            case 0x1E9694u: goto label_1e9694;
            case 0x1E9698u: goto label_1e9698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E949Cu;
    // 0x1e949c: 0x27bdffd0
    ctx->pc = 0x1e949cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e94a0: 0xffbe0020
    ctx->pc = 0x1e94a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x1e94a4: 0xffbf0028
    ctx->pc = 0x1e94a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e94a8: 0x3a0f02d
    ctx->pc = 0x1e94a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e94ac: 0xafc40000
    ctx->pc = 0x1e94acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1e94b0: 0xafc50004
    ctx->pc = 0x1e94b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1e94b4: 0xafc60008
    ctx->pc = 0x1e94b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1e94b8: 0xafc7000c
    ctx->pc = 0x1e94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x1e94bc: 0xc0413bc
    ctx->pc = 0x1E94BCu;
    SET_GPR_U32(ctx, 31, 0x1E94C4u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94C4u; }
    }
    if (ctx->pc != 0x1E94C4u) { return; }
    ctx->pc = 0x1E94C4u;
    // 0x1e94c4: 0xac400000
    ctx->pc = 0x1e94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e94c8: 0x8fc40000
    ctx->pc = 0x1e94c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e94cc: 0xc07a216
    ctx->pc = 0x1E94CCu;
    SET_GPR_U32(ctx, 31, 0x1E94D4u);
    ctx->pc = 0x1E8858u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8858_0x1e8858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94D4u; }
    }
    if (ctx->pc != 0x1E94D4u) { return; }
    ctx->pc = 0x1E94D4u;
    // 0x1e94d4: 0xafc20010
    ctx->pc = 0x1e94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x1e94d8: 0x8fc20010
    ctx->pc = 0x1e94d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e94dc: 0x14400009
    ctx->pc = 0x1E94DCu;
    {
        const bool branch_taken_0x1e94dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e94dc) {
            ctx->pc = 0x1E9504u;
            goto label_1e9504;
        }
    }
    ctx->pc = 0x1E94E4u;
    // 0x1e94e4: 0xc0413bc
    ctx->pc = 0x1E94E4u;
    SET_GPR_U32(ctx, 31, 0x1E94ECu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94ECu; }
    }
    if (ctx->pc != 0x1E94ECu) { return; }
    ctx->pc = 0x1E94ECu;
    // 0x1e94ec: 0x40182d
    ctx->pc = 0x1e94ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e94f0: 0x2402006c
    ctx->pc = 0x1e94f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
    // 0x1e94f4: 0xac620000
    ctx->pc = 0x1e94f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e94f8: 0x2402ffff
    ctx->pc = 0x1e94f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e94fc: 0x10000066
    ctx->pc = 0x1E94FCu;
    {
        const bool branch_taken_0x1e94fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e94fc) {
            ctx->pc = 0x1E9698u;
            goto label_1e9698;
        }
    }
    ctx->pc = 0x1E9504u;
label_1e9504:
    // 0x1e9504: 0x8fc20010
    ctx->pc = 0x1e9504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9508: 0x94430004
    ctx->pc = 0x1e9508u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e950c: 0x3402ffff
    ctx->pc = 0x1e950cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e9510: 0x14620009
    ctx->pc = 0x1E9510u;
    {
        const bool branch_taken_0x1e9510 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e9510) {
            ctx->pc = 0x1E9538u;
            goto label_1e9538;
        }
    }
    ctx->pc = 0x1E9518u;
    // 0x1e9518: 0xc0413bc
    ctx->pc = 0x1E9518u;
    SET_GPR_U32(ctx, 31, 0x1E9520u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9520u; }
    }
    if (ctx->pc != 0x1E9520u) { return; }
    ctx->pc = 0x1E9520u;
    // 0x1e9520: 0x40182d
    ctx->pc = 0x1e9520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9524: 0x2402000e
    ctx->pc = 0x1e9524u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e9528: 0xac620000
    ctx->pc = 0x1e9528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e952c: 0x2402ffff
    ctx->pc = 0x1e952cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9530: 0x10000059
    ctx->pc = 0x1E9530u;
    {
        const bool branch_taken_0x1e9530 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9530) {
            ctx->pc = 0x1E9698u;
            goto label_1e9698;
        }
    }
    ctx->pc = 0x1E9538u;
label_1e9538:
    // 0x1e9538: 0x8fc20010
    ctx->pc = 0x1e9538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e953c: 0x94420002
    ctx->pc = 0x1e953cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1e9540: 0xafc2001c
    ctx->pc = 0x1e9540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x1e9544: 0x24020001
    ctx->pc = 0x1e9544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9548: 0x8fc3001c
    ctx->pc = 0x1e9548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e954c: 0x1062002d
    ctx->pc = 0x1E954Cu;
    {
        const bool branch_taken_0x1e954c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e954c) {
            ctx->pc = 0x1E9604u;
            goto label_1e9604;
        }
    }
    ctx->pc = 0x1E9554u;
    // 0x1e9554: 0x24020002
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9558: 0x8fc3001c
    ctx->pc = 0x1e9558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1e955c: 0x10620003
    ctx->pc = 0x1E955Cu;
    {
        const bool branch_taken_0x1e955c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e955c) {
            ctx->pc = 0x1E956Cu;
            goto label_1e956c;
        }
    }
    ctx->pc = 0x1E9564u;
    // 0x1e9564: 0x10000045
    ctx->pc = 0x1E9564u;
    {
        const bool branch_taken_0x1e9564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9564) {
            ctx->pc = 0x1E967Cu;
            goto label_1e967c;
        }
    }
    ctx->pc = 0x1E956Cu;
label_1e956c:
    // 0x1e956c: 0x8fc20010
    ctx->pc = 0x1e956cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9570: 0x24420008
    ctx->pc = 0x1e9570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e9574: 0x27c30018
    ctx->pc = 0x1e9574u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
    // 0x1e9578: 0x40202d
    ctx->pc = 0x1e9578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e957c: 0x60282d
    ctx->pc = 0x1e957cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9580: 0xc07c499
    ctx->pc = 0x1E9580u;
    SET_GPR_U32(ctx, 31, 0x1E9588u);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9588u; }
    }
    if (ctx->pc != 0x1E9588u) { return; }
    ctx->pc = 0x1E9588u;
    // 0x1e9588: 0xa7c20014
    ctx->pc = 0x1e9588u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e958c: 0x87c30014
    ctx->pc = 0x1e958cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e9590: 0x2402e4aa
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294960298));
    // 0x1e9594: 0x14620004
    ctx->pc = 0x1E9594u;
    {
        const bool branch_taken_0x1e9594 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e9594) {
            ctx->pc = 0x1E95A8u;
            goto label_1e95a8;
        }
    }
    ctx->pc = 0x1E959Cu;
    // 0x1e959c: 0xa7c00014
    ctx->pc = 0x1e959cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e95a0: 0x1000003c
    ctx->pc = 0x1E95A0u;
    {
        const bool branch_taken_0x1e95a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e95a0) {
            ctx->pc = 0x1E9694u;
            goto label_1e9694;
        }
    }
    ctx->pc = 0x1E95A8u;
label_1e95a8:
    // 0x1e95a8: 0x87c20014
    ctx->pc = 0x1e95a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e95ac: 0x10400009
    ctx->pc = 0x1E95ACu;
    {
        const bool branch_taken_0x1e95ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e95ac) {
            ctx->pc = 0x1E95D4u;
            goto label_1e95d4;
        }
    }
    ctx->pc = 0x1E95B4u;
    // 0x1e95b4: 0xc0413bc
    ctx->pc = 0x1E95B4u;
    SET_GPR_U32(ctx, 31, 0x1E95BCu);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95BCu; }
    }
    if (ctx->pc != 0x1E95BCu) { return; }
    ctx->pc = 0x1E95BCu;
    // 0x1e95bc: 0x87c30014
    ctx->pc = 0x1e95bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e95c0: 0xac430000
    ctx->pc = 0x1e95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e95c4: 0x2402ffff
    ctx->pc = 0x1e95c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e95c8: 0xa7c20014
    ctx->pc = 0x1e95c8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e95cc: 0x10000031
    ctx->pc = 0x1E95CCu;
    {
        const bool branch_taken_0x1e95cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e95cc) {
            ctx->pc = 0x1E9694u;
            goto label_1e9694;
        }
    }
    ctx->pc = 0x1E95D4u;
label_1e95d4:
    // 0x1e95d4: 0x8fc40018
    ctx->pc = 0x1e95d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e95d8: 0x8fc50004
    ctx->pc = 0x1e95d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e95dc: 0x8fc60008
    ctx->pc = 0x1e95dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e95e0: 0xc07cd84
    ctx->pc = 0x1E95E0u;
    SET_GPR_U32(ctx, 31, 0x1E95E8u);
    ctx->pc = 0x1F3610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3610_0x1f3610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95E8u; }
    }
    if (ctx->pc != 0x1E95E8u) { return; }
    ctx->pc = 0x1E95E8u;
    // 0x1e95e8: 0xa7c20014
    ctx->pc = 0x1e95e8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e95ec: 0x8f84802c
    ctx->pc = 0x1e95ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1e95f0: 0x8fc50018
    ctx->pc = 0x1e95f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1e95f4: 0xc07ca04
    ctx->pc = 0x1E95F4u;
    SET_GPR_U32(ctx, 31, 0x1E95FCu);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95FCu; }
    }
    if (ctx->pc != 0x1E95FCu) { return; }
    ctx->pc = 0x1E95FCu;
    // 0x1e95fc: 0x10000025
    ctx->pc = 0x1E95FCu;
    {
        const bool branch_taken_0x1e95fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e95fc) {
            ctx->pc = 0x1E9694u;
            goto label_1e9694;
        }
    }
    ctx->pc = 0x1E9604u;
label_1e9604:
    // 0x1e9604: 0x8fc40010
    ctx->pc = 0x1e9604u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9608: 0xc07aa87
    ctx->pc = 0x1E9608u;
    SET_GPR_U32(ctx, 31, 0x1E9610u);
    ctx->pc = 0x1EAA1Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAA1C_0x1eaa1c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9610u; }
    }
    if (ctx->pc != 0x1E9610u) { return; }
    ctx->pc = 0x1E9610u;
    // 0x1e9610: 0xa7c20014
    ctx->pc = 0x1e9610u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9614: 0x87c20014
    ctx->pc = 0x1e9614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1e9618: 0x1440001e
    ctx->pc = 0x1E9618u;
    {
        const bool branch_taken_0x1e9618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9618) {
            ctx->pc = 0x1E9694u;
            goto label_1e9694;
        }
    }
    ctx->pc = 0x1E9620u;
    // 0x1e9620: 0x8fc20010
    ctx->pc = 0x1e9620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9624: 0x94430004
    ctx->pc = 0x1e9624u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9628: 0x2402007f
    ctx->pc = 0x1e9628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x1e962c: 0x10620008
    ctx->pc = 0x1E962Cu;
    {
        const bool branch_taken_0x1e962c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e962c) {
            ctx->pc = 0x1E9650u;
            goto label_1e9650;
        }
    }
    ctx->pc = 0x1E9634u;
    // 0x1e9634: 0x8fc20010
    ctx->pc = 0x1e9634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9638: 0x94430004
    ctx->pc = 0x1e9638u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e963c: 0x24020ff4
    ctx->pc = 0x1e963cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4084));
    // 0x1e9640: 0x10620003
    ctx->pc = 0x1E9640u;
    {
        const bool branch_taken_0x1e9640 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e9640) {
            ctx->pc = 0x1E9650u;
            goto label_1e9650;
        }
    }
    ctx->pc = 0x1E9648u;
    // 0x1e9648: 0x10000012
    ctx->pc = 0x1E9648u;
    {
        const bool branch_taken_0x1e9648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9648) {
            ctx->pc = 0x1E9694u;
            goto label_1e9694;
        }
    }
    ctx->pc = 0x1E9650u;
label_1e9650:
    // 0x1e9650: 0x8fc20010
    ctx->pc = 0x1e9650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1e9654: 0x84420000
    ctx->pc = 0x1e9654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9658: 0x87c30008
    ctx->pc = 0x1e9658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1e965c: 0x40202d
    ctx->pc = 0x1e965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9660: 0x8fc50004
    ctx->pc = 0x1e9660u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1e9664: 0x60302d
    ctx->pc = 0x1e9664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9668: 0xc07601c
    ctx->pc = 0x1E9668u;
    SET_GPR_U32(ctx, 31, 0x1E9670u);
    ctx->pc = 0x1D8070u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8070_0x1d8070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9670u; }
    }
    if (ctx->pc != 0x1E9670u) { return; }
    ctx->pc = 0x1E9670u;
    // 0x1e9670: 0xa7c20014
    ctx->pc = 0x1e9670u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9674: 0x10000007
    ctx->pc = 0x1E9674u;
    {
        const bool branch_taken_0x1e9674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9674) {
            ctx->pc = 0x1E9694u;
            goto label_1e9694;
        }
    }
    ctx->pc = 0x1E967Cu;
label_1e967c:
    // 0x1e967c: 0xc0413bc
    ctx->pc = 0x1E967Cu;
    SET_GPR_U32(ctx, 31, 0x1E9684u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9684u; }
    }
    if (ctx->pc != 0x1E9684u) { return; }
    ctx->pc = 0x1E9684u;
    // 0x1e9684: 0x2403006b
    ctx->pc = 0x1e9684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 107));
    // 0x1e9688: 0xac430000
    ctx->pc = 0x1e9688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e968c: 0x2402ffff
    ctx->pc = 0x1e968cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9690: 0xa7c20014
    ctx->pc = 0x1e9690u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
label_1e9694:
    // 0x1e9694: 0x87c20014
    ctx->pc = 0x1e9694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
label_1e9698:
    // 0x1e9698: 0x3c0e82d
    ctx->pc = 0x1e9698u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e969c: 0xdfbe0020
    ctx->pc = 0x1e969cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e96a0: 0xdfbf0028
    ctx->pc = 0x1e96a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e96a4: 0x27bd0030
    ctx->pc = 0x1e96a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e96a8: 0x3e00008
    ctx->pc = 0x1E96A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E937Cu: goto label_1e937c;
            case 0x1E93B0u: goto label_1e93b0;
            case 0x1E93E4u: goto label_1e93e4;
            case 0x1E9414u: goto label_1e9414;
            case 0x1E9480u: goto label_1e9480;
            case 0x1E9484u: goto label_1e9484;
            case 0x1E9504u: goto label_1e9504;
            case 0x1E9538u: goto label_1e9538;
            case 0x1E956Cu: goto label_1e956c;
            case 0x1E95A8u: goto label_1e95a8;
            case 0x1E95D4u: goto label_1e95d4;
            case 0x1E9604u: goto label_1e9604;
            case 0x1E9650u: goto label_1e9650;
            case 0x1E967Cu: goto label_1e967c;
            case 0x1E9694u: goto label_1e9694;
            case 0x1E9698u: goto label_1e9698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E96B0u;
}
