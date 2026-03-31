#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001EB368
// Address: 0x1eb368 - 0x1eb4f8
void sub_001EB368_0x1eb368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1eb368u;

    // 0x1eb368: 0x27bdffb0
    ctx->pc = 0x1eb368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eb36c: 0xffbe0040
    ctx->pc = 0x1eb36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1eb370: 0xffbf0048
    ctx->pc = 0x1eb370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1eb374: 0x3a0f02d
    ctx->pc = 0x1eb374u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb378: 0xafc40000
    ctx->pc = 0x1eb378u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1eb37c: 0xafc50004
    ctx->pc = 0x1eb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1eb380: 0xafc60008
    ctx->pc = 0x1eb380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x1eb384: 0xafc7000c
    ctx->pc = 0x1eb384u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
    // 0x1eb388: 0xafc80010
    ctx->pc = 0x1eb388u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
    // 0x1eb38c: 0x24041048
    ctx->pc = 0x1eb38cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4168));
    // 0x1eb390: 0xc041bb8
    ctx->pc = 0x1EB390u;
    SET_GPR_U32(ctx, 31, 0x1EB398u);
    ctx->pc = 0x106EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106EE0_0x106ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB398u; }
    }
    if (ctx->pc != 0x1EB398u) { return; }
    ctx->pc = 0x1EB398u;
    // 0x1eb398: 0xafc20014
    ctx->pc = 0x1eb398u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x1eb39c: 0x8fc40014
    ctx->pc = 0x1eb39cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb3a0: 0x8fc50004
    ctx->pc = 0x1eb3a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1eb3a4: 0x8fc6000c
    ctx->pc = 0x1eb3a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1eb3a8: 0xc07ac19
    ctx->pc = 0x1EB3A8u;
    SET_GPR_U32(ctx, 31, 0x1EB3B0u);
    ctx->pc = 0x1EB064u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB064_0x1eb064(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB3B0u; }
    }
    if (ctx->pc != 0x1EB3B0u) { return; }
    ctx->pc = 0x1EB3B0u;
    // 0x1eb3b0: 0x8fc20008
    ctx->pc = 0x1eb3b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1eb3b4: 0x24420007
    ctx->pc = 0x1eb3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7));
    // 0x1eb3b8: 0xafc20030
    ctx->pc = 0x1eb3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1eb3bc: 0x8fc20030
    ctx->pc = 0x1eb3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1eb3c0: 0x4410004
    ctx->pc = 0x1EB3C0u;
    {
        const bool branch_taken_0x1eb3c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1eb3c0) {
            ctx->pc = 0x1EB3D4u;
            goto label_1eb3d4;
        }
    }
    ctx->pc = 0x1EB3C8u;
    // 0x1eb3c8: 0x8fc30030
    ctx->pc = 0x1eb3c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1eb3cc: 0x24630007
    ctx->pc = 0x1eb3ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7));
    // 0x1eb3d0: 0xafc30030
    ctx->pc = 0x1eb3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 3));
label_1eb3d4:
    // 0x1eb3d4: 0x8fc30030
    ctx->pc = 0x1eb3d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1eb3d8: 0x310c3
    ctx->pc = 0x1eb3d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1eb3dc: 0xafc20018
    ctx->pc = 0x1eb3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1eb3e0: 0x8fc20000
    ctx->pc = 0x1eb3e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb3e4: 0xafc2002c
    ctx->pc = 0x1eb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x1eb3e8: 0x8fc20000
    ctx->pc = 0x1eb3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb3ec: 0xafc20028
    ctx->pc = 0x1eb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1eb3f0: 0xafc0001c
    ctx->pc = 0x1eb3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_1eb3f4:
    // 0x1eb3f4: 0x8fc2001c
    ctx->pc = 0x1eb3f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1eb3f8: 0x8fc30018
    ctx->pc = 0x1eb3f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1eb3fc: 0x43102a
    ctx->pc = 0x1eb3fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1eb400: 0x14400003
    ctx->pc = 0x1EB400u;
    {
        const bool branch_taken_0x1eb400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eb400) {
            ctx->pc = 0x1EB410u;
            goto label_1eb410;
        }
    }
    ctx->pc = 0x1EB408u;
    // 0x1eb408: 0x10000031
    ctx->pc = 0x1EB408u;
    {
        const bool branch_taken_0x1eb408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb408) {
            ctx->pc = 0x1EB4D0u;
            goto label_1eb4d0;
        }
    }
    ctx->pc = 0x1EB410u;
