#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001868C8
// Address: 0x1868c8 - 0x186a88
void sub_001868C8_0x1868c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1868c8u;

    // 0x1868c8: 0x27bdfcc0
    ctx->pc = 0x1868c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x1868cc: 0xffb00310
    ctx->pc = 0x1868ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 16));
    // 0x1868d0: 0xa0802d
    ctx->pc = 0x1868d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868d4: 0xffb10318
    ctx->pc = 0x1868d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 792), GPR_U64(ctx, 17));
    // 0x1868d8: 0x80882d
    ctx->pc = 0x1868d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868dc: 0xffb20320
    ctx->pc = 0x1868dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 18));
    // 0x1868e0: 0xffb30328
    ctx->pc = 0x1868e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 808), GPR_U64(ctx, 19));
    // 0x1868e4: 0xffb40330
    ctx->pc = 0x1868e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 20));
    // 0x1868e8: 0xffbf0338
    ctx->pc = 0x1868e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 824), GPR_U64(ctx, 31));
    // 0x1868ec: 0xc062210
    ctx->pc = 0x1868ECu;
    SET_GPR_U32(ctx, 31, 0x1868F4u);
    ctx->pc = 0x1868F0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1868F4u; }
    }
    if (ctx->pc != 0x1868F4u) { return; }
    ctx->pc = 0x1868F4u;
    // 0x1868f4: 0x14400004
    ctx->pc = 0x1868F4u;
    {
        const bool branch_taken_0x1868f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1868F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x1868f4) {
            ctx->pc = 0x186908u;
            goto label_186908;
        }
    }
    ctx->pc = 0x1868FCu;
    // 0x1868fc: 0x3c028101
    ctx->pc = 0x1868fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x186900: 0x10000058
    ctx->pc = 0x186900u;
    {
        const bool branch_taken_0x186900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186904u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x186900) {
            ctx->pc = 0x186A64u;
            goto label_186a64;
        }
    }
    ctx->pc = 0x186908u;
label_186908:
    // 0x186908: 0x3c028101
    ctx->pc = 0x186908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18690c: 0x2231818
    ctx->pc = 0x18690cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x186910: 0x3c040028
    ctx->pc = 0x186910u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x186914: 0x832021
    ctx->pc = 0x186914u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x186918: 0x8c8463d4
    ctx->pc = 0x186918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 25556)));
    // 0x18691c: 0x10800051
    ctx->pc = 0x18691Cu;
    {
        const bool branch_taken_0x18691c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x186920u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x18691c) {
            ctx->pc = 0x186A64u;
            goto label_186a64;
        }
    }
    ctx->pc = 0x186924u;
    // 0x186924: 0x27b40200
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 512));
    // 0x186928: 0x220202d
    ctx->pc = 0x186928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18692c: 0x200282d
    ctx->pc = 0x18692cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186930: 0xc0609a2
    ctx->pc = 0x186930u;
    SET_GPR_U32(ctx, 31, 0x186938u);
    ctx->pc = 0x186934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186938u; }
    }
    if (ctx->pc != 0x186938u) { return; }
    ctx->pc = 0x186938u;
    // 0x186938: 0x10400017
    ctx->pc = 0x186938u;
    {
        const bool branch_taken_0x186938 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x186938) {
            ctx->pc = 0x186998u;
            goto label_186998;
        }
    }
    ctx->pc = 0x186940u;
    // 0x186940: 0x240202d
    ctx->pc = 0x186940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186944: 0xc042b3a
    ctx->pc = 0x186944u;
    SET_GPR_U32(ctx, 31, 0x18694Cu);
    ctx->pc = 0x186948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x10ACE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ACE8_0x10ace8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18694Cu; }
    }
    if (ctx->pc != 0x18694Cu) { return; }
    ctx->pc = 0x18694Cu;
    // 0x18694c: 0x14400012
    ctx->pc = 0x18694Cu;
    {
        const bool branch_taken_0x18694c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186950u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 640));
        if (branch_taken_0x18694c) {
            ctx->pc = 0x186998u;
            goto label_186998;
        }
    }
    ctx->pc = 0x186954u;
    // 0x186954: 0x280282d
    ctx->pc = 0x186954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186958: 0xc042bf0
    ctx->pc = 0x186958u;
    SET_GPR_U32(ctx, 31, 0x186960u);
    ctx->pc = 0x18695Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186960u; }
    }
    if (ctx->pc != 0x186960u) { return; }
    ctx->pc = 0x186960u;
    // 0x186960: 0x260202d
    ctx->pc = 0x186960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186964: 0xc042dee
    ctx->pc = 0x186964u;
    SET_GPR_U32(ctx, 31, 0x18696Cu);
    ctx->pc = 0x186968u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x10B7B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B7B8_0x10b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18696Cu; }
    }
    if (ctx->pc != 0x18696Cu) { return; }
    ctx->pc = 0x18696Cu;
    // 0x18696c: 0x240282d
    ctx->pc = 0x18696cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186970: 0xc042bf0
    ctx->pc = 0x186970u;
    SET_GPR_U32(ctx, 31, 0x186978u);
    ctx->pc = 0x186974u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186978u; }
    }
    if (ctx->pc != 0x186978u) { return; }
    ctx->pc = 0x186978u;
    // 0x186978: 0xc06089c
    ctx->pc = 0x186978u;
    SET_GPR_U32(ctx, 31, 0x186980u);
    ctx->pc = 0x18697Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186980u; }
    }
    if (ctx->pc != 0x186980u) { return; }
    ctx->pc = 0x186980u;
    // 0x186980: 0x10400005
    ctx->pc = 0x186980u;
    {
        const bool branch_taken_0x186980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x186980) {
            ctx->pc = 0x186998u;
            goto label_186998;
        }
    }
    ctx->pc = 0x186988u;
    // 0x186988: 0xc06089c
    ctx->pc = 0x186988u;
    SET_GPR_U32(ctx, 31, 0x186990u);
    ctx->pc = 0x18698Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186990u; }
    }
    if (ctx->pc != 0x186990u) { return; }
    ctx->pc = 0x186990u;
    // 0x186990: 0x14400005
    ctx->pc = 0x186990u;
    {
        const bool branch_taken_0x186990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x186990) {
            ctx->pc = 0x1869A8u;
            goto label_1869a8;
        }
    }
    ctx->pc = 0x186998u;
