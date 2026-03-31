#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016BBE8
// Address: 0x16bbe8 - 0x16bca8
void sub_0016BBE8_0x16bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16bbe8u;

    // 0x16bbe8: 0x8c831aec
    ctx->pc = 0x16bbe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6892)));
    // 0x16bbec: 0x3e00008
    ctx->pc = 0x16BBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BBF0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BBF4u;
    // 0x16bbf4: 0x0
    ctx->pc = 0x16bbf4u;
    // NOP
    // 0x16bbf8: 0x27bdfff0
    ctx->pc = 0x16bbf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bbfc: 0x3c070027
    ctx->pc = 0x16bbfcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)39 << 16));
    // 0x16bc00: 0xffbf0000
    ctx->pc = 0x16bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bc04: 0x24e76068
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 24680));
    // 0x16bc08: 0x3c020027
    ctx->pc = 0x16bc08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x16bc0c: 0x2408ffc0
    ctx->pc = 0x16bc0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x16bc10: 0x68830007
    ctx->pc = 0x16bc10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16bc14: 0x6c830000
    ctx->pc = 0x16bc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16bc18: 0x6885000f
    ctx->pc = 0x16bc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16bc1c: 0x6c850008
    ctx->pc = 0x16bc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16bc20: 0x68860017
    ctx->pc = 0x16bc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16bc24: 0x6c860010
    ctx->pc = 0x16bc24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16bc28: 0x6889001f
    ctx->pc = 0x16bc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16bc2c: 0x6c890018
    ctx->pc = 0x16bc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16bc30: 0xb0e30007
    ctx->pc = 0x16bc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc34: 0xb4e30000
    ctx->pc = 0x16bc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc38: 0xb0e5000f
    ctx->pc = 0x16bc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc3c: 0xb4e50008
    ctx->pc = 0x16bc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc40: 0xb0e60017
    ctx->pc = 0x16bc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc44: 0xb4e60010
    ctx->pc = 0x16bc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc48: 0xb0e9001f
    ctx->pc = 0x16bc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc4c: 0xb4e90018
    ctx->pc = 0x16bc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16bc50: 0x8c830020
    ctx->pc = 0x16bc50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16bc54: 0xace30020
    ctx->pc = 0x16bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    // 0x16bc58: 0x24446090
    ctx->pc = 0x16bc58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24720));
    // 0x16bc5c: 0x282d
    ctx->pc = 0x16bc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc60: 0x24060008
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16bc64: 0x8ce20010
    ctx->pc = 0x16bc64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16bc68: 0x8ce30020
    ctx->pc = 0x16bc68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x16bc6c: 0x2442003f
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 63));
    // 0x16bc70: 0x2463003f
    ctx->pc = 0x16bc70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x16bc74: 0x481024
    ctx->pc = 0x16bc74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x16bc78: 0x681824
    ctx->pc = 0x16bc78u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x16bc7c: 0xace20010
    ctx->pc = 0x16bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x16bc80: 0xc041f1a
    ctx->pc = 0x16BC80u;
    SET_GPR_U32(ctx, 31, 0x16BC88u);
    ctx->pc = 0x16BC84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x107C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C68_0x107c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC88u; }
    }
    if (ctx->pc != 0x16BC88u) { return; }
    ctx->pc = 0x16BC88u;
    // 0x16bc88: 0x3c040027
    ctx->pc = 0x16bc88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x16bc8c: 0xdfbf0000
    ctx->pc = 0x16bc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc90: 0x282d
    ctx->pc = 0x16bc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc94: 0x24846098
    ctx->pc = 0x16bc94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24728));
    // 0x16bc98: 0x24060040
    ctx->pc = 0x16bc98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x16bc9c: 0x8041f1a
    ctx->pc = 0x16BC9Cu;
    ctx->pc = 0x16BCA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x107C68u;
    sub_00107C68_0x107c68(rdram, ctx, runtime); return;
    ctx->pc = 0x16BCA4u;
    // 0x16bca4: 0x0
    ctx->pc = 0x16bca4u;
    // NOP
}
