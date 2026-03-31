#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001DC298
// Address: 0x1dc298 - 0x1dc7b8
void sub_001DC298_0x1dc298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1dc298u;

    // 0x1dc298: 0x27bdff90
    ctx->pc = 0x1dc298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc29c: 0xffb00050
    ctx->pc = 0x1dc29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1dc2a0: 0xffbe0058
    ctx->pc = 0x1dc2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 30));
    // 0x1dc2a4: 0xffbf0060
    ctx->pc = 0x1dc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1dc2a8: 0x3a0f02d
    ctx->pc = 0x1dc2a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2ac: 0xafc40000
    ctx->pc = 0x1dc2acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1dc2b0: 0xafc50004
    ctx->pc = 0x1dc2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1dc2b4: 0x8fc20000
    ctx->pc = 0x1dc2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc2b8: 0x8c420060
    ctx->pc = 0x1dc2b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dc2bc: 0x24420008
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dc2c0: 0x40202d
    ctx->pc = 0x1dc2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2c4: 0xc07c441
    ctx->pc = 0x1DC2C4u;
    SET_GPR_U32(ctx, 31, 0x1DC2CCu);
    ctx->pc = 0x1F1104u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1104_0x1f1104(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC2CCu; }
    }
    if (ctx->pc != 0x1DC2CCu) { return; }
    ctx->pc = 0x1DC2CCu;
    // 0x1dc2cc: 0x14400003
    ctx->pc = 0x1DC2CCu;
    {
        const bool branch_taken_0x1dc2cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc2cc) {
            ctx->pc = 0x1DC2DCu;
            goto label_1dc2dc;
        }
    }
    ctx->pc = 0x1DC2D4u;
    // 0x1dc2d4: 0x10000131
    ctx->pc = 0x1DC2D4u;
    {
        const bool branch_taken_0x1dc2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc2d4) {
            ctx->pc = 0x1DC79Cu;
            goto label_1dc79c;
        }
    }
    ctx->pc = 0x1DC2DCu;
label_1dc2dc:
    // 0x1dc2dc: 0x8fc40000
    ctx->pc = 0x1dc2dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc2e0: 0xc076e45
    ctx->pc = 0x1DC2E0u;
    SET_GPR_U32(ctx, 31, 0x1DC2E8u);
    ctx->pc = 0x1DB914u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB914_0x1db914(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC2E8u; }
    }
    if (ctx->pc != 0x1DC2E8u) { return; }
    ctx->pc = 0x1DC2E8u;
    // 0x1dc2e8: 0xafc20020
    ctx->pc = 0x1dc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1dc2ec: 0x8fc20020
    ctx->pc = 0x1dc2ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1dc2f0: 0x10400006
    ctx->pc = 0x1DC2F0u;
    {
        const bool branch_taken_0x1dc2f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc2f0) {
            ctx->pc = 0x1DC30Cu;
            goto label_1dc30c;
        }
    }
    ctx->pc = 0x1DC2F8u;
    // 0x1dc2f8: 0x8fc30000
    ctx->pc = 0x1dc2f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc2fc: 0x240201f5
    ctx->pc = 0x1dc2fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 501));
    // 0x1dc300: 0xac62050c
    ctx->pc = 0x1dc300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1292), GPR_U32(ctx, 2));
    // 0x1dc304: 0x10000125
    ctx->pc = 0x1DC304u;
    {
        const bool branch_taken_0x1dc304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc304) {
            ctx->pc = 0x1DC79Cu;
            goto label_1dc79c;
        }
    }
    ctx->pc = 0x1DC30Cu;
label_1dc30c:
    // 0x1dc30c: 0x8fc20000
    ctx->pc = 0x1dc30cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc310: 0x8c420060
    ctx->pc = 0x1dc310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dc314: 0x24420008
    ctx->pc = 0x1dc314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dc318: 0x27c30008
    ctx->pc = 0x1dc318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 8));
    // 0x1dc31c: 0x40202d
    ctx->pc = 0x1dc31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc320: 0x60282d
    ctx->pc = 0x1dc320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc324: 0xc07c499
    ctx->pc = 0x1DC324u;
    SET_GPR_U32(ctx, 31, 0x1DC32Cu);
    ctx->pc = 0x1F1264u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1264_0x1f1264(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC32Cu; }
    }
    if (ctx->pc != 0x1DC32Cu) { return; }
    ctx->pc = 0x1DC32Cu;
    // 0x1dc32c: 0xafc20020
    ctx->pc = 0x1dc32cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1dc330: 0x8fc20020
    ctx->pc = 0x1dc330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1dc334: 0x10400003
    ctx->pc = 0x1DC334u;
    {
        const bool branch_taken_0x1dc334 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc334) {
            ctx->pc = 0x1DC344u;
            goto label_1dc344;
        }
    }
    ctx->pc = 0x1DC33Cu;
    // 0x1dc33c: 0x10000117
    ctx->pc = 0x1DC33Cu;
    {
        const bool branch_taken_0x1dc33c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc33c) {
            ctx->pc = 0x1DC79Cu;
            goto label_1dc79c;
        }
    }
    ctx->pc = 0x1DC344u;
