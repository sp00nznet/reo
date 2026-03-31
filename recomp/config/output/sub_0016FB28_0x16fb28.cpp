#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016FB28
// Address: 0x16fb28 - 0x16fbf0
void sub_0016FB28_0x16fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16fb28u;

    // 0x16fb28: 0x3c050027
    ctx->pc = 0x16fb28u;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x16fb2c: 0x24a36068
    ctx->pc = 0x16fb2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 24680));
    // 0x16fb30: 0x8c62001c
    ctx->pc = 0x16fb30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16fb34: 0x2442ffff
    ctx->pc = 0x16fb34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16fb38: 0x2c420010
    ctx->pc = 0x16fb38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 16));
    // 0x16fb3c: 0x54400004
    ctx->pc = 0x16FB3Cu;
    {
        const bool branch_taken_0x16fb3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16fb3c) {
            ctx->pc = 0x16FB40u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->pc = 0x16FB50u;
            goto label_16fb50;
        }
    }
    ctx->pc = 0x16FB44u;
label_16fb44:
    // 0x16fb44: 0x3e00008
    ctx->pc = 0x16FB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FB48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FB44u: goto label_16fb44;
            case 0x16FB50u: goto label_16fb50;
            case 0x16FB68u: goto label_16fb68;
            case 0x16FB78u: goto label_16fb78;
            case 0x16FBC0u: goto label_16fbc0;
            case 0x16FBE4u: goto label_16fbe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FB4Cu;
    // 0x16fb4c: 0x0
    ctx->pc = 0x16fb4cu;
    // NOP
label_16fb50:
    // 0x16fb50: 0x10400005
    ctx->pc = 0x16FB50u;
    {
        const bool branch_taken_0x16fb50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FB54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x16fb50) {
            ctx->pc = 0x16FB68u;
            goto label_16fb68;
        }
    }
    ctx->pc = 0x16FB58u;
    // 0x16fb58: 0x8c620020
    ctx->pc = 0x16fb58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16fb5c: 0x14400021
    ctx->pc = 0x16FB5Cu;
    {
        const bool branch_taken_0x16fb5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16fb5c) {
            ctx->pc = 0x16FBE4u;
            goto label_16fbe4;
        }
    }
    ctx->pc = 0x16FB64u;
    // 0x16fb64: 0x3c020027
    ctx->pc = 0x16fb64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_16fb68:
    // 0x16fb68: 0x182d
    ctx->pc = 0x16fb68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb6c: 0x24446090
    ctx->pc = 0x16fb6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24720));
    // 0x16fb70: 0x8c820000
    ctx->pc = 0x16fb70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fb74: 0x0
    ctx->pc = 0x16fb74u;
    // NOP
label_16fb78:
    // 0x16fb78: 0x1040fff2
    ctx->pc = 0x16FB78u;
    {
        const bool branch_taken_0x16fb78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FB7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x16fb78) {
            ctx->pc = 0x16FB44u;
            goto label_16fb44;
        }
    }
    ctx->pc = 0x16FB80u;
    // 0x16fb80: 0x24630001
    ctx->pc = 0x16fb80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x16fb84: 0x28620002
    ctx->pc = 0x16fb84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x16fb88: 0x0
    ctx->pc = 0x16fb88u;
    // NOP
    // 0x16fb8c: 0x0
    ctx->pc = 0x16fb8cu;
    // NOP
    // 0x16fb90: 0x0
    ctx->pc = 0x16fb90u;
    // NOP
    // 0x16fb94: 0x5440fff8
    ctx->pc = 0x16FB94u;
    {
        const bool branch_taken_0x16fb94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16fb94) {
            ctx->pc = 0x16FB98u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x16FB78u;
            goto label_16fb78;
        }
    }
    ctx->pc = 0x16FB9Cu;
    // 0x16fb9c: 0x24a26068
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 24680));
    // 0x16fba0: 0x8c44001c
    ctx->pc = 0x16fba0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16fba4: 0x1880000f
    ctx->pc = 0x16FBA4u;
    {
        const bool branch_taken_0x16fba4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x16FBA8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fba4) {
            ctx->pc = 0x16FBE4u;
            goto label_16fbe4;
        }
    }
    ctx->pc = 0x16FBACu;
    // 0x16fbac: 0x3c020027
    ctx->pc = 0x16fbacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x16fbb0: 0x80282d
    ctx->pc = 0x16fbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbb4: 0x24446098
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24728));
    // 0x16fbb8: 0x8c820000
    ctx->pc = 0x16fbb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16fbbc: 0x0
    ctx->pc = 0x16fbbcu;
    // NOP
label_16fbc0:
    // 0x16fbc0: 0x1040ffe0
    ctx->pc = 0x16FBC0u;
    {
        const bool branch_taken_0x16fbc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FBC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x16fbc0) {
            ctx->pc = 0x16FB44u;
            goto label_16fb44;
        }
    }
    ctx->pc = 0x16FBC8u;
    // 0x16fbc8: 0x24630001
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x16fbcc: 0x65102a
    ctx->pc = 0x16fbccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x16fbd0: 0x0
    ctx->pc = 0x16fbd0u;
    // NOP
    // 0x16fbd4: 0x0
    ctx->pc = 0x16fbd4u;
    // NOP
    // 0x16fbd8: 0x0
    ctx->pc = 0x16fbd8u;
    // NOP
    // 0x16fbdc: 0x5440fff8
    ctx->pc = 0x16FBDCu;
    {
        const bool branch_taken_0x16fbdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16fbdc) {
            ctx->pc = 0x16FBE0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x16FBC0u;
            goto label_16fbc0;
        }
    }
    ctx->pc = 0x16FBE4u;
label_16fbe4:
    // 0x16fbe4: 0x3e00008
    ctx->pc = 0x16FBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FBE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FB44u: goto label_16fb44;
            case 0x16FB50u: goto label_16fb50;
            case 0x16FB68u: goto label_16fb68;
            case 0x16FB78u: goto label_16fb78;
            case 0x16FBC0u: goto label_16fbc0;
            case 0x16FBE4u: goto label_16fbe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FBECu;
    // 0x16fbec: 0x0
    ctx->pc = 0x16fbecu;
    // NOP
}
