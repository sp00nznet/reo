#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001886B8
// Address: 0x1886b8 - 0x188840
void sub_001886B8_0x1886b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1886b8u;

    // 0x1886b8: 0x27bdffa0
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1886bc: 0x3c020029
    ctx->pc = 0x1886bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x1886c0: 0xffb40030
    ctx->pc = 0x1886c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1886c4: 0x80a02d
    ctx->pc = 0x1886c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886c8: 0xffbe0050
    ctx->pc = 0x1886c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1886cc: 0x14f0c0
    ctx->pc = 0x1886ccu;
    SET_GPR_U32(ctx, 30, SLL32(GPR_U32(ctx, 20), 3));
    // 0x1886d0: 0xffb30028
    ctx->pc = 0x1886d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1886d4: 0x2453b8c8
    ctx->pc = 0x1886d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294949064));
    // 0x1886d8: 0x3d41023
    ctx->pc = 0x1886d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x1886dc: 0xffb10018
    ctx->pc = 0x1886dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1886e0: 0xffb50038
    ctx->pc = 0x1886e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1886e4: 0x26630004
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1886e8: 0xffb70048
    ctx->pc = 0x1886e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1886ec: 0xa0b82d
    ctx->pc = 0x1886ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886f0: 0xffb00010
    ctx->pc = 0x1886f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1886f4: 0x28880
    ctx->pc = 0x1886f4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1886f8: 0xffb20020
    ctx->pc = 0x1886f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1886fc: 0x223a821
    ctx->pc = 0x1886fcu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x188700: 0xffb60040
    ctx->pc = 0x188700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x188704: 0xffbf0058
    ctx->pc = 0x188704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x188708: 0xc0623b6
    ctx->pc = 0x188708u;
    SET_GPR_U32(ctx, 31, 0x188710u);
    ctx->pc = 0x18870Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x188ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188ED8_0x188ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188710u; }
    }
    if (ctx->pc != 0x188710u) { return; }
    ctx->pc = 0x188710u;
    // 0x188710: 0x24030003
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x188714: 0x14430004
    ctx->pc = 0x188714u;
    {
        const bool branch_taken_0x188714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x188718u;
        SET_GPR_U32(ctx, 22, ((uint32_t)41 << 16));
        if (branch_taken_0x188714) {
            ctx->pc = 0x188728u;
            goto label_188728;
        }
    }
    ctx->pc = 0x18871Cu;
    // 0x18871c: 0x1000003a
    ctx->pc = 0x18871Cu;
    {
        const bool branch_taken_0x18871c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x188720u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18871c) {
            ctx->pc = 0x188808u;
            goto label_188808;
        }
    }
    ctx->pc = 0x188724u;
    // 0x188724: 0x0
    ctx->pc = 0x188724u;
    // NOP
label_188728:
    // 0x188728: 0x282d
    ctx->pc = 0x188728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18872c: 0x26d0b900
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 22), 4294949120));
    // 0x188730: 0x24062080
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8320));
    // 0x188734: 0x200202d
    ctx->pc = 0x188734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188738: 0xc041f1a
    ctx->pc = 0x188738u;
    SET_GPR_U32(ctx, 31, 0x188740u);
    ctx->pc = 0x18873Cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8320));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188740u; }
    }
    if (ctx->pc != 0x188740u) { return; }
    ctx->pc = 0x188740u;
    // 0x188740: 0xae000000
    ctx->pc = 0x188740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x188744: 0x2712021
    ctx->pc = 0x188744u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x188748: 0x3c110029
    ctx->pc = 0x188748u;
    SET_GPR_U32(ctx, 17, ((uint32_t)41 << 16));
    // 0x18874c: 0x80102d
    ctx->pc = 0x18874cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188750: 0x2631d980
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294957440));
    // 0x188754: 0x40182d
    ctx->pc = 0x188754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188758: 0x8c470008
    ctx->pc = 0x188758u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18875c: 0x8c68000c
    ctx->pc = 0x18875cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x188760: 0x282d
    ctx->pc = 0x188760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188764: 0x8c830010
    ctx->pc = 0x188764u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x188768: 0x220202d
    ctx->pc = 0x188768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18876c: 0x24060100
    ctx->pc = 0x18876cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x188770: 0x24020001
    ctx->pc = 0x188770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188774: 0xafb20000
    ctx->pc = 0x188774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x188778: 0x2a0902d
    ctx->pc = 0x188778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18877c: 0xae170020
    ctx->pc = 0x18877cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 23));
    // 0x188780: 0x3c170018
    ctx->pc = 0x188780u;
    SET_GPR_U32(ctx, 23, ((uint32_t)24 << 16));
    // 0x188784: 0xae070008
    ctx->pc = 0x188784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x188788: 0x3c130023
    ctx->pc = 0x188788u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x18878c: 0xae08000c
    ctx->pc = 0x18878cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x188790: 0x24150001
    ctx->pc = 0x188790u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188794: 0xae030010
    ctx->pc = 0x188794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x188798: 0xae020004
    ctx->pc = 0x188798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x18879c: 0xae000014
    ctx->pc = 0x18879cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1887a0: 0xae000018
    ctx->pc = 0x1887a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1887a4: 0xc041f1a
    ctx->pc = 0x1887A4u;
    SET_GPR_U32(ctx, 31, 0x1887ACu);
    ctx->pc = 0x1887A8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887ACu; }
    }
    if (ctx->pc != 0x1887ACu) { return; }
    ctx->pc = 0x1887ACu;
    // 0x1887ac: 0x220202d
    ctx->pc = 0x1887acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887b0: 0xc0453c6
    ctx->pc = 0x1887B0u;
    SET_GPR_U32(ctx, 31, 0x1887B8u);
    ctx->pc = 0x1887B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 255));
    ctx->pc = 0x114F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00114F18_0x114f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887B8u; }
    }
    if (ctx->pc != 0x1887B8u) { return; }
    ctx->pc = 0x1887B8u;
    // 0x1887b8: 0x24020009
    ctx->pc = 0x1887b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1887bc: 0xae62fd24
    ctx->pc = 0x1887bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966564), GPR_U32(ctx, 2));
    // 0x1887c0: 0x8e440000
    ctx->pc = 0x1887c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1887c4: 0x0
    ctx->pc = 0x1887c4u;
    // NOP
