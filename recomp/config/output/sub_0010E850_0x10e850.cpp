#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0010E850
// Address: 0x10e850 - 0x10ea10
void sub_0010E850_0x10e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e850u;

    // 0x10e850: 0x27bdffa0
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10e854: 0x24020066
    ctx->pc = 0x10e854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
    // 0x10e858: 0xffb10018
    ctx->pc = 0x10e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10e85c: 0x140882d
    ctx->pc = 0x10e85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e860: 0xffb00010
    ctx->pc = 0x10e860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10e864: 0x100802d
    ctx->pc = 0x10e864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e868: 0xffb20020
    ctx->pc = 0x10e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e86c: 0xa0902d
    ctx->pc = 0x10e86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e870: 0xffb30028
    ctx->pc = 0x10e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10e874: 0xc0982d
    ctx->pc = 0x10e874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e878: 0xffb40030
    ctx->pc = 0x10e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10e87c: 0x24140003
    ctx->pc = 0x10e87cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
    // 0x10e880: 0xffb50038
    ctx->pc = 0x10e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10e884: 0x120a82d
    ctx->pc = 0x10e884u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e888: 0xffb60040
    ctx->pc = 0x10e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x10e88c: 0x80b02d
    ctx->pc = 0x10e88cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e890: 0xffb70048
    ctx->pc = 0x10e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x10e894: 0xe0b82d
    ctx->pc = 0x10e894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e898: 0xffbe0050
    ctx->pc = 0x10e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x10e89c: 0x160f02d
    ctx->pc = 0x10e89cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8a0: 0x12220008
    ctx->pc = 0x10E8A0u;
    {
        const bool branch_taken_0x10e8a0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x10E8A4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        if (branch_taken_0x10e8a0) {
            ctx->pc = 0x10E8C4u;
            goto label_10e8c4;
        }
    }
    ctx->pc = 0x10E8A8u;
    // 0x10e8a8: 0x24020065
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
    // 0x10e8ac: 0x12220003
    ctx->pc = 0x10E8ACu;
    {
        const bool branch_taken_0x10e8ac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x10E8B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 69));
        if (branch_taken_0x10e8ac) {
            ctx->pc = 0x10E8BCu;
            goto label_10e8bc;
        }
    }
    ctx->pc = 0x10E8B4u;
    // 0x10e8b4: 0x16220003
    ctx->pc = 0x10E8B4u;
    {
        const bool branch_taken_0x10e8b4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x10E8B8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x10e8b4) {
            ctx->pc = 0x10E8C4u;
            goto label_10e8c4;
        }
    }
    ctx->pc = 0x10E8BCu;
