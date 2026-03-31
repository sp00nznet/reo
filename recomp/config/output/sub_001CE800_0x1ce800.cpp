#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001CE800
// Address: 0x1ce800 - 0x1ce8b0
void sub_001CE800_0x1ce800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ce800u;

    // 0x1ce800: 0x27bdffe0
    ctx->pc = 0x1ce800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce804: 0xc0382d
    ctx->pc = 0x1ce804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce808: 0xffbf0010
    ctx->pc = 0x1ce808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce80c: 0x80482d
    ctx->pc = 0x1ce80cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce810: 0xa0402d
    ctx->pc = 0x1ce810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce814: 0xc0739e4
    ctx->pc = 0x1CE814u;
    SET_GPR_U32(ctx, 31, 0x1CE81Cu);
    ctx->pc = 0x1CE818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1CE790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE790_0x1ce790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE81Cu; }
    }
    if (ctx->pc != 0x1CE81Cu) { return; }
    ctx->pc = 0x1CE81Cu;
    // 0x1ce81c: 0x1040000b
    ctx->pc = 0x1CE81Cu;
    {
        const bool branch_taken_0x1ce81c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE820u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ce81c) {
            ctx->pc = 0x1CE84Cu;
            goto label_1ce84c;
        }
    }
    ctx->pc = 0x1CE824u;
    // 0x1ce824: 0x9044000f
    ctx->pc = 0x1ce824u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x1ce828: 0xe01827
    ctx->pc = 0x1ce828u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x1ce82c: 0x831824
    ctx->pc = 0x1ce82cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ce830: 0xe31825
    ctx->pc = 0x1ce830u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1ce834: 0xa043000f
    ctx->pc = 0x1ce834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce838: 0x90430000
    ctx->pc = 0x1ce838u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce83c: 0x24630001
    ctx->pc = 0x1ce83cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ce840: 0xa0430000
    ctx->pc = 0x1ce840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce844: 0x10000013
    ctx->pc = 0x1CE844u;
    {
        const bool branch_taken_0x1ce844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE848u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
        if (branch_taken_0x1ce844) {
            ctx->pc = 0x1CE894u;
            goto label_1ce894;
        }
    }
    ctx->pc = 0x1CE84Cu;
label_1ce84c:
    // 0x1ce84c: 0xc0739c0
    ctx->pc = 0x1CE84Cu;
    SET_GPR_U32(ctx, 31, 0x1CE854u);
    ctx->pc = 0x1CE700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE700_0x1ce700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE854u; }
    }
    if (ctx->pc != 0x1CE854u) { return; }
    ctx->pc = 0x1CE854u;
    // 0x1ce854: 0x40802d
    ctx->pc = 0x1ce854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce858: 0x16000003
    ctx->pc = 0x1CE858u;
    {
        const bool branch_taken_0x1ce858 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce858) {
            ctx->pc = 0x1CE868u;
            goto label_1ce868;
        }
    }
    ctx->pc = 0x1CE860u;
    // 0x1ce860: 0x1000000c
    ctx->pc = 0x1CE860u;
    {
        const bool branch_taken_0x1ce860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE864u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1ce860) {
            ctx->pc = 0x1CE894u;
            goto label_1ce894;
        }
    }
    ctx->pc = 0x1CE868u;
label_1ce868:
    // 0x1ce868: 0x3102ffff
    ctx->pc = 0x1ce868u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 8), 65535));
    // 0x1ce86c: 0xa6080012
    ctx->pc = 0x1ce86cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 8));
    // 0x1ce870: 0x30457fff
    ctx->pc = 0x1ce870u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 32767));
    // 0x1ce874: 0x120202d
    ctx->pc = 0x1ce874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce878: 0x24020001
    ctx->pc = 0x1ce878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce87c: 0x26060002
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 2));
    // 0x1ce880: 0xa2020000
    ctx->pc = 0x1ce880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce884: 0xa207000f
    ctx->pc = 0x1ce884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ce888: 0xc073aac
    ctx->pc = 0x1CE888u;
    SET_GPR_U32(ctx, 31, 0x1CE890u);
    ctx->pc = 0x1CE88Cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 9));
    ctx->pc = 0x1CEAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001CEAB0_0x1ceab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE890u; }
    }
    if (ctx->pc != 0x1CE890u) { return; }
    ctx->pc = 0x1CE890u;
    // 0x1ce890: 0x9202000e
    ctx->pc = 0x1ce890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1ce894:
    // 0x1ce894: 0xdfbf0010
    ctx->pc = 0x1ce894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce898: 0x7bb00000
    ctx->pc = 0x1ce898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce89c: 0x3e00008
    ctx->pc = 0x1CE89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE868u: goto label_1ce868;
            case 0x1CE894u: goto label_1ce894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE8A4u;
    // 0x1ce8a4: 0x0
    ctx->pc = 0x1ce8a4u;
    // NOP
    // 0x1ce8a8: 0x0
    ctx->pc = 0x1ce8a8u;
    // NOP
    // 0x1ce8ac: 0x0
    ctx->pc = 0x1ce8acu;
    // NOP
}
