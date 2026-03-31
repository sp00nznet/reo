#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016EF18
// Address: 0x16ef18 - 0x16f230
void sub_0016EF18_0x16ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16ef18u;

    // 0x16ef18: 0x27bdffc0
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ef1c: 0xffb10008
    ctx->pc = 0x16ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ef20: 0xc0882d
    ctx->pc = 0x16ef20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef24: 0xffb20010
    ctx->pc = 0x16ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16ef28: 0xa0902d
    ctx->pc = 0x16ef28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef2c: 0xffb30018
    ctx->pc = 0x16ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16ef30: 0xe0982d
    ctx->pc = 0x16ef30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef34: 0xffb40020
    ctx->pc = 0x16ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16ef38: 0x80a02d
    ctx->pc = 0x16ef38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef3c: 0xffb50028
    ctx->pc = 0x16ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16ef40: 0xffb00000
    ctx->pc = 0x16ef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ef44: 0xffbf0030
    ctx->pc = 0x16ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16ef48: 0x8e901b30
    ctx->pc = 0x16ef48u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 6960)));
    // 0x16ef4c: 0x8e020134
    ctx->pc = 0x16ef4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x16ef50: 0x10400003
    ctx->pc = 0x16EF50u;
    {
        const bool branch_taken_0x16ef50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EF54u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 2380));
        if (branch_taken_0x16ef50) {
            ctx->pc = 0x16EF60u;
            goto label_16ef60;
        }
    }
    ctx->pc = 0x16EF58u;
    // 0x16ef58: 0x10000009
    ctx->pc = 0x16EF58u;
    {
        const bool branch_taken_0x16ef58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EF5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x16ef58) {
            ctx->pc = 0x16EF80u;
            goto label_16ef80;
        }
    }
    ctx->pc = 0x16EF60u;
label_16ef60:
    // 0x16ef60: 0xc05c18c
    ctx->pc = 0x16EF60u;
    SET_GPR_U32(ctx, 31, 0x16EF68u);
    ctx->pc = 0x170630u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170630_0x170630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EF68u; }
    }
    if (ctx->pc != 0x16EF68u) { return; }
    ctx->pc = 0x16EF68u;
    // 0x16ef68: 0x14400005
    ctx->pc = 0x16EF68u;
    {
        const bool branch_taken_0x16ef68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EF6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x16ef68) {
            ctx->pc = 0x16EF80u;
            goto label_16ef80;
        }
    }
    ctx->pc = 0x16EF70u;
    // 0x16ef70: 0x24030001
    ctx->pc = 0x16ef70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ef74: 0x2402ffff
    ctx->pc = 0x16ef74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ef78: 0x100000a4
    ctx->pc = 0x16EF78u;
    {
        const bool branch_taken_0x16ef78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EF7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
        if (branch_taken_0x16ef78) {
            ctx->pc = 0x16F20Cu;
            goto label_16f20c;
        }
    }
    ctx->pc = 0x16EF80u;
label_16ef80:
    // 0x16ef80: 0x8e6a0000
    ctx->pc = 0x16ef80u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16ef84: 0x2546002c
    ctx->pc = 0x16ef84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 10), 44));
    // 0x16ef88: 0x2461025
    ctx->pc = 0x16ef88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x16ef8c: 0x30420007
    ctx->pc = 0x16ef8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x16ef90: 0x10400019
    ctx->pc = 0x16EF90u;
    {
        const bool branch_taken_0x16ef90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EF94u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ef90) {
            ctx->pc = 0x16EFF8u;
            goto label_16eff8;
        }
    }
    ctx->pc = 0x16EF98u;
    // 0x16ef98: 0x26420040
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 64));
label_16ef9c:
    // 0x16ef9c: 0x68a30007
    ctx->pc = 0x16ef9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16efa0: 0x6ca30000
    ctx->pc = 0x16efa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16efa4: 0x68a4000f
    ctx->pc = 0x16efa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16efa8: 0x6ca40008
    ctx->pc = 0x16efa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16efac: 0x68a70017
    ctx->pc = 0x16efacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16efb0: 0x6ca70010
    ctx->pc = 0x16efb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16efb4: 0x68a8001f
    ctx->pc = 0x16efb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16efb8: 0x6ca80018
    ctx->pc = 0x16efb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16efbc: 0xb0c30007
    ctx->pc = 0x16efbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efc0: 0xb4c30000
    ctx->pc = 0x16efc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efc4: 0xb0c4000f
    ctx->pc = 0x16efc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efc8: 0xb4c40008
    ctx->pc = 0x16efc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efcc: 0xb0c70017
    ctx->pc = 0x16efccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efd0: 0xb4c70010
    ctx->pc = 0x16efd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efd4: 0xb0c8001f
    ctx->pc = 0x16efd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efd8: 0xb4c80018
    ctx->pc = 0x16efd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16efdc: 0x24a50020
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x16efe0: 0x0
    ctx->pc = 0x16efe0u;
    // NOP
    // 0x16efe4: 0x0
    ctx->pc = 0x16efe4u;
    // NOP
    // 0x16efe8: 0x14a2ffec
    ctx->pc = 0x16EFE8u;
    {
        const bool branch_taken_0x16efe8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x16EFECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x16efe8) {
            ctx->pc = 0x16EF9Cu;
            goto label_16ef9c;
        }
    }
    ctx->pc = 0x16EFF0u;
    // 0x16eff0: 0x10000010
    ctx->pc = 0x16EFF0u;
    {
        const bool branch_taken_0x16eff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EFF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 56)));
        if (branch_taken_0x16eff0) {
            ctx->pc = 0x16F034u;
            goto label_16f034;
        }
    }
    ctx->pc = 0x16EFF8u;