label_1887c8:
    // 0x1887c8: 0x3a0302d
    ctx->pc = 0x1887c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887cc: 0x8e65fd24
    ctx->pc = 0x1887ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4294966564)));
    // 0x1887d0: 0x26c7b900
    ctx->pc = 0x1887d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 22), 4294949120));
    // 0x1887d4: 0xc062560
    ctx->pc = 0x1887D4u;
    SET_GPR_U32(ctx, 31, 0x1887DCu);
    ctx->pc = 0x1887D8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 23), 30728));
    ctx->pc = 0x189580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00189580_0x189580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887DCu; }
    }
    if (ctx->pc != 0x1887DCu) { return; }
    ctx->pc = 0x1887DCu;
    // 0x1887dc: 0x5455fffa
    ctx->pc = 0x1887DCu;
    {
        const bool branch_taken_0x1887dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x1887dc) {
            ctx->pc = 0x1887E0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x1887C8u;
            goto label_1887c8;
        }
    }
    ctx->pc = 0x1887E4u;
    // 0x1887e4: 0x3c040029
    ctx->pc = 0x1887e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)41 << 16));
    // 0x1887e8: 0x3d41023
    ctx->pc = 0x1887e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x1887ec: 0x2483b8c8
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294949064));
    // 0x1887f0: 0x21080
    ctx->pc = 0x1887f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1887f4: 0x621821
    ctx->pc = 0x1887f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1887f8: 0xc061db2
    ctx->pc = 0x1887F8u;
    SET_GPR_U32(ctx, 31, 0x188800u);
    ctx->pc = 0x1887FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x1876C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001876C8_0x1876c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188800u; }
    }
    if (ctx->pc != 0x188800u) { return; }
    ctx->pc = 0x188800u;
    // 0x188800: 0x8c420008
    ctx->pc = 0x188800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x188804: 0x2102b
    ctx->pc = 0x188804u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_188808:
    // 0x188808: 0xdfb00010
    ctx->pc = 0x188808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18880c: 0xdfb10018
    ctx->pc = 0x18880cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188810: 0xdfb20020
    ctx->pc = 0x188810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188814: 0xdfb30028
    ctx->pc = 0x188814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188818: 0xdfb40030
    ctx->pc = 0x188818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18881c: 0xdfb50038
    ctx->pc = 0x18881cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x188820: 0xdfb60040
    ctx->pc = 0x188820u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188824: 0xdfb70048
    ctx->pc = 0x188824u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x188828: 0xdfbe0050
    ctx->pc = 0x188828u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18882c: 0xdfbf0058
    ctx->pc = 0x18882cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x188830: 0x3e00008
    ctx->pc = 0x188830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188834u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188728u: goto label_188728;
            case 0x1887C8u: goto label_1887c8;
            case 0x188808u: goto label_188808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188838u;
    // 0x188838: 0x3e00008
    ctx->pc = 0x188838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18883Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188728u: goto label_188728;
            case 0x1887C8u: goto label_1887c8;
            case 0x188808u: goto label_188808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188840u;
}
