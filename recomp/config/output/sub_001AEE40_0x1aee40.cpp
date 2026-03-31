#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AEE40
// Address: 0x1aee40 - 0x1aef00
void sub_001AEE40_0x1aee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1aee40u;

    // 0x1aee40: 0x3c010032
    ctx->pc = 0x1aee40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1aee44: 0x3c050032
    ctx->pc = 0x1aee44u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x1aee48: 0x902343ec
    ctx->pc = 0x1aee48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17388)));
    // 0x1aee4c: 0x28610006
    ctx->pc = 0x1aee4cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 6));
    // 0x1aee50: 0x14200002
    ctx->pc = 0x1AEE50u;
    {
        const bool branch_taken_0x1aee50 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEE54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17344));
        if (branch_taken_0x1aee50) {
            ctx->pc = 0x1AEE5Cu;
            goto label_1aee5c;
        }
    }
    ctx->pc = 0x1AEE58u;
    // 0x1aee58: 0xa0a0002c
    ctx->pc = 0x1aee58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 44), (uint8_t)GPR_U32(ctx, 0));
label_1aee5c:
    // 0x1aee5c: 0x90a3002f
    ctx->pc = 0x1aee5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 47)));
    // 0x1aee60: 0x30630001
    ctx->pc = 0x1aee60u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1aee64: 0xa0a3002f
    ctx->pc = 0x1aee64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aee68: 0x90a30005
    ctx->pc = 0x1aee68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1aee6c: 0x30630001
    ctx->pc = 0x1aee6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1aee70: 0xa0a30005
    ctx->pc = 0x1aee70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aee74: 0x90a30009
    ctx->pc = 0x1aee74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x1aee78: 0x28610008
    ctx->pc = 0x1aee78u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1aee7c: 0x14200002
    ctx->pc = 0x1AEE7Cu;
    {
        const bool branch_taken_0x1aee7c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEE80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1aee7c) {
            ctx->pc = 0x1AEE88u;
            goto label_1aee88;
        }
    }
    ctx->pc = 0x1AEE84u;
    // 0x1aee84: 0xa0a30009
    ctx->pc = 0x1aee84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
label_1aee88:
    // 0x1aee88: 0x90a3000a
    ctx->pc = 0x1aee88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1aee8c: 0x28610008
    ctx->pc = 0x1aee8cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1aee90: 0x14200002
    ctx->pc = 0x1AEE90u;
    {
        const bool branch_taken_0x1aee90 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEE94u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1aee90) {
            ctx->pc = 0x1AEE9Cu;
            goto label_1aee9c;
        }
    }
    ctx->pc = 0x1AEE98u;
    // 0x1aee98: 0xa0a3000a
    ctx->pc = 0x1aee98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
label_1aee9c:
    // 0x1aee9c: 0x80a4002d
    ctx->pc = 0x1aee9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x1aeea0: 0x2883fff6
    ctx->pc = 0x1aeea0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4294967286));
    // 0x1aeea4: 0x14600003
    ctx->pc = 0x1AEEA4u;
    {
        const bool branch_taken_0x1aeea4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEEA8u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 11));
        if (branch_taken_0x1aeea4) {
            ctx->pc = 0x1AEEB4u;
            goto label_1aeeb4;
        }
    }
    ctx->pc = 0x1AEEACu;
    // 0x1aeeac: 0x14200002
    ctx->pc = 0x1AEEACu;
    {
        const bool branch_taken_0x1aeeac = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aeeac) {
            ctx->pc = 0x1AEEB8u;
            goto label_1aeeb8;
        }
    }
    ctx->pc = 0x1AEEB4u;
label_1aeeb4:
    // 0x1aeeb4: 0xa0a0002d
    ctx->pc = 0x1aeeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 0));
label_1aeeb8:
    // 0x1aeeb8: 0x80a4002e
    ctx->pc = 0x1aeeb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x1aeebc: 0x2883fff6
    ctx->pc = 0x1aeebcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4294967286));
    // 0x1aeec0: 0x14600003
    ctx->pc = 0x1AEEC0u;
    {
        const bool branch_taken_0x1aeec0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEEC4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 11));
        if (branch_taken_0x1aeec0) {
            ctx->pc = 0x1AEED0u;
            goto label_1aeed0;
        }
    }
    ctx->pc = 0x1AEEC8u;
    // 0x1aeec8: 0x14200002
    ctx->pc = 0x1AEEC8u;
    {
        const bool branch_taken_0x1aeec8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aeec8) {
            ctx->pc = 0x1AEED4u;
            goto label_1aeed4;
        }
    }
    ctx->pc = 0x1AEED0u;
label_1aeed0:
    // 0x1aeed0: 0xa0a0002e
    ctx->pc = 0x1aeed0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 46), (uint8_t)GPR_U32(ctx, 0));
label_1aeed4:
    // 0x1aeed4: 0x90a40030
    ctx->pc = 0x1aeed4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1aeed8: 0x28830038
    ctx->pc = 0x1aeed8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 56));
    // 0x1aeedc: 0x14600004
    ctx->pc = 0x1AEEDCu;
    {
        const bool branch_taken_0x1aeedc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEEE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x1aeedc) {
            ctx->pc = 0x1AEEF0u;
            goto label_1aeef0;
        }
    }
    ctx->pc = 0x1AEEE4u;
    // 0x1aeee4: 0x288100a5
    ctx->pc = 0x1aeee4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 165));
    // 0x1aeee8: 0x14200002
    ctx->pc = 0x1AEEE8u;
    {
        const bool branch_taken_0x1aeee8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aeee8) {
            ctx->pc = 0x1AEEF4u;
            goto label_1aeef4;
        }
    }
    ctx->pc = 0x1AEEF0u;
label_1aeef0:
    // 0x1aeef0: 0xa0a30030
    ctx->pc = 0x1aeef0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
label_1aeef4:
    // 0x1aeef4: 0x3e00008
    ctx->pc = 0x1AEEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEE5Cu: goto label_1aee5c;
            case 0x1AEE88u: goto label_1aee88;
            case 0x1AEE9Cu: goto label_1aee9c;
            case 0x1AEEB4u: goto label_1aeeb4;
            case 0x1AEEB8u: goto label_1aeeb8;
            case 0x1AEED0u: goto label_1aeed0;
            case 0x1AEED4u: goto label_1aeed4;
            case 0x1AEEF0u: goto label_1aeef0;
            case 0x1AEEF4u: goto label_1aeef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEEFCu;
    // 0x1aeefc: 0x0
    ctx->pc = 0x1aeefcu;
    // NOP
}
