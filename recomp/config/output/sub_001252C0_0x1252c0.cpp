#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001252C0
// Address: 0x1252c0 - 0x125370
void sub_001252C0_0x1252c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1252c0u;

    // 0x1252c0: 0x3e00008
    ctx->pc = 0x1252C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1252C8u;
    // 0x1252c8: 0x3e00008
    ctx->pc = 0x1252C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252CCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1252D0u;
    // 0x1252d0: 0x27bdfff0
    ctx->pc = 0x1252d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1252d4: 0x24820048
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 72));
    // 0x1252d8: 0xffbf0008
    ctx->pc = 0x1252d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1252dc: 0xa0302d
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252e0: 0xffb00000
    ctx->pc = 0x1252e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1252e4: 0x8c470020
    ctx->pc = 0x1252e4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1252e8: 0x8c900008
    ctx->pc = 0x1252e8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1252ec: 0x8c430014
    ctx->pc = 0x1252ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1252f0: 0x73840
    ctx->pc = 0x1252f0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x1252f4: 0x8c450000
    ctx->pc = 0x1252f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1252f8: 0x200202d
    ctx->pc = 0x1252f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252fc: 0xc04d3e8
    ctx->pc = 0x1252FCu;
    SET_GPR_U32(ctx, 31, 0x125304u);
    ctx->pc = 0x125300u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->pc = 0x134FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FA0_0x134fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125304u; }
    }
    if (ctx->pc != 0x125304u) { return; }
    ctx->pc = 0x125304u;
    // 0x125304: 0x200202d
    ctx->pc = 0x125304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125308: 0xdfbf0008
    ctx->pc = 0x125308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12530c: 0xdfb00000
    ctx->pc = 0x12530cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125310: 0x804d400
    ctx->pc = 0x125310u;
    ctx->pc = 0x125314u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135000u;
    entry_135000_0x135020(rdram, ctx, runtime); return;
    ctx->pc = 0x125318u;
    // 0x125318: 0x27bdfff0
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12531c: 0x24830048
    ctx->pc = 0x12531cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 72));
    // 0x125320: 0xffbf0008
    ctx->pc = 0x125320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125324: 0x52840
    ctx->pc = 0x125324u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x125328: 0xffb00000
    ctx->pc = 0x125328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12532c: 0xa0302d
    ctx->pc = 0x12532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125330: 0x8c620020
    ctx->pc = 0x125330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x125334: 0x8c670014
    ctx->pc = 0x125334u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x125338: 0x8c68001c
    ctx->pc = 0x125338u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x12533c: 0x21040
    ctx->pc = 0x12533cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x125340: 0x8c900008
    ctx->pc = 0x125340u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125344: 0xe23821
    ctx->pc = 0x125344u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x125348: 0x8c650000
    ctx->pc = 0x125348u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12534c: 0x84040
    ctx->pc = 0x12534cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x125350: 0x200202d
    ctx->pc = 0x125350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125354: 0xc04d3f4
    ctx->pc = 0x125354u;
    SET_GPR_U32(ctx, 31, 0x12535Cu);
    ctx->pc = 0x125358u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->pc = 0x134FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00134FD0_0x134fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12535Cu; }
    }
    if (ctx->pc != 0x12535Cu) { return; }
    ctx->pc = 0x12535Cu;
    // 0x12535c: 0x200202d
    ctx->pc = 0x12535cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125360: 0xdfbf0008
    ctx->pc = 0x125360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125364: 0xdfb00000
    ctx->pc = 0x125364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125368: 0x804d400
    ctx->pc = 0x125368u;
    ctx->pc = 0x12536Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x135000u;
    entry_135000_0x135020(rdram, ctx, runtime); return;
    ctx->pc = 0x125370u;
}