label_10e8bc:
    // 0x10e8bc: 0x26730001
    ctx->pc = 0x10e8bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x10e8c0: 0x24140002
    ctx->pc = 0x10e8c0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_10e8c4:
    // 0x10e8c4: 0x240102d
    ctx->pc = 0x10e8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8c8: 0x2103f
    ctx->pc = 0x10e8c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10e8cc: 0x4430008
    ctx->pc = 0x10E8CCu;
    {
        const bool branch_taken_0x10e8cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10e8cc) {
            ctx->pc = 0x10E8D0u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x10E8F0u;
            goto label_10e8f0;
        }
    }
    ctx->pc = 0x10E8D4u;
    // 0x10e8d4: 0x240282d
    ctx->pc = 0x10e8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8d8: 0x202d
    ctx->pc = 0x10e8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8dc: 0xc044752
    ctx->pc = 0x10E8DCu;
    SET_GPR_U32(ctx, 31, 0x10E8E4u);
    ctx->pc = 0x111D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111D48_0x111d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8E4u; }
    }
    if (ctx->pc != 0x10E8E4u) { return; }
    ctx->pc = 0x10E8E4u;
    // 0x10e8e4: 0x40902d
    ctx->pc = 0x10e8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8e8: 0x2402002d
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x10e8ec: 0xa2020000
    ctx->pc = 0x10e8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_10e8f0:
    // 0x10e8f0: 0x280302d
    ctx->pc = 0x10e8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8f4: 0x2c0202d
    ctx->pc = 0x10e8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8f8: 0x240282d
    ctx->pc = 0x10e8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8fc: 0x260382d
    ctx->pc = 0x10e8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e900: 0x2a0402d
    ctx->pc = 0x10e900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e904: 0x3a0482d
    ctx->pc = 0x10e904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e908: 0xc040f1e
    ctx->pc = 0x10E908u;
    SET_GPR_U32(ctx, 31, 0x10E910u);
    ctx->pc = 0x10E90Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x103C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00103C78_0x103c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E910u; }
    }
    if (ctx->pc != 0x10E910u) { return; }
    ctx->pc = 0x10E910u;
    // 0x10e910: 0x40a02d
    ctx->pc = 0x10e910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e914: 0x24020067
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
    // 0x10e918: 0x12220003
    ctx->pc = 0x10E918u;
    {
        const bool branch_taken_0x10e918 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x10E91Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x10e918) {
            ctx->pc = 0x10E928u;
            goto label_10e928;
        }
    }
    ctx->pc = 0x10E920u;
    // 0x10e920: 0x16220004
    ctx->pc = 0x10E920u;
    {
        const bool branch_taken_0x10e920 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x10E924u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x10e920) {
            ctx->pc = 0x10E934u;
            goto label_10e934;
        }
    }
    ctx->pc = 0x10E928u;
label_10e928:
    // 0x10e928: 0x32e20001
    ctx->pc = 0x10e928u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 1));
    // 0x10e92c: 0x10400028
    ctx->pc = 0x10E92Cu;
    {
        const bool branch_taken_0x10e92c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10E930u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x10e92c) {
            ctx->pc = 0x10E9D0u;
            goto label_10e9d0;
        }
    }
    ctx->pc = 0x10E934u;
label_10e934:
    // 0x10e934: 0x1622000f
    ctx->pc = 0x10E934u;
    {
        const bool branch_taken_0x10e934 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x10E938u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        if (branch_taken_0x10e934) {
            ctx->pc = 0x10E974u;
            goto label_10e974;
        }
    }
    ctx->pc = 0x10E93Cu;
    // 0x10e93c: 0x82830000
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10e940: 0x24020030
    ctx->pc = 0x10e940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x10e944: 0x5462000a
    ctx->pc = 0x10E944u;
    {
        const bool branch_taken_0x10e944 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10e944) {
            ctx->pc = 0x10E948u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x10E970u;
            goto label_10e970;
        }
    }
    ctx->pc = 0x10E94Cu;
    // 0x10e94c: 0x240202d
    ctx->pc = 0x10e94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e950: 0x282d
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e954: 0xc0448a6
    ctx->pc = 0x10E954u;
    SET_GPR_U32(ctx, 31, 0x10E95Cu);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E95Cu; }
    }
    if (ctx->pc != 0x10E95Cu) { return; }
    ctx->pc = 0x10E95Cu;
    // 0x10e95c: 0x10400003
    ctx->pc = 0x10E95Cu;
    {
        const bool branch_taken_0x10e95c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10E960u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10e95c) {
            ctx->pc = 0x10E96Cu;
            goto label_10e96c;
        }
    }
    ctx->pc = 0x10E964u;
    // 0x10e964: 0x531023
    ctx->pc = 0x10e964u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10e968: 0xaea20000
    ctx->pc = 0x10e968u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_10e96c:
    // 0x10e96c: 0x8ea20000
    ctx->pc = 0x10e96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_10e970:
    // 0x10e970: 0x2028021
    ctx->pc = 0x10e970u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_10e974:
    // 0x10e974: 0x240202d
    ctx->pc = 0x10e974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e978: 0x282d
    ctx->pc = 0x10e978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e97c: 0xc0448a6
    ctx->pc = 0x10E97Cu;
    SET_GPR_U32(ctx, 31, 0x10E984u);
    ctx->pc = 0x112298u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112298_0x112298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E984u; }
    }
    if (ctx->pc != 0x10E984u) { return; }
    ctx->pc = 0x10E984u;
    // 0x10e984: 0x8fa30004
    ctx->pc = 0x10e984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10e988: 0x38420000
    ctx->pc = 0x10e988u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 0));
    // 0x10e98c: 0x202180a
    ctx->pc = 0x10e98cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 16));
    // 0x10e990: 0x70102b
    ctx->pc = 0x10e990u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10e994: 0xafa30004
    ctx->pc = 0x10e994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10e998: 0x1040000e
    ctx->pc = 0x10E998u;
    {
        const bool branch_taken_0x10e998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10E99Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10e998) {
            ctx->pc = 0x10E9D4u;
            goto label_10e9d4;
        }
    }
    ctx->pc = 0x10E9A0u;
    // 0x10e9a0: 0x24050030
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    // 0x10e9a4: 0x0
    ctx->pc = 0x10e9a4u;
    // NOP
