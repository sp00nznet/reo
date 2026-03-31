#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011EAC8
// Address: 0x11eac8 - 0x11eb78
void sub_0011EAC8_0x11eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11eac8u;

    // 0x11eac8: 0x27bdffd0
    ctx->pc = 0x11eac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11eacc: 0x41282
    ctx->pc = 0x11eaccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 10));
    // 0x11ead0: 0xffb00000
    ctx->pc = 0x11ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ead4: 0xffbf0020
    ctx->pc = 0x11ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ead8: 0x28180
    ctx->pc = 0x11ead8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 2), 6));
    // 0x11eadc: 0x4800005
    ctx->pc = 0x11EADCu;
    {
        const bool branch_taken_0x11eadc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11EAE0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x11eadc) {
            ctx->pc = 0x11EAF4u;
            goto label_11eaf4;
        }
    }
    ctx->pc = 0x11EAE4u;
    // 0x11eae4: 0x8e030008
    ctx->pc = 0x11eae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11eae8: 0x308203ff
    ctx->pc = 0x11eae8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1023));
    // 0x11eaec: 0x50430004
    ctx->pc = 0x11EAECu;
    {
        const bool branch_taken_0x11eaec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x11eaec) {
            ctx->pc = 0x11EAF0u;
            SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
            ctx->pc = 0x11EB00u;
            goto label_11eb00;
        }
    }
    ctx->pc = 0x11EAF4u;
label_11eaf4:
    // 0x11eaf4: 0x3c028000
    ctx->pc = 0x11eaf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11eaf8: 0x10000019
    ctx->pc = 0x11EAF8u;
    {
        const bool branch_taken_0x11eaf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EAFCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x11eaf8) {
            ctx->pc = 0x11EB60u;
            goto label_11eb60;
        }
    }
    ctx->pc = 0x11EB00u;
label_11eb00:
    // 0x11eb00: 0x2442b3e8
    ctx->pc = 0x11eb00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947816));
    // 0x11eb04: 0x8c43001c
    ctx->pc = 0x11eb04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11eb08: 0x54640004
    ctx->pc = 0x11EB08u;
    {
        const bool branch_taken_0x11eb08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x11eb08) {
            ctx->pc = 0x11EB0Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x11EB1Cu;
            goto label_11eb1c;
        }
    }
    ctx->pc = 0x11EB10u;
    // 0x11eb10: 0x3c028000
    ctx->pc = 0x11eb10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x11eb14: 0x10000012
    ctx->pc = 0x11EB14u;
    {
        const bool branch_taken_0x11eb14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EB18u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x11eb14) {
            ctx->pc = 0x11EB60u;
            goto label_11eb60;
        }
    }
    ctx->pc = 0x11EB1Cu;
label_11eb1c:
    // 0x11eb1c: 0x30420001
    ctx->pc = 0x11eb1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x11eb20: 0x1440000f
    ctx->pc = 0x11EB20u;
    {
        const bool branch_taken_0x11eb20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11EB24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11eb20) {
            ctx->pc = 0x11EB60u;
            goto label_11eb60;
        }
    }
    ctx->pc = 0x11EB28u;
    // 0x11eb28: 0xc0479e8
    ctx->pc = 0x11EB28u;
    SET_GPR_U32(ctx, 31, 0x11EB30u);
    ctx->pc = 0x11E7A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E7A0_0x11e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB30u; }
    }
    if (ctx->pc != 0x11EB30u) { return; }
    ctx->pc = 0x11EB30u;
    // 0x11eb30: 0x40882d
    ctx->pc = 0x11eb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb34: 0x8e02000c
    ctx->pc = 0x11eb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11eb38: 0xfe110010
    ctx->pc = 0x11eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x11eb3c: 0x34420001
    ctx->pc = 0x11eb3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x11eb40: 0x30430002
    ctx->pc = 0x11eb40u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 2));
    // 0x11eb44: 0x10600005
    ctx->pc = 0x11EB44u;
    {
        const bool branch_taken_0x11eb44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11EB48u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x11eb44) {
            ctx->pc = 0x11EB5Cu;
            goto label_11eb5c;
        }
    }
    ctx->pc = 0x11EB4Cu;
    // 0x11eb4c: 0xc047910
    ctx->pc = 0x11EB4Cu;
    SET_GPR_U32(ctx, 31, 0x11EB54u);
    ctx->pc = 0x11EB50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E440_0x11e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB54u; }
    }
    if (ctx->pc != 0x11EB54u) { return; }
    ctx->pc = 0x11EB54u;
    // 0x11eb54: 0xc0478ac
    ctx->pc = 0x11EB54u;
    SET_GPR_U32(ctx, 31, 0x11EB5Cu);
    ctx->pc = 0x11EB58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E2B0_0x11e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB5Cu; }
    }
    if (ctx->pc != 0x11EB5Cu) { return; }
    ctx->pc = 0x11EB5Cu;
label_11eb5c:
    // 0x11eb5c: 0x102d
    ctx->pc = 0x11eb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb60:
    // 0x11eb60: 0xdfbf0020
    ctx->pc = 0x11eb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eb64: 0xdfb10010
    ctx->pc = 0x11eb64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eb68: 0xdfb00000
    ctx->pc = 0x11eb68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eb6c: 0x3e00008
    ctx->pc = 0x11EB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EAF4u: goto label_11eaf4;
            case 0x11EB00u: goto label_11eb00;
            case 0x11EB1Cu: goto label_11eb1c;
            case 0x11EB5Cu: goto label_11eb5c;
            case 0x11EB60u: goto label_11eb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EB74u;
    // 0x11eb74: 0x0
    ctx->pc = 0x11eb74u;
    // NOP
}
