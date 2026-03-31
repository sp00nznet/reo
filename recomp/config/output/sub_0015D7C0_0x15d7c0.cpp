#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D7C0
// Address: 0x15d7c0 - 0x15d9d8
void sub_0015D7C0_0x15d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d7c0u;

    // 0x15d7c0: 0x3e00008
    ctx->pc = 0x15D7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D7C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 360)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D808u: goto label_15d808;
            case 0x15D860u: goto label_15d860;
            case 0x15D870u: goto label_15d870;
            case 0x15D8C0u: goto label_15d8c0;
            case 0x15D900u: goto label_15d900;
            case 0x15D940u: goto label_15d940;
            case 0x15D944u: goto label_15d944;
            case 0x15D9B4u: goto label_15d9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D7C8u;
    // 0x15d7c8: 0x27bdffe0
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d7cc: 0xffb00000
    ctx->pc = 0x15d7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d7d0: 0x80802d
    ctx->pc = 0x15d7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7d4: 0xffb10008
    ctx->pc = 0x15d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15d7d8: 0xffbf0010
    ctx->pc = 0x15d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d7dc: 0xc057ff0
    ctx->pc = 0x15D7DCu;
    SET_GPR_U32(ctx, 31, 0x15D7E4u);
    ctx->pc = 0x15D7E0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7E4u; }
    }
    if (ctx->pc != 0x15D7E4u) { return; }
    ctx->pc = 0x15D7E4u;
    // 0x15d7e4: 0x3c040024
    ctx->pc = 0x15d7e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d7e8: 0x14400007
    ctx->pc = 0x15D7E8u;
    {
        const bool branch_taken_0x15d7e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D7ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962160));
        if (branch_taken_0x15d7e8) {
            ctx->pc = 0x15D808u;
            goto label_15d808;
        }
    }
    ctx->pc = 0x15D7F0u;
    // 0x15d7f0: 0xdfb00000
    ctx->pc = 0x15d7f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d7f4: 0xdfb10008
    ctx->pc = 0x15d7f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d7f8: 0xdfbf0010
    ctx->pc = 0x15d7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d7fc: 0x8058dd4
    ctx->pc = 0x15D7FCu;
    ctx->pc = 0x15D800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163750u;
    sub_00163750_0x163750(rdram, ctx, runtime); return;
    ctx->pc = 0x15D804u;
    // 0x15d804: 0x0
    ctx->pc = 0x15d804u;
    // NOP
label_15d808:
    // 0x15d808: 0xae110054
    ctx->pc = 0x15d808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x15d80c: 0xdfbf0010
    ctx->pc = 0x15d80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d810: 0xdfb00000
    ctx->pc = 0x15d810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d814: 0xdfb10008
    ctx->pc = 0x15d814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d818: 0x3e00008
    ctx->pc = 0x15D818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D81Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D808u: goto label_15d808;
            case 0x15D860u: goto label_15d860;
            case 0x15D870u: goto label_15d870;
            case 0x15D8C0u: goto label_15d8c0;
            case 0x15D900u: goto label_15d900;
            case 0x15D940u: goto label_15d940;
            case 0x15D944u: goto label_15d944;
            case 0x15D9B4u: goto label_15d9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D820u;
    // 0x15d820: 0x27bdfff0
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d824: 0xffb00000
    ctx->pc = 0x15d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d828: 0xffbf0008
    ctx->pc = 0x15d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15d82c: 0xc057ff0
    ctx->pc = 0x15D82Cu;
    SET_GPR_U32(ctx, 31, 0x15D834u);
    ctx->pc = 0x15D830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D834u; }
    }
    if (ctx->pc != 0x15D834u) { return; }
    ctx->pc = 0x15D834u;
    // 0x15d834: 0x1440000a
    ctx->pc = 0x15D834u;
    {
        const bool branch_taken_0x15d834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D838u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d834) {
            ctx->pc = 0x15D860u;
            goto label_15d860;
        }
    }
    ctx->pc = 0x15D83Cu;
    // 0x15d83c: 0x3c040024
    ctx->pc = 0x15d83cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d840: 0xc058dd4
    ctx->pc = 0x15D840u;
    SET_GPR_U32(ctx, 31, 0x15D848u);
    ctx->pc = 0x15D844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962208));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D848u; }
    }
    if (ctx->pc != 0x15D848u) { return; }
    ctx->pc = 0x15D848u;
    // 0x15d848: 0x102d
    ctx->pc = 0x15d848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d84c: 0xdfb00000
    ctx->pc = 0x15d84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d850: 0xdfbf0008
    ctx->pc = 0x15d850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d854: 0x3e00008
    ctx->pc = 0x15D854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D808u: goto label_15d808;
            case 0x15D860u: goto label_15d860;
            case 0x15D870u: goto label_15d870;
            case 0x15D8C0u: goto label_15d8c0;
            case 0x15D900u: goto label_15d900;
            case 0x15D940u: goto label_15d940;
            case 0x15D944u: goto label_15d944;
            case 0x15D9B4u: goto label_15d9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D85Cu;
    // 0x15d85c: 0x0
    ctx->pc = 0x15d85cu;
    // NOP
