#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00163818
// Address: 0x163818 - 0x1638e8
void sub_00163818_0x163818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x163818u;

    // 0x163818: 0x27bdfff0
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16381c: 0xffbf0000
    ctx->pc = 0x16381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163820: 0xdfbf0000
    ctx->pc = 0x163820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163824: 0x805062a
    ctx->pc = 0x163824u;
    ctx->pc = 0x163828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1418A8u;
    sub_001418A8_0x1418a8(rdram, ctx, runtime); return;
    ctx->pc = 0x16382Cu;
    // 0x16382c: 0x0
    ctx->pc = 0x16382cu;
    // NOP
    // 0x163830: 0x27bdfff0
    ctx->pc = 0x163830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163834: 0xffbf0000
    ctx->pc = 0x163834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163838: 0xc05d4b8
    ctx->pc = 0x163838u;
    SET_GPR_U32(ctx, 31, 0x163840u);
    ctx->pc = 0x1752E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001752E0_0x1752e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163840u; }
    }
    if (ctx->pc != 0x163840u) { return; }
    ctx->pc = 0x163840u;
    // 0x163840: 0x38420001
    ctx->pc = 0x163840u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x163844: 0xdfbf0000
    ctx->pc = 0x163844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163848: 0x2102b
    ctx->pc = 0x163848u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16384c: 0x3e00008
    ctx->pc = 0x16384Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163878u: goto label_163878;
            case 0x163880u: goto label_163880;
            case 0x1638A0u: goto label_1638a0;
            case 0x1638D4u: goto label_1638d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163854u;
    // 0x163854: 0x0
    ctx->pc = 0x163854u;
    // NOP
    // 0x163858: 0x27bdfff0
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16385c: 0x24020001
    ctx->pc = 0x16385cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163860: 0xffbf0000
    ctx->pc = 0x163860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163864: 0x8c830060
    ctx->pc = 0x163864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x163868: 0x14620003
    ctx->pc = 0x163868u;
    {
        const bool branch_taken_0x163868 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16386Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x163868) {
            ctx->pc = 0x163878u;
            goto label_163878;
        }
    }
    ctx->pc = 0x163870u;
    // 0x163870: 0x8058e20
    ctx->pc = 0x163870u;
    ctx->pc = 0x163874u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x163880u;
    goto label_163880;
    ctx->pc = 0x163878u;
label_163878:
    // 0x163878: 0x3e00008
    ctx->pc = 0x163878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16387Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163878u: goto label_163878;
            case 0x163880u: goto label_163880;
            case 0x1638A0u: goto label_1638a0;
            case 0x1638D4u: goto label_1638d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163880u;
label_163880:
    // 0x163880: 0x27bdffe0
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163884: 0xffbf0010
    ctx->pc = 0x163884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163888: 0xffb00000
    ctx->pc = 0x163888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16388c: 0x80802d
    ctx->pc = 0x16388cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163890: 0xffb10008
    ctx->pc = 0x163890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163894: 0x882d
    ctx->pc = 0x163894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163898: 0x2a22000a
    ctx->pc = 0x163898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 10));
    // 0x16389c: 0x0
    ctx->pc = 0x16389cu;
    // NOP
label_1638a0:
    // 0x1638a0: 0x1040000c
    ctx->pc = 0x1638A0u;
    {
        const bool branch_taken_0x1638a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1638A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x1638a0) {
            ctx->pc = 0x1638D4u;
            goto label_1638d4;
        }
    }
    ctx->pc = 0x1638A8u;
    // 0x1638a8: 0x24050001
    ctx->pc = 0x1638a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1638ac: 0xc0590ca
    ctx->pc = 0x1638ACu;
    SET_GPR_U32(ctx, 31, 0x1638B4u);
    ctx->pc = 0x1638B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164328_0x164328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638B4u; }
    }
    if (ctx->pc != 0x1638B4u) { return; }
    ctx->pc = 0x1638B4u;
    // 0x1638b4: 0xc04b010
    ctx->pc = 0x1638B4u;
    SET_GPR_U32(ctx, 31, 0x1638BCu);
    ctx->pc = 0x12C040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C040_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638BCu; }
    }
    if (ctx->pc != 0x1638BCu) { return; }
    ctx->pc = 0x1638BCu;
    // 0x1638bc: 0x200202d
    ctx->pc = 0x1638bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638c0: 0xc0590ca
    ctx->pc = 0x1638C0u;
    SET_GPR_U32(ctx, 31, 0x1638C8u);
    ctx->pc = 0x1638C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00164328_0x164328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638C8u; }
    }
    if (ctx->pc != 0x1638C8u) { return; }
    ctx->pc = 0x1638C8u;
    // 0x1638c8: 0x8e020060
    ctx->pc = 0x1638c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1638cc: 0x1440fff4
    ctx->pc = 0x1638CCu;
    {
        const bool branch_taken_0x1638cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1638D0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 10));
        if (branch_taken_0x1638cc) {
            ctx->pc = 0x1638A0u;
            goto label_1638a0;
        }
    }
    ctx->pc = 0x1638D4u;
label_1638d4:
    // 0x1638d4: 0xdfb00000
    ctx->pc = 0x1638d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1638d8: 0xdfb10008
    ctx->pc = 0x1638d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1638dc: 0xdfbf0010
    ctx->pc = 0x1638dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1638e0: 0x3e00008
    ctx->pc = 0x1638E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1638E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163878u: goto label_163878;
            case 0x163880u: goto label_163880;
            case 0x1638A0u: goto label_1638a0;
            case 0x1638D4u: goto label_1638d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1638E8u;
}
