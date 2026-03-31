#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016CA00
// Address: 0x16ca00 - 0x16cba8
void sub_0016CA00_0x16ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16ca00u;

    // 0x16ca00: 0x27bdffc0
    ctx->pc = 0x16ca00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ca04: 0x24020001
    ctx->pc = 0x16ca04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ca08: 0xffb10028
    ctx->pc = 0x16ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16ca0c: 0xc0882d
    ctx->pc = 0x16ca0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca10: 0xffb20030
    ctx->pc = 0x16ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16ca14: 0x80902d
    ctx->pc = 0x16ca14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca18: 0xffb00020
    ctx->pc = 0x16ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16ca1c: 0xffbf0038
    ctx->pc = 0x16ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16ca20: 0x1220005a
    ctx->pc = 0x16CA20u;
    {
        const bool branch_taken_0x16ca20 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CA24u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        if (branch_taken_0x16ca20) {
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CA28u;
    // 0x16ca28: 0x8e430000
    ctx->pc = 0x16ca28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ca2c: 0x52230058
    ctx->pc = 0x16CA2Cu;
    {
        const bool branch_taken_0x16ca2c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        if (branch_taken_0x16ca2c) {
            ctx->pc = 0x16CA30u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x16CB90u;
            goto label_16cb90;
        }
    }
    ctx->pc = 0x16CA34u;
    // 0x16ca34: 0x223102b
    ctx->pc = 0x16ca34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16ca38: 0x5440001b
    ctx->pc = 0x16CA38u;
    {
        const bool branch_taken_0x16ca38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16ca38) {
            ctx->pc = 0x16CA3Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x16CAA8u;
            goto label_16caa8;
        }
    }
    ctx->pc = 0x16CA40u;
    // 0x16ca40: 0x8e420004
    ctx->pc = 0x16ca40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16ca44: 0x621021
    ctx->pc = 0x16ca44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ca48: 0x222182b
    ctx->pc = 0x16ca48u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16ca4c: 0x50600016
    ctx->pc = 0x16CA4Cu;
    {
        const bool branch_taken_0x16ca4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ca4c) {
            ctx->pc = 0x16CA50u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->pc = 0x16CAA8u;
            goto label_16caa8;
        }
    }
    ctx->pc = 0x16CA54u;
    // 0x16ca54: 0x2221023
    ctx->pc = 0x16ca54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16ca58: 0x24500004
    ctx->pc = 0x16ca58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4));
    // 0x16ca5c: 0x1a00001e
    ctx->pc = 0x16CA5Cu;
    {
        const bool branch_taken_0x16ca5c = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x16ca5c) {
            ctx->pc = 0x16CAD8u;
            goto label_16cad8;
        }
    }
    ctx->pc = 0x16CA64u;
    // 0x16ca64: 0x8e43000c
    ctx->pc = 0x16ca64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x16ca68: 0x70182a
    ctx->pc = 0x16ca68u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x16ca6c: 0x14600047
    ctx->pc = 0x16CA6Cu;
    {
        const bool branch_taken_0x16ca6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CA70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16ca6c) {
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CA74u;
    // 0x16ca74: 0x24060004
    ctx->pc = 0x16ca74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16ca78: 0x3a0202d
    ctx->pc = 0x16ca78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca7c: 0xd03023
    ctx->pc = 0x16ca7cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x16ca80: 0xc041eac
    ctx->pc = 0x16CA80u;
    SET_GPR_U32(ctx, 31, 0x16CA88u);
    ctx->pc = 0x16CA84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA88u; }
    }
    if (ctx->pc != 0x16CA88u) { return; }
    ctx->pc = 0x16CA88u;
    // 0x16ca88: 0x8e450008
    ctx->pc = 0x16ca88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16ca8c: 0x3b02023
    ctx->pc = 0x16ca8cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x16ca90: 0x200302d
    ctx->pc = 0x16ca90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ca94: 0xc041eac
    ctx->pc = 0x16CA94u;
    SET_GPR_U32(ctx, 31, 0x16CA9Cu);
    ctx->pc = 0x16CA98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA9Cu; }
    }
    if (ctx->pc != 0x16CA9Cu) { return; }
    ctx->pc = 0x16CA9Cu;
    // 0x16ca9c: 0x10000012
    ctx->pc = 0x16CA9Cu;
    {
        const bool branch_taken_0x16ca9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ca9c) {
            ctx->pc = 0x16CAE8u;
            goto label_16cae8;
        }
    }
    ctx->pc = 0x16CAA4u;
    // 0x16caa4: 0x0
    ctx->pc = 0x16caa4u;
    // NOP