label_15d860:
    // 0x15d860: 0xdfb00000
    ctx->pc = 0x15d860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d864: 0xdfbf0008
    ctx->pc = 0x15d864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d868: 0x805761c
    ctx->pc = 0x15D868u;
    ctx->pc = 0x15D86Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x15D870u;
    goto label_15d870;
    ctx->pc = 0x15D870u;
label_15d870:
    // 0x15d870: 0x3e00008
    ctx->pc = 0x15D870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D874u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D808u: goto label_15d808;
            case 0x15D860u: goto label_15d860;
            case 0x15D870u: goto label_15d870;
            case 0x15D8C0u: goto label_15d8c0;
            case 0x15D900u: goto label_15d900;
            case 0x15D940u: goto label_15d940;
            case 0x15D944u: goto label_15d944;
            case 0x15D9B4u: goto label_15d9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D878u;
    // 0x15d878: 0x27bdffb0
    ctx->pc = 0x15d878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d87c: 0xffb00010
    ctx->pc = 0x15d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15d880: 0x80802d
    ctx->pc = 0x15d880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d884: 0xffb30028
    ctx->pc = 0x15d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15d888: 0xffb10018
    ctx->pc = 0x15d888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15d88c: 0xffb20020
    ctx->pc = 0x15d88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15d890: 0xffb40030
    ctx->pc = 0x15d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15d894: 0xffb50038
    ctx->pc = 0x15d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x15d898: 0xffbf0040
    ctx->pc = 0x15d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15d89c: 0xc057ff0
    ctx->pc = 0x15D89Cu;
    SET_GPR_U32(ctx, 31, 0x15D8A4u);
    ctx->pc = 0x15D8A0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FFC0_0x15ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8A4u; }
    }
    if (ctx->pc != 0x15D8A4u) { return; }
    ctx->pc = 0x15D8A4u;
    // 0x15d8a4: 0x14400006
    ctx->pc = 0x15D8A4u;
    {
        const bool branch_taken_0x15d8a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15d8a4) {
            ctx->pc = 0x15D8C0u;
            goto label_15d8c0;
        }
    }
    ctx->pc = 0x15D8ACu;
    // 0x15d8ac: 0x3c040024
    ctx->pc = 0x15d8acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d8b0: 0xc058dd4
    ctx->pc = 0x15D8B0u;
    SET_GPR_U32(ctx, 31, 0x15D8B8u);
    ctx->pc = 0x15D8B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962256));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8B8u; }
    }
    if (ctx->pc != 0x15D8B8u) { return; }
    ctx->pc = 0x15D8B8u;
    // 0x15d8b8: 0x1000003e
    ctx->pc = 0x15D8B8u;
    {
        const bool branch_taken_0x15d8b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D8BCu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x15d8b8) {
            ctx->pc = 0x15D9B4u;
            goto label_15d9b4;
        }
    }
    ctx->pc = 0x15D8C0u;