label_1dc344:
    // 0x1dc344: 0x8fc40008
    ctx->pc = 0x1dc344u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc348: 0x24051000
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dc34c: 0xc07c670
    ctx->pc = 0x1DC34Cu;
    SET_GPR_U32(ctx, 31, 0x1DC354u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC354u; }
    }
    if (ctx->pc != 0x1DC354u) { return; }
    ctx->pc = 0x1DC354u;
    // 0x1dc354: 0x10400012
    ctx->pc = 0x1DC354u;
    {
        const bool branch_taken_0x1dc354 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc354) {
            ctx->pc = 0x1DC3A0u;
            goto label_1dc3a0;
        }
    }
    ctx->pc = 0x1DC35Cu;
    // 0x1dc35c: 0x8fc40008
    ctx->pc = 0x1dc35cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc360: 0x24050200
    ctx->pc = 0x1dc360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1dc364: 0xc07c670
    ctx->pc = 0x1DC364u;
    SET_GPR_U32(ctx, 31, 0x1DC36Cu);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC36Cu; }
    }
    if (ctx->pc != 0x1DC36Cu) { return; }
    ctx->pc = 0x1DC36Cu;
    // 0x1dc36c: 0x10400005
    ctx->pc = 0x1DC36Cu;
    {
        const bool branch_taken_0x1dc36c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc36c) {
            ctx->pc = 0x1DC384u;
            goto label_1dc384;
        }
    }
    ctx->pc = 0x1DC374u;
    // 0x1dc374: 0x8fc40000
    ctx->pc = 0x1dc374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc378: 0x8fc50008
    ctx->pc = 0x1dc378u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc37c: 0xc07707a
    ctx->pc = 0x1DC37Cu;
    SET_GPR_U32(ctx, 31, 0x1DC384u);
    ctx->pc = 0x1DC1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC1E8_0x1dc1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC384u; }
    }
    if (ctx->pc != 0x1DC384u) { return; }
    ctx->pc = 0x1DC384u;
label_1dc384:
    // 0x1dc384: 0x8fc40008
    ctx->pc = 0x1dc384u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc388: 0xc07cd0f
    ctx->pc = 0x1DC388u;
    SET_GPR_U32(ctx, 31, 0x1DC390u);
    ctx->pc = 0x1F343Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F343C_0x1f343c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC390u; }
    }
    if (ctx->pc != 0x1DC390u) { return; }
    ctx->pc = 0x1DC390u;
    // 0x1dc390: 0x8fc40008
    ctx->pc = 0x1dc390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc394: 0x40282d
    ctx->pc = 0x1dc394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc398: 0xc076d2e
    ctx->pc = 0x1DC398u;
    SET_GPR_U32(ctx, 31, 0x1DC3A0u);
    ctx->pc = 0x1DB4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB4B8_0x1db4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3A0u; }
    }
    if (ctx->pc != 0x1DC3A0u) { return; }
    ctx->pc = 0x1DC3A0u;
label_1dc3a0:
    // 0x1dc3a0: 0x8fc20000
    ctx->pc = 0x1dc3a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc3a4: 0x8c420060
    ctx->pc = 0x1dc3a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dc3a8: 0xafc2002c
    ctx->pc = 0x1dc3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x1dc3ac: 0x8fc40008
    ctx->pc = 0x1dc3acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc3b0: 0xc07c6b6
    ctx->pc = 0x1DC3B0u;
    SET_GPR_U32(ctx, 31, 0x1DC3B8u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3B8u; }
    }
    if (ctx->pc != 0x1DC3B8u) { return; }
    ctx->pc = 0x1DC3B8u;
    // 0x1dc3b8: 0x40182d
    ctx->pc = 0x1dc3b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3bc: 0x8fc20000
    ctx->pc = 0x1dc3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc3c0: 0x8c420040
    ctx->pc = 0x1dc3c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc3c4: 0x621021
    ctx->pc = 0x1dc3c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dc3c8: 0x2443001f
    ctx->pc = 0x1dc3c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 31));
    // 0x1dc3cc: 0x8fc20000
    ctx->pc = 0x1dc3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc3d0: 0x8c420040
    ctx->pc = 0x1dc3d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc3d4: 0x62001b
    ctx->pc = 0x1dc3d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x1dc3d8: 0x1812
    ctx->pc = 0x1dc3d8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1dc3dc: 0x50400001
    ctx->pc = 0x1DC3DCu;
    {
        const bool branch_taken_0x1dc3dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc3dc) {
            ctx->pc = 0x1DC3E0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1DC3E4u;
            goto label_1dc3e4;
        }
    }
    ctx->pc = 0x1DC3E4u;
