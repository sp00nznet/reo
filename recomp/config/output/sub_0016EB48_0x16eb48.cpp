#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016EB48
// Address: 0x16eb48 - 0x16ec20
void sub_0016EB48_0x16eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16eb48u;

    // 0x16eb48: 0x27bdffc0
    ctx->pc = 0x16eb48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16eb4c: 0xffb00000
    ctx->pc = 0x16eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16eb50: 0xa0802d
    ctx->pc = 0x16eb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb54: 0xffb20010
    ctx->pc = 0x16eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16eb58: 0x80902d
    ctx->pc = 0x16eb58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb5c: 0xffb30018
    ctx->pc = 0x16eb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16eb60: 0xffb40020
    ctx->pc = 0x16eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16eb64: 0xffb50028
    ctx->pc = 0x16eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16eb68: 0xffb10008
    ctx->pc = 0x16eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16eb6c: 0xffbf0030
    ctx->pc = 0x16eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16eb70: 0x8e421b30
    ctx->pc = 0x16eb70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 6960)));
    // 0x16eb74: 0x8c510000
    ctx->pc = 0x16eb74u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eb78: 0xc05bb08
    ctx->pc = 0x16EB78u;
    SET_GPR_U32(ctx, 31, 0x16EB80u);
    ctx->pc = 0x16EB7Cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 140));
    ctx->pc = 0x16EC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EC20_0x16ec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EB80u; }
    }
    if (ctx->pc != 0x16EB80u) { return; }
    ctx->pc = 0x16EB80u;
    // 0x16eb80: 0x200202d
    ctx->pc = 0x16eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb84: 0x24060001
    ctx->pc = 0x16eb84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16eb88: 0xc04fffa
    ctx->pc = 0x16EB88u;
    SET_GPR_U32(ctx, 31, 0x16EB90u);
    ctx->pc = 0x16EB8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFE8_0x13ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EB90u; }
    }
    if (ctx->pc != 0x16EB90u) { return; }
    ctx->pc = 0x16EB90u;
    // 0x16eb90: 0x220202d
    ctx->pc = 0x16eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb94: 0x200282d
    ctx->pc = 0x16eb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb98: 0xc05644c
    ctx->pc = 0x16EB98u;
    SET_GPR_U32(ctx, 31, 0x16EBA0u);
    ctx->pc = 0x16EB9Cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x159130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159130_0x159130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EBA0u; }
    }
    if (ctx->pc != 0x16EBA0u) { return; }
    ctx->pc = 0x16EBA0u;
    // 0x16eba0: 0x200202d
    ctx->pc = 0x16eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eba4: 0x282d
    ctx->pc = 0x16eba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eba8: 0x24060001
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ebac: 0xc04fffa
    ctx->pc = 0x16EBACu;
    SET_GPR_U32(ctx, 31, 0x16EBB4u);
    ctx->pc = 0x16EBB0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFE8_0x13ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EBB4u; }
    }
    if (ctx->pc != 0x16EBB4u) { return; }
    ctx->pc = 0x16EBB4u;
    // 0x16ebb4: 0x548823
    ctx->pc = 0x16ebb4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x16ebb8: 0x3c07ff00
    ctx->pc = 0x16ebb8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65280 << 16));
    // 0x16ebbc: 0x240202d
    ctx->pc = 0x16ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebc0: 0x260282d
    ctx->pc = 0x16ebc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebc4: 0x220302d
    ctx->pc = 0x16ebc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebc8: 0xc05b592
    ctx->pc = 0x16EBC8u;
    SET_GPR_U32(ctx, 31, 0x16EBD0u);
    ctx->pc = 0x16EBCCu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3847));
    ctx->pc = 0x16D648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D648_0x16d648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EBD0u; }
    }
    if (ctx->pc != 0x16EBD0u) { return; }
    ctx->pc = 0x16EBD0u;
    // 0x16ebd0: 0x240202d
    ctx->pc = 0x16ebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebd4: 0x40802d
    ctx->pc = 0x16ebd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebd8: 0xc05b572
    ctx->pc = 0x16EBD8u;
    SET_GPR_U32(ctx, 31, 0x16EBE0u);
    ctx->pc = 0x16EBDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D5C8_0x16d5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EBE0u; }
    }
    if (ctx->pc != 0x16EBE0u) { return; }
    ctx->pc = 0x16EBE0u;
    // 0x16ebe0: 0x200102d
    ctx->pc = 0x16ebe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebe4: 0x240202d
    ctx->pc = 0x16ebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebe8: 0x16000004
    ctx->pc = 0x16EBE8u;
    {
        const bool branch_taken_0x16ebe8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EBECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16ebe8) {
            ctx->pc = 0x16EBFCu;
            goto label_16ebfc;
        }
    }
    ctx->pc = 0x16EBF0u;
    // 0x16ebf0: 0xc05ce4a
    ctx->pc = 0x16EBF0u;
    SET_GPR_U32(ctx, 31, 0x16EBF8u);
    ctx->pc = 0x16EBF4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 24)));
    ctx->pc = 0x173928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00173928_0x173928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EBF8u; }
    }
    if (ctx->pc != 0x16EBF8u) { return; }
    ctx->pc = 0x16EBF8u;
    // 0x16ebf8: 0x102d
    ctx->pc = 0x16ebf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ebfc:
    // 0x16ebfc: 0xdfb00000
    ctx->pc = 0x16ebfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ec00: 0xdfb10008
    ctx->pc = 0x16ec00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ec04: 0xdfb20010
    ctx->pc = 0x16ec04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ec08: 0xdfb30018
    ctx->pc = 0x16ec08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ec0c: 0xdfb40020
    ctx->pc = 0x16ec0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ec10: 0xdfb50028
    ctx->pc = 0x16ec10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ec14: 0xdfbf0030
    ctx->pc = 0x16ec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ec18: 0x3e00008
    ctx->pc = 0x16EC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EBFCu: goto label_16ebfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EC20u;
}
