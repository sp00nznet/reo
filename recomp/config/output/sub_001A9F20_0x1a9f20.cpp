#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A9F20
// Address: 0x1a9f20 - 0x1aa040
void sub_001A9F20_0x1a9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a9f20u;

    // 0x1a9f20: 0x27bdffa0
    ctx->pc = 0x1a9f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a9f24: 0xffbf0050
    ctx->pc = 0x1a9f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a9f28: 0x7fb40040
    ctx->pc = 0x1a9f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a9f2c: 0x7fb30030
    ctx->pc = 0x1a9f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a9f30: 0x80a02d
    ctx->pc = 0x1a9f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f34: 0x7fb20020
    ctx->pc = 0x1a9f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a9f38: 0xa0982d
    ctx->pc = 0x1a9f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f3c: 0x7fb10010
    ctx->pc = 0x1a9f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9f40: 0xc0902d
    ctx->pc = 0x1a9f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f44: 0xe0882d
    ctx->pc = 0x1a9f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f48: 0x24040008
    ctx->pc = 0x1a9f48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a9f4c: 0x24050001
    ctx->pc = 0x1a9f4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9f50: 0xc06a5d4
    ctx->pc = 0x1A9F50u;
    SET_GPR_U32(ctx, 31, 0x1A9F58u);
    ctx->pc = 0x1A9F54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A9750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9750_0x1a9750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F58u; }
    }
    if (ctx->pc != 0x1A9F58u) { return; }
    ctx->pc = 0x1A9F58u;
    // 0x1a9f58: 0x16200006
    ctx->pc = 0x1A9F58u;
    {
        const bool branch_taken_0x1a9f58 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9F5Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f58) {
            ctx->pc = 0x1A9F74u;
            goto label_1a9f74;
        }
    }
    ctx->pc = 0x1A9F60u;
    // 0x1a9f60: 0x260282d
    ctx->pc = 0x1a9f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f64: 0xc06a75c
    ctx->pc = 0x1A9F64u;
    SET_GPR_U32(ctx, 31, 0x1A9F6Cu);
    ctx->pc = 0x1A9F68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A9D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9D70_0x1a9d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F6Cu; }
    }
    if (ctx->pc != 0x1A9F6Cu) { return; }
    ctx->pc = 0x1A9F6Cu;
    // 0x1a9f6c: 0x10000003
    ctx->pc = 0x1A9F6Cu;
    {
        const bool branch_taken_0x1a9f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9F70u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f6c) {
            ctx->pc = 0x1A9F7Cu;
            goto label_1a9f7c;
        }
    }
    ctx->pc = 0x1A9F74u;
label_1a9f74:
    // 0x1a9f74: 0x260102d
    ctx->pc = 0x1a9f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f78: 0x40882d
    ctx->pc = 0x1a9f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f7c:
    // 0x1a9f7c: 0x2402ffff
    ctx->pc = 0x1a9f7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9f80: 0x16220003
    ctx->pc = 0x1A9F80u;
    {
        const bool branch_taken_0x1a9f80 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a9f80) {
            ctx->pc = 0x1A9F90u;
            goto label_1a9f90;
        }
    }
    ctx->pc = 0x1A9F88u;
    // 0x1a9f88: 0x10000023
    ctx->pc = 0x1A9F88u;
    {
        const bool branch_taken_0x1a9f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9F8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f88) {
            ctx->pc = 0x1AA018u;
            goto label_1aa018;
        }
    }
    ctx->pc = 0x1A9F90u;
