#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00171D10
// Address: 0x171d10 - 0x171e58
void sub_00171D10_0x171d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x171d10u;

    // 0x171d10: 0x27bdffc0
    ctx->pc = 0x171d10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171d14: 0xffb50028
    ctx->pc = 0x171d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x171d18: 0xe0a82d
    ctx->pc = 0x171d18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d1c: 0xffb10008
    ctx->pc = 0x171d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171d20: 0x80882d
    ctx->pc = 0x171d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d24: 0x2a0202d
    ctx->pc = 0x171d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d28: 0xffb00000
    ctx->pc = 0x171d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171d2c: 0xffb40020
    ctx->pc = 0x171d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171d30: 0xc0a02d
    ctx->pc = 0x171d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d34: 0xffb20010
    ctx->pc = 0x171d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171d38: 0xffb30018
    ctx->pc = 0x171d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171d3c: 0xffb60030
    ctx->pc = 0x171d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x171d40: 0xffbf0038
    ctx->pc = 0x171d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x171d44: 0xc05c54c
    ctx->pc = 0x171D44u;
    SET_GPR_U32(ctx, 31, 0x171D4Cu);
    ctx->pc = 0x171D48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171530u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171530_0x171530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D4Cu; }
    }
    if (ctx->pc != 0x171D4Cu) { return; }
    ctx->pc = 0x171D4Cu;
    // 0x171d4c: 0x200282d
    ctx->pc = 0x171d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d50: 0x220202d
    ctx->pc = 0x171d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d54: 0x1440000c
    ctx->pc = 0x171D54u;
    {
        const bool branch_taken_0x171d54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x171D58u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171d54) {
            ctx->pc = 0x171D88u;
            goto label_171d88;
        }
    }
    ctx->pc = 0x171D5Cu;
    // 0x171d5c: 0xdfb00000
    ctx->pc = 0x171d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d60: 0xdfb10008
    ctx->pc = 0x171d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171d64: 0xdfb20010
    ctx->pc = 0x171d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171d68: 0xdfb30018
    ctx->pc = 0x171d68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171d6c: 0xdfb40020
    ctx->pc = 0x171d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171d70: 0xdfb50028
    ctx->pc = 0x171d70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171d74: 0xdfb60030
    ctx->pc = 0x171d74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171d78: 0xdfbf0038
    ctx->pc = 0x171d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x171d7c: 0x805644a
    ctx->pc = 0x171D7Cu;
    ctx->pc = 0x171D80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x159128u;
    sub_00159128_0x159128(rdram, ctx, runtime); return;
    ctx->pc = 0x171D84u;
    // 0x171d84: 0x0
    ctx->pc = 0x171d84u;
    // NOP
