#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00175710
// Address: 0x175710 - 0x1758f0
void sub_00175710_0x175710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x175710u;

    // 0x175710: 0x27bdffe0
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175714: 0xffb00000
    ctx->pc = 0x175714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175718: 0x80802d
    ctx->pc = 0x175718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17571c: 0xffb10008
    ctx->pc = 0x17571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175720: 0xffbf0010
    ctx->pc = 0x175720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175724: 0xc05a78c
    ctx->pc = 0x175724u;
    SET_GPR_U32(ctx, 31, 0x17572Cu);
    ctx->pc = 0x175728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17572Cu; }
    }
    if (ctx->pc != 0x17572Cu) { return; }
    ctx->pc = 0x17572Cu;
    // 0x17572c: 0x3c05ff00
    ctx->pc = 0x17572cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x175730: 0x10400007
    ctx->pc = 0x175730u;
    {
        const bool branch_taken_0x175730 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175734u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175730) {
            ctx->pc = 0x175750u;
            goto label_175750;
        }
    }
    ctx->pc = 0x175738u;
    // 0x175738: 0xdfb00000
    ctx->pc = 0x175738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17573c: 0x34a50119
    ctx->pc = 0x17573cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 281));
    // 0x175740: 0xdfb10008
    ctx->pc = 0x175740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175744: 0xdfbf0010
    ctx->pc = 0x175744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175748: 0x805a704
    ctx->pc = 0x175748u;
    ctx->pc = 0x17574Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x175750u;
label_175750:
    // 0x175750: 0x6a030953
    ctx->pc = 0x175750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2387); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x175754: 0x6e03094c
    ctx->pc = 0x175754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2380); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175758: 0x6a04095b
    ctx->pc = 0x175758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2395); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17575c: 0x6e040954
    ctx->pc = 0x17575cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2388); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175760: 0x6a050963
    ctx->pc = 0x175760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2403); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x175764: 0x6e05095c
    ctx->pc = 0x175764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2396); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175768: 0x6a06096b
    ctx->pc = 0x175768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2411); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17576c: 0x6e060964
    ctx->pc = 0x17576cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2404); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175770: 0xb2230007
    ctx->pc = 0x175770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175774: 0xb6230000
    ctx->pc = 0x175774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175778: 0xb224000f
    ctx->pc = 0x175778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17577c: 0xb6240008
    ctx->pc = 0x17577cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175780: 0xb2250017
    ctx->pc = 0x175780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175784: 0xb6250010
    ctx->pc = 0x175784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175788: 0xb226001f
    ctx->pc = 0x175788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17578c: 0xb6260018
    ctx->pc = 0x17578cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x175790: 0x6a030973
    ctx->pc = 0x175790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2419); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x175794: 0x6e03096c
    ctx->pc = 0x175794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2412); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x175798: 0x6a04097b
    ctx->pc = 0x175798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2427); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17579c: 0x6e040974
    ctx->pc = 0x17579cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2420); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1757a0: 0x6a050983
    ctx->pc = 0x1757a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2435); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1757a4: 0x6e05097c
    ctx->pc = 0x1757a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2428); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1757a8: 0x6a06098b
    ctx->pc = 0x1757a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2443); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1757ac: 0x6e060984
    ctx->pc = 0x1757acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 2436); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1757b0: 0xb2230027
    ctx->pc = 0x1757b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757b4: 0xb6230020
    ctx->pc = 0x1757b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757b8: 0xb224002f
    ctx->pc = 0x1757b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757bc: 0xb6240028
    ctx->pc = 0x1757bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757c0: 0xb2250037
    ctx->pc = 0x1757c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757c4: 0xb6250030
    ctx->pc = 0x1757c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757c8: 0xb226003f
    ctx->pc = 0x1757c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757cc: 0xb6260038
    ctx->pc = 0x1757ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1757d0: 0xdfb00000
    ctx->pc = 0x1757d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1757d4: 0xdfb10008
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1757d8: 0xdfbf0010
    ctx->pc = 0x1757d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1757dc: 0x3e00008
    ctx->pc = 0x1757DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1757E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175750u: goto label_175750;
            case 0x175828u: goto label_175828;
            case 0x175834u: goto label_175834;
            case 0x175878u: goto label_175878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1757E4u;
    // 0x1757e4: 0x0
    ctx->pc = 0x1757e4u;
    // NOP
    // 0x1757e8: 0x27bdffe0
    ctx->pc = 0x1757e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1757ec: 0xffb00000
    ctx->pc = 0x1757ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1757f0: 0xa0802d
    ctx->pc = 0x1757f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1757f4: 0xffb10008
    ctx->pc = 0x1757f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1757f8: 0xffbf0010
    ctx->pc = 0x1757f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1757fc: 0xc05a78c
    ctx->pc = 0x1757FCu;
    SET_GPR_U32(ctx, 31, 0x175804u);
    ctx->pc = 0x175800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E30_0x169e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175804u; }
    }
    if (ctx->pc != 0x175804u) { return; }
    ctx->pc = 0x175804u;
    // 0x175804: 0x10400008
    ctx->pc = 0x175804u;
    {
        const bool branch_taken_0x175804 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175808u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175804) {
            ctx->pc = 0x175828u;
            goto label_175828;
        }
    }
    ctx->pc = 0x17580Cu;
    // 0x17580c: 0x3c05ff00
    ctx->pc = 0x17580cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x175810: 0xdfb00000
    ctx->pc = 0x175810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175814: 0xdfb10008
    ctx->pc = 0x175814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175818: 0xdfbf0010
    ctx->pc = 0x175818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17581c: 0x34a5011a
    ctx->pc = 0x17581cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 282));
    // 0x175820: 0x805a704
    ctx->pc = 0x175820u;
    ctx->pc = 0x175824u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x175828u;
