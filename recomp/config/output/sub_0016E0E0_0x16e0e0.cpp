#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016E0E0
// Address: 0x16e0e0 - 0x16e1f0
void sub_0016E0E0_0x16e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16e0e0u;

    // 0x16e0e0: 0x27bdffb0
    ctx->pc = 0x16e0e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e0e4: 0xffb00030
    ctx->pc = 0x16e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16e0e8: 0x80802d
    ctx->pc = 0x16e0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e0ec: 0xa0202d
    ctx->pc = 0x16e0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e0f0: 0x3a0282d
    ctx->pc = 0x16e0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e0f4: 0xffb10038
    ctx->pc = 0x16e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16e0f8: 0x26110cdc
    ctx->pc = 0x16e0f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 3292));
    // 0x16e0fc: 0xffb20040
    ctx->pc = 0x16e0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16e100: 0xffbf0048
    ctx->pc = 0x16e100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16e104: 0xc05b87c
    ctx->pc = 0x16E104u;
    SET_GPR_U32(ctx, 31, 0x16E10Cu);
    ctx->pc = 0x16E108u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 3412));
    ctx->pc = 0x16E1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E1F0_0x16e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E10Cu; }
    }
    if (ctx->pc != 0x16E10Cu) { return; }
    ctx->pc = 0x16E10Cu;
    // 0x16e10c: 0x3a0202d
    ctx->pc = 0x16e10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e110: 0x27a50020
    ctx->pc = 0x16e110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x16e114: 0xc05da70
    ctx->pc = 0x16E114u;
    SET_GPR_U32(ctx, 31, 0x16E11Cu);
    ctx->pc = 0x16E118u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 36));
    ctx->pc = 0x1769C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001769C0_0x1769c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E11Cu; }
    }
    if (ctx->pc != 0x16E11Cu) { return; }
    ctx->pc = 0x16E11Cu;
    // 0x16e11c: 0x24050001
    ctx->pc = 0x16e11cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e120: 0x6ba20007
    ctx->pc = 0x16e120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e124: 0x6fa20000
    ctx->pc = 0x16e124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e128: 0x6ba3000f
    ctx->pc = 0x16e128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e12c: 0x6fa30008
    ctx->pc = 0x16e12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e130: 0x6ba40017
    ctx->pc = 0x16e130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e134: 0x6fa40010
    ctx->pc = 0x16e134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e138: 0x8fa60018
    ctx->pc = 0x16e138u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e13c: 0xb2020d5f
    ctx->pc = 0x16e13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3423); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e140: 0xb6020d58
    ctx->pc = 0x16e140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3416); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e144: 0xb2030d67
    ctx->pc = 0x16e144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3431); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e148: 0xb6030d60
    ctx->pc = 0x16e148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3424); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e14c: 0xb2040d6f
    ctx->pc = 0x16e14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3439); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e150: 0xb6040d68
    ctx->pc = 0x16e150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3432); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e154: 0xae060d70
    ctx->pc = 0x16e154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3440), GPR_U32(ctx, 6));
    // 0x16e158: 0x26100d04
    ctx->pc = 0x16e158u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 3332));
    // 0x16e15c: 0x8e220020
    ctx->pc = 0x16e15cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16e160: 0x8fa30020
    ctx->pc = 0x16e160u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e164: 0x8fa40024
    ctx->pc = 0x16e164u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x16e168: 0x621823
    ctx->pc = 0x16e168u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e16c: 0xae450000
    ctx->pc = 0x16e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x16e170: 0xae430020
    ctx->pc = 0x16e170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x16e174: 0xae440024
    ctx->pc = 0x16e174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x16e178: 0x8e020020
    ctx->pc = 0x16e178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x16e17c: 0x62182a
    ctx->pc = 0x16e17cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x16e180: 0x54600016
    ctx->pc = 0x16E180u;
    {
        const bool branch_taken_0x16e180 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e180) {
            ctx->pc = 0x16E184u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x16E1DCu;
            goto label_16e1dc;
        }
    }
    ctx->pc = 0x16E188u;
    // 0x16e188: 0x6a420007
    ctx->pc = 0x16e188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e18c: 0x6e420000
    ctx->pc = 0x16e18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e190: 0x6a43000f
    ctx->pc = 0x16e190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e194: 0x6e430008
    ctx->pc = 0x16e194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e198: 0x6a440017
    ctx->pc = 0x16e198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e19c: 0x6e440010
    ctx->pc = 0x16e19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e1a0: 0x6a45001f
    ctx->pc = 0x16e1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e1a4: 0x6e450018
    ctx->pc = 0x16e1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e1a8: 0xb2020007
    ctx->pc = 0x16e1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1ac: 0xb6020000
    ctx->pc = 0x16e1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1b0: 0xb203000f
    ctx->pc = 0x16e1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1b4: 0xb6030008
    ctx->pc = 0x16e1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1b8: 0xb2040017
    ctx->pc = 0x16e1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1bc: 0xb6040010
    ctx->pc = 0x16e1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1c0: 0xb205001f
    ctx->pc = 0x16e1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1c4: 0xb6050018
    ctx->pc = 0x16e1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1c8: 0x6a420027
    ctx->pc = 0x16e1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16e1cc: 0x6e420020
    ctx->pc = 0x16e1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16e1d0: 0xb2020027
    ctx->pc = 0x16e1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1d4: 0xb6020020
    ctx->pc = 0x16e1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16e1d8: 0xdfb00030
    ctx->pc = 0x16e1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e1dc:
    // 0x16e1dc: 0xdfb10038
    ctx->pc = 0x16e1dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e1e0: 0xdfb20040
    ctx->pc = 0x16e1e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e1e4: 0xdfbf0048
    ctx->pc = 0x16e1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16e1e8: 0x3e00008
    ctx->pc = 0x16E1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E1ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E1DCu: goto label_16e1dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E1F0u;
}
