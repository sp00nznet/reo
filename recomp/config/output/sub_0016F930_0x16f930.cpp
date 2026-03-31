#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016F930
// Address: 0x16f930 - 0x16fb28
void sub_0016F930_0x16f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16f930u;

    // 0x16f930: 0x27bdffe0
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f934: 0xffb00000
    ctx->pc = 0x16f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f938: 0xa0802d
    ctx->pc = 0x16f938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f93c: 0xffb10008
    ctx->pc = 0x16f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16f940: 0xffbf0010
    ctx->pc = 0x16f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f944: 0xc05beca
    ctx->pc = 0x16F944u;
    SET_GPR_U32(ctx, 31, 0x16F94Cu);
    ctx->pc = 0x16F948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16FB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FB28_0x16fb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F94Cu; }
    }
    if (ctx->pc != 0x16F94Cu) { return; }
    ctx->pc = 0x16F94Cu;
    // 0x16f94c: 0x10400008
    ctx->pc = 0x16F94Cu;
    {
        const bool branch_taken_0x16f94c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F950u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f94c) {
            ctx->pc = 0x16F970u;
            goto label_16f970;
        }
    }
    ctx->pc = 0x16F954u;
    // 0x16f954: 0xdfb10008
    ctx->pc = 0x16f954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f958: 0x3c05ff00
    ctx->pc = 0x16f958u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16f95c: 0xdfb00000
    ctx->pc = 0x16f95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f960: 0xdfbf0010
    ctx->pc = 0x16f960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f964: 0x34a50f15
    ctx->pc = 0x16f964u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3861));
    // 0x16f968: 0x805a704
    ctx->pc = 0x16F968u;
    ctx->pc = 0x16F96Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16F970u;
