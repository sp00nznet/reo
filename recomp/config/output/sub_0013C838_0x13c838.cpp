#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013C838
// Address: 0x13c838 - 0x13c9e8
void sub_0013C838_0x13c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13c838u;

    // 0x13c838: 0x27bdffd0
    ctx->pc = 0x13c838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c83c: 0x3c020026
    ctx->pc = 0x13c83cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x13c840: 0xffb40020
    ctx->pc = 0x13c840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13c844: 0x245435c0
    ctx->pc = 0x13c844u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 13760));
    // 0x13c848: 0xffb00000
    ctx->pc = 0x13c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c84c: 0x80802d
    ctx->pc = 0x13c84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c850: 0xffb10008
    ctx->pc = 0x13c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c854: 0xc0882d
    ctx->pc = 0x13c854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c858: 0xffb30018
    ctx->pc = 0x13c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13c85c: 0xa0982d
    ctx->pc = 0x13c85cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c860: 0x24061000
    ctx->pc = 0x13c860u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x13c864: 0x280202d
    ctx->pc = 0x13c864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c868: 0x282d
    ctx->pc = 0x13c868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c86c: 0xffb20010
    ctx->pc = 0x13c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13c870: 0xffbf0028
    ctx->pc = 0x13c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13c874: 0xc041f1a
    ctx->pc = 0x13C874u;
    SET_GPR_U32(ctx, 31, 0x13C87Cu);
    ctx->pc = 0x13C878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C87Cu; }
    }
    if (ctx->pc != 0x13C87Cu) { return; }
    ctx->pc = 0x13C87Cu;
    // 0x13c87c: 0x3c030022
    ctx->pc = 0x13c87cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13c880: 0x8c62de90
    ctx->pc = 0x13c880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294958736)));
    // 0x13c884: 0x14400003
    ctx->pc = 0x13C884u;
    {
        const bool branch_taken_0x13c884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13c884) {
            ctx->pc = 0x13C894u;
            goto label_13c894;
        }
    }
    ctx->pc = 0x13C88Cu;
    // 0x13c88c: 0xc04f1f0
    ctx->pc = 0x13C88Cu;
    SET_GPR_U32(ctx, 31, 0x13C894u);
    ctx->pc = 0x13C7C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C7C0_0x13c7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C894u; }
    }
    if (ctx->pc != 0x13C894u) { return; }
    ctx->pc = 0x13C894u;
label_13c894:
    // 0x13c894: 0xc04f164
    ctx->pc = 0x13C894u;
    SET_GPR_U32(ctx, 31, 0x13C89Cu);
    ctx->pc = 0x13C590u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C590_0x13c590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C89Cu; }
    }
    if (ctx->pc != 0x13C89Cu) { return; }
    ctx->pc = 0x13C89Cu;
    // 0x13c89c: 0x12000040
    ctx->pc = 0x13C89Cu;
    {
        const bool branch_taken_0x13c89c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C8A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c89c) {
            ctx->pc = 0x13C9A0u;
            goto label_13c9a0;
        }
    }
    ctx->pc = 0x13C8A4u;
    // 0x13c8a4: 0x1660000a
    ctx->pc = 0x13C8A4u;
    {
        const bool branch_taken_0x13c8a4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C8A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
        if (branch_taken_0x13c8a4) {
            ctx->pc = 0x13C8D0u;
            goto label_13c8d0;
        }
    }
    ctx->pc = 0x13C8ACu;
    // 0x13c8ac: 0x8c43dea4
    ctx->pc = 0x13c8acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13c8b0: 0x5460003b
    ctx->pc = 0x13C8B0u;
    {
        const bool branch_taken_0x13c8b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x13c8b0) {
            ctx->pc = 0x13C8B4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13C9A0u;
            goto label_13c9a0;
        }
    }
    ctx->pc = 0x13C8B8u;
    // 0x13c8b8: 0x3c040024
    ctx->pc = 0x13c8b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13c8bc: 0x282d
    ctx->pc = 0x13c8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8c0: 0xc045a12
    ctx->pc = 0x13C8C0u;
    SET_GPR_U32(ctx, 31, 0x13C8C8u);
    ctx->pc = 0x13C8C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955592));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8C8u; }
    }
    if (ctx->pc != 0x13C8C8u) { return; }
    ctx->pc = 0x13C8C8u;
    // 0x13c8c8: 0x10000035
    ctx->pc = 0x13C8C8u;
    {
        const bool branch_taken_0x13c8c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C8CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c8c8) {
            ctx->pc = 0x13C9A0u;
            goto label_13c9a0;
        }
    }
    ctx->pc = 0x13C8D0u;
