#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00158E48
// Address: 0x158e48 - 0x158f38
void sub_00158E48_0x158e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x158e48u;

    // 0x158e48: 0x27bdffe0
    ctx->pc = 0x158e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158e4c: 0xffb00000
    ctx->pc = 0x158e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158e50: 0x80802d
    ctx->pc = 0x158e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e54: 0xffb10008
    ctx->pc = 0x158e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158e58: 0xc0882d
    ctx->pc = 0x158e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e5c: 0xffb20010
    ctx->pc = 0x158e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158e60: 0xffbf0018
    ctx->pc = 0x158e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x158e64: 0xc056dec
    ctx->pc = 0x158E64u;
    SET_GPR_U32(ctx, 31, 0x158E6Cu);
    ctx->pc = 0x158E68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158E6Cu; }
    }
    if (ctx->pc != 0x158E6Cu) { return; }
    ctx->pc = 0x158E6Cu;
    // 0x158e6c: 0x3c05ff03
    ctx->pc = 0x158e6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x158e70: 0x26100224
    ctx->pc = 0x158e70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 548));
    // 0x158e74: 0x202d
    ctx->pc = 0x158e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e78: 0x10400007
    ctx->pc = 0x158E78u;
    {
        const bool branch_taken_0x158e78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158E7Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 515));
        if (branch_taken_0x158e78) {
            ctx->pc = 0x158E98u;
            goto label_158e98;
        }
    }
    ctx->pc = 0x158E80u;
    // 0x158e80: 0xdfb00000
    ctx->pc = 0x158e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158e84: 0xdfb10008
    ctx->pc = 0x158e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158e88: 0xdfb20010
    ctx->pc = 0x158e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158e8c: 0xdfbf0018
    ctx->pc = 0x158e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158e90: 0x80563ce
    ctx->pc = 0x158E90u;
    ctx->pc = 0x158E94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x158E98u;
label_158e98:
    // 0x158e98: 0xae110004
    ctx->pc = 0x158e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x158e9c: 0xae120000
    ctx->pc = 0x158e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x158ea0: 0xdfb10008
    ctx->pc = 0x158ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158ea4: 0xdfb00000
    ctx->pc = 0x158ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ea8: 0xdfb20010
    ctx->pc = 0x158ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158eac: 0xdfbf0018
    ctx->pc = 0x158eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158eb0: 0x3e00008
    ctx->pc = 0x158EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158EB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158E98u: goto label_158e98;
            case 0x158EF8u: goto label_158ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158EB8u;
    // 0x158eb8: 0x27bdffe0
    ctx->pc = 0x158eb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158ebc: 0xffb00000
    ctx->pc = 0x158ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158ec0: 0x80802d
    ctx->pc = 0x158ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ec4: 0xffb10008
    ctx->pc = 0x158ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158ec8: 0xffbf0010
    ctx->pc = 0x158ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158ecc: 0xc056dec
    ctx->pc = 0x158ECCu;
    SET_GPR_U32(ctx, 31, 0x158ED4u);
    ctx->pc = 0x158ED0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15B7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B7B0_0x15b7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158ED4u; }
    }
    if (ctx->pc != 0x158ED4u) { return; }
    ctx->pc = 0x158ED4u;
    // 0x158ed4: 0x3c05ff03
    ctx->pc = 0x158ed4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x158ed8: 0x10400007
    ctx->pc = 0x158ED8u;
    {
        const bool branch_taken_0x158ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x158EDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x158ed8) {
            ctx->pc = 0x158EF8u;
            goto label_158ef8;
        }
    }
    ctx->pc = 0x158EE0u;
    // 0x158ee0: 0xdfb00000
    ctx->pc = 0x158ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158ee4: 0x34a50204
    ctx->pc = 0x158ee4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 516));
    // 0x158ee8: 0xdfb10008
    ctx->pc = 0x158ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158eec: 0xdfbf0010
    ctx->pc = 0x158eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158ef0: 0x80563ce
    ctx->pc = 0x158EF0u;
    ctx->pc = 0x158EF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x158F38u;
    sub_00158F38_0x158f38(rdram, ctx, runtime); return;
    ctx->pc = 0x158EF8u;
label_158ef8:
    // 0x158ef8: 0x6a03022b
    ctx->pc = 0x158ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 555); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x158efc: 0x6e030224
    ctx->pc = 0x158efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 548); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x158f00: 0x6a040233
    ctx->pc = 0x158f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 563); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x158f04: 0x6e04022c
    ctx->pc = 0x158f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 556); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x158f08: 0x8e050234
    ctx->pc = 0x158f08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x158f0c: 0xb2230007
    ctx->pc = 0x158f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158f10: 0xb6230000
    ctx->pc = 0x158f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158f14: 0xb224000f
    ctx->pc = 0x158f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158f18: 0xb6240008
    ctx->pc = 0x158f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158f1c: 0xae250010
    ctx->pc = 0x158f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x158f20: 0xdfb00000
    ctx->pc = 0x158f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158f24: 0xdfb10008
    ctx->pc = 0x158f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158f28: 0xdfbf0010
    ctx->pc = 0x158f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158f2c: 0x3e00008
    ctx->pc = 0x158F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158F30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158E98u: goto label_158e98;
            case 0x158EF8u: goto label_158ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158F34u;
    // 0x158f34: 0x0
    ctx->pc = 0x158f34u;
    // NOP
}
