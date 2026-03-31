#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00172828
// Address: 0x172828 - 0x1728d8
void sub_00172828_0x172828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x172828u;

    // 0x172828: 0x27bdffe0
    ctx->pc = 0x172828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17282c: 0x24050005
    ctx->pc = 0x17282cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x172830: 0xffb00000
    ctx->pc = 0x172830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172834: 0x80802d
    ctx->pc = 0x172834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172838: 0xffb20010
    ctx->pc = 0x172838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17283c: 0xffb10008
    ctx->pc = 0x17283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172840: 0xffbf0018
    ctx->pc = 0x172840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x172844: 0xc05d58a
    ctx->pc = 0x172844u;
    SET_GPR_U32(ctx, 31, 0x17284Cu);
    ctx->pc = 0x172848u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17284Cu; }
    }
    if (ctx->pc != 0x17284Cu) { return; }
    ctx->pc = 0x17284Cu;
    // 0x17284c: 0x200202d
    ctx->pc = 0x17284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172850: 0x10400009
    ctx->pc = 0x172850u;
    {
        const bool branch_taken_0x172850 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x172854u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x172850) {
            ctx->pc = 0x172878u;
            goto label_172878;
        }
    }
    ctx->pc = 0x172858u;
    // 0x172858: 0xc05df12
    ctx->pc = 0x172858u;
    SET_GPR_U32(ctx, 31, 0x172860u);
    ctx->pc = 0x177C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C48_0x177c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172860u; }
    }
    if (ctx->pc != 0x172860u) { return; }
    ctx->pc = 0x172860u;
    // 0x172860: 0x200202d
    ctx->pc = 0x172860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172864: 0x24050006
    ctx->pc = 0x172864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x172868: 0xc05df1e
    ctx->pc = 0x172868u;
    SET_GPR_U32(ctx, 31, 0x172870u);
    ctx->pc = 0x17286Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C78_0x177c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172870u; }
    }
    if (ctx->pc != 0x172870u) { return; }
    ctx->pc = 0x172870u;
    // 0x172870: 0x2429025
    ctx->pc = 0x172870u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x172874: 0x200202d
    ctx->pc = 0x172874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172878:
    // 0x172878: 0xc05d58a
    ctx->pc = 0x172878u;
    SET_GPR_U32(ctx, 31, 0x172880u);
    ctx->pc = 0x17287Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172880u; }
    }
    if (ctx->pc != 0x172880u) { return; }
    ctx->pc = 0x172880u;
    // 0x172880: 0x200202d
    ctx->pc = 0x172880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172884: 0x24050007
    ctx->pc = 0x172884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x172888: 0x10400008
    ctx->pc = 0x172888u;
    {
        const bool branch_taken_0x172888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17288Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x172888) {
            ctx->pc = 0x1728ACu;
            goto label_1728ac;
        }
    }
    ctx->pc = 0x172890u;
    // 0x172890: 0xc05df12
    ctx->pc = 0x172890u;
    SET_GPR_U32(ctx, 31, 0x172898u);
    ctx->pc = 0x177C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C48_0x177c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172898u; }
    }
    if (ctx->pc != 0x172898u) { return; }
    ctx->pc = 0x172898u;
    // 0x172898: 0x200202d
    ctx->pc = 0x172898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17289c: 0x24050007
    ctx->pc = 0x17289cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1728a0: 0xc05df1e
    ctx->pc = 0x1728A0u;
    SET_GPR_U32(ctx, 31, 0x1728A8u);
    ctx->pc = 0x1728A4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177C78_0x177c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728A8u; }
    }
    if (ctx->pc != 0x1728A8u) { return; }
    ctx->pc = 0x1728A8u;
    // 0x1728a8: 0x2228825
    ctx->pc = 0x1728a8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1728ac:
    // 0x1728ac: 0x12400004
    ctx->pc = 0x1728ACu;
    {
        const bool branch_taken_0x1728ac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1728B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1728ac) {
            ctx->pc = 0x1728C0u;
            goto label_1728c0;
        }
    }
    ctx->pc = 0x1728B4u;
    // 0x1728b4: 0x16200002
    ctx->pc = 0x1728B4u;
    {
        const bool branch_taken_0x1728b4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1728B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1728b4) {
            ctx->pc = 0x1728C0u;
            goto label_1728c0;
        }
    }
    ctx->pc = 0x1728BCu;
    // 0x1728bc: 0x102d
    ctx->pc = 0x1728bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1728c0:
    // 0x1728c0: 0xdfb00000
    ctx->pc = 0x1728c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1728c4: 0xdfb10008
    ctx->pc = 0x1728c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1728c8: 0xdfb20010
    ctx->pc = 0x1728c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1728cc: 0xdfbf0018
    ctx->pc = 0x1728ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1728d0: 0x3e00008
    ctx->pc = 0x1728D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1728D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172878u: goto label_172878;
            case 0x1728ACu: goto label_1728ac;
            case 0x1728C0u: goto label_1728c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1728D8u;
}
