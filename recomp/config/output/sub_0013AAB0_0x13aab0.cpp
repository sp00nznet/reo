#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013AAB0
// Address: 0x13aab0 - 0x13ac60
void sub_0013AAB0_0x13aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13aab0u;

    // 0x13aab0: 0x27bdffd0
    ctx->pc = 0x13aab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13aab4: 0xffb40020
    ctx->pc = 0x13aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13aab8: 0x3c140026
    ctx->pc = 0x13aab8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
    // 0x13aabc: 0xffb00000
    ctx->pc = 0x13aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13aac0: 0x80802d
    ctx->pc = 0x13aac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aac4: 0xffb10008
    ctx->pc = 0x13aac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13aac8: 0xc0882d
    ctx->pc = 0x13aac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aacc: 0xffb20010
    ctx->pc = 0x13aaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13aad0: 0xa0902d
    ctx->pc = 0x13aad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aad4: 0x24061000
    ctx->pc = 0x13aad4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13aad8: 0x268425c0
    ctx->pc = 0x13aad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 9664));
    // 0x13aadc: 0x282d
    ctx->pc = 0x13aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aae0: 0xffb30018
    ctx->pc = 0x13aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13aae4: 0xffbf0028
    ctx->pc = 0x13aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13aae8: 0xc041f1a
    ctx->pc = 0x13AAE8u;
    SET_GPR_U32(ctx, 31, 0x13AAF0u);
    ctx->pc = 0x13AAECu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AAF0u; }
    }
    if (ctx->pc != 0x13AAF0u) { return; }
    ctx->pc = 0x13AAF0u;
    // 0x13aaf0: 0x3c030022
    ctx->pc = 0x13aaf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13aaf4: 0x8c62d8d0
    ctx->pc = 0x13aaf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957264)));
    // 0x13aaf8: 0x10400003
    ctx->pc = 0x13AAF8u;
    {
        const bool branch_taken_0x13aaf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13aaf8) {
            ctx->pc = 0x13AB08u;
            goto label_13ab08;
        }
    }
    ctx->pc = 0x13AB00u;
    // 0x13ab00: 0xc04ea76
    ctx->pc = 0x13AB00u;
    SET_GPR_U32(ctx, 31, 0x13AB08u);
    ctx->pc = 0x13A9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A9D8_0x13a9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB08u; }
    }
    if (ctx->pc != 0x13AB08u) { return; }
    ctx->pc = 0x13AB08u;
label_13ab08:
    // 0x13ab08: 0x12000005
    ctx->pc = 0x13AB08u;
    {
        const bool branch_taken_0x13ab08 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ab08) {
            ctx->pc = 0x13AB20u;
            goto label_13ab20;
        }
    }
    ctx->pc = 0x13AB10u;
    // 0x13ab10: 0x12400003
    ctx->pc = 0x13AB10u;
    {
        const bool branch_taken_0x13ab10 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ab10) {
            ctx->pc = 0x13AB20u;
            goto label_13ab20;
        }
    }
    ctx->pc = 0x13AB18u;
    // 0x13ab18: 0x16200003
    ctx->pc = 0x13AB18u;
    {
        const bool branch_taken_0x13ab18 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x13ab18) {
            ctx->pc = 0x13AB28u;
            goto label_13ab28;
        }
    }
    ctx->pc = 0x13AB20u;
label_13ab20:
    // 0x13ab20: 0xc04ea76
    ctx->pc = 0x13AB20u;
    SET_GPR_U32(ctx, 31, 0x13AB28u);
    ctx->pc = 0x13A9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A9D8_0x13a9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB28u; }
    }
    if (ctx->pc != 0x13AB28u) { return; }
    ctx->pc = 0x13AB28u;
label_13ab28:
    // 0x13ab28: 0x12000044
    ctx->pc = 0x13AB28u;
    {
        const bool branch_taken_0x13ab28 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x13AB2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ab28) {
            ctx->pc = 0x13AC3Cu;
            goto label_13ac3c;
        }
    }
    ctx->pc = 0x13AB30u;
    // 0x13ab30: 0x1640000b
    ctx->pc = 0x13AB30u;
    {
        const bool branch_taken_0x13ab30 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x13AB34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x13ab30) {
            ctx->pc = 0x13AB60u;
            goto label_13ab60;
        }
    }
    ctx->pc = 0x13AB38u;
    // 0x13ab38: 0x8c43d8e8
    ctx->pc = 0x13ab38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
    // 0x13ab3c: 0x5460003f
    ctx->pc = 0x13AB3Cu;
    {
        const bool branch_taken_0x13ab3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x13ab3c) {
            ctx->pc = 0x13AB40u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13AC3Cu;
            goto label_13ac3c;
        }
    }
    ctx->pc = 0x13AB44u;
    // 0x13ab44: 0x3c040024
    ctx->pc = 0x13ab44u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13ab48: 0x282d
    ctx->pc = 0x13ab48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab4c: 0xc045a12
    ctx->pc = 0x13AB4Cu;
    SET_GPR_U32(ctx, 31, 0x13AB54u);
    ctx->pc = 0x13AB50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954288));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB54u; }
    }
    if (ctx->pc != 0x13AB54u) { return; }
    ctx->pc = 0x13AB54u;
    // 0x13ab54: 0x10000039
    ctx->pc = 0x13AB54u;
    {
        const bool branch_taken_0x13ab54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13AB58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ab54) {
            ctx->pc = 0x13AC3Cu;
            goto label_13ac3c;
        }
    }
    ctx->pc = 0x13AB5Cu;
    // 0x13ab5c: 0x0
    ctx->pc = 0x13ab5cu;
    // NOP
