#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0013A738
// Address: 0x13a738 - 0x13a910
void sub_0013A738_0x13a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x13a738u;

    // 0x13a738: 0x27bdff70
    ctx->pc = 0x13a738u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13a73c: 0xffb60070
    ctx->pc = 0x13a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x13a740: 0xa0b02d
    ctx->pc = 0x13a740u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a744: 0xffb40060
    ctx->pc = 0x13a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x13a748: 0xa02d
    ctx->pc = 0x13a748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a74c: 0xffb50068
    ctx->pc = 0x13a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x13a750: 0x80a82d
    ctx->pc = 0x13a750u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a754: 0xffbe0080
    ctx->pc = 0x13a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x13a758: 0xf02d
    ctx->pc = 0x13a758u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a75c: 0xffb00040
    ctx->pc = 0x13a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x13a760: 0xffb10048
    ctx->pc = 0x13a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x13a764: 0xffb20050
    ctx->pc = 0x13a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x13a768: 0xffb30058
    ctx->pc = 0x13a768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x13a76c: 0xffb70078
    ctx->pc = 0x13a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x13a770: 0xffbf0088
    ctx->pc = 0x13a770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x13a774: 0x1ac00045
    ctx->pc = 0x13A774u;
    {
        const bool branch_taken_0x13a774 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x13A778u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x13a774) {
            ctx->pc = 0x13A88Cu;
            goto label_13a88c;
        }
    }
    ctx->pc = 0x13A77Cu;
    // 0x13a77c: 0x3c020022
    ctx->pc = 0x13a77cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x13a780: 0x2a0902d
    ctx->pc = 0x13a780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a784: 0x2457d8d0
    ctx->pc = 0x13a784u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294957264));
