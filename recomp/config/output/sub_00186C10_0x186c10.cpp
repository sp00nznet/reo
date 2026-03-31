#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00186C10
// Address: 0x186c10 - 0x186d30
void sub_00186C10_0x186c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186c10u;

    // 0x186c10: 0x27bdffe0
    ctx->pc = 0x186c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186c14: 0x3c020029
    ctx->pc = 0x186c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x186c18: 0xffb10008
    ctx->pc = 0x186c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186c1c: 0x2451b0c0
    ctx->pc = 0x186c1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294947008));
    // 0x186c20: 0x302d
    ctx->pc = 0x186c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c24: 0x24070001
    ctx->pc = 0x186c24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x186c28: 0x220282d
    ctx->pc = 0x186c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c2c: 0x402d
    ctx->pc = 0x186c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c30: 0xffb00000
    ctx->pc = 0x186c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186c34: 0xffbf0010
    ctx->pc = 0x186c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186c38: 0xc06204e
    ctx->pc = 0x186C38u;
    SET_GPR_U32(ctx, 31, 0x186C40u);
    ctx->pc = 0x186C3Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188138_0x188138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186C40u; }
    }
    if (ctx->pc != 0x186C40u) { return; }
    ctx->pc = 0x186C40u;
    // 0x186c40: 0x10400035
    ctx->pc = 0x186C40u;
    {
        const bool branch_taken_0x186c40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186C44u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186c40) {
            ctx->pc = 0x186D18u;
            goto label_186d18;
        }
    }
    ctx->pc = 0x186C48u;
    // 0x186c48: 0x101040
    ctx->pc = 0x186c48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x186c4c: 0x501021
    ctx->pc = 0x186c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x186c50: 0x21140
    ctx->pc = 0x186c50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x186c54: 0x501021
    ctx->pc = 0x186c54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x186c58: 0x21080
    ctx->pc = 0x186c58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x186c5c: 0x3c010023
    ctx->pc = 0x186c5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x186c60: 0x2421fa18
    ctx->pc = 0x186c60u;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294965784));
    // 0x186c64: 0x221021
    ctx->pc = 0x186c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x186c68: 0x451825
    ctx->pc = 0x186c68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x186c6c: 0x30630007
    ctx->pc = 0x186c6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 7));
    // 0x186c70: 0x10600019
    ctx->pc = 0x186C70u;
    {
        const bool branch_taken_0x186c70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x186C74u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 384));
        if (branch_taken_0x186c70) {
            ctx->pc = 0x186CD8u;
            goto label_186cd8;
        }
    }
    ctx->pc = 0x186C78u;
label_186c78:
    // 0x186c78: 0x68a40007
    ctx->pc = 0x186c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186c7c: 0x6ca40000
    ctx->pc = 0x186c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186c80: 0x68a6000f
    ctx->pc = 0x186c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186c84: 0x6ca60008
    ctx->pc = 0x186c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186c88: 0x68a70017
    ctx->pc = 0x186c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186c8c: 0x6ca70010
    ctx->pc = 0x186c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186c90: 0x68a8001f
    ctx->pc = 0x186c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x186c94: 0x6ca80018
    ctx->pc = 0x186c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x186c98: 0xb0440007
    ctx->pc = 0x186c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186c9c: 0xb4440000
    ctx->pc = 0x186c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186ca0: 0xb046000f
    ctx->pc = 0x186ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186ca4: 0xb4460008
    ctx->pc = 0x186ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186ca8: 0xb0470017
    ctx->pc = 0x186ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186cac: 0xb4470010
    ctx->pc = 0x186cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186cb0: 0xb048001f
    ctx->pc = 0x186cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186cb4: 0xb4480018
    ctx->pc = 0x186cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186cb8: 0x24a50020
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x186cbc: 0x0
    ctx->pc = 0x186cbcu;
    // NOP
    // 0x186cc0: 0x0
    ctx->pc = 0x186cc0u;
    // NOP
    // 0x186cc4: 0x14a3ffec
    ctx->pc = 0x186CC4u;
    {
        const bool branch_taken_0x186cc4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x186CC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x186cc4) {
            ctx->pc = 0x186C78u;
            goto label_186c78;
        }
    }
    ctx->pc = 0x186CCCu;
    // 0x186ccc: 0x1000000f
    ctx->pc = 0x186CCCu;
    {
        const bool branch_taken_0x186ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x186ccc) {
            ctx->pc = 0x186D0Cu;
            goto label_186d0c;
        }
    }
    ctx->pc = 0x186CD4u;
    // 0x186cd4: 0x0
    ctx->pc = 0x186cd4u;
    // NOP
label_186cd8:
    // 0x186cd8: 0xdca40000
    ctx->pc = 0x186cd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186cdc: 0xdca60008
    ctx->pc = 0x186cdcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x186ce0: 0xdca70010
    ctx->pc = 0x186ce0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x186ce4: 0xdca80018
    ctx->pc = 0x186ce4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x186ce8: 0xfc440000
    ctx->pc = 0x186ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x186cec: 0xfc460008
    ctx->pc = 0x186cecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x186cf0: 0xfc470010
    ctx->pc = 0x186cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x186cf4: 0xfc480018
    ctx->pc = 0x186cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x186cf8: 0x24a50020
    ctx->pc = 0x186cf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x186cfc: 0x0
    ctx->pc = 0x186cfcu;
    // NOP
    // 0x186d00: 0x0
    ctx->pc = 0x186d00u;
    // NOP
    // 0x186d04: 0x14a3fff4
    ctx->pc = 0x186D04u;
    {
        const bool branch_taken_0x186d04 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x186D08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x186d04) {
            ctx->pc = 0x186CD8u;
            goto label_186cd8;
        }
    }
    ctx->pc = 0x186D0Cu;
label_186d0c:
    // 0x186d0c: 0x8ca30000
    ctx->pc = 0x186d0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186d10: 0xac430000
    ctx->pc = 0x186d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x186d14: 0x24020001
    ctx->pc = 0x186d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_186d18:
    // 0x186d18: 0xdfb00000
    ctx->pc = 0x186d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186d1c: 0xdfb10008
    ctx->pc = 0x186d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x186d20: 0xdfbf0010
    ctx->pc = 0x186d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186d24: 0x3e00008
    ctx->pc = 0x186D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186C78u: goto label_186c78;
            case 0x186CD8u: goto label_186cd8;
            case 0x186D0Cu: goto label_186d0c;
            case 0x186D18u: goto label_186d18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186D2Cu;
    // 0x186d2c: 0x0
    ctx->pc = 0x186d2cu;
    // NOP
}
