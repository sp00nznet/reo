#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AB560
// Address: 0x1ab560 - 0x1ab790
void sub_001AB560_0x1ab560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ab560u;

    // 0x1ab560: 0x27bdffc0
    ctx->pc = 0x1ab560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab564: 0x202d
    ctx->pc = 0x1ab564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab568: 0xffbf0020
    ctx->pc = 0x1ab568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab56c: 0x7fb10010
    ctx->pc = 0x1ab56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab570: 0xc045c20
    ctx->pc = 0x1AB570u;
    SET_GPR_U32(ctx, 31, 0x1AB578u);
    ctx->pc = 0x1AB574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x117080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117080_0x117080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB578u; }
    }
    if (ctx->pc != 0x1AB578u) { return; }
    ctx->pc = 0x1AB578u;
    // 0x1ab578: 0xc046e0a
    ctx->pc = 0x1AB578u;
    SET_GPR_U32(ctx, 31, 0x1AB580u);
    ctx->pc = 0x11B828u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B828_0x11b828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB580u; }
    }
    if (ctx->pc != 0x1AB580u) { return; }
    ctx->pc = 0x1AB580u;
    // 0x1ab580: 0xc04042a
    ctx->pc = 0x1AB580u;
    SET_GPR_U32(ctx, 31, 0x1AB588u);
    ctx->pc = 0x1AB584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1010A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001010A8_0x1010a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB588u; }
    }
    if (ctx->pc != 0x1AB588u) { return; }
    ctx->pc = 0x1AB588u;
    // 0x1ab588: 0xc04628e
    ctx->pc = 0x1AB588u;
    SET_GPR_U32(ctx, 31, 0x1AB590u);
    ctx->pc = 0x118A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A38_0x118a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB590u; }
    }
    if (ctx->pc != 0x1AB590u) { return; }
    ctx->pc = 0x1AB590u;
label_1ab590:
    // 0x1ab590: 0x3c040025
    ctx->pc = 0x1ab590u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1ab594: 0xc04732a
    ctx->pc = 0x1AB594u;
    SET_GPR_U32(ctx, 31, 0x1AB59Cu);
    ctx->pc = 0x1AB598u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966592));
    ctx->pc = 0x11CCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CCA8_0x11cca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB59Cu; }
    }
    if (ctx->pc != 0x1AB59Cu) { return; }
    ctx->pc = 0x1AB59Cu;
    // 0x1ab59c: 0x2102b
    ctx->pc = 0x1ab59cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1ab5a0: 0x38420001
    ctx->pc = 0x1ab5a0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1ab5a4: 0x1440fffa
    ctx->pc = 0x1AB5A4u;
    {
        const bool branch_taken_0x1ab5a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ab5a4) {
            ctx->pc = 0x1AB590u;
            goto label_1ab590;
        }
    }
    ctx->pc = 0x1AB5ACu;
