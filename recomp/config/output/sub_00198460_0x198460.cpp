#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00198460
// Address: 0x198460 - 0x1984d0
void sub_00198460_0x198460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x198460u;

    // 0x198460: 0x27bdfff0
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198464: 0x3c050023
    ctx->pc = 0x198464u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x198468: 0xffbf0000
    ctx->pc = 0x198468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19846c: 0x3c01002a
    ctx->pc = 0x19846cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)42 << 16));
    // 0x198470: 0x8c2bfe68
    ctx->pc = 0x198470u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 1), 4294966888)));
    // 0x198474: 0x3c060023
    ctx->pc = 0x198474u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x198478: 0x3c070023
    ctx->pc = 0x198478u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x19847c: 0x3c080023
    ctx->pc = 0x19847cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x198480: 0x3c090023
    ctx->pc = 0x198480u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x198484: 0x3c0a0023
    ctx->pc = 0x198484u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x198488: 0x24a50190
    ctx->pc = 0x198488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 400));
    // 0x19848c: 0x24c601a0
    ctx->pc = 0x19848cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 416));
    // 0x198490: 0x24e701b0
    ctx->pc = 0x198490u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 432));
    // 0x198494: 0x250801c0
    ctx->pc = 0x198494u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 448));
    // 0x198498: 0x252901d0
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 464));
    // 0x19849c: 0xc066134
    ctx->pc = 0x19849Cu;
    SET_GPR_U32(ctx, 31, 0x1984A4u);
    ctx->pc = 0x1984A0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 480));
    ctx->pc = 0x1984D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001984D0_0x1984d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984A4u; }
    }
    if (ctx->pc != 0x1984A4u) { return; }
    ctx->pc = 0x1984A4u;
    // 0x1984a4: 0x14400003
    ctx->pc = 0x1984A4u;
    {
        const bool branch_taken_0x1984a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1984A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
        if (branch_taken_0x1984a4) {
            ctx->pc = 0x1984B4u;
            goto label_1984b4;
        }
    }
    ctx->pc = 0x1984ACu;
    // 0x1984ac: 0x10000004
    ctx->pc = 0x1984ACu;
    {
        const bool branch_taken_0x1984ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1984B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1984ac) {
            ctx->pc = 0x1984C0u;
            goto label_1984c0;
        }
    }
    ctx->pc = 0x1984B4u;
label_1984b4:
    // 0x1984b4: 0xc064f88
    ctx->pc = 0x1984B4u;
    SET_GPR_U32(ctx, 31, 0x1984BCu);
    ctx->pc = 0x1984B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 368));
    ctx->pc = 0x193E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E20_0x193e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984BCu; }
    }
    if (ctx->pc != 0x1984BCu) { return; }
    ctx->pc = 0x1984BCu;
    // 0x1984bc: 0x24020001
    ctx->pc = 0x1984bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1984c0:
    // 0x1984c0: 0xdfbf0000
    ctx->pc = 0x1984c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1984c4: 0x3e00008
    ctx->pc = 0x1984C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1984C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1984B4u: goto label_1984b4;
            case 0x1984C0u: goto label_1984c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1984CCu;
    // 0x1984cc: 0x0
    ctx->pc = 0x1984ccu;
    // NOP
}
