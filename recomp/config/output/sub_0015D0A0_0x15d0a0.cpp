#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015D0A0
// Address: 0x15d0a0 - 0x15d108
void sub_0015D0A0_0x15d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15d0a0u;

    // 0x15d0a0: 0x27bdfff0
    ctx->pc = 0x15d0a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d0a4: 0x24030002
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d0a8: 0xffb00000
    ctx->pc = 0x15d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15d0ac: 0x80802d
    ctx->pc = 0x15d0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0b0: 0xffbf0008
    ctx->pc = 0x15d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15d0b4: 0x8e020000
    ctx->pc = 0x15d0b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d0b8: 0x14430005
    ctx->pc = 0x15D0B8u;
    {
        const bool branch_taken_0x15d0b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x15D0BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x15d0b8) {
            ctx->pc = 0x15D0D0u;
            goto label_15d0d0;
        }
    }
    ctx->pc = 0x15D0C0u;
    // 0x15d0c0: 0x3c040024
    ctx->pc = 0x15d0c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d0c4: 0xc058dd4
    ctx->pc = 0x15D0C4u;
    SET_GPR_U32(ctx, 31, 0x15D0CCu);
    ctx->pc = 0x15D0C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961840));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0CCu; }
    }
    if (ctx->pc != 0x15D0CCu) { return; }
    ctx->pc = 0x15D0CCu;
    // 0x15d0cc: 0x202d
    ctx->pc = 0x15d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d0d0:
    // 0x15d0d0: 0x8e020024
    ctx->pc = 0x15d0d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x15d0d4: 0x2c420003
    ctx->pc = 0x15d0d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x15d0d8: 0x54400006
    ctx->pc = 0x15D0D8u;
    {
        const bool branch_taken_0x15d0d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15d0d8) {
            ctx->pc = 0x15D0DCu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x15D0F4u;
            goto label_15d0f4;
        }
    }
    ctx->pc = 0x15D0E0u;
    // 0x15d0e0: 0x3c040024
    ctx->pc = 0x15d0e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15d0e4: 0xc058dd4
    ctx->pc = 0x15D0E4u;
    SET_GPR_U32(ctx, 31, 0x15D0ECu);
    ctx->pc = 0x15D0E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961888));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0ECu; }
    }
    if (ctx->pc != 0x15D0ECu) { return; }
    ctx->pc = 0x15D0ECu;
    // 0x15d0ec: 0x202d
    ctx->pc = 0x15d0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0f0: 0xdfb00000
    ctx->pc = 0x15d0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d0f4:
    // 0x15d0f4: 0x80102d
    ctx->pc = 0x15d0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0f8: 0xdfbf0008
    ctx->pc = 0x15d0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d0fc: 0x3e00008
    ctx->pc = 0x15D0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D100u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D0D0u: goto label_15d0d0;
            case 0x15D0F4u: goto label_15d0f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D104u;
    // 0x15d104: 0x0
    ctx->pc = 0x15d104u;
    // NOP
}