label_1dc3e4:
    // 0x1dc3e4: 0x2c620012
    ctx->pc = 0x1dc3e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 18));
    // 0x1dc3e8: 0x14400017
    ctx->pc = 0x1DC3E8u;
    {
        const bool branch_taken_0x1dc3e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc3e8) {
            ctx->pc = 0x1DC448u;
            goto label_1dc448;
        }
    }
    ctx->pc = 0x1DC3F0u;
    // 0x1dc3f0: 0x8fc40008
    ctx->pc = 0x1dc3f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc3f4: 0xc07c6b6
    ctx->pc = 0x1DC3F4u;
    SET_GPR_U32(ctx, 31, 0x1DC3FCu);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC3FCu; }
    }
    if (ctx->pc != 0x1DC3FCu) { return; }
    ctx->pc = 0x1DC3FCu;
    // 0x1dc3fc: 0xafc20030
    ctx->pc = 0x1dc3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1dc400: 0x8fc20000
    ctx->pc = 0x1dc400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc404: 0x8c420040
    ctx->pc = 0x1dc404u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc408: 0x8fc30030
    ctx->pc = 0x1dc408u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1dc40c: 0x621821
    ctx->pc = 0x1dc40cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dc410: 0xafc30030
    ctx->pc = 0x1dc410u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 3));
    // 0x1dc414: 0x8fc20030
    ctx->pc = 0x1dc414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1dc418: 0x2442001f
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x1dc41c: 0xafc20030
    ctx->pc = 0x1dc41cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1dc420: 0x8fc20000
    ctx->pc = 0x1dc420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc424: 0x8c420040
    ctx->pc = 0x1dc424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc428: 0x8fc30030
    ctx->pc = 0x1dc428u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1dc42c: 0x62001b
    ctx->pc = 0x1dc42cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x1dc430: 0x1812
    ctx->pc = 0x1dc430u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1dc434: 0xafc30030
    ctx->pc = 0x1dc434u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 3));
    // 0x1dc438: 0x50400001
    ctx->pc = 0x1DC438u;
    {
        const bool branch_taken_0x1dc438 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc438) {
            ctx->pc = 0x1DC43Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1DC440u;
            goto label_1dc440;
        }
    }
    ctx->pc = 0x1DC440u;
label_1dc440:
    // 0x1dc440: 0x10000003
    ctx->pc = 0x1DC440u;
    {
        const bool branch_taken_0x1dc440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc440) {
            ctx->pc = 0x1DC450u;
            goto label_1dc450;
        }
    }
    ctx->pc = 0x1DC448u;
