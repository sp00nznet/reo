#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016EC20
// Address: 0x16ec20 - 0x16ec90
void sub_0016EC20_0x16ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16ec20u;

    // 0x16ec20: 0x24850d54
    ctx->pc = 0x16ec20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 3412));
    // 0x16ec24: 0x8c830dc4
    ctx->pc = 0x16ec24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 3524)));
    // 0x16ec28: 0x8ca20020
    ctx->pc = 0x16ec28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x16ec2c: 0x43102a
    ctx->pc = 0x16ec2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x16ec30: 0x10400015
    ctx->pc = 0x16EC30u;
    {
        const bool branch_taken_0x16ec30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EC34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3452));
        if (branch_taken_0x16ec30) {
            ctx->pc = 0x16EC88u;
            goto label_16ec88;
        }
    }
    ctx->pc = 0x16EC38u;
    // 0x16ec38: 0x68a20007
    ctx->pc = 0x16ec38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16ec3c: 0x6ca20000
    ctx->pc = 0x16ec3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16ec40: 0x68a3000f
    ctx->pc = 0x16ec40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16ec44: 0x6ca30008
    ctx->pc = 0x16ec44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16ec48: 0x68a60017
    ctx->pc = 0x16ec48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16ec4c: 0x6ca60010
    ctx->pc = 0x16ec4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16ec50: 0x68a7001f
    ctx->pc = 0x16ec50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16ec54: 0x6ca70018
    ctx->pc = 0x16ec54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16ec58: 0xb0820007
    ctx->pc = 0x16ec58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec5c: 0xb4820000
    ctx->pc = 0x16ec5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec60: 0xb083000f
    ctx->pc = 0x16ec60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec64: 0xb4830008
    ctx->pc = 0x16ec64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec68: 0xb0860017
    ctx->pc = 0x16ec68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec6c: 0xb4860010
    ctx->pc = 0x16ec6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec70: 0xb087001f
    ctx->pc = 0x16ec70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec74: 0xb4870018
    ctx->pc = 0x16ec74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec78: 0x68a20027
    ctx->pc = 0x16ec78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16ec7c: 0x6ca20020
    ctx->pc = 0x16ec7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16ec80: 0xb0820027
    ctx->pc = 0x16ec80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16ec84: 0xb4820020
    ctx->pc = 0x16ec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_16ec88:
    // 0x16ec88: 0x3e00008
    ctx->pc = 0x16EC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EC88u: goto label_16ec88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EC90u;
}
