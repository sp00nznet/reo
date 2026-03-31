#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019EB70
// Address: 0x19eb70 - 0x19ec00
void sub_0019EB70_0x19eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19eb70u;

    // 0x19eb70: 0x27bdfff0
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19eb74: 0xffbf0000
    ctx->pc = 0x19eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19eb78: 0x8c830000
    ctx->pc = 0x19eb78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19eb7c: 0x10600003
    ctx->pc = 0x19EB7Cu;
    {
        const bool branch_taken_0x19eb7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EB80u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x19eb7c) {
            ctx->pc = 0x19EB8Cu;
            goto label_19eb8c;
        }
    }
    ctx->pc = 0x19EB84u;
    // 0x19eb84: 0x10000007
    ctx->pc = 0x19EB84u;
    {
        const bool branch_taken_0x19eb84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EB88u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x19eb84) {
            ctx->pc = 0x19EBA4u;
            goto label_19eba4;
        }
    }
    ctx->pc = 0x19EB8Cu;
label_19eb8c:
    // 0x19eb8c: 0x10400004
    ctx->pc = 0x19EB8Cu;
    {
        const bool branch_taken_0x19eb8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EB90u;
        SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
        if (branch_taken_0x19eb8c) {
            ctx->pc = 0x19EBA0u;
            goto label_19eba0;
        }
    }
    ctx->pc = 0x19EB94u;
    // 0x19eb94: 0x3c01002a
    ctx->pc = 0x19eb94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19eb98: 0x10000002
    ctx->pc = 0x19EB98u;
    {
        const bool branch_taken_0x19eb98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EB9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294950608), GPR_U32(ctx, 2));
        if (branch_taken_0x19eb98) {
            ctx->pc = 0x19EBA4u;
            goto label_19eba4;
        }
    }
    ctx->pc = 0x19EBA0u;
label_19eba0:
    // 0x19eba0: 0xac20bed0
    ctx->pc = 0x19eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950608), GPR_U32(ctx, 0));
label_19eba4:
    // 0x19eba4: 0x10400002
    ctx->pc = 0x19EBA4u;
    {
        const bool branch_taken_0x19eba4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19eba4) {
            ctx->pc = 0x19EBB0u;
            goto label_19ebb0;
        }
    }
    ctx->pc = 0x19EBACu;
    // 0x19ebac: 0xac430000
    ctx->pc = 0x19ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19ebb0:
    // 0x19ebb0: 0x8c820008
    ctx->pc = 0x19ebb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19ebb4: 0x10400005
    ctx->pc = 0x19EBB4u;
    {
        const bool branch_taken_0x19ebb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19EBB8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ebb4) {
            ctx->pc = 0x19EBCCu;
            goto label_19ebcc;
        }
    }
    ctx->pc = 0x19EBBCu;
    // 0x19ebbc: 0xa0400035
    ctx->pc = 0x19ebbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ebc0: 0x24030004
    ctx->pc = 0x19ebc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ebc4: 0x8c820008
    ctx->pc = 0x19ebc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19ebc8: 0xac430000
    ctx->pc = 0x19ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19ebcc:
    // 0x19ebcc: 0xc0636e0
    ctx->pc = 0x19EBCCu;
    SET_GPR_U32(ctx, 31, 0x19EBD4u);
    ctx->pc = 0x19EBD0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x18DB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DB80_0x18db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EBD4u; }
    }
    if (ctx->pc != 0x19EBD4u) { return; }
    ctx->pc = 0x19EBD4u;
    // 0x19ebd4: 0x3c01002a
    ctx->pc = 0x19ebd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19ebd8: 0x8c23bec8
    ctx->pc = 0x19ebd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294950600)));
    // 0x19ebdc: 0x2463ffff
    ctx->pc = 0x19ebdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19ebe0: 0x3c01002a
    ctx->pc = 0x19ebe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x19ebe4: 0xac23bec8
    ctx->pc = 0x19ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950600), GPR_U32(ctx, 3));
    // 0x19ebe8: 0xdfbf0000
    ctx->pc = 0x19ebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ebec: 0x3e00008
    ctx->pc = 0x19EBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EBF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EB8Cu: goto label_19eb8c;
            case 0x19EBA0u: goto label_19eba0;
            case 0x19EBA4u: goto label_19eba4;
            case 0x19EBB0u: goto label_19ebb0;
            case 0x19EBCCu: goto label_19ebcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EBF4u;
    // 0x19ebf4: 0x0
    ctx->pc = 0x19ebf4u;
    // NOP
    // 0x19ebf8: 0x0
    ctx->pc = 0x19ebf8u;
    // NOP
    // 0x19ebfc: 0x0
    ctx->pc = 0x19ebfcu;
    // NOP
}