label_1dc448:
    // 0x1dc448: 0x24020011
    ctx->pc = 0x1dc448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1dc44c: 0xafc20030
    ctx->pc = 0x1dc44cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_1dc450:
    // 0x1dc450: 0x8fc20030
    ctx->pc = 0x1dc450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1dc454: 0x8fc3002c
    ctx->pc = 0x1dc454u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1dc458: 0xac620004
    ctx->pc = 0x1dc458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1dc45c: 0x8fc40008
    ctx->pc = 0x1dc45cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc460: 0x34058000
    ctx->pc = 0x1dc460u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1dc464: 0xc07c670
    ctx->pc = 0x1DC464u;
    SET_GPR_U32(ctx, 31, 0x1DC46Cu);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC46Cu; }
    }
    if (ctx->pc != 0x1DC46Cu) { return; }
    ctx->pc = 0x1DC46Cu;
    // 0x1dc46c: 0x10400072
    ctx->pc = 0x1DC46Cu;
    {
        const bool branch_taken_0x1dc46c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc46c) {
            ctx->pc = 0x1DC638u;
            goto label_1dc638;
        }
    }
    ctx->pc = 0x1DC474u;
    // 0x1dc474: 0x8fc40008
    ctx->pc = 0x1dc474u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc478: 0x24052000
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dc47c: 0xc07c670
    ctx->pc = 0x1DC47Cu;
    SET_GPR_U32(ctx, 31, 0x1DC484u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC484u; }
    }
    if (ctx->pc != 0x1DC484u) { return; }
    ctx->pc = 0x1DC484u;
    // 0x1dc484: 0x14400053
    ctx->pc = 0x1DC484u;
    {
        const bool branch_taken_0x1dc484 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc484) {
            ctx->pc = 0x1DC5D4u;
            goto label_1dc5d4;
        }
    }
    ctx->pc = 0x1DC48Cu;
    // 0x1dc48c: 0x8fc20008
    ctx->pc = 0x1dc48cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc490: 0x2442002c
    ctx->pc = 0x1dc490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1dc494: 0x94420000
    ctx->pc = 0x1dc494u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc498: 0x30428000
    ctx->pc = 0x1dc498u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x1dc49c: 0x3042ffff
    ctx->pc = 0x1dc49cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1dc4a0: 0x10400017
    ctx->pc = 0x1DC4A0u;
    {
        const bool branch_taken_0x1dc4a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc4a0) {
            ctx->pc = 0x1DC500u;
            goto label_1dc500;
        }
    }
    ctx->pc = 0x1DC4A8u;
    // 0x1dc4a8: 0x8fc20000
    ctx->pc = 0x1dc4a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc4ac: 0x8c430058
    ctx->pc = 0x1dc4acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc4b0: 0x8c620000
    ctx->pc = 0x1dc4b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc4b4: 0x40282d
    ctx->pc = 0x1dc4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4b8: 0x24420001
    ctx->pc = 0x1dc4b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc4bc: 0xac620000
    ctx->pc = 0x1dc4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1dc4c0: 0x8fc40008
    ctx->pc = 0x1dc4c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc4c4: 0xc07cd2f
    ctx->pc = 0x1DC4C4u;
    SET_GPR_U32(ctx, 31, 0x1DC4CCu);
    ctx->pc = 0x1F34BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34BC_0x1f34bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4CCu; }
    }
    if (ctx->pc != 0x1DC4CCu) { return; }
    ctx->pc = 0x1DC4CCu;
    // 0x1dc4cc: 0x40182d
    ctx->pc = 0x1dc4ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d0: 0x8fc20008
    ctx->pc = 0x1dc4d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc4d4: 0x2442002c
    ctx->pc = 0x1dc4d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 44));
    // 0x1dc4d8: 0xac430008
    ctx->pc = 0x1dc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dc4dc: 0x8fc20000
    ctx->pc = 0x1dc4dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc4e0: 0x8c430058
    ctx->pc = 0x1dc4e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc4e4: 0x8fc20000
    ctx->pc = 0x1dc4e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc4e8: 0x8c420058
    ctx->pc = 0x1dc4e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc4ec: 0x8c420004
    ctx->pc = 0x1dc4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dc4f0: 0x24420001
    ctx->pc = 0x1dc4f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc4f4: 0xac620004
    ctx->pc = 0x1dc4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1dc4f8: 0x10000036
    ctx->pc = 0x1DC4F8u;
    {
        const bool branch_taken_0x1dc4f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc4f8) {
            ctx->pc = 0x1DC5D4u;
            goto label_1dc5d4;
        }
    }
    ctx->pc = 0x1DC500u;
label_1dc500:
    // 0x1dc500: 0x8fc40008
    ctx->pc = 0x1dc500u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc504: 0xc07cd3b
    ctx->pc = 0x1DC504u;
    SET_GPR_U32(ctx, 31, 0x1DC50Cu);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC50Cu; }
    }
    if (ctx->pc != 0x1DC50Cu) { return; }
    ctx->pc = 0x1DC50Cu;
    // 0x1dc50c: 0xafc2000c
    ctx->pc = 0x1dc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1dc510: 0x27c20010
    ctx->pc = 0x1dc510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1dc514: 0x40202d
    ctx->pc = 0x1dc514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc518: 0x8fc5000c
    ctx->pc = 0x1dc518u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1dc51c: 0x24060010
    ctx->pc = 0x1dc51cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dc520: 0xc041eac
    ctx->pc = 0x1DC520u;
    SET_GPR_U32(ctx, 31, 0x1DC528u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC528u; }
    }
    if (ctx->pc != 0x1DC528u) { return; }
    ctx->pc = 0x1DC528u;
label_1dc528:
    // 0x1dc528: 0x97c20010
    ctx->pc = 0x1dc528u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1dc52c: 0x30428000
    ctx->pc = 0x1dc52cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x1dc530: 0x3042ffff
    ctx->pc = 0x1dc530u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1dc534: 0x10400003
    ctx->pc = 0x1DC534u;
    {
        const bool branch_taken_0x1dc534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc534) {
            ctx->pc = 0x1DC544u;
            goto label_1dc544;
        }
    }
    ctx->pc = 0x1DC53Cu;
    // 0x1dc53c: 0x1000000b
    ctx->pc = 0x1DC53Cu;
    {
        const bool branch_taken_0x1dc53c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc53c) {
            ctx->pc = 0x1DC56Cu;
            goto label_1dc56c;
        }
    }
    ctx->pc = 0x1DC544u;
