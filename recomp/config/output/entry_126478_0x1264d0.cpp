#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_126478
// Address: 0x126478 - 0x1264d0
void entry_126478_0x1264d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126478u;

    // 0x126478: 0x27bdfff0
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12647c: 0x24020002
    ctx->pc = 0x12647cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x126480: 0xffbf0000
    ctx->pc = 0x126480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126484: 0x8483009a
    ctx->pc = 0x126484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x126488: 0x14620005
    ctx->pc = 0x126488u;
    {
        const bool branch_taken_0x126488 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12648Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x126488) {
            ctx->pc = 0x1264A0u;
            goto label_1264a0;
        }
    }
    ctx->pc = 0x126490u;
    // 0x126490: 0xdfbf0000
    ctx->pc = 0x126490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126494: 0x804989c
    ctx->pc = 0x126494u;
    ctx->pc = 0x126498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x126270u;
    entry_126270_0x126410(rdram, ctx, runtime); return;
    ctx->pc = 0x12649Cu;
    // 0x12649c: 0x0
    ctx->pc = 0x12649cu;
    // NOP
label_1264a0:
    // 0x1264a0: 0x14620003
    ctx->pc = 0x1264A0u;
    {
        const bool branch_taken_0x1264a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1264A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1264a0) {
            ctx->pc = 0x1264B0u;
            goto label_1264b0;
        }
    }
    ctx->pc = 0x1264A8u;
    // 0x1264a8: 0x8049836
    ctx->pc = 0x1264A8u;
    ctx->pc = 0x1264ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1260D8u;
    entry_1260d8_0x126270(rdram, ctx, runtime); return;
    ctx->pc = 0x1264B0u;
label_1264b0:
    // 0x1264b0: 0x14600005
    ctx->pc = 0x1264B0u;
    {
        const bool branch_taken_0x1264b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1264b0) {
            ctx->pc = 0x1264C8u;
            goto label_1264c8;
        }
    }
    ctx->pc = 0x1264B8u;
    // 0x1264b8: 0xdfbf0000
    ctx->pc = 0x1264b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1264bc: 0x80497d8
    ctx->pc = 0x1264BCu;
    ctx->pc = 0x1264C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x125F60u;
    entry_125f60_0x1260d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1264C4u;
    // 0x1264c4: 0x0
    ctx->pc = 0x1264c4u;
    // NOP
label_1264c8:
    // 0x1264c8: 0x3e00008
    ctx->pc = 0x1264C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1264CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1264A0u: goto label_1264a0;
            case 0x1264B0u: goto label_1264b0;
            case 0x1264C8u: goto label_1264c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1264D0u;
}