label_13ab60:
    // 0x13ab60: 0x1620000b
    ctx->pc = 0x13AB60u;
    {
        const bool branch_taken_0x13ab60 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13AB64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ab60) {
            ctx->pc = 0x13AB90u;
            goto label_13ab90;
        }
    }
    ctx->pc = 0x13AB68u;
    // 0x13ab68: 0x3c020022
    ctx->pc = 0x13ab68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13ab6c: 0x8c43d8e8
    ctx->pc = 0x13ab6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
    // 0x13ab70: 0x54600032
    ctx->pc = 0x13AB70u;
    {
        const bool branch_taken_0x13ab70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x13ab70) {
            ctx->pc = 0x13AB74u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13AC3Cu;
            goto label_13ac3c;
        }
    }
    ctx->pc = 0x13AB78u;
    // 0x13ab78: 0x3c040024
    ctx->pc = 0x13ab78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13ab7c: 0x282d
    ctx->pc = 0x13ab7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab80: 0xc045a12
    ctx->pc = 0x13AB80u;
    SET_GPR_U32(ctx, 31, 0x13AB88u);
    ctx->pc = 0x13AB84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954336));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AB88u; }
    }
    if (ctx->pc != 0x13AB88u) { return; }
    ctx->pc = 0x13AB88u;
    // 0x13ab88: 0x1000002c
    ctx->pc = 0x13AB88u;
    {
        const bool branch_taken_0x13ab88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13AB8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ab88) {
            ctx->pc = 0x13AC3Cu;
            goto label_13ac3c;
        }
    }
    ctx->pc = 0x13AB90u;
label_13ab90:
    // 0x13ab90: 0x282d
    ctx->pc = 0x13ab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab94: 0x269425c0
    ctx->pc = 0x13ab94u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 9664));
    // 0x13ab98: 0xc041f1a
    ctx->pc = 0x13AB98u;
    SET_GPR_U32(ctx, 31, 0x13ABA0u);
    ctx->pc = 0x13AB9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABA0u; }
    }
    if (ctx->pc != 0x13ABA0u) { return; }
    ctx->pc = 0x13ABA0u;
    // 0x13aba0: 0x200202d
    ctx->pc = 0x13aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aba4: 0xc04e96c
    ctx->pc = 0x13ABA4u;
    SET_GPR_U32(ctx, 31, 0x13ABACu);
    ctx->pc = 0x13ABA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13A5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A5B0_0x13a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABACu; }
    }
    if (ctx->pc != 0x13ABACu) { return; }
    ctx->pc = 0x13ABACu;
    // 0x13abac: 0x54400010
    ctx->pc = 0x13ABACu;
    {
        const bool branch_taken_0x13abac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13abac) {
            ctx->pc = 0x13ABB0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 9));
            ctx->pc = 0x13ABF0u;
            goto label_13abf0;
        }
    }
    ctx->pc = 0x13ABB4u;
    // 0x13abb4: 0x3c020022
    ctx->pc = 0x13abb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13abb8: 0x8c43d8e8
    ctx->pc = 0x13abb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
    // 0x13abbc: 0x14600006
    ctx->pc = 0x13ABBCu;
    {
        const bool branch_taken_0x13abbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13ABC0u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13abbc) {
            ctx->pc = 0x13ABD8u;
            goto label_13abd8;
        }
    }
    ctx->pc = 0x13ABC4u;
    // 0x13abc4: 0x3c040024
    ctx->pc = 0x13abc4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13abc8: 0x200282d
    ctx->pc = 0x13abc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abcc: 0xc045a12
    ctx->pc = 0x13ABCCu;
    SET_GPR_U32(ctx, 31, 0x13ABD4u);
    ctx->pc = 0x13ABD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954384));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABD4u; }
    }
    if (ctx->pc != 0x13ABD4u) { return; }
    ctx->pc = 0x13ABD4u;
    // 0x13abd4: 0x3c050024
    ctx->pc = 0x13abd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_13abd8:
    // 0x13abd8: 0x202d
    ctx->pc = 0x13abd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abdc: 0xc04e57e
    ctx->pc = 0x13ABDCu;
    SET_GPR_U32(ctx, 31, 0x13ABE4u);
    ctx->pc = 0x13ABE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294954424));
    ctx->pc = 0x1395F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001395F8_0x1395f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ABE4u; }
    }
    if (ctx->pc != 0x13ABE4u) { return; }
    ctx->pc = 0x13ABE4u;
    // 0x13abe4: 0x10000015
    ctx->pc = 0x13ABE4u;
    {
        const bool branch_taken_0x13abe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13ABE8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13abe4) {
            ctx->pc = 0x13AC3Cu;
            goto label_13ac3c;
        }
    }
    ctx->pc = 0x13ABECu;
    // 0x13abec: 0x0
    ctx->pc = 0x13abecu;
    // NOP
