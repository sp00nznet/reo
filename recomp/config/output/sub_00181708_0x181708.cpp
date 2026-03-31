#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00181708
// Address: 0x181708 - 0x1817c8
void sub_00181708_0x181708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x181708u;

    // 0x181708: 0x3c030023
    ctx->pc = 0x181708u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x18170c: 0x27bdffd0
    ctx->pc = 0x18170cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181710: 0x8c67fa10
    ctx->pc = 0x181710u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 4294965776)));
    // 0x181714: 0x3c028101
    ctx->pc = 0x181714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181718: 0xffb10008
    ctx->pc = 0x181718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18171c: 0xa0882d
    ctx->pc = 0x18171cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181720: 0xffb20010
    ctx->pc = 0x181720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x181724: 0x80902d
    ctx->pc = 0x181724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181728: 0xffb30018
    ctx->pc = 0x181728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18172c: 0xc0982d
    ctx->pc = 0x18172cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181730: 0xffb00000
    ctx->pc = 0x181730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181734: 0x34428001
    ctx->pc = 0x181734u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x181738: 0x10e0001c
    ctx->pc = 0x181738u;
    {
        const bool branch_taken_0x181738 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x18173Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x181738) {
            ctx->pc = 0x1817ACu;
            goto label_1817ac;
        }
    }
    ctx->pc = 0x181740u;
    // 0x181740: 0xc061e90
    ctx->pc = 0x181740u;
    SET_GPR_U32(ctx, 31, 0x181748u);
    ctx->pc = 0x187A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187A40_0x187a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181748u; }
    }
    if (ctx->pc != 0x181748u) { return; }
    ctx->pc = 0x181748u;
    // 0x181748: 0x3c030028
    ctx->pc = 0x181748u;
    SET_GPR_U32(ctx, 3, ((uint32_t)40 << 16));
    // 0x18174c: 0x14400004
    ctx->pc = 0x18174Cu;
    {
        const bool branch_taken_0x18174c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181750u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939904));
        if (branch_taken_0x18174c) {
            ctx->pc = 0x181760u;
            goto label_181760;
        }
    }
    ctx->pc = 0x181754u;
    // 0x181754: 0x3c028101
    ctx->pc = 0x181754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181758: 0x10000014
    ctx->pc = 0x181758u;
    {
        const bool branch_taken_0x181758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18175Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32770));
        if (branch_taken_0x181758) {
            ctx->pc = 0x1817ACu;
            goto label_1817ac;
        }
    }
    ctx->pc = 0x181760u;
label_181760:
    // 0x181760: 0x8e030004
    ctx->pc = 0x181760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x181764: 0x3c028101
    ctx->pc = 0x181764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181768: 0x14600010
    ctx->pc = 0x181768u;
    {
        const bool branch_taken_0x181768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18176Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x181768) {
            ctx->pc = 0x1817ACu;
            goto label_1817ac;
        }
    }
    ctx->pc = 0x181770u;
    // 0x181770: 0xc042c56
    ctx->pc = 0x181770u;
    SET_GPR_U32(ctx, 31, 0x181778u);
    ctx->pc = 0x181774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181778u; }
    }
    if (ctx->pc != 0x181778u) { return; }
    ctx->pc = 0x181778u;
    // 0x181778: 0x220282d
    ctx->pc = 0x181778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18177c: 0x2c430080
    ctx->pc = 0x18177cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 128));
    // 0x181780: 0x3c028101
    ctx->pc = 0x181780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x181784: 0x2604041c
    ctx->pc = 0x181784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1052));
    // 0x181788: 0x10600008
    ctx->pc = 0x181788u;
    {
        const bool branch_taken_0x181788 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18178Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x181788) {
            ctx->pc = 0x1817ACu;
            goto label_1817ac;
        }
    }
    ctx->pc = 0x181790u;
    // 0x181790: 0x2402000c
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x181794: 0xae120000
    ctx->pc = 0x181794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x181798: 0xc042bf0
    ctx->pc = 0x181798u;
    SET_GPR_U32(ctx, 31, 0x1817A0u);
    ctx->pc = 0x18179Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817A0u; }
    }
    if (ctx->pc != 0x1817A0u) { return; }
    ctx->pc = 0x1817A0u;
    // 0x1817a0: 0xc062228
    ctx->pc = 0x1817A0u;
    SET_GPR_U32(ctx, 31, 0x1817A8u);
    ctx->pc = 0x1817A4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    ctx->pc = 0x1888A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001888A0_0x1888a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1817A8u; }
    }
    if (ctx->pc != 0x1817A8u) { return; }
    ctx->pc = 0x1817A8u;
    // 0x1817a8: 0x102d
    ctx->pc = 0x1817a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1817ac:
    // 0x1817ac: 0xdfb00000
    ctx->pc = 0x1817acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1817b0: 0xdfb10008
    ctx->pc = 0x1817b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1817b4: 0xdfb20010
    ctx->pc = 0x1817b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1817b8: 0xdfb30018
    ctx->pc = 0x1817b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1817bc: 0xdfbf0020
    ctx->pc = 0x1817bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1817c0: 0x3e00008
    ctx->pc = 0x1817C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1817C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181760u: goto label_181760;
            case 0x1817ACu: goto label_1817ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1817C8u;
}
