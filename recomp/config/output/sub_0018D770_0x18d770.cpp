#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0018D770
// Address: 0x18d770 - 0x18d900
void sub_0018D770_0x18d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x18d770u;

    // 0x18d770: 0x27bdffa0
    ctx->pc = 0x18d770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18d774: 0xffbf0050
    ctx->pc = 0x18d774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18d778: 0x7fb40040
    ctx->pc = 0x18d778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18d77c: 0x7fb30030
    ctx->pc = 0x18d77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18d780: 0x80a02d
    ctx->pc = 0x18d780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d784: 0x7fb20020
    ctx->pc = 0x18d784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d788: 0xa0982d
    ctx->pc = 0x18d788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d78c: 0x7fb10010
    ctx->pc = 0x18d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d790: 0xc0902d
    ctx->pc = 0x18d790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d794: 0xe0882d
    ctx->pc = 0x18d794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d798: 0x1620000a
    ctx->pc = 0x18D798u;
    {
        const bool branch_taken_0x18d798 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D79Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x18d798) {
            ctx->pc = 0x18D7C4u;
            goto label_18d7c4;
        }
    }
    ctx->pc = 0x18D7A0u;
    // 0x18d7a0: 0xc0471de
    ctx->pc = 0x18D7A0u;
    SET_GPR_U32(ctx, 31, 0x18D7A8u);
    ctx->pc = 0x11C778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C778_0x11c778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7A8u; }
    }
    if (ctx->pc != 0x18D7A8u) { return; }
    ctx->pc = 0x18D7A8u;
    // 0x18d7a8: 0x4410015
    ctx->pc = 0x18D7A8u;
    {
        const bool branch_taken_0x18d7a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18D7ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
        if (branch_taken_0x18d7a8) {
            ctx->pc = 0x18D800u;
            goto label_18d800;
        }
    }
    ctx->pc = 0x18D7B0u;
    // 0x18d7b0: 0x280282d
    ctx->pc = 0x18d7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7b4: 0xc0423b4
    ctx->pc = 0x18D7B4u;
    SET_GPR_U32(ctx, 31, 0x18D7BCu);
    ctx->pc = 0x18D7B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7248));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7BCu; }
    }
    if (ctx->pc != 0x18D7BCu) { return; }
    ctx->pc = 0x18D7BCu;
    // 0x18d7bc: 0x10000011
    ctx->pc = 0x18D7BCu;
    {
        const bool branch_taken_0x18d7bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D7C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x18d7bc) {
            ctx->pc = 0x18D804u;
            goto label_18d804;
        }
    }
    ctx->pc = 0x18D7C4u;
label_18d7c4:
    // 0x18d7c4: 0x10000007
    ctx->pc = 0x18D7C4u;
    {
        const bool branch_taken_0x18d7c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D7C8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d7c4) {
            ctx->pc = 0x18D7E4u;
            goto label_18d7e4;
        }
    }
    ctx->pc = 0x18D7CCu;
label_18d7cc:
    // 0x18d7cc: 0x260282d
    ctx->pc = 0x18d7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7d0: 0xc0471de
    ctx->pc = 0x18D7D0u;
    SET_GPR_U32(ctx, 31, 0x18D7D8u);
    ctx->pc = 0x18D7D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11C778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C778_0x11c778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7D8u; }
    }
    if (ctx->pc != 0x18D7D8u) { return; }
    ctx->pc = 0x18D7D8u;
    // 0x18d7d8: 0x1c400009
    ctx->pc = 0x18D7D8u;
    {
        const bool branch_taken_0x18d7d8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x18d7d8) {
            ctx->pc = 0x18D800u;
            goto label_18d800;
        }
    }
    ctx->pc = 0x18D7E0u;
    // 0x18d7e0: 0x26100001
    ctx->pc = 0x18d7e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_18d7e4:
    // 0x18d7e4: 0x211102a
    ctx->pc = 0x18d7e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x18d7e8: 0x1440fff8
    ctx->pc = 0x18D7E8u;
    {
        const bool branch_taken_0x18d7e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D7ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d7e8) {
            ctx->pc = 0x18D7CCu;
            goto label_18d7cc;
        }
    }
    ctx->pc = 0x18D7F0u;
    // 0x18d7f0: 0x3c040024
    ctx->pc = 0x18d7f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18d7f4: 0x280282d
    ctx->pc = 0x18d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7f8: 0xc0423b4
    ctx->pc = 0x18D7F8u;
    SET_GPR_U32(ctx, 31, 0x18D800u);
    ctx->pc = 0x18D7FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7248));
    ctx->pc = 0x108ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00108ED0_0x108ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D800u; }
    }
    if (ctx->pc != 0x18D800u) { return; }
    ctx->pc = 0x18D800u;
