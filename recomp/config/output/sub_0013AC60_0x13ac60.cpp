#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013AC60
// Address: 0x13ac60 - 0x13adf0
void sub_0013AC60_0x13ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13ac60u;

    // 0x13ac60: 0x27bdffc0
    ctx->pc = 0x13ac60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ac64: 0x3c020026
    ctx->pc = 0x13ac64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x13ac68: 0xffb20010
    ctx->pc = 0x13ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ac6c: 0xc0902d
    ctx->pc = 0x13ac6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac70: 0xffb30018
    ctx->pc = 0x13ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13ac74: 0xa0982d
    ctx->pc = 0x13ac74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac78: 0xffb40020
    ctx->pc = 0x13ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13ac7c: 0x80a02d
    ctx->pc = 0x13ac7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac80: 0x282d
    ctx->pc = 0x13ac80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac84: 0x24061000
    ctx->pc = 0x13ac84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13ac88: 0x244425c0
    ctx->pc = 0x13ac88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 9664));
    // 0x13ac8c: 0xffb10008
    ctx->pc = 0x13ac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ac90: 0xffb50028
    ctx->pc = 0x13ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13ac94: 0x100a82d
    ctx->pc = 0x13ac94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac98: 0xffb00000
    ctx->pc = 0x13ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ac9c: 0xffbf0030
    ctx->pc = 0x13ac9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13aca0: 0xc041f1a
    ctx->pc = 0x13ACA0u;
    SET_GPR_U32(ctx, 31, 0x13ACA8u);
    ctx->pc = 0x13ACA4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACA8u; }
    }
    if (ctx->pc != 0x13ACA8u) { return; }
    ctx->pc = 0x13ACA8u;
    // 0x13aca8: 0x3c030022
    ctx->pc = 0x13aca8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13acac: 0x8c62d8d0
    ctx->pc = 0x13acacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957264)));
    // 0x13acb0: 0x10400003
    ctx->pc = 0x13ACB0u;
    {
        const bool branch_taken_0x13acb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13acb0) {
            ctx->pc = 0x13ACC0u;
            goto label_13acc0;
        }
    }
    ctx->pc = 0x13ACB8u;
    // 0x13acb8: 0xc04ea76
    ctx->pc = 0x13ACB8u;
    SET_GPR_U32(ctx, 31, 0x13ACC0u);
    ctx->pc = 0x13A9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A9D8_0x13a9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACC0u; }
    }
    if (ctx->pc != 0x13ACC0u) { return; }
    ctx->pc = 0x13ACC0u;
label_13acc0:
    // 0x13acc0: 0x12800007
    ctx->pc = 0x13ACC0u;
    {
        const bool branch_taken_0x13acc0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x13acc0) {
            ctx->pc = 0x13ACE0u;
            goto label_13ace0;
        }
    }
    ctx->pc = 0x13ACC8u;
    // 0x13acc8: 0x12400005
    ctx->pc = 0x13ACC8u;
    {
        const bool branch_taken_0x13acc8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x13acc8) {
            ctx->pc = 0x13ACE0u;
            goto label_13ace0;
        }
    }
    ctx->pc = 0x13ACD0u;
    // 0x13acd0: 0x12600003
    ctx->pc = 0x13ACD0u;
    {
        const bool branch_taken_0x13acd0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x13acd0) {
            ctx->pc = 0x13ACE0u;
            goto label_13ace0;
        }
    }
    ctx->pc = 0x13ACD8u;
    // 0x13acd8: 0x16200003
    ctx->pc = 0x13ACD8u;
    {
        const bool branch_taken_0x13acd8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x13acd8) {
            ctx->pc = 0x13ACE8u;
            goto label_13ace8;
        }
    }
    ctx->pc = 0x13ACE0u;
label_13ace0:
    // 0x13ace0: 0xc04ea76
    ctx->pc = 0x13ACE0u;
    SET_GPR_U32(ctx, 31, 0x13ACE8u);
    ctx->pc = 0x13A9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A9D8_0x13a9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ACE8u; }
    }
    if (ctx->pc != 0x13ACE8u) { return; }
    ctx->pc = 0x13ACE8u;
