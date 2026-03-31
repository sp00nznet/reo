#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CCD90
// Address: 0x1ccd90 - 0x1ccfd0
void sub_001CCD90_0x1ccd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ccd90u;

    // 0x1ccd90: 0x27bdffc0
    ctx->pc = 0x1ccd90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ccd94: 0x80382d
    ctx->pc = 0x1ccd94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd98: 0xffbf0030
    ctx->pc = 0x1ccd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ccd9c: 0x7fb20020
    ctx->pc = 0x1ccd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ccda0: 0x7fb10010
    ctx->pc = 0x1ccda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ccda4: 0xa0902d
    ctx->pc = 0x1ccda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccda8: 0xc0882d
    ctx->pc = 0x1ccda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdac: 0x2a210003
    ctx->pc = 0x1ccdacu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 3));
    // 0x1ccdb0: 0x10200011
    ctx->pc = 0x1CCDB0u;
    {
        const bool branch_taken_0x1ccdb0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCDB4u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1ccdb0) {
            ctx->pc = 0x1CCDF8u;
            goto label_1ccdf8;
        }
    }
    ctx->pc = 0x1CCDB8u;
    // 0x1ccdb8: 0x2402ffff
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccdbc: 0x16420008
    ctx->pc = 0x1CCDBCu;
    {
        const bool branch_taken_0x1ccdbc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x1CCDC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdbc) {
            ctx->pc = 0x1CCDE0u;
            goto label_1ccde0;
        }
    }
    ctx->pc = 0x1CCDC4u;
    // 0x1ccdc4: 0x3c010023
    ctx->pc = 0x1ccdc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ccdc8: 0x8c3266c8
    ctx->pc = 0x1ccdc8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 1), 26312)));
    // 0x1ccdcc: 0x16420003
    ctx->pc = 0x1CCDCCu;
    {
        const bool branch_taken_0x1ccdcc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x1ccdcc) {
            ctx->pc = 0x1CCDDCu;
            goto label_1ccddc;
        }
    }
    ctx->pc = 0x1CCDD4u;
    // 0x1ccdd4: 0x10000078
    ctx->pc = 0x1CCDD4u;
    {
        const bool branch_taken_0x1ccdd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCDD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdd4) {
            ctx->pc = 0x1CCFB8u;
            goto label_1ccfb8;
        }
    }
    ctx->pc = 0x1CCDDCu;
label_1ccddc:
    // 0x1ccddc: 0x240202d
    ctx->pc = 0x1ccddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ccde0:
    // 0x1ccde0: 0xc0732cc
    ctx->pc = 0x1CCDE0u;
    SET_GPR_U32(ctx, 31, 0x1CCDE8u);
    ctx->pc = 0x1CCB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB30_0x1ccb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDE8u; }
    }
    if (ctx->pc != 0x1CCDE8u) { return; }
    ctx->pc = 0x1CCDE8u;
    // 0x1ccde8: 0x10400003
    ctx->pc = 0x1CCDE8u;
    {
        const bool branch_taken_0x1ccde8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCDECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccde8) {
            ctx->pc = 0x1CCDF8u;
            goto label_1ccdf8;
        }
    }
    ctx->pc = 0x1CCDF0u;
    // 0x1ccdf0: 0x10000071
    ctx->pc = 0x1CCDF0u;
    {
        const bool branch_taken_0x1ccdf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCDF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x1ccdf0) {
            ctx->pc = 0x1CCFB8u;
            goto label_1ccfb8;
        }
    }
    ctx->pc = 0x1CCDF8u;
label_1ccdf8:
    // 0x1ccdf8: 0x3223ffff
    ctx->pc = 0x1ccdf8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 65535));
    // 0x1ccdfc: 0x24020004
    ctx->pc = 0x1ccdfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cce00: 0x10620052
    ctx->pc = 0x1CCE00u;
    {
        const bool branch_taken_0x1cce00 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CCE04u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1cce00) {
            ctx->pc = 0x1CCF4Cu;
            goto label_1ccf4c;
        }
    }
    ctx->pc = 0x1CCE08u;
    // 0x1cce08: 0x24020003
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cce0c: 0x1062003b
    ctx->pc = 0x1CCE0Cu;
    {
        const bool branch_taken_0x1cce0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CCE10u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1cce0c) {
            ctx->pc = 0x1CCEFCu;
            goto label_1ccefc;
        }
    }
    ctx->pc = 0x1CCE14u;
    // 0x1cce14: 0x24020002
    ctx->pc = 0x1cce14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cce18: 0x10620034
    ctx->pc = 0x1CCE18u;
    {
        const bool branch_taken_0x1cce18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CCE1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cce18) {
            ctx->pc = 0x1CCEECu;
            goto label_1cceec;
        }
    }
    ctx->pc = 0x1CCE20u;
    // 0x1cce20: 0x24020001
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce24: 0x10620011
    ctx->pc = 0x1CCE24u;
    {
        const bool branch_taken_0x1cce24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CCE28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
        if (branch_taken_0x1cce24) {
            ctx->pc = 0x1CCE6Cu;
            goto label_1cce6c;
        }
    }
    ctx->pc = 0x1CCE2Cu;
    // 0x1cce2c: 0x10600003
    ctx->pc = 0x1CCE2Cu;
    {
        const bool branch_taken_0x1cce2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCE30u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1cce2c) {
            ctx->pc = 0x1CCE3Cu;
            goto label_1cce3c;
        }
    }
    ctx->pc = 0x1CCE34u;
    // 0x1cce34: 0x10000057
    ctx->pc = 0x1CCE34u;
    {
        const bool branch_taken_0x1cce34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cce34) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCE3Cu;
