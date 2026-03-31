#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00166E68
// Address: 0x166e68 - 0x166f08
void sub_00166E68_0x166e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x166e68u;

    // 0x166e68: 0x27bdffc0
    ctx->pc = 0x166e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166e6c: 0xffb00010
    ctx->pc = 0x166e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x166e70: 0x80802d
    ctx->pc = 0x166e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e74: 0xffb10018
    ctx->pc = 0x166e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x166e78: 0xe0882d
    ctx->pc = 0x166e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e7c: 0xffb20020
    ctx->pc = 0x166e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x166e80: 0xc0902d
    ctx->pc = 0x166e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e84: 0x3a0202d
    ctx->pc = 0x166e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166e88: 0xffb30028
    ctx->pc = 0x166e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x166e8c: 0xffbf0030
    ctx->pc = 0x166e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x166e90: 0xc05a7b2
    ctx->pc = 0x166E90u;
    SET_GPR_U32(ctx, 31, 0x166E98u);
    ctx->pc = 0x166E94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EC8_0x169ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E98u; }
    }
    if (ctx->pc != 0x166E98u) { return; }
    ctx->pc = 0x166E98u;
    // 0x166e98: 0xae510004
    ctx->pc = 0x166e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x166e9c: 0x26040018
    ctx->pc = 0x166e9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 24));
    // 0x166ea0: 0x6a620007
    ctx->pc = 0x166ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x166ea4: 0x6e620000
    ctx->pc = 0x166ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x166ea8: 0x6a63000f
    ctx->pc = 0x166ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x166eac: 0x6e630008
    ctx->pc = 0x166eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x166eb0: 0x6a650017
    ctx->pc = 0x166eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x166eb4: 0x6e650010
    ctx->pc = 0x166eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x166eb8: 0xb2020007
    ctx->pc = 0x166eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ebc: 0xb6020000
    ctx->pc = 0x166ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ec0: 0xb203000f
    ctx->pc = 0x166ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ec4: 0xb6030008
    ctx->pc = 0x166ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ec8: 0xb2050017
    ctx->pc = 0x166ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166ecc: 0xc059bc2
    ctx->pc = 0x166ECCu;
    SET_GPR_U32(ctx, 31, 0x166ED4u);
    ctx->pc = 0x166ED0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->pc = 0x166F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00166F08_0x166f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166ED4u; }
    }
    if (ctx->pc != 0x166ED4u) { return; }
    ctx->pc = 0x166ED4u;
    // 0x166ed4: 0xae000020
    ctx->pc = 0x166ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x166ed8: 0xae000024
    ctx->pc = 0x166ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x166edc: 0xc05d040
    ctx->pc = 0x166EDCu;
    SET_GPR_U32(ctx, 31, 0x166EE4u);
    ctx->pc = 0x166EE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    ctx->pc = 0x174100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00174100_0x174100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EE4u; }
    }
    if (ctx->pc != 0x166EE4u) { return; }
    ctx->pc = 0x166EE4u;
    // 0x166ee4: 0xc05a7b8
    ctx->pc = 0x166EE4u;
    SET_GPR_U32(ctx, 31, 0x166EECu);
    ctx->pc = 0x166EE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169EE0_0x169ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166EECu; }
    }
    if (ctx->pc != 0x166EECu) { return; }
    ctx->pc = 0x166EECu;
    // 0x166eec: 0xdfb00010
    ctx->pc = 0x166eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166ef0: 0xdfb10018
    ctx->pc = 0x166ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166ef4: 0xdfb20020
    ctx->pc = 0x166ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166ef8: 0xdfb30028
    ctx->pc = 0x166ef8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x166efc: 0xdfbf0030
    ctx->pc = 0x166efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166f00: 0x3e00008
    ctx->pc = 0x166F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166F08u;
}
