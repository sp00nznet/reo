#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_12d500
// Address: 0x12d500 - 0x12d590
void entry_12d500_0x12d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12d500u;

    // 0x12d500: 0x27bdffd0
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12d504: 0xffb00000
    ctx->pc = 0x12d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d508: 0xffb20010
    ctx->pc = 0x12d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d50c: 0x80902d
    ctx->pc = 0x12d50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d510: 0xffb30018
    ctx->pc = 0x12d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12d514: 0xffbf0020
    ctx->pc = 0x12d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12d518: 0xffb10008
    ctx->pc = 0x12d518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d51c: 0x8e510004
    ctx->pc = 0x12d51cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12d520: 0xc0493be
    ctx->pc = 0x12D520u;
    SET_GPR_U32(ctx, 31, 0x12D528u);
    ctx->pc = 0x12D524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00124EF8_0x124ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D528u; }
    }
    if (ctx->pc != 0x12D528u) { return; }
    ctx->pc = 0x12D528u;
    // 0x12d528: 0x220202d
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d52c: 0xc0494ae
    ctx->pc = 0x12D52Cu;
    SET_GPR_U32(ctx, 31, 0x12D534u);
    ctx->pc = 0x12D530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1252B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001252B8_0x1252b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D534u; }
    }
    if (ctx->pc != 0x12D534u) { return; }
    ctx->pc = 0x12D534u;
    // 0x12d534: 0x220202d
    ctx->pc = 0x12d534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d538: 0xc0494b0
    ctx->pc = 0x12D538u;
    SET_GPR_U32(ctx, 31, 0x12D540u);
    ctx->pc = 0x12D53Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1252C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001252C0_0x1252c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D540u; }
    }
    if (ctx->pc != 0x12D540u) { return; }
    ctx->pc = 0x12D540u;
    // 0x12d540: 0x8e440034
    ctx->pc = 0x12d540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x12d544: 0x8e46002c
    ctx->pc = 0x12d544u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x12d548: 0x2048023
    ctx->pc = 0x12d548u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x12d54c: 0x8e450030
    ctx->pc = 0x12d54cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x12d550: 0x50182a
    ctx->pc = 0x12d550u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x12d554: 0xdfb10008
    ctx->pc = 0x12d554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d558: 0x43800b
    ctx->pc = 0x12d558u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x12d55c: 0xb32821
    ctx->pc = 0x12d55cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x12d560: 0x902021
    ctx->pc = 0x12d560u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x12d564: 0xd03021
    ctx->pc = 0x12d564u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x12d568: 0xae440034
    ctx->pc = 0x12d568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
    // 0x12d56c: 0xae46002c
    ctx->pc = 0x12d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
    // 0x12d570: 0xae450030
    ctx->pc = 0x12d570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
    // 0x12d574: 0xdfb00000
    ctx->pc = 0x12d574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d578: 0xdfb20010
    ctx->pc = 0x12d578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d57c: 0xdfb30018
    ctx->pc = 0x12d57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12d580: 0xdfbf0020
    ctx->pc = 0x12d580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d584: 0x3e00008
    ctx->pc = 0x12D584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D588u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D58Cu;
    // 0x12d58c: 0x0
    ctx->pc = 0x12d58cu;
    // NOP
}
