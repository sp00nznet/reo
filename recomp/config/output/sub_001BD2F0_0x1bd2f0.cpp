#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001BD2F0
// Address: 0x1bd2f0 - 0x1bd410
void sub_001BD2F0_0x1bd2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1bd2f0u;

    // 0x1bd2f0: 0x27bdfed0
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1bd2f4: 0x24040001
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd2f8: 0xffbf0020
    ctx->pc = 0x1bd2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bd2fc: 0x7fb10010
    ctx->pc = 0x1bd2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bd300: 0x7fb00000
    ctx->pc = 0x1bd300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd304: 0x3c100023
    ctx->pc = 0x1bd304u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x1bd308: 0xc06f8ec
    ctx->pc = 0x1BD308u;
    SET_GPR_U32(ctx, 31, 0x1BD310u);
    ctx->pc = 0x1BD30Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 20272));
    ctx->pc = 0x1BE3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3B0_0x1be3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD310u; }
    }
    if (ctx->pc != 0x1BD310u) { return; }
    ctx->pc = 0x1BD310u;
    // 0x1bd310: 0x4400030
    ctx->pc = 0x1BD310u;
    {
        const bool branch_taken_0x1bd310 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD314u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1bd310) {
            ctx->pc = 0x1BD3D4u;
            goto label_1bd3d4;
        }
    }
    ctx->pc = 0x1BD318u;
    // 0x1bd318: 0x3c010032
    ctx->pc = 0x1bd318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bd31c: 0x1000002d
    ctx->pc = 0x1BD31Cu;
    {
        const bool branch_taken_0x1bd31c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1BD320u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 17632), GPR_U32(ctx, 3));
        if (branch_taken_0x1bd31c) {
            ctx->pc = 0x1BD3D4u;
            goto label_1bd3d4;
        }
    }
    ctx->pc = 0x1BD324u;
label_1bd324:
    // 0x1bd324: 0xc06f904
    ctx->pc = 0x1BD324u;
    SET_GPR_U32(ctx, 31, 0x1BD32Cu);
    ctx->pc = 0x1BD328u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1BE410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE410_0x1be410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD32Cu; }
    }
    if (ctx->pc != 0x1BD32Cu) { return; }
    ctx->pc = 0x1BD32Cu;
label_1bd32c:
    // 0x1bd32c: 0x27a40030
    ctx->pc = 0x1bd32cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bd330: 0x24050001
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd334: 0xc04629c
    ctx->pc = 0x1BD334u;
    SET_GPR_U32(ctx, 31, 0x1BD33Cu);
    ctx->pc = 0x1BD338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD33Cu; }
    }
    if (ctx->pc != 0x1BD33Cu) { return; }
    ctx->pc = 0x1BD33Cu;
    // 0x1bd33c: 0x40882d
    ctx->pc = 0x1bd33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd340: 0x440fffa
    ctx->pc = 0x1BD340u;
    {
        const bool branch_taken_0x1bd340 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bd340) {
            ctx->pc = 0x1BD32Cu;
            goto label_1bd32c;
        }
    }
    ctx->pc = 0x1BD348u;
    // 0x1bd348: 0x220202d
    ctx->pc = 0x1bd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd34c: 0x282d
    ctx->pc = 0x1bd34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd350: 0xc04639e
    ctx->pc = 0x1BD350u;
    SET_GPR_U32(ctx, 31, 0x1BD358u);
    ctx->pc = 0x1BD354u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD358u; }
    }
    if (ctx->pc != 0x1BD358u) { return; }
    ctx->pc = 0x1BD358u;
    // 0x1bd358: 0x220202d
    ctx->pc = 0x1bd358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd35c: 0xc04633e
    ctx->pc = 0x1BD35Cu;
    SET_GPR_U32(ctx, 31, 0x1BD364u);
    ctx->pc = 0x1BD360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD364u; }
    }
    if (ctx->pc != 0x1BD364u) { return; }
    ctx->pc = 0x1BD364u;
    // 0x1bd364: 0x3c010032
    ctx->pc = 0x1bd364u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bd368: 0x24030001
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd36c: 0x8c2444e0
    ctx->pc = 0x1bd36cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 17632)));
    // 0x1bd370: 0x14830017
    ctx->pc = 0x1BD370u;
    {
        const bool branch_taken_0x1bd370 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1bd370) {
            ctx->pc = 0x1BD3D0u;
            goto label_1bd3d0;
        }
    }
    ctx->pc = 0x1BD378u;
    // 0x1bd378: 0x8e050000
    ctx->pc = 0x1bd378u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd37c: 0xc06f914
    ctx->pc = 0x1BD37Cu;
    SET_GPR_U32(ctx, 31, 0x1BD384u);
    ctx->pc = 0x1BD380u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1BE450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE450_0x1be450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD384u; }
    }
    if (ctx->pc != 0x1BD384u) { return; }
    ctx->pc = 0x1BD384u;
    // 0x1bd384: 0x27a40030
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bd388: 0x24050001
    ctx->pc = 0x1bd388u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd38c: 0xc04629c
    ctx->pc = 0x1BD38Cu;
    SET_GPR_U32(ctx, 31, 0x1BD394u);
    ctx->pc = 0x1BD390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD394u; }
    }
    if (ctx->pc != 0x1BD394u) { return; }
    ctx->pc = 0x1BD394u;
    // 0x1bd394: 0x4400008
    ctx->pc = 0x1BD394u;
    {
        const bool branch_taken_0x1bd394 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD398u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1bd394) {
            ctx->pc = 0x1BD3B8u;
            goto label_1bd3b8;
        }
    }
    ctx->pc = 0x1BD39Cu;
    // 0x1bd39c: 0x220202d
    ctx->pc = 0x1bd39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3a0: 0x282d
    ctx->pc = 0x1bd3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3a4: 0xc04639e
    ctx->pc = 0x1BD3A4u;
    SET_GPR_U32(ctx, 31, 0x1BD3ACu);
    ctx->pc = 0x1BD3A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3ACu; }
    }
    if (ctx->pc != 0x1BD3ACu) { return; }
    ctx->pc = 0x1BD3ACu;
    // 0x1bd3ac: 0x220202d
    ctx->pc = 0x1bd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3b0: 0xc04633e
    ctx->pc = 0x1BD3B0u;
    SET_GPR_U32(ctx, 31, 0x1BD3B8u);
    ctx->pc = 0x1BD3B4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3B8u; }
    }
    if (ctx->pc != 0x1BD3B8u) { return; }
    ctx->pc = 0x1BD3B8u;
