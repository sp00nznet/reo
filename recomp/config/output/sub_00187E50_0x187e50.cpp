#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00187E50
// Address: 0x187e50 - 0x187ff8
void sub_00187E50_0x187e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x187e50u;

    // 0x187e50: 0x27bdffa0
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x187e54: 0x3c020029
    ctx->pc = 0x187e54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x187e58: 0xffb60040
    ctx->pc = 0x187e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x187e5c: 0x80b02d
    ctx->pc = 0x187e5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e60: 0xffb10018
    ctx->pc = 0x187e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x187e64: 0x1688c0
    ctx->pc = 0x187e64u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 22), 3));
    // 0x187e68: 0xffb40030
    ctx->pc = 0x187e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x187e6c: 0x2454b8c8
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x187e70: 0x2361023
    ctx->pc = 0x187e70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x187e74: 0xffb20020
    ctx->pc = 0x187e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x187e78: 0xffbe0050
    ctx->pc = 0x187e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x187e7c: 0x26830004
    ctx->pc = 0x187e7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4));
    // 0x187e80: 0xffb00010
    ctx->pc = 0x187e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x187e84: 0x29080
    ctx->pc = 0x187e84u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 2));
    // 0x187e88: 0xffb30028
    ctx->pc = 0x187e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x187e8c: 0x243f021
    ctx->pc = 0x187e8cu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x187e90: 0xffb50038
    ctx->pc = 0x187e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x187e94: 0xffb70048
    ctx->pc = 0x187e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x187e98: 0xffbf0058
    ctx->pc = 0x187e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x187e9c: 0xc0623b6
    ctx->pc = 0x187E9Cu;
    SET_GPR_U32(ctx, 31, 0x187EA4u);
    ctx->pc = 0x187EA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EA4u; }
    }
    if (ctx->pc != 0x187EA4u) { return; }
    ctx->pc = 0x187EA4u;
    // 0x187ea4: 0x24030003
    ctx->pc = 0x187ea4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x187ea8: 0x54430003
    ctx->pc = 0x187EA8u;
    {
        const bool branch_taken_0x187ea8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x187ea8) {
            ctx->pc = 0x187EACu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 8));
            ctx->pc = 0x187EB8u;
            goto label_187eb8;
        }
    }
    ctx->pc = 0x187EB0u;
    // 0x187eb0: 0x10000044
    ctx->pc = 0x187EB0u;
    {
        const bool branch_taken_0x187eb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187EB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x187eb0) {
            ctx->pc = 0x187FC4u;
            goto label_187fc4;
        }
    }
    ctx->pc = 0x187EB8u;
label_187eb8:
    // 0x187eb8: 0x242a821
    ctx->pc = 0x187eb8u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x187ebc: 0x8ea30000
    ctx->pc = 0x187ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x187ec0: 0x10600005
    ctx->pc = 0x187EC0u;
    {
        const bool branch_taken_0x187ec0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x187EC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 12));
        if (branch_taken_0x187ec0) {
            ctx->pc = 0x187ED8u;
            goto label_187ed8;
        }
    }
    ctx->pc = 0x187EC8u;
    // 0x187ec8: 0x2429821
    ctx->pc = 0x187ec8u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x187ecc: 0x8e630000
    ctx->pc = 0x187eccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187ed0: 0x14600007
    ctx->pc = 0x187ED0u;
    {
        const bool branch_taken_0x187ed0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x187ED4u;
        SET_GPR_U32(ctx, 23, ((uint32_t)41 << 16));
        if (branch_taken_0x187ed0) {
            ctx->pc = 0x187EF0u;
            goto label_187ef0;
        }
    }
    ctx->pc = 0x187ED8u;
label_187ed8:
    // 0x187ed8: 0x3c040024
    ctx->pc = 0x187ed8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x187edc: 0xc045a12
    ctx->pc = 0x187EDCu;
    SET_GPR_U32(ctx, 31, 0x187EE4u);
    ctx->pc = 0x187EE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6184));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187EE4u; }
    }
    if (ctx->pc != 0x187EE4u) { return; }
    ctx->pc = 0x187EE4u;
    // 0x187ee4: 0x10000037
    ctx->pc = 0x187EE4u;
    {
        const bool branch_taken_0x187ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187EE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x187ee4) {
            ctx->pc = 0x187FC4u;
            goto label_187fc4;
        }
    }
    ctx->pc = 0x187EECu;
    // 0x187eec: 0x0
    ctx->pc = 0x187eecu;
    // NOP
label_187ef0:
    // 0x187ef0: 0x282d
    ctx->pc = 0x187ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ef4: 0x26f0b900
    ctx->pc = 0x187ef4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 23), 4294949120));
    // 0x187ef8: 0x24062080
    ctx->pc = 0x187ef8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x187efc: 0xc041f1a
    ctx->pc = 0x187EFCu;
    SET_GPR_U32(ctx, 31, 0x187F04u);
    ctx->pc = 0x187F00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F04u; }
    }
    if (ctx->pc != 0x187F04u) { return; }
    ctx->pc = 0x187F04u;
    // 0x187f04: 0x2921821
    ctx->pc = 0x187f04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x187f08: 0x8e670000
    ctx->pc = 0x187f08u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187f0c: 0x3c0982d
    ctx->pc = 0x187f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f10: 0x8c620010
    ctx->pc = 0x187f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x187f14: 0x60402d
    ctx->pc = 0x187f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f18: 0x8ea50000
    ctx->pc = 0x187f18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x187f1c: 0x3c150018
    ctx->pc = 0x187f1cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)24 << 16));
    // 0x187f20: 0x47001a
    ctx->pc = 0x187f20u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x187f24: 0xae020010
    ctx->pc = 0x187f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x187f28: 0xae07000c
    ctx->pc = 0x187f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x187f2c: 0x3c040029
    ctx->pc = 0x187f2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x187f30: 0xae050008
    ctx->pc = 0x187f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x187f34: 0x282d
    ctx->pc = 0x187f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f38: 0x50e00001
    ctx->pc = 0x187F38u;
    {
        const bool branch_taken_0x187f38 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x187f38) {
            ctx->pc = 0x187F3Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x187F40u;
            goto label_187f40;
        }
    }
    ctx->pc = 0x187F40u;
