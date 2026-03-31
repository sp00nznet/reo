#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015AC38
// Address: 0x15ac38 - 0x15ade8
void sub_0015AC38_0x15ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15ac38u;

    // 0x15ac38: 0x27bdffb0
    ctx->pc = 0x15ac38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ac3c: 0xffb30018
    ctx->pc = 0x15ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15ac40: 0x24d3fffc
    ctx->pc = 0x15ac40u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x15ac44: 0xffb10008
    ctx->pc = 0x15ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ac48: 0x80882d
    ctx->pc = 0x15ac48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac4c: 0xffb20010
    ctx->pc = 0x15ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ac50: 0x902d
    ctx->pc = 0x15ac50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac54: 0xffb40020
    ctx->pc = 0x15ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15ac58: 0x24b40004
    ctx->pc = 0x15ac58u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 5), 4));
    // 0x15ac5c: 0xffb00000
    ctx->pc = 0x15ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ac60: 0xffb50028
    ctx->pc = 0x15ac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15ac64: 0xffb60030
    ctx->pc = 0x15ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15ac68: 0xffb70038
    ctx->pc = 0x15ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x15ac6c: 0x1a600027
    ctx->pc = 0x15AC6Cu;
    {
        const bool branch_taken_0x15ac6c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x15AC70u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x15ac6c) {
            ctx->pc = 0x15AD0Cu;
            goto label_15ad0c;
        }
    }
    ctx->pc = 0x15AC74u;
    // 0x15ac74: 0x3c170024
    ctx->pc = 0x15ac74u;
    SET_GPR_U32(ctx, 23, ((uint32_t)36 << 16));
    // 0x15ac78: 0x3c160024
    ctx->pc = 0x15ac78u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
    // 0x15ac7c: 0x24150003
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ac80: 0x2928021
    ctx->pc = 0x15ac80u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x15ac84: 0x0
    ctx->pc = 0x15ac84u;
    // NOP
label_15ac88:
    // 0x15ac88: 0x26520001
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x15ac8c: 0x200202d
    ctx->pc = 0x15ac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac90: 0x26e5e5b0
    ctx->pc = 0x15ac90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 4294960560));
    // 0x15ac94: 0xc042d10
    ctx->pc = 0x15AC94u;
    SET_GPR_U32(ctx, 31, 0x15AC9Cu);
    ctx->pc = 0x15AC98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC9Cu; }
    }
    if (ctx->pc != 0x15AC9Cu) { return; }
    ctx->pc = 0x15AC9Cu;
    // 0x15ac9c: 0x14400006
    ctx->pc = 0x15AC9Cu;
    {
        const bool branch_taken_0x15ac9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15ACA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x15ac9c) {
            ctx->pc = 0x15ACB8u;
            goto label_15acb8;
        }
    }
    ctx->pc = 0x15ACA4u;
    // 0x15aca4: 0xc040de0
    ctx->pc = 0x15ACA4u;
    SET_GPR_U32(ctx, 31, 0x15ACACu);
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACACu; }
    }
    if (ctx->pc != 0x15ACACu) { return; }
    ctx->pc = 0x15ACACu;
    // 0x15acac: 0x182d
    ctx->pc = 0x15acacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acb0: 0x2a2180b
    ctx->pc = 0x15acb0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 21));
    // 0x15acb4: 0xae230364
    ctx->pc = 0x15acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 3));