label_1cce3c:
    // 0x1cce3c: 0xe0202d
    ctx->pc = 0x1cce3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce40: 0x8c250ad8
    ctx->pc = 0x1cce40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1cce44: 0x220302d
    ctx->pc = 0x1cce44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce48: 0xc07323c
    ctx->pc = 0x1CCE48u;
    SET_GPR_U32(ctx, 31, 0x1CCE50u);
    ctx->pc = 0x1CCE4Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE50u; }
    }
    if (ctx->pc != 0x1CCE50u) { return; }
    ctx->pc = 0x1CCE50u;
    // 0x1cce50: 0x18400050
    ctx->pc = 0x1CCE50u;
    {
        const bool branch_taken_0x1cce50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CCE54u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1cce50) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCE58u;
    // 0x1cce58: 0x8c250ad8
    ctx->pc = 0x1cce58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1cce5c: 0xc0732e4
    ctx->pc = 0x1CCE5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE64u);
    ctx->pc = 0x1CCE60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB90_0x1ccb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE64u; }
    }
    if (ctx->pc != 0x1CCE64u) { return; }
    ctx->pc = 0x1CCE64u;
    // 0x1cce64: 0x1000004b
    ctx->pc = 0x1CCE64u;
    {
        const bool branch_taken_0x1cce64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCE68u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1cce64) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCE6Cu;
label_1cce6c:
    // 0x1cce6c: 0x2221024
    ctx->pc = 0x1cce6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cce70: 0x10400011
    ctx->pc = 0x1CCE70u;
    {
        const bool branch_taken_0x1cce70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCE74u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1cce70) {
            ctx->pc = 0x1CCEB8u;
            goto label_1cceb8;
        }
    }
    ctx->pc = 0x1CCE78u;
    // 0x1cce78: 0x3c010034
    ctx->pc = 0x1cce78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cce7c: 0xe0202d
    ctx->pc = 0x1cce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce80: 0x8c220ad8
    ctx->pc = 0x1cce80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1cce84: 0x220302d
    ctx->pc = 0x1cce84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce88: 0x382d
    ctx->pc = 0x1cce88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce8c: 0x3c010010
    ctx->pc = 0x1cce8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16 << 16));
    // 0x1cce90: 0xc07323c
    ctx->pc = 0x1CCE90u;
    SET_GPR_U32(ctx, 31, 0x1CCE98u);
    ctx->pc = 0x1CCE94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE98u; }
    }
    if (ctx->pc != 0x1CCE98u) { return; }
    ctx->pc = 0x1CCE98u;
    // 0x1cce98: 0x1840003e
    ctx->pc = 0x1CCE98u;
    {
        const bool branch_taken_0x1cce98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CCE9Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1cce98) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCEA0u;
    // 0x1ccea0: 0x8c250ad8
    ctx->pc = 0x1ccea0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccea4: 0x3c010010
    ctx->pc = 0x1ccea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16 << 16));
    // 0x1ccea8: 0xc06bd74
    ctx->pc = 0x1CCEA8u;
    SET_GPR_U32(ctx, 31, 0x1CCEB0u);
    ctx->pc = 0x1CCEACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    ctx->pc = 0x1AF5D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF5D0_0x1af5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEB0u; }
    }
    if (ctx->pc != 0x1CCEB0u) { return; }
    ctx->pc = 0x1CCEB0u;
    // 0x1cceb0: 0x10000008
    ctx->pc = 0x1CCEB0u;
    {
        const bool branch_taken_0x1cceb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cceb0) {
            ctx->pc = 0x1CCED4u;
            goto label_1cced4;
        }
    }
    ctx->pc = 0x1CCEB8u;
