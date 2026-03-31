#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017A818
// Address: 0x17a818 - 0x17a918
void sub_0017A818_0x17a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17a818u;

    // 0x17a818: 0x27bdfff0
    ctx->pc = 0x17a818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a81c: 0xffbf0000
    ctx->pc = 0x17a81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a820: 0xdfbf0000
    ctx->pc = 0x17a820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a824: 0x805ea46
    ctx->pc = 0x17A824u;
    ctx->pc = 0x17A828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17A918u;
    sub_0017A918_0x17a918(rdram, ctx, runtime); return;
    ctx->pc = 0x17A82Cu;
    // 0x17a82c: 0x0
    ctx->pc = 0x17a82cu;
    // NOP
    // 0x17a830: 0x27bdffc0
    ctx->pc = 0x17a830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a834: 0xffb00010
    ctx->pc = 0x17a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17a838: 0xa0802d
    ctx->pc = 0x17a838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a83c: 0xffb10018
    ctx->pc = 0x17a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17a840: 0x3a0282d
    ctx->pc = 0x17a840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a844: 0xffb30028
    ctx->pc = 0x17a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17a848: 0x80982d
    ctx->pc = 0x17a848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a84c: 0xffb40030
    ctx->pc = 0x17a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17a850: 0xc0a02d
    ctx->pc = 0x17a850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a854: 0xffbf0038
    ctx->pc = 0x17a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17a858: 0x27a60004
    ctx->pc = 0x17a858u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x17a85c: 0xffb20020
    ctx->pc = 0x17a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17a860: 0xc05f49a
    ctx->pc = 0x17A860u;
    SET_GPR_U32(ctx, 31, 0x17A868u);
    ctx->pc = 0x17A864u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x17D268u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D268_0x17d268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A868u; }
    }
    if (ctx->pc != 0x17A868u) { return; }
    ctx->pc = 0x17A868u;
    // 0x17a868: 0x8fa50000
    ctx->pc = 0x17a868u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a86c: 0x260202d
    ctx->pc = 0x17a86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a870: 0x240302d
    ctx->pc = 0x17a870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a874: 0x128fc2
    ctx->pc = 0x17a874u;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 18), 31));
    // 0x17a878: 0x52840
    ctx->pc = 0x17a878u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x17a87c: 0xc05f496
    ctx->pc = 0x17A87Cu;
    SET_GPR_U32(ctx, 31, 0x17A884u);
    ctx->pc = 0x17A880u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->pc = 0x17D258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D258_0x17d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A884u; }
    }
    if (ctx->pc != 0x17A884u) { return; }
    ctx->pc = 0x17A884u;
    // 0x17a884: 0x8e020048
    ctx->pc = 0x17a884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17a888: 0x118843
    ctx->pc = 0x17a888u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x17a88c: 0x200202d
    ctx->pc = 0x17a88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a890: 0x21fc2
    ctx->pc = 0x17a890u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x17a894: 0x220282d
    ctx->pc = 0x17a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a898: 0x431021
    ctx->pc = 0x17a898u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a89c: 0x21043
    ctx->pc = 0x17a89cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17a8a0: 0xc05f546
    ctx->pc = 0x17A8A0u;
    SET_GPR_U32(ctx, 31, 0x17A8A8u);
    ctx->pc = 0x17A8A4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x17D518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D518_0x17d518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8A8u; }
    }
    if (ctx->pc != 0x17A8A8u) { return; }
    ctx->pc = 0x17A8A8u;
    // 0x17a8a8: 0x260202d
    ctx->pc = 0x17a8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8ac: 0x200282d
    ctx->pc = 0x17a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8b0: 0xc05ea46
    ctx->pc = 0x17A8B0u;
    SET_GPR_U32(ctx, 31, 0x17A8B8u);
    ctx->pc = 0x17A8B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A918_0x17a918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8B8u; }
    }
    if (ctx->pc != 0x17A8B8u) { return; }
    ctx->pc = 0x17A8B8u;
    // 0x17a8b8: 0x260202d
    ctx->pc = 0x17a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8bc: 0x8fa50000
    ctx->pc = 0x17a8bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a8c0: 0x240302d
    ctx->pc = 0x17a8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8c4: 0xc05f496
    ctx->pc = 0x17A8C4u;
    SET_GPR_U32(ctx, 31, 0x17A8CCu);
    ctx->pc = 0x17A8C8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x17D258u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D258_0x17d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8CCu; }
    }
    if (ctx->pc != 0x17A8CCu) { return; }
    ctx->pc = 0x17A8CCu;
    // 0x17a8cc: 0x200202d
    ctx->pc = 0x17a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8d0: 0xc05f546
    ctx->pc = 0x17A8D0u;
    SET_GPR_U32(ctx, 31, 0x17A8D8u);
    ctx->pc = 0x17A8D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D518u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D518_0x17d518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8D8u; }
    }
    if (ctx->pc != 0x17A8D8u) { return; }
    ctx->pc = 0x17A8D8u;
    // 0x17a8d8: 0x200202d
    ctx->pc = 0x17a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8dc: 0xc05f524
    ctx->pc = 0x17A8DCu;
    SET_GPR_U32(ctx, 31, 0x17A8E4u);
    ctx->pc = 0x17A8E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D490_0x17d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8E4u; }
    }
    if (ctx->pc != 0x17A8E4u) { return; }
    ctx->pc = 0x17A8E4u;
    // 0x17a8e4: 0x260202d
    ctx->pc = 0x17a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8e8: 0x8fa60000
    ctx->pc = 0x17a8e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a8ec: 0x200282d
    ctx->pc = 0x17a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a8f0: 0xc05ea46
    ctx->pc = 0x17A8F0u;
    SET_GPR_U32(ctx, 31, 0x17A8F8u);
    ctx->pc = 0x17A8F4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->pc = 0x17A918u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A918_0x17a918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A8F8u; }
    }
    if (ctx->pc != 0x17A8F8u) { return; }
    ctx->pc = 0x17A8F8u;
    // 0x17a8f8: 0xdfb00010
    ctx->pc = 0x17a8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a8fc: 0xdfb10018
    ctx->pc = 0x17a8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a900: 0xdfb20020
    ctx->pc = 0x17a900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a904: 0xdfb30028
    ctx->pc = 0x17a904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a908: 0xdfb40030
    ctx->pc = 0x17a908u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a90c: 0xdfbf0038
    ctx->pc = 0x17a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a910: 0x3e00008
    ctx->pc = 0x17A910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A918u;
}