label_1ab5ac:
    // 0x1ab5ac: 0xc047316
    ctx->pc = 0x1AB5ACu;
    SET_GPR_U32(ctx, 31, 0x1AB5B4u);
    ctx->pc = 0x11CC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011CC58_0x11cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5B4u; }
    }
    if (ctx->pc != 0x1AB5B4u) { return; }
    ctx->pc = 0x1AB5B4u;
    // 0x1ab5b4: 0x2102b
    ctx->pc = 0x1ab5b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1ab5b8: 0x38420001
    ctx->pc = 0x1ab5b8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1ab5bc: 0x0
    ctx->pc = 0x1ab5bcu;
    // NOP
    // 0x1ab5c0: 0x0
    ctx->pc = 0x1ab5c0u;
    // NOP
    // 0x1ab5c4: 0x1440fff9
    ctx->pc = 0x1AB5C4u;
    {
        const bool branch_taken_0x1ab5c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ab5c4) {
            ctx->pc = 0x1AB5ACu;
            goto label_1ab5ac;
        }
    }
    ctx->pc = 0x1AB5CCu;
    // 0x1ab5cc: 0xc045c20
    ctx->pc = 0x1AB5CCu;
    SET_GPR_U32(ctx, 31, 0x1AB5D4u);
    ctx->pc = 0x1AB5D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117080_0x117080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5D4u; }
    }
    if (ctx->pc != 0x1AB5D4u) { return; }
    ctx->pc = 0x1AB5D4u;
    // 0x1ab5d4: 0xc046fc2
    ctx->pc = 0x1AB5D4u;
    SET_GPR_U32(ctx, 31, 0x1AB5DCu);
    ctx->pc = 0x11BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BF08_0x11bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5DCu; }
    }
    if (ctx->pc != 0x1AB5DCu) { return; }
    ctx->pc = 0x1AB5DCu;
    // 0x1ab5dc: 0xc04628e
    ctx->pc = 0x1AB5DCu;
    SET_GPR_U32(ctx, 31, 0x1AB5E4u);
    ctx->pc = 0x118A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A38_0x118a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5E4u; }
    }
    if (ctx->pc != 0x1AB5E4u) { return; }
    ctx->pc = 0x1AB5E4u;
    // 0x1ab5e4: 0xc046e0a
    ctx->pc = 0x1AB5E4u;
    SET_GPR_U32(ctx, 31, 0x1AB5ECu);
    ctx->pc = 0x11B828u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B828_0x11b828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5ECu; }
    }
    if (ctx->pc != 0x1AB5ECu) { return; }
    ctx->pc = 0x1AB5ECu;
    // 0x1ab5ec: 0xc04042a
    ctx->pc = 0x1AB5ECu;
    SET_GPR_U32(ctx, 31, 0x1AB5F4u);
    ctx->pc = 0x1AB5F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1010A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001010A8_0x1010a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5F4u; }
    }
    if (ctx->pc != 0x1AB5F4u) { return; }
    ctx->pc = 0x1AB5F4u;
    // 0x1ab5f4: 0xc04070e
    ctx->pc = 0x1AB5F4u;
    SET_GPR_U32(ctx, 31, 0x1AB5FCu);
    ctx->pc = 0x1AB5F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x101C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101C38_0x101c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5FCu; }
    }
    if (ctx->pc != 0x1AB5FCu) { return; }
    ctx->pc = 0x1AB5FCu;
label_1ab5fc:
    // 0x1ab5fc: 0x3c040025
    ctx->pc = 0x1ab5fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1ab600: 0x24050001
    ctx->pc = 0x1ab600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab604: 0xc04629c
    ctx->pc = 0x1AB604u;
    SET_GPR_U32(ctx, 31, 0x1AB60Cu);
    ctx->pc = 0x1AB608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966640));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB60Cu; }
    }
    if (ctx->pc != 0x1AB60Cu) { return; }
    ctx->pc = 0x1AB60Cu;
    // 0x1ab60c: 0x40802d
    ctx->pc = 0x1ab60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab610: 0x440fffa
    ctx->pc = 0x1AB610u;
    {
        const bool branch_taken_0x1ab610 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ab610) {
            ctx->pc = 0x1AB5FCu;
            goto label_1ab5fc;
        }
    }
    ctx->pc = 0x1AB618u;
    // 0x1ab618: 0x200202d
    ctx->pc = 0x1ab618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab61c: 0x282d
    ctx->pc = 0x1ab61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab620: 0xc04639e
    ctx->pc = 0x1AB620u;
    SET_GPR_U32(ctx, 31, 0x1AB628u);
    ctx->pc = 0x1AB624u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB628u; }
    }
    if (ctx->pc != 0x1AB628u) { return; }
    ctx->pc = 0x1AB628u;
    // 0x1ab628: 0x40882d
    ctx->pc = 0x1ab628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab62c: 0x200202d
    ctx->pc = 0x1ab62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab630: 0x282d
    ctx->pc = 0x1ab630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab634: 0xc04639e
    ctx->pc = 0x1AB634u;
    SET_GPR_U32(ctx, 31, 0x1AB63Cu);
    ctx->pc = 0x1AB638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118E78_0x118e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB63Cu; }
    }
    if (ctx->pc != 0x1AB63Cu) { return; }
    ctx->pc = 0x1AB63Cu;
    // 0x1ab63c: 0x200202d
    ctx->pc = 0x1ab63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab640: 0x3c050100
    ctx->pc = 0x1ab640u;
    SET_GPR_U32(ctx, 5, ((uint32_t)256 << 16));
    // 0x1ab644: 0xc04642c
    ctx->pc = 0x1AB644u;
    SET_GPR_U32(ctx, 31, 0x1AB64Cu);
    ctx->pc = 0x1AB648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB64Cu; }
    }
    if (ctx->pc != 0x1AB64Cu) { return; }
    ctx->pc = 0x1AB64Cu;
    // 0x1ab64c: 0xc04633e
    ctx->pc = 0x1AB64Cu;
    SET_GPR_U32(ctx, 31, 0x1AB654u);
    ctx->pc = 0x1AB650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB654u; }
    }
    if (ctx->pc != 0x1AB654u) { return; }
    ctx->pc = 0x1AB654u;
