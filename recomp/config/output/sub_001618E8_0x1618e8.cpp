#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001618E8
// Address: 0x1618e8 - 0x161948
void sub_001618E8_0x1618e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1618e8u;

    // 0x1618e8: 0x27bdfff0
    ctx->pc = 0x1618e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1618ec: 0xffb00000
    ctx->pc = 0x1618ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1618f0: 0x80802d
    ctx->pc = 0x1618f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618f4: 0xffbf0008
    ctx->pc = 0x1618f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1618f8: 0xc058630
    ctx->pc = 0x1618F8u;
    SET_GPR_U32(ctx, 31, 0x161900u);
    ctx->pc = 0x1618FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1618C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001618C0_0x1618c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161900u; }
    }
    if (ctx->pc != 0x161900u) { return; }
    ctx->pc = 0x161900u;
    // 0x161900: 0x1040000c
    ctx->pc = 0x161900u;
    {
        const bool branch_taken_0x161900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161904u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161900) {
            ctx->pc = 0x161934u;
            goto label_161934;
        }
    }
    ctx->pc = 0x161908u;
    // 0x161908: 0x8e0400ec
    ctx->pc = 0x161908u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x16190c: 0xc04fe2a
    ctx->pc = 0x16190Cu;
    SET_GPR_U32(ctx, 31, 0x161914u);
    ctx->pc = 0x161910u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->pc = 0x13F8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F8A8_0x13f8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161914u; }
    }
    if (ctx->pc != 0x161914u) { return; }
    ctx->pc = 0x161914u;
    // 0x161914: 0x3c040024
    ctx->pc = 0x161914u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x161918: 0x14400006
    ctx->pc = 0x161918u;
    {
        const bool branch_taken_0x161918 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16191Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966912));
        if (branch_taken_0x161918) {
            ctx->pc = 0x161934u;
            goto label_161934;
        }
    }
    ctx->pc = 0x161920u;
    // 0x161920: 0xc058dd4
    ctx->pc = 0x161920u;
    SET_GPR_U32(ctx, 31, 0x161928u);
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161928u; }
    }
    if (ctx->pc != 0x161928u) { return; }
    ctx->pc = 0x161928u;
    // 0x161928: 0xc057474
    ctx->pc = 0x161928u;
    SET_GPR_U32(ctx, 31, 0x161930u);
    ctx->pc = 0x16192Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15D1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D1D0_0x15d1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161930u; }
    }
    if (ctx->pc != 0x161930u) { return; }
    ctx->pc = 0x161930u;
    // 0x161930: 0x102d
    ctx->pc = 0x161930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161934:
    // 0x161934: 0xdfb00000
    ctx->pc = 0x161934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161938: 0xdfbf0008
    ctx->pc = 0x161938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16193c: 0x3e00008
    ctx->pc = 0x16193Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161934u: goto label_161934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161944u;
    // 0x161944: 0x0
    ctx->pc = 0x161944u;
    // NOP
}
