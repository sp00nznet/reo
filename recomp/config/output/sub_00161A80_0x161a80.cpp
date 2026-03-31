#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00161A80
// Address: 0x161a80 - 0x161ac8
void sub_00161A80_0x161a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x161a80u;

    // 0x161a80: 0x27bdfff0
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161a84: 0xffb00000
    ctx->pc = 0x161a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161a88: 0x80802d
    ctx->pc = 0x161a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a8c: 0xffbf0008
    ctx->pc = 0x161a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x161a90: 0x8e0200e8
    ctx->pc = 0x161a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x161a94: 0x50400008
    ctx->pc = 0x161A94u;
    {
        const bool branch_taken_0x161a94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x161a94) {
            ctx->pc = 0x161A98u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x161AB8u;
            goto label_161ab8;
        }
    }
    ctx->pc = 0x161A9Cu;
    // 0x161a9c: 0xc0586b2
    ctx->pc = 0x161A9Cu;
    SET_GPR_U32(ctx, 31, 0x161AA4u);
    ctx->pc = 0x161AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00161AC8_0x161ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AA4u; }
    }
    if (ctx->pc != 0x161AA4u) { return; }
    ctx->pc = 0x161AA4u;
    // 0x161aa4: 0x200202d
    ctx->pc = 0x161aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161aa8: 0xdfbf0008
    ctx->pc = 0x161aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161aac: 0xdfb00000
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161ab0: 0x805871e
    ctx->pc = 0x161AB0u;
    ctx->pc = 0x161AB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x161C78u;
    entry_161c78_0x161d20(rdram, ctx, runtime); return;
    ctx->pc = 0x161AB8u;
label_161ab8:
    // 0x161ab8: 0xdfbf0008
    ctx->pc = 0x161ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161abc: 0x3e00008
    ctx->pc = 0x161ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161AC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161AB8u: goto label_161ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161AC4u;
    // 0x161ac4: 0x0
    ctx->pc = 0x161ac4u;
    // NOP
}