label_13a788:
    // 0x13a788: 0x8ee2000c
    ctx->pc = 0x13a788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x13a78c: 0x8ee30008
    ctx->pc = 0x13a78cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x13a790: 0x542018
    ctx->pc = 0x13a790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x13a794: 0x318c0
    ctx->pc = 0x13a794u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x13a798: 0x941021
    ctx->pc = 0x13a798u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x13a79c: 0x621821
    ctx->pc = 0x13a79cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a7a0: 0x2a38821
    ctx->pc = 0x13a7a0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x13a7a4: 0x82220000
    ctx->pc = 0x13a7a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a7a8: 0x10400034
    ctx->pc = 0x13A7A8u;
    {
        const bool branch_taken_0x13a7a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A7ACu;
        SET_GPR_U32(ctx, 19, ((uint32_t)34 << 16));
        if (branch_taken_0x13a7a8) {
            ctx->pc = 0x13A87Cu;
            goto label_13a87c;
        }
    }
    ctx->pc = 0x13A7B0u;
    // 0x13a7b0: 0x220202d
    ctx->pc = 0x13a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a7b4: 0xc04e892
    ctx->pc = 0x13A7B4u;
    SET_GPR_U32(ctx, 31, 0x13A7BCu);
    ctx->pc = 0x13A7B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294957560));
    ctx->pc = 0x13A248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A248_0x13a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A7BCu; }
    }
    if (ctx->pc != 0x13A7BCu) { return; }
    ctx->pc = 0x13A7BCu;
    // 0x13a7bc: 0xc04e082
    ctx->pc = 0x13A7BCu;
    SET_GPR_U32(ctx, 31, 0x13A7C4u);
    ctx->pc = 0x13A7C0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37888));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A7C4u; }
    }
    if (ctx->pc != 0x13A7C4u) { return; }
    ctx->pc = 0x13A7C4u;
    // 0x13a7c4: 0x24100001
    ctx->pc = 0x13a7c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_13a7c8:
    // 0x13a7c8: 0xc04035e
    ctx->pc = 0x13A7C8u;
    SET_GPR_U32(ctx, 31, 0x13A7D0u);
    ctx->pc = 0x13A7CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00100D78_0x100d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A7D0u; }
    }
    if (ctx->pc != 0x13A7D0u) { return; }
    ctx->pc = 0x13A7D0u;
    // 0x13a7d0: 0x1050fffd
    ctx->pc = 0x13A7D0u;
    {
        const bool branch_taken_0x13a7d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x13a7d0) {
            ctx->pc = 0x13A7C8u;
            goto label_13a7c8;
        }
    }
    ctx->pc = 0x13A7D8u;
    // 0x13a7d8: 0xc04e082
    ctx->pc = 0x13A7D8u;
    SET_GPR_U32(ctx, 31, 0x13A7E0u);
    ctx->pc = 0x13A7DCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37889));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A7E0u; }
    }
    if (ctx->pc != 0x13A7E0u) { return; }
    ctx->pc = 0x13A7E0u;
    // 0x13a7e0: 0xc04e082
    ctx->pc = 0x13A7E0u;
    SET_GPR_U32(ctx, 31, 0x13A7E8u);
    ctx->pc = 0x13A7E4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 38144));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A7E8u; }
    }
    if (ctx->pc != 0x13A7E8u) { return; }
    ctx->pc = 0x13A7E8u;
    // 0x13a7e8: 0x2665d9f8
    ctx->pc = 0x13a7e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294957560));
    // 0x13a7ec: 0xc04e58a
    ctx->pc = 0x13A7ECu;
    SET_GPR_U32(ctx, 31, 0x13A7F4u);
    ctx->pc = 0x13A7F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00139628_0x139628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A7F4u; }
    }
    if (ctx->pc != 0x13A7F4u) { return; }
    ctx->pc = 0x13A7F4u;
    // 0x13a7f4: 0x24030001
    ctx->pc = 0x13a7f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a7f8: 0x14430013
    ctx->pc = 0x13A7F8u;
    {
        const bool branch_taken_0x13a7f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x13a7f8) {
            ctx->pc = 0x13A848u;
            goto label_13a848;
        }
    }
    ctx->pc = 0x13A800u;
    // 0x13a800: 0x34049501
    ctx->pc = 0x13a800u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 38145));
    // 0x13a804: 0xc04e082
    ctx->pc = 0x13A804u;
    SET_GPR_U32(ctx, 31, 0x13A80Cu);
    ctx->pc = 0x13A808u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 1));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A80Cu; }
    }
    if (ctx->pc != 0x13A80Cu) { return; }
    ctx->pc = 0x13A80Cu;
    // 0x13a80c: 0x3c040022
    ctx->pc = 0x13a80cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13a810: 0x8fa20000
    ctx->pc = 0x13a810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a814: 0x8fa30004
    ctx->pc = 0x13a814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13a818: 0xae420000
    ctx->pc = 0x13a818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x13a81c: 0xae430004
    ctx->pc = 0x13a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x13a820: 0x8c82d8e8
    ctx->pc = 0x13a820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294957288)));
    // 0x13a824: 0x54400016
    ctx->pc = 0x13A824u;
    {
        const bool branch_taken_0x13a824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13a824) {
            ctx->pc = 0x13A828u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x13A880u;
            goto label_13a880;
        }
    }
    ctx->pc = 0x13A82Cu;
    // 0x13a82c: 0x3c020024
    ctx->pc = 0x13a82cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x13a830: 0x220282d
    ctx->pc = 0x13a830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a834: 0xc045a12
    ctx->pc = 0x13A834u;
    SET_GPR_U32(ctx, 31, 0x13A83Cu);
    ctx->pc = 0x13A838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954120));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A83Cu; }
    }
    if (ctx->pc != 0x13A83Cu) { return; }
    ctx->pc = 0x13A83Cu;
    // 0x13a83c: 0x10000010
    ctx->pc = 0x13A83Cu;
    {
        const bool branch_taken_0x13a83c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x13A840u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x13a83c) {
            ctx->pc = 0x13A880u;
            goto label_13a880;
        }
    }
    ctx->pc = 0x13A844u;
    // 0x13a844: 0x0
    ctx->pc = 0x13a844u;
    // NOP
label_13a848:
    // 0x13a848: 0xc04e082
    ctx->pc = 0x13A848u;
    SET_GPR_U32(ctx, 31, 0x13A850u);
    ctx->pc = 0x13A84Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 38146));
    ctx->pc = 0x138208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00138208_0x138208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A850u; }
    }
    if (ctx->pc != 0x13A850u) { return; }
    ctx->pc = 0x13A850u;
    // 0x13a850: 0x3c030022
    ctx->pc = 0x13a850u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x13a854: 0x8c62d8e8
    ctx->pc = 0x13a854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957288)));
    // 0x13a858: 0x54400006
    ctx->pc = 0x13A858u;
    {
        const bool branch_taken_0x13a858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13a858) {
            ctx->pc = 0x13A85Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x13A874u;
            goto label_13a874;
        }
    }
    ctx->pc = 0x13A860u;
    // 0x13a860: 0x3c020024
    ctx->pc = 0x13a860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x13a864: 0x220282d
    ctx->pc = 0x13a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a868: 0xc045a12
    ctx->pc = 0x13A868u;
    SET_GPR_U32(ctx, 31, 0x13A870u);
    ctx->pc = 0x13A86Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954144));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A870u; }
    }
    if (ctx->pc != 0x13A870u) { return; }
    ctx->pc = 0x13A870u;
    // 0x13a870: 0x8fa30030
    ctx->pc = 0x13a870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13a874:
    // 0x13a874: 0x24630001
    ctx->pc = 0x13a874u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x13a878: 0xafa30030
    ctx->pc = 0x13a878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_13a87c:
    // 0x13a87c: 0x26940001
    ctx->pc = 0x13a87cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_13a880:
    // 0x13a880: 0x296102a
    ctx->pc = 0x13a880u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 22)));
    // 0x13a884: 0x1440ffc0
    ctx->pc = 0x13A884u;
    {
        const bool branch_taken_0x13a884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13A888u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x13a884) {
            ctx->pc = 0x13A788u;
            goto label_13a788;
        }
    }
    ctx->pc = 0x13A88Cu;
