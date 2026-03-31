#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00115680
// Address: 0x115680 - 0x115770
void sub_00115680_0x115680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115680u;

    // 0x115680: 0x27bdffb0
    ctx->pc = 0x115680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x115684: 0xffb10030
    ctx->pc = 0x115684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x115688: 0xffbf0040
    ctx->pc = 0x115688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11568c: 0x80882d
    ctx->pc = 0x11568cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115690: 0xffb00020
    ctx->pc = 0x115690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x115694: 0x40026000
    ctx->pc = 0x115694u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x115698: 0x3c030001
    ctx->pc = 0x115698u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x11569c: 0x431024
    ctx->pc = 0x11569cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1156a0: 0x54400004
    ctx->pc = 0x1156A0u;
    {
        const bool branch_taken_0x1156a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1156a0) {
            ctx->pc = 0x1156A4u;
            SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
            ctx->pc = 0x1156B4u;
            goto label_1156b4;
        }
    }
    ctx->pc = 0x1156A8u;
    // 0x1156a8: 0x3c028000
    ctx->pc = 0x1156a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1156ac: 0x10000021
    ctx->pc = 0x1156ACu;
    {
        const bool branch_taken_0x1156ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1156B0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32776));
        if (branch_taken_0x1156ac) {
            ctx->pc = 0x115734u;
            goto label_115734;
        }
    }
    ctx->pc = 0x1156B4u;
label_1156b4:
    // 0x1156b4: 0x24030001
    ctx->pc = 0x1156b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1156b8: 0x24428940
    ctx->pc = 0x1156b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936896));
    // 0x1156bc: 0xafa30004
    ctx->pc = 0x1156bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1156c0: 0xafa20014
    ctx->pc = 0x1156c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1156c4: 0x3a0202d
    ctx->pc = 0x1156c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156c8: 0xc045188
    ctx->pc = 0x1156C8u;
    SET_GPR_U32(ctx, 31, 0x1156D0u);
    ctx->pc = 0x1156CCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x114620u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114620_0x114620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1156D0u; }
    }
    if (ctx->pc != 0x1156D0u) { return; }
    ctx->pc = 0x1156D0u;
    // 0x1156d0: 0x40802d
    ctx->pc = 0x1156d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156d4: 0x6010004
    ctx->pc = 0x1156D4u;
    {
        const bool branch_taken_0x1156d4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1156D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1156d4) {
            ctx->pc = 0x1156E8u;
            goto label_1156e8;
        }
    }
    ctx->pc = 0x1156DCu;
    // 0x1156dc: 0x3c028000
    ctx->pc = 0x1156dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1156e0: 0x10000014
    ctx->pc = 0x1156E0u;
    {
        const bool branch_taken_0x1156e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1156E4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32771));
        if (branch_taken_0x1156e0) {
            ctx->pc = 0x115734u;
            goto label_115734;
        }
    }
    ctx->pc = 0x1156E8u;
label_1156e8:
    // 0x1156e8: 0xc047c4a
    ctx->pc = 0x1156E8u;
    SET_GPR_U32(ctx, 31, 0x1156F0u);
    ctx->pc = 0x1156ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F128u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F128_0x11f128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1156F0u; }
    }
    if (ctx->pc != 0x1156F0u) { return; }
    ctx->pc = 0x1156F0u;
    // 0x1156f0: 0x3c050011
    ctx->pc = 0x1156f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17 << 16));
    // 0x1156f4: 0x40202d
    ctx->pc = 0x1156f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156f8: 0x24a55748
    ctx->pc = 0x1156f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22344));
    // 0x1156fc: 0xc047cb6
    ctx->pc = 0x1156FCu;
    SET_GPR_U32(ctx, 31, 0x115704u);
    ctx->pc = 0x115700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F2D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F2D8_0x11f2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115704u; }
    }
    if (ctx->pc != 0x115704u) { return; }
    ctx->pc = 0x115704u;
    // 0x115704: 0x40882d
    ctx->pc = 0x115704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115708: 0x6210005
    ctx->pc = 0x115708u;
    {
        const bool branch_taken_0x115708 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x115708) {
            ctx->pc = 0x115720u;
            goto label_115720;
        }
    }
    ctx->pc = 0x115710u;
    // 0x115710: 0xc04518c
    ctx->pc = 0x115710u;
    SET_GPR_U32(ctx, 31, 0x115718u);
    ctx->pc = 0x115714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115718u; }
    }
    if (ctx->pc != 0x115718u) { return; }
    ctx->pc = 0x115718u;
    // 0x115718: 0x10000006
    ctx->pc = 0x115718u;
    {
        const bool branch_taken_0x115718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11571Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x115718) {
            ctx->pc = 0x115734u;
            goto label_115734;
        }
    }
    ctx->pc = 0x115720u;
label_115720:
    // 0x115720: 0xc045198
    ctx->pc = 0x115720u;
    SET_GPR_U32(ctx, 31, 0x115728u);
    ctx->pc = 0x115724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114660_0x114660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115728u; }
    }
    if (ctx->pc != 0x115728u) { return; }
    ctx->pc = 0x115728u;
    // 0x115728: 0xc04518c
    ctx->pc = 0x115728u;
    SET_GPR_U32(ctx, 31, 0x115730u);
    ctx->pc = 0x11572Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114630_0x114630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115730u; }
    }
    if (ctx->pc != 0x115730u) { return; }
    ctx->pc = 0x115730u;
    // 0x115730: 0x102d
    ctx->pc = 0x115730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115734:
    // 0x115734: 0xdfbf0040
    ctx->pc = 0x115734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115738: 0xdfb10030
    ctx->pc = 0x115738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11573c: 0xdfb00020
    ctx->pc = 0x11573cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115740: 0x3e00008
    ctx->pc = 0x115740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115744u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1156B4u: goto label_1156b4;
            case 0x1156E8u: goto label_1156e8;
            case 0x115720u: goto label_115720;
            case 0x115734u: goto label_115734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115748u;
    // 0x115748: 0x27bdfff0
    ctx->pc = 0x115748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11574c: 0xffbf0000
    ctx->pc = 0x11574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115750: 0xc045194
    ctx->pc = 0x115750u;
    SET_GPR_U32(ctx, 31, 0x115758u);
    ctx->pc = 0x115754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114650u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114650_0x114650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115758u; }
    }
    if (ctx->pc != 0x115758u) { return; }
    ctx->pc = 0x115758u;
    // 0x115758: 0xf
    ctx->pc = 0x115758u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11575c: 0x42000038
    ctx->pc = 0x11575cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x115760: 0xdfbf0000
    ctx->pc = 0x115760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115764: 0x102d
    ctx->pc = 0x115764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115768: 0x3e00008
    ctx->pc = 0x115768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11576Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1156B4u: goto label_1156b4;
            case 0x1156E8u: goto label_1156e8;
            case 0x115720u: goto label_115720;
            case 0x115734u: goto label_115734;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115770u;
}
