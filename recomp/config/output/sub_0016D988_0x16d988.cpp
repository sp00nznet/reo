#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D988
// Address: 0x16d988 - 0x16db00
void sub_0016D988_0x16d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d988u;

    // 0x16d988: 0x27bdffb0
    ctx->pc = 0x16d988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d98c: 0xffb00000
    ctx->pc = 0x16d98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d990: 0xa0802d
    ctx->pc = 0x16d990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d994: 0xffb10008
    ctx->pc = 0x16d994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d998: 0x80882d
    ctx->pc = 0x16d998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d99c: 0xffb20010
    ctx->pc = 0x16d99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16d9a0: 0xe0902d
    ctx->pc = 0x16d9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9a4: 0xffb30018
    ctx->pc = 0x16d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16d9a8: 0xc0982d
    ctx->pc = 0x16d9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9ac: 0xffb50028
    ctx->pc = 0x16d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16d9b0: 0xffb60030
    ctx->pc = 0x16d9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16d9b4: 0x2616000c
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 16), 12));
    // 0x16d9b8: 0xffb70038
    ctx->pc = 0x16d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x16d9bc: 0x100b82d
    ctx->pc = 0x16d9bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9c0: 0xffb40020
    ctx->pc = 0x16d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16d9c4: 0xffbf0040
    ctx->pc = 0x16d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16d9c8: 0x8e620010
    ctx->pc = 0x16d9c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16d9cc: 0x8e290114
    ctx->pc = 0x16d9ccu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x16d9d0: 0x21080
    ctx->pc = 0x16d9d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d9d4: 0x3c150024
    ctx->pc = 0x16d9d4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x16d9d8: 0x2a2a821
    ctx->pc = 0x16d9d8u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16d9dc: 0x8eb50af0
    ctx->pc = 0x16d9dcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 21), 2800)));
    // 0x16d9e0: 0x521000a
    ctx->pc = 0x16D9E0u;
    {
        const bool branch_taken_0x16d9e0 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x16D9E4u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 20)));
        if (branch_taken_0x16d9e0) {
            ctx->pc = 0x16DA0Cu;
            goto label_16da0c;
        }
    }
    ctx->pc = 0x16D9E8u;
    // 0x16d9e8: 0x280202d
    ctx->pc = 0x16d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9ec: 0xc05b6c0
    ctx->pc = 0x16D9ECu;
    SET_GPR_U32(ctx, 31, 0x16D9F4u);
    ctx->pc = 0x16D9F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DB00_0x16db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9F4u; }
    }
    if (ctx->pc != 0x16D9F4u) { return; }
    ctx->pc = 0x16D9F4u;
    // 0x16d9f4: 0x8e430000
    ctx->pc = 0x16d9f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16d9f8: 0x621823
    ctx->pc = 0x16d9f8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d9fc: 0x28620000
    ctx->pc = 0x16d9fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 0));
    // 0x16da00: 0x2180b
    ctx->pc = 0x16da00u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x16da04: 0xae230114
    ctx->pc = 0x16da04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
    // 0x16da08: 0x60482d
    ctx->pc = 0x16da08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16da0c:
    // 0x16da0c: 0x8e430000
    ctx->pc = 0x16da0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16da10: 0x240282d
    ctx->pc = 0x16da10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da14: 0x2c0202d
    ctx->pc = 0x16da14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da18: 0x24060004
    ctx->pc = 0x16da18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16da1c: 0x698823
    ctx->pc = 0x16da1cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x16da20: 0x2a220000
    ctx->pc = 0x16da20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 0));
    // 0x16da24: 0xc041e86
    ctx->pc = 0x16DA24u;
    SET_GPR_U32(ctx, 31, 0x16DA2Cu);
    ctx->pc = 0x16DA28u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    ctx->pc = 0x107A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107A18_0x107a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA2Cu; }
    }
    if (ctx->pc != 0x16DA2Cu) { return; }
    ctx->pc = 0x16DA2Cu;
    // 0x16da2c: 0x2a0282d
    ctx->pc = 0x16da2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da30: 0x10400011
    ctx->pc = 0x16DA30u;
    {
        const bool branch_taken_0x16da30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DA34u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16da30) {
            ctx->pc = 0x16DA78u;
            goto label_16da78;
        }
    }
    ctx->pc = 0x16DA38u;
    // 0x16da38: 0x8e620018
    ctx->pc = 0x16da38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16da3c: 0x6a440007
    ctx->pc = 0x16da3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16da40: 0x6e440000
    ctx->pc = 0x16da40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16da44: 0x8e450008
    ctx->pc = 0x16da44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x16da48: 0xb2c40007
    ctx->pc = 0x16da48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16da4c: 0xb6c40000
    ctx->pc = 0x16da4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16da50: 0xaec50008
    ctx->pc = 0x16da50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 5));
    // 0x16da54: 0xae140000
    ctx->pc = 0x16da54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x16da58: 0x14430005
    ctx->pc = 0x16DA58u;
    {
        const bool branch_taken_0x16da58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16DA5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x16da58) {
            ctx->pc = 0x16DA70u;
            goto label_16da70;
        }
    }
    ctx->pc = 0x16DA60u;
    // 0x16da60: 0x24020001
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16da64: 0x10000019
    ctx->pc = 0x16DA64u;
    {
        const bool branch_taken_0x16da64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DA68u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x16da64) {
            ctx->pc = 0x16DACCu;
            goto label_16dacc;
        }
    }
    ctx->pc = 0x16DA6Cu;
    // 0x16da6c: 0x0
    ctx->pc = 0x16da6cu;
    // NOP