label_1dc544:
    // 0x1dc544: 0x27c20010
    ctx->pc = 0x1dc544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1dc548: 0x8fc40008
    ctx->pc = 0x1dc548u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc54c: 0x8fc5000c
    ctx->pc = 0x1dc54cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1dc550: 0x40302d
    ctx->pc = 0x1dc550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc554: 0xc07ce40
    ctx->pc = 0x1DC554u;
    SET_GPR_U32(ctx, 31, 0x1DC55Cu);
    ctx->pc = 0x1F3900u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F3900_0x1f3900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC55Cu; }
    }
    if (ctx->pc != 0x1DC55Cu) { return; }
    ctx->pc = 0x1DC55Cu;
    // 0x1dc55c: 0xafc2000c
    ctx->pc = 0x1dc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x1dc560: 0x8fc2000c
    ctx->pc = 0x1dc560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1dc564: 0x1440fff0
    ctx->pc = 0x1DC564u;
    {
        const bool branch_taken_0x1dc564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc564) {
            ctx->pc = 0x1DC528u;
            goto label_1dc528;
        }
    }
    ctx->pc = 0x1DC56Cu;
label_1dc56c:
    // 0x1dc56c: 0x8fc2000c
    ctx->pc = 0x1dc56cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1dc570: 0x10400018
    ctx->pc = 0x1DC570u;
    {
        const bool branch_taken_0x1dc570 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc570) {
            ctx->pc = 0x1DC5D4u;
            goto label_1dc5d4;
        }
    }
    ctx->pc = 0x1DC578u;
    // 0x1dc578: 0x8fc20000
    ctx->pc = 0x1dc578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc57c: 0x8c430058
    ctx->pc = 0x1dc57cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc580: 0x8c620000
    ctx->pc = 0x1dc580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc584: 0x40282d
    ctx->pc = 0x1dc584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc588: 0x24420001
    ctx->pc = 0x1dc588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc58c: 0xac620000
    ctx->pc = 0x1dc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1dc590: 0x8fc40008
    ctx->pc = 0x1dc590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc594: 0xc07cd2f
    ctx->pc = 0x1DC594u;
    SET_GPR_U32(ctx, 31, 0x1DC59Cu);
    ctx->pc = 0x1F34BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34BC_0x1f34bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC59Cu; }
    }
    if (ctx->pc != 0x1DC59Cu) { return; }
    ctx->pc = 0x1DC59Cu;
    // 0x1dc59c: 0xafc20018
    ctx->pc = 0x1dc59cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x1dc5a0: 0x8fc20000
    ctx->pc = 0x1dc5a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc5a4: 0x8c430058
    ctx->pc = 0x1dc5a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc5a8: 0x8fc20000
    ctx->pc = 0x1dc5a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc5ac: 0x8c420058
    ctx->pc = 0x1dc5acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc5b0: 0x8c420004
    ctx->pc = 0x1dc5b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dc5b4: 0x24420001
    ctx->pc = 0x1dc5b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dc5b8: 0xac620004
    ctx->pc = 0x1dc5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1dc5bc: 0x27c20010
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1dc5c0: 0x8fc4000c
    ctx->pc = 0x1dc5c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1dc5c4: 0x40282d
    ctx->pc = 0x1dc5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5c8: 0x24060010
    ctx->pc = 0x1dc5c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dc5cc: 0xc041eac
    ctx->pc = 0x1DC5CCu;
    SET_GPR_U32(ctx, 31, 0x1DC5D4u);
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5D4u; }
    }
    if (ctx->pc != 0x1DC5D4u) { return; }
    ctx->pc = 0x1DC5D4u;
