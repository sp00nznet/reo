#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00157E40
// Address: 0x157e40 - 0x157ef0
void sub_00157E40_0x157e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x157e40u;

    // 0x157e40: 0x27bdffe0
    ctx->pc = 0x157e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157e44: 0xffb00000
    ctx->pc = 0x157e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157e48: 0xc0802d
    ctx->pc = 0x157e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e4c: 0x108140
    ctx->pc = 0x157e4cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 5));
    // 0x157e50: 0xffb10008
    ctx->pc = 0x157e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157e54: 0xffb20010
    ctx->pc = 0x157e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157e58: 0xa0902d
    ctx->pc = 0x157e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e5c: 0x80882d
    ctx->pc = 0x157e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e60: 0xffbf0018
    ctx->pc = 0x157e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x157e64: 0xc0560f2
    ctx->pc = 0x157E64u;
    SET_GPR_U32(ctx, 31, 0x157E6Cu);
    ctx->pc = 0x157E68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x1583C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583C8_0x1583c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E6Cu; }
    }
    if (ctx->pc != 0x157E6Cu) { return; }
    ctx->pc = 0x157E6Cu;
    // 0x157e6c: 0x3c05ff02
    ctx->pc = 0x157e6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x157e70: 0x2308821
    ctx->pc = 0x157e70u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x157e74: 0x202d
    ctx->pc = 0x157e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e78: 0x10400007
    ctx->pc = 0x157E78u;
    {
        const bool branch_taken_0x157e78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x157E7Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 514));
        if (branch_taken_0x157e78) {
            ctx->pc = 0x157E98u;
            goto label_157e98;
        }
    }
    ctx->pc = 0x157E80u;
    // 0x157e80: 0xdfb00000
    ctx->pc = 0x157e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157e84: 0xdfb10008
    ctx->pc = 0x157e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157e88: 0xdfb20010
    ctx->pc = 0x157e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157e8c: 0xdfbf0018
    ctx->pc = 0x157e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157e90: 0x805607e
    ctx->pc = 0x157E90u;
    ctx->pc = 0x157E94u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1581F8u;
    sub_001581F8_0x1581f8(rdram, ctx, runtime); return;
    ctx->pc = 0x157E98u;
label_157e98:
    // 0x157e98: 0x6a230007
    ctx->pc = 0x157e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157e9c: 0x6e230000
    ctx->pc = 0x157e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157ea0: 0x6a24000f
    ctx->pc = 0x157ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157ea4: 0x6e240008
    ctx->pc = 0x157ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157ea8: 0x6a250017
    ctx->pc = 0x157ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157eac: 0x6e250010
    ctx->pc = 0x157eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157eb0: 0x6a26001f
    ctx->pc = 0x157eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157eb4: 0x6e260018
    ctx->pc = 0x157eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157eb8: 0xb2430007
    ctx->pc = 0x157eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ebc: 0xb6430000
    ctx->pc = 0x157ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ec0: 0xb244000f
    ctx->pc = 0x157ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ec4: 0xb6440008
    ctx->pc = 0x157ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ec8: 0xb2450017
    ctx->pc = 0x157ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ecc: 0xb6450010
    ctx->pc = 0x157eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ed0: 0xb246001f
    ctx->pc = 0x157ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ed4: 0xdfb00000
    ctx->pc = 0x157ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157ed8: 0xb6460018
    ctx->pc = 0x157ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157edc: 0xdfbf0018
    ctx->pc = 0x157edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x157ee0: 0xdfb10008
    ctx->pc = 0x157ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157ee4: 0xdfb20010
    ctx->pc = 0x157ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157ee8: 0x3e00008
    ctx->pc = 0x157EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157EECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157E98u: goto label_157e98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x157EF0u;
}
