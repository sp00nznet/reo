#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00174CC8
// Address: 0x174cc8 - 0x174dc8
void sub_00174CC8_0x174cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x174cc8u;

    // 0x174cc8: 0x27bdfff0
    ctx->pc = 0x174cc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174ccc: 0x80182d
    ctx->pc = 0x174cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cd0: 0xffb00000
    ctx->pc = 0x174cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174cd4: 0xe0802d
    ctx->pc = 0x174cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174cd8: 0xffbf0008
    ctx->pc = 0x174cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x174cdc: 0x8c620dac
    ctx->pc = 0x174cdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3500)));
    // 0x174ce0: 0x10400005
    ctx->pc = 0x174CE0u;
    {
        const bool branch_taken_0x174ce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174CE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174ce0) {
            ctx->pc = 0x174CF8u;
            goto label_174cf8;
        }
    }
    ctx->pc = 0x174CE8u;
    // 0x174ce8: 0xdfb00000
    ctx->pc = 0x174ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174cec: 0xdfbf0008
    ctx->pc = 0x174cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174cf0: 0x805d346
    ctx->pc = 0x174CF0u;
    ctx->pc = 0x174CF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x174D18u;
    goto label_174d18;
    ctx->pc = 0x174CF8u;
label_174cf8:
    // 0x174cf8: 0xc056ea0
    ctx->pc = 0x174CF8u;
    SET_GPR_U32(ctx, 31, 0x174D00u);
    ctx->pc = 0x174CFCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 3476)));
    ctx->pc = 0x15BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BA80_0x15ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D00u; }
    }
    if (ctx->pc != 0x174D00u) { return; }
    ctx->pc = 0x174D00u;
    // 0x174d00: 0xae020000
    ctx->pc = 0x174d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x174d04: 0xdfbf0008
    ctx->pc = 0x174d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174d08: 0xdfb00000
    ctx->pc = 0x174d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174d0c: 0x3e00008
    ctx->pc = 0x174D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174CF8u: goto label_174cf8;
            case 0x174D18u: goto label_174d18;
            case 0x174D80u: goto label_174d80;
            case 0x174DACu: goto label_174dac;
            case 0x174DB0u: goto label_174db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174D14u;
    // 0x174d14: 0x0
    ctx->pc = 0x174d14u;
    // NOP
label_174d18:
    // 0x174d18: 0x3e00008
    ctx->pc = 0x174D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174CF8u: goto label_174cf8;
            case 0x174D18u: goto label_174d18;
            case 0x174D80u: goto label_174d80;
            case 0x174DACu: goto label_174dac;
            case 0x174DB0u: goto label_174db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174D20u;
    // 0x174d20: 0x27bdffc0
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174d24: 0x24020001
    ctx->pc = 0x174d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174d28: 0xffb20020
    ctx->pc = 0x174d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x174d2c: 0xc0902d
    ctx->pc = 0x174d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d30: 0xffb30028
    ctx->pc = 0x174d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x174d34: 0xe0982d
    ctx->pc = 0x174d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d38: 0xffb00010
    ctx->pc = 0x174d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174d3c: 0xffb10018
    ctx->pc = 0x174d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x174d40: 0xa0882d
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d44: 0xffbf0030
    ctx->pc = 0x174d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174d48: 0xae400000
    ctx->pc = 0x174d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x174d4c: 0xae620000
    ctx->pc = 0x174d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x174d50: 0x80102d
    ctx->pc = 0x174d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d54: 0xc05a78c
    ctx->pc = 0x174D54u;
    SET_GPR_U32(ctx, 31, 0x174D5Cu);
    ctx->pc = 0x174D58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 10928));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D5Cu; }
    }
    if (ctx->pc != 0x174D5Cu) { return; }
    ctx->pc = 0x174D5Cu;
    // 0x174d5c: 0x202d
    ctx->pc = 0x174d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d60: 0x10400007
    ctx->pc = 0x174D60u;
    {
        const bool branch_taken_0x174d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174D64u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174d60) {
            ctx->pc = 0x174D80u;
            goto label_174d80;
        }
    }
    ctx->pc = 0x174D68u;
    // 0x174d68: 0x3c05ff00
    ctx->pc = 0x174d68u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x174d6c: 0xc05a704
    ctx->pc = 0x174D6Cu;
    SET_GPR_U32(ctx, 31, 0x174D74u);
    ctx->pc = 0x174D70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 343));
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D74u; }
    }
    if (ctx->pc != 0x174D74u) { return; }
    ctx->pc = 0x174D74u;
    // 0x174d74: 0x1000000e
    ctx->pc = 0x174D74u;
    {
        const bool branch_taken_0x174d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174D78u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x174d74) {
            ctx->pc = 0x174DB0u;
            goto label_174db0;
        }
    }
    ctx->pc = 0x174D7Cu;
    // 0x174d7c: 0x0
    ctx->pc = 0x174d7cu;
    // NOP
label_174d80:
    // 0x174d80: 0xc05d2ee
    ctx->pc = 0x174D80u;
    SET_GPR_U32(ctx, 31, 0x174D88u);
    ctx->pc = 0x174D84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x174BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174BB8_0x174bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D88u; }
    }
    if (ctx->pc != 0x174D88u) { return; }
    ctx->pc = 0x174D88u;
    // 0x174d88: 0x220282d
    ctx->pc = 0x174d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d8c: 0x8fa30000
    ctx->pc = 0x174d8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174d90: 0x240302d
    ctx->pc = 0x174d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d94: 0x260382d
    ctx->pc = 0x174d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d98: 0x10600004
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x174D9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DACu;
            goto label_174dac;
        }
    }
    ctx->pc = 0x174DA0u;
    // 0x174da0: 0xc05d372
    ctx->pc = 0x174DA0u;
    SET_GPR_U32(ctx, 31, 0x174DA8u);
    ctx->pc = 0x174DA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x174DC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174DC8_0x174dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DA8u; }
    }
    if (ctx->pc != 0x174DA8u) { return; }
    ctx->pc = 0x174DA8u;
    // 0x174da8: 0x102d
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174dac:
    // 0x174dac: 0xdfb00010
    ctx->pc = 0x174dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174db0:
    // 0x174db0: 0xdfb10018
    ctx->pc = 0x174db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174db4: 0xdfb20020
    ctx->pc = 0x174db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174db8: 0xdfb30028
    ctx->pc = 0x174db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x174dbc: 0xdfbf0030
    ctx->pc = 0x174dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174dc0: 0x3e00008
    ctx->pc = 0x174DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174DC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174CF8u: goto label_174cf8;
            case 0x174D18u: goto label_174d18;
            case 0x174D80u: goto label_174d80;
            case 0x174DACu: goto label_174dac;
            case 0x174DB0u: goto label_174db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174DC8u;
}