label_18d800:
    // 0x18d800: 0xdfbf0050
    ctx->pc = 0x18d800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18d804:
    // 0x18d804: 0x7bb40040
    ctx->pc = 0x18d804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d808: 0x7bb30030
    ctx->pc = 0x18d808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d80c: 0x7bb20020
    ctx->pc = 0x18d80cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d810: 0x7bb10010
    ctx->pc = 0x18d810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d814: 0x7bb00000
    ctx->pc = 0x18d814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d818: 0x3e00008
    ctx->pc = 0x18D818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D81Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D7C4u: goto label_18d7c4;
            case 0x18D7CCu: goto label_18d7cc;
            case 0x18D7E4u: goto label_18d7e4;
            case 0x18D800u: goto label_18d800;
            case 0x18D804u: goto label_18d804;
            case 0x18D8BCu: goto label_18d8bc;
            case 0x18D8DCu: goto label_18d8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D820u;
    // 0x18d820: 0x27bdf7c0
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965184));
    // 0x18d824: 0xffbf0030
    ctx->pc = 0x18d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d828: 0x7fb20020
    ctx->pc = 0x18d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d82c: 0x7fb10010
    ctx->pc = 0x18d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d830: 0xa0902d
    ctx->pc = 0x18d830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d834: 0x7fb00000
    ctx->pc = 0x18d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d838: 0x3c050024
    ctx->pc = 0x18d838u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18d83c: 0x80802d
    ctx->pc = 0x18d83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d840: 0xc0882d
    ctx->pc = 0x18d840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d844: 0x27a40040
    ctx->pc = 0x18d844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d848: 0xc042bf0
    ctx->pc = 0x18D848u;
    SET_GPR_U32(ctx, 31, 0x18D850u);
    ctx->pc = 0x18D84Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7272));
    ctx->pc = 0x10AFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFC0_0x10afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D850u; }
    }
    if (ctx->pc != 0x18D850u) { return; }
    ctx->pc = 0x18D850u;
    // 0x18d850: 0xc042c56
    ctx->pc = 0x18D850u;
    SET_GPR_U32(ctx, 31, 0x18D858u);
    ctx->pc = 0x18D854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10B158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B158_0x10b158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D858u; }
    }
    if (ctx->pc != 0x18D858u) { return; }
    ctx->pc = 0x18D858u;
    // 0x18d858: 0x5d1021
    ctx->pc = 0x18d858u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x18d85c: 0x200282d
    ctx->pc = 0x18d85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d860: 0x24500040
    ctx->pc = 0x18d860u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 64));
    // 0x18d864: 0xc042aee
    ctx->pc = 0x18D864u;
    SET_GPR_U32(ctx, 31, 0x18D86Cu);
    ctx->pc = 0x18D868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D86Cu; }
    }
    if (ctx->pc != 0x18D86Cu) { return; }
    ctx->pc = 0x18D86Cu;
    // 0x18d86c: 0xc04336a
    ctx->pc = 0x18D86Cu;
    SET_GPR_U32(ctx, 31, 0x18D874u);
    ctx->pc = 0x18D870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CDA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CDA8_0x10cda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D874u; }
    }
    if (ctx->pc != 0x18D874u) { return; }
    ctx->pc = 0x18D874u;
    // 0x18d874: 0x3c050024
    ctx->pc = 0x18d874u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18d878: 0x27a40040
    ctx->pc = 0x18d878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d87c: 0xc042aee
    ctx->pc = 0x18D87Cu;
    SET_GPR_U32(ctx, 31, 0x18D884u);
    ctx->pc = 0x18D880u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7280));
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010ABB8_0x10abb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D884u; }
    }
    if (ctx->pc != 0x18D884u) { return; }
    ctx->pc = 0x18D884u;
    // 0x18d884: 0xc0635d8
    ctx->pc = 0x18D884u;
    SET_GPR_U32(ctx, 31, 0x18D88Cu);
    ctx->pc = 0x18D888u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18D760u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D760_0x18d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D88Cu; }
    }
    if (ctx->pc != 0x18D88Cu) { return; }
    ctx->pc = 0x18D88Cu;
    // 0x18d88c: 0xc06ade4
    ctx->pc = 0x18D88Cu;
    SET_GPR_U32(ctx, 31, 0x18D894u);
    ctx->pc = 0x1AB790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB790_0x1ab790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D894u; }
    }
    if (ctx->pc != 0x18D894u) { return; }
    ctx->pc = 0x18D894u;
    // 0x18d894: 0x27a40040
    ctx->pc = 0x18d894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d898: 0xc04629c
    ctx->pc = 0x18D898u;
    SET_GPR_U32(ctx, 31, 0x18D8A0u);
    ctx->pc = 0x18D89Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x118A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118A70_0x118a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8A0u; }
    }
    if (ctx->pc != 0x18D8A0u) { return; }
    ctx->pc = 0x18D8A0u;
    // 0x18d8a0: 0x40802d
    ctx->pc = 0x18d8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8a4: 0x6010005
    ctx->pc = 0x18D8A4u;
    {
        const bool branch_taken_0x18d8a4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x18D8A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d8a4) {
            ctx->pc = 0x18D8BCu;
            goto label_18d8bc;
        }
    }
    ctx->pc = 0x18D8ACu;
    // 0x18d8ac: 0xc06adfc
    ctx->pc = 0x18D8ACu;
    SET_GPR_U32(ctx, 31, 0x18D8B4u);
    ctx->pc = 0x1AB7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB7F0_0x1ab7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8B4u; }
    }
    if (ctx->pc != 0x18D8B4u) { return; }
    ctx->pc = 0x18D8B4u;
    // 0x18d8b4: 0x10000009
    ctx->pc = 0x18D8B4u;
    {
        const bool branch_taken_0x18d8b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D8B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d8b4) {
            ctx->pc = 0x18D8DCu;
            goto label_18d8dc;
        }
    }
    ctx->pc = 0x18D8BCu;
