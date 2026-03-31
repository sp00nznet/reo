#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3760
// Address: 0x1a3760 - 0x1a37e0
void sub_001A3760_0x1a3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3760u;

    // 0x1a3760: 0x27bdfff0
    ctx->pc = 0x1a3760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3764: 0xa0402d
    ctx->pc = 0x1a3764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3768: 0xffbf0000
    ctx->pc = 0x1a3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a376c: 0x24050005
    ctx->pc = 0x1a376cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a3770: 0xc068d7c
    ctx->pc = 0x1A3770u;
    SET_GPR_U32(ctx, 31, 0x1A3778u);
    ctx->pc = 0x1A3774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3778u; }
    }
    if (ctx->pc != 0x1A3778u) { return; }
    ctx->pc = 0x1A3778u;
    // 0x1a3778: 0x14400003
    ctx->pc = 0x1A3778u;
    {
        const bool branch_taken_0x1a3778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3778) {
            ctx->pc = 0x1A3788u;
            goto label_1a3788;
        }
    }
    ctx->pc = 0x1A3780u;
    // 0x1a3780: 0x10000012
    ctx->pc = 0x1A3780u;
    {
        const bool branch_taken_0x1a3780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3784u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3780) {
            ctx->pc = 0x1A37CCu;
            goto label_1a37cc;
        }
    }
    ctx->pc = 0x1A3788u;
label_1a3788:
    // 0x1a3788: 0x8c430004
    ctx->pc = 0x1a3788u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a378c: 0x103082b
    ctx->pc = 0x1a378cu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a3790: 0x14200003
    ctx->pc = 0x1A3790u;
    {
        const bool branch_taken_0x1a3790 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3790) {
            ctx->pc = 0x1A37A0u;
            goto label_1a37a0;
        }
    }
    ctx->pc = 0x1A3798u;
    // 0x1a3798: 0x1000000c
    ctx->pc = 0x1A3798u;
    {
        const bool branch_taken_0x1a3798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A379Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3798) {
            ctx->pc = 0x1A37CCu;
            goto label_1a37cc;
        }
    }
    ctx->pc = 0x1A37A0u;
label_1a37a0:
    // 0x1a37a0: 0x2442000c
    ctx->pc = 0x1a37a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1a37a4: 0x10000004
    ctx->pc = 0x1A37A4u;
    {
        const bool branch_taken_0x1a37a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A37A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a37a4) {
            ctx->pc = 0x1A37B8u;
            goto label_1a37b8;
        }
    }
    ctx->pc = 0x1A37ACu;
label_1a37ac:
    // 0x1a37ac: 0x8c430008
    ctx->pc = 0x1a37acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a37b0: 0x24840001
    ctx->pc = 0x1a37b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a37b4: 0x431021
    ctx->pc = 0x1a37b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a37b8:
    // 0x1a37b8: 0x88182a
    ctx->pc = 0x1a37b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
    // 0x1a37bc: 0x0
    ctx->pc = 0x1a37bcu;
    // NOP
    // 0x1a37c0: 0x1460fffa
    ctx->pc = 0x1A37C0u;
    {
        const bool branch_taken_0x1a37c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a37c0) {
            ctx->pc = 0x1A37ACu;
            goto label_1a37ac;
        }
    }
    ctx->pc = 0x1A37C8u;
    // 0x1a37c8: 0x8c420004
    ctx->pc = 0x1a37c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a37cc:
    // 0x1a37cc: 0xdfbf0000
    ctx->pc = 0x1a37ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a37d0: 0x3e00008
    ctx->pc = 0x1A37D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A37D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3788u: goto label_1a3788;
            case 0x1A37A0u: goto label_1a37a0;
            case 0x1A37ACu: goto label_1a37ac;
            case 0x1A37B8u: goto label_1a37b8;
            case 0x1A37CCu: goto label_1a37cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A37D8u;
    // 0x1a37d8: 0x0
    ctx->pc = 0x1a37d8u;
    // NOP
    // 0x1a37dc: 0x0
    ctx->pc = 0x1a37dcu;
    // NOP
}