label_16caa8:
    // 0x16caa8: 0x223102b
    ctx->pc = 0x16caa8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16caac: 0x14400037
    ctx->pc = 0x16CAACu;
    {
        const bool branch_taken_0x16caac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16CAB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16caac) {
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CAB4u;
    // 0x16cab4: 0x8e42000c
    ctx->pc = 0x16cab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x16cab8: 0x621021
    ctx->pc = 0x16cab8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cabc: 0x222182b
    ctx->pc = 0x16cabcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16cac0: 0x50600032
    ctx->pc = 0x16CAC0u;
    {
        const bool branch_taken_0x16cac0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cac0) {
            ctx->pc = 0x16CAC4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CAC8u;
    // 0x16cac8: 0x2221823
    ctx->pc = 0x16cac8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16cacc: 0x24700004
    ctx->pc = 0x16caccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4));
    // 0x16cad0: 0x1e00002e
    ctx->pc = 0x16CAD0u;
    {
        const bool branch_taken_0x16cad0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x16CAD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16cad0) {
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CAD8u;
label_16cad8:
    // 0x16cad8: 0x8a220003
    ctx->pc = 0x16cad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x16cadc: 0x9a220000
    ctx->pc = 0x16cadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x16cae0: 0xaba20003
    ctx->pc = 0x16cae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x16cae4: 0xbba20000
    ctx->pc = 0x16cae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) << shift) & mask); WRITE32(aligned_addr, new_data); }
label_16cae8:
    // 0x16cae8: 0xc05616e
    ctx->pc = 0x16CAE8u;
    SET_GPR_U32(ctx, 31, 0x16CAF0u);
    ctx->pc = 0x16CAECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1585B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001585B8_0x1585b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CAF0u; }
    }
    if (ctx->pc != 0x16CAF0u) { return; }
    ctx->pc = 0x16CAF0u;
    // 0x16caf0: 0x40182d
    ctx->pc = 0x16caf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16caf4: 0x24020008
    ctx->pc = 0x16caf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16caf8: 0x1062000f
    ctx->pc = 0x16CAF8u;
    {
        const bool branch_taken_0x16caf8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CAFCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
        if (branch_taken_0x16caf8) {
            ctx->pc = 0x16CB38u;
            goto label_16cb38;
        }
    }
    ctx->pc = 0x16CB00u;
    // 0x16cb00: 0x10400007
    ctx->pc = 0x16CB00u;
    {
        const bool branch_taken_0x16cb00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CB04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x16cb00) {
            ctx->pc = 0x16CB20u;
            goto label_16cb20;
        }
    }
    ctx->pc = 0x16CB08u;
    // 0x16cb08: 0x24020004
    ctx->pc = 0x16cb08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cb0c: 0x10620010
    ctx->pc = 0x16CB0Cu;
    {
        const bool branch_taken_0x16cb0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CB10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16cb0c) {
            ctx->pc = 0x16CB50u;
            goto label_16cb50;
        }
    }
    ctx->pc = 0x16CB14u;
    // 0x16cb14: 0x1000001e
    ctx->pc = 0x16CB14u;
    {
        const bool branch_taken_0x16cb14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CB18u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16cb14) {
            ctx->pc = 0x16CB90u;
            goto label_16cb90;
        }
    }
    ctx->pc = 0x16CB1Cu;
    // 0x16cb1c: 0x0
    ctx->pc = 0x16cb1cu;
    // NOP
label_16cb20:
    // 0x16cb20: 0x10620019
    ctx->pc = 0x16CB20u;
    {
        const bool branch_taken_0x16cb20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CB24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x16cb20) {
            ctx->pc = 0x16CB88u;
            goto label_16cb88;
        }
    }
    ctx->pc = 0x16CB28u;
    // 0x16cb28: 0x10620017
    ctx->pc = 0x16CB28u;
    {
        const bool branch_taken_0x16cb28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CB2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16cb28) {
            ctx->pc = 0x16CB88u;
            goto label_16cb88;
        }
    }
    ctx->pc = 0x16CB30u;
    // 0x16cb30: 0x10000017
    ctx->pc = 0x16CB30u;
    {
        const bool branch_taken_0x16cb30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CB34u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16cb30) {
            ctx->pc = 0x16CB90u;
            goto label_16cb90;
        }
    }
    ctx->pc = 0x16CB38u;
