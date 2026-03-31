#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016FCA0
// Address: 0x16fca0 - 0x16fea8
void sub_0016FCA0_0x16fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16fca0u;

    // 0x16fca0: 0xac800000
    ctx->pc = 0x16fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16fca4: 0x24050010
    ctx->pc = 0x16fca4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x16fca8: 0xac800004
    ctx->pc = 0x16fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x16fcac: 0x24880010
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 16));
    // 0x16fcb0: 0xac800008
    ctx->pc = 0x16fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x16fcb4: 0x2487000c
    ctx->pc = 0x16fcb4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 12));
    // 0x16fcb8: 0xac80000c
    ctx->pc = 0x16fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x16fcbc: 0x2406000f
    ctx->pc = 0x16fcbcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x16fcc0: 0xac800010
    ctx->pc = 0x16fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x16fcc4: 0xac800014
    ctx->pc = 0x16fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x16fcc8: 0xac800018
    ctx->pc = 0x16fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x16fccc: 0x0
    ctx->pc = 0x16fcccu;
    // NOP
label_16fcd0:
    // 0x16fcd0: 0xe51021
    ctx->pc = 0x16fcd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x16fcd4: 0x1051821
    ctx->pc = 0x16fcd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x16fcd8: 0x24c6ffff
    ctx->pc = 0x16fcd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x16fcdc: 0xac400000
    ctx->pc = 0x16fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16fce0: 0xac600000
    ctx->pc = 0x16fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16fce4: 0x4c1fffa
    ctx->pc = 0x16FCE4u;
    {
        const bool branch_taken_0x16fce4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16FCE8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x16fce4) {
            ctx->pc = 0x16FCD0u;
            goto label_16fcd0;
        }
    }
    ctx->pc = 0x16FCECu;
    // 0x16fcec: 0x3e00008
    ctx->pc = 0x16FCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FCD0u: goto label_16fcd0;
            case 0x16FD20u: goto label_16fd20;
            case 0x16FD28u: goto label_16fd28;
            case 0x16FD2Cu: goto label_16fd2c;
            case 0x16FE88u: goto label_16fe88;
            case 0x16FE8Cu: goto label_16fe8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FCF4u;
    // 0x16fcf4: 0x0
    ctx->pc = 0x16fcf4u;
    // NOP
    // 0x16fcf8: 0x27bdfff0
    ctx->pc = 0x16fcf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fcfc: 0xa0102d
    ctx->pc = 0x16fcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd00: 0xffbf0000
    ctx->pc = 0x16fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fd04: 0x10400008
    ctx->pc = 0x16FD04u;
    {
        const bool branch_taken_0x16fd04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FD08u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x16fd04) {
            ctx->pc = 0x16FD28u;
            goto label_16fd28;
        }
    }
    ctx->pc = 0x16FD0Cu;
    // 0x16fd0c: 0x10600004
    ctx->pc = 0x16FD0Cu;
    {
        const bool branch_taken_0x16fd0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FD10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16fd0c) {
            ctx->pc = 0x16FD20u;
            goto label_16fd20;
        }
    }
    ctx->pc = 0x16FD14u;
    // 0x16fd14: 0x2c42fffd
    ctx->pc = 0x16fd14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 65533));
    // 0x16fd18: 0x10400004
    ctx->pc = 0x16FD18u;
    {
        const bool branch_taken_0x16fd18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16fd18) {
            ctx->pc = 0x16FD2Cu;
            goto label_16fd2c;
        }
    }
    ctx->pc = 0x16FD20u;
label_16fd20:
    // 0x16fd20: 0x805a704
    ctx->pc = 0x16FD20u;
    ctx->pc = 0x16FD24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16FD28u;
