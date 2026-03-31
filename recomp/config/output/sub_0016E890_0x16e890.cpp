#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E890
// Address: 0x16e890 - 0x16e8e0
void sub_0016E890_0x16e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e890u;

    // 0x16e890: 0x27bdfff0
    ctx->pc = 0x16e890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e894: 0x24852ab4
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 10932));
    // 0x16e898: 0xffbf0000
    ctx->pc = 0x16e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e89c: 0x102d
    ctx->pc = 0x16e89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8a0: 0x24830da4
    ctx->pc = 0x16e8a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3492));
    // 0x16e8a4: 0x8ca60004
    ctx->pc = 0x16e8a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16e8a8: 0x4c0000a
    ctx->pc = 0x16E8A8u;
    {
        const bool branch_taken_0x16e8a8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16E8ACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 3412));
        if (branch_taken_0x16e8a8) {
            ctx->pc = 0x16E8D4u;
            goto label_16e8d4;
        }
    }
    ctx->pc = 0x16E8B0u;
    // 0x16e8b0: 0x8c630000
    ctx->pc = 0x16e8b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e8b4: 0x54600008
    ctx->pc = 0x16E8B4u;
    {
        const bool branch_taken_0x16e8b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e8b4) {
            ctx->pc = 0x16E8B8u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16E8D8u;
            goto label_16e8d8;
        }
    }
    ctx->pc = 0x16E8BCu;
    // 0x16e8bc: 0xc0202d
    ctx->pc = 0x16e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e8c0: 0x8d060020
    ctx->pc = 0x16e8c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x16e8c4: 0x8ca50008
    ctx->pc = 0x16e8c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16e8c8: 0xc05407a
    ctx->pc = 0x16E8C8u;
    SET_GPR_U32(ctx, 31, 0x16E8D0u);
    ctx->pc = 0x16E8CCu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 36)));
    ctx->pc = 0x1501E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001501E8_0x1501e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8D0u; }
    }
    if (ctx->pc != 0x16E8D0u) { return; }
    ctx->pc = 0x16E8D0u;
    // 0x16e8d0: 0x2c420001
    ctx->pc = 0x16e8d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_16e8d4:
    // 0x16e8d4: 0xdfbf0000
    ctx->pc = 0x16e8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e8d8:
    // 0x16e8d8: 0x3e00008
    ctx->pc = 0x16E8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E8DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E8D4u: goto label_16e8d4;
            case 0x16E8D8u: goto label_16e8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E8E0u;
}
