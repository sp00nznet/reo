#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0015EB40
// Address: 0x15eb40 - 0x15ebe8
void sub_0015EB40_0x15eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x15eb40u;

    // 0x15eb40: 0x27bdffe0
    ctx->pc = 0x15eb40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15eb44: 0x3c030024
    ctx->pc = 0x15eb44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x15eb48: 0x3c020024
    ctx->pc = 0x15eb48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x15eb4c: 0xffbf0010
    ctx->pc = 0x15eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15eb50: 0x2448ee58
    ctx->pc = 0x15eb50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294962776));
    // 0x15eb54: 0x69050007
    ctx->pc = 0x15eb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x15eb58: 0x6d050000
    ctx->pc = 0x15eb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x15eb5c: 0xb3a50007
    ctx->pc = 0x15eb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15eb60: 0xb7a50000
    ctx->pc = 0x15eb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15eb64: 0x24052b80
    ctx->pc = 0x15eb64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11136));
    // 0x15eb68: 0xafa40004
    ctx->pc = 0x15eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x15eb6c: 0xc05a67c
    ctx->pc = 0x15EB6Cu;
    SET_GPR_U32(ctx, 31, 0x15EB74u);
    ctx->pc = 0x15EB70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294962904));
    ctx->pc = 0x1699F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001699F0_0x1699f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB74u; }
    }
    if (ctx->pc != 0x15EB74u) { return; }
    ctx->pc = 0x15EB74u;
    // 0x15eb74: 0x24030001
    ctx->pc = 0x15eb74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eb78: 0x10430007
    ctx->pc = 0x15EB78u;
    {
        const bool branch_taken_0x15eb78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x15EB7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15eb78) {
            ctx->pc = 0x15EB98u;
            goto label_15eb98;
        }
    }
    ctx->pc = 0x15EB80u;
    // 0x15eb80: 0x3c040024
    ctx->pc = 0x15eb80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x15eb84: 0xc058dd4
    ctx->pc = 0x15EB84u;
    SET_GPR_U32(ctx, 31, 0x15EB8Cu);
    ctx->pc = 0x15EB88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962912));
    ctx->pc = 0x163750u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00163750_0x163750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EB8Cu; }
    }
    if (ctx->pc != 0x15EB8Cu) { return; }
    ctx->pc = 0x15EB8Cu;
    // 0x15eb8c: 0x10000012
    ctx->pc = 0x15EB8Cu;
    {
        const bool branch_taken_0x15eb8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EB90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15eb8c) {
            ctx->pc = 0x15EBD8u;
            goto label_15ebd8;
        }
    }
    ctx->pc = 0x15EB94u;
    // 0x15eb94: 0x0
    ctx->pc = 0x15eb94u;
    // NOP
label_15eb98:
    // 0x15eb98: 0xc05a680
    ctx->pc = 0x15EB98u;
    SET_GPR_U32(ctx, 31, 0x15EBA0u);
    ctx->pc = 0x169A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169A00_0x169a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBA0u; }
    }
    if (ctx->pc != 0x15EBA0u) { return; }
    ctx->pc = 0x15EBA0u;
    // 0x15eba0: 0x10400005
    ctx->pc = 0x15EBA0u;
    {
        const bool branch_taken_0x15eba0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EBA4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)22 << 16));
        if (branch_taken_0x15eba0) {
            ctx->pc = 0x15EBB8u;
            goto label_15ebb8;
        }
    }
    ctx->pc = 0x15EBA8u;
    // 0x15eba8: 0xc057abc
    ctx->pc = 0x15EBA8u;
    SET_GPR_U32(ctx, 31, 0x15EBB0u);
    ctx->pc = 0x15EBACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966995));
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBB0u; }
    }
    if (ctx->pc != 0x15EBB0u) { return; }
    ctx->pc = 0x15EBB0u;
    // 0x15ebb0: 0x1000000a
    ctx->pc = 0x15EBB0u;
    {
        const bool branch_taken_0x15ebb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EBB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x15ebb0) {
            ctx->pc = 0x15EBDCu;
            goto label_15ebdc;
        }
    }
    ctx->pc = 0x15EBB8u;
label_15ebb8:
    // 0x15ebb8: 0x202d
    ctx->pc = 0x15ebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebbc: 0x24a5ec08
    ctx->pc = 0x15ebbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962184));
    // 0x15ebc0: 0xc05a730
    ctx->pc = 0x15EBC0u;
    SET_GPR_U32(ctx, 31, 0x15EBC8u);
    ctx->pc = 0x15EBC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169CC0_0x169cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBC8u; }
    }
    if (ctx->pc != 0x15EBC8u) { return; }
    ctx->pc = 0x15EBC8u;
    // 0x15ebc8: 0x10400003
    ctx->pc = 0x15EBC8u;
    {
        const bool branch_taken_0x15ebc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15EBCCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966993));
        if (branch_taken_0x15ebc8) {
            ctx->pc = 0x15EBD8u;
            goto label_15ebd8;
        }
    }
    ctx->pc = 0x15EBD0u;
    // 0x15ebd0: 0xc057abc
    ctx->pc = 0x15EBD0u;
    SET_GPR_U32(ctx, 31, 0x15EBD8u);
    ctx->pc = 0x15EAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EAF0_0x15eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EBD8u; }
    }
    if (ctx->pc != 0x15EBD8u) { return; }
    ctx->pc = 0x15EBD8u;
label_15ebd8:
    // 0x15ebd8: 0xdfbf0010
    ctx->pc = 0x15ebd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15ebdc:
    // 0x15ebdc: 0x3e00008
    ctx->pc = 0x15EBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EBE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15EB98u: goto label_15eb98;
            case 0x15EBB8u: goto label_15ebb8;
            case 0x15EBD8u: goto label_15ebd8;
            case 0x15EBDCu: goto label_15ebdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15EBE4u;
    // 0x15ebe4: 0x0
    ctx->pc = 0x15ebe4u;
    // NOP
}
