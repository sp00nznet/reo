#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0037C2C0
// Address: 0x37c2c0 - 0x37c3b0
void sub_0037C2C0_0x37c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x37c2c0u;

    // 0x37c2c0: 0x3c010057
    ctx->pc = 0x37c2c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c2c4: 0x24020080
    ctx->pc = 0x37c2c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x37c2c8: 0x8423c810
    ctx->pc = 0x37c2c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37c2cc: 0x14620003
    ctx->pc = 0x37C2CCu;
    {
        const bool branch_taken_0x37c2cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x37C2D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)87 << 16));
        if (branch_taken_0x37c2cc) {
            ctx->pc = 0x37C2DCu;
            goto label_37c2dc;
        }
    }
    ctx->pc = 0x37C2D4u;
    // 0x37c2d4: 0x10000032
    ctx->pc = 0x37C2D4u;
    {
        const bool branch_taken_0x37c2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C2D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x37c2d4) {
            ctx->pc = 0x37C3A0u;
            goto label_37c3a0;
        }
    }
    ctx->pc = 0x37C2DCu;
label_37c2dc:
    // 0x37c2dc: 0x31880
    ctx->pc = 0x37c2dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x37c2e0: 0x2442c830
    ctx->pc = 0x37c2e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953008));
    // 0x37c2e4: 0x3c010057
    ctx->pc = 0x37c2e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c2e8: 0x431021
    ctx->pc = 0x37c2e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37c2ec: 0xac440000
    ctx->pc = 0x37c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x37c2f0: 0x8423c810
    ctx->pc = 0x37c2f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294952976)));
    // 0x37c2f4: 0x3c010057
    ctx->pc = 0x37c2f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c2f8: 0x24630001
    ctx->pc = 0x37c2f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x37c2fc: 0x8c22c820
    ctx->pc = 0x37c2fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294952992)));
    // 0x37c300: 0x3c010057
    ctx->pc = 0x37c300u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c304: 0x1444000e
    ctx->pc = 0x37C304u;
    {
        const bool branch_taken_0x37c304 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x37C308u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294952976), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x37c304) {
            ctx->pc = 0x37C340u;
            goto label_37c340;
        }
    }
    ctx->pc = 0x37C30Cu;
    // 0x37c30c: 0x8c820000
    ctx->pc = 0x37c30cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37c310: 0x14400005
    ctx->pc = 0x37C310u;
    {
        const bool branch_taken_0x37c310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C314u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37c310) {
            ctx->pc = 0x37C328u;
            goto label_37c328;
        }
    }
    ctx->pc = 0x37C318u;
    // 0x37c318: 0xac20c818
    ctx->pc = 0x37c318u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952984), GPR_U32(ctx, 0));
    // 0x37c31c: 0x3c010057
    ctx->pc = 0x37c31cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c320: 0x10000005
    ctx->pc = 0x37C320u;
    {
        const bool branch_taken_0x37c320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C324u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294952992), GPR_U32(ctx, 0));
        if (branch_taken_0x37c320) {
            ctx->pc = 0x37C338u;
            goto label_37c338;
        }
    }
    ctx->pc = 0x37C328u;
label_37c328:
    // 0x37c328: 0xac400004
    ctx->pc = 0x37c328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x37c32c: 0x3c010057
    ctx->pc = 0x37c32cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c330: 0x8c820000
    ctx->pc = 0x37c330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37c334: 0xac22c820
    ctx->pc = 0x37c334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952992), GPR_U32(ctx, 2));
label_37c338:
    // 0x37c338: 0x10000019
    ctx->pc = 0x37C338u;
    {
        const bool branch_taken_0x37c338 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C33Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37c338) {
            ctx->pc = 0x37C3A0u;
            goto label_37c3a0;
        }
    }
    ctx->pc = 0x37C340u;
label_37c340:
    // 0x37c340: 0x3c010057
    ctx->pc = 0x37c340u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c344: 0x8c22c818
    ctx->pc = 0x37c344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294952984)));
    // 0x37c348: 0x1444000e
    ctx->pc = 0x37C348u;
    {
        const bool branch_taken_0x37c348 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x37c348) {
            ctx->pc = 0x37C384u;
            goto label_37c384;
        }
    }
    ctx->pc = 0x37C350u;
    // 0x37c350: 0x8c820004
    ctx->pc = 0x37c350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37c354: 0x14400005
    ctx->pc = 0x37C354u;
    {
        const bool branch_taken_0x37c354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x37C358u;
        SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
        if (branch_taken_0x37c354) {
            ctx->pc = 0x37C36Cu;
            goto label_37c36c;
        }
    }
    ctx->pc = 0x37C35Cu;
    // 0x37c35c: 0xac20c818
    ctx->pc = 0x37c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952984), GPR_U32(ctx, 0));
    // 0x37c360: 0x3c010057
    ctx->pc = 0x37c360u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c364: 0x10000005
    ctx->pc = 0x37C364u;
    {
        const bool branch_taken_0x37c364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C368u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294952992), GPR_U32(ctx, 0));
        if (branch_taken_0x37c364) {
            ctx->pc = 0x37C37Cu;
            goto label_37c37c;
        }
    }
    ctx->pc = 0x37C36Cu;
label_37c36c:
    // 0x37c36c: 0xac400000
    ctx->pc = 0x37c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x37c370: 0x3c010057
    ctx->pc = 0x37c370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)87 << 16));
    // 0x37c374: 0x8c820004
    ctx->pc = 0x37c374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37c378: 0xac22c818
    ctx->pc = 0x37c378u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952984), GPR_U32(ctx, 2));
label_37c37c:
    // 0x37c37c: 0x10000008
    ctx->pc = 0x37C37Cu;
    {
        const bool branch_taken_0x37c37c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x37C380u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x37c37c) {
            ctx->pc = 0x37C3A0u;
            goto label_37c3a0;
        }
    }
    ctx->pc = 0x37C384u;
label_37c384:
    // 0x37c384: 0x8c850000
    ctx->pc = 0x37c384u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37c388: 0x24020001
    ctx->pc = 0x37c388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c38c: 0x8c830004
    ctx->pc = 0x37c38cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37c390: 0xac650000
    ctx->pc = 0x37c390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x37c394: 0x8c850004
    ctx->pc = 0x37c394u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37c398: 0x8c830000
    ctx->pc = 0x37c398u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37c39c: 0xac650004
    ctx->pc = 0x37c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_37c3a0:
    // 0x37c3a0: 0x3e00008
    ctx->pc = 0x37C3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37C2DCu: goto label_37c2dc;
            case 0x37C328u: goto label_37c328;
            case 0x37C338u: goto label_37c338;
            case 0x37C340u: goto label_37c340;
            case 0x37C36Cu: goto label_37c36c;
            case 0x37C37Cu: goto label_37c37c;
            case 0x37C384u: goto label_37c384;
            case 0x37C3A0u: goto label_37c3a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37C3A8u;
    // 0x37c3a8: 0x0
    ctx->pc = 0x37c3a8u;
    // NOP
    // 0x37c3ac: 0x0
    ctx->pc = 0x37c3acu;
    // NOP
}