label_1eb410:
    // 0x1eb410: 0x8fc20028
    ctx->pc = 0x1eb410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1eb414: 0x8c420000
    ctx->pc = 0x1eb414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb418: 0xafc20020
    ctx->pc = 0x1eb418u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1eb41c: 0x8fc20028
    ctx->pc = 0x1eb41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1eb420: 0x24420004
    ctx->pc = 0x1eb420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eb424: 0x8c420000
    ctx->pc = 0x1eb424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb428: 0xafc20024
    ctx->pc = 0x1eb428u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1eb42c: 0x8fc40020
    ctx->pc = 0x1eb42cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb430: 0xc07a071
    ctx->pc = 0x1EB430u;
    SET_GPR_U32(ctx, 31, 0x1EB438u);
    ctx->pc = 0x1E81C4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81C4_0x1e81c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB438u; }
    }
    if (ctx->pc != 0x1EB438u) { return; }
    ctx->pc = 0x1EB438u;
    // 0x1eb438: 0xafc20020
    ctx->pc = 0x1eb438u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1eb43c: 0x8fc40024
    ctx->pc = 0x1eb43cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1eb440: 0xc07a071
    ctx->pc = 0x1EB440u;
    SET_GPR_U32(ctx, 31, 0x1EB448u);
    ctx->pc = 0x1E81C4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81C4_0x1e81c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB448u; }
    }
    if (ctx->pc != 0x1EB448u) { return; }
    ctx->pc = 0x1EB448u;
    // 0x1eb448: 0xafc20024
    ctx->pc = 0x1eb448u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1eb44c: 0x27c20020
    ctx->pc = 0x1eb44cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
    // 0x1eb450: 0x27c30024
    ctx->pc = 0x1eb450u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 36));
    // 0x1eb454: 0x8fc40014
    ctx->pc = 0x1eb454u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb458: 0x40282d
    ctx->pc = 0x1eb458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb45c: 0x60302d
    ctx->pc = 0x1eb45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb460: 0xc07abcd
    ctx->pc = 0x1EB460u;
    SET_GPR_U32(ctx, 31, 0x1EB468u);
    ctx->pc = 0x1EAF34u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EAF34_0x1eaf34(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB468u; }
    }
    if (ctx->pc != 0x1EB468u) { return; }
    ctx->pc = 0x1EB468u;
    // 0x1eb468: 0x8fc40020
    ctx->pc = 0x1eb468u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb46c: 0xc07a04d
    ctx->pc = 0x1EB46Cu;
    SET_GPR_U32(ctx, 31, 0x1EB474u);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB474u; }
    }
    if (ctx->pc != 0x1EB474u) { return; }
    ctx->pc = 0x1EB474u;
    // 0x1eb474: 0xafc20020
    ctx->pc = 0x1eb474u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1eb478: 0x8fc40024
    ctx->pc = 0x1eb478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1eb47c: 0xc07a04d
    ctx->pc = 0x1EB47Cu;
    SET_GPR_U32(ctx, 31, 0x1EB484u);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB484u; }
    }
    if (ctx->pc != 0x1EB484u) { return; }
    ctx->pc = 0x1EB484u;
    // 0x1eb484: 0xafc20024
    ctx->pc = 0x1eb484u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1eb488: 0x8fc3002c
    ctx->pc = 0x1eb488u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1eb48c: 0x8fc20020
    ctx->pc = 0x1eb48cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1eb490: 0xac620000
    ctx->pc = 0x1eb490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb494: 0x8fc2002c
    ctx->pc = 0x1eb494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1eb498: 0x24430004
    ctx->pc = 0x1eb498u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1eb49c: 0x8fc20024
    ctx->pc = 0x1eb49cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1eb4a0: 0xac620000
    ctx->pc = 0x1eb4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1eb4a4: 0x8fc2001c
    ctx->pc = 0x1eb4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1eb4a8: 0x24420001
    ctx->pc = 0x1eb4a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb4ac: 0xafc2001c
    ctx->pc = 0x1eb4acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x1eb4b0: 0x8fc20028
    ctx->pc = 0x1eb4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1eb4b4: 0x24420008
    ctx->pc = 0x1eb4b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1eb4b8: 0xafc20028
    ctx->pc = 0x1eb4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1eb4bc: 0x8fc2002c
    ctx->pc = 0x1eb4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1eb4c0: 0x24420008
    ctx->pc = 0x1eb4c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1eb4c4: 0xafc2002c
    ctx->pc = 0x1eb4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x1eb4c8: 0x1000ffca
    ctx->pc = 0x1EB4C8u;
    {
        const bool branch_taken_0x1eb4c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb4c8) {
            ctx->pc = 0x1EB3F4u;
            goto label_1eb3f4;
        }
    }
    ctx->pc = 0x1EB4D0u;
label_1eb4d0:
    // 0x1eb4d0: 0x8fc40014
    ctx->pc = 0x1eb4d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1eb4d4: 0xc041bce
    ctx->pc = 0x1EB4D4u;
    SET_GPR_U32(ctx, 31, 0x1EB4DCu);
    ctx->pc = 0x106F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00106F38_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB4DCu; }
    }
    if (ctx->pc != 0x1EB4DCu) { return; }
    ctx->pc = 0x1EB4DCu;
    // 0x1eb4dc: 0x8fc20000
    ctx->pc = 0x1eb4dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1eb4e0: 0x3c0e82d
    ctx->pc = 0x1eb4e0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4e4: 0xdfbe0040
    ctx->pc = 0x1eb4e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb4e8: 0xdfbf0048
    ctx->pc = 0x1eb4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eb4ec: 0x27bd0050
    ctx->pc = 0x1eb4ecu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1eb4f0: 0x3e00008
    ctx->pc = 0x1EB4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB3D4u: goto label_1eb3d4;
            case 0x1EB3F4u: goto label_1eb3f4;
            case 0x1EB410u: goto label_1eb410;
            case 0x1EB4D0u: goto label_1eb4d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB4F8u;
}