label_13ace8:
    // 0x13ace8: 0x1280002e
    ctx->pc = 0x13ACE8u;
    {
        const bool branch_taken_0x13ace8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x13ACECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ace8) {
            ctx->pc = 0x13ADA4u;
            goto label_13ada4;
        }
    }
    ctx->pc = 0x13ACF0u;
    // 0x13acf0: 0x16400009
    ctx->pc = 0x13ACF0u;
    {
        const bool branch_taken_0x13acf0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x13ACF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x13acf0) {
            ctx->pc = 0x13AD18u;
            goto label_13ad18;
        }
    }
    ctx->pc = 0x13ACF8u;
    // 0x13acf8: 0x8c43d8e8
    ctx->pc = 0x13acf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
    // 0x13acfc: 0x14600029
    ctx->pc = 0x13ACFCu;
    {
        const bool branch_taken_0x13acfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13AD00u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13acfc) {
            ctx->pc = 0x13ADA4u;
            goto label_13ada4;
        }
    }
    ctx->pc = 0x13AD04u;
    // 0x13ad04: 0x3c040024
    ctx->pc = 0x13ad04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13ad08: 0x282d
    ctx->pc = 0x13ad08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad0c: 0x1000000d
    ctx->pc = 0x13AD0Cu;
    {
        const bool branch_taken_0x13ad0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13AD10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954288));
        if (branch_taken_0x13ad0c) {
            ctx->pc = 0x13AD44u;
            goto label_13ad44;
        }
    }
    ctx->pc = 0x13AD14u;
    // 0x13ad14: 0x0
    ctx->pc = 0x13ad14u;
    // NOP
label_13ad18:
    // 0x13ad18: 0x12600005
    ctx->pc = 0x13AD18u;
    {
        const bool branch_taken_0x13ad18 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x13AD1Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
        if (branch_taken_0x13ad18) {
            ctx->pc = 0x13AD30u;
            goto label_13ad30;
        }
    }
    ctx->pc = 0x13AD20u;
    // 0x13ad20: 0x1620000d
    ctx->pc = 0x13AD20u;
    {
        const bool branch_taken_0x13ad20 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13AD24u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 9));
        if (branch_taken_0x13ad20) {
            ctx->pc = 0x13AD58u;
            goto label_13ad58;
        }
    }
    ctx->pc = 0x13AD28u;
    // 0x13ad28: 0x3c020022
    ctx->pc = 0x13ad28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13ad2c: 0x8c43d8e8
    ctx->pc = 0x13ad2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957288)));
label_13ad30:
    // 0x13ad30: 0x1460001c
    ctx->pc = 0x13AD30u;
    {
        const bool branch_taken_0x13ad30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13AD34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ad30) {
            ctx->pc = 0x13ADA4u;
            goto label_13ada4;
        }
    }
    ctx->pc = 0x13AD38u;
    // 0x13ad38: 0x3c040024
    ctx->pc = 0x13ad38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13ad3c: 0x282d
    ctx->pc = 0x13ad3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad40: 0x2484cd60
    ctx->pc = 0x13ad40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954336));
label_13ad44:
    // 0x13ad44: 0xc045a12
    ctx->pc = 0x13AD44u;
    SET_GPR_U32(ctx, 31, 0x13AD4Cu);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD4Cu; }
    }
    if (ctx->pc != 0x13AD4Cu) { return; }
    ctx->pc = 0x13AD4Cu;
    // 0x13ad4c: 0x10000015
    ctx->pc = 0x13AD4Cu;
    {
        const bool branch_taken_0x13ad4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13AD50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13ad4c) {
            ctx->pc = 0x13ADA4u;
            goto label_13ada4;
        }
    }
    ctx->pc = 0x13AD54u;
    // 0x13ad54: 0x0
    ctx->pc = 0x13ad54u;
    // NOP
label_13ad58:
    // 0x13ad58: 0x260302d
    ctx->pc = 0x13ad58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad5c: 0x230001b
    ctx->pc = 0x13ad5cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 17) / divisor; ctx->hi = GPR_U32(ctx, 16) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,17); } }
    // 0x13ad60: 0x280282d
    ctx->pc = 0x13ad60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad64: 0x2a0402d
    ctx->pc = 0x13ad64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad68: 0x240202d
    ctx->pc = 0x13ad68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad6c: 0x52000001
    ctx->pc = 0x13AD6Cu;
    {
        const bool branch_taken_0x13ad6c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ad6c) {
            ctx->pc = 0x13AD70u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13AD74u;
            goto label_13ad74;
        }
    }
    ctx->pc = 0x13AD74u;