label_10e9a8:
    // 0x10e9a8: 0x24830001
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x10e9ac: 0xa0850000
    ctx->pc = 0x10e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x10e9b0: 0x70102b
    ctx->pc = 0x10e9b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x10e9b4: 0xafa30004
    ctx->pc = 0x10e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10e9b8: 0x0
    ctx->pc = 0x10e9b8u;
    // NOP
    // 0x10e9bc: 0x1440fffa
    ctx->pc = 0x10E9BCu;
    {
        const bool branch_taken_0x10e9bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10E9C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10e9bc) {
            ctx->pc = 0x10E9A8u;
            goto label_10e9a8;
        }
    }
    ctx->pc = 0x10E9C4u;
    // 0x10e9c4: 0x10000004
    ctx->pc = 0x10E9C4u;
    {
        const bool branch_taken_0x10e9c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10E9C8u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        if (branch_taken_0x10e9c4) {
            ctx->pc = 0x10E9D8u;
            goto label_10e9d8;
        }
    }
    ctx->pc = 0x10E9CCu;
    // 0x10e9cc: 0x0
    ctx->pc = 0x10e9ccu;
    // NOP
label_10e9d0:
    // 0x10e9d0: 0x8fa30004
    ctx->pc = 0x10e9d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_10e9d4:
    // 0x10e9d4: 0x741823
    ctx->pc = 0x10e9d4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_10e9d8:
    // 0x10e9d8: 0x280102d
    ctx->pc = 0x10e9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9dc: 0xafc30000
    ctx->pc = 0x10e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x10e9e0: 0xdfb00010
    ctx->pc = 0x10e9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e9e4: 0xdfb10018
    ctx->pc = 0x10e9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10e9e8: 0xdfb20020
    ctx->pc = 0x10e9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e9ec: 0xdfb30028
    ctx->pc = 0x10e9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10e9f0: 0xdfb40030
    ctx->pc = 0x10e9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e9f4: 0xdfb50038
    ctx->pc = 0x10e9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10e9f8: 0xdfb60040
    ctx->pc = 0x10e9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e9fc: 0xdfb70048
    ctx->pc = 0x10e9fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10ea00: 0xdfbe0050
    ctx->pc = 0x10ea00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ea04: 0xdfbf0058
    ctx->pc = 0x10ea04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x10ea08: 0x3e00008
    ctx->pc = 0x10EA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E8BCu: goto label_10e8bc;
            case 0x10E8C4u: goto label_10e8c4;
            case 0x10E8F0u: goto label_10e8f0;
            case 0x10E928u: goto label_10e928;
            case 0x10E934u: goto label_10e934;
            case 0x10E96Cu: goto label_10e96c;
            case 0x10E970u: goto label_10e970;
            case 0x10E974u: goto label_10e974;
            case 0x10E9A8u: goto label_10e9a8;
            case 0x10E9D0u: goto label_10e9d0;
            case 0x10E9D4u: goto label_10e9d4;
            case 0x10E9D8u: goto label_10e9d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EA10u;
}