label_13a88c:
    // 0x13a88c: 0x3c040022
    ctx->pc = 0x13a88cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)34 << 16));
    // 0x13a890: 0x2490d8e8
    ctx->pc = 0x13a890u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294957288));
    // 0x13a894: 0x8e020000
    ctx->pc = 0x13a894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a898: 0x54400006
    ctx->pc = 0x13A898u;
    {
        const bool branch_taken_0x13a898 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13a898) {
            ctx->pc = 0x13A89Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x13A8B4u;
            goto label_13a8b4;
        }
    }
    ctx->pc = 0x13A8A0u;
    // 0x13a8a0: 0x3c040024
    ctx->pc = 0x13a8a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13a8a4: 0x3c0282d
    ctx->pc = 0x13a8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8a8: 0xc045a12
    ctx->pc = 0x13A8A8u;
    SET_GPR_U32(ctx, 31, 0x13A8B0u);
    ctx->pc = 0x13A8ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954168));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A8B0u; }
    }
    if (ctx->pc != 0x13A8B0u) { return; }
    ctx->pc = 0x13A8B0u;
    // 0x13a8b0: 0x8fa20030
    ctx->pc = 0x13a8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13a8b4:
    // 0x13a8b4: 0x18400009
    ctx->pc = 0x13A8B4u;
    {
        const bool branch_taken_0x13a8b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13A8B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13a8b4) {
            ctx->pc = 0x13A8DCu;
            goto label_13a8dc;
        }
    }
    ctx->pc = 0x13A8BCu;
    // 0x13a8bc: 0x8e030000
    ctx->pc = 0x13a8bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a8c0: 0x24020002
    ctx->pc = 0x13a8c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a8c4: 0x10620004
    ctx->pc = 0x13A8C4u;
    {
        const bool branch_taken_0x13a8c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x13A8C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x13a8c4) {
            ctx->pc = 0x13A8D8u;
            goto label_13a8d8;
        }
    }
    ctx->pc = 0x13A8CCu;
    // 0x13a8cc: 0x3c040024
    ctx->pc = 0x13a8ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x13a8d0: 0xc045a12
    ctx->pc = 0x13A8D0u;
    SET_GPR_U32(ctx, 31, 0x13A8D8u);
    ctx->pc = 0x13A8D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954192));
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A8D8u; }
    }
    if (ctx->pc != 0x13A8D8u) { return; }
    ctx->pc = 0x13A8D8u;
label_13a8d8:
    // 0x13a8d8: 0x3c0102d
    ctx->pc = 0x13a8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_13a8dc:
    // 0x13a8dc: 0xdfb00040
    ctx->pc = 0x13a8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a8e0: 0xdfb10048
    ctx->pc = 0x13a8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a8e4: 0xdfb20050
    ctx->pc = 0x13a8e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a8e8: 0xdfb30058
    ctx->pc = 0x13a8e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13a8ec: 0xdfb40060
    ctx->pc = 0x13a8ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a8f0: 0xdfb50068
    ctx->pc = 0x13a8f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13a8f4: 0xdfb60070
    ctx->pc = 0x13a8f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a8f8: 0xdfb70078
    ctx->pc = 0x13a8f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13a8fc: 0xdfbe0080
    ctx->pc = 0x13a8fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a900: 0xdfbf0088
    ctx->pc = 0x13a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13a904: 0x3e00008
    ctx->pc = 0x13A904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A908u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A788u: goto label_13a788;
            case 0x13A7C8u: goto label_13a7c8;
            case 0x13A848u: goto label_13a848;
            case 0x13A874u: goto label_13a874;
            case 0x13A87Cu: goto label_13a87c;
            case 0x13A880u: goto label_13a880;
            case 0x13A88Cu: goto label_13a88c;
            case 0x13A8B4u: goto label_13a8b4;
            case 0x13A8D8u: goto label_13a8d8;
            case 0x13A8DCu: goto label_13a8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A90Cu;
    // 0x13a90c: 0x0
    ctx->pc = 0x13a90cu;
    // NOP
}