label_1cceb8:
    // 0x1cceb8: 0xe0202d
    ctx->pc = 0x1cceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccebc: 0x8c250ad8
    ctx->pc = 0x1ccebcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccec0: 0x220302d
    ctx->pc = 0x1ccec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccec4: 0xc07323c
    ctx->pc = 0x1CCEC4u;
    SET_GPR_U32(ctx, 31, 0x1CCECCu);
    ctx->pc = 0x1CCEC8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCECCu; }
    }
    if (ctx->pc != 0x1CCECCu) { return; }
    ctx->pc = 0x1CCECCu;
    // 0x1ccecc: 0x18400031
    ctx->pc = 0x1CCECCu;
    {
        const bool branch_taken_0x1ccecc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ccecc) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCED4u;
label_1cced4:
    // 0x1cced4: 0x3c010034
    ctx->pc = 0x1cced4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1cced8: 0x8c250ad8
    ctx->pc = 0x1cced8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccedc: 0xc0732e4
    ctx->pc = 0x1CCEDCu;
    SET_GPR_U32(ctx, 31, 0x1CCEE4u);
    ctx->pc = 0x1CCEE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB90_0x1ccb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEE4u; }
    }
    if (ctx->pc != 0x1CCEE4u) { return; }
    ctx->pc = 0x1CCEE4u;
    // 0x1ccee4: 0x1000002b
    ctx->pc = 0x1CCEE4u;
    {
        const bool branch_taken_0x1ccee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCEE8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccee4) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCEECu;
label_1cceec:
    // 0x1cceec: 0xc0732e4
    ctx->pc = 0x1CCEECu;
    SET_GPR_U32(ctx, 31, 0x1CCEF4u);
    ctx->pc = 0x1CCEF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CCB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB90_0x1ccb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEF4u; }
    }
    if (ctx->pc != 0x1CCEF4u) { return; }
    ctx->pc = 0x1CCEF4u;
    // 0x1ccef4: 0x10000027
    ctx->pc = 0x1CCEF4u;
    {
        const bool branch_taken_0x1ccef4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCEF8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccef4) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCEFCu;
label_1ccefc:
    // 0x1ccefc: 0xe0202d
    ctx->pc = 0x1ccefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf00: 0x8c250ad8
    ctx->pc = 0x1ccf00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccf04: 0x220302d
    ctx->pc = 0x1ccf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf08: 0x382d
    ctx->pc = 0x1ccf08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf0c: 0xc07323c
    ctx->pc = 0x1CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF14u);
    ctx->pc = 0x1CCF10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF14u; }
    }
    if (ctx->pc != 0x1CCF14u) { return; }
    ctx->pc = 0x1CCF14u;
    // 0x1ccf14: 0x1840001f
    ctx->pc = 0x1CCF14u;
    {
        const bool branch_taken_0x1ccf14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CCF18u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1ccf14) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCF1Cu;
    // 0x1ccf1c: 0x8c220ad8
    ctx->pc = 0x1ccf1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccf20: 0x8c440008
    ctx->pc = 0x1ccf20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ccf24: 0xc0732cc
    ctx->pc = 0x1CCF24u;
    SET_GPR_U32(ctx, 31, 0x1CCF2Cu);
    ctx->pc = 0x1CCF28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x1CCB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB30_0x1ccb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF2Cu; }
    }
    if (ctx->pc != 0x1CCF2Cu) { return; }
    ctx->pc = 0x1CCF2Cu;
    // 0x1ccf2c: 0x14400019
    ctx->pc = 0x1CCF2Cu;
    {
        const bool branch_taken_0x1ccf2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CCF30u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf2c) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCF34u;
    // 0x1ccf34: 0x3c010034
    ctx->pc = 0x1ccf34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1ccf38: 0x8c250ad8
    ctx->pc = 0x1ccf38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccf3c: 0xc0732e4
    ctx->pc = 0x1CCF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF44u);
    ctx->pc = 0x1CCF40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x1CCB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB90_0x1ccb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF44u; }
    }
    if (ctx->pc != 0x1CCF44u) { return; }
    ctx->pc = 0x1CCF44u;
    // 0x1ccf44: 0x10000013
    ctx->pc = 0x1CCF44u;
    {
        const bool branch_taken_0x1ccf44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCF48u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf44) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCF4Cu;