label_187f40:
    // 0x187f40: 0x2484d980
    ctx->pc = 0x187f40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957440));
    // 0x187f44: 0x24060100
    ctx->pc = 0x187f44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x187f48: 0x3c120023
    ctx->pc = 0x187f48u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x187f4c: 0x24140001
    ctx->pc = 0x187f4cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x187f50: 0x1812
    ctx->pc = 0x187f50u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x187f54: 0x2462ffff
    ctx->pc = 0x187f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187f58: 0x2463fffe
    ctx->pc = 0x187f58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x187f5c: 0xae020014
    ctx->pc = 0x187f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x187f60: 0x8d020014
    ctx->pc = 0x187f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x187f64: 0xae030018
    ctx->pc = 0x187f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x187f68: 0xae020024
    ctx->pc = 0x187f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x187f6c: 0x24022080
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x187f70: 0xc041f1a
    ctx->pc = 0x187F70u;
    SET_GPR_U32(ctx, 31, 0x187F78u);
    ctx->pc = 0x187F74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F78u; }
    }
    if (ctx->pc != 0x187F78u) { return; }
    ctx->pc = 0x187F78u;
    // 0x187f78: 0x24030006
    ctx->pc = 0x187f78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x187f7c: 0xae43fd24
    ctx->pc = 0x187f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966564), GPR_U32(ctx, 3));
    // 0x187f80: 0x8e640000
    ctx->pc = 0x187f80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187f84: 0x0
    ctx->pc = 0x187f84u;
    // NOP
label_187f88:
    // 0x187f88: 0x3a0302d
    ctx->pc = 0x187f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f8c: 0x8e45fd24
    ctx->pc = 0x187f8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4294966564)));
    // 0x187f90: 0x26e7b900
    ctx->pc = 0x187f90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 23), 4294949120));
    // 0x187f94: 0xc062560
    ctx->pc = 0x187F94u;
    SET_GPR_U32(ctx, 31, 0x187F9Cu);
    ctx->pc = 0x187F98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 21), 30728));
    ctx->pc = 0x189580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189580_0x189580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187F9Cu; }
    }
    if (ctx->pc != 0x187F9Cu) { return; }
    ctx->pc = 0x187F9Cu;
    // 0x187f9c: 0x5454fffa
    ctx->pc = 0x187F9Cu;
    {
        const bool branch_taken_0x187f9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x187f9c) {
            ctx->pc = 0x187FA0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x187F88u;
            goto label_187f88;
        }
    }
    ctx->pc = 0x187FA4u;
    // 0x187fa4: 0x3c040029
    ctx->pc = 0x187fa4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x187fa8: 0x2361023
    ctx->pc = 0x187fa8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x187fac: 0x2483b8c8
    ctx->pc = 0x187facu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x187fb0: 0x21080
    ctx->pc = 0x187fb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x187fb4: 0x621821
    ctx->pc = 0x187fb4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187fb8: 0xc061db2
    ctx->pc = 0x187FB8u;
    SET_GPR_U32(ctx, 31, 0x187FC0u);
    ctx->pc = 0x187FBCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x1876C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001876C8_0x1876c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FC0u; }
    }
    if (ctx->pc != 0x187FC0u) { return; }
    ctx->pc = 0x187FC0u;
    // 0x187fc0: 0x8c420008
    ctx->pc = 0x187fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_187fc4:
    // 0x187fc4: 0xdfb00010
    ctx->pc = 0x187fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187fc8: 0xdfb10018
    ctx->pc = 0x187fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187fcc: 0xdfb20020
    ctx->pc = 0x187fccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187fd0: 0xdfb30028
    ctx->pc = 0x187fd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187fd4: 0xdfb40030
    ctx->pc = 0x187fd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187fd8: 0xdfb50038
    ctx->pc = 0x187fd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x187fdc: 0xdfb60040
    ctx->pc = 0x187fdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187fe0: 0xdfb70048
    ctx->pc = 0x187fe0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x187fe4: 0xdfbe0050
    ctx->pc = 0x187fe4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187fe8: 0xdfbf0058
    ctx->pc = 0x187fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x187fec: 0x3e00008
    ctx->pc = 0x187FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187FF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187EB8u: goto label_187eb8;
            case 0x187ED8u: goto label_187ed8;
            case 0x187EF0u: goto label_187ef0;
            case 0x187F40u: goto label_187f40;
            case 0x187F88u: goto label_187f88;
            case 0x187FC4u: goto label_187fc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187FF4u;
    // 0x187ff4: 0x0
    ctx->pc = 0x187ff4u;
    // NOP
}