label_1ab654:
    // 0x1ab654: 0xc046e2c
    ctx->pc = 0x1AB654u;
    SET_GPR_U32(ctx, 31, 0x1AB65Cu);
    ctx->pc = 0x1AB658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B8B0_0x11b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB65Cu; }
    }
    if (ctx->pc != 0x1AB65Cu) { return; }
    ctx->pc = 0x1AB65Cu;
    // 0x1ab65c: 0x40802d
    ctx->pc = 0x1ab65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab660: 0x0
    ctx->pc = 0x1ab660u;
    // NOP
    // 0x1ab664: 0x0
    ctx->pc = 0x1ab664u;
    // NOP
    // 0x1ab668: 0x1040fffa
    ctx->pc = 0x1AB668u;
    {
        const bool branch_taken_0x1ab668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab668) {
            ctx->pc = 0x1AB654u;
            goto label_1ab654;
        }
    }
    ctx->pc = 0x1AB670u;
    // 0x1ab670: 0x3c020100
    ctx->pc = 0x1ab670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x1ab674: 0x202d
    ctx->pc = 0x1ab674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab678: 0xafa20030
    ctx->pc = 0x1ab678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1ab67c: 0xafb10038
    ctx->pc = 0x1ab67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x1ab680: 0xafb00034
    ctx->pc = 0x1ab680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
    // 0x1ab684: 0xc045228
    ctx->pc = 0x1AB684u;
    SET_GPR_U32(ctx, 31, 0x1AB68Cu);
    ctx->pc = 0x1AB688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x1148A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001148A0_0x1148a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB68Cu; }
    }
    if (ctx->pc != 0x1AB68Cu) { return; }
    ctx->pc = 0x1AB68Cu;
    // 0x1ab68c: 0x27a40030
    ctx->pc = 0x1ab68cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ab690: 0xc045278
    ctx->pc = 0x1AB690u;
    SET_GPR_U32(ctx, 31, 0x1AB698u);
    ctx->pc = 0x1AB694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1149E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001149E0_0x1149e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB698u; }
    }
    if (ctx->pc != 0x1AB698u) { return; }
    ctx->pc = 0x1AB698u;
    // 0x1ab698: 0x40882d
    ctx->pc = 0x1ab698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab69c:
    // 0x1ab69c: 0xc045270
    ctx->pc = 0x1AB69Cu;
    SET_GPR_U32(ctx, 31, 0x1AB6A4u);
    ctx->pc = 0x1AB6A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1149C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001149C0_0x1149c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB6A4u; }
    }
    if (ctx->pc != 0x1AB6A4u) { return; }
    ctx->pc = 0x1AB6A4u;
    // 0x1ab6a4: 0x0
    ctx->pc = 0x1ab6a4u;
    // NOP
    // 0x1ab6a8: 0x0
    ctx->pc = 0x1ab6a8u;
    // NOP
    // 0x1ab6ac: 0x0
    ctx->pc = 0x1ab6acu;
    // NOP
    // 0x1ab6b0: 0x441fffa
    ctx->pc = 0x1AB6B0u;
    {
        const bool branch_taken_0x1ab6b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab6b0) {
            ctx->pc = 0x1AB69Cu;
            goto label_1ab69c;
        }
    }
    ctx->pc = 0x1AB6B8u;
    // 0x1ab6b8: 0x3c010100
    ctx->pc = 0x1ab6b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)256 << 16));
    // 0x1ab6bc: 0x3c050100
    ctx->pc = 0x1ab6bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)256 << 16));
    // 0x1ab6c0: 0x8c230004
    ctx->pc = 0x1ab6c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x1ab6c4: 0x24a50008
    ctx->pc = 0x1ab6c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ab6c8: 0x10000006
    ctx->pc = 0x1AB6C8u;
    {
        const bool branch_taken_0x1ab6c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB6CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6c8) {
            ctx->pc = 0x1AB6E4u;
            goto label_1ab6e4;
        }
    }
    ctx->pc = 0x1AB6D0u;