label_1dc5d4:
    // 0x1dc5d4: 0x8fc40008
    ctx->pc = 0x1dc5d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc5d8: 0x8fc50004
    ctx->pc = 0x1dc5d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc5dc: 0xc07ccbf
    ctx->pc = 0x1DC5DCu;
    SET_GPR_U32(ctx, 31, 0x1DC5E4u);
    ctx->pc = 0x1F32FCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F32FC_0x1f32fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5E4u; }
    }
    if (ctx->pc != 0x1DC5E4u) { return; }
    ctx->pc = 0x1DC5E4u;
    // 0x1dc5e4: 0x8fc40008
    ctx->pc = 0x1dc5e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc5e8: 0xc07c6b6
    ctx->pc = 0x1DC5E8u;
    SET_GPR_U32(ctx, 31, 0x1DC5F0u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC5F0u; }
    }
    if (ctx->pc != 0x1DC5F0u) { return; }
    ctx->pc = 0x1DC5F0u;
    // 0x1dc5f0: 0x40182d
    ctx->pc = 0x1dc5f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5f4: 0x8fc20000
    ctx->pc = 0x1dc5f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc5f8: 0x8c420040
    ctx->pc = 0x1dc5f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc5fc: 0x621021
    ctx->pc = 0x1dc5fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dc600: 0x2443001f
    ctx->pc = 0x1dc600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 31));
    // 0x1dc604: 0x8fc20000
    ctx->pc = 0x1dc604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc608: 0x8c420040
    ctx->pc = 0x1dc608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc60c: 0x62001b
    ctx->pc = 0x1dc60cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x1dc610: 0x1812
    ctx->pc = 0x1dc610u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1dc614: 0x50400001
    ctx->pc = 0x1DC614u;
    {
        const bool branch_taken_0x1dc614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc614) {
            ctx->pc = 0x1DC618u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1DC61Cu;
            goto label_1dc61c;
        }
    }
    ctx->pc = 0x1DC61Cu;
label_1dc61c:
    // 0x1dc61c: 0x8fc20000
    ctx->pc = 0x1dc61cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc620: 0x8c420510
    ctx->pc = 0x1dc620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x1dc624: 0x621021
    ctx->pc = 0x1dc624u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dc628: 0x8fc40008
    ctx->pc = 0x1dc628u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc62c: 0x40282d
    ctx->pc = 0x1dc62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc630: 0xc07cca9
    ctx->pc = 0x1DC630u;
    SET_GPR_U32(ctx, 31, 0x1DC638u);
    ctx->pc = 0x1F32A4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F32A4_0x1f32a4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC638u; }
    }
    if (ctx->pc != 0x1DC638u) { return; }
    ctx->pc = 0x1DC638u;
label_1dc638:
    // 0x1dc638: 0x8fc40008
    ctx->pc = 0x1dc638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc63c: 0x24052000
    ctx->pc = 0x1dc63cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dc640: 0xc07c670
    ctx->pc = 0x1DC640u;
    SET_GPR_U32(ctx, 31, 0x1DC648u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC648u; }
    }
    if (ctx->pc != 0x1DC648u) { return; }
    ctx->pc = 0x1DC648u;
    // 0x1dc648: 0x14400013
    ctx->pc = 0x1DC648u;
    {
        const bool branch_taken_0x1dc648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dc648) {
            ctx->pc = 0x1DC698u;
            goto label_1dc698;
        }
    }
    ctx->pc = 0x1DC650u;
    // 0x1dc650: 0x8fc40008
    ctx->pc = 0x1dc650u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc654: 0xc07ce7a
    ctx->pc = 0x1DC654u;
    SET_GPR_U32(ctx, 31, 0x1DC65Cu);
    ctx->pc = 0x1F39E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F39E8_0x1f39e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC65Cu; }
    }
    if (ctx->pc != 0x1DC65Cu) { return; }
    ctx->pc = 0x1DC65Cu;
    // 0x1dc65c: 0x3c04ba47
    ctx->pc = 0x1dc65cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)47687 << 16));
    // 0x1dc660: 0x34846611
    ctx->pc = 0x1dc660u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 26129));
    // 0x1dc664: 0xc07a04d
    ctx->pc = 0x1DC664u;
    SET_GPR_U32(ctx, 31, 0x1DC66Cu);
    ctx->pc = 0x1E8134u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8134_0x1e8134(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC66Cu; }
    }
    if (ctx->pc != 0x1DC66Cu) { return; }
    ctx->pc = 0x1DC66Cu;
    // 0x1dc66c: 0xafc20028
    ctx->pc = 0x1dc66cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1dc670: 0x27c20028
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 40));
    // 0x1dc674: 0x8fc40008
    ctx->pc = 0x1dc674u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc678: 0x40282d
    ctx->pc = 0x1dc678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc67c: 0x24060004
    ctx->pc = 0x1dc67cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc680: 0xc07cd5f
    ctx->pc = 0x1DC680u;
    SET_GPR_U32(ctx, 31, 0x1DC688u);
    ctx->pc = 0x1F357Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F357C_0x1f357c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC688u; }
    }
    if (ctx->pc != 0x1DC688u) { return; }
    ctx->pc = 0x1DC688u;
    // 0x1dc688: 0x8fc40008
    ctx->pc = 0x1dc688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc68c: 0x24052000
    ctx->pc = 0x1dc68cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dc690: 0xc07c680
    ctx->pc = 0x1DC690u;
    SET_GPR_U32(ctx, 31, 0x1DC698u);
    ctx->pc = 0x1F1A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1A00_0x1f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC698u; }
    }
    if (ctx->pc != 0x1DC698u) { return; }
    ctx->pc = 0x1DC698u;
