#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172530
// Address: 0x172530 - 0x1725e0
void sub_00172530_0x172530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172530u;

    // 0x172530: 0x27bdfff0
    ctx->pc = 0x172530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172534: 0xffb00000
    ctx->pc = 0x172534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172538: 0xffbf0008
    ctx->pc = 0x172538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17253c: 0xc05a78c
    ctx->pc = 0x17253Cu;
    SET_GPR_U32(ctx, 31, 0x172544u);
    ctx->pc = 0x172540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172544u; }
    }
    if (ctx->pc != 0x172544u) { return; }
    ctx->pc = 0x172544u;
    // 0x172544: 0x3c05ff00
    ctx->pc = 0x172544u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x172548: 0x200202d
    ctx->pc = 0x172548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17254c: 0x10400006
    ctx->pc = 0x17254Cu;
    {
        const bool branch_taken_0x17254c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172550u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 312));
        if (branch_taken_0x17254c) {
            ctx->pc = 0x172568u;
            goto label_172568;
        }
    }
    ctx->pc = 0x172554u;
    // 0x172554: 0xdfb00000
    ctx->pc = 0x172554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172558: 0x202d
    ctx->pc = 0x172558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17255c: 0xdfbf0008
    ctx->pc = 0x17255cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172560: 0x805a704
    ctx->pc = 0x172560u;
    ctx->pc = 0x172564u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x172568u;
label_172568:
    // 0x172568: 0x24020001
    ctx->pc = 0x172568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17256c: 0xc05c978
    ctx->pc = 0x17256Cu;
    SET_GPR_U32(ctx, 31, 0x172574u);
    ctx->pc = 0x172570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1725E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001725E0_0x1725e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172574u; }
    }
    if (ctx->pc != 0x172574u) { return; }
    ctx->pc = 0x172574u;
    // 0x172574: 0x102d
    ctx->pc = 0x172574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172578: 0xdfb00000
    ctx->pc = 0x172578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17257c: 0xdfbf0008
    ctx->pc = 0x17257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172580: 0x3e00008
    ctx->pc = 0x172580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172584u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172568u: goto label_172568;
            case 0x1725A8u: goto label_1725a8;
            case 0x1725BCu: goto label_1725bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172588u;
    // 0x172588: 0x27bdffe0
    ctx->pc = 0x172588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17258c: 0x3c020023
    ctx->pc = 0x17258cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x172590: 0xffbf0010
    ctx->pc = 0x172590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172594: 0xffb00000
    ctx->pc = 0x172594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172598: 0x2450f18c
    ctx->pc = 0x172598u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294963596));
    // 0x17259c: 0xffb10008
    ctx->pc = 0x17259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1725a0: 0x24110007
    ctx->pc = 0x1725a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1725a4: 0x8e020000
    ctx->pc = 0x1725a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1725a8:
    // 0x1725a8: 0x26100004
    ctx->pc = 0x1725a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1725ac: 0x10400003
    ctx->pc = 0x1725ACu;
    {
        const bool branch_taken_0x1725ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1725B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1725ac) {
            ctx->pc = 0x1725BCu;
            goto label_1725bc;
        }
    }
    ctx->pc = 0x1725B4u;
    // 0x1725b4: 0xc05c978
    ctx->pc = 0x1725B4u;
    SET_GPR_U32(ctx, 31, 0x1725BCu);
    ctx->pc = 0x1725E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001725E0_0x1725e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725BCu; }
    }
    if (ctx->pc != 0x1725BCu) { return; }
    ctx->pc = 0x1725BCu;
label_1725bc:
    // 0x1725bc: 0x2631ffff
    ctx->pc = 0x1725bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1725c0: 0x623fff9
    ctx->pc = 0x1725C0u;
    {
        const bool branch_taken_0x1725c0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1725c0) {
            ctx->pc = 0x1725C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1725A8u;
            goto label_1725a8;
        }
    }
    ctx->pc = 0x1725C8u;
    // 0x1725c8: 0xdfb00000
    ctx->pc = 0x1725c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1725cc: 0xdfb10008
    ctx->pc = 0x1725ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1725d0: 0xdfbf0010
    ctx->pc = 0x1725d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1725d4: 0x805ccfe
    ctx->pc = 0x1725D4u;
    ctx->pc = 0x1725D8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1733F8u;
    entry_1733f8_0x1734b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1725DCu;
    // 0x1725dc: 0x0
    ctx->pc = 0x1725dcu;
    // NOP
}
