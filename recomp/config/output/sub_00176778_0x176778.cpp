#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00176778
// Address: 0x176778 - 0x176930
void sub_00176778_0x176778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x176778u;

    // 0x176778: 0x27bdfff0
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17677c: 0xffbf0000
    ctx->pc = 0x17677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176780: 0xdfbf0000
    ctx->pc = 0x176780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176784: 0x805407a
    ctx->pc = 0x176784u;
    ctx->pc = 0x176788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1501E8u;
    sub_001501E8_0x1501e8(rdram, ctx, runtime); return;
    ctx->pc = 0x17678Cu;
    // 0x17678c: 0x0
    ctx->pc = 0x17678cu;
    // NOP
    // 0x176790: 0x27bdffe0
    ctx->pc = 0x176790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176794: 0xffb00000
    ctx->pc = 0x176794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176798: 0xa0802d
    ctx->pc = 0x176798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17679c: 0xffb10008
    ctx->pc = 0x17679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1767a0: 0xffbf0010
    ctx->pc = 0x1767a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1767a4: 0xc05a78c
    ctx->pc = 0x1767A4u;
    SET_GPR_U32(ctx, 31, 0x1767ACu);
    ctx->pc = 0x1767A8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767ACu; }
    }
    if (ctx->pc != 0x1767ACu) { return; }
    ctx->pc = 0x1767ACu;
    // 0x1767ac: 0x202d
    ctx->pc = 0x1767acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767b0: 0x200282d
    ctx->pc = 0x1767b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767b4: 0x10400008
    ctx->pc = 0x1767B4u;
    {
        const bool branch_taken_0x1767b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1767B8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1767b4) {
            ctx->pc = 0x1767D8u;
            goto label_1767d8;
        }
    }
    ctx->pc = 0x1767BCu;
    // 0x1767bc: 0x3c05ff00
    ctx->pc = 0x1767bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1767c0: 0xdfb00000
    ctx->pc = 0x1767c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1767c4: 0xdfb10008
    ctx->pc = 0x1767c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1767c8: 0x34a50123
    ctx->pc = 0x1767c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 291));
    // 0x1767cc: 0xdfbf0010
    ctx->pc = 0x1767ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1767d0: 0x805a704
    ctx->pc = 0x1767D0u;
    ctx->pc = 0x1767D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x1767D8u;
label_1767d8:
    // 0x1767d8: 0xc05da6c
    ctx->pc = 0x1767D8u;
    SET_GPR_U32(ctx, 31, 0x1767E0u);
    ctx->pc = 0x1767DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1769B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769B0_0x1769b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767E0u; }
    }
    if (ctx->pc != 0x1767E0u) { return; }
    ctx->pc = 0x1767E0u;
    // 0x1767e0: 0x220202d
    ctx->pc = 0x1767e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767e4: 0x2405000f
    ctx->pc = 0x1767e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1767e8: 0xc05d518
    ctx->pc = 0x1767E8u;
    SET_GPR_U32(ctx, 31, 0x1767F0u);
    ctx->pc = 0x1767ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1767F0u; }
    }
    if (ctx->pc != 0x1767F0u) { return; }
    ctx->pc = 0x1767F0u;
    // 0x1767f0: 0x102d
    ctx->pc = 0x1767f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1767f4: 0xdfb00000
    ctx->pc = 0x1767f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1767f8: 0xdfb10008
    ctx->pc = 0x1767f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1767fc: 0xdfbf0010
    ctx->pc = 0x1767fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176800: 0x3e00008
    ctx->pc = 0x176800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176804u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1767D8u: goto label_1767d8;
            case 0x176850u: goto label_176850;
            case 0x176888u: goto label_176888;
            case 0x1768B0u: goto label_1768b0;
            case 0x176900u: goto label_176900;
            case 0x17691Cu: goto label_17691c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176808u;
    // 0x176808: 0x27bdffe0
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17680c: 0xffb00000
    ctx->pc = 0x17680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176810: 0x80802d
    ctx->pc = 0x176810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176814: 0xffb10008
    ctx->pc = 0x176814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x176818: 0xffb20010
    ctx->pc = 0x176818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17681c: 0xffbf0018
    ctx->pc = 0x17681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x176820: 0xc05a78c
    ctx->pc = 0x176820u;
    SET_GPR_U32(ctx, 31, 0x176828u);
    ctx->pc = 0x176824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176828u; }
    }
    if (ctx->pc != 0x176828u) { return; }
    ctx->pc = 0x176828u;
    // 0x176828: 0x3c05ff00
    ctx->pc = 0x176828u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x17682c: 0x10400008
    ctx->pc = 0x17682Cu;
    {
        const bool branch_taken_0x17682c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176830u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17682c) {
            ctx->pc = 0x176850u;
            goto label_176850;
        }
    }
    ctx->pc = 0x176834u;
    // 0x176834: 0xdfb00000
    ctx->pc = 0x176834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176838: 0x34a50129
    ctx->pc = 0x176838u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 297));
    // 0x17683c: 0xdfb10008
    ctx->pc = 0x17683cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176840: 0xdfb20010
    ctx->pc = 0x176840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176844: 0xdfbf0018
    ctx->pc = 0x176844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176848: 0x805a704
    ctx->pc = 0x176848u;
    ctx->pc = 0x17684Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x176850u;
