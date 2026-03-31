#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0014F7E8
// Address: 0x14f7e8 - 0x14f908
void sub_0014F7E8_0x14f7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14f7e8u;

    // 0x14f7e8: 0x27bdffa0
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f7ec: 0xffb50038
    ctx->pc = 0x14f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x14f7f0: 0xa82d
    ctx->pc = 0x14f7f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f7f4: 0xffb60040
    ctx->pc = 0x14f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x14f7f8: 0xffb70048
    ctx->pc = 0x14f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x14f7fc: 0xa0b82d
    ctx->pc = 0x14f7fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f800: 0xffbe0050
    ctx->pc = 0x14f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x14f804: 0x80f02d
    ctx->pc = 0x14f804u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f808: 0xffb00010
    ctx->pc = 0x14f808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f80c: 0xffb10018
    ctx->pc = 0x14f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f810: 0xffb20020
    ctx->pc = 0x14f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14f814: 0xffb30028
    ctx->pc = 0x14f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14f818: 0xffb40030
    ctx->pc = 0x14f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14f81c: 0xffbf0058
    ctx->pc = 0x14f81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x14f820: 0x8ee30004
    ctx->pc = 0x14f820u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x14f824: 0xafa60000
    ctx->pc = 0x14f824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x14f828: 0x2465000f
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 15));
    // 0x14f82c: 0x28620000
    ctx->pc = 0x14f82cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x14f830: 0x8ee40008
    ctx->pc = 0x14f830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x14f834: 0xa2180b
    ctx->pc = 0x14f834u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x14f838: 0x31903
    ctx->pc = 0x14f838u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x14f83c: 0xafa30004
    ctx->pc = 0x14f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x14f840: 0x2486000f
    ctx->pc = 0x14f840u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 15));
    // 0x14f844: 0x28820000
    ctx->pc = 0x14f844u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 0));
    // 0x14f848: 0xc2200b
    ctx->pc = 0x14f848u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
    // 0x14f84c: 0x8fc50000
    ctx->pc = 0x14f84cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14f850: 0x4b103
    ctx->pc = 0x14f850u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 4));
    // 0x14f854: 0x1860001f
    ctx->pc = 0x14F854u;
    {
        const bool branch_taken_0x14f854 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14F858u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 23), 12)));
        if (branch_taken_0x14f854) {
            ctx->pc = 0x14F8D4u;
            goto label_14f8d4;
        }
    }
    ctx->pc = 0x14F85Cu;
    // 0x14f85c: 0x10000004
    ctx->pc = 0x14F85Cu;
    {
        const bool branch_taken_0x14f85c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14F860u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
        if (branch_taken_0x14f85c) {
            ctx->pc = 0x14F870u;
            goto label_14f870;
        }
    }
    ctx->pc = 0x14F864u;
    // 0x14f864: 0x0
    ctx->pc = 0x14f864u;
    // NOP
label_14f868:
    // 0x14f868: 0x8fc30008
    ctx->pc = 0x14f868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x14f86c: 0x0
    ctx->pc = 0x14f86cu;
    // NOP
label_14f870:
    // 0x14f870: 0x751818
    ctx->pc = 0x14f870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x14f874: 0x31040
    ctx->pc = 0x14f874u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x14f878: 0x431021
    ctx->pc = 0x14f878u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f87c: 0x210c0
    ctx->pc = 0x14f87cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x14f880: 0x1ac0000f
    ctx->pc = 0x14F880u;
    {
        const bool branch_taken_0x14f880 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x14F884u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x14f880) {
            ctx->pc = 0x14F8C0u;
            goto label_14f8c0;
        }
    }
    ctx->pc = 0x14F888u;
    // 0x14f888: 0x158980
    ctx->pc = 0x14f888u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 21), 6));
    // 0x14f88c: 0x149900
    ctx->pc = 0x14f88cu;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 20), 4));
    // 0x14f890: 0x2c0802d
    ctx->pc = 0x14f890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f894: 0x0
    ctx->pc = 0x14f894u;
    // NOP
label_14f898:
    // 0x14f898: 0x8ee60000
    ctx->pc = 0x14f898u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14f89c: 0x240202d
    ctx->pc = 0x14f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8a0: 0x8fa70000
    ctx->pc = 0x14f8a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f8a4: 0x280282d
    ctx->pc = 0x14f8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8a8: 0x2263021
    ctx->pc = 0x14f8a8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x14f8ac: 0x2338821
    ctx->pc = 0x14f8acu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x14f8b0: 0xc0533ee
    ctx->pc = 0x14F8B0u;
    SET_GPR_U32(ctx, 31, 0x14F8B8u);
    ctx->pc = 0x14F8B4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x14CFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CFB8_0x14cfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F8B8u; }
    }
    if (ctx->pc != 0x14F8B8u) { return; }
    ctx->pc = 0x14F8B8u;
    // 0x14f8b8: 0x1600fff7
    ctx->pc = 0x14F8B8u;
    {
        const bool branch_taken_0x14f8b8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x14F8BCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 384));
        if (branch_taken_0x14f8b8) {
            ctx->pc = 0x14F898u;
            goto label_14f898;
        }
    }
    ctx->pc = 0x14F8C0u;
label_14f8c0:
    // 0x14f8c0: 0x8fa30004
    ctx->pc = 0x14f8c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14f8c4: 0x26b50001
    ctx->pc = 0x14f8c4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f8c8: 0x2a3102a
    ctx->pc = 0x14f8c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 3)));
    // 0x14f8cc: 0x5440ffe6
    ctx->pc = 0x14F8CCu;
    {
        const bool branch_taken_0x14f8cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14f8cc) {
            ctx->pc = 0x14F8D0u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->pc = 0x14F868u;
            goto label_14f868;
        }
    }
    ctx->pc = 0x14F8D4u;
label_14f8d4:
    // 0x14f8d4: 0xdfb00010
    ctx->pc = 0x14f8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f8d8: 0xdfb10018
    ctx->pc = 0x14f8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f8dc: 0xdfb20020
    ctx->pc = 0x14f8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f8e0: 0xdfb30028
    ctx->pc = 0x14f8e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14f8e4: 0xdfb40030
    ctx->pc = 0x14f8e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f8e8: 0xdfb50038
    ctx->pc = 0x14f8e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14f8ec: 0xdfb60040
    ctx->pc = 0x14f8ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f8f0: 0xdfb70048
    ctx->pc = 0x14f8f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f8f4: 0xdfbe0050
    ctx->pc = 0x14f8f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f8f8: 0xdfbf0058
    ctx->pc = 0x14f8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x14f8fc: 0x3e00008
    ctx->pc = 0x14F8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F868u: goto label_14f868;
            case 0x14F870u: goto label_14f870;
            case 0x14F898u: goto label_14f898;
            case 0x14F8C0u: goto label_14f8c0;
            case 0x14F8D4u: goto label_14f8d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14F904u;
    // 0x14f904: 0x0
    ctx->pc = 0x14f904u;
    // NOP
}
