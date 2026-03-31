#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00138580
// Address: 0x138580 - 0x1385d8
void sub_00138580_0x138580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x138580u;

    // 0x138580: 0x27bdfff0
    ctx->pc = 0x138580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138584: 0xffb00000
    ctx->pc = 0x138584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138588: 0xffbf0008
    ctx->pc = 0x138588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13858c: 0xc04e0bc
    ctx->pc = 0x13858Cu;
    SET_GPR_U32(ctx, 31, 0x138594u);
    ctx->pc = 0x138590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1382F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001382F0_0x1382f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138594u; }
    }
    if (ctx->pc != 0x138594u) { return; }
    ctx->pc = 0x138594u;
    // 0x138594: 0xc04633e
    ctx->pc = 0x138594u;
    SET_GPR_U32(ctx, 31, 0x13859Cu);
    ctx->pc = 0x138598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13859Cu; }
    }
    if (ctx->pc != 0x13859Cu) { return; }
    ctx->pc = 0x13859Cu;
    // 0x13859c: 0x3c040024
    ctx->pc = 0x13859cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1385a0: 0x40802d
    ctx->pc = 0x1385a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385a4: 0x2484c780
    ctx->pc = 0x1385a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952832));
    // 0x1385a8: 0x6010003
    ctx->pc = 0x1385A8u;
    {
        const bool branch_taken_0x1385a8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1385ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1385a8) {
            ctx->pc = 0x1385B8u;
            goto label_1385b8;
        }
    }
    ctx->pc = 0x1385B0u;
    // 0x1385b0: 0xc045a12
    ctx->pc = 0x1385B0u;
    SET_GPR_U32(ctx, 31, 0x1385B8u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385B8u; }
    }
    if (ctx->pc != 0x1385B8u) { return; }
    ctx->pc = 0x1385B8u;
label_1385b8:
    // 0x1385b8: 0xc04e0ca
    ctx->pc = 0x1385B8u;
    SET_GPR_U32(ctx, 31, 0x1385C0u);
    ctx->pc = 0x138328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138328_0x138328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1385C0u; }
    }
    if (ctx->pc != 0x1385C0u) { return; }
    ctx->pc = 0x1385C0u;
    // 0x1385c0: 0x200102d
    ctx->pc = 0x1385c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385c4: 0xdfbf0008
    ctx->pc = 0x1385c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1385c8: 0xdfb00000
    ctx->pc = 0x1385c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1385cc: 0x3e00008
    ctx->pc = 0x1385CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1385D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1385B8u: goto label_1385b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1385D4u;
    // 0x1385d4: 0x0
    ctx->pc = 0x1385d4u;
    // NOP
}
