#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011BD78
// Address: 0x11bd78 - 0x11be78
void sub_0011BD78_0x11bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11bd78u;

    // 0x11bd78: 0x27bdffb0
    ctx->pc = 0x11bd78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11bd7c: 0xffb20030
    ctx->pc = 0x11bd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11bd80: 0x3c120021
    ctx->pc = 0x11bd80u;
    SET_GPR_U32(ctx, 18, ((uint32_t)33 << 16));
    // 0x11bd84: 0xffbf0040
    ctx->pc = 0x11bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11bd88: 0x8e429e00
    ctx->pc = 0x11bd88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294942208)));
    // 0x11bd8c: 0xffb10020
    ctx->pc = 0x11bd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11bd90: 0x4410032
    ctx->pc = 0x11BD90u;
    {
        const bool branch_taken_0x11bd90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11BD94u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x11bd90) {
            ctx->pc = 0x11BE5Cu;
            goto label_11be5c;
        }
    }
    ctx->pc = 0x11BD98u;
    // 0x11bd98: 0x3c110026
    ctx->pc = 0x11bd98u;
    SET_GPR_U32(ctx, 17, ((uint32_t)38 << 16));
    // 0x11bd9c: 0x2630e600
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294960640));
label_11bda0:
    // 0x11bda0: 0x3c058000
    ctx->pc = 0x11bda0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x11bda4: 0x200202d
    ctx->pc = 0x11bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bda8: 0x34a50006
    ctx->pc = 0x11bda8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 6));
    // 0x11bdac: 0xc045e06
    ctx->pc = 0x11BDACu;
    SET_GPR_U32(ctx, 31, 0x11BDB4u);
    ctx->pc = 0x11BDB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117818u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00117818_0x117818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDB4u; }
    }
    if (ctx->pc != 0x11BDB4u) { return; }
    ctx->pc = 0x11BDB4u;
    // 0x11bdb4: 0x4430003
    ctx->pc = 0x11BDB4u;
    {
        const bool branch_taken_0x11bdb4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11bdb4) {
            ctx->pc = 0x11BDB8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x11BDC4u;
            goto label_11bdc4;
        }
    }
    ctx->pc = 0x11BDBCu;
    // 0x11bdbc: 0x10000028
    ctx->pc = 0x11BDBCu;
    {
        const bool branch_taken_0x11bdbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BDC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11bdbc) {
            ctx->pc = 0x11BE60u;
            goto label_11be60;
        }
    }
    ctx->pc = 0x11BDC4u;
label_11bdc4:
    // 0x11bdc4: 0x10400019
    ctx->pc = 0x11BDC4u;
    {
        const bool branch_taken_0x11bdc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BDC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11bdc4) {
            ctx->pc = 0x11BE2Cu;
            goto label_11be2c;
        }
    }
    ctx->pc = 0x11BDCCu;
    // 0x11bdcc: 0x3c110026
    ctx->pc = 0x11bdccu;
    SET_GPR_U32(ctx, 17, ((uint32_t)38 << 16));
    // 0x11bdd0: 0xae409e00
    ctx->pc = 0x11bdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942208), GPR_U32(ctx, 0));
    // 0x11bdd4: 0xafa00000
    ctx->pc = 0x11bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11bdd8: 0x240500ff
    ctx->pc = 0x11bdd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x11bddc: 0x302d
    ctx->pc = 0x11bddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde0: 0x382d
    ctx->pc = 0x11bde0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde4: 0x402d
    ctx->pc = 0x11bde4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde8: 0x2629e400
    ctx->pc = 0x11bde8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 17), 4294960128));
    // 0x11bdec: 0x240a0004
    ctx->pc = 0x11bdecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11bdf0: 0xc045e7a
    ctx->pc = 0x11BDF0u;
    SET_GPR_U32(ctx, 31, 0x11BDF8u);
    ctx->pc = 0x11BDF4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDF8u; }
    }
    if (ctx->pc != 0x11BDF8u) { return; }
    ctx->pc = 0x11BDF8u;
    // 0x11bdf8: 0x4410004
    ctx->pc = 0x11BDF8u;
    {
        const bool branch_taken_0x11bdf8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11BDFCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
        if (branch_taken_0x11bdf8) {
            ctx->pc = 0x11BE0Cu;
            goto label_11be0c;
        }
    }
    ctx->pc = 0x11BE00u;
    // 0x11be00: 0x3c02fffe
    ctx->pc = 0x11be00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11be04: 0x10000016
    ctx->pc = 0x11BE04u;
    {
        const bool branch_taken_0x11be04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BE08u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x11be04) {
            ctx->pc = 0x11BE60u;
            goto label_11be60;
        }
    }
    ctx->pc = 0x11BE0Cu;