label_15acb8:
    // 0x15acb8: 0x200202d
    ctx->pc = 0x15acb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15acbc: 0x26c5e5b8
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 4294960568));
    // 0x15acc0: 0xc042d10
    ctx->pc = 0x15ACC0u;
    SET_GPR_U32(ctx, 31, 0x15ACC8u);
    ctx->pc = 0x15ACC4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACC8u; }
    }
    if (ctx->pc != 0x15ACC8u) { return; }
    ctx->pc = 0x15ACC8u;
    // 0x15acc8: 0x1440000a
    ctx->pc = 0x15ACC8u;
    {
        const bool branch_taken_0x15acc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15ACCCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x15acc8) {
            ctx->pc = 0x15ACF4u;
            goto label_15acf4;
        }
    }
    ctx->pc = 0x15ACD0u;
    // 0x15acd0: 0xc040de0
    ctx->pc = 0x15ACD0u;
    SET_GPR_U32(ctx, 31, 0x15ACD8u);
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACD8u; }
    }
    if (ctx->pc != 0x15ACD8u) { return; }
    ctx->pc = 0x15ACD8u;
    // 0x15acd8: 0x26040018
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    // 0x15acdc: 0xc040de0
    ctx->pc = 0x15ACDCu;
    SET_GPR_U32(ctx, 31, 0x15ACE4u);
    ctx->pc = 0x15ACE0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 2));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACE4u; }
    }
    if (ctx->pc != 0x15ACE4u) { return; }
    ctx->pc = 0x15ACE4u;
    // 0x15ace4: 0x26040020
    ctx->pc = 0x15ace4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x15ace8: 0xc040de0
    ctx->pc = 0x15ACE8u;
    SET_GPR_U32(ctx, 31, 0x15ACF0u);
    ctx->pc = 0x15ACECu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 2));
    ctx->pc = 0x103780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103780_0x103780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACF0u; }
    }
    if (ctx->pc != 0x15ACF0u) { return; }
    ctx->pc = 0x15ACF0u;
    // 0x15acf0: 0xae220360
    ctx->pc = 0x15acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 2));
label_15acf4:
    // 0x15acf4: 0xc05616e
    ctx->pc = 0x15ACF4u;
    SET_GPR_U32(ctx, 31, 0x15ACFCu);
    ctx->pc = 0x15ACF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACFCu; }
    }
    if (ctx->pc != 0x15ACFCu) { return; }
    ctx->pc = 0x15ACFCu;
    // 0x15acfc: 0x14400003
    ctx->pc = 0x15ACFCu;
    {
        const bool branch_taken_0x15acfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x15AD00u;
        SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
        if (branch_taken_0x15acfc) {
            ctx->pc = 0x15AD0Cu;
            goto label_15ad0c;
        }
    }
    ctx->pc = 0x15AD04u;
    // 0x15ad04: 0x1460ffe0
    ctx->pc = 0x15AD04u;
    {
        const bool branch_taken_0x15ad04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x15AD08u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x15ad04) {
            ctx->pc = 0x15AC88u;
            goto label_15ac88;
        }
    }
    ctx->pc = 0x15AD0Cu;