label_16eff8:
    // 0x16eff8: 0x26420040
    ctx->pc = 0x16eff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 64));
label_16effc:
    // 0x16effc: 0xdca90000
    ctx->pc = 0x16effcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f000: 0xdca30008
    ctx->pc = 0x16f000u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16f004: 0xdca40010
    ctx->pc = 0x16f004u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x16f008: 0xdca70018
    ctx->pc = 0x16f008u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x16f00c: 0xfcc90000
    ctx->pc = 0x16f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x16f010: 0xfcc30008
    ctx->pc = 0x16f010u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x16f014: 0xfcc40010
    ctx->pc = 0x16f014u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x16f018: 0xfcc70018
    ctx->pc = 0x16f018u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x16f01c: 0x24a50020
    ctx->pc = 0x16f01cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x16f020: 0x0
    ctx->pc = 0x16f020u;
    // NOP
    // 0x16f024: 0x0
    ctx->pc = 0x16f024u;
    // NOP
    // 0x16f028: 0x14a2fff4
    ctx->pc = 0x16F028u;
    {
        const bool branch_taken_0x16f028 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x16F02Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
        if (branch_taken_0x16f028) {
            ctx->pc = 0x16EFFCu;
            goto label_16effc;
        }
    }
    ctx->pc = 0x16F030u;
    // 0x16f030: 0x8e830038
    ctx->pc = 0x16f030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_16f034:
    // 0x16f034: 0x24020003
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16f038: 0x68a80007
    ctx->pc = 0x16f038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f03c: 0x6ca80000
    ctx->pc = 0x16f03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f040: 0x68a9000f
    ctx->pc = 0x16f040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f044: 0x6ca90008
    ctx->pc = 0x16f044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f048: 0x8ca40010
    ctx->pc = 0x16f048u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x16f04c: 0xb0c80007
    ctx->pc = 0x16f04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f050: 0xb4c80000
    ctx->pc = 0x16f050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f054: 0xb0c9000f
    ctx->pc = 0x16f054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f058: 0xb4c90008
    ctx->pc = 0x16f058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f05c: 0x14620042
    ctx->pc = 0x16F05Cu;
    {
        const bool branch_taken_0x16f05c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16F060u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
        if (branch_taken_0x16f05c) {
            ctx->pc = 0x16F168u;
            goto label_16f168;
        }
    }
    ctx->pc = 0x16F064u;
    // 0x16f064: 0x8e420018
    ctx->pc = 0x16f064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x16f068: 0x2442ffff
    ctx->pc = 0x16f068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f06c: 0x2c420002
    ctx->pc = 0x16f06cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x16f070: 0x5040000c
    ctx->pc = 0x16F070u;
    {
        const bool branch_taken_0x16f070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16f070) {
            ctx->pc = 0x16F074u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x16F0A4u;
            goto label_16f0a4;
        }
    }
    ctx->pc = 0x16F078u;
    // 0x16f078: 0x8e020134
    ctx->pc = 0x16f078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x16f07c: 0x54400009
    ctx->pc = 0x16F07Cu;
    {
        const bool branch_taken_0x16f07c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16f07c) {
            ctx->pc = 0x16F080u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x16F0A4u;
            goto label_16f0a4;
        }
    }
    ctx->pc = 0x16F084u;
    // 0x16f084: 0xc05c1ce
    ctx->pc = 0x16F084u;
    SET_GPR_U32(ctx, 31, 0x16F08Cu);
    ctx->pc = 0x16F088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 300)));
    ctx->pc = 0x170738u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170738_0x170738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F08Cu; }
    }
    if (ctx->pc != 0x16F08Cu) { return; }
    ctx->pc = 0x16F08Cu;
    // 0x16f08c: 0x8e020130
    ctx->pc = 0x16f08cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x16f090: 0xae02012c
    ctx->pc = 0x16f090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x16f094: 0x8e630000
    ctx->pc = 0x16f094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16f098: 0xae030130
    ctx->pc = 0x16f098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x16f09c: 0x8e6a0000
    ctx->pc = 0x16f09cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16f0a0: 0x8e430000
    ctx->pc = 0x16f0a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16f0a4:
    // 0x16f0a4: 0x8e480004
    ctx->pc = 0x16f0a4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16f0a8: 0x2462000f
    ctx->pc = 0x16f0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 15));
    // 0x16f0ac: 0x2463001e
    ctx->pc = 0x16f0acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 30));
    // 0x16f0b0: 0x28440000
    ctx->pc = 0x16f0b0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 0));
    // 0x16f0b4: 0x2505000f
    ctx->pc = 0x16f0b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 15));
    // 0x16f0b8: 0x64100b
    ctx->pc = 0x16f0b8u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16f0bc: 0x28a90000
    ctx->pc = 0x16f0bcu;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 5), 0));
    // 0x16f0c0: 0x21103
    ctx->pc = 0x16f0c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x16f0c4: 0x2508001e
    ctx->pc = 0x16f0c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 30));
    // 0x16f0c8: 0x22100
    ctx->pc = 0x16f0c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x16f0cc: 0x210c0
    ctx->pc = 0x16f0ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x16f0d0: 0x2487003f
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 63));
    // 0x16f0d4: 0x2484007e
    ctx->pc = 0x16f0d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 126));
    // 0x16f0d8: 0x2446003f
    ctx->pc = 0x16f0d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 63));
    // 0x16f0dc: 0x2442007e
    ctx->pc = 0x16f0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 126));
    // 0x16f0e0: 0x28e30000
    ctx->pc = 0x16f0e0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 0));
    // 0x16f0e4: 0x109280b
    ctx->pc = 0x16f0e4u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 8));
    // 0x16f0e8: 0x83380b
    ctx->pc = 0x16f0e8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
    // 0x16f0ec: 0x28c30000
    ctx->pc = 0x16f0ecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 0));
    // 0x16f0f0: 0x43300b
    ctx->pc = 0x16f0f0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    // 0x16f0f4: 0x8e03012c
    ctx->pc = 0x16f0f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x16f0f8: 0x73983
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x16f0fc: 0x52903
    ctx->pc = 0x16f0fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x16f100: 0xe51018
    ctx->pc = 0x16f100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x16f104: 0x73980
    ctx->pc = 0x16f104u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 6));
    // 0x16f108: 0x63183
    ctx->pc = 0x16f108u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x16f10c: 0x8e040130
    ctx->pc = 0x16f10cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x16f110: 0x70c52818
    ctx->pc = 0x16f110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x16f114: 0x63180
    ctx->pc = 0x16f114u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 6));
    // 0x16f118: 0x8c680008
    ctx->pc = 0x16f118u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16f11c: 0x8c890008
    ctx->pc = 0x16f11cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16f120: 0x21280
    ctx->pc = 0x16f120u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x16f124: 0xa627001e
    ctx->pc = 0x16f124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 7));
    // 0x16f128: 0x1222021
    ctx->pc = 0x16f128u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x16f12c: 0x1021021
    ctx->pc = 0x16f12cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16f130: 0x52a40
    ctx->pc = 0x16f130u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 9));
    // 0x16f134: 0xa626001c
    ctx->pc = 0x16f134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f138: 0x851821
    ctx->pc = 0x16f138u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16f13c: 0x452821
    ctx->pc = 0x16f13cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16f140: 0xae250004
    ctx->pc = 0x16f140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x16f144: 0xae230014
    ctx->pc = 0x16f144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x16f148: 0xa627000e
    ctx->pc = 0x16f148u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x16f14c: 0xa626000c
    ctx->pc = 0x16f14cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f150: 0xae280008
    ctx->pc = 0x16f150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
    // 0x16f154: 0xae220000
    ctx->pc = 0x16f154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16f158: 0xae290018
    ctx->pc = 0x16f158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 9));
    // 0x16f15c: 0x10000023
    ctx->pc = 0x16F15Cu;
    {
        const bool branch_taken_0x16f15c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F160u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        if (branch_taken_0x16f15c) {
            ctx->pc = 0x16F1ECu;
            goto label_16f1ec;
        }
    }
    ctx->pc = 0x16F164u;
    // 0x16f164: 0x0
    ctx->pc = 0x16f164u;
    // NOP
