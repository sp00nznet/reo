#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00148870
// Address: 0x148870 - 0x1488c8
void sub_00148870_0x148870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x148870u;

    // 0x148870: 0x27bdffe0
    ctx->pc = 0x148870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148874: 0xffbf0010
    ctx->pc = 0x148874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148878: 0x8c830870
    ctx->pc = 0x148878u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2160)));
    // 0x14887c: 0x1060000c
    ctx->pc = 0x14887Cu;
    {
        const bool branch_taken_0x14887c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x14887c) {
            ctx->pc = 0x1488B0u;
            goto label_1488b0;
        }
    }
    ctx->pc = 0x148884u;
    // 0x148884: 0x1080000a
    ctx->pc = 0x148884u;
    {
        const bool branch_taken_0x148884 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x148884) {
            ctx->pc = 0x1488B0u;
            goto label_1488b0;
        }
    }
    ctx->pc = 0x14888Cu;
    // 0x14888c: 0x8c82000c
    ctx->pc = 0x14888cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x148890: 0x10400007
    ctx->pc = 0x148890u;
    {
        const bool branch_taken_0x148890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x148894u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x148890) {
            ctx->pc = 0x1488B0u;
            goto label_1488b0;
        }
    }
    ctx->pc = 0x148898u;
    // 0x148898: 0xafa50004
    ctx->pc = 0x148898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x14889c: 0xafa00000
    ctx->pc = 0x14889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1488a0: 0xc051fda
    ctx->pc = 0x1488A0u;
    SET_GPR_U32(ctx, 31, 0x1488A8u);
    ctx->pc = 0x1488A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147F68_0x147f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488A8u; }
    }
    if (ctx->pc != 0x1488A8u) { return; }
    ctx->pc = 0x1488A8u;
    // 0x1488a8: 0x10000004
    ctx->pc = 0x1488A8u;
    {
        const bool branch_taken_0x1488a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1488ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1488a8) {
            ctx->pc = 0x1488BCu;
            goto label_1488bc;
        }
    }
    ctx->pc = 0x1488B0u;
label_1488b0:
    // 0x1488b0: 0xc05220a
    ctx->pc = 0x1488B0u;
    SET_GPR_U32(ctx, 31, 0x1488B8u);
    ctx->pc = 0x1488B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148828u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00148828_0x148828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1488B8u; }
    }
    if (ctx->pc != 0x1488B8u) { return; }
    ctx->pc = 0x1488B8u;
    // 0x1488b8: 0xdfbf0010
    ctx->pc = 0x1488b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1488bc:
    // 0x1488bc: 0x3e00008
    ctx->pc = 0x1488BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1488C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1488B0u: goto label_1488b0;
            case 0x1488BCu: goto label_1488bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1488C4u;
    // 0x1488c4: 0x0
    ctx->pc = 0x1488c4u;
    // NOP
}