label_171d88:
    // 0x171d88: 0xc05644c
    ctx->pc = 0x171D88u;
    SET_GPR_U32(ctx, 31, 0x171D90u);
    ctx->pc = 0x171D8Cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 21), 6960)));
    ctx->pc = 0x159130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159130_0x159130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D90u; }
    }
    if (ctx->pc != 0x171D90u) { return; }
    ctx->pc = 0x171D90u;
    // 0x171d90: 0x40b02d
    ctx->pc = 0x171d90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d94: 0x26500a48
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 2632));
    // 0x171d98: 0x265309d8
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 2520));
    // 0x171d9c: 0x200202d
    ctx->pc = 0x171d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171da0: 0xc05c458
    ctx->pc = 0x171DA0u;
    SET_GPR_U32(ctx, 31, 0x171DA8u);
    ctx->pc = 0x171DA4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x171160u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171160_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DA8u; }
    }
    if (ctx->pc != 0x171DA8u) { return; }
    ctx->pc = 0x171DA8u;
    // 0x171da8: 0xc05c398
    ctx->pc = 0x171DA8u;
    SET_GPR_U32(ctx, 31, 0x171DB0u);
    ctx->pc = 0x171DACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E60_0x170e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DB0u; }
    }
    if (ctx->pc != 0x171DB0u) { return; }
    ctx->pc = 0x171DB0u;
    // 0x171db0: 0x26440a00
    ctx->pc = 0x171db0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 2560));
    // 0x171db4: 0x24020001
    ctx->pc = 0x171db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171db8: 0x8eaa0038
    ctx->pc = 0x171db8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x171dbc: 0xae620014
    ctx->pc = 0x171dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x171dc0: 0x24090002
    ctx->pc = 0x171dc0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    // 0x171dc4: 0x8e23000c
    ctx->pc = 0x171dc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x171dc8: 0x8e220008
    ctx->pc = 0x171dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x171dcc: 0x2468000f
    ctx->pc = 0x171dccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 15));
    // 0x171dd0: 0x28670000
    ctx->pc = 0x171dd0u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 3), 0));
    // 0x171dd4: 0x2446000f
    ctx->pc = 0x171dd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15));
    // 0x171dd8: 0x28450000
    ctx->pc = 0x171dd8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), 0));
    // 0x171ddc: 0xc5100b
    ctx->pc = 0x171ddcu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
    // 0x171de0: 0x107180b
    ctx->pc = 0x171de0u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 8));
    // 0x171de4: 0x21103
    ctx->pc = 0x171de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x171de8: 0x31903
    ctx->pc = 0x171de8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x171dec: 0x15490006
    ctx->pc = 0x171DECu;
    {
        const bool branch_taken_0x171dec = (GPR_U32(ctx, 10) != GPR_U32(ctx, 9));
        ctx->pc = 0x171DF0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
        if (branch_taken_0x171dec) {
            ctx->pc = 0x171E08u;
            goto label_171e08;
        }
    }
    ctx->pc = 0x171DF4u;
    // 0x171df4: 0xc051f4c
    ctx->pc = 0x171DF4u;
    SET_GPR_U32(ctx, 31, 0x171DFCu);
    ctx->pc = 0x171DF8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->pc = 0x147D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147D30_0x147d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DFCu; }
    }
    if (ctx->pc != 0x171DFCu) { return; }
    ctx->pc = 0x171DFCu;
    // 0x171dfc: 0x10000005
    ctx->pc = 0x171DFCu;
    {
        const bool branch_taken_0x171dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171E00u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x171dfc) {
            ctx->pc = 0x171E14u;
            goto label_171e14;
        }
    }
    ctx->pc = 0x171E04u;
    // 0x171e04: 0x0
    ctx->pc = 0x171e04u;
    // NOP
label_171e08:
    // 0x171e08: 0xc051f5e
    ctx->pc = 0x171E08u;
    SET_GPR_U32(ctx, 31, 0x171E10u);
    ctx->pc = 0x171E0Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->pc = 0x147D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147D78_0x147d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E10u; }
    }
    if (ctx->pc != 0x171E10u) { return; }
    ctx->pc = 0x171E10u;
    // 0x171e10: 0xae600014
    ctx->pc = 0x171e10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_171e14:
    // 0x171e14: 0xc05c418
    ctx->pc = 0x171E14u;
    SET_GPR_U32(ctx, 31, 0x171E1Cu);
    ctx->pc = 0x171E18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 112));
    ctx->pc = 0x171060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171060_0x171060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E1Cu; }
    }
    if (ctx->pc != 0x171E1Cu) { return; }
    ctx->pc = 0x171E1Cu;
    // 0x171e1c: 0xc05c800
    ctx->pc = 0x171E1Cu;
    SET_GPR_U32(ctx, 31, 0x171E24u);
    ctx->pc = 0x171E20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00172000_0x172000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E24u; }
    }
    if (ctx->pc != 0x171E24u) { return; }
    ctx->pc = 0x171E24u;
    // 0x171e24: 0x8e630018
    ctx->pc = 0x171e24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x171e28: 0x2402fffd
    ctx->pc = 0x171e28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x171e2c: 0xdfb00000
    ctx->pc = 0x171e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171e30: 0x2c3100a
    ctx->pc = 0x171e30u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 22));
    // 0x171e34: 0xdfb10008
    ctx->pc = 0x171e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171e38: 0xdfb20010
    ctx->pc = 0x171e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171e3c: 0xdfb30018
    ctx->pc = 0x171e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171e40: 0xdfb40020
    ctx->pc = 0x171e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171e44: 0xdfb50028
    ctx->pc = 0x171e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171e48: 0xdfb60030
    ctx->pc = 0x171e48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171e4c: 0xdfbf0038
    ctx->pc = 0x171e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x171e50: 0x3e00008
    ctx->pc = 0x171E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171D88u: goto label_171d88;
            case 0x171E08u: goto label_171e08;
            case 0x171E14u: goto label_171e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171E58u;
}