label_15d8c0:
    // 0x15d8c0: 0xc057ec8
    ctx->pc = 0x15D8C0u;
    SET_GPR_U32(ctx, 31, 0x15D8C8u);
    ctx->pc = 0x15D8C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15FB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FB20_0x15fb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8C8u; }
    }
    if (ctx->pc != 0x15D8C8u) { return; }
    ctx->pc = 0x15D8C8u;
    // 0x15d8c8: 0x40882d
    ctx->pc = 0x15d8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8cc: 0x3a0282d
    ctx->pc = 0x15d8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8d0: 0xc05cfec
    ctx->pc = 0x15D8D0u;
    SET_GPR_U32(ctx, 31, 0x15D8D8u);
    ctx->pc = 0x15D8D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173FB0_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D8D8u; }
    }
    if (ctx->pc != 0x15D8D8u) { return; }
    ctx->pc = 0x15D8D8u;
    // 0x15d8d8: 0x8fa30000
    ctx->pc = 0x15d8d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d8dc: 0x50600035
    ctx->pc = 0x15D8DCu;
    {
        const bool branch_taken_0x15d8dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d8dc) {
            ctx->pc = 0x15D8E0u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x15D9B4u;
            goto label_15d9b4;
        }
    }
    ctx->pc = 0x15D8E4u;
    // 0x15d8e4: 0x8e020054
    ctx->pc = 0x15d8e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x15d8e8: 0x14400016
    ctx->pc = 0x15D8E8u;
    {
        const bool branch_taken_0x15d8e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15D8ECu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d8e8) {
            ctx->pc = 0x15D944u;
            goto label_15d944;
        }
    }
    ctx->pc = 0x15D8F0u;
    // 0x15d8f0: 0x8e14001c
    ctx->pc = 0x15d8f0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15d8f4: 0x24150001
    ctx->pc = 0x15d8f4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8f8: 0x254102a
    ctx->pc = 0x15d8f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
    // 0x15d8fc: 0x0
    ctx->pc = 0x15d8fcu;
    // NOP
label_15d900:
    // 0x15d900: 0x1040000f
    ctx->pc = 0x15D900u;
    {
        const bool branch_taken_0x15d900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D904u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x15d900) {
            ctx->pc = 0x15D940u;
            goto label_15d940;
        }
    }
    ctx->pc = 0x15D908u;
    // 0x15d908: 0xc0578fc
    ctx->pc = 0x15D908u;
    SET_GPR_U32(ctx, 31, 0x15D910u);
    ctx->pc = 0x15D90Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15E3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E3F0_0x15e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D910u; }
    }
    if (ctx->pc != 0x15D910u) { return; }
    ctx->pc = 0x15D910u;
    // 0x15d910: 0x1455000b
    ctx->pc = 0x15D910u;
    {
        const bool branch_taken_0x15d910 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        ctx->pc = 0x15D914u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15d910) {
            ctx->pc = 0x15D940u;
            goto label_15d940;
        }
    }
    ctx->pc = 0x15D918u;
    // 0x15d918: 0xc05d00c
    ctx->pc = 0x15D918u;
    SET_GPR_U32(ctx, 31, 0x15D920u);
    ctx->pc = 0x15D91Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x174030u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174030_0x174030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D920u; }
    }
    if (ctx->pc != 0x15D920u) { return; }
    ctx->pc = 0x15D920u;
    // 0x15d920: 0x8e030084
    ctx->pc = 0x15d920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x15d924: 0x220202d
    ctx->pc = 0x15d924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d928: 0x3a0282d
    ctx->pc = 0x15d928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d92c: 0x24630001
    ctx->pc = 0x15d92cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d930: 0xc05cfec
    ctx->pc = 0x15D930u;
    SET_GPR_U32(ctx, 31, 0x15D938u);
    ctx->pc = 0x15D934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173FB0_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D938u; }
    }
    if (ctx->pc != 0x15D938u) { return; }
    ctx->pc = 0x15D938u;
    // 0x15d938: 0x1000fff1
    ctx->pc = 0x15D938u;
    {
        const bool branch_taken_0x15d938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15D93Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 20)));
        if (branch_taken_0x15d938) {
            ctx->pc = 0x15D900u;
            goto label_15d900;
        }
    }
    ctx->pc = 0x15D940u;
