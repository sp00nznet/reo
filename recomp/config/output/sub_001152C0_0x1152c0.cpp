#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001152C0
// Address: 0x1152c0 - 0x1153f8
void sub_001152C0_0x1152c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1152c0u;

    // 0x1152c0: 0x27bdfff0
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1152c4: 0xffbf0000
    ctx->pc = 0x1152c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1152c8: 0xc0450f4
    ctx->pc = 0x1152C8u;
    SET_GPR_U32(ctx, 31, 0x1152D0u);
    ctx->pc = 0x1143D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001143D0_0x1143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1152D0u; }
    }
    if (ctx->pc != 0x1152D0u) { return; }
    ctx->pc = 0x1152D0u;
    // 0x1152d0: 0xf
    ctx->pc = 0x1152d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1152d4: 0xdfbf0000
    ctx->pc = 0x1152d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1152d8: 0x3e00008
    ctx->pc = 0x1152D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1152DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115360u: goto label_115360;
            case 0x1153A8u: goto label_1153a8;
            case 0x1153B8u: goto label_1153b8;
            case 0x1153C8u: goto label_1153c8;
            case 0x1153D8u: goto label_1153d8;
            case 0x1153E8u: goto label_1153e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1152E0u;
    // 0x1152e0: 0x27bdfff0
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1152e4: 0xffbf0000
    ctx->pc = 0x1152e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1152e8: 0xc0450f8
    ctx->pc = 0x1152E8u;
    SET_GPR_U32(ctx, 31, 0x1152F0u);
    ctx->pc = 0x1143E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001143E0_0x1143e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1152F0u; }
    }
    if (ctx->pc != 0x1152F0u) { return; }
    ctx->pc = 0x1152F0u;
    // 0x1152f0: 0xf
    ctx->pc = 0x1152f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1152f4: 0xdfbf0000
    ctx->pc = 0x1152f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1152f8: 0x3e00008
    ctx->pc = 0x1152F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1152FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115360u: goto label_115360;
            case 0x1153A8u: goto label_1153a8;
            case 0x1153B8u: goto label_1153b8;
            case 0x1153C8u: goto label_1153c8;
            case 0x1153D8u: goto label_1153d8;
            case 0x1153E8u: goto label_1153e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115300u;
    // 0x115300: 0x27bdfff0
    ctx->pc = 0x115300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115304: 0xffbf0000
    ctx->pc = 0x115304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115308: 0xc0450fc
    ctx->pc = 0x115308u;
    SET_GPR_U32(ctx, 31, 0x115310u);
    ctx->pc = 0x1143F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001143F0_0x1143f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115310u; }
    }
    if (ctx->pc != 0x115310u) { return; }
    ctx->pc = 0x115310u;
    // 0x115310: 0xf
    ctx->pc = 0x115310u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x115314: 0xdfbf0000
    ctx->pc = 0x115314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115318: 0x3e00008
    ctx->pc = 0x115318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11531Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115360u: goto label_115360;
            case 0x1153A8u: goto label_1153a8;
            case 0x1153B8u: goto label_1153b8;
            case 0x1153C8u: goto label_1153c8;
            case 0x1153D8u: goto label_1153d8;
            case 0x1153E8u: goto label_1153e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115320u;
    // 0x115320: 0x27bdff80
    ctx->pc = 0x115320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x115324: 0xffb10010
    ctx->pc = 0x115324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x115328: 0x80882d
    ctx->pc = 0x115328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11532c: 0xffb60060
    ctx->pc = 0x11532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x115330: 0xffb50050
    ctx->pc = 0x115330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x115334: 0x3c160026
    ctx->pc = 0x115334u;
    SET_GPR_U32(ctx, 22, ((uint32_t)38 << 16));
    // 0x115338: 0xffb40040
    ctx->pc = 0x115338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11533c: 0x3c150024
    ctx->pc = 0x11533cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x115340: 0xffb30030
    ctx->pc = 0x115340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x115344: 0x24140001
    ctx->pc = 0x115344u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x115348: 0xffb20020
    ctx->pc = 0x115348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11534c: 0x24130002
    ctx->pc = 0x11534cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x115350: 0xffb00000
    ctx->pc = 0x115350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115354: 0x26320008
    ctx->pc = 0x115354u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
    // 0x115358: 0xffbf0070
    ctx->pc = 0x115358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11535c: 0x26300009
    ctx->pc = 0x11535cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 9));