label_176850:
    // 0x176850: 0x1220000d
    ctx->pc = 0x176850u;
    {
        const bool branch_taken_0x176850 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x176854u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 3264));
        if (branch_taken_0x176850) {
            ctx->pc = 0x176888u;
            goto label_176888;
        }
    }
    ctx->pc = 0x176858u;
    // 0x176858: 0xae510290
    ctx->pc = 0x176858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 17));
    // 0x17685c: 0x2405000f
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x176860: 0x24060005
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x176864: 0xc05d518
    ctx->pc = 0x176864u;
    SET_GPR_U32(ctx, 31, 0x17686Cu);
    ctx->pc = 0x176868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17686Cu; }
    }
    if (ctx->pc != 0x17686Cu) { return; }
    ctx->pc = 0x17686Cu;
    // 0x17686c: 0x200202d
    ctx->pc = 0x17686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176870: 0x24050047
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 71));
    // 0x176874: 0xc05d518
    ctx->pc = 0x176874u;
    SET_GPR_U32(ctx, 31, 0x17687Cu);
    ctx->pc = 0x176878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17687Cu; }
    }
    if (ctx->pc != 0x17687Cu) { return; }
    ctx->pc = 0x17687Cu;
    // 0x17687c: 0x1000000c
    ctx->pc = 0x17687Cu;
    {
        const bool branch_taken_0x17687c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176880u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17687c) {
            ctx->pc = 0x1768B0u;
            goto label_1768b0;
        }
    }
    ctx->pc = 0x176884u;
    // 0x176884: 0x0
    ctx->pc = 0x176884u;
    // NOP
label_176888:
    // 0x176888: 0x24050047
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 71));
    // 0x17688c: 0x24060001
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176890: 0xc05d518
    ctx->pc = 0x176890u;
    SET_GPR_U32(ctx, 31, 0x176898u);
    ctx->pc = 0x176894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176898u; }
    }
    if (ctx->pc != 0x176898u) { return; }
    ctx->pc = 0x176898u;
    // 0x176898: 0x200202d
    ctx->pc = 0x176898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17689c: 0x2405000f
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1768a0: 0xc05d518
    ctx->pc = 0x1768A0u;
    SET_GPR_U32(ctx, 31, 0x1768A8u);
    ctx->pc = 0x1768A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768A8u; }
    }
    if (ctx->pc != 0x1768A8u) { return; }
    ctx->pc = 0x1768A8u;
    // 0x1768a8: 0xae400290
    ctx->pc = 0x1768a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 0));
    // 0x1768ac: 0xdfb00000
    ctx->pc = 0x1768acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1768b0:
    // 0x1768b0: 0x102d
    ctx->pc = 0x1768b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768b4: 0xdfb10008
    ctx->pc = 0x1768b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1768b8: 0xdfb20010
    ctx->pc = 0x1768b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1768bc: 0xdfbf0018
    ctx->pc = 0x1768bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1768c0: 0x3e00008
    ctx->pc = 0x1768C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1768C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1767D8u: goto label_1767d8;
            case 0x176850u: goto label_176850;
            case 0x176888u: goto label_176888;
            case 0x1768B0u: goto label_1768b0;
            case 0x176900u: goto label_176900;
            case 0x17691Cu: goto label_17691c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1768C8u;
    // 0x1768c8: 0x27bdfff0
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1768cc: 0xffb00000
    ctx->pc = 0x1768ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1768d0: 0xffbf0008
    ctx->pc = 0x1768d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1768d4: 0xc05a78c
    ctx->pc = 0x1768D4u;
    SET_GPR_U32(ctx, 31, 0x1768DCu);
    ctx->pc = 0x1768D8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1768DCu; }
    }
    if (ctx->pc != 0x1768DCu) { return; }
    ctx->pc = 0x1768DCu;
    // 0x1768dc: 0x3c05ff00
    ctx->pc = 0x1768dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1768e0: 0x200202d
    ctx->pc = 0x1768e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768e4: 0x10400006
    ctx->pc = 0x1768E4u;
    {
        const bool branch_taken_0x1768e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1768E8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 298));
        if (branch_taken_0x1768e4) {
            ctx->pc = 0x176900u;
            goto label_176900;
        }
    }
    ctx->pc = 0x1768ECu;
    // 0x1768ec: 0xdfb00000
    ctx->pc = 0x1768ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1768f0: 0x202d
    ctx->pc = 0x1768f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1768f4: 0xdfbf0008
    ctx->pc = 0x1768f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1768f8: 0x805a704
    ctx->pc = 0x1768F8u;
    ctx->pc = 0x1768FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x176900u;
label_176900:
    // 0x176900: 0xc05d58a
    ctx->pc = 0x176900u;
    SET_GPR_U32(ctx, 31, 0x176908u);
    ctx->pc = 0x176904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 71));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176908u; }
    }
    if (ctx->pc != 0x176908u) { return; }
    ctx->pc = 0x176908u;
    // 0x176908: 0x24030001
    ctx->pc = 0x176908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17690c: 0x10430003
    ctx->pc = 0x17690Cu;
    {
        const bool branch_taken_0x17690c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x176910u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17690c) {
            ctx->pc = 0x17691Cu;
            goto label_17691c;
        }
    }
    ctx->pc = 0x176914u;
    // 0x176914: 0xc05da4c
    ctx->pc = 0x176914u;
    SET_GPR_U32(ctx, 31, 0x17691Cu);
    ctx->pc = 0x176930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00176930_0x176930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17691Cu; }
    }
    if (ctx->pc != 0x17691Cu) { return; }
    ctx->pc = 0x17691Cu;
label_17691c:
    // 0x17691c: 0x102d
    ctx->pc = 0x17691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176920: 0xdfb00000
    ctx->pc = 0x176920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176924: 0xdfbf0008
    ctx->pc = 0x176924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x176928: 0x3e00008
    ctx->pc = 0x176928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17692Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1767D8u: goto label_1767d8;
            case 0x176850u: goto label_176850;
            case 0x176888u: goto label_176888;
            case 0x1768B0u: goto label_1768b0;
            case 0x176900u: goto label_176900;
            case 0x17691Cu: goto label_17691c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176930u;
}
