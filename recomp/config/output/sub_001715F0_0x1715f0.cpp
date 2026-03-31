#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001715F0
// Address: 0x1715f0 - 0x171808
void sub_001715F0_0x1715f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1715f0u;

    // 0x1715f0: 0x27bdffb0
    ctx->pc = 0x1715f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1715f4: 0x3c020023
    ctx->pc = 0x1715f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1715f8: 0xffb10008
    ctx->pc = 0x1715f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1715fc: 0xffb20010
    ctx->pc = 0x1715fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171600: 0x80902d
    ctx->pc = 0x171600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171604: 0xffb30018
    ctx->pc = 0x171604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171608: 0xffbe0040
    ctx->pc = 0x171608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x17160c: 0xffb00000
    ctx->pc = 0x17160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171610: 0xffb40020
    ctx->pc = 0x171610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171614: 0xffb50028
    ctx->pc = 0x171614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x171618: 0xffb60030
    ctx->pc = 0x171618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17161c: 0xffb70038
    ctx->pc = 0x17161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x171620: 0xffbf0048
    ctx->pc = 0x171620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x171624: 0x8c43f1c0
    ctx->pc = 0x171624u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963648)));
    // 0x171628: 0x8e451b30
    ctx->pc = 0x171628u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 6960)));
    // 0x17162c: 0x24a60004
    ctx->pc = 0x17162cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4));
    // 0x171630: 0x24b109d8
    ctx->pc = 0x171630u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 5), 2520));
    // 0x171634: 0x24b30a00
    ctx->pc = 0x171634u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 5), 2560));
    // 0x171638: 0x14600003
    ctx->pc = 0x171638u;
    {
        const bool branch_taken_0x171638 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17163Cu;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 5), 2728));
        if (branch_taken_0x171638) {
            ctx->pc = 0x171648u;
            goto label_171648;
        }
    }
    ctx->pc = 0x171640u;
    // 0x171640: 0x10000064
    ctx->pc = 0x171640u;
    {
        const bool branch_taken_0x171640 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171644u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x171640) {
            ctx->pc = 0x1717D4u;
            goto label_1717d4;
        }
    }
    ctx->pc = 0x171648u;
label_171648:
    // 0x171648: 0x8cc4000c
    ctx->pc = 0x171648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x17164c: 0x8cc30008
    ctx->pc = 0x17164cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x171650: 0x8ca70028
    ctx->pc = 0x171650u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x171654: 0x641818
    ctx->pc = 0x171654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x171658: 0x310c0
    ctx->pc = 0x171658u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x17165c: 0x431021
    ctx->pc = 0x17165cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171660: 0x227c2
    ctx->pc = 0x171660u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 2), 31));
    // 0x171664: 0x441021
    ctx->pc = 0x171664u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171668: 0x21043
    ctx->pc = 0x171668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17166c: 0x14e0000a
    ctx->pc = 0x17166Cu;
    {
        const bool branch_taken_0x17166c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x171670u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 10240));
        if (branch_taken_0x17166c) {
            ctx->pc = 0x171698u;
            goto label_171698;
        }
    }
    ctx->pc = 0x171674u;
    // 0x171674: 0x8cc20010
    ctx->pc = 0x171674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x171678: 0x2404ffc0
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x17167c: 0x2442003f
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x171680: 0x441024
    ctx->pc = 0x171680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171684: 0x541821
    ctx->pc = 0x171684u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x171688: 0xaca20028
    ctx->pc = 0x171688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x17168c: 0x2463003f
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x171690: 0x10000008
    ctx->pc = 0x171690u;
    {
        const bool branch_taken_0x171690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171694u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x171690) {
            ctx->pc = 0x1716B4u;
            goto label_1716b4;
        }
    }
    ctx->pc = 0x171698u;
label_171698:
    // 0x171698: 0x8ca2002c
    ctx->pc = 0x171698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x17169c: 0x2404ffc0
    ctx->pc = 0x17169cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1716a0: 0x24e3003f
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 63));
    // 0x1716a4: 0x2442003f
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x1716a8: 0x641824
    ctx->pc = 0x1716a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1716ac: 0x441024
    ctx->pc = 0x1716acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1716b0: 0xaca30028
    ctx->pc = 0x1716b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
