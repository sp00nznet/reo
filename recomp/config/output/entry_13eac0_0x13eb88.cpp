#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_13eac0
// Address: 0x13eac0 - 0x13eb88
void entry_13eac0_0x13eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13eac0u;

    // 0x13eac0: 0x27bdffd0
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13eac4: 0xffb10018
    ctx->pc = 0x13eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13eac8: 0x80882d
    ctx->pc = 0x13eac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eacc: 0xffb20020
    ctx->pc = 0x13eaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13ead0: 0xffb00010
    ctx->pc = 0x13ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13ead4: 0xffbf0028
    ctx->pc = 0x13ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13ead8: 0x8e230004
    ctx->pc = 0x13ead8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13eadc: 0x1860000d
    ctx->pc = 0x13EADCu;
    {
        const bool branch_taken_0x13eadc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13EAE0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13eadc) {
            ctx->pc = 0x13EB14u;
            goto label_13eb14;
        }
    }
    ctx->pc = 0x13EAE4u;
    // 0x13eae4: 0x26300010
    ctx->pc = 0x13eae4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
    // 0x13eae8: 0x8e040000
    ctx->pc = 0x13eae8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13eaec: 0x0
    ctx->pc = 0x13eaecu;
    // NOP
label_13eaf0:
    // 0x13eaf0: 0x10800004
    ctx->pc = 0x13EAF0u;
    {
        const bool branch_taken_0x13eaf0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13EAF4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x13eaf0) {
            ctx->pc = 0x13EB04u;
            goto label_13eb04;
        }
    }
    ctx->pc = 0x13EAF8u;
    // 0x13eaf8: 0xc04e2ea
    ctx->pc = 0x13EAF8u;
    SET_GPR_U32(ctx, 31, 0x13EB00u);
    ctx->pc = 0x138BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138BA8_0x138ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB00u; }
    }
    if (ctx->pc != 0x13EB00u) { return; }
    ctx->pc = 0x13EB00u;
    // 0x13eb00: 0x8e230004
    ctx->pc = 0x13eb00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13eb04:
    // 0x13eb04: 0x26520001
    ctx->pc = 0x13eb04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x13eb08: 0x243102a
    ctx->pc = 0x13eb08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x13eb0c: 0x5440fff8
    ctx->pc = 0x13EB0Cu;
    {
        const bool branch_taken_0x13eb0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13eb0c) {
            ctx->pc = 0x13EB10u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x13EAF0u;
            goto label_13eaf0;
        }
    }
    ctx->pc = 0x13EB14u;
label_13eb14:
    // 0x13eb14: 0x8e220020
    ctx->pc = 0x13eb14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x13eb18: 0x24040009
    ctx->pc = 0x13eb18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x13eb1c: 0x3a0282d
    ctx->pc = 0x13eb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb20: 0x24060001
    ctx->pc = 0x13eb20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eb24: 0x382d
    ctx->pc = 0x13eb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb28: 0x402d
    ctx->pc = 0x13eb28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb2c: 0xc04e518
    ctx->pc = 0x13EB2Cu;
    SET_GPR_U32(ctx, 31, 0x13EB34u);
    ctx->pc = 0x13EB30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x139460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139460_0x139460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB34u; }
    }
    if (ctx->pc != 0x13EB34u) { return; }
    ctx->pc = 0x13EB34u;
    // 0x13eb34: 0x8e230004
    ctx->pc = 0x13eb34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13eb38: 0x1860000c
    ctx->pc = 0x13EB38u;
    {
        const bool branch_taken_0x13eb38 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13EB3Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13eb38) {
            ctx->pc = 0x13EB6Cu;
            goto label_13eb6c;
        }
    }
    ctx->pc = 0x13EB40u;
    // 0x13eb40: 0x26300008
    ctx->pc = 0x13eb40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 8));
    // 0x13eb44: 0x8e040000
    ctx->pc = 0x13eb44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13eb48:
    // 0x13eb48: 0x10800004
    ctx->pc = 0x13EB48u;
    {
        const bool branch_taken_0x13eb48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x13EB4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x13eb48) {
            ctx->pc = 0x13EB5Cu;
            goto label_13eb5c;
        }
    }
    ctx->pc = 0x13EB50u;
    // 0x13eb50: 0xc04f7e6
    ctx->pc = 0x13EB50u;
    SET_GPR_U32(ctx, 31, 0x13EB58u);
    ctx->pc = 0x13DF98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DF98_0x13df98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB58u; }
    }
    if (ctx->pc != 0x13EB58u) { return; }
    ctx->pc = 0x13EB58u;
    // 0x13eb58: 0x8e230004
    ctx->pc = 0x13eb58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13eb5c:
    // 0x13eb5c: 0x26520001
    ctx->pc = 0x13eb5cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x13eb60: 0x243102a
    ctx->pc = 0x13eb60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x13eb64: 0x5440fff8
    ctx->pc = 0x13EB64u;
    {
        const bool branch_taken_0x13eb64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13eb64) {
            ctx->pc = 0x13EB68u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x13EB48u;
            goto label_13eb48;
        }
    }
    ctx->pc = 0x13EB6Cu;
label_13eb6c:
    // 0x13eb6c: 0xa2200000
    ctx->pc = 0x13eb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13eb70: 0xdfb00010
    ctx->pc = 0x13eb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eb74: 0xdfb10018
    ctx->pc = 0x13eb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13eb78: 0xdfb20020
    ctx->pc = 0x13eb78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13eb7c: 0xdfbf0028
    ctx->pc = 0x13eb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13eb80: 0x3e00008
    ctx->pc = 0x13EB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EAF0u: goto label_13eaf0;
            case 0x13EB04u: goto label_13eb04;
            case 0x13EB14u: goto label_13eb14;
            case 0x13EB48u: goto label_13eb48;
            case 0x13EB5Cu: goto label_13eb5c;
            case 0x13EB6Cu: goto label_13eb6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EB88u;
}
