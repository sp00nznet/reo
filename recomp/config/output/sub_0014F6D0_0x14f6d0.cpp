#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0014F6D0
// Address: 0x14f6d0 - 0x14f7c8
void sub_0014F6D0_0x14f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14f6d0u;

    // 0x14f6d0: 0x27bdffb0
    ctx->pc = 0x14f6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14f6d4: 0xffb30018
    ctx->pc = 0x14f6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14f6d8: 0xffb40020
    ctx->pc = 0x14f6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14f6dc: 0xa02d
    ctx->pc = 0x14f6dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6e0: 0xffb50028
    ctx->pc = 0x14f6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14f6e4: 0x80a82d
    ctx->pc = 0x14f6e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6e8: 0xffb60030
    ctx->pc = 0x14f6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14f6ec: 0xffb70038
    ctx->pc = 0x14f6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x14f6f0: 0xc0b82d
    ctx->pc = 0x14f6f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6f4: 0xffb00000
    ctx->pc = 0x14f6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f6f8: 0xffb10008
    ctx->pc = 0x14f6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14f6fc: 0xffb20010
    ctx->pc = 0x14f6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14f700: 0xffbf0040
    ctx->pc = 0x14f700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14f704: 0x8ca30004
    ctx->pc = 0x14f704u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14f708: 0x8ca40008
    ctx->pc = 0x14f708u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14f70c: 0x2466000f
    ctx->pc = 0x14f70cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 15));
    // 0x14f710: 0x28620000
    ctx->pc = 0x14f710u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x14f714: 0xc2180b
    ctx->pc = 0x14f714u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 6));
    // 0x14f718: 0x28820000
    ctx->pc = 0x14f718u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 0));
    // 0x14f71c: 0x2487000f
    ctx->pc = 0x14f71cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 15));
    // 0x14f720: 0x3b103
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 4));
    // 0x14f724: 0xe2200b
    ctx->pc = 0x14f724u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 7));
    // 0x14f728: 0x8ea60000
    ctx->pc = 0x14f728u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14f72c: 0x49903
    ctx->pc = 0x14f72cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 4), 4));
    // 0x14f730: 0x1ac00019
    ctx->pc = 0x14F730u;
    {
        const bool branch_taken_0x14f730 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x14F734u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x14f730) {
            ctx->pc = 0x14F798u;
            goto label_14f798;
        }
    }
    ctx->pc = 0x14F738u;
    // 0x14f738: 0x10000003
    ctx->pc = 0x14F738u;
    {
        const bool branch_taken_0x14f738 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14F73Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 8)));
        if (branch_taken_0x14f738) {
            ctx->pc = 0x14F748u;
            goto label_14f748;
        }
    }
    ctx->pc = 0x14F740u;
label_14f740:
    // 0x14f740: 0x8ea30008
    ctx->pc = 0x14f740u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14f744: 0x0
    ctx->pc = 0x14f744u;
    // NOP
label_14f748:
    // 0x14f748: 0x741818
    ctx->pc = 0x14f748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x14f74c: 0x31040
    ctx->pc = 0x14f74cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x14f750: 0x431021
    ctx->pc = 0x14f750u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f754: 0x210c0
    ctx->pc = 0x14f754u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x14f758: 0x1a60000b
    ctx->pc = 0x14F758u;
    {
        const bool branch_taken_0x14f758 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x14F75Cu;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x14f758) {
            ctx->pc = 0x14F788u;
            goto label_14f788;
        }
    }
    ctx->pc = 0x14F760u;
    // 0x14f760: 0x260802d
    ctx->pc = 0x14f760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f764: 0x220202d
    ctx->pc = 0x14f764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f768:
    // 0x14f768: 0x26310180
    ctx->pc = 0x14f768u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 384));
    // 0x14f76c: 0x240282d
    ctx->pc = 0x14f76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f770: 0x26520400
    ctx->pc = 0x14f770u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1024));
    // 0x14f774: 0x2610ffff
    ctx->pc = 0x14f774u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x14f778: 0xc052a14
    ctx->pc = 0x14F778u;
    SET_GPR_U32(ctx, 31, 0x14F780u);
    ctx->pc = 0x14F77Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14A850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A850_0x14a850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F780u; }
    }
    if (ctx->pc != 0x14F780u) { return; }
    ctx->pc = 0x14F780u;
    // 0x14f780: 0x1600fff9
    ctx->pc = 0x14F780u;
    {
        const bool branch_taken_0x14f780 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x14F784u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14f780) {
            ctx->pc = 0x14F768u;
            goto label_14f768;
        }
    }
    ctx->pc = 0x14F788u;
label_14f788:
    // 0x14f788: 0x26940001
    ctx->pc = 0x14f788u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x14f78c: 0x296102a
    ctx->pc = 0x14f78cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 22)));
    // 0x14f790: 0x5440ffeb
    ctx->pc = 0x14F790u;
    {
        const bool branch_taken_0x14f790 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14f790) {
            ctx->pc = 0x14F794u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x14F740u;
            goto label_14f740;
        }
    }
    ctx->pc = 0x14F798u;
label_14f798:
    // 0x14f798: 0xdfb00000
    ctx->pc = 0x14f798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f79c: 0xdfb10008
    ctx->pc = 0x14f79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f7a0: 0xdfb20010
    ctx->pc = 0x14f7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f7a4: 0xdfb30018
    ctx->pc = 0x14f7a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f7a8: 0xdfb40020
    ctx->pc = 0x14f7a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f7ac: 0xdfb50028
    ctx->pc = 0x14f7acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14f7b0: 0xdfb60030
    ctx->pc = 0x14f7b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f7b4: 0xdfb70038
    ctx->pc = 0x14f7b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14f7b8: 0xdfbf0040
    ctx->pc = 0x14f7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f7bc: 0x3e00008
    ctx->pc = 0x14F7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F7C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F740u: goto label_14f740;
            case 0x14F748u: goto label_14f748;
            case 0x14F768u: goto label_14f768;
            case 0x14F788u: goto label_14f788;
            case 0x14F798u: goto label_14f798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F7C4u;
    // 0x14f7c4: 0x0
    ctx->pc = 0x14f7c4u;
    // NOP
}
