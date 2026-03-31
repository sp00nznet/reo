#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A3880
// Address: 0x1a3880 - 0x1a3930
void sub_001A3880_0x1a3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a3880u;

    // 0x1a3880: 0x27bdfff0
    ctx->pc = 0x1a3880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3884: 0xa0502d
    ctx->pc = 0x1a3884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3888: 0xffbf0000
    ctx->pc = 0x1a3888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a388c: 0xc0482d
    ctx->pc = 0x1a388cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3890: 0x80582d
    ctx->pc = 0x1a3890u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3894: 0xc068da8
    ctx->pc = 0x1A3894u;
    SET_GPR_U32(ctx, 31, 0x1A389Cu);
    ctx->pc = 0x1A3898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A36A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A36A0_0x1a36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A389Cu; }
    }
    if (ctx->pc != 0x1A389Cu) { return; }
    ctx->pc = 0x1A389Cu;
    // 0x1a389c: 0x4a082a
    ctx->pc = 0x1a389cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 10)));
    // 0x1a38a0: 0x10200003
    ctx->pc = 0x1A38A0u;
    {
        const bool branch_taken_0x1a38a0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A38A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a38a0) {
            ctx->pc = 0x1A38B0u;
            goto label_1a38b0;
        }
    }
    ctx->pc = 0x1A38A8u;
    // 0x1a38a8: 0x1000001d
    ctx->pc = 0x1A38A8u;
    {
        const bool branch_taken_0x1a38a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A38ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a38a8) {
            ctx->pc = 0x1A3920u;
            goto label_1a3920;
        }
    }
    ctx->pc = 0x1A38B0u;
label_1a38b0:
    // 0x1a38b0: 0x24050005
    ctx->pc = 0x1a38b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a38b4: 0xc068d7c
    ctx->pc = 0x1A38B4u;
    SET_GPR_U32(ctx, 31, 0x1A38BCu);
    ctx->pc = 0x1A38B8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38BCu; }
    }
    if (ctx->pc != 0x1A38BCu) { return; }
    ctx->pc = 0x1A38BCu;
    // 0x1a38bc: 0x14400003
    ctx->pc = 0x1A38BCu;
    {
        const bool branch_taken_0x1a38bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A38C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
        if (branch_taken_0x1a38bc) {
            ctx->pc = 0x1A38CCu;
            goto label_1a38cc;
        }
    }
    ctx->pc = 0x1A38C4u;
    // 0x1a38c4: 0x10000016
    ctx->pc = 0x1A38C4u;
    {
        const bool branch_taken_0x1a38c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A38C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a38c4) {
            ctx->pc = 0x1A3920u;
            goto label_1a3920;
        }
    }
    ctx->pc = 0x1A38CCu;
label_1a38cc:
    // 0x1a38cc: 0x10000006
    ctx->pc = 0x1A38CCu;
    {
        const bool branch_taken_0x1a38cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A38D0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a38cc) {
            ctx->pc = 0x1A38E8u;
            goto label_1a38e8;
        }
    }
    ctx->pc = 0x1A38D4u;
label_1a38d4:
    // 0x1a38d4: 0x8ca30004
    ctx->pc = 0x1a38d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a38d8: 0x24840001
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a38dc: 0x8ca20008
    ctx->pc = 0x1a38dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a38e0: 0x1034021
    ctx->pc = 0x1a38e0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a38e4: 0xa22821
    ctx->pc = 0x1a38e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a38e8:
    // 0x1a38e8: 0x8a102a
    ctx->pc = 0x1a38e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 10)));
    // 0x1a38ec: 0x1440fff9
    ctx->pc = 0x1A38ECu;
    {
        const bool branch_taken_0x1a38ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a38ec) {
            ctx->pc = 0x1A38D4u;
            goto label_1a38d4;
        }
    }
    ctx->pc = 0x1A38F4u;
    // 0x1a38f4: 0x160202d
    ctx->pc = 0x1a38f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38f8: 0x3c050006
    ctx->pc = 0x1a38f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)6 << 16));
    // 0x1a38fc: 0x302d
    ctx->pc = 0x1a38fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3900: 0xc068d7c
    ctx->pc = 0x1A3900u;
    SET_GPR_U32(ctx, 31, 0x1A3908u);
    ctx->pc = 0x1A3904u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    ctx->pc = 0x1A35F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A35F0_0x1a35f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3908u; }
    }
    if (ctx->pc != 0x1A3908u) { return; }
    ctx->pc = 0x1A3908u;
    // 0x1a3908: 0x14400003
    ctx->pc = 0x1A3908u;
    {
        const bool branch_taken_0x1a3908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A390Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
        if (branch_taken_0x1a3908) {
            ctx->pc = 0x1A3918u;
            goto label_1a3918;
        }
    }
    ctx->pc = 0x1A3910u;
    // 0x1a3910: 0x10000003
    ctx->pc = 0x1A3910u;
    {
        const bool branch_taken_0x1a3910 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3914u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a3910) {
            ctx->pc = 0x1A3920u;
            goto label_1a3920;
        }
    }
    ctx->pc = 0x1A3918u;
label_1a3918:
    // 0x1a3918: 0x621021
    ctx->pc = 0x1a3918u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a391c: 0x8c42000c
    ctx->pc = 0x1a391cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a3920:
    // 0x1a3920: 0xdfbf0000
    ctx->pc = 0x1a3920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3924: 0x3e00008
    ctx->pc = 0x1A3924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3928u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A38B0u: goto label_1a38b0;
            case 0x1A38CCu: goto label_1a38cc;
            case 0x1A38D4u: goto label_1a38d4;
            case 0x1A38E8u: goto label_1a38e8;
            case 0x1A3918u: goto label_1a3918;
            case 0x1A3920u: goto label_1a3920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A392Cu;
    // 0x1a392c: 0x0
    ctx->pc = 0x1a392cu;
    // NOP
}
