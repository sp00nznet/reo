#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E360
// Address: 0x16e360 - 0x16e478
void sub_0016E360_0x16e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e360u;

    // 0x16e360: 0x27bdffd0
    ctx->pc = 0x16e360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e364: 0xffb00000
    ctx->pc = 0x16e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e368: 0xffb10008
    ctx->pc = 0x16e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16e36c: 0xa0882d
    ctx->pc = 0x16e36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e370: 0xffb20010
    ctx->pc = 0x16e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16e374: 0xc0902d
    ctx->pc = 0x16e374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e378: 0xffb30018
    ctx->pc = 0x16e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16e37c: 0xffbf0020
    ctx->pc = 0x16e37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16e380: 0xc05c0d6
    ctx->pc = 0x16E380u;
    SET_GPR_U32(ctx, 31, 0x16E388u);
    ctx->pc = 0x16E384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170358_0x170358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E388u; }
    }
    if (ctx->pc != 0x16E388u) { return; }
    ctx->pc = 0x16E388u;
    // 0x16e388: 0x40802d
    ctx->pc = 0x16e388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e38c: 0x52000033
    ctx->pc = 0x16E38Cu;
    {
        const bool branch_taken_0x16e38c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x16e38c) {
            ctx->pc = 0x16E390u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16E45Cu;
            goto label_16e45c;
        }
    }
    ctx->pc = 0x16E394u;
    // 0x16e394: 0x8e020000
    ctx->pc = 0x16e394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16e398: 0x54400030
    ctx->pc = 0x16E398u;
    {
        const bool branch_taken_0x16e398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e398) {
            ctx->pc = 0x16E39Cu;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16E45Cu;
            goto label_16e45c;
        }
    }
    ctx->pc = 0x16E3A0u;
    // 0x16e3a0: 0x8e460004
    ctx->pc = 0x16e3a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16e3a4: 0x24070200
    ctx->pc = 0x16e3a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 512));
    // 0x16e3a8: 0x26030034
    ctx->pc = 0x16e3a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 52));
    // 0x16e3ac: 0x8e450000
    ctx->pc = 0x16e3acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16e3b0: 0x28c20201
    ctx->pc = 0x16e3b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 513));
    // 0x16e3b4: 0x60202d
    ctx->pc = 0x16e3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3b8: 0xe2300a
    ctx->pc = 0x16e3b8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 7));
    // 0x16e3bc: 0x26720cc0
    ctx->pc = 0x16e3bcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 3264));
    // 0x16e3c0: 0xc055798
    ctx->pc = 0x16E3C0u;
    SET_GPR_U32(ctx, 31, 0x16E3C8u);
    ctx->pc = 0x16E3C4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 6));
    ctx->pc = 0x155E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00155E60_0x155e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E3C8u; }
    }
    if (ctx->pc != 0x16E3C8u) { return; }
    ctx->pc = 0x16E3C8u;
    // 0x16e3c8: 0x111840
    ctx->pc = 0x16e3c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x16e3cc: 0x3c020003
    ctx->pc = 0x16e3ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x16e3d0: 0x711821
    ctx->pc = 0x16e3d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16e3d4: 0x318c0
    ctx->pc = 0x16e3d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x16e3d8: 0x3442ffff
    ctx->pc = 0x16e3d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x16e3dc: 0x16220004
    ctx->pc = 0x16E3DCu;
    {
        const bool branch_taken_0x16e3dc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x16E3E0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        if (branch_taken_0x16e3dc) {
            ctx->pc = 0x16E3F0u;
            goto label_16e3f0;
        }
    }
    ctx->pc = 0x16E3E4u;
    // 0x16e3e4: 0xae000004
    ctx->pc = 0x16e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16e3e8: 0x10000005
    ctx->pc = 0x16E3E8u;
    {
        const bool branch_taken_0x16e3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E3ECu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x16e3e8) {
            ctx->pc = 0x16E400u;
            goto label_16e400;
        }
    }
    ctx->pc = 0x16E3F0u;
label_16e3f0:
    // 0x16e3f0: 0x31840
    ctx->pc = 0x16e3f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x16e3f4: 0x24020001
    ctx->pc = 0x16e3f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e3f8: 0xae020008
    ctx->pc = 0x16e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16e3fc: 0xae030004
    ctx->pc = 0x16e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_16e400:
    // 0x16e400: 0x6a420023
    ctx->pc = 0x16e400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e404: 0x6e42001c
    ctx->pc = 0x16e404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 28); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e408: 0x6a43002b
    ctx->pc = 0x16e408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e40c: 0x6e430024
    ctx->pc = 0x16e40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 36); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e410: 0x6a440033
    ctx->pc = 0x16e410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 51); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e414: 0x6e44002c
    ctx->pc = 0x16e414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 44); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e418: 0x6a45003b
    ctx->pc = 0x16e418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 59); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e41c: 0x6e450034
    ctx->pc = 0x16e41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 52); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e420: 0xb2020013
    ctx->pc = 0x16e420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e424: 0xb602000c
    ctx->pc = 0x16e424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e428: 0xb203001b
    ctx->pc = 0x16e428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e42c: 0xb6030014
    ctx->pc = 0x16e42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e430: 0xb2040023
    ctx->pc = 0x16e430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e434: 0xb604001c
    ctx->pc = 0x16e434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e438: 0xb205002b
    ctx->pc = 0x16e438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e43c: 0xb6050024
    ctx->pc = 0x16e43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e440: 0x6a420043
    ctx->pc = 0x16e440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 67); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e444: 0x6e42003c
    ctx->pc = 0x16e444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e448: 0xb2020033
    ctx->pc = 0x16e448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e44c: 0xb602002c
    ctx->pc = 0x16e44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e450: 0x24020001
    ctx->pc = 0x16e450u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e454: 0xae020000
    ctx->pc = 0x16e454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16e458: 0xdfb00000
    ctx->pc = 0x16e458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e45c:
    // 0x16e45c: 0xdfb10008
    ctx->pc = 0x16e45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e460: 0xdfb20010
    ctx->pc = 0x16e460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e464: 0xdfb30018
    ctx->pc = 0x16e464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e468: 0xdfbf0020
    ctx->pc = 0x16e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e46c: 0x3e00008
    ctx->pc = 0x16E46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E3F0u: goto label_16e3f0;
            case 0x16E400u: goto label_16e400;
            case 0x16E45Cu: goto label_16e45c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E474u;
    // 0x16e474: 0x0
    ctx->pc = 0x16e474u;
    // NOP
}