label_1dc698:
    // 0x1dc698: 0x8fc40008
    ctx->pc = 0x1dc698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc69c: 0xc07cd3b
    ctx->pc = 0x1DC69Cu;
    SET_GPR_U32(ctx, 31, 0x1DC6A4u);
    ctx->pc = 0x1F34ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F34EC_0x1f34ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6A4u; }
    }
    if (ctx->pc != 0x1DC6A4u) { return; }
    ctx->pc = 0x1DC6A4u;
    // 0x1dc6a4: 0x40802d
    ctx->pc = 0x1dc6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6a8: 0x8fc40008
    ctx->pc = 0x1dc6a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc6ac: 0xc07c6b6
    ctx->pc = 0x1DC6ACu;
    SET_GPR_U32(ctx, 31, 0x1DC6B4u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6B4u; }
    }
    if (ctx->pc != 0x1DC6B4u) { return; }
    ctx->pc = 0x1DC6B4u;
    // 0x1dc6b4: 0x40302d
    ctx->pc = 0x1dc6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6b8: 0x8fc30000
    ctx->pc = 0x1dc6b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc6bc: 0x8fc20000
    ctx->pc = 0x1dc6bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc6c0: 0x24420048
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 72));
    // 0x1dc6c4: 0x8c640000
    ctx->pc = 0x1dc6c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc6c8: 0x200282d
    ctx->pc = 0x1dc6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6cc: 0x382d
    ctx->pc = 0x1dc6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6d0: 0x40402d
    ctx->pc = 0x1dc6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6d4: 0x24090010
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dc6d8: 0xc07a4c3
    ctx->pc = 0x1DC6D8u;
    SET_GPR_U32(ctx, 31, 0x1DC6E0u);
    ctx->pc = 0x1E930Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E930C_0x1e930c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6E0u; }
    }
    if (ctx->pc != 0x1DC6E0u) { return; }
    ctx->pc = 0x1DC6E0u;
    // 0x1dc6e0: 0xafc20024
    ctx->pc = 0x1dc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1dc6e4: 0x8fc40008
    ctx->pc = 0x1dc6e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc6e8: 0xc07c6b6
    ctx->pc = 0x1DC6E8u;
    SET_GPR_U32(ctx, 31, 0x1DC6F0u);
    ctx->pc = 0x1F1AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1AD8_0x1f1ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6F0u; }
    }
    if (ctx->pc != 0x1DC6F0u) { return; }
    ctx->pc = 0x1DC6F0u;
    // 0x1dc6f0: 0x40182d
    ctx->pc = 0x1dc6f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc6f4: 0x8fc20024
    ctx->pc = 0x1dc6f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1dc6f8: 0x10430006
    ctx->pc = 0x1DC6F8u;
    {
        const bool branch_taken_0x1dc6f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1dc6f8) {
            ctx->pc = 0x1DC714u;
            goto label_1dc714;
        }
    }
    ctx->pc = 0x1DC700u;
    // 0x1dc700: 0x8fc30000
    ctx->pc = 0x1dc700u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc704: 0x240201f4
    ctx->pc = 0x1dc704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 500));
    // 0x1dc708: 0xac62050c
    ctx->pc = 0x1dc708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1292), GPR_U32(ctx, 2));
    // 0x1dc70c: 0x10000023
    ctx->pc = 0x1DC70Cu;
    {
        const bool branch_taken_0x1dc70c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc70c) {
            ctx->pc = 0x1DC79Cu;
            goto label_1dc79c;
        }
    }
    ctx->pc = 0x1DC714u;
