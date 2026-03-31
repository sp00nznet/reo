#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00162808
// Address: 0x162808 - 0x162a10
void sub_00162808_0x162808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x162808u;

label_162808:
    // 0x162808: 0x27bdffd0
    ctx->pc = 0x162808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16280c: 0xffb00010
    ctx->pc = 0x16280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162810: 0xa0802d
    ctx->pc = 0x162810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162814: 0xffb10018
    ctx->pc = 0x162814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x162818: 0x80882d
    ctx->pc = 0x162818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16281c: 0xffb20020
    ctx->pc = 0x16281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162820: 0xffbf0028
    ctx->pc = 0x162820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x162824: 0xc057ff0
    ctx->pc = 0x162824u;
    SET_GPR_U32(ctx, 31, 0x16282Cu);
    ctx->pc = 0x162828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16282Cu; }
    }
    if (ctx->pc != 0x16282Cu) { return; }
    ctx->pc = 0x16282Cu;
    // 0x16282c: 0x3a0382d
    ctx->pc = 0x16282cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162830: 0x27a80004
    ctx->pc = 0x162830u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 4));
    // 0x162834: 0x200202d
    ctx->pc = 0x162834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162838: 0x240282d
    ctx->pc = 0x162838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16283c: 0x14400006
    ctx->pc = 0x16283Cu;
    {
        const bool branch_taken_0x16283c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162840u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 8));
        if (branch_taken_0x16283c) {
            ctx->pc = 0x162858u;
            goto label_162858;
        }
    }
    ctx->pc = 0x162844u;
    // 0x162844: 0x3c040024
    ctx->pc = 0x162844u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162848: 0xc058dd4
    ctx->pc = 0x162848u;
    SET_GPR_U32(ctx, 31, 0x162850u);
    ctx->pc = 0x16284Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 712));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162850u; }
    }
    if (ctx->pc != 0x162850u) { return; }
    ctx->pc = 0x162850u;
    // 0x162850: 0x10000017
    ctx->pc = 0x162850u;
    {
        const bool branch_taken_0x162850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162854u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x162850) {
            ctx->pc = 0x1628B0u;
            goto label_1628b0;
        }
    }
    ctx->pc = 0x162858u;
label_162858:
    // 0x162858: 0x8e260110
    ctx->pc = 0x162858u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x16285c: 0xc04a786
    ctx->pc = 0x16285Cu;
    SET_GPR_U32(ctx, 31, 0x162864u);
    ctx->pc = 0x162860u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->pc = 0x129E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129E18_0x129e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162864u; }
    }
    if (ctx->pc != 0x162864u) { return; }
    ctx->pc = 0x162864u;
    // 0x162864: 0x200202d
    ctx->pc = 0x162864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162868: 0x200282d
    ctx->pc = 0x162868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16286c: 0x1440000c
    ctx->pc = 0x16286Cu;
    {
        const bool branch_taken_0x16286c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162870u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16286c) {
            ctx->pc = 0x1628A0u;
            goto label_1628a0;
        }
    }
    ctx->pc = 0x162874u;
    // 0x162874: 0xc04a7dc
    ctx->pc = 0x162874u;
    SET_GPR_U32(ctx, 31, 0x16287Cu);
    ctx->pc = 0x129F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16287Cu; }
    }
    if (ctx->pc != 0x16287Cu) { return; }
    ctx->pc = 0x16287Cu;
    // 0x16287c: 0x220202d
    ctx->pc = 0x16287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162880: 0x8fa60000
    ctx->pc = 0x162880u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162884: 0x40282d
    ctx->pc = 0x162884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162888: 0x8fa70004
    ctx->pc = 0x162888u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16288c: 0xc04f34e
    ctx->pc = 0x16288Cu;
    SET_GPR_U32(ctx, 31, 0x162894u);
    ctx->pc = 0x162890u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x13CD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD38_0x13cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162894u; }
    }
    if (ctx->pc != 0x162894u) { return; }
    ctx->pc = 0x162894u;
    // 0x162894: 0x10000006
    ctx->pc = 0x162894u;
    {
        const bool branch_taken_0x162894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162898u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x162894) {
            ctx->pc = 0x1628B0u;
            goto label_1628b0;
        }
    }
    ctx->pc = 0x16289Cu;
    // 0x16289c: 0x0
    ctx->pc = 0x16289cu;
    // NOP