label_1716b4:
    // 0x1716b4: 0xaca2002c
    ctx->pc = 0x1716b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1716b8: 0x8cb6002c
    ctx->pc = 0x1716b8u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1716bc: 0x2404ffc0
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1716c0: 0x8cb00028
    ctx->pc = 0x1716c0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1716c4: 0x3c020008
    ctx->pc = 0x1716c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
    // 0x1716c8: 0x3442003f
    ctx->pc = 0x1716c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 63));
    // 0x1716cc: 0x561021
    ctx->pc = 0x1716ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1716d0: 0x44a824
    ctx->pc = 0x1716d0u;
    SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1716d4: 0x26a3104f
    ctx->pc = 0x1716d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 4175));
    // 0x1716d8: 0xc05cf00
    ctx->pc = 0x1716D8u;
    SET_GPR_U32(ctx, 31, 0x1716E0u);
    ctx->pc = 0x1716DCu;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x173C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173C00_0x173c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1716E0u; }
    }
    if (ctx->pc != 0x1716E0u) { return; }
    ctx->pc = 0x1716E0u;
    // 0x1716e0: 0x24030001
    ctx->pc = 0x1716e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1716e4: 0x1043001e
    ctx->pc = 0x1716E4u;
    {
        const bool branch_taken_0x1716e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1716E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1716e4) {
            ctx->pc = 0x171760u;
            goto label_171760;
        }
    }
    ctx->pc = 0x1716ECu;
    // 0x1716ec: 0x280302d
    ctx->pc = 0x1716ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716f0: 0xc051eb6
    ctx->pc = 0x1716F0u;
    SET_GPR_U32(ctx, 31, 0x1716F8u);
    ctx->pc = 0x1716F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147AD8_0x147ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1716F8u; }
    }
    if (ctx->pc != 0x1716F8u) { return; }
    ctx->pc = 0x1716F8u;
    // 0x1716f8: 0x3c060017
    ctx->pc = 0x1716f8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x1716fc: 0x24c61818
    ctx->pc = 0x1716fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 6168));
    // 0x171700: 0x260202d
    ctx->pc = 0x171700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171704: 0x282d
    ctx->pc = 0x171704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171708: 0xc051fcc
    ctx->pc = 0x171708u;
    SET_GPR_U32(ctx, 31, 0x171710u);
    ctx->pc = 0x17170Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147F30_0x147f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171710u; }
    }
    if (ctx->pc != 0x171710u) { return; }
    ctx->pc = 0x171710u;
    // 0x171710: 0x3c060017
    ctx->pc = 0x171710u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x171714: 0x24c61920
    ctx->pc = 0x171714u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 6432));
    // 0x171718: 0x260202d
    ctx->pc = 0x171718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17171c: 0x24050001
    ctx->pc = 0x17171cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171720: 0xc051fcc
    ctx->pc = 0x171720u;
    SET_GPR_U32(ctx, 31, 0x171728u);
    ctx->pc = 0x171724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147F30_0x147f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171728u; }
    }
    if (ctx->pc != 0x171728u) { return; }
    ctx->pc = 0x171728u;
    // 0x171728: 0x3c060017
    ctx->pc = 0x171728u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x17172c: 0x24c619a0
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 6560));
    // 0x171730: 0x260202d
    ctx->pc = 0x171730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171734: 0x24050002
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x171738: 0xc051fcc
    ctx->pc = 0x171738u;
    SET_GPR_U32(ctx, 31, 0x171740u);
    ctx->pc = 0x17173Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147F30_0x147f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171740u; }
    }
    if (ctx->pc != 0x171740u) { return; }
    ctx->pc = 0x171740u;
    // 0x171740: 0x3c060017
    ctx->pc = 0x171740u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
    // 0x171744: 0x260202d
    ctx->pc = 0x171744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171748: 0x24c619c8
    ctx->pc = 0x171748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 6600));
    // 0x17174c: 0x240382d
    ctx->pc = 0x17174cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171750: 0xc051fcc
    ctx->pc = 0x171750u;
    SET_GPR_U32(ctx, 31, 0x171758u);
    ctx->pc = 0x171754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x147F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00147F30_0x147f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171758u; }
    }
    if (ctx->pc != 0x171758u) { return; }
    ctx->pc = 0x171758u;
    // 0x171758: 0x10000004
    ctx->pc = 0x171758u;
    {
        const bool branch_taken_0x171758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17175Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 112));
        if (branch_taken_0x171758) {
            ctx->pc = 0x17176Cu;
            goto label_17176c;
        }
    }
    ctx->pc = 0x171760u;
