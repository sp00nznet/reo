#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175628
// Address: 0x175628 - 0x175710
void sub_00175628_0x175628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175628u;

    // 0x175628: 0x52880
    ctx->pc = 0x175628u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17562c: 0xa42821
    ctx->pc = 0x17562cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x175630: 0x3e00008
    ctx->pc = 0x175630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175634u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 2464)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175678u: goto label_175678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175638u;
    // 0x175638: 0x27bdffe0
    ctx->pc = 0x175638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17563c: 0xffb00000
    ctx->pc = 0x17563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175640: 0x80802d
    ctx->pc = 0x175640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175644: 0xffb10008
    ctx->pc = 0x175644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175648: 0xffbf0010
    ctx->pc = 0x175648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17564c: 0xc05a78c
    ctx->pc = 0x17564Cu;
    SET_GPR_U32(ctx, 31, 0x175654u);
    ctx->pc = 0x175650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175654u; }
    }
    if (ctx->pc != 0x175654u) { return; }
    ctx->pc = 0x175654u;
    // 0x175654: 0x3c05ff00
    ctx->pc = 0x175654u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x175658: 0x10400007
    ctx->pc = 0x175658u;
    {
        const bool branch_taken_0x175658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17565Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175658) {
            ctx->pc = 0x175678u;
            goto label_175678;
        }
    }
    ctx->pc = 0x175660u;
    // 0x175660: 0xdfb00000
    ctx->pc = 0x175660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175664: 0x34a50114
    ctx->pc = 0x175664u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 276));
    // 0x175668: 0xdfb10008
    ctx->pc = 0x175668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17566c: 0xdfbf0010
    ctx->pc = 0x17566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175670: 0x805a704
    ctx->pc = 0x175670u;
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x175678u;
label_175678:
    // 0x175678: 0x6a030913
    ctx->pc = 0x175678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2323); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17567c: 0x6e03090c
    ctx->pc = 0x17567cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2316); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175680: 0x6a04091b
    ctx->pc = 0x175680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2331); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x175684: 0x6e040914
    ctx->pc = 0x175684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2324); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175688: 0x6a050923
    ctx->pc = 0x175688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2339); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17568c: 0x6e05091c
    ctx->pc = 0x17568cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2332); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175690: 0x6a06092b
    ctx->pc = 0x175690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2347); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x175694: 0x6e060924
    ctx->pc = 0x175694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2340); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175698: 0xb2230007
    ctx->pc = 0x175698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17569c: 0xb6230000
    ctx->pc = 0x17569cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756a0: 0xb224000f
    ctx->pc = 0x1756a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756a4: 0xb6240008
    ctx->pc = 0x1756a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756a8: 0xb2250017
    ctx->pc = 0x1756a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756ac: 0xb6250010
    ctx->pc = 0x1756acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756b0: 0xb226001f
    ctx->pc = 0x1756b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756b4: 0xb6260018
    ctx->pc = 0x1756b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756b8: 0x6a030933
    ctx->pc = 0x1756b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2355); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1756bc: 0x6e03092c
    ctx->pc = 0x1756bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2348); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1756c0: 0x6a04093b
    ctx->pc = 0x1756c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2363); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1756c4: 0x6e040934
    ctx->pc = 0x1756c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2356); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1756c8: 0x6a050943
    ctx->pc = 0x1756c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2371); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1756cc: 0x6e05093c
    ctx->pc = 0x1756ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2364); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1756d0: 0x6a06094b
    ctx->pc = 0x1756d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2379); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1756d4: 0x6e060944
    ctx->pc = 0x1756d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2372); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1756d8: 0xb2230027
    ctx->pc = 0x1756d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756dc: 0xb6230020
    ctx->pc = 0x1756dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756e0: 0xb224002f
    ctx->pc = 0x1756e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756e4: 0xb6240028
    ctx->pc = 0x1756e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756e8: 0xb2250037
    ctx->pc = 0x1756e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756ec: 0xb6250030
    ctx->pc = 0x1756ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756f0: 0xb226003f
    ctx->pc = 0x1756f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756f4: 0xb6260038
    ctx->pc = 0x1756f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1756f8: 0xdfb00000
    ctx->pc = 0x1756f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1756fc: 0xdfb10008
    ctx->pc = 0x1756fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175700: 0xdfbf0010
    ctx->pc = 0x175700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175704: 0x3e00008
    ctx->pc = 0x175704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175678u: goto label_175678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17570Cu;
    // 0x17570c: 0x0
    ctx->pc = 0x17570cu;
    // NOP
}