label_16f970:
    // 0x16f970: 0x3c020027
    ctx->pc = 0x16f970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x16f974: 0x3c040027
    ctx->pc = 0x16f974u;
    SET_GPR_U32(ctx, 4, ((uint32_t)39 << 16));
    // 0x16f978: 0x24476068
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 24680));
    // 0x16f97c: 0x68e30007
    ctx->pc = 0x16f97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f980: 0x6ce30000
    ctx->pc = 0x16f980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f984: 0x68e5000f
    ctx->pc = 0x16f984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f988: 0x6ce50008
    ctx->pc = 0x16f988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f98c: 0x68e60017
    ctx->pc = 0x16f98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f990: 0x6ce60010
    ctx->pc = 0x16f990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f994: 0xb203000b
    ctx->pc = 0x16f994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f998: 0xb6030004
    ctx->pc = 0x16f998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f99c: 0xb2050013
    ctx->pc = 0x16f99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9a0: 0xb605000c
    ctx->pc = 0x16f9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9a4: 0xb206001b
    ctx->pc = 0x16f9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9a8: 0xb6060014
    ctx->pc = 0x16f9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9ac: 0x68e3001f
    ctx->pc = 0x16f9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f9b0: 0x6ce30018
    ctx->pc = 0x16f9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f9b4: 0x8ce50020
    ctx->pc = 0x16f9b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x16f9b8: 0xb2030023
    ctx->pc = 0x16f9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9bc: 0xb603001c
    ctx->pc = 0x16f9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9c0: 0xae050024
    ctx->pc = 0x16f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x16f9c4: 0x26030030
    ctx->pc = 0x16f9c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 48));
    // 0x16f9c8: 0x24070005
    ctx->pc = 0x16f9c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16f9cc: 0x3c020027
    ctx->pc = 0x16f9ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x16f9d0: 0x248b6090
    ctx->pc = 0x16f9d0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 4), 24720));
    // 0x16f9d4: 0x69680007
    ctx->pc = 0x16f9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f9d8: 0x6d680000
    ctx->pc = 0x16f9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f9dc: 0xb208002f
    ctx->pc = 0x16f9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9e0: 0xb6080028
    ctx->pc = 0x16f9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16f9e4: 0x240800c0
    ctx->pc = 0x16f9e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 192));
    // 0x16f9e8: 0x24090001
    ctx->pc = 0x16f9e8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f9ec: 0x60282d
    ctx->pc = 0x16f9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9f0: 0x244b6098
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 24728));
    // 0x16f9f4: 0x69640007
    ctx->pc = 0x16f9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16f9f8: 0x6d640000
    ctx->pc = 0x16f9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16f9fc: 0x6966000f
    ctx->pc = 0x16f9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fa00: 0x6d660008
    ctx->pc = 0x16fa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fa04: 0x696a0017
    ctx->pc = 0x16fa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fa08: 0x6d6a0010
    ctx->pc = 0x16fa08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fa0c: 0xb0640007
    ctx->pc = 0x16fa0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa10: 0xb4640000
    ctx->pc = 0x16fa10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa14: 0xb066000f
    ctx->pc = 0x16fa14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa18: 0xb4660008
    ctx->pc = 0x16fa18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa1c: 0xb06a0017
    ctx->pc = 0x16fa1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa20: 0xb46a0010
    ctx->pc = 0x16fa20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa24: 0x6964001f
    ctx->pc = 0x16fa24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fa28: 0x6d640018
    ctx->pc = 0x16fa28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fa2c: 0x69660027
    ctx->pc = 0x16fa2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fa30: 0x6d660020
    ctx->pc = 0x16fa30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fa34: 0x696a002f
    ctx->pc = 0x16fa34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fa38: 0x6d6a0028
    ctx->pc = 0x16fa38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fa3c: 0xb064001f
    ctx->pc = 0x16fa3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa40: 0xb4640018
    ctx->pc = 0x16fa40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa44: 0xb0660027
    ctx->pc = 0x16fa44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa48: 0xb4660020
    ctx->pc = 0x16fa48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa4c: 0xb06a002f
    ctx->pc = 0x16fa4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa50: 0xb46a0028
    ctx->pc = 0x16fa50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa54: 0x69640037
    ctx->pc = 0x16fa54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fa58: 0x6d640030
    ctx->pc = 0x16fa58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fa5c: 0x6966003f
    ctx->pc = 0x16fa5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fa60: 0x6d660038
    ctx->pc = 0x16fa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 56); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fa64: 0xb0640037
    ctx->pc = 0x16fa64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa68: 0xb4640030
    ctx->pc = 0x16fa68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa6c: 0xb066003f
    ctx->pc = 0x16fa6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa70: 0xb4660038
    ctx->pc = 0x16fa70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fa74: 0x24060010
    ctx->pc = 0x16fa74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x16fa78: 0xae070074
    ctx->pc = 0x16fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x16fa7c: 0x2604013c
    ctx->pc = 0x16fa7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 316));
    // 0x16fa80: 0xae080078
    ctx->pc = 0x16fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 8));
    // 0x16fa84: 0xae090108
    ctx->pc = 0x16fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 9));
    // 0x16fa88: 0xae000000
    ctx->pc = 0x16fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16fa8c: 0xae000070
    ctx->pc = 0x16fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x16fa90: 0xae000104
    ctx->pc = 0x16fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x16fa94: 0xae00007c
    ctx->pc = 0x16fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x16fa98: 0xae000080
    ctx->pc = 0x16fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x16fa9c: 0xae00012c
    ctx->pc = 0x16fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x16faa0: 0xae000130
    ctx->pc = 0x16faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x16faa4: 0xc05befc
    ctx->pc = 0x16FAA4u;
    SET_GPR_U32(ctx, 31, 0x16FAACu);
    ctx->pc = 0x16FAA8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    ctx->pc = 0x16FBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FBF0_0x16fbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAACu; }
    }
    if (ctx->pc != 0x16FAACu) { return; }
    ctx->pc = 0x16FAACu;
    // 0x16faac: 0xae000084
    ctx->pc = 0x16faacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x16fab0: 0xae000088
    ctx->pc = 0x16fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x16fab4: 0xc05bf20
    ctx->pc = 0x16FAB4u;
    SET_GPR_U32(ctx, 31, 0x16FABCu);
    ctx->pc = 0x16FAB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 140));
    ctx->pc = 0x16FC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FC80_0x16fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FABCu; }
    }
    if (ctx->pc != 0x16FABCu) { return; }
    ctx->pc = 0x16FABCu;
    // 0x16fabc: 0x2403ffff
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fac0: 0x3c027fff
    ctx->pc = 0x16fac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x16fac4: 0xae0300e0
    ctx->pc = 0x16fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x16fac8: 0x3442ffff
    ctx->pc = 0x16fac8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x16facc: 0xae0000e4
    ctx->pc = 0x16faccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x16fad0: 0xae0200e8
    ctx->pc = 0x16fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x16fad4: 0xc05b658
    ctx->pc = 0x16FAD4u;
    SET_GPR_U32(ctx, 31, 0x16FADCu);
    ctx->pc = 0x16FAD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 236));
    ctx->pc = 0x16D960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D960_0x16d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FADCu; }
    }
    if (ctx->pc != 0x16FADCu) { return; }
    ctx->pc = 0x16FADCu;
    // 0x16fadc: 0xc05bf28
    ctx->pc = 0x16FADCu;
    SET_GPR_U32(ctx, 31, 0x16FAE4u);
    ctx->pc = 0x16FAE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2364));
    ctx->pc = 0x16FCA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FCA0_0x16fca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FAE4u; }
    }
    if (ctx->pc != 0x16FAE4u) { return; }
    ctx->pc = 0x16FAE4u;
    // 0x16fae4: 0x2404000f
    ctx->pc = 0x16fae4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x16fae8: 0x260209d0
    ctx->pc = 0x16fae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2512));
    // 0x16faec: 0x260308e4
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2276));
label_16faf0:
    // 0x16faf0: 0x2484ffff
    ctx->pc = 0x16faf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16faf4: 0xac620000
    ctx->pc = 0x16faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16faf8: 0x2463ff80
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x16fafc: 0x0
    ctx->pc = 0x16fafcu;
    // NOP
    // 0x16fb00: 0x0
    ctx->pc = 0x16fb00u;
    // NOP
    // 0x16fb04: 0x481fffa
    ctx->pc = 0x16FB04u;
    {
        const bool branch_taken_0x16fb04 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16FB08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
        if (branch_taken_0x16fb04) {
            ctx->pc = 0x16FAF0u;
            goto label_16faf0;
        }
    }
    ctx->pc = 0x16FB0Cu;
    // 0x16fb0c: 0xdfb00000
    ctx->pc = 0x16fb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fb10: 0x102d
    ctx->pc = 0x16fb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb14: 0xdfb10008
    ctx->pc = 0x16fb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fb18: 0xdfbf0010
    ctx->pc = 0x16fb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fb1c: 0x3e00008
    ctx->pc = 0x16FB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FB20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F970u: goto label_16f970;
            case 0x16FAF0u: goto label_16faf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FB24u;
    // 0x16fb24: 0x0
    ctx->pc = 0x16fb24u;
    // NOP
}
