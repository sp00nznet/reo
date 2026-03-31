#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00164740
// Address: 0x164740 - 0x164900
void sub_00164740_0x164740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x164740u;

    // 0x164740: 0x24020120
    ctx->pc = 0x164740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 288));
    // 0x164744: 0x27bdfff0
    ctx->pc = 0x164744u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164748: 0x28a50120
    ctx->pc = 0x164748u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 288));
    // 0x16474c: 0xffbf0000
    ctx->pc = 0x16474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164750: 0xacc20000
    ctx->pc = 0x164750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x164754: 0x80302d
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164758: 0x14a0000e
    ctx->pc = 0x164758u;
    {
        const bool branch_taken_0x164758 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x16475Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164758) {
            ctx->pc = 0x164794u;
            goto label_164794;
        }
    }
    ctx->pc = 0x164760u;
    // 0x164760: 0x90c40000
    ctx->pc = 0x164760u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x164764: 0x24030080
    ctx->pc = 0x164764u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x164768: 0x5483000b
    ctx->pc = 0x164768u;
    {
        const bool branch_taken_0x164768 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x164768) {
            ctx->pc = 0x16476Cu;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x164798u;
            goto label_164798;
        }
    }
    ctx->pc = 0x164770u;
    // 0x164770: 0x90c30001
    ctx->pc = 0x164770u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x164774: 0x54600008
    ctx->pc = 0x164774u;
    {
        const bool branch_taken_0x164774 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x164774) {
            ctx->pc = 0x164778u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x164798u;
            goto label_164798;
        }
    }
    ctx->pc = 0x16477Cu;
    // 0x16477c: 0x3c050024
    ctx->pc = 0x16477cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x164780: 0x24c4011a
    ctx->pc = 0x164780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 282));
    // 0x164784: 0x24a505f8
    ctx->pc = 0x164784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1528));
    // 0x164788: 0xc042d10
    ctx->pc = 0x164788u;
    SET_GPR_U32(ctx, 31, 0x164790u);
    ctx->pc = 0x16478Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164790u; }
    }
    if (ctx->pc != 0x164790u) { return; }
    ctx->pc = 0x164790u;
    // 0x164790: 0x2c420001
    ctx->pc = 0x164790u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_164794:
    // 0x164794: 0xdfbf0000
    ctx->pc = 0x164794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164798:
    // 0x164798: 0x3e00008
    ctx->pc = 0x164798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16479Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164794u: goto label_164794;
            case 0x164798u: goto label_164798;
            case 0x1647D4u: goto label_1647d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1647A0u;
    // 0x1647a0: 0x24020012
    ctx->pc = 0x1647a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1647a4: 0x28a50012
    ctx->pc = 0x1647a4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 18));
    // 0x1647a8: 0xacc20000
    ctx->pc = 0x1647a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1647ac: 0x80302d
    ctx->pc = 0x1647acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647b0: 0x14a00008
    ctx->pc = 0x1647B0u;
    {
        const bool branch_taken_0x1647b0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1647B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1647b0) {
            ctx->pc = 0x1647D4u;
            goto label_1647d4;
        }
    }
    ctx->pc = 0x1647B8u;
    // 0x1647b8: 0x90c40000
    ctx->pc = 0x1647b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1647bc: 0x24030080
    ctx->pc = 0x1647bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1647c0: 0x14830004
    ctx->pc = 0x1647C0u;
    {
        const bool branch_taken_0x1647c0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1647c0) {
            ctx->pc = 0x1647D4u;
            goto label_1647d4;
        }
    }
    ctx->pc = 0x1647C8u;
    // 0x1647c8: 0x90c20001
    ctx->pc = 0x1647c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1647cc: 0x38420001
    ctx->pc = 0x1647ccu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1647d0: 0x2c420001
    ctx->pc = 0x1647d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1647d4:
    // 0x1647d4: 0x3e00008
    ctx->pc = 0x1647D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164794u: goto label_164794;
            case 0x164798u: goto label_164798;
            case 0x1647D4u: goto label_1647d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1647DCu;
    // 0x1647dc: 0x0
    ctx->pc = 0x1647dcu;
    // NOP
    // 0x1647e0: 0x27bdfff0
    ctx->pc = 0x1647e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1647e4: 0xffbf0000
    ctx->pc = 0x1647e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1647e8: 0x8c821b74
    ctx->pc = 0x1647e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x1647ec: 0xdfbf0000
    ctx->pc = 0x1647ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1647f0: 0x8c440000
    ctx->pc = 0x1647f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1647f4: 0x804c98e
    ctx->pc = 0x1647F4u;
    ctx->pc = 0x1647F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x132638u;
    entry_132638_0x1326f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1647FCu;
    // 0x1647fc: 0x0
    ctx->pc = 0x1647fcu;
    // NOP
    // 0x164800: 0x27bdfff0
    ctx->pc = 0x164800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164804: 0xffbf0000
    ctx->pc = 0x164804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164808: 0x8c821b74
    ctx->pc = 0x164808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x16480c: 0xdfbf0000
    ctx->pc = 0x16480cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164810: 0x8c440000
    ctx->pc = 0x164810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164814: 0x804c9bc
    ctx->pc = 0x164814u;
    ctx->pc = 0x164818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1326F0u;
    sub_001326F0_0x1326f0(rdram, ctx, runtime); return;
    ctx->pc = 0x16481Cu;
    // 0x16481c: 0x0
    ctx->pc = 0x16481cu;
    // NOP
    // 0x164820: 0x27bdfff0
    ctx->pc = 0x164820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164824: 0xffbf0000
    ctx->pc = 0x164824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164828: 0x8c821b74
    ctx->pc = 0x164828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x16482c: 0xdfbf0000
    ctx->pc = 0x16482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164830: 0x8c440000
    ctx->pc = 0x164830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164834: 0x804c9ee
    ctx->pc = 0x164834u;
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1327B8u;
    sub_001327B8_0x1327b8(rdram, ctx, runtime); return;
    ctx->pc = 0x16483Cu;
    // 0x16483c: 0x0
    ctx->pc = 0x16483cu;
    // NOP
    // 0x164840: 0x27bdfff0
    ctx->pc = 0x164840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164844: 0xffbf0000
    ctx->pc = 0x164844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164848: 0x8c821b74
    ctx->pc = 0x164848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7028)));
    // 0x16484c: 0xdfbf0000
    ctx->pc = 0x16484cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164850: 0x8c440000
    ctx->pc = 0x164850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164854: 0x804ca08
    ctx->pc = 0x164854u;
    ctx->pc = 0x164858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x132820u;
    entry_132820_0x1328a8(rdram, ctx, runtime); return;
    ctx->pc = 0x16485Cu;
    // 0x16485c: 0x0
    ctx->pc = 0x16485cu;
    // NOP
    // 0x164860: 0x27bdfff0
    ctx->pc = 0x164860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164864: 0xffb00000
    ctx->pc = 0x164864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164868: 0x24901b6c
    ctx->pc = 0x164868u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 7020));
    // 0x16486c: 0xffbf0008
    ctx->pc = 0x16486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x164870: 0xc0448ba
    ctx->pc = 0x164870u;
    SET_GPR_U32(ctx, 31, 0x164878u);
    ctx->pc = 0x164874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164878u; }
    }
    if (ctx->pc != 0x164878u) { return; }
    ctx->pc = 0x164878u;
    // 0x164878: 0x40202d
    ctx->pc = 0x164878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16487c: 0xc0489aa
    ctx->pc = 0x16487Cu;
    SET_GPR_U32(ctx, 31, 0x164884u);
    ctx->pc = 0x1226A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001226A8_0x1226a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164884u; }
    }
    if (ctx->pc != 0x164884u) { return; }
    ctx->pc = 0x164884u;
    // 0x164884: 0xc04491c
    ctx->pc = 0x164884u;
    SET_GPR_U32(ctx, 31, 0x16488Cu);
    ctx->pc = 0x164888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112470_0x112470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16488Cu; }
    }
    if (ctx->pc != 0x16488Cu) { return; }
    ctx->pc = 0x16488Cu;
    // 0x16488c: 0x3c0140dd
    ctx->pc = 0x16488cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16605 << 16));
    // 0x164890: 0x34210c54
    ctx->pc = 0x164890u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 3156));
    // 0x164894: 0x44811000
    ctx->pc = 0x164894u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x164898: 0x3c0144d8
    ctx->pc = 0x164898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17624 << 16));
    // 0x16489c: 0x3421677d
    ctx->pc = 0x16489cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26493));
    // 0x1648a0: 0x44811800
    ctx->pc = 0x1648a0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x1648a4: 0x46020001
    ctx->pc = 0x1648a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1648a8: 0x3c013c23
    ctx->pc = 0x1648a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x1648ac: 0x3421d70a
    ctx->pc = 0x1648acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x1648b0: 0x44810800
    ctx->pc = 0x1648b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x1648b4: 0x8e020008
    ctx->pc = 0x1648b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1648b8: 0xdfbf0008
    ctx->pc = 0x1648b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1648bc: 0x8c440000
    ctx->pc = 0x1648bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1648c0: 0x46030002
    ctx->pc = 0x1648c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1648c4: 0xdfb00000
    ctx->pc = 0x1648c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1648c8: 0x46010042
    ctx->pc = 0x1648c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1648cc: 0x460000a4
    ctx->pc = 0x1648ccu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1648d0: 0x44031000
    ctx->pc = 0x1648d0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[2]);
    // 0x1648d4: 0x46000824
    ctx->pc = 0x1648d4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1648d8: 0x44020000
    ctx->pc = 0x1648d8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1648dc: 0x23040
    ctx->pc = 0x1648dcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1648e0: 0x40282d
    ctx->pc = 0x1648e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648e4: 0xc23021
    ctx->pc = 0x1648e4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1648e8: 0x630c0
    ctx->pc = 0x1648e8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1648ec: 0xc23021
    ctx->pc = 0x1648ecu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1648f0: 0x63080
    ctx->pc = 0x1648f0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1648f4: 0x663023
    ctx->pc = 0x1648f4u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1648f8: 0x804cbf8
    ctx->pc = 0x1648F8u;
    ctx->pc = 0x1648FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x132FE0u;
    sub_00132FE0_0x132fe0(rdram, ctx, runtime); return;
    ctx->pc = 0x164900u;
}