label_16f168:
    // 0x16f168: 0x8e420018
    ctx->pc = 0x16f168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x16f16c: 0x2442ffff
    ctx->pc = 0x16f16cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f170: 0x2c420002
    ctx->pc = 0x16f170u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x16f174: 0x10400007
    ctx->pc = 0x16F174u;
    {
        const bool branch_taken_0x16f174 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F178u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 260)));
        if (branch_taken_0x16f174) {
            ctx->pc = 0x16F194u;
            goto label_16f194;
        }
    }
    ctx->pc = 0x16F17Cu;
    // 0x16f17c: 0x8e030108
    ctx->pc = 0x16f17cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x16f180: 0x38420001
    ctx->pc = 0x16f180u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x16f184: 0x38630001
    ctx->pc = 0x16f184u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x16f188: 0xae020104
    ctx->pc = 0x16f188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x16f18c: 0xae030108
    ctx->pc = 0x16f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
    // 0x16f190: 0x8e020104
    ctx->pc = 0x16f190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_16f194:
    // 0x16f194: 0x2604010c
    ctx->pc = 0x16f194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 268));
    // 0x16f198: 0x8e030108
    ctx->pc = 0x16f198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x16f19c: 0x21100
    ctx->pc = 0x16f19cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x16f1a0: 0x441021
    ctx->pc = 0x16f1a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16f1a4: 0x31900
    ctx->pc = 0x16f1a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x16f1a8: 0x68480007
    ctx->pc = 0x16f1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f1ac: 0x6c480000
    ctx->pc = 0x16f1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f1b0: 0x6849000f
    ctx->pc = 0x16f1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f1b4: 0x6c490008
    ctx->pc = 0x16f1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f1b8: 0xb2280007
    ctx->pc = 0x16f1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f1bc: 0xb6280000
    ctx->pc = 0x16f1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f1c0: 0xb229000f
    ctx->pc = 0x16f1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f1c4: 0x641821
    ctx->pc = 0x16f1c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16f1c8: 0xb6290008
    ctx->pc = 0x16f1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f1cc: 0x68670007
    ctx->pc = 0x16f1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f1d0: 0x6c670000
    ctx->pc = 0x16f1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f1d4: 0x6868000f
    ctx->pc = 0x16f1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f1d8: 0x6c680008
    ctx->pc = 0x16f1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f1dc: 0xb2270017
    ctx->pc = 0x16f1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f1e0: 0xb6270010
    ctx->pc = 0x16f1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f1e4: 0xb228001f
    ctx->pc = 0x16f1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f1e8: 0xb6280018
    ctx->pc = 0x16f1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_16f1ec:
    // 0x16f1ec: 0x8d430008
    ctx->pc = 0x16f1ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x16f1f0: 0x2544002c
    ctx->pc = 0x16f1f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 44));
    // 0x16f1f4: 0xae20002c
    ctx->pc = 0x16f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x16f1f8: 0x102d
    ctx->pc = 0x16f1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1fc: 0xae200028
    ctx->pc = 0x16f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x16f200: 0xae230020
    ctx->pc = 0x16f200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x16f204: 0xae240024
    ctx->pc = 0x16f204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x16f208: 0xaea00024
    ctx->pc = 0x16f208u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
label_16f20c:
    // 0x16f20c: 0xdfb00000
    ctx->pc = 0x16f20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f210: 0xdfb10008
    ctx->pc = 0x16f210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f214: 0xdfb20010
    ctx->pc = 0x16f214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f218: 0xdfb30018
    ctx->pc = 0x16f218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f21c: 0xdfb40020
    ctx->pc = 0x16f21cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f220: 0xdfb50028
    ctx->pc = 0x16f220u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f224: 0xdfbf0030
    ctx->pc = 0x16f224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f228: 0x3e00008
    ctx->pc = 0x16F228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F22Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF60u: goto label_16ef60;
            case 0x16EF80u: goto label_16ef80;
            case 0x16EF9Cu: goto label_16ef9c;
            case 0x16EFF8u: goto label_16eff8;
            case 0x16EFFCu: goto label_16effc;
            case 0x16F034u: goto label_16f034;
            case 0x16F0A4u: goto label_16f0a4;
            case 0x16F168u: goto label_16f168;
            case 0x16F194u: goto label_16f194;
            case 0x16F1ECu: goto label_16f1ec;
            case 0x16F20Cu: goto label_16f20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F230u;
}
