#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_189a70
// Address: 0x189a70 - 0x189b08
void entry_189a70_0x189b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x189a70u;

    // 0x189a70: 0x8ca30004
    ctx->pc = 0x189a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x189a74: 0x8ca60000
    ctx->pc = 0x189a74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189a78: 0x31880
    ctx->pc = 0x189a78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x189a7c: 0x641821
    ctx->pc = 0x189a7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189a80: 0x3e00008
    ctx->pc = 0x189A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189A84u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189A88u: goto label_189a88;
            case 0x189AA8u: goto label_189aa8;
            case 0x189AE0u: goto label_189ae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189A88u;
label_189a88:
    // 0x189a88: 0x8c820000
    ctx->pc = 0x189a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189a8c: 0x24840004
    ctx->pc = 0x189a8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x189a90: 0x24c6ffff
    ctx->pc = 0x189a90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189a94: 0xaca20000
    ctx->pc = 0x189a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x189a98: 0x14c0fffb
    ctx->pc = 0x189A98u;
    {
        const bool branch_taken_0x189a98 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189A9Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x189a98) {
            ctx->pc = 0x189A88u;
            goto label_189a88;
        }
    }
    ctx->pc = 0x189AA0u;
    // 0x189aa0: 0x3e00008
    ctx->pc = 0x189AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189A88u: goto label_189a88;
            case 0x189AA8u: goto label_189aa8;
            case 0x189AE0u: goto label_189ae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189AA8u;
label_189aa8:
    // 0x189aa8: 0x8c820000
    ctx->pc = 0x189aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189aac: 0x8c830004
    ctx->pc = 0x189aacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189ab0: 0x8c880008
    ctx->pc = 0x189ab0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x189ab4: 0x8c89000c
    ctx->pc = 0x189ab4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x189ab8: 0xaca20000
    ctx->pc = 0x189ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x189abc: 0xaca30004
    ctx->pc = 0x189abcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x189ac0: 0xaca80008
    ctx->pc = 0x189ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x189ac4: 0xaca9000c
    ctx->pc = 0x189ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x189ac8: 0x24c6ffff
    ctx->pc = 0x189ac8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189acc: 0x24840010
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x189ad0: 0x14c0fff5
    ctx->pc = 0x189AD0u;
    {
        const bool branch_taken_0x189ad0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189AD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x189ad0) {
            ctx->pc = 0x189AA8u;
            goto label_189aa8;
        }
    }
    ctx->pc = 0x189AD8u;
    // 0x189ad8: 0x3e00008
    ctx->pc = 0x189AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189A88u: goto label_189a88;
            case 0x189AA8u: goto label_189aa8;
            case 0x189AE0u: goto label_189ae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189AE0u;
label_189ae0:
    // 0x189ae0: 0xdc820000
    ctx->pc = 0x189ae0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189ae4: 0xdc830008
    ctx->pc = 0x189ae4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x189ae8: 0xfca20000
    ctx->pc = 0x189ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x189aec: 0xfca30008
    ctx->pc = 0x189aecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x189af0: 0x24c6ffff
    ctx->pc = 0x189af0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x189af4: 0x24840010
    ctx->pc = 0x189af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x189af8: 0x14c0fff9
    ctx->pc = 0x189AF8u;
    {
        const bool branch_taken_0x189af8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x189AFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
        if (branch_taken_0x189af8) {
            ctx->pc = 0x189AE0u;
            goto label_189ae0;
        }
    }
    ctx->pc = 0x189B00u;
    // 0x189b00: 0x3e00008
    ctx->pc = 0x189B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189A88u: goto label_189a88;
            case 0x189AA8u: goto label_189aa8;
            case 0x189AE0u: goto label_189ae0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189B08u;
}
