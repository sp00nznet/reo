#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_14fe90
// Address: 0x14fe90 - 0x14ff48
void entry_14fe90_0x14ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14fe90u;

    // 0x14fe90: 0x3c030023
    ctx->pc = 0x14fe90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x14fe94: 0x2463c008
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950920));
    // 0x14fe98: 0x831025
    ctx->pc = 0x14fe98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14fe9c: 0x30420007
    ctx->pc = 0x14fe9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x14fea0: 0x10400019
    ctx->pc = 0x14FEA0u;
    {
        const bool branch_taken_0x14fea0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FEA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 6144));
        if (branch_taken_0x14fea0) {
            ctx->pc = 0x14FF08u;
            goto label_14ff08;
        }
    }
    ctx->pc = 0x14FEA8u;
label_14fea8:
    // 0x14fea8: 0x68650007
    ctx->pc = 0x14fea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14feac: 0x6c650000
    ctx->pc = 0x14feacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14feb0: 0x6866000f
    ctx->pc = 0x14feb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14feb4: 0x6c660008
    ctx->pc = 0x14feb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14feb8: 0x68670017
    ctx->pc = 0x14feb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14febc: 0x6c670010
    ctx->pc = 0x14febcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14fec0: 0x6868001f
    ctx->pc = 0x14fec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14fec4: 0x6c680018
    ctx->pc = 0x14fec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14fec8: 0xb0850007
    ctx->pc = 0x14fec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fecc: 0xb4850000
    ctx->pc = 0x14feccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fed0: 0xb086000f
    ctx->pc = 0x14fed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fed4: 0xb4860008
    ctx->pc = 0x14fed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fed8: 0xb0870017
    ctx->pc = 0x14fed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fedc: 0xb4870010
    ctx->pc = 0x14fedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fee0: 0xb088001f
    ctx->pc = 0x14fee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fee4: 0xb4880018
    ctx->pc = 0x14fee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fee8: 0x24630020
    ctx->pc = 0x14fee8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x14feec: 0x0
    ctx->pc = 0x14feecu;
    // NOP
    // 0x14fef0: 0x0
    ctx->pc = 0x14fef0u;
    // NOP
    // 0x14fef4: 0x1462ffec
    ctx->pc = 0x14FEF4u;
    {
        const bool branch_taken_0x14fef4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x14FEF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x14fef4) {
            ctx->pc = 0x14FEA8u;
            goto label_14fea8;
        }
    }
    ctx->pc = 0x14FEFCu;
    // 0x14fefc: 0x3e00008
    ctx->pc = 0x14FEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FF04u;
    // 0x14ff04: 0x0
    ctx->pc = 0x14ff04u;
    // NOP
label_14ff08:
    // 0x14ff08: 0xdc650000
    ctx->pc = 0x14ff08u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ff0c: 0xdc660008
    ctx->pc = 0x14ff0cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14ff10: 0xdc670010
    ctx->pc = 0x14ff10u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14ff14: 0xdc680018
    ctx->pc = 0x14ff14u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x14ff18: 0xfc850000
    ctx->pc = 0x14ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x14ff1c: 0xfc860008
    ctx->pc = 0x14ff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x14ff20: 0xfc870010
    ctx->pc = 0x14ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x14ff24: 0xfc880018
    ctx->pc = 0x14ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x14ff28: 0x24630020
    ctx->pc = 0x14ff28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x14ff2c: 0x0
    ctx->pc = 0x14ff2cu;
    // NOP
    // 0x14ff30: 0x0
    ctx->pc = 0x14ff30u;
    // NOP
    // 0x14ff34: 0x1462fff4
    ctx->pc = 0x14FF34u;
    {
        const bool branch_taken_0x14ff34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x14FF38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x14ff34) {
            ctx->pc = 0x14FF08u;
            goto label_14ff08;
        }
    }
    ctx->pc = 0x14FF3Cu;
    // 0x14ff3c: 0x3e00008
    ctx->pc = 0x14FF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FF44u;
    // 0x14ff44: 0x0
    ctx->pc = 0x14ff44u;
    // NOP
}
