#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00165A88
// Address: 0x165a88 - 0x165af8
void sub_00165A88_0x165a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x165a88u;

    // 0x165a88: 0x27bdfff0
    ctx->pc = 0x165a88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165a8c: 0xffb00000
    ctx->pc = 0x165a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165a90: 0xffbf0008
    ctx->pc = 0x165a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x165a94: 0xc05cf00
    ctx->pc = 0x165A94u;
    SET_GPR_U32(ctx, 31, 0x165A9Cu);
    ctx->pc = 0x165A98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173C00_0x173c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A9Cu; }
    }
    if (ctx->pc != 0x165A9Cu) { return; }
    ctx->pc = 0x165A9Cu;
    // 0x165a9c: 0x24030001
    ctx->pc = 0x165a9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x165aa0: 0x10430007
    ctx->pc = 0x165AA0u;
    {
        const bool branch_taken_0x165aa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x165aa0) {
            ctx->pc = 0x165AC0u;
            goto label_165ac0;
        }
    }
    ctx->pc = 0x165AA8u;
    // 0x165aa8: 0x8e060014
    ctx->pc = 0x165aa8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x165aac: 0x8e04000c
    ctx->pc = 0x165aacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x165ab0: 0xc04c578
    ctx->pc = 0x165AB0u;
    SET_GPR_U32(ctx, 31, 0x165AB8u);
    ctx->pc = 0x165AB4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x1315E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001315E0_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AB8u; }
    }
    if (ctx->pc != 0x165AB8u) { return; }
    ctx->pc = 0x165AB8u;
    // 0x165ab8: 0x10000004
    ctx->pc = 0x165AB8u;
    {
        const bool branch_taken_0x165ab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x165ABCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165ab8) {
            ctx->pc = 0x165ACCu;
            goto label_165acc;
        }
    }
    ctx->pc = 0x165AC0u;
label_165ac0:
    // 0x165ac0: 0xc0596be
    ctx->pc = 0x165AC0u;
    SET_GPR_U32(ctx, 31, 0x165AC8u);
    ctx->pc = 0x165AF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00165AF8_0x165af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AC8u; }
    }
    if (ctx->pc != 0x165AC8u) { return; }
    ctx->pc = 0x165AC8u;
    // 0x165ac8: 0x40802d
    ctx->pc = 0x165ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_165acc:
    // 0x165acc: 0x12000005
    ctx->pc = 0x165ACCu;
    {
        const bool branch_taken_0x165acc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x165AD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x165acc) {
            ctx->pc = 0x165AE4u;
            goto label_165ae4;
        }
    }
    ctx->pc = 0x165AD4u;
    // 0x165ad4: 0x200202d
    ctx->pc = 0x165ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ad8: 0xc04caf2
    ctx->pc = 0x165AD8u;
    SET_GPR_U32(ctx, 31, 0x165AE0u);
    ctx->pc = 0x165ADCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x132BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BC8_0x132bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165AE0u; }
    }
    if (ctx->pc != 0x165AE0u) { return; }
    ctx->pc = 0x165AE0u;
    // 0x165ae0: 0x200102d
    ctx->pc = 0x165ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165ae4:
    // 0x165ae4: 0xdfb00000
    ctx->pc = 0x165ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165ae8: 0xdfbf0008
    ctx->pc = 0x165ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165aec: 0x3e00008
    ctx->pc = 0x165AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165AC0u: goto label_165ac0;
            case 0x165ACCu: goto label_165acc;
            case 0x165AE4u: goto label_165ae4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165AF4u;
    // 0x165af4: 0x0
    ctx->pc = 0x165af4u;
    // NOP
}