label_175828:
    // 0x175828: 0x26232b80
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 11136));
    // 0x17582c: 0x200102d
    ctx->pc = 0x17582cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175830: 0x26242ac0
    ctx->pc = 0x175830u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 10944));
label_175834:
    // 0x175834: 0xdc850000
    ctx->pc = 0x175834u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175838: 0xdc860008
    ctx->pc = 0x175838u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17583c: 0xdc870010
    ctx->pc = 0x17583cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x175840: 0xdc880018
    ctx->pc = 0x175840u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x175844: 0xfc450000
    ctx->pc = 0x175844u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x175848: 0xfc460008
    ctx->pc = 0x175848u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x17584c: 0xfc470010
    ctx->pc = 0x17584cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x175850: 0xfc480018
    ctx->pc = 0x175850u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x175854: 0x24840020
    ctx->pc = 0x175854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x175858: 0x0
    ctx->pc = 0x175858u;
    // NOP
    // 0x17585c: 0x0
    ctx->pc = 0x17585cu;
    // NOP
    // 0x175860: 0x1483fff4
    ctx->pc = 0x175860u;
    {
        const bool branch_taken_0x175860 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x175864u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x175860) {
            ctx->pc = 0x175834u;
            goto label_175834;
        }
    }
    ctx->pc = 0x175868u;
    // 0x175868: 0x260c0008
    ctx->pc = 0x175868u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 16), 8));
    // 0x17586c: 0x240a0001
    ctx->pc = 0x17586cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175870: 0x180582d
    ctx->pc = 0x175870u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175874: 0x26090030
    ctx->pc = 0x175874u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 48));
label_175878:
    // 0x175878: 0xdd23fff0
    ctx->pc = 0x175878u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 4294967280)));
    // 0x17587c: 0xa3140
    ctx->pc = 0x17587cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 10), 5));
    // 0x175880: 0xde020000
    ctx->pc = 0x175880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175884: 0x1663021
    ctx->pc = 0x175884u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x175888: 0x8d270008
    ctx->pc = 0x175888u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x17588c: 0x254a0001
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x175890: 0x43102d
    ctx->pc = 0x175890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x175894: 0x8e040018
    ctx->pc = 0x175894u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x175898: 0xfe020000
    ctx->pc = 0x175898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x17589c: 0x29480004
    ctx->pc = 0x17589cu;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 10), 4));
    // 0x1758a0: 0x872021
    ctx->pc = 0x1758a0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1758a4: 0xdcc50000
    ctx->pc = 0x1758a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1758a8: 0xdd630000
    ctx->pc = 0x1758a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1758ac: 0xae040018
    ctx->pc = 0x1758acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1758b0: 0xa3102a
    ctx->pc = 0x1758b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x1758b4: 0xa2180b
    ctx->pc = 0x1758b4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x1758b8: 0xfd830000
    ctx->pc = 0x1758b8u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x1758bc: 0xdd240000
    ctx->pc = 0x1758bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1758c0: 0x25290020
    ctx->pc = 0x1758c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32));
    // 0x1758c4: 0xde020010
    ctx->pc = 0x1758c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1758c8: 0x44182a
    ctx->pc = 0x1758c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x1758cc: 0x83100b
    ctx->pc = 0x1758ccu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x1758d0: 0x1500ffe9
    ctx->pc = 0x1758D0u;
    {
        const bool branch_taken_0x1758d0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1758D4u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
        if (branch_taken_0x1758d0) {
            ctx->pc = 0x175878u;
            goto label_175878;
        }
    }
    ctx->pc = 0x1758D8u;
    // 0x1758d8: 0xdfb00000
    ctx->pc = 0x1758d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1758dc: 0x102d
    ctx->pc = 0x1758dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758e0: 0xdfb10008
    ctx->pc = 0x1758e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1758e4: 0xdfbf0010
    ctx->pc = 0x1758e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1758e8: 0x3e00008
    ctx->pc = 0x1758E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1758ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175750u: goto label_175750;
            case 0x175828u: goto label_175828;
            case 0x175834u: goto label_175834;
            case 0x175878u: goto label_175878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1758F0u;
}
