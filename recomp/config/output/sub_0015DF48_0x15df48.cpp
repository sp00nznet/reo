#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015DF48
// Address: 0x15df48 - 0x15e020
void sub_0015DF48_0x15df48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15df48u;

    // 0x15df48: 0x27bdffd0
    ctx->pc = 0x15df48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15df4c: 0xffb00010
    ctx->pc = 0x15df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15df50: 0xa0802d
    ctx->pc = 0x15df50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df54: 0xffb10018
    ctx->pc = 0x15df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15df58: 0x80882d
    ctx->pc = 0x15df58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df5c: 0x3a0282d
    ctx->pc = 0x15df5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df60: 0x200202d
    ctx->pc = 0x15df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df64: 0xffb20020
    ctx->pc = 0x15df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15df68: 0xffbf0028
    ctx->pc = 0x15df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15df6c: 0xc05e4c2
    ctx->pc = 0x15DF6Cu;
    SET_GPR_U32(ctx, 31, 0x15DF74u);
    ctx->pc = 0x15DF70u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 180));
    ctx->pc = 0x179308u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00179308_0x179308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF74u; }
    }
    if (ctx->pc != 0x15DF74u) { return; }
    ctx->pc = 0x15DF74u;
    // 0x15df74: 0x1040001a
    ctx->pc = 0x15DF74u;
    {
        const bool branch_taken_0x15df74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DF78u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x15df74) {
            ctx->pc = 0x15DFE0u;
            goto label_15dfe0;
        }
    }
    ctx->pc = 0x15DF7Cu;
    // 0x15df7c: 0x10400018
    ctx->pc = 0x15DF7Cu;
    {
        const bool branch_taken_0x15df7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DF80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15df7c) {
            ctx->pc = 0x15DFE0u;
            goto label_15dfe0;
        }
    }
    ctx->pc = 0x15DF84u;
    // 0x15df84: 0x240500e0
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x15df88: 0xc05e4fe
    ctx->pc = 0x15DF88u;
    SET_GPR_U32(ctx, 31, 0x15DF90u);
    ctx->pc = 0x15DF8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x1793F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001793F8_0x1793f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DF90u; }
    }
    if (ctx->pc != 0x15DF90u) { return; }
    ctx->pc = 0x15DF90u;
    // 0x15df90: 0x10400013
    ctx->pc = 0x15DF90u;
    {
        const bool branch_taken_0x15df90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DF94u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x15df90) {
            ctx->pc = 0x15DFE0u;
            goto label_15dfe0;
        }
    }
    ctx->pc = 0x15DF98u;
    // 0x15df98: 0x10400011
    ctx->pc = 0x15DF98u;
    {
        const bool branch_taken_0x15df98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DF9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15df98) {
            ctx->pc = 0x15DFE0u;
            goto label_15dfe0;
        }
    }
    ctx->pc = 0x15DFA0u;
    // 0x15dfa0: 0x240500e0
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x15dfa4: 0xc05e856
    ctx->pc = 0x15DFA4u;
    SET_GPR_U32(ctx, 31, 0x15DFACu);
    ctx->pc = 0x15DFA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x17A158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A158_0x17a158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFACu; }
    }
    if (ctx->pc != 0x15DFACu) { return; }
    ctx->pc = 0x15DFACu;
    // 0x15dfac: 0x1040000c
    ctx->pc = 0x15DFACu;
    {
        const bool branch_taken_0x15dfac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DFB0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x15dfac) {
            ctx->pc = 0x15DFE0u;
            goto label_15dfe0;
        }
    }
    ctx->pc = 0x15DFB4u;
    // 0x15dfb4: 0x8fa20008
    ctx->pc = 0x15dfb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15dfb8: 0x14430007
    ctx->pc = 0x15DFB8u;
    {
        const bool branch_taken_0x15dfb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x15DFBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15dfb8) {
            ctx->pc = 0x15DFD8u;
            goto label_15dfd8;
        }
    }
    ctx->pc = 0x15DFC0u;
    // 0x15dfc0: 0x24020001
    ctx->pc = 0x15dfc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dfc4: 0xae420004
    ctx->pc = 0x15dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x15dfc8: 0xc05855e
    ctx->pc = 0x15DFC8u;
    SET_GPR_U32(ctx, 31, 0x15DFD0u);
    ctx->pc = 0x15DFCCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161578u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161578_0x161578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFD0u; }
    }
    if (ctx->pc != 0x15DFD0u) { return; }
    ctx->pc = 0x15DFD0u;
    // 0x15dfd0: 0x10000004
    ctx->pc = 0x15DFD0u;
    {
        const bool branch_taken_0x15dfd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15DFD4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x15dfd0) {
            ctx->pc = 0x15DFE4u;
            goto label_15dfe4;
        }
    }
    ctx->pc = 0x15DFD8u;
label_15dfd8:
    // 0x15dfd8: 0xc05855e
    ctx->pc = 0x15DFD8u;
    SET_GPR_U32(ctx, 31, 0x15DFE0u);
    ctx->pc = 0x15DFDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161578u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161578_0x161578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFE0u; }
    }
    if (ctx->pc != 0x15DFE0u) { return; }
    ctx->pc = 0x15DFE0u;
label_15dfe0:
    // 0x15dfe0: 0xdfb00010
    ctx->pc = 0x15dfe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15dfe4:
    // 0x15dfe4: 0xdfb10018
    ctx->pc = 0x15dfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15dfe8: 0xdfb20020
    ctx->pc = 0x15dfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15dfec: 0xdfbf0028
    ctx->pc = 0x15dfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15dff0: 0x3e00008
    ctx->pc = 0x15DFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DFF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DFD8u: goto label_15dfd8;
            case 0x15DFE0u: goto label_15dfe0;
            case 0x15DFE4u: goto label_15dfe4;
            case 0x15E018u: goto label_15e018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15DFF8u;
    // 0x15dff8: 0x248400b4
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 180));
    // 0x15dffc: 0x24020001
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e000: 0x8c850000
    ctx->pc = 0x15e000u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e004: 0x302d
    ctx->pc = 0x15e004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e008: 0x14a20003
    ctx->pc = 0x15E008u;
    {
        const bool branch_taken_0x15e008 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x15E00Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x15e008) {
            ctx->pc = 0x15E018u;
            goto label_15e018;
        }
    }
    ctx->pc = 0x15E010u;
    // 0x15e010: 0x651026
    ctx->pc = 0x15e010u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15e014: 0x2c460001
    ctx->pc = 0x15e014u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 2), 1));
label_15e018:
    // 0x15e018: 0x3e00008
    ctx->pc = 0x15E018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E01Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DFD8u: goto label_15dfd8;
            case 0x15DFE0u: goto label_15dfe0;
            case 0x15DFE4u: goto label_15dfe4;
            case 0x15E018u: goto label_15e018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15E020u;
}