label_15ad0c:
    // 0x15ad0c: 0xdfb00000
    ctx->pc = 0x15ad0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ad10: 0x102d
    ctx->pc = 0x15ad10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad14: 0xdfb10008
    ctx->pc = 0x15ad14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15ad18: 0xdfb20010
    ctx->pc = 0x15ad18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ad1c: 0xdfb30018
    ctx->pc = 0x15ad1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ad20: 0xdfb40020
    ctx->pc = 0x15ad20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ad24: 0xdfb50028
    ctx->pc = 0x15ad24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ad28: 0xdfb60030
    ctx->pc = 0x15ad28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ad2c: 0xdfb70038
    ctx->pc = 0x15ad2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ad30: 0xdfbf0040
    ctx->pc = 0x15ad30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ad34: 0x3e00008
    ctx->pc = 0x15AD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AD38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AC88u: goto label_15ac88;
            case 0x15ACB8u: goto label_15acb8;
            case 0x15ACF4u: goto label_15acf4;
            case 0x15AD0Cu: goto label_15ad0c;
            case 0x15AD98u: goto label_15ad98;
            case 0x15ADACu: goto label_15adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15AD3Cu;
    // 0x15ad3c: 0x0
    ctx->pc = 0x15ad3cu;
    // NOP
    // 0x15ad40: 0x27bdffd0
    ctx->pc = 0x15ad40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ad44: 0xffb00000
    ctx->pc = 0x15ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ad48: 0xffb10008
    ctx->pc = 0x15ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ad4c: 0xa0882d
    ctx->pc = 0x15ad4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad50: 0xffb20010
    ctx->pc = 0x15ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ad54: 0x80902d
    ctx->pc = 0x15ad54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad58: 0xffb30018
    ctx->pc = 0x15ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15ad5c: 0xc0982d
    ctx->pc = 0x15ad5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad60: 0xffbf0020
    ctx->pc = 0x15ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ad64: 0x2406ffff
    ctx->pc = 0x15ad64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ad68: 0x8e440000
    ctx->pc = 0x15ad68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15ad6c: 0xc0561d4
    ctx->pc = 0x15AD6Cu;
    SET_GPR_U32(ctx, 31, 0x15AD74u);
    ctx->pc = 0x15AD70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x158750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00158750_0x158750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD74u; }
    }
    if (ctx->pc != 0x15AD74u) { return; }
    ctx->pc = 0x15AD74u;
    // 0x15ad74: 0x40802d
    ctx->pc = 0x15ad74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad78: 0x102d
    ctx->pc = 0x15ad78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad7c: 0x16000006
    ctx->pc = 0x15AD7Cu;
    {
        const bool branch_taken_0x15ad7c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x15AD80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ad7c) {
            ctx->pc = 0x15AD98u;
            goto label_15ad98;
        }
    }
    ctx->pc = 0x15AD84u;
    // 0x15ad84: 0x8e250000
    ctx->pc = 0x15ad84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15ad88: 0x8e440000
    ctx->pc = 0x15ad88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15ad8c: 0x10000007
    ctx->pc = 0x15AD8Cu;
    {
        const bool branch_taken_0x15ad8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15AD90u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15ad8c) {
            ctx->pc = 0x15ADACu;
            goto label_15adac;
        }
    }
    ctx->pc = 0x15AD94u;
    // 0x15ad94: 0x0
    ctx->pc = 0x15ad94u;
    // NOP
label_15ad98:
    // 0x15ad98: 0xc05616e
    ctx->pc = 0x15AD98u;
    SET_GPR_U32(ctx, 31, 0x15ADA0u);
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADA0u; }
    }
    if (ctx->pc != 0x15ADA0u) { return; }
    ctx->pc = 0x15ADA0u;
    // 0x15ada0: 0x8e440000
    ctx->pc = 0x15ada0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15ada4: 0x8e230000
    ctx->pc = 0x15ada4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15ada8: 0x2042823
    ctx->pc = 0x15ada8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_15adac:
    // 0x15adac: 0x651823
    ctx->pc = 0x15adacu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15adb0: 0x852021
    ctx->pc = 0x15adb0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15adb4: 0xae230000
    ctx->pc = 0x15adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x15adb8: 0xae440000
    ctx->pc = 0x15adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x15adbc: 0x8e630000
    ctx->pc = 0x15adbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15adc0: 0xdfb00000
    ctx->pc = 0x15adc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15adc4: 0x651821
    ctx->pc = 0x15adc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15adc8: 0xdfb10008
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15adcc: 0xae630000
    ctx->pc = 0x15adccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x15add0: 0xdfb20010
    ctx->pc = 0x15add0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15add4: 0xdfb30018
    ctx->pc = 0x15add4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15add8: 0xdfbf0020
    ctx->pc = 0x15add8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15addc: 0x3e00008
    ctx->pc = 0x15ADDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ADE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15AC88u: goto label_15ac88;
            case 0x15ACB8u: goto label_15acb8;
            case 0x15ACF4u: goto label_15acf4;
            case 0x15AD0Cu: goto label_15ad0c;
            case 0x15AD98u: goto label_15ad98;
            case 0x15ADACu: goto label_15adac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15ADE4u;
    // 0x15ade4: 0x0
    ctx->pc = 0x15ade4u;
    // NOP
}