label_16fd28:
    // 0x16fd28: 0xdfbf0000
    ctx->pc = 0x16fd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fd2c:
    // 0x16fd2c: 0x3e00008
    ctx->pc = 0x16FD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FCD0u: goto label_16fcd0;
            case 0x16FD20u: goto label_16fd20;
            case 0x16FD28u: goto label_16fd28;
            case 0x16FD2Cu: goto label_16fd2c;
            case 0x16FE88u: goto label_16fe88;
            case 0x16FE8Cu: goto label_16fe8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FD34u;
    // 0x16fd34: 0x0
    ctx->pc = 0x16fd34u;
    // NOP
    // 0x16fd38: 0x27bdffe0
    ctx->pc = 0x16fd38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fd3c: 0xffb20010
    ctx->pc = 0x16fd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fd40: 0x80902d
    ctx->pc = 0x16fd40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fd44: 0xffb00000
    ctx->pc = 0x16fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fd48: 0xffb10008
    ctx->pc = 0x16fd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fd4c: 0xffbf0018
    ctx->pc = 0x16fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16fd50: 0x8e501b30
    ctx->pc = 0x16fd50u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 6960)));
    // 0x16fd54: 0x8e110000
    ctx->pc = 0x16fd54u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16fd58: 0x1220004c
    ctx->pc = 0x16FD58u;
    {
        const bool branch_taken_0x16fd58 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FD5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fd58) {
            ctx->pc = 0x16FE8Cu;
            goto label_16fe8c;
        }
    }
    ctx->pc = 0x16FD60u;
    // 0x16fd60: 0x3c020027
    ctx->pc = 0x16fd60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x16fd64: 0x3c030027
    ctx->pc = 0x16fd64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x16fd68: 0x24496068
    ctx->pc = 0x16fd68u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 24680));
    // 0x16fd6c: 0x6a06000b
    ctx->pc = 0x16fd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fd70: 0x6e060004
    ctx->pc = 0x16fd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fd74: 0x6a070013
    ctx->pc = 0x16fd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fd78: 0x6e07000c
    ctx->pc = 0x16fd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fd7c: 0x6a08001b
    ctx->pc = 0x16fd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fd80: 0x6e080014
    ctx->pc = 0x16fd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fd84: 0xb1260007
    ctx->pc = 0x16fd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd88: 0xb5260000
    ctx->pc = 0x16fd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd8c: 0xb127000f
    ctx->pc = 0x16fd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd90: 0xb5270008
    ctx->pc = 0x16fd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd94: 0xb1280017
    ctx->pc = 0x16fd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd98: 0xb5280010
    ctx->pc = 0x16fd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fd9c: 0x6a060023
    ctx->pc = 0x16fd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fda0: 0x6e06001c
    ctx->pc = 0x16fda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fda4: 0x8e070024
    ctx->pc = 0x16fda4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x16fda8: 0xb126001f
    ctx->pc = 0x16fda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdac: 0xb5260018
    ctx->pc = 0x16fdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdb0: 0xad270020
    ctx->pc = 0x16fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 7));
    // 0x16fdb4: 0x3c050027
    ctx->pc = 0x16fdb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)39 << 16));
    // 0x16fdb8: 0x24686090
    ctx->pc = 0x16fdb8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 24720));
    // 0x16fdbc: 0x6a02002f
    ctx->pc = 0x16fdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fdc0: 0x6e020028
    ctx->pc = 0x16fdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fdc4: 0xb1020007
    ctx->pc = 0x16fdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdc8: 0xb5020000
    ctx->pc = 0x16fdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdcc: 0x24a66098
    ctx->pc = 0x16fdccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 24728));
    // 0x16fdd0: 0x6a090037
    ctx->pc = 0x16fdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fdd4: 0x6e090030
    ctx->pc = 0x16fdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fdd8: 0x6a02003f
    ctx->pc = 0x16fdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fddc: 0x6e020038
    ctx->pc = 0x16fddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fde0: 0x6a030047
    ctx->pc = 0x16fde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fde4: 0x6e030040
    ctx->pc = 0x16fde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fde8: 0xb0c90007
    ctx->pc = 0x16fde8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdec: 0xb4c90000
    ctx->pc = 0x16fdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdf0: 0xb0c2000f
    ctx->pc = 0x16fdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdf4: 0xb4c20008
    ctx->pc = 0x16fdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdf8: 0xb0c30017
    ctx->pc = 0x16fdf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fdfc: 0xb4c30010
    ctx->pc = 0x16fdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe00: 0x6a09004f
    ctx->pc = 0x16fe00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fe04: 0x6e090048
    ctx->pc = 0x16fe04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fe08: 0x6a020057
    ctx->pc = 0x16fe08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fe0c: 0x6e020050
    ctx->pc = 0x16fe0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fe10: 0x6a03005f
    ctx->pc = 0x16fe10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fe14: 0x6e030058
    ctx->pc = 0x16fe14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fe18: 0xb0c9001f
    ctx->pc = 0x16fe18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe1c: 0xb4c90018
    ctx->pc = 0x16fe1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe20: 0xb0c20027
    ctx->pc = 0x16fe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe24: 0xb4c20020
    ctx->pc = 0x16fe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe28: 0xb0c3002f
    ctx->pc = 0x16fe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe2c: 0xb4c30028
    ctx->pc = 0x16fe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe30: 0x6a090067
    ctx->pc = 0x16fe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fe34: 0x6e090060
    ctx->pc = 0x16fe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fe38: 0x6a02006f
    ctx->pc = 0x16fe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x16fe3c: 0x6e020068
    ctx->pc = 0x16fe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16fe40: 0xb0c90037
    ctx->pc = 0x16fe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe44: 0xb4c90030
    ctx->pc = 0x16fe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe48: 0xb0c2003f
    ctx->pc = 0x16fe48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16fe4c: 0xc05c67c
    ctx->pc = 0x16FE4Cu;
    SET_GPR_U32(ctx, 31, 0x16FE54u);
    ctx->pc = 0x16FE50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->pc = 0x1719F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001719F0_0x1719f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE54u; }
    }
    if (ctx->pc != 0x16FE54u) { return; }
    ctx->pc = 0x16FE54u;
    // 0x16fe54: 0xc05bfaa
    ctx->pc = 0x16FE54u;
    SET_GPR_U32(ctx, 31, 0x16FE5Cu);
    ctx->pc = 0x16FE58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16FEA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FEA8_0x16fea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FE5Cu; }
    }
    if (ctx->pc != 0x16FE5Cu) { return; }
    ctx->pc = 0x16FE5Cu;
    // 0x16fe5c: 0x3c05ff00
    ctx->pc = 0x16fe5cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16fe60: 0x10400009
    ctx->pc = 0x16FE60u;
    {
        const bool branch_taken_0x16fe60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16FE64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fe60) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16FE68u;
    // 0x16fe68: 0xdfb00000
    ctx->pc = 0x16fe68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fe6c: 0x34a50f0c
    ctx->pc = 0x16fe6cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3852));
    // 0x16fe70: 0xdfb10008
    ctx->pc = 0x16fe70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fe74: 0xdfb20010
    ctx->pc = 0x16fe74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fe78: 0xdfbf0018
    ctx->pc = 0x16fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fe7c: 0x805a704
    ctx->pc = 0x16FE7Cu;
    ctx->pc = 0x16FE80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x169C10u;
    sub_00169C10_0x169c10(rdram, ctx, runtime); return;
    ctx->pc = 0x16FE84u;
    // 0x16fe84: 0x0
    ctx->pc = 0x16fe84u;
    // NOP
label_16fe88:
    // 0x16fe88: 0xae000000
    ctx->pc = 0x16fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_16fe8c:
    // 0x16fe8c: 0xdfb00000
    ctx->pc = 0x16fe8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fe90: 0xdfb10008
    ctx->pc = 0x16fe90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fe94: 0xdfb20010
    ctx->pc = 0x16fe94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fe98: 0xdfbf0018
    ctx->pc = 0x16fe98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fe9c: 0x3e00008
    ctx->pc = 0x16FE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FCD0u: goto label_16fcd0;
            case 0x16FD20u: goto label_16fd20;
            case 0x16FD28u: goto label_16fd28;
            case 0x16FD2Cu: goto label_16fd2c;
            case 0x16FE88u: goto label_16fe88;
            case 0x16FE8Cu: goto label_16fe8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FEA4u;
    // 0x16fea4: 0x0
    ctx->pc = 0x16fea4u;
    // NOP
}
