#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018D900
// Address: 0x18d900 - 0x18d9d0
void sub_0018D900_0x18d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18d900u;

    // 0x18d900: 0x27bdf7c0
    ctx->pc = 0x18d900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965184));
    // 0x18d904: 0xffbf0030
    ctx->pc = 0x18d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d908: 0x7fb20020
    ctx->pc = 0x18d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d90c: 0x7fb10010
    ctx->pc = 0x18d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d910: 0xa0902d
    ctx->pc = 0x18d910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d914: 0x7fb00000
    ctx->pc = 0x18d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d918: 0x3c050024
    ctx->pc = 0x18d918u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18d91c: 0x80802d
    ctx->pc = 0x18d91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d920: 0xc0882d
    ctx->pc = 0x18d920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d924: 0x27a40040
    ctx->pc = 0x18d924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d928: 0xc042bf0
    ctx->pc = 0x18D928u;
    SET_GPR_U32(ctx, 31, 0x18D930u);
    ctx->pc = 0x18D92Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7272));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D930u; }
    }
    if (ctx->pc != 0x18D930u) { return; }
    ctx->pc = 0x18D930u;
    // 0x18d930: 0xc042c56
    ctx->pc = 0x18D930u;
    SET_GPR_U32(ctx, 31, 0x18D938u);
    ctx->pc = 0x18D934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D938u; }
    }
    if (ctx->pc != 0x18D938u) { return; }
    ctx->pc = 0x18D938u;
    // 0x18d938: 0x5d1021
    ctx->pc = 0x18d938u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18d93c: 0x200282d
    ctx->pc = 0x18d93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d940: 0x24500040
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 64));
    // 0x18d944: 0xc042aee
    ctx->pc = 0x18D944u;
    SET_GPR_U32(ctx, 31, 0x18D94Cu);
    ctx->pc = 0x18D948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D94Cu; }
    }
    if (ctx->pc != 0x18D94Cu) { return; }
    ctx->pc = 0x18D94Cu;
    // 0x18d94c: 0xc04336a
    ctx->pc = 0x18D94Cu;
    SET_GPR_U32(ctx, 31, 0x18D954u);
    ctx->pc = 0x18D950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D954u; }
    }
    if (ctx->pc != 0x18D954u) { return; }
    ctx->pc = 0x18D954u;
    // 0x18d954: 0x3c050024
    ctx->pc = 0x18d954u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18d958: 0x27a40040
    ctx->pc = 0x18d958u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d95c: 0xc042aee
    ctx->pc = 0x18D95Cu;
    SET_GPR_U32(ctx, 31, 0x18D964u);
    ctx->pc = 0x18D960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7280));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D964u; }
    }
    if (ctx->pc != 0x18D964u) { return; }
    ctx->pc = 0x18D964u;
    // 0x18d964: 0xc06ade4
    ctx->pc = 0x18D964u;
    SET_GPR_U32(ctx, 31, 0x18D96Cu);
    ctx->pc = 0x1AB790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB790_0x1ab790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D96Cu; }
    }
    if (ctx->pc != 0x18D96Cu) { return; }
    ctx->pc = 0x18D96Cu;
    // 0x18d96c: 0x27a40040
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d970: 0xc04629c
    ctx->pc = 0x18D970u;
    SET_GPR_U32(ctx, 31, 0x18D978u);
    ctx->pc = 0x18D974u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1538));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D978u; }
    }
    if (ctx->pc != 0x18D978u) { return; }
    ctx->pc = 0x18D978u;
    // 0x18d978: 0x4410005
    ctx->pc = 0x18D978u;
    {
        const bool branch_taken_0x18d978 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18D97Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d978) {
            ctx->pc = 0x18D990u;
            goto label_18d990;
        }
    }
    ctx->pc = 0x18D980u;
    // 0x18d980: 0xc06adfc
    ctx->pc = 0x18D980u;
    SET_GPR_U32(ctx, 31, 0x18D988u);
    ctx->pc = 0x1AB7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB7F0_0x1ab7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D988u; }
    }
    if (ctx->pc != 0x18D988u) { return; }
    ctx->pc = 0x18D988u;
    // 0x18d988: 0x1000000a
    ctx->pc = 0x18D988u;
    {
        const bool branch_taken_0x18d988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D98Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d988) {
            ctx->pc = 0x18D9B4u;
            goto label_18d9b4;
        }
    }
    ctx->pc = 0x18D990u;
label_18d990:
    // 0x18d990: 0x240282d
    ctx->pc = 0x18d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d994: 0x220302d
    ctx->pc = 0x18d994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d998: 0xc0464c4
    ctx->pc = 0x18D998u;
    SET_GPR_U32(ctx, 31, 0x18D9A0u);
    ctx->pc = 0x18D99Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00119310_0x119310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9A0u; }
    }
    if (ctx->pc != 0x18D9A0u) { return; }
    ctx->pc = 0x18D9A0u;
    // 0x18d9a0: 0xc04633e
    ctx->pc = 0x18D9A0u;
    SET_GPR_U32(ctx, 31, 0x18D9A8u);
    ctx->pc = 0x18D9A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9A8u; }
    }
    if (ctx->pc != 0x18D9A8u) { return; }
    ctx->pc = 0x18D9A8u;
    // 0x18d9a8: 0xc06adfc
    ctx->pc = 0x18D9A8u;
    SET_GPR_U32(ctx, 31, 0x18D9B0u);
    ctx->pc = 0x1AB7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB7F0_0x1ab7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9B0u; }
    }
    if (ctx->pc != 0x18D9B0u) { return; }
    ctx->pc = 0x18D9B0u;
    // 0x18d9b0: 0x24020001
    ctx->pc = 0x18d9b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18d9b4:
    // 0x18d9b4: 0xdfbf0030
    ctx->pc = 0x18d9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d9b8: 0x7bb20020
    ctx->pc = 0x18d9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d9bc: 0x7bb10010
    ctx->pc = 0x18d9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d9c0: 0x7bb00000
    ctx->pc = 0x18d9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d9c4: 0x3e00008
    ctx->pc = 0x18D9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D9C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 2112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D990u: goto label_18d990;
            case 0x18D9B4u: goto label_18d9b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D9CCu;
    // 0x18d9cc: 0x0
    ctx->pc = 0x18d9ccu;
    // NOP
}