label_1628a0:
    // 0x1628a0: 0x3c040024
    ctx->pc = 0x1628a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1628a4: 0xc058dd4
    ctx->pc = 0x1628A4u;
    SET_GPR_U32(ctx, 31, 0x1628ACu);
    ctx->pc = 0x1628A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 760));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628ACu; }
    }
    if (ctx->pc != 0x1628ACu) { return; }
    ctx->pc = 0x1628ACu;
    // 0x1628ac: 0xdfb00010
    ctx->pc = 0x1628acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1628b0:
    // 0x1628b0: 0xdfb10018
    ctx->pc = 0x1628b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1628b4: 0xdfb20020
    ctx->pc = 0x1628b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1628b8: 0xdfbf0028
    ctx->pc = 0x1628b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1628bc: 0x3e00008
    ctx->pc = 0x1628BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1628C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162808u: goto label_162808;
            case 0x162858u: goto label_162858;
            case 0x1628A0u: goto label_1628a0;
            case 0x1628B0u: goto label_1628b0;
            case 0x162910u: goto label_162910;
            case 0x162928u: goto label_162928;
            case 0x162988u: goto label_162988;
            case 0x1629B8u: goto label_1629b8;
            case 0x1629E0u: goto label_1629e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1628C4u;
    // 0x1628c4: 0x0
    ctx->pc = 0x1628c4u;
    // NOP
    // 0x1628c8: 0x27bdffe0
    ctx->pc = 0x1628c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1628cc: 0xffb00000
    ctx->pc = 0x1628ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1628d0: 0x80802d
    ctx->pc = 0x1628d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628d4: 0xffb10008
    ctx->pc = 0x1628d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1628d8: 0xa0882d
    ctx->pc = 0x1628d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628dc: 0xffb20010
    ctx->pc = 0x1628dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1628e0: 0xffbf0018
    ctx->pc = 0x1628e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1628e4: 0xc057ff0
    ctx->pc = 0x1628E4u;
    SET_GPR_U32(ctx, 31, 0x1628ECu);
    ctx->pc = 0x1628E8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628ECu; }
    }
    if (ctx->pc != 0x1628ECu) { return; }
    ctx->pc = 0x1628ECu;
    // 0x1628ec: 0x14400008
    ctx->pc = 0x1628ECu;
    {
        const bool branch_taken_0x1628ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1628F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x1628ec) {
            ctx->pc = 0x162910u;
            goto label_162910;
        }
    }
    ctx->pc = 0x1628F4u;
    // 0x1628f4: 0x3c040024
    ctx->pc = 0x1628f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1628f8: 0xdfb00000
    ctx->pc = 0x1628f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1628fc: 0xdfb10008
    ctx->pc = 0x1628fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162900: 0x24840330
    ctx->pc = 0x162900u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 816));
    // 0x162904: 0xdfb20010
    ctx->pc = 0x162904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162908: 0x8058dd4
    ctx->pc = 0x162908u;
    ctx->pc = 0x16290Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x162910u;
label_162910:
    // 0x162910: 0xc04f3de
    ctx->pc = 0x162910u;
    SET_GPR_U32(ctx, 31, 0x162918u);
    ctx->pc = 0x162914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x13CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CF78_0x13cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162918u; }
    }
    if (ctx->pc != 0x162918u) { return; }
    ctx->pc = 0x162918u;
    // 0x162918: 0x200202d
    ctx->pc = 0x162918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16291c: 0x240302d
    ctx->pc = 0x16291cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162920: 0xc058a02
    ctx->pc = 0x162920u;
    SET_GPR_U32(ctx, 31, 0x162928u);
    ctx->pc = 0x162924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162808u;
    goto label_162808;
    ctx->pc = 0x162928u;
label_162928:
    // 0x162928: 0x200202d
    ctx->pc = 0x162928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16292c: 0xc058998
    ctx->pc = 0x16292Cu;
    SET_GPR_U32(ctx, 31, 0x162934u);
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x162660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162660_0x162660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162934u; }
    }
    if (ctx->pc != 0x162934u) { return; }
    ctx->pc = 0x162934u;
    // 0x162934: 0x200202d
    ctx->pc = 0x162934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162938: 0xdfb10008
    ctx->pc = 0x162938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16293c: 0xdfb00000
    ctx->pc = 0x16293cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162940: 0xdfb20010
    ctx->pc = 0x162940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162944: 0xdfbf0018
    ctx->pc = 0x162944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162948: 0x8058974
    ctx->pc = 0x162948u;
    ctx->pc = 0x16294Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1625D0u;
    entry_1625d0_0x162660(rdram, ctx, runtime); return;
    ctx->pc = 0x162950u;
    // 0x162950: 0x27bdffe0
    ctx->pc = 0x162950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162954: 0xffb00000
    ctx->pc = 0x162954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162958: 0xa0802d
    ctx->pc = 0x162958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16295c: 0xffb10008
    ctx->pc = 0x16295cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162960: 0xffbf0010
    ctx->pc = 0x162960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162964: 0xc057ff0
    ctx->pc = 0x162964u;
    SET_GPR_U32(ctx, 31, 0x16296Cu);
    ctx->pc = 0x162968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16296Cu; }
    }
    if (ctx->pc != 0x16296Cu) { return; }
    ctx->pc = 0x16296Cu;
    // 0x16296c: 0x14400006
    ctx->pc = 0x16296Cu;
    {
        const bool branch_taken_0x16296c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162970u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16296c) {
            ctx->pc = 0x162988u;
            goto label_162988;
        }
    }
    ctx->pc = 0x162974u;
    // 0x162974: 0x3c040024
    ctx->pc = 0x162974u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x162978: 0xc058dd4
    ctx->pc = 0x162978u;
    SET_GPR_U32(ctx, 31, 0x162980u);
    ctx->pc = 0x16297Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 864));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162980u; }
    }
    if (ctx->pc != 0x162980u) { return; }
    ctx->pc = 0x162980u;
    // 0x162980: 0x10000017
    ctx->pc = 0x162980u;
    {
        const bool branch_taken_0x162980 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162984u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162980) {
            ctx->pc = 0x1629E0u;
            goto label_1629e0;
        }
    }
    ctx->pc = 0x162988u;