label_1a9f90:
    // 0x1a9f90: 0x8e840020
    ctx->pc = 0x1a9f90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1a9f94: 0xc04a490
    ctx->pc = 0x1A9F94u;
    SET_GPR_U32(ctx, 31, 0x1A9F9Cu);
    ctx->pc = 0x1A9F98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129240_0x129240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F9Cu; }
    }
    if (ctx->pc != 0x1A9F9Cu) { return; }
    ctx->pc = 0x1A9F9Cu;
    // 0x1a9f9c: 0x3c01002b
    ctx->pc = 0x1a9f9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a9fa0: 0xac2216a8
    ctx->pc = 0x1a9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5800), GPR_U32(ctx, 2));
    // 0x1a9fa4: 0x1040fffa
    ctx->pc = 0x1A9FA4u;
    {
        const bool branch_taken_0x1a9fa4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9fa4) {
            ctx->pc = 0x1A9F90u;
            goto label_1a9f90;
        }
    }
    ctx->pc = 0x1A9FACu;
    // 0x1a9fac: 0x3c01002b
    ctx->pc = 0x1a9facu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a9fb0: 0xc04a702
    ctx->pc = 0x1A9FB0u;
    SET_GPR_U32(ctx, 31, 0x1A9FB8u);
    ctx->pc = 0x1A9FB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C08_0x129c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FB8u; }
    }
    if (ctx->pc != 0x1A9FB8u) { return; }
    ctx->pc = 0x1A9FB8u;
    // 0x1a9fb8: 0x3c01002b
    ctx->pc = 0x1a9fb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a9fbc: 0x40882d
    ctx->pc = 0x1a9fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fc0: 0x8c2416a8
    ctx->pc = 0x1a9fc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    // 0x1a9fc4: 0x240302d
    ctx->pc = 0x1a9fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fc8: 0xc04a5e8
    ctx->pc = 0x1A9FC8u;
    SET_GPR_U32(ctx, 31, 0x1A9FD0u);
    ctx->pc = 0x1A9FCCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1297A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001297A0_0x1297a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FD0u; }
    }
    if (ctx->pc != 0x1A9FD0u) { return; }
    ctx->pc = 0x1A9FD0u;
    // 0x1a9fd0: 0x10000006
    ctx->pc = 0x1A9FD0u;
    {
        const bool branch_taken_0x1a9fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9fd0) {
            ctx->pc = 0x1A9FECu;
            goto label_1a9fec;
        }
    }
    ctx->pc = 0x1A9FD8u;
label_1a9fd8:
    // 0x1a9fd8: 0x24020001
    ctx->pc = 0x1a9fd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9fdc: 0x16020003
    ctx->pc = 0x1A9FDCu;
    {
        const bool branch_taken_0x1a9fdc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a9fdc) {
            ctx->pc = 0x1A9FECu;
            goto label_1a9fec;
        }
    }
    ctx->pc = 0x1A9FE4u;
    // 0x1a9fe4: 0xc06bf38
    ctx->pc = 0x1A9FE4u;
    SET_GPR_U32(ctx, 31, 0x1A9FECu);
    ctx->pc = 0x1AFCE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCE0_0x1afce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FECu; }
    }
    if (ctx->pc != 0x1A9FECu) { return; }
    ctx->pc = 0x1A9FECu;
label_1a9fec:
    // 0x1a9fec: 0x3c01002b
    ctx->pc = 0x1a9fecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a9ff0: 0xc04a752
    ctx->pc = 0x1A9FF0u;
    SET_GPR_U32(ctx, 31, 0x1A9FF8u);
    ctx->pc = 0x1A9FF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D48_0x129d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FF8u; }
    }
    if (ctx->pc != 0x1A9FF8u) { return; }
    ctx->pc = 0x1A9FF8u;
    // 0x1a9ff8: 0x24030003
    ctx->pc = 0x1a9ff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9ffc: 0x1443fff6
    ctx->pc = 0x1A9FFCu;
    {
        const bool branch_taken_0x1a9ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AA000u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1a9ffc) {
            ctx->pc = 0x1A9FD8u;
            goto label_1a9fd8;
        }
    }
    ctx->pc = 0x1AA004u;
    // 0x1aa004: 0xc04a4d4
    ctx->pc = 0x1AA004u;
    SET_GPR_U32(ctx, 31, 0x1AA00Cu);
    ctx->pc = 0x1AA008u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 5800)));
    ctx->pc = 0x129350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00129350_0x129350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA00Cu; }
    }
    if (ctx->pc != 0x1AA00Cu) { return; }
    ctx->pc = 0x1AA00Cu;
    // 0x1aa00c: 0x3c01002b
    ctx->pc = 0x1aa00cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1aa010: 0x1112c0
    ctx->pc = 0x1aa010u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
    // 0x1aa014: 0xac2016a8
    ctx->pc = 0x1aa014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5800), GPR_U32(ctx, 0));
label_1aa018:
    // 0x1aa018: 0xdfbf0050
    ctx->pc = 0x1aa018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aa01c: 0x7bb40040
    ctx->pc = 0x1aa01cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aa020: 0x7bb30030
    ctx->pc = 0x1aa020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aa024: 0x7bb20020
    ctx->pc = 0x1aa024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa028: 0x7bb10010
    ctx->pc = 0x1aa028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa02c: 0x7bb00000
    ctx->pc = 0x1aa02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa030: 0x3e00008
    ctx->pc = 0x1AA030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA034u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9F74u: goto label_1a9f74;
            case 0x1A9F7Cu: goto label_1a9f7c;
            case 0x1A9F90u: goto label_1a9f90;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1A9FECu: goto label_1a9fec;
            case 0x1AA018u: goto label_1aa018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA038u;
    // 0x1aa038: 0x0
    ctx->pc = 0x1aa038u;
    // NOP
    // 0x1aa03c: 0x0
    ctx->pc = 0x1aa03cu;
    // NOP
}
