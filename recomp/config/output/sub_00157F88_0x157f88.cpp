#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00157F88
// Address: 0x157f88 - 0x158020
void sub_00157F88_0x157f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x157f88u;

    // 0x157f88: 0x27bdffe0
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157f8c: 0xffb00000
    ctx->pc = 0x157f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157f90: 0x80802d
    ctx->pc = 0x157f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f94: 0xffb10008
    ctx->pc = 0x157f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157f98: 0xffbf0010
    ctx->pc = 0x157f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x157f9c: 0xc0560f2
    ctx->pc = 0x157F9Cu;
    SET_GPR_U32(ctx, 31, 0x157FA4u);
    ctx->pc = 0x157FA0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1583C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001583C8_0x1583c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FA4u; }
    }
    if (ctx->pc != 0x157FA4u) { return; }
    ctx->pc = 0x157FA4u;
    // 0x157fa4: 0x3c05ff02
    ctx->pc = 0x157fa4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x157fa8: 0x10400007
    ctx->pc = 0x157FA8u;
    {
        const bool branch_taken_0x157fa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x157FACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x157fa8) {
            ctx->pc = 0x157FC8u;
            goto label_157fc8;
        }
    }
    ctx->pc = 0x157FB0u;
    // 0x157fb0: 0xdfb00000
    ctx->pc = 0x157fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157fb4: 0x34a50203
    ctx->pc = 0x157fb4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 515));
    // 0x157fb8: 0xdfb10008
    ctx->pc = 0x157fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157fbc: 0xdfbf0010
    ctx->pc = 0x157fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157fc0: 0x805607e
    ctx->pc = 0x157FC0u;
    ctx->pc = 0x157FC4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1581F8u;
    sub_001581F8_0x1581f8(rdram, ctx, runtime); return;
    ctx->pc = 0x157FC8u;
label_157fc8:
    // 0x157fc8: 0x6a0300a7
    ctx->pc = 0x157fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157fcc: 0x6e0300a0
    ctx->pc = 0x157fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157fd0: 0x6a0400af
    ctx->pc = 0x157fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157fd4: 0x6e0400a8
    ctx->pc = 0x157fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157fd8: 0x6a0500b7
    ctx->pc = 0x157fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157fdc: 0x6e0500b0
    ctx->pc = 0x157fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157fe0: 0x6a0600bf
    ctx->pc = 0x157fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x157fe4: 0x6e0600b8
    ctx->pc = 0x157fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x157fe8: 0xb2230007
    ctx->pc = 0x157fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157fec: 0xb6230000
    ctx->pc = 0x157fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ff0: 0xb224000f
    ctx->pc = 0x157ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ff4: 0xb6240008
    ctx->pc = 0x157ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ff8: 0xb2250017
    ctx->pc = 0x157ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x157ffc: 0xb6250010
    ctx->pc = 0x157ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158000: 0xb226001f
    ctx->pc = 0x158000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158004: 0xb6260018
    ctx->pc = 0x158004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x158008: 0xdfb00000
    ctx->pc = 0x158008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15800c: 0xdfb10008
    ctx->pc = 0x15800cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158010: 0xdfbf0010
    ctx->pc = 0x158010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158014: 0x3e00008
    ctx->pc = 0x158014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158018u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157FC8u: goto label_157fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15801Cu;
    // 0x15801c: 0x0
    ctx->pc = 0x15801cu;
    // NOP
}
