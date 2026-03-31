#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017D828
// Address: 0x17d828 - 0x17d968
void sub_0017D828_0x17d828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17d828u;

    // 0x17d828: 0x27bdfff0
    ctx->pc = 0x17d828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d82c: 0x24820008
    ctx->pc = 0x17d82cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 8));
    // 0x17d830: 0xffbf0000
    ctx->pc = 0x17d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d834: 0x24030001
    ctx->pc = 0x17d834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d838: 0xac460008
    ctx->pc = 0x17d838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x17d83c: 0xdfbf0000
    ctx->pc = 0x17d83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d840: 0xac430000
    ctx->pc = 0x17d840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17d844: 0xac450004
    ctx->pc = 0x17d844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x17d848: 0x805f614
    ctx->pc = 0x17D848u;
    ctx->pc = 0x17D84Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D850u;
    goto label_17d850;
    ctx->pc = 0x17D850u;
label_17d850:
    // 0x17d850: 0x27bdffb0
    ctx->pc = 0x17d850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17d854: 0x80102d
    ctx->pc = 0x17d854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d858: 0xffb30038
    ctx->pc = 0x17d858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x17d85c: 0x24530018
    ctx->pc = 0x17d85cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 24));
    // 0x17d860: 0xffb40040
    ctx->pc = 0x17d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17d864: 0x24540028
    ctx->pc = 0x17d864u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 40));
    // 0x17d868: 0xffb00020
    ctx->pc = 0x17d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17d86c: 0x24430008
    ctx->pc = 0x17d86cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x17d870: 0xffb10028
    ctx->pc = 0x17d870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17d874: 0xffb20030
    ctx->pc = 0x17d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17d878: 0xffbf0048
    ctx->pc = 0x17d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x17d87c: 0x8c680004
    ctx->pc = 0x17d87cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17d880: 0x15000009
    ctx->pc = 0x17D880u;
    {
        const bool branch_taken_0x17d880 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D884u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d880) {
            ctx->pc = 0x17D8A8u;
            goto label_17d8a8;
        }
    }
    ctx->pc = 0x17D888u;
    // 0x17d888: 0x24020001
    ctx->pc = 0x17d888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d88c: 0xae600008
    ctx->pc = 0x17d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x17d890: 0xae620000
    ctx->pc = 0x17d890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x17d894: 0xae600004
    ctx->pc = 0x17d894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x17d898: 0xae820000
    ctx->pc = 0x17d898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x17d89c: 0xae800008
    ctx->pc = 0x17d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x17d8a0: 0x1000001d
    ctx->pc = 0x17D8A0u;
    {
        const bool branch_taken_0x17d8a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D8A4u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17d8a0) {
            ctx->pc = 0x17D918u;
            goto label_17d918;
        }
    }
    ctx->pc = 0x17D8A8u;
label_17d8a8:
    // 0x17d8a8: 0x3c100024
    ctx->pc = 0x17d8a8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x17d8ac: 0x27b20010
    ctx->pc = 0x17d8acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17d8b0: 0x8c620008
    ctx->pc = 0x17d8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x17d8b4: 0x26101450
    ctx->pc = 0x17d8b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 5200));
    // 0x17d8b8: 0x3c050024
    ctx->pc = 0x17d8b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17d8bc: 0x200302d
    ctx->pc = 0x17d8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8c0: 0x24a51448
    ctx->pc = 0x17d8c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5192));
    // 0x17d8c4: 0x240382d
    ctx->pc = 0x17d8c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8c8: 0xafa80000
    ctx->pc = 0x17d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x17d8cc: 0x24110001
    ctx->pc = 0x17d8ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d8d0: 0xc050288
    ctx->pc = 0x17D8D0u;
    SET_GPR_U32(ctx, 31, 0x17D8D8u);
    ctx->pc = 0x17D8D4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x140A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A20_0x140a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D8D8u; }
    }
    if (ctx->pc != 0x17D8D8u) { return; }
    ctx->pc = 0x17D8D8u;
    // 0x17d8d8: 0x8fa30010
    ctx->pc = 0x17d8d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d8dc: 0x3c050024
    ctx->pc = 0x17d8dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17d8e0: 0x8fa20014
    ctx->pc = 0x17d8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x17d8e4: 0x24a51458
    ctx->pc = 0x17d8e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5208));
    // 0x17d8e8: 0xae630004
    ctx->pc = 0x17d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x17d8ec: 0x200302d
    ctx->pc = 0x17d8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8f0: 0xae620008
    ctx->pc = 0x17d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x17d8f4: 0x240382d
    ctx->pc = 0x17d8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d8f8: 0xae710000
    ctx->pc = 0x17d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x17d8fc: 0xc050288
    ctx->pc = 0x17D8FCu;
    SET_GPR_U32(ctx, 31, 0x17D904u);
    ctx->pc = 0x17D900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x140A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00140A20_0x140a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D904u; }
    }
    if (ctx->pc != 0x17D904u) { return; }
    ctx->pc = 0x17D904u;
    // 0x17d904: 0xae910000
    ctx->pc = 0x17d904u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x17d908: 0x8fa20010
    ctx->pc = 0x17d908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d90c: 0x8fa30014
    ctx->pc = 0x17d90cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x17d910: 0xae820004
    ctx->pc = 0x17d910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x17d914: 0xae830008
    ctx->pc = 0x17d914u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_17d918:
    // 0x17d918: 0xdfb00020
    ctx->pc = 0x17d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d91c: 0xdfb10028
    ctx->pc = 0x17d91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d920: 0xdfb20030
    ctx->pc = 0x17d920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d924: 0xdfb30038
    ctx->pc = 0x17d924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17d928: 0xdfb40040
    ctx->pc = 0x17d928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d92c: 0xdfbf0048
    ctx->pc = 0x17d92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17d930: 0x3e00008
    ctx->pc = 0x17D930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D850u: goto label_17d850;
            case 0x17D8A8u: goto label_17d8a8;
            case 0x17D918u: goto label_17d918;
            case 0x17D958u: goto label_17d958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D938u;
    // 0x17d938: 0x24840008
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x17d93c: 0x24030001
    ctx->pc = 0x17d93cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d940: 0x8c820000
    ctx->pc = 0x17d940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d944: 0x50430004
    ctx->pc = 0x17D944u;
    {
        const bool branch_taken_0x17d944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x17d944) {
            ctx->pc = 0x17D948u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x17D958u;
            goto label_17d958;
        }
    }
    ctx->pc = 0x17D94Cu;
    // 0x17d94c: 0xaca00000
    ctx->pc = 0x17d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x17d950: 0x3e00008
    ctx->pc = 0x17D950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D954u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D850u: goto label_17d850;
            case 0x17D8A8u: goto label_17d8a8;
            case 0x17D918u: goto label_17d918;
            case 0x17D958u: goto label_17d958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D958u;
label_17d958:
    // 0x17d958: 0x8c830004
    ctx->pc = 0x17d958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d95c: 0xacc20000
    ctx->pc = 0x17d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x17d960: 0x3e00008
    ctx->pc = 0x17D960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D964u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D850u: goto label_17d850;
            case 0x17D8A8u: goto label_17d8a8;
            case 0x17D918u: goto label_17d918;
            case 0x17D958u: goto label_17d958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D968u;
}