label_1ccf4c:
    // 0x1ccf4c: 0xe0202d
    ctx->pc = 0x1ccf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf50: 0x8c250ad8
    ctx->pc = 0x1ccf50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccf54: 0x220302d
    ctx->pc = 0x1ccf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf58: 0xc07323c
    ctx->pc = 0x1CCF58u;
    SET_GPR_U32(ctx, 31, 0x1CCF60u);
    ctx->pc = 0x1CCF5Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1CC8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8F0_0x1cc8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF60u; }
    }
    if (ctx->pc != 0x1CCF60u) { return; }
    ctx->pc = 0x1CCF60u;
    // 0x1ccf60: 0x1840000c
    ctx->pc = 0x1CCF60u;
    {
        const bool branch_taken_0x1ccf60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CCF64u;
        SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
        if (branch_taken_0x1ccf60) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCF68u;
    // 0x1ccf68: 0x8c220ad8
    ctx->pc = 0x1ccf68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccf6c: 0x8c440008
    ctx->pc = 0x1ccf6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ccf70: 0xc0732cc
    ctx->pc = 0x1CCF70u;
    SET_GPR_U32(ctx, 31, 0x1CCF78u);
    ctx->pc = 0x1CCF74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x1CCB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB30_0x1ccb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF78u; }
    }
    if (ctx->pc != 0x1CCF78u) { return; }
    ctx->pc = 0x1CCF78u;
    // 0x1ccf78: 0x14400006
    ctx->pc = 0x1CCF78u;
    {
        const bool branch_taken_0x1ccf78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CCF7Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf78) {
            ctx->pc = 0x1CCF94u;
            goto label_1ccf94;
        }
    }
    ctx->pc = 0x1CCF80u;
    // 0x1ccf80: 0x3c010034
    ctx->pc = 0x1ccf80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)52 << 16));
    // 0x1ccf84: 0x8c250ad8
    ctx->pc = 0x1ccf84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 2776)));
    // 0x1ccf88: 0xc0732e4
    ctx->pc = 0x1CCF88u;
    SET_GPR_U32(ctx, 31, 0x1CCF90u);
    ctx->pc = 0x1CCF8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x1CCB90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB90_0x1ccb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF90u; }
    }
    if (ctx->pc != 0x1CCF90u) { return; }
    ctx->pc = 0x1CCF90u;
    // 0x1ccf90: 0x40802d
    ctx->pc = 0x1ccf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf94:
    // 0x1ccf94: 0x16000003
    ctx->pc = 0x1CCF94u;
    {
        const bool branch_taken_0x1ccf94 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CCF98u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 3));
        if (branch_taken_0x1ccf94) {
            ctx->pc = 0x1CCFA4u;
            goto label_1ccfa4;
        }
    }
    ctx->pc = 0x1CCF9Cu;
    // 0x1ccf9c: 0x10000006
    ctx->pc = 0x1CCF9Cu;
    {
        const bool branch_taken_0x1ccf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCFA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ccf9c) {
            ctx->pc = 0x1CCFB8u;
            goto label_1ccfb8;
        }
    }
    ctx->pc = 0x1CCFA4u;
label_1ccfa4:
    // 0x1ccfa4: 0x14200003
    ctx->pc = 0x1CCFA4u;
    {
        const bool branch_taken_0x1ccfa4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ccfa4) {
            ctx->pc = 0x1CCFB4u;
            goto label_1ccfb4;
        }
    }
    ctx->pc = 0x1CCFACu;
    // 0x1ccfac: 0x10000002
    ctx->pc = 0x1CCFACu;
    {
        const bool branch_taken_0x1ccfac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CCFB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        if (branch_taken_0x1ccfac) {
            ctx->pc = 0x1CCFB8u;
            goto label_1ccfb8;
        }
    }
    ctx->pc = 0x1CCFB4u;
label_1ccfb4:
    // 0x1ccfb4: 0x8e020000
    ctx->pc = 0x1ccfb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ccfb8:
    // 0x1ccfb8: 0xdfbf0030
    ctx->pc = 0x1ccfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ccfbc: 0x7bb20020
    ctx->pc = 0x1ccfbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ccfc0: 0x7bb10010
    ctx->pc = 0x1ccfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccfc4: 0x7bb00000
    ctx->pc = 0x1ccfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfc8: 0x3e00008
    ctx->pc = 0x1CCFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCDDCu: goto label_1ccddc;
            case 0x1CCDE0u: goto label_1ccde0;
            case 0x1CCDF8u: goto label_1ccdf8;
            case 0x1CCE3Cu: goto label_1cce3c;
            case 0x1CCE6Cu: goto label_1cce6c;
            case 0x1CCEB8u: goto label_1cceb8;
            case 0x1CCED4u: goto label_1cced4;
            case 0x1CCEECu: goto label_1cceec;
            case 0x1CCEFCu: goto label_1ccefc;
            case 0x1CCF4Cu: goto label_1ccf4c;
            case 0x1CCF94u: goto label_1ccf94;
            case 0x1CCFA4u: goto label_1ccfa4;
            case 0x1CCFB4u: goto label_1ccfb4;
            case 0x1CCFB8u: goto label_1ccfb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CCFD0u;
}