label_1ab6d0:
    // 0x1ab6d0: 0x8ca20000
    ctx->pc = 0x1ab6d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ab6d4: 0x24840001
    ctx->pc = 0x1ab6d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ab6d8: 0x501021
    ctx->pc = 0x1ab6d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ab6dc: 0xaca20000
    ctx->pc = 0x1ab6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1ab6e0: 0x24a50008
    ctx->pc = 0x1ab6e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
label_1ab6e4:
    // 0x1ab6e4: 0x83102a
    ctx->pc = 0x1ab6e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1ab6e8: 0x1440fff9
    ctx->pc = 0x1AB6E8u;
    {
        const bool branch_taken_0x1ab6e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB6ECu;
        SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
        if (branch_taken_0x1ab6e8) {
            ctx->pc = 0x1AB6D0u;
            goto label_1ab6d0;
        }
    }
    ctx->pc = 0x1AB6F0u;
    // 0x1ab6f0: 0x1000000b
    ctx->pc = 0x1AB6F0u;
    {
        const bool branch_taken_0x1ab6f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB6F4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 15984));
        if (branch_taken_0x1ab6f0) {
            ctx->pc = 0x1AB720u;
            goto label_1ab720;
        }
    }
    ctx->pc = 0x1AB6F8u;
label_1ab6f8:
    // 0x1ab6f8: 0x14620003
    ctx->pc = 0x1AB6F8u;
    {
        const bool branch_taken_0x1ab6f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AB6FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ab6f8) {
            ctx->pc = 0x1AB708u;
            goto label_1ab708;
        }
    }
    ctx->pc = 0x1AB700u;
    // 0x1ab700: 0xc04b132
    ctx->pc = 0x1AB700u;
    SET_GPR_U32(ctx, 31, 0x1AB708u);
    ctx->pc = 0x1AB704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x12C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C4C8_0x12c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB708u; }
    }
    if (ctx->pc != 0x1AB708u) { return; }
    ctx->pc = 0x1AB708u;
label_1ab708:
    // 0x1ab708: 0x8e250000
    ctx->pc = 0x1ab708u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ab70c: 0x8e260004
    ctx->pc = 0x1ab70cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ab710: 0x8e270008
    ctx->pc = 0x1ab710u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ab714: 0xc06ad40
    ctx->pc = 0x1AB714u;
    SET_GPR_U32(ctx, 31, 0x1AB71Cu);
    ctx->pc = 0x1AB718u;
    SET_GPR_U32(ctx, 4, ((uint32_t)256 << 16));
    ctx->pc = 0x1AB500u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB500_0x1ab500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB71Cu; }
    }
    if (ctx->pc != 0x1AB71Cu) { return; }
    ctx->pc = 0x1AB71Cu;
    // 0x1ab71c: 0x2631000c
    ctx->pc = 0x1ab71cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