label_15d940:
    // 0x15d940: 0x8fa30000
    ctx->pc = 0x15d940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15d944:
    // 0x15d944: 0x5060001b
    ctx->pc = 0x15D944u;
    {
        const bool branch_taken_0x15d944 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x15d944) {
            ctx->pc = 0x15D948u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x15D9B4u;
            goto label_15d9b4;
        }
    }
    ctx->pc = 0x15D94Cu;
    // 0x15d94c: 0xc0577aa
    ctx->pc = 0x15D94Cu;
    SET_GPR_U32(ctx, 31, 0x15D954u);
    ctx->pc = 0x15D950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15DEA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DEA8_0x15dea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D954u; }
    }
    if (ctx->pc != 0x15D954u) { return; }
    ctx->pc = 0x15D954u;
    // 0x15d954: 0x8e02007c
    ctx->pc = 0x15d954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x15d958: 0x8fa30000
    ctx->pc = 0x15d958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d95c: 0x200202d
    ctx->pc = 0x15d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d960: 0x24420001
    ctx->pc = 0x15d960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d964: 0xae02007c
    ctx->pc = 0x15d964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x15d968: 0x60282d
    ctx->pc = 0x15d968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d96c: 0xc057798
    ctx->pc = 0x15D96Cu;
    SET_GPR_U32(ctx, 31, 0x15D974u);
    ctx->pc = 0x15D970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    ctx->pc = 0x15DE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DE60_0x15de60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D974u; }
    }
    if (ctx->pc != 0x15D974u) { return; }
    ctx->pc = 0x15D974u;
    // 0x15d974: 0x200202d
    ctx->pc = 0x15d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d978: 0x8fa50000
    ctx->pc = 0x15d978u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d97c: 0xc0576aa
    ctx->pc = 0x15D97Cu;
    SET_GPR_U32(ctx, 31, 0x15D984u);
    ctx->pc = 0x15D980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15DAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DAA8_0x15daa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D984u; }
    }
    if (ctx->pc != 0x15D984u) { return; }
    ctx->pc = 0x15D984u;
    // 0x15d984: 0x200202d
    ctx->pc = 0x15d984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d988: 0xc057812
    ctx->pc = 0x15D988u;
    SET_GPR_U32(ctx, 31, 0x15D990u);
    ctx->pc = 0x15D98Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15E048u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E048_0x15e048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D990u; }
    }
    if (ctx->pc != 0x15D990u) { return; }
    ctx->pc = 0x15D990u;
    // 0x15d990: 0x200202d
    ctx->pc = 0x15d990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d994: 0xc057676
    ctx->pc = 0x15D994u;
    SET_GPR_U32(ctx, 31, 0x15D99Cu);
    ctx->pc = 0x15D998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D9D8_0x15d9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D99Cu; }
    }
    if (ctx->pc != 0x15D99Cu) { return; }
    ctx->pc = 0x15D99Cu;
    // 0x15d99c: 0xc05768a
    ctx->pc = 0x15D99Cu;
    SET_GPR_U32(ctx, 31, 0x15D9A4u);
    ctx->pc = 0x15D9A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15DA28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DA28_0x15da28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9A4u; }
    }
    if (ctx->pc != 0x15D9A4u) { return; }
    ctx->pc = 0x15D9A4u;
    // 0x15d9a4: 0x200202d
    ctx->pc = 0x15d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9a8: 0xc05776e
    ctx->pc = 0x15D9A8u;
    SET_GPR_U32(ctx, 31, 0x15D9B0u);
    ctx->pc = 0x15D9ACu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15DDB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DDB8_0x15ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D9B0u; }
    }
    if (ctx->pc != 0x15D9B0u) { return; }
    ctx->pc = 0x15D9B0u;
    // 0x15d9b0: 0xae620048
    ctx->pc = 0x15d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_15d9b4:
    // 0x15d9b4: 0xdfb00010
    ctx->pc = 0x15d9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d9b8: 0xdfb10018
    ctx->pc = 0x15d9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15d9bc: 0xdfb20020
    ctx->pc = 0x15d9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d9c0: 0xdfb30028
    ctx->pc = 0x15d9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15d9c4: 0xdfb40030
    ctx->pc = 0x15d9c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d9c8: 0xdfb50038
    ctx->pc = 0x15d9c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d9cc: 0xdfbf0040
    ctx->pc = 0x15d9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d9d0: 0x3e00008
    ctx->pc = 0x15D9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D9D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D808u: goto label_15d808;
            case 0x15D860u: goto label_15d860;
            case 0x15D870u: goto label_15d870;
            case 0x15D8C0u: goto label_15d8c0;
            case 0x15D900u: goto label_15d900;
            case 0x15D940u: goto label_15d940;
            case 0x15D944u: goto label_15d944;
            case 0x15D9B4u: goto label_15d9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D9D8u;
}
