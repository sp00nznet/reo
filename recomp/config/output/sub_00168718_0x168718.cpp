#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00168718
// Address: 0x168718 - 0x168820
void sub_00168718_0x168718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x168718u;

    // 0x168718: 0x27bdffb0
    ctx->pc = 0x168718u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16871c: 0xffb30018
    ctx->pc = 0x16871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168720: 0xa0982d
    ctx->pc = 0x168720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168724: 0xffb40020
    ctx->pc = 0x168724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168728: 0x80a02d
    ctx->pc = 0x168728u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16872c: 0xffb50028
    ctx->pc = 0x16872cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x168730: 0xc0a82d
    ctx->pc = 0x168730u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168734: 0xffb60030
    ctx->pc = 0x168734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x168738: 0x293b021
    ctx->pc = 0x168738u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x16873c: 0xffb00000
    ctx->pc = 0x16873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168740: 0xffb10008
    ctx->pc = 0x168740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168744: 0xffb20010
    ctx->pc = 0x168744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168748: 0xffb70038
    ctx->pc = 0x168748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16874c: 0xffbf0040
    ctx->pc = 0x16874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x168750: 0x10000009
    ctx->pc = 0x168750u;
    {
        const bool branch_taken_0x168750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168754u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 21), 16)));
        if (branch_taken_0x168750) {
            ctx->pc = 0x168778u;
            goto label_168778;
        }
    }
    ctx->pc = 0x168758u;
label_168758:
    // 0x168758: 0xc05a2ea
    ctx->pc = 0x168758u;
    SET_GPR_U32(ctx, 31, 0x168760u);
    ctx->pc = 0x168BA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168BA8_0x168ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168760u; }
    }
    if (ctx->pc != 0x168760u) { return; }
    ctx->pc = 0x168760u;
    // 0x168760: 0x14400024
    ctx->pc = 0x168760u;
    {
        const bool branch_taken_0x168760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168764u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x168760) {
            ctx->pc = 0x1687F4u;
            goto label_1687f4;
        }
    }
    ctx->pc = 0x168768u;
    // 0x168768: 0x2541023
    ctx->pc = 0x168768u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_16876c:
    // 0x16876c: 0x24420001
    ctx->pc = 0x16876cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x168770: 0x2629823
    ctx->pc = 0x168770u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x168774: 0x282a021
    ctx->pc = 0x168774u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_168778:
    // 0x168778: 0x1a60001e
    ctx->pc = 0x168778u;
    {
        const bool branch_taken_0x168778 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16877Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x168778) {
            ctx->pc = 0x1687F4u;
            goto label_1687f4;
        }
    }
    ctx->pc = 0x168780u;
    // 0x168780: 0x280202d
    ctx->pc = 0x168780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168784: 0x260282d
    ctx->pc = 0x168784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168788: 0xc05a208
    ctx->pc = 0x168788u;
    SET_GPR_U32(ctx, 31, 0x168790u);
    ctx->pc = 0x16878Cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4 << 16));
    ctx->pc = 0x168820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168820_0x168820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168790u; }
    }
    if (ctx->pc != 0x168790u) { return; }
    ctx->pc = 0x168790u;
    // 0x168790: 0x40902d
    ctx->pc = 0x168790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168794: 0x240202d
    ctx->pc = 0x168794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168798: 0x12400015
    ctx->pc = 0x168798u;
    {
        const bool branch_taken_0x168798 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x16879Cu;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        if (branch_taken_0x168798) {
            ctx->pc = 0x1687F0u;
            goto label_1687f0;
        }
    }
    ctx->pc = 0x1687A0u;
    // 0x1687a0: 0x92420003
    ctx->pc = 0x1687a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1687a4: 0x24420040
    ctx->pc = 0x1687a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x1687a8: 0x304200ff
    ctx->pc = 0x1687a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1687ac: 0x2c420020
    ctx->pc = 0x1687acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 32));
    // 0x1687b0: 0x5040ffee
    ctx->pc = 0x1687B0u;
    {
        const bool branch_taken_0x1687b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1687b0) {
            ctx->pc = 0x1687B4u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
            ctx->pc = 0x16876Cu;
            goto label_16876c;
        }
    }
    ctx->pc = 0x1687B8u;
    // 0x1687b8: 0xc05a222
    ctx->pc = 0x1687B8u;
    SET_GPR_U32(ctx, 31, 0x1687C0u);
    ctx->pc = 0x1687BCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168888u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168888_0x168888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687C0u; }
    }
    if (ctx->pc != 0x1687C0u) { return; }
    ctx->pc = 0x1687C0u;
    // 0x1687c0: 0x2a0302d
    ctx->pc = 0x1687c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687c4: 0x40882d
    ctx->pc = 0x1687c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687c8: 0x2d11023
    ctx->pc = 0x1687c8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1687cc: 0x220202d
    ctx->pc = 0x1687ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687d0: 0x50182a
    ctx->pc = 0x1687d0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x1687d4: 0x43800b
    ctx->pc = 0x1687d4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    // 0x1687d8: 0xc05a242
    ctx->pc = 0x1687D8u;
    SET_GPR_U32(ctx, 31, 0x1687E0u);
    ctx->pc = 0x1687DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168908u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00168908_0x168908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687E0u; }
    }
    if (ctx->pc != 0x1687E0u) { return; }
    ctx->pc = 0x1687E0u;
    // 0x1687e0: 0x220202d
    ctx->pc = 0x1687e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687e4: 0x200282d
    ctx->pc = 0x1687e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687e8: 0x1040ffdb
    ctx->pc = 0x1687E8u;
    {
        const bool branch_taken_0x1687e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1687ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1687e8) {
            ctx->pc = 0x168758u;
            goto label_168758;
        }
    }
    ctx->pc = 0x1687F0u;
label_1687f0:
    // 0x1687f0: 0xdfb00000
    ctx->pc = 0x1687f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1687f4:
    // 0x1687f4: 0xdfb10008
    ctx->pc = 0x1687f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1687f8: 0xdfb20010
    ctx->pc = 0x1687f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1687fc: 0xdfb30018
    ctx->pc = 0x1687fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168800: 0xdfb40020
    ctx->pc = 0x168800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168804: 0xdfb50028
    ctx->pc = 0x168804u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168808: 0xdfb60030
    ctx->pc = 0x168808u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16880c: 0xdfb70038
    ctx->pc = 0x16880cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x168810: 0xdfbf0040
    ctx->pc = 0x168810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168814: 0x3e00008
    ctx->pc = 0x168814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168758u: goto label_168758;
            case 0x16876Cu: goto label_16876c;
            case 0x168778u: goto label_168778;
            case 0x1687F0u: goto label_1687f0;
            case 0x1687F4u: goto label_1687f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16881Cu;
    // 0x16881c: 0x0
    ctx->pc = 0x16881cu;
    // NOP
}
