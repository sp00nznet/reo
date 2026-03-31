#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016CDF0
// Address: 0x16cdf0 - 0x16cf58
void sub_0016CDF0_0x16cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16cdf0u;

    // 0x16cdf0: 0x27bdffb0
    ctx->pc = 0x16cdf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16cdf4: 0xffb20020
    ctx->pc = 0x16cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16cdf8: 0x80902d
    ctx->pc = 0x16cdf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdfc: 0xffb50038
    ctx->pc = 0x16cdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16ce00: 0xffb60040
    ctx->pc = 0x16ce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x16ce04: 0xc0b02d
    ctx->pc = 0x16ce04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce08: 0xffb00010
    ctx->pc = 0x16ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ce0c: 0xffb10018
    ctx->pc = 0x16ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16ce10: 0xffb30028
    ctx->pc = 0x16ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16ce14: 0xffb40030
    ctx->pc = 0x16ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16ce18: 0xffbf0048
    ctx->pc = 0x16ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16ce1c: 0xaec00000
    ctx->pc = 0x16ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x16ce20: 0x8e42000c
    ctx->pc = 0x16ce20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x16ce24: 0x10400034
    ctx->pc = 0x16CE24u;
    {
        const bool branch_taken_0x16ce24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CE28u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ce24) {
            ctx->pc = 0x16CEF8u;
            goto label_16cef8;
        }
    }
    ctx->pc = 0x16CE2Cu;
    // 0x16ce2c: 0x8e440008
    ctx->pc = 0x16ce2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16ce30: 0x40282d
    ctx->pc = 0x16ce30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce34: 0x2a0302d
    ctx->pc = 0x16ce34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce38: 0xc056194
    ctx->pc = 0x16CE38u;
    SET_GPR_U32(ctx, 31, 0x16CE40u);
    ctx->pc = 0x16CE3Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x158650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158650_0x158650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CE40u; }
    }
    if (ctx->pc != 0x16CE40u) { return; }
    ctx->pc = 0x16CE40u;
    // 0x16ce40: 0x40882d
    ctx->pc = 0x16ce40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce44: 0x5220000a
    ctx->pc = 0x16CE44u;
    {
        const bool branch_taken_0x16ce44 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ce44) {
            ctx->pc = 0x16CE48u;
            SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x16CE70u;
            goto label_16ce70;
        }
    }
    ctx->pc = 0x16CE4Cu;
    // 0x16ce4c: 0x10000033
    ctx->pc = 0x16CE4Cu;
    {
        const bool branch_taken_0x16ce4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ce4c) {
            ctx->pc = 0x16CF1Cu;
            goto label_16cf1c;
        }
    }
    ctx->pc = 0x16CE54u;
    // 0x16ce54: 0x0
    ctx->pc = 0x16ce54u;
    // NOP
label_16ce58:
    // 0x16ce58: 0x8e420000
    ctx->pc = 0x16ce58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ce5c: 0xaec60000
    ctx->pc = 0x16ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 6));
    // 0x16ce60: 0x431021
    ctx->pc = 0x16ce60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ce64: 0x531023
    ctx->pc = 0x16ce64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16ce68: 0x10000030
    ctx->pc = 0x16CE68u;
    {
        const bool branch_taken_0x16ce68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CE6Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        if (branch_taken_0x16ce68) {
            ctx->pc = 0x16CF2Cu;
            goto label_16cf2c;
        }
    }
    ctx->pc = 0x16CE70u;
label_16ce70:
    // 0x16ce70: 0x24070003
    ctx->pc = 0x16ce70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ce74: 0x8e50000c
    ctx->pc = 0x16ce74u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x16ce78: 0x3a0202d
    ctx->pc = 0x16ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce7c: 0x8e450000
    ctx->pc = 0x16ce7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ce80: 0x260182d
    ctx->pc = 0x16ce80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce84: 0x2a620004
    ctx->pc = 0x16ce84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x16ce88: 0xa02d
    ctx->pc = 0x16ce88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce8c: 0xe2980a
    ctx->pc = 0x16ce8cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 7));
    // 0x16ce90: 0x2a020004
    ctx->pc = 0x16ce90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x16ce94: 0xa32821
    ctx->pc = 0x16ce94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16ce98: 0xe2800a
    ctx->pc = 0x16ce98u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 7));
    // 0x16ce9c: 0x260302d
    ctx->pc = 0x16ce9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cea0: 0xc041eac
    ctx->pc = 0x16CEA0u;
    SET_GPR_U32(ctx, 31, 0x16CEA8u);
    ctx->pc = 0x16CEA4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEA8u; }
    }
    if (ctx->pc != 0x16CEA8u) { return; }
    ctx->pc = 0x16CEA8u;
    // 0x16cea8: 0x8e450008
    ctx->pc = 0x16cea8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16ceac: 0x200302d
    ctx->pc = 0x16ceacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ceb0: 0x2708021
    ctx->pc = 0x16ceb0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x16ceb4: 0x3b32021
    ctx->pc = 0x16ceb4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
    // 0x16ceb8: 0xc041eac
    ctx->pc = 0x16CEB8u;
    SET_GPR_U32(ctx, 31, 0x16CEC0u);
    ctx->pc = 0x16CEBCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967293));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CEC0u; }
    }
    if (ctx->pc != 0x16CEC0u) { return; }
    ctx->pc = 0x16CEC0u;
    // 0x16cec0: 0x230102a
    ctx->pc = 0x16cec0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x16cec4: 0x5040000d
    ctx->pc = 0x16CEC4u;
    {
        const bool branch_taken_0x16cec4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cec4) {
            ctx->pc = 0x16CEC8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x16CEFCu;
            goto label_16cefc;
        }
    }
    ctx->pc = 0x16CECCu;
    // 0x16cecc: 0x0
    ctx->pc = 0x16ceccu;
    // NOP
