#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001C85C0
// Address: 0x1c85c0 - 0x1c8620
void sub_001C85C0_0x1c85c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1c85c0u;

    // 0x1c85c0: 0x27bdfff0
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c85c4: 0x24020003
    ctx->pc = 0x1c85c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c85c8: 0xffbf0000
    ctx->pc = 0x1c85c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c85cc: 0x8c830000
    ctx->pc = 0x1c85ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c85d0: 0x1462000d
    ctx->pc = 0x1C85D0u;
    {
        const bool branch_taken_0x1c85d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1C85D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1c85d0) {
            ctx->pc = 0x1C8608u;
            goto label_1c8608;
        }
    }
    ctx->pc = 0x1C85D8u;
    // 0x1c85d8: 0xc0719ec
    ctx->pc = 0x1C85D8u;
    SET_GPR_U32(ctx, 31, 0x1C85E0u);
    ctx->pc = 0x1C67B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C67B0_0x1c67b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85E0u; }
    }
    if (ctx->pc != 0x1C85E0u) { return; }
    ctx->pc = 0x1C85E0u;
    // 0x1c85e0: 0x24030001
    ctx->pc = 0x1c85e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c85e4: 0x10430007
    ctx->pc = 0x1C85E4u;
    {
        const bool branch_taken_0x1c85e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1C85E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 700));
        if (branch_taken_0x1c85e4) {
            ctx->pc = 0x1C8604u;
            goto label_1c8604;
        }
    }
    ctx->pc = 0x1C85ECu;
    // 0x1c85ec: 0xc071b24
    ctx->pc = 0x1C85ECu;
    SET_GPR_U32(ctx, 31, 0x1C85F4u);
    ctx->pc = 0x1C6C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6C90_0x1c6c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C85F4u; }
    }
    if (ctx->pc != 0x1C85F4u) { return; }
    ctx->pc = 0x1C85F4u;
    // 0x1c85f4: 0x10400003
    ctx->pc = 0x1C85F4u;
    {
        const bool branch_taken_0x1c85f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c85f4) {
            ctx->pc = 0x1C8604u;
            goto label_1c8604;
        }
    }
    ctx->pc = 0x1C85FCu;
    // 0x1c85fc: 0x10000002
    ctx->pc = 0x1C85FCu;
    {
        const bool branch_taken_0x1c85fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C8600u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c85fc) {
            ctx->pc = 0x1C8608u;
            goto label_1c8608;
        }
    }
    ctx->pc = 0x1C8604u;
label_1c8604:
    // 0x1c8604: 0x24020003
    ctx->pc = 0x1c8604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1c8608:
    // 0x1c8608: 0xdfbf0000
    ctx->pc = 0x1c8608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c860c: 0x3e00008
    ctx->pc = 0x1C860Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8604u: goto label_1c8604;
            case 0x1C8608u: goto label_1c8608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8614u;
    // 0x1c8614: 0x0
    ctx->pc = 0x1c8614u;
    // NOP
    // 0x1c8618: 0x0
    ctx->pc = 0x1c8618u;
    // NOP
    // 0x1c861c: 0x0
    ctx->pc = 0x1c861cu;
    // NOP
}