label_13abf0:
    // 0x13abf0: 0x280282d
    ctx->pc = 0x13abf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abf4: 0x230001b
    ctx->pc = 0x13abf4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 17) / divisor; ctx->hi = GPR_U32(ctx, 16) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,17); } }
    // 0x13abf8: 0x24061000
    ctx->pc = 0x13abf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13abfc: 0x260402d
    ctx->pc = 0x13abfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac00: 0x240202d
    ctx->pc = 0x13ac00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac04: 0x52000001
    ctx->pc = 0x13AC04u;
    {
        const bool branch_taken_0x13ac04 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ac04) {
            ctx->pc = 0x13AC08u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13AC0Cu;
            goto label_13ac0c;
        }
    }
    ctx->pc = 0x13AC0Cu;
label_13ac0c:
    // 0x13ac0c: 0x8812
    ctx->pc = 0x13ac0cu;
    SET_GPR_U32(ctx, 17, ctx->lo);
    // 0x13ac10: 0x220382d
    ctx->pc = 0x13ac10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac14: 0xc04e906
    ctx->pc = 0x13AC14u;
    SET_GPR_U32(ctx, 31, 0x13AC1Cu);
    ctx->pc = 0x13AC18u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 3));
    ctx->pc = 0x13A418u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A418_0x13a418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC1Cu; }
    }
    if (ctx->pc != 0x13AC1Cu) { return; }
    ctx->pc = 0x13AC1Cu;
    // 0x13ac1c: 0x240202d
    ctx->pc = 0x13ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac20: 0xc04e9ce
    ctx->pc = 0x13AC20u;
    SET_GPR_U32(ctx, 31, 0x13AC28u);
    ctx->pc = 0x13AC24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13A738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A738_0x13a738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AC28u; }
    }
    if (ctx->pc != 0x13AC28u) { return; }
    ctx->pc = 0x13AC28u;
    // 0x13ac28: 0x52000001
    ctx->pc = 0x13AC28u;
    {
        const bool branch_taken_0x13ac28 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ac28) {
            ctx->pc = 0x13AC2Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13AC30u;
            goto label_13ac30;
        }
    }
    ctx->pc = 0x13AC30u;
label_13ac30:
    // 0x13ac30: 0x26630001
    ctx->pc = 0x13ac30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 1));
    // 0x13ac34: 0x431018
    ctx->pc = 0x13ac34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x13ac38: 0x2221021
    ctx->pc = 0x13ac38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13ac3c:
    // 0x13ac3c: 0xdfb00000
    ctx->pc = 0x13ac3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ac40: 0xdfb10008
    ctx->pc = 0x13ac40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ac44: 0xdfb20010
    ctx->pc = 0x13ac44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ac48: 0xdfb30018
    ctx->pc = 0x13ac48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ac4c: 0xdfb40020
    ctx->pc = 0x13ac4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ac50: 0xdfbf0028
    ctx->pc = 0x13ac50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ac54: 0x3e00008
    ctx->pc = 0x13AC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AC58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13AB08u: goto label_13ab08;
            case 0x13AB20u: goto label_13ab20;
            case 0x13AB28u: goto label_13ab28;
            case 0x13AB60u: goto label_13ab60;
            case 0x13AB90u: goto label_13ab90;
            case 0x13ABD8u: goto label_13abd8;
            case 0x13ABF0u: goto label_13abf0;
            case 0x13AC0Cu: goto label_13ac0c;
            case 0x13AC30u: goto label_13ac30;
            case 0x13AC3Cu: goto label_13ac3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13AC5Cu;
    // 0x13ac5c: 0x0
    ctx->pc = 0x13ac5cu;
    // NOP
}
