#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AFA70
// Address: 0x1afa70 - 0x1afb20
void sub_001AFA70_0x1afa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1afa70u;

    // 0x1afa70: 0x3c01002c
    ctx->pc = 0x1afa70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1afa74: 0x3c05002c
    ctx->pc = 0x1afa74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1afa78: 0x8c278e10
    ctx->pc = 0x1afa78u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294938128)));
    // 0x1afa7c: 0x402d
    ctx->pc = 0x1afa7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa80: 0x10000008
    ctx->pc = 0x1AFA80u;
    {
        const bool branch_taken_0x1afa80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFA84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938144));
        if (branch_taken_0x1afa80) {
            ctx->pc = 0x1AFAA4u;
            goto label_1afaa4;
        }
    }
    ctx->pc = 0x1AFA88u;
label_1afa88:
    // 0x1afa88: 0xa33021
    ctx->pc = 0x1afa88u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1afa8c: 0x8cc30000
    ctx->pc = 0x1afa8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1afa90: 0x14640003
    ctx->pc = 0x1AFA90u;
    {
        const bool branch_taken_0x1afa90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1afa90) {
            ctx->pc = 0x1AFAA0u;
            goto label_1afaa0;
        }
    }
    ctx->pc = 0x1AFA98u;
    // 0x1afa98: 0x10000005
    ctx->pc = 0x1AFA98u;
    {
        const bool branch_taken_0x1afa98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFA9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1afa98) {
            ctx->pc = 0x1AFAB0u;
            goto label_1afab0;
        }
    }
    ctx->pc = 0x1AFAA0u;
label_1afaa0:
    // 0x1afaa0: 0x25080001
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1afaa4:
    // 0x1afaa4: 0x107182a
    ctx->pc = 0x1afaa4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1afaa8: 0x1460fff7
    ctx->pc = 0x1AFAA8u;
    {
        const bool branch_taken_0x1afaa8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AFAACu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1afaa8) {
            ctx->pc = 0x1AFA88u;
            goto label_1afa88;
        }
    }
    ctx->pc = 0x1AFAB0u;
label_1afab0:
    // 0x1afab0: 0x107182a
    ctx->pc = 0x1afab0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1afab4: 0x14600015
    ctx->pc = 0x1AFAB4u;
    {
        const bool branch_taken_0x1afab4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AFAB8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x1afab4) {
            ctx->pc = 0x1AFB0Cu;
            goto label_1afb0c;
        }
    }
    ctx->pc = 0x1AFABCu;
    // 0x1afabc: 0x10000016
    ctx->pc = 0x1AFABCu;
    {
        const bool branch_taken_0x1afabc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1afabc) {
            ctx->pc = 0x1AFB18u;
            goto label_1afb18;
        }
    }
    ctx->pc = 0x1AFAC4u;
label_1afac4:
    // 0x1afac4: 0xa33021
    ctx->pc = 0x1afac4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1afac8: 0x25080001
    ctx->pc = 0x1afac8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1afacc: 0x8cc30004
    ctx->pc = 0x1afaccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1afad0: 0xacc30000
    ctx->pc = 0x1afad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1afad4:
    // 0x1afad4: 0x104182a
    ctx->pc = 0x1afad4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 4)));
    // 0x1afad8: 0x1460fffa
    ctx->pc = 0x1AFAD8u;
    {
        const bool branch_taken_0x1afad8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AFADCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1afad8) {
            ctx->pc = 0x1AFAC4u;
            goto label_1afac4;
        }
    }
    ctx->pc = 0x1AFAE0u;
    // 0x1afae0: 0x3c03002c
    ctx->pc = 0x1afae0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1afae4: 0x82080
    ctx->pc = 0x1afae4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1afae8: 0x24638e20
    ctx->pc = 0x1afae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294938144));
    // 0x1afaec: 0x3c01002c
    ctx->pc = 0x1afaecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1afaf0: 0x641821
    ctx->pc = 0x1afaf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1afaf4: 0xac600000
    ctx->pc = 0x1afaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1afaf8: 0x8c238e10
    ctx->pc = 0x1afaf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294938128)));
    // 0x1afafc: 0x2463ffff
    ctx->pc = 0x1afafcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1afb00: 0x3c01002c
    ctx->pc = 0x1afb00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1afb04: 0x10000004
    ctx->pc = 0x1AFB04u;
    {
        const bool branch_taken_0x1afb04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFB08u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938128), GPR_U32(ctx, 3));
        if (branch_taken_0x1afb04) {
            ctx->pc = 0x1AFB18u;
            goto label_1afb18;
        }
    }
    ctx->pc = 0x1AFB0Cu;
label_1afb0c:
    // 0x1afb0c: 0x24e4ffff
    ctx->pc = 0x1afb0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1afb10: 0x1000fff0
    ctx->pc = 0x1AFB10u;
    {
        const bool branch_taken_0x1afb10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AFB14u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294938144));
        if (branch_taken_0x1afb10) {
            ctx->pc = 0x1AFAD4u;
            goto label_1afad4;
        }
    }
    ctx->pc = 0x1AFB18u;
label_1afb18:
    // 0x1afb18: 0x3e00008
    ctx->pc = 0x1AFB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AFA88u: goto label_1afa88;
            case 0x1AFAA0u: goto label_1afaa0;
            case 0x1AFAA4u: goto label_1afaa4;
            case 0x1AFAB0u: goto label_1afab0;
            case 0x1AFAC4u: goto label_1afac4;
            case 0x1AFAD4u: goto label_1afad4;
            case 0x1AFB0Cu: goto label_1afb0c;
            case 0x1AFB18u: goto label_1afb18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AFB20u;
}