label_13ad74:
    // 0x13ad74: 0x8812
    ctx->pc = 0x13ad74u;
    SET_GPR_U32(ctx, 17, ctx->lo);
    // 0x13ad78: 0x220382d
    ctx->pc = 0x13ad78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad7c: 0xc04e906
    ctx->pc = 0x13AD7Cu;
    SET_GPR_U32(ctx, 31, 0x13AD84u);
    ctx->pc = 0x13AD80u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 3));
    ctx->pc = 0x13A418u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A418_0x13a418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD84u; }
    }
    if (ctx->pc != 0x13AD84u) { return; }
    ctx->pc = 0x13AD84u;
    // 0x13ad84: 0x240202d
    ctx->pc = 0x13ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad88: 0xc04e9ce
    ctx->pc = 0x13AD88u;
    SET_GPR_U32(ctx, 31, 0x13AD90u);
    ctx->pc = 0x13AD8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13A738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A738_0x13a738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13AD90u; }
    }
    if (ctx->pc != 0x13AD90u) { return; }
    ctx->pc = 0x13AD90u;
    // 0x13ad90: 0x52000001
    ctx->pc = 0x13AD90u;
    {
        const bool branch_taken_0x13ad90 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13ad90) {
            ctx->pc = 0x13AD94u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13AD98u;
            goto label_13ad98;
        }
    }
    ctx->pc = 0x13AD98u;
label_13ad98:
    // 0x13ad98: 0x26a30001
    ctx->pc = 0x13ad98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 1));
    // 0x13ad9c: 0x431018
    ctx->pc = 0x13ad9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x13ada0: 0x2221021
    ctx->pc = 0x13ada0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13ada4:
    // 0x13ada4: 0xdfb00000
    ctx->pc = 0x13ada4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ada8: 0xdfb10008
    ctx->pc = 0x13ada8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13adac: 0xdfb20010
    ctx->pc = 0x13adacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13adb0: 0xdfb30018
    ctx->pc = 0x13adb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13adb4: 0xdfb40020
    ctx->pc = 0x13adb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13adb8: 0xdfb50028
    ctx->pc = 0x13adb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13adbc: 0xdfbf0030
    ctx->pc = 0x13adbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13adc0: 0x3e00008
    ctx->pc = 0x13ADC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ADC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ACC0u: goto label_13acc0;
            case 0x13ACE0u: goto label_13ace0;
            case 0x13ACE8u: goto label_13ace8;
            case 0x13AD18u: goto label_13ad18;
            case 0x13AD30u: goto label_13ad30;
            case 0x13AD44u: goto label_13ad44;
            case 0x13AD58u: goto label_13ad58;
            case 0x13AD74u: goto label_13ad74;
            case 0x13AD98u: goto label_13ad98;
            case 0x13ADA4u: goto label_13ada4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13ADC8u;
    // 0x13adc8: 0x27bdffc0
    ctx->pc = 0x13adc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13adcc: 0xffbf0030
    ctx->pc = 0x13adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13add0: 0xc04ea80
    ctx->pc = 0x13ADD0u;
    SET_GPR_U32(ctx, 31, 0x13ADD8u);
    ctx->pc = 0x13ADD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13AA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA00_0x13aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13ADD8u; }
    }
    if (ctx->pc != 0x13ADD8u) { return; }
    ctx->pc = 0x13ADD8u;
    // 0x13add8: 0x8fa20000
    ctx->pc = 0x13add8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13addc: 0xdfbf0030
    ctx->pc = 0x13addcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ade0: 0x2102b
    ctx->pc = 0x13ade0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13ade4: 0x3e00008
    ctx->pc = 0x13ADE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ADE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13ACC0u: goto label_13acc0;
            case 0x13ACE0u: goto label_13ace0;
            case 0x13ACE8u: goto label_13ace8;
            case 0x13AD18u: goto label_13ad18;
            case 0x13AD30u: goto label_13ad30;
            case 0x13AD44u: goto label_13ad44;
            case 0x13AD58u: goto label_13ad58;
            case 0x13AD74u: goto label_13ad74;
            case 0x13AD98u: goto label_13ad98;
            case 0x13ADA4u: goto label_13ada4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13ADECu;
    // 0x13adec: 0x0
    ctx->pc = 0x13adecu;
    // NOP
}
