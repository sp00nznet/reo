#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001562D0
// Address: 0x1562d0 - 0x156398
void sub_001562D0_0x1562d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1562d0u;

    // 0x1562d0: 0x61080
    ctx->pc = 0x1562d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1562d4: 0x30c3000f
    ctx->pc = 0x1562d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 15));
    // 0x1562d8: 0x10600008
    ctx->pc = 0x1562D8u;
    {
        const bool branch_taken_0x1562d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1562DCu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x1562d8) {
            ctx->pc = 0x1562FCu;
            goto label_1562fc;
        }
    }
    ctx->pc = 0x1562E0u;
label_1562e0:
    // 0x1562e0: 0x2484fffc
    ctx->pc = 0x1562e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1562e4: 0x2463ffff
    ctx->pc = 0x1562e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1562e8: 0x0
    ctx->pc = 0x1562e8u;
    // NOP
    // 0x1562ec: 0x0
    ctx->pc = 0x1562ecu;
    // NOP
    // 0x1562f0: 0x0
    ctx->pc = 0x1562f0u;
    // NOP
    // 0x1562f4: 0x1460fffa
    ctx->pc = 0x1562F4u;
    {
        const bool branch_taken_0x1562f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1562F8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x1562f4) {
            ctx->pc = 0x1562E0u;
            goto label_1562e0;
        }
    }
    ctx->pc = 0x1562FCu;
label_1562fc:
    // 0x1562fc: 0x63102
    ctx->pc = 0x1562fcu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 4));
    // 0x156300: 0x10c00023
    ctx->pc = 0x156300u;
    {
        const bool branch_taken_0x156300 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x156300) {
            ctx->pc = 0x156390u;
            goto label_156390;
        }
    }
    ctx->pc = 0x156308u;
label_156308:
    // 0x156308: 0x2484fffc
    ctx->pc = 0x156308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x15630c: 0x24c6ffff
    ctx->pc = 0x15630cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x156310: 0xac850000
    ctx->pc = 0x156310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156314: 0x2484fffc
    ctx->pc = 0x156314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156318: 0xac850000
    ctx->pc = 0x156318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15631c: 0x2484fffc
    ctx->pc = 0x15631cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156320: 0xac850000
    ctx->pc = 0x156320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156324: 0x2484fffc
    ctx->pc = 0x156324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156328: 0xac850000
    ctx->pc = 0x156328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15632c: 0x2484fffc
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156330: 0xac850000
    ctx->pc = 0x156330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156334: 0x2484fffc
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156338: 0xac850000
    ctx->pc = 0x156338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15633c: 0x2484fffc
    ctx->pc = 0x15633cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156340: 0xac850000
    ctx->pc = 0x156340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156344: 0x2484fffc
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156348: 0xac850000
    ctx->pc = 0x156348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15634c: 0x2484fffc
    ctx->pc = 0x15634cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156350: 0xac850000
    ctx->pc = 0x156350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156354: 0x2484fffc
    ctx->pc = 0x156354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156358: 0xac850000
    ctx->pc = 0x156358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15635c: 0x2484fffc
    ctx->pc = 0x15635cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156360: 0xac850000
    ctx->pc = 0x156360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156364: 0x2484fffc
    ctx->pc = 0x156364u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156368: 0xac850000
    ctx->pc = 0x156368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15636c: 0x2484fffc
    ctx->pc = 0x15636cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156370: 0xac850000
    ctx->pc = 0x156370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156374: 0x2484fffc
    ctx->pc = 0x156374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156378: 0xac850000
    ctx->pc = 0x156378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x15637c: 0x2484fffc
    ctx->pc = 0x15637cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156380: 0xac850000
    ctx->pc = 0x156380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x156384: 0x2484fffc
    ctx->pc = 0x156384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x156388: 0x14c0ffdf
    ctx->pc = 0x156388u;
    {
        const bool branch_taken_0x156388 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x15638Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        if (branch_taken_0x156388) {
            ctx->pc = 0x156308u;
            goto label_156308;
        }
    }
    ctx->pc = 0x156390u;
label_156390:
    // 0x156390: 0x3e00008
    ctx->pc = 0x156390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1562E0u: goto label_1562e0;
            case 0x1562FCu: goto label_1562fc;
            case 0x156308u: goto label_156308;
            case 0x156390u: goto label_156390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156398u;
}