label_13c8d0:
    // 0x13c8d0: 0x1620000b
    ctx->pc = 0x13C8D0u;
    {
        const bool branch_taken_0x13c8d0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C8D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c8d0) {
            ctx->pc = 0x13C900u;
            goto label_13c900;
        }
    }
    ctx->pc = 0x13C8D8u;
    // 0x13c8d8: 0x3c020022
    ctx->pc = 0x13c8d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13c8dc: 0x8c43dea4
    ctx->pc = 0x13c8dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13c8e0: 0x5460002f
    ctx->pc = 0x13C8E0u;
    {
        const bool branch_taken_0x13c8e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x13c8e0) {
            ctx->pc = 0x13C8E4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x13C9A0u;
            goto label_13c9a0;
        }
    }
    ctx->pc = 0x13C8E8u;
    // 0x13c8e8: 0x3c040024
    ctx->pc = 0x13c8e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13c8ec: 0x282d
    ctx->pc = 0x13c8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8f0: 0xc045a12
    ctx->pc = 0x13C8F0u;
    SET_GPR_U32(ctx, 31, 0x13C8F8u);
    ctx->pc = 0x13C8F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955640));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8F8u; }
    }
    if (ctx->pc != 0x13C8F8u) { return; }
    ctx->pc = 0x13C8F8u;
    // 0x13c8f8: 0x10000029
    ctx->pc = 0x13C8F8u;
    {
        const bool branch_taken_0x13c8f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C8FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c8f8) {
            ctx->pc = 0x13C9A0u;
            goto label_13c9a0;
        }
    }
    ctx->pc = 0x13C900u;
label_13c900:
    // 0x13c900: 0x282d
    ctx->pc = 0x13c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c904: 0xc041f1a
    ctx->pc = 0x13C904u;
    SET_GPR_U32(ctx, 31, 0x13C90Cu);
    ctx->pc = 0x13C908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C90Cu; }
    }
    if (ctx->pc != 0x13C90Cu) { return; }
    ctx->pc = 0x13C90Cu;
    // 0x13c90c: 0x200202d
    ctx->pc = 0x13c90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c910: 0xc04f090
    ctx->pc = 0x13C910u;
    SET_GPR_U32(ctx, 31, 0x13C918u);
    ctx->pc = 0x13C914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C240_0x13c240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C918u; }
    }
    if (ctx->pc != 0x13C918u) { return; }
    ctx->pc = 0x13C918u;
    // 0x13c918: 0x5440000f
    ctx->pc = 0x13C918u;
    {
        const bool branch_taken_0x13c918 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13c918) {
            ctx->pc = 0x13C91Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 9));
            ctx->pc = 0x13C958u;
            goto label_13c958;
        }
    }
    ctx->pc = 0x13C920u;
    // 0x13c920: 0x3c020022
    ctx->pc = 0x13c920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13c924: 0x8c43dea4
    ctx->pc = 0x13c924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958756)));
    // 0x13c928: 0x14600006
    ctx->pc = 0x13C928u;
    {
        const bool branch_taken_0x13c928 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x13C92Cu;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x13c928) {
            ctx->pc = 0x13C944u;
            goto label_13c944;
        }
    }
    ctx->pc = 0x13C930u;
    // 0x13c930: 0x3c040024
    ctx->pc = 0x13c930u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13c934: 0x200282d
    ctx->pc = 0x13c934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c938: 0xc045a12
    ctx->pc = 0x13C938u;
    SET_GPR_U32(ctx, 31, 0x13C940u);
    ctx->pc = 0x13C93Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955688));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C940u; }
    }
    if (ctx->pc != 0x13C940u) { return; }
    ctx->pc = 0x13C940u;
    // 0x13c940: 0x3c050024
    ctx->pc = 0x13c940u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
label_13c944:
    // 0x13c944: 0x202d
    ctx->pc = 0x13c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c948: 0xc04ebf2
    ctx->pc = 0x13C948u;
    SET_GPR_U32(ctx, 31, 0x13C950u);
    ctx->pc = 0x13C94Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294955728));
    ctx->pc = 0x13AFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AFC8_0x13afc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C950u; }
    }
    if (ctx->pc != 0x13C950u) { return; }
    ctx->pc = 0x13C950u;
    // 0x13c950: 0x10000013
    ctx->pc = 0x13C950u;
    {
        const bool branch_taken_0x13c950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13C954u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13c950) {
            ctx->pc = 0x13C9A0u;
            goto label_13c9a0;
        }
    }
    ctx->pc = 0x13C958u;