label_115360:
    // 0x115360: 0xc045198
    ctx->pc = 0x115360u;
    SET_GPR_U32(ctx, 31, 0x115368u);
    ctx->pc = 0x115364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 4294944304)));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115368u; }
    }
    if (ctx->pc != 0x115368u) { return; }
    ctx->pc = 0x115368u;
    // 0x115368: 0x8e230000
    ctx->pc = 0x115368u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11536c: 0x306301ff
    ctx->pc = 0x11536cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 511));
    // 0x115370: 0x24640001
    ctx->pc = 0x115370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 1));
    // 0x115374: 0x31840
    ctx->pc = 0x115374u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x115378: 0xae240000
    ctx->pc = 0x115378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11537c: 0x2431021
    ctx->pc = 0x11537cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x115380: 0x2033021
    ctx->pc = 0x115380u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x115384: 0x90420000
    ctx->pc = 0x115384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115388: 0x1054000f
    ctx->pc = 0x115388u;
    {
        const bool branch_taken_0x115388 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x11538Cu;
        SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), 2));
        if (branch_taken_0x115388) {
            ctx->pc = 0x1153C8u;
            goto label_1153c8;
        }
    }
    ctx->pc = 0x115390u;
    // 0x115390: 0x10a00005
    ctx->pc = 0x115390u;
    {
        const bool branch_taken_0x115390 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x115394u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294936856));
        if (branch_taken_0x115390) {
            ctx->pc = 0x1153A8u;
            goto label_1153a8;
        }
    }
    ctx->pc = 0x115398u;
    // 0x115398: 0x10400007
    ctx->pc = 0x115398u;
    {
        const bool branch_taken_0x115398 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11539Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115398) {
            ctx->pc = 0x1153B8u;
            goto label_1153b8;
        }
    }
    ctx->pc = 0x1153A0u;
    // 0x1153a0: 0x10000011
    ctx->pc = 0x1153A0u;
    {
        const bool branch_taken_0x1153a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1153a0) {
            ctx->pc = 0x1153E8u;
            goto label_1153e8;
        }
    }
    ctx->pc = 0x1153A8u;
label_1153a8:
    // 0x1153a8: 0x1053000b
    ctx->pc = 0x1153A8u;
    {
        const bool branch_taken_0x1153a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x1153ACu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x1153a8) {
            ctx->pc = 0x1153D8u;
            goto label_1153d8;
        }
    }
    ctx->pc = 0x1153B0u;
    // 0x1153b0: 0x1000000d
    ctx->pc = 0x1153B0u;
    {
        const bool branch_taken_0x1153b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1153b0) {
            ctx->pc = 0x1153E8u;
            goto label_1153e8;
        }
    }
    ctx->pc = 0x1153B8u;
label_1153b8:
    // 0x1153b8: 0xc045154
    ctx->pc = 0x1153B8u;
    SET_GPR_U32(ctx, 31, 0x1153C0u);
    ctx->pc = 0x1153BCu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x114550u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114550_0x114550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1153C0u; }
    }
    if (ctx->pc != 0x1153C0u) { return; }
    ctx->pc = 0x1153C0u;
    // 0x1153c0: 0x1000ffe7
    ctx->pc = 0x1153C0u;
    {
        const bool branch_taken_0x1153c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1153c0) {
            ctx->pc = 0x115360u;
            goto label_115360;
        }
    }
    ctx->pc = 0x1153C8u;
label_1153c8:
    // 0x1153c8: 0xc045134
    ctx->pc = 0x1153C8u;
    SET_GPR_U32(ctx, 31, 0x1153D0u);
    ctx->pc = 0x1153CCu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x1144D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001144D0_0x1144d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1153D0u; }
    }
    if (ctx->pc != 0x1153D0u) { return; }
    ctx->pc = 0x1153D0u;
    // 0x1153d0: 0x1000ffe3
    ctx->pc = 0x1153D0u;
    {
        const bool branch_taken_0x1153d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1153d0) {
            ctx->pc = 0x115360u;
            goto label_115360;
        }
    }
    ctx->pc = 0x1153D8u;
label_1153d8:
    // 0x1153d8: 0xc045164
    ctx->pc = 0x1153D8u;
    SET_GPR_U32(ctx, 31, 0x1153E0u);
    ctx->pc = 0x1153DCu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x114590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114590_0x114590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1153E0u; }
    }
    if (ctx->pc != 0x1153E0u) { return; }
    ctx->pc = 0x1153E0u;
    // 0x1153e0: 0x1000ffdf
    ctx->pc = 0x1153E0u;
    {
        const bool branch_taken_0x1153e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1153e0) {
            ctx->pc = 0x115360u;
            goto label_115360;
        }
    }
    ctx->pc = 0x1153E8u;
label_1153e8:
    // 0x1153e8: 0xc045a04
    ctx->pc = 0x1153E8u;
    SET_GPR_U32(ctx, 31, 0x1153F0u);
    ctx->pc = 0x116810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116810_0x116810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1153F0u; }
    }
    if (ctx->pc != 0x1153F0u) { return; }
    ctx->pc = 0x1153F0u;
    // 0x1153f0: 0x1000ffdb
    ctx->pc = 0x1153F0u;
    {
        const bool branch_taken_0x1153f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1153f0) {
            ctx->pc = 0x115360u;
            goto label_115360;
        }
    }
    ctx->pc = 0x1153F8u;
}
