#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00137868
// Address: 0x137868 - 0x1378d0
void sub_00137868_0x137868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x137868u;

    // 0x137868: 0x27bdfff0
    ctx->pc = 0x137868u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13786c: 0xffb00000
    ctx->pc = 0x13786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137870: 0xffbf0008
    ctx->pc = 0x137870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x137874: 0xc0505c0
    ctx->pc = 0x137874u;
    SET_GPR_U32(ctx, 31, 0x13787Cu);
    ctx->pc = 0x137878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00141700_0x141700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13787Cu; }
    }
    if (ctx->pc != 0x13787Cu) { return; }
    ctx->pc = 0x13787Cu;
    // 0x13787c: 0x3c040024
    ctx->pc = 0x13787cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x137880: 0x24030001
    ctx->pc = 0x137880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x137884: 0x16000006
    ctx->pc = 0x137884u;
    {
        const bool branch_taken_0x137884 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x137888u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952168));
        if (branch_taken_0x137884) {
            ctx->pc = 0x1378A0u;
            goto label_1378a0;
        }
    }
    ctx->pc = 0x13788Cu;
    // 0x13788c: 0xc045a12
    ctx->pc = 0x13788Cu;
    SET_GPR_U32(ctx, 31, 0x137894u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137894u; }
    }
    if (ctx->pc != 0x137894u) { return; }
    ctx->pc = 0x137894u;
    // 0x137894: 0x1000000b
    ctx->pc = 0x137894u;
    {
        const bool branch_taken_0x137894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x137898u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x137894) {
            ctx->pc = 0x1378C4u;
            goto label_1378c4;
        }
    }
    ctx->pc = 0x13789Cu;
    // 0x13789c: 0x0
    ctx->pc = 0x13789cu;
    // NOP
label_1378a0:
    // 0x1378a0: 0x8e020004
    ctx->pc = 0x1378a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1378a4: 0x54430006
    ctx->pc = 0x1378A4u;
    {
        const bool branch_taken_0x1378a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1378a4) {
            ctx->pc = 0x1378A8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->pc = 0x1378C0u;
            goto label_1378c0;
        }
    }
    ctx->pc = 0x1378ACu;
    // 0x1378ac: 0x3c040024
    ctx->pc = 0x1378acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1378b0: 0xc045a12
    ctx->pc = 0x1378B0u;
    SET_GPR_U32(ctx, 31, 0x1378B8u);
    ctx->pc = 0x1378B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952200));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1378B8u; }
    }
    if (ctx->pc != 0x1378B8u) { return; }
    ctx->pc = 0x1378B8u;
    // 0x1378b8: 0x10000002
    ctx->pc = 0x1378B8u;
    {
        const bool branch_taken_0x1378b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1378BCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1378b8) {
            ctx->pc = 0x1378C4u;
            goto label_1378c4;
        }
    }
    ctx->pc = 0x1378C0u;
label_1378c0:
    // 0x1378c0: 0xdfb00000
    ctx->pc = 0x1378c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1378c4:
    // 0x1378c4: 0xdfbf0008
    ctx->pc = 0x1378c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1378c8: 0x80505de
    ctx->pc = 0x1378C8u;
    ctx->pc = 0x1378CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x141778u;
    sub_00141778_0x141778(rdram, ctx, runtime); return;
    ctx->pc = 0x1378D0u;
}