label_13c958:
    // 0x13c958: 0x240382d
    ctx->pc = 0x13c958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c95c: 0x230001b
    ctx->pc = 0x13c95cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 17) / divisor; ctx->hi = GPR_U32(ctx, 16) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,17); } }
    // 0x13c960: 0x280282d
    ctx->pc = 0x13c960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c964: 0x260202d
    ctx->pc = 0x13c964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c968: 0x52000001
    ctx->pc = 0x13C968u;
    {
        const bool branch_taken_0x13c968 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13c968) {
            ctx->pc = 0x13C96Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13C970u;
            goto label_13c970;
        }
    }
    ctx->pc = 0x13C970u;
label_13c970:
    // 0x13c970: 0x26520001
    ctx->pc = 0x13c970u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x13c974: 0x8812
    ctx->pc = 0x13c974u;
    SET_GPR_U32(ctx, 17, ctx->lo);
    // 0x13c978: 0x220302d
    ctx->pc = 0x13c978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c97c: 0xc04f028
    ctx->pc = 0x13C97Cu;
    SET_GPR_U32(ctx, 31, 0x13C984u);
    ctx->pc = 0x13C980u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 3));
    ctx->pc = 0x13C0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C0A0_0x13c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C984u; }
    }
    if (ctx->pc != 0x13C984u) { return; }
    ctx->pc = 0x13C984u;
    // 0x13c984: 0x260202d
    ctx->pc = 0x13c984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c988: 0xc04f0e8
    ctx->pc = 0x13C988u;
    SET_GPR_U32(ctx, 31, 0x13C990u);
    ctx->pc = 0x13C98Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C3A0_0x13c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C990u; }
    }
    if (ctx->pc != 0x13C990u) { return; }
    ctx->pc = 0x13C990u;
    // 0x13c990: 0x52000001
    ctx->pc = 0x13C990u;
    {
        const bool branch_taken_0x13c990 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x13c990) {
            ctx->pc = 0x13C994u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x13C998u;
            goto label_13c998;
        }
    }
    ctx->pc = 0x13C998u;
label_13c998:
    // 0x13c998: 0x521018
    ctx->pc = 0x13c998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x13c99c: 0x2221021
    ctx->pc = 0x13c99cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13c9a0:
    // 0x13c9a0: 0xdfb00000
    ctx->pc = 0x13c9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c9a4: 0xdfb10008
    ctx->pc = 0x13c9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c9a8: 0xdfb20010
    ctx->pc = 0x13c9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c9ac: 0xdfb30018
    ctx->pc = 0x13c9acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c9b0: 0xdfb40020
    ctx->pc = 0x13c9b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c9b4: 0xdfbf0028
    ctx->pc = 0x13c9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c9b8: 0x3e00008
    ctx->pc = 0x13C9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C9BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C894u: goto label_13c894;
            case 0x13C8D0u: goto label_13c8d0;
            case 0x13C900u: goto label_13c900;
            case 0x13C944u: goto label_13c944;
            case 0x13C958u: goto label_13c958;
            case 0x13C970u: goto label_13c970;
            case 0x13C998u: goto label_13c998;
            case 0x13C9A0u: goto label_13c9a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C9C0u;
    // 0x13c9c0: 0x27bdffe0
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c9c4: 0xffbf0010
    ctx->pc = 0x13c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c9c8: 0xc04f1fa
    ctx->pc = 0x13C9C8u;
    SET_GPR_U32(ctx, 31, 0x13C9D0u);
    ctx->pc = 0x13C9CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13C7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C7E8_0x13c7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C9D0u; }
    }
    if (ctx->pc != 0x13C9D0u) { return; }
    ctx->pc = 0x13C9D0u;
    // 0x13c9d0: 0x8fa20004
    ctx->pc = 0x13c9d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13c9d4: 0xdfbf0010
    ctx->pc = 0x13c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c9d8: 0x2102b
    ctx->pc = 0x13c9d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13c9dc: 0x3e00008
    ctx->pc = 0x13C9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C894u: goto label_13c894;
            case 0x13C8D0u: goto label_13c8d0;
            case 0x13C900u: goto label_13c900;
            case 0x13C944u: goto label_13c944;
            case 0x13C958u: goto label_13c958;
            case 0x13C970u: goto label_13c970;
            case 0x13C998u: goto label_13c998;
            case 0x13C9A0u: goto label_13c9a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C9E4u;
    // 0x13c9e4: 0x0
    ctx->pc = 0x13c9e4u;
    // NOP
}