label_16da70:
    // 0x16da70: 0x10000016
    ctx->pc = 0x16DA70u;
    {
        const bool branch_taken_0x16da70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DA74u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x16da70) {
            ctx->pc = 0x16DACCu;
            goto label_16dacc;
        }
    }
    ctx->pc = 0x16DA78u;
label_16da78:
    // 0x16da78: 0x52e00009
    ctx->pc = 0x16DA78u;
    {
        const bool branch_taken_0x16da78 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        if (branch_taken_0x16da78) {
            ctx->pc = 0x16DA7Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16DA80u;
    // 0x16da80: 0x8e030008
    ctx->pc = 0x16da80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16da84: 0x8e020004
    ctx->pc = 0x16da84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16da88: 0xae000000
    ctx->pc = 0x16da88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16da8c: 0x431021
    ctx->pc = 0x16da8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16da90: 0xae000008
    ctx->pc = 0x16da90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x16da94: 0x24420001
    ctx->pc = 0x16da94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16da98: 0xae020004
    ctx->pc = 0x16da98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16da9c: 0x8e020000
    ctx->pc = 0x16da9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16daa0:
    // 0x16daa0: 0x8e030008
    ctx->pc = 0x16daa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16daa4: 0x2821023
    ctx->pc = 0x16daa4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16daa8: 0x8e040004
    ctx->pc = 0x16daa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16daac: 0x43302a
    ctx->pc = 0x16daacu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x16dab0: 0x46180a
    ctx->pc = 0x16dab0u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x16dab4: 0x822021
    ctx->pc = 0x16dab4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16dab8: 0xc05b6c0
    ctx->pc = 0x16DAB8u;
    SET_GPR_U32(ctx, 31, 0x16DAC0u);
    ctx->pc = 0x16DABCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x16DB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DB00_0x16db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DAC0u; }
    }
    if (ctx->pc != 0x16DAC0u) { return; }
    ctx->pc = 0x16DAC0u;
    // 0x16dac0: 0x2228821
    ctx->pc = 0x16dac0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16dac4: 0x2a220000
    ctx->pc = 0x16dac4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 0));
    // 0x16dac8: 0x2880b
    ctx->pc = 0x16dac8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
label_16dacc:
    // 0x16dacc: 0x220102d
    ctx->pc = 0x16daccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dad0: 0xdfb00000
    ctx->pc = 0x16dad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dad4: 0xdfb10008
    ctx->pc = 0x16dad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16dad8: 0xdfb20010
    ctx->pc = 0x16dad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dadc: 0xdfb30018
    ctx->pc = 0x16dadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16dae0: 0xdfb40020
    ctx->pc = 0x16dae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dae4: 0xdfb50028
    ctx->pc = 0x16dae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16dae8: 0xdfb60030
    ctx->pc = 0x16dae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16daec: 0xdfb70038
    ctx->pc = 0x16daecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16daf0: 0xdfbf0040
    ctx->pc = 0x16daf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16daf4: 0x3e00008
    ctx->pc = 0x16DAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DAF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DA0Cu: goto label_16da0c;
            case 0x16DA70u: goto label_16da70;
            case 0x16DA78u: goto label_16da78;
            case 0x16DAA0u: goto label_16daa0;
            case 0x16DACCu: goto label_16dacc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DAFCu;
    // 0x16dafc: 0x0
    ctx->pc = 0x16dafcu;
    // NOP
}