label_186998:
    // 0x186998: 0x3c028101
    ctx->pc = 0x186998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18699c: 0x10000031
    ctx->pc = 0x18699Cu;
    {
        const bool branch_taken_0x18699c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1869A0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x18699c) {
            ctx->pc = 0x186A64u;
            goto label_186a64;
        }
    }
    ctx->pc = 0x1869A4u;
    // 0x1869a4: 0x0
    ctx->pc = 0x1869a4u;
    // NOP
label_1869a8:
    // 0x1869a8: 0xc060880
    ctx->pc = 0x1869A8u;
    SET_GPR_U32(ctx, 31, 0x1869B0u);
    ctx->pc = 0x1869ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869B0u; }
    }
    if (ctx->pc != 0x1869B0u) { return; }
    ctx->pc = 0x1869B0u;
    // 0x1869b0: 0x10400005
    ctx->pc = 0x1869B0u;
    {
        const bool branch_taken_0x1869b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1869b0) {
            ctx->pc = 0x1869C8u;
            goto label_1869c8;
        }
    }
    ctx->pc = 0x1869B8u;
    // 0x1869b8: 0xc060880
    ctx->pc = 0x1869B8u;
    SET_GPR_U32(ctx, 31, 0x1869C0u);
    ctx->pc = 0x1869BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869C0u; }
    }
    if (ctx->pc != 0x1869C0u) { return; }
    ctx->pc = 0x1869C0u;
    // 0x1869c0: 0x14400005
    ctx->pc = 0x1869C0u;
    {
        const bool branch_taken_0x1869c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1869C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1869c0) {
            ctx->pc = 0x1869D8u;
            goto label_1869d8;
        }
    }
    ctx->pc = 0x1869C8u;
label_1869c8:
    // 0x1869c8: 0x3c028101
    ctx->pc = 0x1869c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1869cc: 0x10000025
    ctx->pc = 0x1869CCu;
    {
        const bool branch_taken_0x1869cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1869D0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x1869cc) {
            ctx->pc = 0x186A64u;
            goto label_186a64;
        }
    }
    ctx->pc = 0x1869D4u;
    // 0x1869d4: 0x0
    ctx->pc = 0x1869d4u;
    // NOP