label_1ab720:
    // 0x1ab720: 0x8e230000
    ctx->pc = 0x1ab720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ab724: 0x2402ffff
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab728: 0x1462fff3
    ctx->pc = 0x1AB728u;
    {
        const bool branch_taken_0x1ab728 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AB72Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1ab728) {
            ctx->pc = 0x1AB6F8u;
            goto label_1ab6f8;
        }
    }
    ctx->pc = 0x1AB730u;
    // 0x1ab730: 0xc046e86
    ctx->pc = 0x1AB730u;
    SET_GPR_U32(ctx, 31, 0x1AB738u);
    ctx->pc = 0x1AB734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11BA18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA18_0x11ba18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB738u; }
    }
    if (ctx->pc != 0x1AB738u) { return; }
    ctx->pc = 0x1AB738u;
    // 0x1ab738: 0xc06f3d8
    ctx->pc = 0x1AB738u;
    SET_GPR_U32(ctx, 31, 0x1AB740u);
    ctx->pc = 0x1BCF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCF60_0x1bcf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB740u; }
    }
    if (ctx->pc != 0x1AB740u) { return; }
    ctx->pc = 0x1AB740u;
    // 0x1ab740: 0x3c040025
    ctx->pc = 0x1ab740u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1ab744: 0x282d
    ctx->pc = 0x1ab744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab748: 0x2484fd90
    ctx->pc = 0x1ab748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966672));
    // 0x1ab74c: 0x302d
    ctx->pc = 0x1ab74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab750: 0xc0635dc
    ctx->pc = 0x1AB750u;
    SET_GPR_U32(ctx, 31, 0x1AB758u);
    ctx->pc = 0x1AB754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D770_0x18d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB758u; }
    }
    if (ctx->pc != 0x1AB758u) { return; }
    ctx->pc = 0x1AB758u;
    // 0x1ab758: 0x3c040025
    ctx->pc = 0x1ab758u;
    SET_GPR_U32(ctx, 4, ((uint32_t)37 << 16));
    // 0x1ab75c: 0x3c060025
    ctx->pc = 0x1ab75cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)37 << 16));
    // 0x1ab760: 0x2484fdb0
    ctx->pc = 0x1ab760u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966704));
    // 0x1ab764: 0x24050010
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ab768: 0x24c6fdd0
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294966736));
    // 0x1ab76c: 0xc0635dc
    ctx->pc = 0x1AB76Cu;
    SET_GPR_U32(ctx, 31, 0x1AB774u);
    ctx->pc = 0x1AB770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D770_0x18d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB774u; }
    }
    if (ctx->pc != 0x1AB774u) { return; }
    ctx->pc = 0x1AB774u;
    // 0x1ab774: 0xdfbf0020
    ctx->pc = 0x1ab774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab778: 0x7bb10010
    ctx->pc = 0x1ab778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab77c: 0x7bb00000
    ctx->pc = 0x1ab77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab780: 0x3e00008
    ctx->pc = 0x1AB780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB784u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB590u: goto label_1ab590;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5FCu: goto label_1ab5fc;
            case 0x1AB654u: goto label_1ab654;
            case 0x1AB69Cu: goto label_1ab69c;
            case 0x1AB6D0u: goto label_1ab6d0;
            case 0x1AB6E4u: goto label_1ab6e4;
            case 0x1AB6F8u: goto label_1ab6f8;
            case 0x1AB708u: goto label_1ab708;
            case 0x1AB720u: goto label_1ab720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB788u;
    // 0x1ab788: 0x0
    ctx->pc = 0x1ab788u;
    // NOP
    // 0x1ab78c: 0x0
    ctx->pc = 0x1ab78cu;
    // NOP
}
