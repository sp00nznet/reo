#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9500
// Address: 0x1a9500 - 0x1a95a0
void sub_001A9500_0x1a9500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9500u;

    // 0x1a9500: 0x27bdf7d0
    ctx->pc = 0x1a9500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965200));
    // 0x1a9504: 0x80102d
    ctx->pc = 0x1a9504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9508: 0xffbf0020
    ctx->pc = 0x1a9508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a950c: 0x27a40030
    ctx->pc = 0x1a950cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9510: 0x7fb10010
    ctx->pc = 0x1a9510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9514: 0xa0882d
    ctx->pc = 0x1a9514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9518: 0x7fb00000
    ctx->pc = 0x1a9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a951c: 0xc042bf0
    ctx->pc = 0x1A951Cu;
    SET_GPR_U32(ctx, 31, 0x1A9524u);
    ctx->pc = 0x1A9520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9524u; }
    }
    if (ctx->pc != 0x1A9524u) { return; }
    ctx->pc = 0x1A9524u;
label_1a9524:
    // 0x1a9524: 0x27a40030
    ctx->pc = 0x1a9524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a9528: 0xc04a432
    ctx->pc = 0x1A9528u;
    SET_GPR_U32(ctx, 31, 0x1A9530u);
    ctx->pc = 0x1A952Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1290C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001290C8_0x1290c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9530u; }
    }
    if (ctx->pc != 0x1A9530u) { return; }
    ctx->pc = 0x1A9530u;
    // 0x1a9530: 0x40802d
    ctx->pc = 0x1a9530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9534: 0x0
    ctx->pc = 0x1a9534u;
    // NOP
    // 0x1a9538: 0x1040fffa
    ctx->pc = 0x1A9538u;
    {
        const bool branch_taken_0x1a9538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9538) {
            ctx->pc = 0x1A9524u;
            goto label_1a9524;
        }
    }
    ctx->pc = 0x1A9540u;
    // 0x1a9540: 0xc04a702
    ctx->pc = 0x1A9540u;
    SET_GPR_U32(ctx, 31, 0x1A9548u);
    ctx->pc = 0x1A9544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C08_0x129c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9548u; }
    }
    if (ctx->pc != 0x1A9548u) { return; }
    ctx->pc = 0x1A9548u;
    // 0x1a9548: 0x40282d
    ctx->pc = 0x1a9548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a954c: 0x220302d
    ctx->pc = 0x1a954cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9550: 0xc04a5e8
    ctx->pc = 0x1A9550u;
    SET_GPR_U32(ctx, 31, 0x1A9558u);
    ctx->pc = 0x1A9554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1297A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297A0_0x1297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9558u; }
    }
    if (ctx->pc != 0x1A9558u) { return; }
    ctx->pc = 0x1A9558u;
label_1a9558:
    // 0x1a9558: 0xc04a752
    ctx->pc = 0x1A9558u;
    SET_GPR_U32(ctx, 31, 0x1A9560u);
    ctx->pc = 0x1A955Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D48_0x129d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9560u; }
    }
    if (ctx->pc != 0x1A9560u) { return; }
    ctx->pc = 0x1A9560u;
    // 0x1a9560: 0x24030003
    ctx->pc = 0x1a9560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9564: 0x0
    ctx->pc = 0x1a9564u;
    // NOP
    // 0x1a9568: 0x0
    ctx->pc = 0x1a9568u;
    // NOP
    // 0x1a956c: 0x1443fffa
    ctx->pc = 0x1A956Cu;
    {
        const bool branch_taken_0x1a956c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a956c) {
            ctx->pc = 0x1A9558u;
            goto label_1a9558;
        }
    }
    ctx->pc = 0x1A9574u;
    // 0x1a9574: 0xc04a4d4
    ctx->pc = 0x1A9574u;
    SET_GPR_U32(ctx, 31, 0x1A957Cu);
    ctx->pc = 0x1A9578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A957Cu; }
    }
    if (ctx->pc != 0x1A957Cu) { return; }
    ctx->pc = 0x1A957Cu;
    // 0x1a957c: 0xdfbf0020
    ctx->pc = 0x1a957cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9580: 0x24020001
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9584: 0x7bb10010
    ctx->pc = 0x1a9584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9588: 0x7bb00000
    ctx->pc = 0x1a9588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a958c: 0x3e00008
    ctx->pc = 0x1A958Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 2096));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9524u: goto label_1a9524;
            case 0x1A9558u: goto label_1a9558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9594u;
    // 0x1a9594: 0x0
    ctx->pc = 0x1a9594u;
    // NOP
    // 0x1a9598: 0x0
    ctx->pc = 0x1a9598u;
    // NOP
    // 0x1a959c: 0x0
    ctx->pc = 0x1a959cu;
    // NOP
}