label_1dc714:
    // 0x1dc714: 0x8fc40008
    ctx->pc = 0x1dc714u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc718: 0x34058000
    ctx->pc = 0x1dc718u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1dc71c: 0xc07c670
    ctx->pc = 0x1DC71Cu;
    SET_GPR_U32(ctx, 31, 0x1DC724u);
    ctx->pc = 0x1F19C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F19C0_0x1f19c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC724u; }
    }
    if (ctx->pc != 0x1DC724u) { return; }
    ctx->pc = 0x1DC724u;
    // 0x1dc724: 0x1040000e
    ctx->pc = 0x1DC724u;
    {
        const bool branch_taken_0x1dc724 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc724) {
            ctx->pc = 0x1DC760u;
            goto label_1dc760;
        }
    }
    ctx->pc = 0x1DC72Cu;
    // 0x1dc72c: 0x8fc20000
    ctx->pc = 0x1dc72cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc730: 0x8c420058
    ctx->pc = 0x1dc730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc734: 0x24420008
    ctx->pc = 0x1dc734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1dc738: 0x40202d
    ctx->pc = 0x1dc738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc73c: 0x8fc50008
    ctx->pc = 0x1dc73cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc740: 0xc07c47a
    ctx->pc = 0x1DC740u;
    SET_GPR_U32(ctx, 31, 0x1DC748u);
    ctx->pc = 0x1F11E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F11E8_0x1f11e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC748u; }
    }
    if (ctx->pc != 0x1DC748u) { return; }
    ctx->pc = 0x1DC748u;
    // 0x1dc748: 0xafc20020
    ctx->pc = 0x1dc748u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1dc74c: 0x8fc20020
    ctx->pc = 0x1dc74cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1dc750: 0x1040000e
    ctx->pc = 0x1DC750u;
    {
        const bool branch_taken_0x1dc750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc750) {
            ctx->pc = 0x1DC78Cu;
            goto label_1dc78c;
        }
    }
    ctx->pc = 0x1DC758u;
    // 0x1dc758: 0x10000010
    ctx->pc = 0x1DC758u;
    {
        const bool branch_taken_0x1dc758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc758) {
            ctx->pc = 0x1DC79Cu;
            goto label_1dc79c;
        }
    }
    ctx->pc = 0x1DC760u;
label_1dc760:
    // 0x1dc760: 0x8fc20000
    ctx->pc = 0x1dc760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc764: 0x8c440520
    ctx->pc = 0x1dc764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x1dc768: 0x8fc50008
    ctx->pc = 0x1dc768u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1dc76c: 0xc07ca04
    ctx->pc = 0x1DC76Cu;
    SET_GPR_U32(ctx, 31, 0x1DC774u);
    ctx->pc = 0x1F2810u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2810_0x1f2810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC774u; }
    }
    if (ctx->pc != 0x1DC774u) { return; }
    ctx->pc = 0x1DC774u;
    // 0x1dc774: 0xafc20020
    ctx->pc = 0x1dc774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1dc778: 0x8fc20020
    ctx->pc = 0x1dc778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1dc77c: 0x10400003
    ctx->pc = 0x1DC77Cu;
    {
        const bool branch_taken_0x1dc77c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc77c) {
            ctx->pc = 0x1DC78Cu;
            goto label_1dc78c;
        }
    }
    ctx->pc = 0x1DC784u;
    // 0x1dc784: 0x10000005
    ctx->pc = 0x1DC784u;
    {
        const bool branch_taken_0x1dc784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dc784) {
            ctx->pc = 0x1DC79Cu;
            goto label_1dc79c;
        }
    }
    ctx->pc = 0x1DC78Cu;
label_1dc78c:
    // 0x1dc78c: 0x8fc20000
    ctx->pc = 0x1dc78cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1dc790: 0x8c430060
    ctx->pc = 0x1dc790u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1dc794: 0x8fc20004
    ctx->pc = 0x1dc794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1dc798: 0xac620000
    ctx->pc = 0x1dc798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dc79c:
    // 0x1dc79c: 0x3c0e82d
    ctx->pc = 0x1dc79cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7a0: 0xdfb00050
    ctx->pc = 0x1dc7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc7a4: 0xdfbe0058
    ctx->pc = 0x1dc7a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc7a8: 0xdfbf0060
    ctx->pc = 0x1dc7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc7ac: 0x27bd0070
    ctx->pc = 0x1dc7acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1dc7b0: 0x3e00008
    ctx->pc = 0x1DC7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC2DCu: goto label_1dc2dc;
            case 0x1DC30Cu: goto label_1dc30c;
            case 0x1DC344u: goto label_1dc344;
            case 0x1DC384u: goto label_1dc384;
            case 0x1DC3A0u: goto label_1dc3a0;
            case 0x1DC3E4u: goto label_1dc3e4;
            case 0x1DC440u: goto label_1dc440;
            case 0x1DC448u: goto label_1dc448;
            case 0x1DC450u: goto label_1dc450;
            case 0x1DC500u: goto label_1dc500;
            case 0x1DC528u: goto label_1dc528;
            case 0x1DC544u: goto label_1dc544;
            case 0x1DC56Cu: goto label_1dc56c;
            case 0x1DC5D4u: goto label_1dc5d4;
            case 0x1DC61Cu: goto label_1dc61c;
            case 0x1DC638u: goto label_1dc638;
            case 0x1DC698u: goto label_1dc698;
            case 0x1DC714u: goto label_1dc714;
            case 0x1DC760u: goto label_1dc760;
            case 0x1DC78Cu: goto label_1dc78c;
            case 0x1DC79Cu: goto label_1dc79c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC7B8u;
}
