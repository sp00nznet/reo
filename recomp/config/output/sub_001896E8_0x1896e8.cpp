#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001896E8
// Address: 0x1896e8 - 0x1897d8
void sub_001896E8_0x1896e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1896e8u;

    // 0x1896e8: 0x27bdffb0
    ctx->pc = 0x1896e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1896ec: 0x3c020029
    ctx->pc = 0x1896ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x1896f0: 0xffb00010
    ctx->pc = 0x1896f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1896f4: 0x24080280
    ctx->pc = 0x1896f4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1896f8: 0x24500c00
    ctx->pc = 0x1896f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3072));
    // 0x1896fc: 0xac440c00
    ctx->pc = 0x1896fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3072), GPR_U32(ctx, 4));
    // 0x189700: 0xffb20030
    ctx->pc = 0x189700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x189704: 0x3c040029
    ctx->pc = 0x189704u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x189708: 0xffb10020
    ctx->pc = 0x189708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18970c: 0xe0902d
    ctx->pc = 0x18970cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189710: 0xffbf0040
    ctx->pc = 0x189710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x189714: 0xc0882d
    ctx->pc = 0x189714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189718: 0xae050004
    ctx->pc = 0x189718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x18971c: 0x24840b88
    ctx->pc = 0x18971cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2952));
    // 0x189720: 0x3c058000
    ctx->pc = 0x189720u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x189724: 0x302d
    ctx->pc = 0x189724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189728: 0x8e220000
    ctx->pc = 0x189728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18972c: 0x34a5131a
    ctx->pc = 0x18972cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4890));
    // 0x189730: 0xafa00000
    ctx->pc = 0x189730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x189734: 0x200382d
    ctx->pc = 0x189734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189738: 0xae020008
    ctx->pc = 0x189738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x18973c: 0x200482d
    ctx->pc = 0x18973cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189740: 0x240a0280
    ctx->pc = 0x189740u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 640));
    // 0x189744: 0xc045e7a
    ctx->pc = 0x189744u;
    SET_GPR_U32(ctx, 31, 0x18974Cu);
    ctx->pc = 0x189748u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18974Cu; }
    }
    if (ctx->pc != 0x18974Cu) { return; }
    ctx->pc = 0x18974Cu;
    // 0x18974c: 0x4430006
    ctx->pc = 0x18974Cu;
    {
        const bool branch_taken_0x18974c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18974c) {
            ctx->pc = 0x189750u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->pc = 0x189768u;
            goto label_189768;
        }
    }
    ctx->pc = 0x189754u;
    // 0x189754: 0x3c040024
    ctx->pc = 0x189754u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x189758: 0xc0625f6
    ctx->pc = 0x189758u;
    SET_GPR_U32(ctx, 31, 0x189760u);
    ctx->pc = 0x18975Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6880));
    ctx->pc = 0x1897D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001897D8_0x1897d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189760u; }
    }
    if (ctx->pc != 0x189760u) { return; }
    ctx->pc = 0x189760u;
    // 0x189760: 0x10000016
    ctx->pc = 0x189760u;
    {
        const bool branch_taken_0x189760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189764u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189760) {
            ctx->pc = 0x1897BCu;
            goto label_1897bc;
        }
    }
    ctx->pc = 0x189768u;
label_189768:
    // 0x189768: 0x4400015
    ctx->pc = 0x189768u;
    {
        const bool branch_taken_0x189768 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18976Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x189768) {
            ctx->pc = 0x1897C0u;
            goto label_1897c0;
        }
    }
    ctx->pc = 0x189770u;
    // 0x189770: 0x8e030008
    ctx->pc = 0x189770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189774: 0xae230000
    ctx->pc = 0x189774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x189778: 0x8e020008
    ctx->pc = 0x189778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18977c: 0x1840000e
    ctx->pc = 0x18977Cu;
    {
        const bool branch_taken_0x18977c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x189780u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18977c) {
            ctx->pc = 0x1897B8u;
            goto label_1897b8;
        }
    }
    ctx->pc = 0x189784u;
    // 0x189784: 0x2606000c
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 12));
    // 0x189788: 0xc51021
    ctx->pc = 0x189788u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x18978c: 0x0
    ctx->pc = 0x18978cu;
    // NOP
label_189790:
    // 0x189790: 0x2452021
    ctx->pc = 0x189790u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x189794: 0x90430000
    ctx->pc = 0x189794u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189798: 0x24a50001
    ctx->pc = 0x189798u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x18979c: 0xa0830000
    ctx->pc = 0x18979cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1897a0: 0x8e020008
    ctx->pc = 0x1897a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1897a4: 0xa2102a
    ctx->pc = 0x1897a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1897a8: 0x1440fff9
    ctx->pc = 0x1897A8u;
    {
        const bool branch_taken_0x1897a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1897ACu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        if (branch_taken_0x1897a8) {
            ctx->pc = 0x189790u;
            goto label_189790;
        }
    }
    ctx->pc = 0x1897B0u;
    // 0x1897b0: 0x10000002
    ctx->pc = 0x1897B0u;
    {
        const bool branch_taken_0x1897b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1897B4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 524)));
        if (branch_taken_0x1897b0) {
            ctx->pc = 0x1897BCu;
            goto label_1897bc;
        }
    }
    ctx->pc = 0x1897B8u;
label_1897b8:
    // 0x1897b8: 0x8e02020c
    ctx->pc = 0x1897b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_1897bc:
    // 0x1897bc: 0xdfbf0040
    ctx->pc = 0x1897bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1897c0:
    // 0x1897c0: 0xdfb20030
    ctx->pc = 0x1897c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1897c4: 0xdfb10020
    ctx->pc = 0x1897c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1897c8: 0xdfb00010
    ctx->pc = 0x1897c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1897cc: 0x3e00008
    ctx->pc = 0x1897CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1897D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189768u: goto label_189768;
            case 0x189790u: goto label_189790;
            case 0x1897B8u: goto label_1897b8;
            case 0x1897BCu: goto label_1897bc;
            case 0x1897C0u: goto label_1897c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1897D4u;
    // 0x1897d4: 0x0
    ctx->pc = 0x1897d4u;
    // NOP
}