label_16cb38:
    // 0x16cb38: 0x8fa20010
    ctx->pc = 0x16cb38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cb3c: 0x30420040
    ctx->pc = 0x16cb3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x16cb40: 0x10400011
    ctx->pc = 0x16CB40u;
    {
        const bool branch_taken_0x16cb40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CB44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16cb40) {
            ctx->pc = 0x16CB88u;
            goto label_16cb88;
        }
    }
    ctx->pc = 0x16CB48u;
    // 0x16cb48: 0x10000006
    ctx->pc = 0x16CB48u;
    {
        const bool branch_taken_0x16cb48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CB4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x16cb48) {
            ctx->pc = 0x16CB64u;
            goto label_16cb64;
        }
    }
    ctx->pc = 0x16CB50u;
label_16cb50:
    // 0x16cb50: 0x8fa20010
    ctx->pc = 0x16cb50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cb54: 0x30420048
    ctx->pc = 0x16cb54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 72));
    // 0x16cb58: 0x1040000b
    ctx->pc = 0x16CB58u;
    {
        const bool branch_taken_0x16cb58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CB5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16cb58) {
            ctx->pc = 0x16CB88u;
            goto label_16cb88;
        }
    }
    ctx->pc = 0x16CB60u;
    // 0x16cb60: 0x24050004
    ctx->pc = 0x16cb60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
label_16cb64:
    // 0x16cb64: 0xc05b326
    ctx->pc = 0x16CB64u;
    SET_GPR_U32(ctx, 31, 0x16CB6Cu);
    ctx->pc = 0x16CB68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16CC98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CC98_0x16cc98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CB6Cu; }
    }
    if (ctx->pc != 0x16CB6Cu) { return; }
    ctx->pc = 0x16CB6Cu;
    // 0x16cb6c: 0x50400007
    ctx->pc = 0x16CB6Cu;
    {
        const bool branch_taken_0x16cb6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16cb6c) {
            ctx->pc = 0x16CB70u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CB74u;
    // 0x16cb74: 0x54510005
    ctx->pc = 0x16CB74u;
    {
        const bool branch_taken_0x16cb74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x16cb74) {
            ctx->pc = 0x16CB78u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CB7Cu;
    // 0x16cb7c: 0x10000003
    ctx->pc = 0x16CB7Cu;
    {
        const bool branch_taken_0x16cb7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CB80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16cb7c) {
            ctx->pc = 0x16CB8Cu;
            goto label_16cb8c;
        }
    }
    ctx->pc = 0x16CB84u;
    // 0x16cb84: 0x0
    ctx->pc = 0x16cb84u;
    // NOP
label_16cb88:
    // 0x16cb88: 0x102d
    ctx->pc = 0x16cb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cb8c:
    // 0x16cb8c: 0xdfb00020
    ctx->pc = 0x16cb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16cb90:
    // 0x16cb90: 0xdfb10028
    ctx->pc = 0x16cb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16cb94: 0xdfb20030
    ctx->pc = 0x16cb94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cb98: 0xdfbf0038
    ctx->pc = 0x16cb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16cb9c: 0x3e00008
    ctx->pc = 0x16CB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CBA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CAA8u: goto label_16caa8;
            case 0x16CAD8u: goto label_16cad8;
            case 0x16CAE8u: goto label_16cae8;
            case 0x16CB20u: goto label_16cb20;
            case 0x16CB38u: goto label_16cb38;
            case 0x16CB50u: goto label_16cb50;
            case 0x16CB64u: goto label_16cb64;
            case 0x16CB88u: goto label_16cb88;
            case 0x16CB8Cu: goto label_16cb8c;
            case 0x16CB90u: goto label_16cb90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CBA4u;
    // 0x16cba4: 0x0
    ctx->pc = 0x16cba4u;
    // NOP
}
