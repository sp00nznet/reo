#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174448
// Address: 0x174448 - 0x174518
void sub_00174448_0x174448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174448u;

    // 0x174448: 0x8c820008
    ctx->pc = 0x174448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17444c: 0xc76021
    ctx->pc = 0x17444cu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x174450: 0x8c8b0004
    ctx->pc = 0x174450u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x174454: 0x502d
    ctx->pc = 0x174454u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174458: 0x1840002d
    ctx->pc = 0x174458u;
    {
        const bool branch_taken_0x174458 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17445Cu;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 16)));
        if (branch_taken_0x174458) {
            ctx->pc = 0x174510u;
            goto label_174510;
        }
    }
    ctx->pc = 0x174460u;
    // 0x174460: 0x8c8f0000
    ctx->pc = 0x174460u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174464: 0xa6302b
    ctx->pc = 0x174464u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x174468: 0x40702d
    ctx->pc = 0x174468u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17446c: 0xac682b
    ctx->pc = 0x17446cu;
    SET_GPR_U32(ctx, 13, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x174470: 0x91040
    ctx->pc = 0x174470u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
    // 0x174474: 0x0
    ctx->pc = 0x174474u;
    // NOP
label_174478:
    // 0x174478: 0x491021
    ctx->pc = 0x174478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17447c: 0x21080
    ctx->pc = 0x17447cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x174480: 0x1e21021
    ctx->pc = 0x174480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x174484: 0x8c430004
    ctx->pc = 0x174484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x174488: 0x8c440008
    ctx->pc = 0x174488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17448c: 0xa3402b
    ctx->pc = 0x17448cu;
    SET_GPR_U32(ctx, 8, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x174490: 0x642021
    ctx->pc = 0x174490u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174494: 0x184102b
    ctx->pc = 0x174494u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x174498: 0x14400009
    ctx->pc = 0x174498u;
    {
        const bool branch_taken_0x174498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17449Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174498) {
            ctx->pc = 0x1744C0u;
            goto label_1744c0;
        }
    }
    ctx->pc = 0x1744A0u;
    // 0x1744a0: 0x15000012
    ctx->pc = 0x1744A0u;
    {
        const bool branch_taken_0x1744a0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1744A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x1744a0) {
            ctx->pc = 0x1744ECu;
            goto label_1744ec;
        }
    }
    ctx->pc = 0x1744A8u;
    // 0x1744a8: 0xa4102b
    ctx->pc = 0x1744a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1744ac: 0x5040000f
    ctx->pc = 0x1744ACu;
    {
        const bool branch_taken_0x1744ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1744ac) {
            ctx->pc = 0x1744B0u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x1744ECu;
            goto label_1744ec;
        }
    }
    ctx->pc = 0x1744B4u;
label_1744b4:
    // 0x1744b4: 0x3e00008
    ctx->pc = 0x1744B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1744B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174478u: goto label_174478;
            case 0x1744B4u: goto label_1744b4;
            case 0x1744C0u: goto label_1744c0;
            case 0x1744D0u: goto label_1744d0;
            case 0x1744ECu: goto label_1744ec;
            case 0x174500u: goto label_174500;
            case 0x174510u: goto label_174510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1744BCu;
    // 0x1744bc: 0x0
    ctx->pc = 0x1744bcu;
    // NOP
label_1744c0:
    // 0x1744c0: 0x14600003
    ctx->pc = 0x1744C0u;
    {
        const bool branch_taken_0x1744c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1744c0) {
            ctx->pc = 0x1744D0u;
            goto label_1744d0;
        }
    }
    ctx->pc = 0x1744C8u;
    // 0x1744c8: 0x15a0fffa
    ctx->pc = 0x1744C8u;
    {
        const bool branch_taken_0x1744c8 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        if (branch_taken_0x1744c8) {
            ctx->pc = 0x1744B4u;
            goto label_1744b4;
        }
    }
    ctx->pc = 0x1744D0u;
label_1744d0:
    // 0x1744d0: 0x14c00006
    ctx->pc = 0x1744D0u;
    {
        const bool branch_taken_0x1744d0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1744D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x1744d0) {
            ctx->pc = 0x1744ECu;
            goto label_1744ec;
        }
    }
    ctx->pc = 0x1744D8u;
    // 0x1744d8: 0x871023
    ctx->pc = 0x1744d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1744dc: 0xa2102b
    ctx->pc = 0x1744dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1744e0: 0x1440fff4
    ctx->pc = 0x1744E0u;
    {
        const bool branch_taken_0x1744e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1744e0) {
            ctx->pc = 0x1744B4u;
            goto label_1744b4;
        }
    }
    ctx->pc = 0x1744E8u;
    // 0x1744e8: 0x25220001
    ctx->pc = 0x1744e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 1));
label_1744ec:
    // 0x1744ec: 0x4b182a
    ctx->pc = 0x1744ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 11)));
    // 0x1744f0: 0x14600003
    ctx->pc = 0x1744F0u;
    {
        const bool branch_taken_0x1744f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1744F4u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
        if (branch_taken_0x1744f0) {
            ctx->pc = 0x174500u;
            goto label_174500;
        }
    }
    ctx->pc = 0x1744F8u;
    // 0x1744f8: 0x12b1023
    ctx->pc = 0x1744f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1744fc: 0x24420001
    ctx->pc = 0x1744fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_174500:
    // 0x174500: 0x40482d
    ctx->pc = 0x174500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174504: 0x14e102a
    ctx->pc = 0x174504u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), GPR_S32(ctx, 14)));
    // 0x174508: 0x5440ffdb
    ctx->pc = 0x174508u;
    {
        const bool branch_taken_0x174508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x174508) {
            ctx->pc = 0x17450Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x174478u;
            goto label_174478;
        }
    }
    ctx->pc = 0x174510u;
label_174510:
    // 0x174510: 0x3e00008
    ctx->pc = 0x174510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174514u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174478u: goto label_174478;
            case 0x1744B4u: goto label_1744b4;
            case 0x1744C0u: goto label_1744c0;
            case 0x1744D0u: goto label_1744d0;
            case 0x1744ECu: goto label_1744ec;
            case 0x174500u: goto label_174500;
            case 0x174510u: goto label_174510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174518u;
}