label_1869d8:
    // 0x1869d8: 0x220202d
    ctx->pc = 0x1869d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869dc: 0x3a0302d
    ctx->pc = 0x1869dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869e0: 0x27a70300
    ctx->pc = 0x1869e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 768));
    // 0x1869e4: 0xc0610d8
    ctx->pc = 0x1869E4u;
    SET_GPR_U32(ctx, 31, 0x1869ECu);
    ctx->pc = 0x1869E8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 772));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1869ECu; }
    }
    if (ctx->pc != 0x1869ECu) { return; }
    ctx->pc = 0x1869ECu;
    // 0x1869ec: 0x3c038101
    ctx->pc = 0x1869ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x1869f0: 0x34630002
    ctx->pc = 0x1869f0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1869f4: 0x1443001c
    ctx->pc = 0x1869F4u;
    {
        const bool branch_taken_0x1869f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1869F8u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
        if (branch_taken_0x1869f4) {
            ctx->pc = 0x186A68u;
            goto label_186a68;
        }
    }
    ctx->pc = 0x1869FCu;
    // 0x1869fc: 0x280282d
    ctx->pc = 0x1869fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a00: 0x220202d
    ctx->pc = 0x186a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a04: 0x3a0302d
    ctx->pc = 0x186a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a08: 0x27a70300
    ctx->pc = 0x186a08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 768));
    // 0x186a0c: 0xc0610d8
    ctx->pc = 0x186A0Cu;
    SET_GPR_U32(ctx, 31, 0x186A14u);
    ctx->pc = 0x186A10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 772));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A14u; }
    }
    if (ctx->pc != 0x186A14u) { return; }
    ctx->pc = 0x186A14u;
    // 0x186a14: 0x3c038101
    ctx->pc = 0x186a14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x186a18: 0x34630011
    ctx->pc = 0x186a18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x186a1c: 0x14430012
    ctx->pc = 0x186A1Cu;
    {
        const bool branch_taken_0x186a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x186A20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
        if (branch_taken_0x186a1c) {
            ctx->pc = 0x186A68u;
            goto label_186a68;
        }
    }
    ctx->pc = 0x186A24u;
    // 0x186a24: 0x240282d
    ctx->pc = 0x186a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a28: 0xc042bf0
    ctx->pc = 0x186A28u;
    SET_GPR_U32(ctx, 31, 0x186A30u);
    ctx->pc = 0x186A2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A30u; }
    }
    if (ctx->pc != 0x186A30u) { return; }
    ctx->pc = 0x186A30u;
    // 0x186a30: 0x220202d
    ctx->pc = 0x186a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a34: 0x8fa60300
    ctx->pc = 0x186a34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x186a38: 0x3a0282d
    ctx->pc = 0x186a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a3c: 0xc0612a8
    ctx->pc = 0x186A3Cu;
    SET_GPR_U32(ctx, 31, 0x186A44u);
    ctx->pc = 0x186A40u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 772)));
    ctx->pc = 0x184AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AA0_0x184aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A44u; }
    }
    if (ctx->pc != 0x186A44u) { return; }
    ctx->pc = 0x186A44u;
    // 0x186a44: 0x14400008
    ctx->pc = 0x186A44u;
    {
        const bool branch_taken_0x186a44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186A48u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
        if (branch_taken_0x186a44) {
            ctx->pc = 0x186A68u;
            goto label_186a68;
        }
    }
    ctx->pc = 0x186A4Cu;
    // 0x186a4c: 0xc061bbc
    ctx->pc = 0x186A4Cu;
    SET_GPR_U32(ctx, 31, 0x186A54u);
    ctx->pc = 0x186A50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186A54u; }
    }
    if (ctx->pc != 0x186A54u) { return; }
    ctx->pc = 0x186A54u;
    // 0x186a54: 0x3c038101
    ctx->pc = 0x186a54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x186a58: 0x3463006f
    ctx->pc = 0x186a58u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 111));
    // 0x186a5c: 0x2180b
    ctx->pc = 0x186a5cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x186a60: 0x60102d
    ctx->pc = 0x186a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_186a64:
    // 0x186a64: 0xdfb00310
    ctx->pc = 0x186a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_186a68:
    // 0x186a68: 0xdfb10318
    ctx->pc = 0x186a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x186a6c: 0xdfb20320
    ctx->pc = 0x186a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x186a70: 0xdfb30328
    ctx->pc = 0x186a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x186a74: 0xdfb40330
    ctx->pc = 0x186a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x186a78: 0xdfbf0338
    ctx->pc = 0x186a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x186a7c: 0x3e00008
    ctx->pc = 0x186A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186A80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186908u: goto label_186908;
            case 0x186998u: goto label_186998;
            case 0x1869A8u: goto label_1869a8;
            case 0x1869C8u: goto label_1869c8;
            case 0x1869D8u: goto label_1869d8;
            case 0x186A64u: goto label_186a64;
            case 0x186A68u: goto label_186a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186A84u;
    // 0x186a84: 0x0
    ctx->pc = 0x186a84u;
    // NOP
}