label_11be0c:
    // 0x11be0c: 0x2627e400
    ctx->pc = 0x11be0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294960128));
    // 0x11be10: 0x2466e628
    ctx->pc = 0x11be10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294960680));
    // 0x11be14: 0x88e40003
    ctx->pc = 0x11be14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x11be18: 0x98e40000
    ctx->pc = 0x11be18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 4, (GPR_U32(ctx, 4) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x11be1c: 0xa8c40003
    ctx->pc = 0x11be1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11be20: 0xb8c40000
    ctx->pc = 0x11be20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 4) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11be24: 0x1000000e
    ctx->pc = 0x11BE24u;
    {
        const bool branch_taken_0x11be24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BE28u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11be24) {
            ctx->pc = 0x11BE60u;
            goto label_11be60;
        }
    }
    ctx->pc = 0x11BE2Cu;
label_11be2c:
    // 0x11be2c: 0x3c020010
    ctx->pc = 0x11be2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x11be30: 0x2403ffff
    ctx->pc = 0x11be30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11be34: 0x0
    ctx->pc = 0x11be34u;
    // NOP
label_11be38:
    // 0x11be38: 0x2442ffff
    ctx->pc = 0x11be38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11be3c: 0x0
    ctx->pc = 0x11be3cu;
    // NOP
    // 0x11be40: 0x0
    ctx->pc = 0x11be40u;
    // NOP
    // 0x11be44: 0x0
    ctx->pc = 0x11be44u;
    // NOP
    // 0x11be48: 0x0
    ctx->pc = 0x11be48u;
    // NOP
    // 0x11be4c: 0x1443fffa
    ctx->pc = 0x11BE4Cu;
    {
        const bool branch_taken_0x11be4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x11be4c) {
            ctx->pc = 0x11BE38u;
            goto label_11be38;
        }
    }
    ctx->pc = 0x11BE54u;
    // 0x11be54: 0x1000ffd2
    ctx->pc = 0x11BE54u;
    {
        const bool branch_taken_0x11be54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BE58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294960640));
        if (branch_taken_0x11be54) {
            ctx->pc = 0x11BDA0u;
            goto label_11bda0;
        }
    }
    ctx->pc = 0x11BE5Cu;
label_11be5c:
    // 0x11be5c: 0x102d
    ctx->pc = 0x11be5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11be60:
    // 0x11be60: 0xdfbf0040
    ctx->pc = 0x11be60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11be64: 0xdfb20030
    ctx->pc = 0x11be64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11be68: 0xdfb10020
    ctx->pc = 0x11be68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11be6c: 0xdfb00010
    ctx->pc = 0x11be6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11be70: 0x3e00008
    ctx->pc = 0x11BE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BE74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BDA0u: goto label_11bda0;
            case 0x11BDC4u: goto label_11bdc4;
            case 0x11BE0Cu: goto label_11be0c;
            case 0x11BE2Cu: goto label_11be2c;
            case 0x11BE38u: goto label_11be38;
            case 0x11BE5Cu: goto label_11be5c;
            case 0x11BE60u: goto label_11be60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BE78u;
}