label_16ced0:
    // 0x16ced0: 0xc05616e
    ctx->pc = 0x16CED0u;
    SET_GPR_U32(ctx, 31, 0x16CED8u);
    ctx->pc = 0x16CED4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CED8u; }
    }
    if (ctx->pc != 0x16CED8u) { return; }
    ctx->pc = 0x16CED8u;
    // 0x16ced8: 0x40302d
    ctx->pc = 0x16ced8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cedc: 0xd51024
    ctx->pc = 0x16cedcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x16cee0: 0x5440ffdd
    ctx->pc = 0x16CEE0u;
    {
        const bool branch_taken_0x16cee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cee0) {
            ctx->pc = 0x16CEE4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x16CE58u;
            goto label_16ce58;
        }
    }
    ctx->pc = 0x16CEE8u;
    // 0x16cee8: 0x26940001
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x16ceec: 0x290102a
    ctx->pc = 0x16ceecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 16)));
    // 0x16cef0: 0x1440fff7
    ctx->pc = 0x16CEF0u;
    {
        const bool branch_taken_0x16cef0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16cef0) {
            ctx->pc = 0x16CED0u;
            goto label_16ced0;
        }
    }
    ctx->pc = 0x16CEF8u;
label_16cef8:
    // 0x16cef8: 0x8e420004
    ctx->pc = 0x16cef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_16cefc:
    // 0x16cefc: 0x2a0302d
    ctx->pc = 0x16cefcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf00: 0x8e440000
    ctx->pc = 0x16cf00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16cf04: 0x40282d
    ctx->pc = 0x16cf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf08: 0xc056194
    ctx->pc = 0x16CF08u;
    SET_GPR_U32(ctx, 31, 0x16CF10u);
    ctx->pc = 0x16CF0Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x158650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158650_0x158650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF10u; }
    }
    if (ctx->pc != 0x16CF10u) { return; }
    ctx->pc = 0x16CF10u;
    // 0x16cf10: 0x40882d
    ctx->pc = 0x16cf10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf14: 0x52200006
    ctx->pc = 0x16CF14u;
    {
        const bool branch_taken_0x16cf14 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cf14) {
            ctx->pc = 0x16CF18u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x16CF30u;
            goto label_16cf30;
        }
    }
    ctx->pc = 0x16CF1Cu;
label_16cf1c:
    // 0x16cf1c: 0xc05616e
    ctx->pc = 0x16CF1Cu;
    SET_GPR_U32(ctx, 31, 0x16CF24u);
    ctx->pc = 0x16CF20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CF24u; }
    }
    if (ctx->pc != 0x16CF24u) { return; }
    ctx->pc = 0x16CF24u;
    // 0x16cf24: 0xaec20000
    ctx->pc = 0x16cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x16cf28: 0x220102d
    ctx->pc = 0x16cf28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cf2c:
    // 0x16cf2c: 0xdfb00010
    ctx->pc = 0x16cf2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16cf30:
    // 0x16cf30: 0xdfb10018
    ctx->pc = 0x16cf30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cf34: 0xdfb20020
    ctx->pc = 0x16cf34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cf38: 0xdfb30028
    ctx->pc = 0x16cf38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16cf3c: 0xdfb40030
    ctx->pc = 0x16cf3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cf40: 0xdfb50038
    ctx->pc = 0x16cf40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16cf44: 0xdfb60040
    ctx->pc = 0x16cf44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cf48: 0xdfbf0048
    ctx->pc = 0x16cf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16cf4c: 0x3e00008
    ctx->pc = 0x16CF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CF50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CE58u: goto label_16ce58;
            case 0x16CE70u: goto label_16ce70;
            case 0x16CED0u: goto label_16ced0;
            case 0x16CEF8u: goto label_16cef8;
            case 0x16CEFCu: goto label_16cefc;
            case 0x16CF1Cu: goto label_16cf1c;
            case 0x16CF2Cu: goto label_16cf2c;
            case 0x16CF30u: goto label_16cf30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CF54u;
    // 0x16cf54: 0x0
    ctx->pc = 0x16cf54u;
    // NOP
}