label_18d8bc:
    // 0x18d8bc: 0x220302d
    ctx->pc = 0x18d8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8c0: 0xc04642c
    ctx->pc = 0x18D8C0u;
    SET_GPR_U32(ctx, 31, 0x18D8C8u);
    ctx->pc = 0x18D8C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1190B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001190B0_0x1190b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8C8u; }
    }
    if (ctx->pc != 0x18D8C8u) { return; }
    ctx->pc = 0x18D8C8u;
    // 0x18d8c8: 0xc04633e
    ctx->pc = 0x18D8C8u;
    SET_GPR_U32(ctx, 31, 0x18D8D0u);
    ctx->pc = 0x18D8CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x118CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00118CF8_0x118cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8D0u; }
    }
    if (ctx->pc != 0x18D8D0u) { return; }
    ctx->pc = 0x18D8D0u;
    // 0x18d8d0: 0xc06adfc
    ctx->pc = 0x18D8D0u;
    SET_GPR_U32(ctx, 31, 0x18D8D8u);
    ctx->pc = 0x1AB7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB7F0_0x1ab7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8D8u; }
    }
    if (ctx->pc != 0x18D8D8u) { return; }
    ctx->pc = 0x18D8D8u;
    // 0x18d8d8: 0x24020001
    ctx->pc = 0x18d8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18d8dc:
    // 0x18d8dc: 0xdfbf0030
    ctx->pc = 0x18d8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d8e0: 0x7bb20020
    ctx->pc = 0x18d8e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d8e4: 0x7bb10010
    ctx->pc = 0x18d8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d8e8: 0x7bb00000
    ctx->pc = 0x18d8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d8ec: 0x3e00008
    ctx->pc = 0x18D8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D8F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 2112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D7C4u: goto label_18d7c4;
            case 0x18D7CCu: goto label_18d7cc;
            case 0x18D7E4u: goto label_18d7e4;
            case 0x18D800u: goto label_18d800;
            case 0x18D804u: goto label_18d804;
            case 0x18D8BCu: goto label_18d8bc;
            case 0x18D8DCu: goto label_18d8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D8F4u;
    // 0x18d8f4: 0x0
    ctx->pc = 0x18d8f4u;
    // NOP
    // 0x18d8f8: 0x0
    ctx->pc = 0x18d8f8u;
    // NOP
    // 0x18d8fc: 0x0
    ctx->pc = 0x18d8fcu;
    // NOP
}
