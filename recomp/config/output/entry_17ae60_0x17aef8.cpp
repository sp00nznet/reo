#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_17ae60
// Address: 0x17ae60 - 0x17aef8
void entry_17ae60_0x17aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17ae60u;

    // 0x17ae60: 0x27bdffb0
    ctx->pc = 0x17ae60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ae64: 0xa0102d
    ctx->pc = 0x17ae64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae68: 0xffbf0040
    ctx->pc = 0x17ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17ae6c: 0x244d0004
    ctx->pc = 0x17ae6cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 4));
    // 0x17ae70: 0x244b0024
    ctx->pc = 0x17ae70u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 36));
    // 0x17ae74: 0x244a0014
    ctx->pc = 0x17ae74u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 20));
    // 0x17ae78: 0x8da30004
    ctx->pc = 0x17ae78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x17ae7c: 0xc0602d
    ctx->pc = 0x17ae7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae80: 0x8c470044
    ctx->pc = 0x17ae80u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x17ae84: 0x180282d
    ctx->pc = 0x17ae84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae88: 0x8d460004
    ctx->pc = 0x17ae88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17ae8c: 0x37080
    ctx->pc = 0x17ae8cu;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ae90: 0x8d680004
    ctx->pc = 0x17ae90u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17ae94: 0x8c490048
    ctx->pc = 0x17ae94u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x17ae98: 0xafa60010
    ctx->pc = 0x17ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x17ae9c: 0x60302d
    ctx->pc = 0x17ae9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aea0: 0xafa70024
    ctx->pc = 0x17aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x17aea4: 0xafa3000c
    ctx->pc = 0x17aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x17aea8: 0xafa80014
    ctx->pc = 0x17aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x17aeac: 0xafa90028
    ctx->pc = 0x17aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x17aeb0: 0x8da70000
    ctx->pc = 0x17aeb0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x17aeb4: 0x8d420000
    ctx->pc = 0x17aeb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17aeb8: 0x8d630000
    ctx->pc = 0x17aeb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17aebc: 0x8c880008
    ctx->pc = 0x17aebcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17aec0: 0xe0202d
    ctx->pc = 0x17aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aec4: 0xafa20004
    ctx->pc = 0x17aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x17aec8: 0xafa30008
    ctx->pc = 0x17aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x17aecc: 0xafa70000
    ctx->pc = 0x17aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x17aed0: 0x15000003
    ctx->pc = 0x17AED0u;
    {
        const bool branch_taken_0x17aed0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AED4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
        if (branch_taken_0x17aed0) {
            ctx->pc = 0x17AEE0u;
            goto label_17aee0;
        }
    }
    ctx->pc = 0x17AED8u;
    // 0x17aed8: 0x10000002
    ctx->pc = 0x17AED8u;
    {
        const bool branch_taken_0x17aed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AEDCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 14));
        if (branch_taken_0x17aed8) {
            ctx->pc = 0x17AEE4u;
            goto label_17aee4;
        }
    }
    ctx->pc = 0x17AEE0u;
label_17aee0:
    // 0x17aee0: 0xafa8002c
    ctx->pc = 0x17aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
label_17aee4:
    // 0x17aee4: 0xc0524a8
    ctx->pc = 0x17AEE4u;
    SET_GPR_U32(ctx, 31, 0x17AEECu);
    ctx->pc = 0x17AEE8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 8)));
    ctx->pc = 0x1492A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001492A0_0x1492a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AEECu; }
    }
    if (ctx->pc != 0x17AEECu) { return; }
    ctx->pc = 0x17AEECu;
    // 0x17aeec: 0xdfbf0040
    ctx->pc = 0x17aeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17aef0: 0x3e00008
    ctx->pc = 0x17AEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AEE0u: goto label_17aee0;
            case 0x17AEE4u: goto label_17aee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AEF8u;
}
