#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00177800
// Address: 0x177800 - 0x1778f0
void sub_00177800_0x177800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x177800u;

    // 0x177800: 0x27bdffe0
    ctx->pc = 0x177800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177804: 0x24060001
    ctx->pc = 0x177804u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177808: 0xffb10008
    ctx->pc = 0x177808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17780c: 0xa0882d
    ctx->pc = 0x17780cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177810: 0x282d
    ctx->pc = 0x177810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177814: 0xffb00000
    ctx->pc = 0x177814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177818: 0xffbf0010
    ctx->pc = 0x177818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17781c: 0xc05dec4
    ctx->pc = 0x17781Cu;
    SET_GPR_U32(ctx, 31, 0x177824u);
    ctx->pc = 0x177820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B10_0x177b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177824u; }
    }
    if (ctx->pc != 0x177824u) { return; }
    ctx->pc = 0x177824u;
    // 0x177824: 0x200202d
    ctx->pc = 0x177824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177828: 0x8e220008
    ctx->pc = 0x177828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17782c: 0x24050005
    ctx->pc = 0x17782cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x177830: 0x10400009
    ctx->pc = 0x177830u;
    {
        const bool branch_taken_0x177830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177834u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177830) {
            ctx->pc = 0x177858u;
            goto label_177858;
        }
    }
    ctx->pc = 0x177838u;
    // 0x177838: 0x24050001
    ctx->pc = 0x177838u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17783c: 0xc05de9c
    ctx->pc = 0x17783Cu;
    SET_GPR_U32(ctx, 31, 0x177844u);
    ctx->pc = 0x177840u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x177A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A70_0x177a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177844u; }
    }
    if (ctx->pc != 0x177844u) { return; }
    ctx->pc = 0x177844u;
    // 0x177844: 0x200202d
    ctx->pc = 0x177844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177848: 0xc05de3c
    ctx->pc = 0x177848u;
    SET_GPR_U32(ctx, 31, 0x177850u);
    ctx->pc = 0x17784Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1778F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001778F0_0x1778f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177850u; }
    }
    if (ctx->pc != 0x177850u) { return; }
    ctx->pc = 0x177850u;
    // 0x177850: 0x10000005
    ctx->pc = 0x177850u;
    {
        const bool branch_taken_0x177850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177854u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x177850) {
            ctx->pc = 0x177868u;
            goto label_177868;
        }
    }
    ctx->pc = 0x177858u;
label_177858:
    // 0x177858: 0xc05d518
    ctx->pc = 0x177858u;
    SET_GPR_U32(ctx, 31, 0x177860u);
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177860u; }
    }
    if (ctx->pc != 0x177860u) { return; }
    ctx->pc = 0x177860u;
    // 0x177860: 0xae000b44
    ctx->pc = 0x177860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2884), GPR_U32(ctx, 0));
    // 0x177864: 0x8e22000c
    ctx->pc = 0x177864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_177868:
    // 0x177868: 0x10400009
    ctx->pc = 0x177868u;
    {
        const bool branch_taken_0x177868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17786Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177868) {
            ctx->pc = 0x177890u;
            goto label_177890;
        }
    }
    ctx->pc = 0x177870u;
    // 0x177870: 0x24050001
    ctx->pc = 0x177870u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177874: 0xc05dea4
    ctx->pc = 0x177874u;
    SET_GPR_U32(ctx, 31, 0x17787Cu);
    ctx->pc = 0x177878u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x177A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177A90_0x177a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17787Cu; }
    }
    if (ctx->pc != 0x17787Cu) { return; }
    ctx->pc = 0x17787Cu;
    // 0x17787c: 0x200202d
    ctx->pc = 0x17787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177880: 0xc05de64
    ctx->pc = 0x177880u;
    SET_GPR_U32(ctx, 31, 0x177888u);
    ctx->pc = 0x177884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177990_0x177990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177888u; }
    }
    if (ctx->pc != 0x177888u) { return; }
    ctx->pc = 0x177888u;
    // 0x177888: 0x10000006
    ctx->pc = 0x177888u;
    {
        const bool branch_taken_0x177888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17788Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
        if (branch_taken_0x177888) {
            ctx->pc = 0x1778A4u;
            goto label_1778a4;
        }
    }
    ctx->pc = 0x177890u;
label_177890:
    // 0x177890: 0x24050006
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x177894: 0xc05d518
    ctx->pc = 0x177894u;
    SET_GPR_U32(ctx, 31, 0x17789Cu);
    ctx->pc = 0x177898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175460u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175460_0x175460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17789Cu; }
    }
    if (ctx->pc != 0x17789Cu) { return; }
    ctx->pc = 0x17789Cu;
    // 0x17789c: 0xae000b48
    ctx->pc = 0x17789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2888), GPR_U32(ctx, 0));
    // 0x1778a0: 0x8e220020
    ctx->pc = 0x1778a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1778a4:
    // 0x1778a4: 0x1040000c
    ctx->pc = 0x1778A4u;
    {
        const bool branch_taken_0x1778a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1778A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1778a4) {
            ctx->pc = 0x1778D8u;
            goto label_1778d8;
        }
    }
    ctx->pc = 0x1778ACu;
    // 0x1778ac: 0x24050001
    ctx->pc = 0x1778acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1778b0: 0xc05deac
    ctx->pc = 0x1778B0u;
    SET_GPR_U32(ctx, 31, 0x1778B8u);
    ctx->pc = 0x1778B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x177AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177AB0_0x177ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778B8u; }
    }
    if (ctx->pc != 0x1778B8u) { return; }
    ctx->pc = 0x1778B8u;
    // 0x1778b8: 0x200202d
    ctx->pc = 0x1778b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778bc: 0x220282d
    ctx->pc = 0x1778bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778c0: 0xdfb10008
    ctx->pc = 0x1778c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1778c4: 0xdfb00000
    ctx->pc = 0x1778c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1778c8: 0xdfbf0010
    ctx->pc = 0x1778c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1778cc: 0x805de8c
    ctx->pc = 0x1778CCu;
    ctx->pc = 0x1778D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177A30u;
    sub_00177A30_0x177a30(rdram, ctx, runtime); return;
    ctx->pc = 0x1778D4u;
    // 0x1778d4: 0x0
    ctx->pc = 0x1778d4u;
    // NOP
label_1778d8:
    // 0x1778d8: 0xdfb00000
    ctx->pc = 0x1778d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1778dc: 0xdfb10008
    ctx->pc = 0x1778dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1778e0: 0xdfbf0010
    ctx->pc = 0x1778e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1778e4: 0x3e00008
    ctx->pc = 0x1778E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1778E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177858u: goto label_177858;
            case 0x177868u: goto label_177868;
            case 0x177890u: goto label_177890;
            case 0x1778A4u: goto label_1778a4;
            case 0x1778D8u: goto label_1778d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1778ECu;
    // 0x1778ec: 0x0
    ctx->pc = 0x1778ecu;
    // NOP
}