label_171760:
    // 0x171760: 0xc05c6a8
    ctx->pc = 0x171760u;
    SET_GPR_U32(ctx, 31, 0x171768u);
    ctx->pc = 0x171764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AA0_0x171aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171768u; }
    }
    if (ctx->pc != 0x171768u) { return; }
    ctx->pc = 0x171768u;
    // 0x171768: 0x26300070
    ctx->pc = 0x171768u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 112));
label_17176c:
    // 0x17176c: 0x2c0282d
    ctx->pc = 0x17176cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171770: 0x2a0302d
    ctx->pc = 0x171770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171774: 0x2e0402d
    ctx->pc = 0x171774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171778: 0x24070100
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    // 0x17177c: 0x24090200
    ctx->pc = 0x17177cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 512));
    // 0x171780: 0xc05c2ba
    ctx->pc = 0x171780u;
    SET_GPR_U32(ctx, 31, 0x171788u);
    ctx->pc = 0x171784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170AE8_0x170ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171788u; }
    }
    if (ctx->pc != 0x171788u) { return; }
    ctx->pc = 0x171788u;
    // 0x171788: 0xc05c398
    ctx->pc = 0x171788u;
    SET_GPR_U32(ctx, 31, 0x171790u);
    ctx->pc = 0x17178Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170E60_0x170e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171790u; }
    }
    if (ctx->pc != 0x171790u) { return; }
    ctx->pc = 0x171790u;
    // 0x171790: 0xc05c418
    ctx->pc = 0x171790u;
    SET_GPR_U32(ctx, 31, 0x171798u);
    ctx->pc = 0x171794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171060_0x171060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171798u; }
    }
    if (ctx->pc != 0x171798u) { return; }
    ctx->pc = 0x171798u;
    // 0x171798: 0x24030001
    ctx->pc = 0x171798u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17179c: 0x2402ffff
    ctx->pc = 0x17179cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1717a0: 0xa2200010
    ctx->pc = 0x1717a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1717a4: 0xa2200011
    ctx->pc = 0x1717a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1717a8: 0xa2200012
    ctx->pc = 0x1717a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x1717ac: 0xae230000
    ctx->pc = 0x1717acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1717b0: 0xae200020
    ctx->pc = 0x1717b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x1717b4: 0xafc20000
    ctx->pc = 0x1717b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1717b8: 0xafc00004
    ctx->pc = 0x1717b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x1717bc: 0xae200004
    ctx->pc = 0x1717bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1717c0: 0xae200008
    ctx->pc = 0x1717c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1717c4: 0xae20000c
    ctx->pc = 0x1717c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1717c8: 0xae200014
    ctx->pc = 0x1717c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1717cc: 0xae200018
    ctx->pc = 0x1717ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1717d0: 0xae20001c
    ctx->pc = 0x1717d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1717d4:
    // 0x1717d4: 0xdfb00000
    ctx->pc = 0x1717d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1717d8: 0xdfb10008
    ctx->pc = 0x1717d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1717dc: 0xdfb20010
    ctx->pc = 0x1717dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1717e0: 0xdfb30018
    ctx->pc = 0x1717e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1717e4: 0xdfb40020
    ctx->pc = 0x1717e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1717e8: 0xdfb50028
    ctx->pc = 0x1717e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1717ec: 0xdfb60030
    ctx->pc = 0x1717ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1717f0: 0xdfb70038
    ctx->pc = 0x1717f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1717f4: 0xdfbe0040
    ctx->pc = 0x1717f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1717f8: 0xdfbf0048
    ctx->pc = 0x1717f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1717fc: 0x3e00008
    ctx->pc = 0x1717FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171800u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171648u: goto label_171648;
            case 0x171698u: goto label_171698;
            case 0x1716B4u: goto label_1716b4;
            case 0x171760u: goto label_171760;
            case 0x17176Cu: goto label_17176c;
            case 0x1717D4u: goto label_1717d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171804u;
    // 0x171804: 0x0
    ctx->pc = 0x171804u;
    // NOP
}