label_1bd3b8:
    // 0x1bd3b8: 0x8e040008
    ctx->pc = 0x1bd3b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bd3bc: 0x8e030004
    ctx->pc = 0x1bd3bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bd3c0: 0x10830003
    ctx->pc = 0x1BD3C0u;
    {
        const bool branch_taken_0x1bd3c0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1BD3C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1bd3c0) {
            ctx->pc = 0x1BD3D0u;
            goto label_1bd3d0;
        }
    }
    ctx->pc = 0x1BD3C8u;
    // 0x1bd3c8: 0x3c010032
    ctx->pc = 0x1bd3c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1bd3cc: 0xac2344e0
    ctx->pc = 0x1bd3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17632), GPR_U32(ctx, 3));
label_1bd3d0:
    // 0x1bd3d0: 0x2610000c
    ctx->pc = 0x1bd3d0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
label_1bd3d4:
    // 0x1bd3d4: 0x8e050000
    ctx->pc = 0x1bd3d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bd3d8: 0x14a0ffd2
    ctx->pc = 0x1BD3D8u;
    {
        const bool branch_taken_0x1bd3d8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1BD3DCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
        if (branch_taken_0x1bd3d8) {
            ctx->pc = 0x1BD324u;
            goto label_1bd324;
        }
    }
    ctx->pc = 0x1BD3E0u;
    // 0x1bd3e0: 0x8c2344e0
    ctx->pc = 0x1bd3e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 17632)));
    // 0x1bd3e4: 0x10600003
    ctx->pc = 0x1BD3E4u;
    {
        const bool branch_taken_0x1bd3e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1bd3e4) {
            ctx->pc = 0x1BD3F4u;
            goto label_1bd3f4;
        }
    }
    ctx->pc = 0x1BD3ECu;
    // 0x1bd3ec: 0xc06f900
    ctx->pc = 0x1BD3ECu;
    SET_GPR_U32(ctx, 31, 0x1BD3F4u);
    ctx->pc = 0x1BE400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE400_0x1be400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD3F4u; }
    }
    if (ctx->pc != 0x1BD3F4u) { return; }
    ctx->pc = 0x1BD3F4u;
label_1bd3f4:
    // 0x1bd3f4: 0xdfbf0020
    ctx->pc = 0x1bd3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd3f8: 0x7bb10010
    ctx->pc = 0x1bd3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd3fc: 0x7bb00000
    ctx->pc = 0x1bd3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd400: 0x3e00008
    ctx->pc = 0x1BD400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BD324u: goto label_1bd324;
            case 0x1BD32Cu: goto label_1bd32c;
            case 0x1BD3B8u: goto label_1bd3b8;
            case 0x1BD3D0u: goto label_1bd3d0;
            case 0x1BD3D4u: goto label_1bd3d4;
            case 0x1BD3F4u: goto label_1bd3f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BD408u;
    // 0x1bd408: 0x0
    ctx->pc = 0x1bd408u;
    // NOP
    // 0x1bd40c: 0x0
    ctx->pc = 0x1bd40cu;
    // NOP
}