label_162988:
    // 0x162988: 0xc0589fc
    ctx->pc = 0x162988u;
    SET_GPR_U32(ctx, 31, 0x162990u);
    ctx->pc = 0x1627F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001627F0_0x1627f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162990u; }
    }
    if (ctx->pc != 0x162990u) { return; }
    ctx->pc = 0x162990u;
    // 0x162990: 0x202182a
    ctx->pc = 0x162990u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x162994: 0x10600012
    ctx->pc = 0x162994u;
    {
        const bool branch_taken_0x162994 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x162998u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162994) {
            ctx->pc = 0x1629E0u;
            goto label_1629e0;
        }
    }
    ctx->pc = 0x16299Cu;
    // 0x16299c: 0x6010006
    ctx->pc = 0x16299Cu;
    {
        const bool branch_taken_0x16299c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1629A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16299c) {
            ctx->pc = 0x1629B8u;
            goto label_1629b8;
        }
    }
    ctx->pc = 0x1629A4u;
    // 0x1629a4: 0x3c040024
    ctx->pc = 0x1629a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1629a8: 0xc058dd4
    ctx->pc = 0x1629A8u;
    SET_GPR_U32(ctx, 31, 0x1629B0u);
    ctx->pc = 0x1629ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 912));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629B0u; }
    }
    if (ctx->pc != 0x1629B0u) { return; }
    ctx->pc = 0x1629B0u;
    // 0x1629b0: 0x1000000b
    ctx->pc = 0x1629B0u;
    {
        const bool branch_taken_0x1629b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1629B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1629b0) {
            ctx->pc = 0x1629E0u;
            goto label_1629e0;
        }
    }
    ctx->pc = 0x1629B8u;
label_1629b8:
    // 0x1629b8: 0xc058a84
    ctx->pc = 0x1629B8u;
    SET_GPR_U32(ctx, 31, 0x1629C0u);
    ctx->pc = 0x1629BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00162A10_0x162a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629C0u; }
    }
    if (ctx->pc != 0x1629C0u) { return; }
    ctx->pc = 0x1629C0u;
    // 0x1629c0: 0x220202d
    ctx->pc = 0x1629c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629c4: 0xdfb00000
    ctx->pc = 0x1629c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1629c8: 0x40282d
    ctx->pc = 0x1629c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629cc: 0xdfb10008
    ctx->pc = 0x1629ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1629d0: 0xdfbf0010
    ctx->pc = 0x1629d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1629d4: 0x8058a8a
    ctx->pc = 0x1629D4u;
    ctx->pc = 0x1629D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x162A28u;
    entry_162a28_0x162a70(rdram, ctx, runtime); return;
    ctx->pc = 0x1629DCu;
    // 0x1629dc: 0x0
    ctx->pc = 0x1629dcu;
    // NOP
label_1629e0:
    // 0x1629e0: 0xdfb00000
    ctx->pc = 0x1629e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1629e4: 0xdfb10008
    ctx->pc = 0x1629e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1629e8: 0xdfbf0010
    ctx->pc = 0x1629e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1629ec: 0x3e00008
    ctx->pc = 0x1629ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1629F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162808u: goto label_162808;
            case 0x162858u: goto label_162858;
            case 0x1628A0u: goto label_1628a0;
            case 0x1628B0u: goto label_1628b0;
            case 0x162910u: goto label_162910;
            case 0x162928u: goto label_162928;
            case 0x162988u: goto label_162988;
            case 0x1629B8u: goto label_1629b8;
            case 0x1629E0u: goto label_1629e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1629F4u;
    // 0x1629f4: 0x0
    ctx->pc = 0x1629f4u;
    // NOP
    // 0x1629f8: 0x27bdfff0
    ctx->pc = 0x1629f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1629fc: 0xffbf0000
    ctx->pc = 0x1629fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162a00: 0x8c84004c
    ctx->pc = 0x162a00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x162a04: 0xdfbf0000
    ctx->pc = 0x162a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a08: 0x804f428
    ctx->pc = 0x162A08u;
    ctx->pc = 0x162A0Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x13D0A0u;
    sub_0013D0A0_0x13d0a0(rdram, ctx, runtime); return;
    ctx->pc = 0x162A10u;
}
