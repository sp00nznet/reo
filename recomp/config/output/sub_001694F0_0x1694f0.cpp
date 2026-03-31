#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001694F0
// Address: 0x1694f0 - 0x169580
void sub_001694F0_0x1694f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1694f0u;

    // 0x1694f0: 0x27bdffe0
    ctx->pc = 0x1694f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1694f4: 0x3c020018
    ctx->pc = 0x1694f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)24 << 16));
    // 0x1694f8: 0xffb10008
    ctx->pc = 0x1694f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1694fc: 0xa0882d
    ctx->pc = 0x1694fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169500: 0x24459810
    ctx->pc = 0x169500u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294940688));
    // 0x169504: 0xffb00000
    ctx->pc = 0x169504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169508: 0xffbf0010
    ctx->pc = 0x169508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16950c: 0xc05a638
    ctx->pc = 0x16950Cu;
    SET_GPR_U32(ctx, 31, 0x169514u);
    ctx->pc = 0x169510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169514u; }
    }
    if (ctx->pc != 0x169514u) { return; }
    ctx->pc = 0x169514u;
    // 0x169514: 0x3c050018
    ctx->pc = 0x169514u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x169518: 0xae220010
    ctx->pc = 0x169518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x16951c: 0x24a59858
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940760));
    // 0x169520: 0xc05a638
    ctx->pc = 0x169520u;
    SET_GPR_U32(ctx, 31, 0x169528u);
    ctx->pc = 0x169524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169528u; }
    }
    if (ctx->pc != 0x169528u) { return; }
    ctx->pc = 0x169528u;
    // 0x169528: 0x3c050018
    ctx->pc = 0x169528u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x16952c: 0xae220014
    ctx->pc = 0x16952cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x169530: 0x24a598a0
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940832));
    // 0x169534: 0xc05a638
    ctx->pc = 0x169534u;
    SET_GPR_U32(ctx, 31, 0x16953Cu);
    ctx->pc = 0x169538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16953Cu; }
    }
    if (ctx->pc != 0x16953Cu) { return; }
    ctx->pc = 0x16953Cu;
    // 0x16953c: 0x3c050018
    ctx->pc = 0x16953cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x169540: 0x2403ffff
    ctx->pc = 0x169540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169544: 0x200202d
    ctx->pc = 0x169544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169548: 0x24a598e8
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940904));
    // 0x16954c: 0x14430003
    ctx->pc = 0x16954Cu;
    {
        const bool branch_taken_0x16954c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x169550u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x16954c) {
            ctx->pc = 0x16955Cu;
            goto label_16955c;
        }
    }
    ctx->pc = 0x169554u;
    // 0x169554: 0x24020002
    ctx->pc = 0x169554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x169558: 0xae220018
    ctx->pc = 0x169558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_16955c:
    // 0x16955c: 0xc05a638
    ctx->pc = 0x16955Cu;
    SET_GPR_U32(ctx, 31, 0x169564u);
    ctx->pc = 0x1698E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001698E0_0x1698e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169564u; }
    }
    if (ctx->pc != 0x169564u) { return; }
    ctx->pc = 0x169564u;
    // 0x169564: 0xae22001c
    ctx->pc = 0x169564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x169568: 0xdfb00000
    ctx->pc = 0x169568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16956c: 0xdfb10008
    ctx->pc = 0x16956cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169570: 0xdfbf0010
    ctx->pc = 0x169570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169574: 0x3e00008
    ctx->pc = 0x169574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16955Cu: goto label_16955c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16957Cu;
    // 0x16957c: 0x0
    ctx->pc = 0x16957cu;
    // NOP
}
