#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: entry_186f68
// Address: 0x186f68 - 0x187330
void entry_186f68_0x187330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x186f68u;

    // 0x186f68: 0x27bdffc0
    ctx->pc = 0x186f68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186f6c: 0x2408ffff
    ctx->pc = 0x186f6cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186f70: 0xffb20010
    ctx->pc = 0x186f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x186f74: 0x80902d
    ctx->pc = 0x186f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f78: 0x121040
    ctx->pc = 0x186f78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
    // 0x186f7c: 0xffb00000
    ctx->pc = 0x186f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186f80: 0x521021
    ctx->pc = 0x186f80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x186f84: 0xffb10008
    ctx->pc = 0x186f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x186f88: 0x21140
    ctx->pc = 0x186f88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x186f8c: 0xffb30018
    ctx->pc = 0x186f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x186f90: 0x521021
    ctx->pc = 0x186f90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x186f94: 0xffb40020
    ctx->pc = 0x186f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x186f98: 0xffb50028
    ctx->pc = 0x186f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x186f9c: 0x3c150028
    ctx->pc = 0x186f9cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)40 << 16));
    // 0x186fa0: 0xffbf0030
    ctx->pc = 0x186fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186fa4: 0x21080
    ctx->pc = 0x186fa4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x186fa8: 0x3c010023
    ctx->pc = 0x186fa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x186fac: 0x2421fa18
    ctx->pc = 0x186facu;
    SET_GPR_S32(ctx, 1, ADD32(GPR_U32(ctx, 1), 4294965784));
    // 0x186fb0: 0x221021
    ctx->pc = 0x186fb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x186fb4: 0x12a240
    ctx->pc = 0x186fb4u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 18), 9));
    // 0x186fb8: 0x8c470034
    ctx->pc = 0x186fb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x186fbc: 0x2921821
    ctx->pc = 0x186fbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x186fc0: 0x9444002a
    ctx->pc = 0x186fc0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x186fc4: 0x34900
    ctx->pc = 0x186fc4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 4));
    // 0x186fc8: 0xc78821
    ctx->pc = 0x186fc8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x186fcc: 0x9443002c
    ctx->pc = 0x186fccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x186fd0: 0x2242018
    ctx->pc = 0x186fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x186fd4: 0x26aa7080
    ctx->pc = 0x186fd4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 21), 28800));
    // 0x186fd8: 0x12a5821
    ctx->pc = 0x186fd8u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x186fdc: 0x50600001
    ctx->pc = 0x186FDCu;
    {
        const bool branch_taken_0x186fdc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x186fdc) {
            ctx->pc = 0x186FE0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x186FE4u;
            goto label_186fe4;
        }
    }
    ctx->pc = 0x186FE4u;
label_186fe4:
    // 0x186fe4: 0x8d620000
    ctx->pc = 0x186fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x186fe8: 0x83001a
    ctx->pc = 0x186fe8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x186fec: 0x9812
    ctx->pc = 0x186fecu;
    SET_GPR_U32(ctx, 19, ctx->lo);
    // 0x186ff0: 0x1448003d
    ctx->pc = 0x186FF0u;
    {
        const bool branch_taken_0x186ff0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 8));
        ctx->pc = 0x186FF4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186ff0) {
            ctx->pc = 0x1870E8u;
            goto label_1870e8;
        }
    }
    ctx->pc = 0x186FF8u;
    // 0x186ff8: 0x25420010
    ctx->pc = 0x186ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 16));
    // 0x186ffc: 0x1492021
    ctx->pc = 0x186ffcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x187000: 0x1223821
    ctx->pc = 0x187000u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x187004: 0x80282d
    ctx->pc = 0x187004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187008: 0x2071025
    ctx->pc = 0x187008u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x18700c: 0xa0182d
    ctx->pc = 0x18700cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187010: 0x30420007
    ctx->pc = 0x187010u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x187014: 0xad710000
    ctx->pc = 0x187014u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 17));
    // 0x187018: 0x200302d
    ctx->pc = 0x187018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18701c: 0xac910004
    ctx->pc = 0x18701cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x187020: 0xacb30008
    ctx->pc = 0x187020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 19));
    // 0x187024: 0x1040001a
    ctx->pc = 0x187024u;
    {
        const bool branch_taken_0x187024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187028u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x187024) {
            ctx->pc = 0x187090u;
            goto label_187090;
        }
    }
    ctx->pc = 0x18702Cu;
    // 0x18702c: 0x26020400
    ctx->pc = 0x18702cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1024));
label_187030:
    // 0x187030: 0x68c30007
    ctx->pc = 0x187030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187034: 0x6cc30000
    ctx->pc = 0x187034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187038: 0x68c4000f
    ctx->pc = 0x187038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18703c: 0x6cc40008
    ctx->pc = 0x18703cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187040: 0x68c50017
    ctx->pc = 0x187040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187044: 0x6cc50010
    ctx->pc = 0x187044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187048: 0x68c8001f
    ctx->pc = 0x187048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18704c: 0x6cc80018
    ctx->pc = 0x18704cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187050: 0xb0e30007
    ctx->pc = 0x187050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187054: 0xb4e30000
    ctx->pc = 0x187054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187058: 0xb0e4000f
    ctx->pc = 0x187058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18705c: 0xb4e40008
    ctx->pc = 0x18705cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187060: 0xb0e50017
    ctx->pc = 0x187060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187064: 0xb4e50010
    ctx->pc = 0x187064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187068: 0xb0e8001f
    ctx->pc = 0x187068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18706c: 0xb4e80018
    ctx->pc = 0x18706cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187070: 0x24c60020
    ctx->pc = 0x187070u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x187074: 0x0
    ctx->pc = 0x187074u;
    // NOP
    // 0x187078: 0x0
    ctx->pc = 0x187078u;
    // NOP
    // 0x18707c: 0x14c2ffec
    ctx->pc = 0x18707Cu;
    {
        const bool branch_taken_0x18707c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x187080u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
        if (branch_taken_0x18707c) {
            ctx->pc = 0x187030u;
            goto label_187030;
        }
    }
    ctx->pc = 0x187084u;
    // 0x187084: 0x10000011
    ctx->pc = 0x187084u;
    {
        const bool branch_taken_0x187084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187088u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x187084) {
            ctx->pc = 0x1870CCu;
            goto label_1870cc;
        }
    }
    ctx->pc = 0x18708Cu;
    // 0x18708c: 0x0
    ctx->pc = 0x18708cu;
    // NOP
label_187090:
    // 0x187090: 0x26020400
    ctx->pc = 0x187090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1024));
label_187094:
    // 0x187094: 0xdcc30000
    ctx->pc = 0x187094u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187098: 0xdcc40008
    ctx->pc = 0x187098u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x18709c: 0xdcc50010
    ctx->pc = 0x18709cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1870a0: 0xdcc80018
    ctx->pc = 0x1870a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1870a4: 0xfce30000
    ctx->pc = 0x1870a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1870a8: 0xfce40008
    ctx->pc = 0x1870a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x1870ac: 0xfce50010
    ctx->pc = 0x1870acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 5));
    // 0x1870b0: 0xfce80018
    ctx->pc = 0x1870b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 8));
    // 0x1870b4: 0x24c60020
    ctx->pc = 0x1870b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x1870b8: 0x0
    ctx->pc = 0x1870b8u;
    // NOP
    // 0x1870bc: 0x0
    ctx->pc = 0x1870bcu;
    // NOP
    // 0x1870c0: 0x14c2fff4
    ctx->pc = 0x1870C0u;
    {
        const bool branch_taken_0x1870c0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x1870C4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
        if (branch_taken_0x1870c0) {
            ctx->pc = 0x187094u;
            goto label_187094;
        }
    }
    ctx->pc = 0x1870C8u;
    // 0x1870c8: 0x2922021
    ctx->pc = 0x1870c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1870cc:
    // 0x1870cc: 0x26a27080
    ctx->pc = 0x1870ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 28800));
    // 0x1870d0: 0x2442000c
    ctx->pc = 0x1870d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1870d4: 0x42100
    ctx->pc = 0x1870d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1870d8: 0x822021
    ctx->pc = 0x1870d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1870dc: 0x10000088
    ctx->pc = 0x1870DCu;
    {
        const bool branch_taken_0x1870dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1870E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1870dc) {
            ctx->pc = 0x187300u;
            goto label_187300;
        }
    }
    ctx->pc = 0x1870E4u;
    // 0x1870e4: 0x0
    ctx->pc = 0x1870e4u;
    // NOP
label_1870e8:
    // 0x1870e8: 0x25430004
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 4));
    // 0x1870ec: 0x1232021
    ctx->pc = 0x1870ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1870f0: 0x8c820000
    ctx->pc = 0x1870f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1870f4: 0x24420001
    ctx->pc = 0x1870f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1870f8: 0x16220041
    ctx->pc = 0x1870F8u;
    {
        const bool branch_taken_0x1870f8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1870FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 12));
        if (branch_taken_0x1870f8) {
            ctx->pc = 0x187200u;
            goto label_187200;
        }
    }
    ctx->pc = 0x187100u;
    // 0x187100: 0x1233821
    ctx->pc = 0x187100u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x187104: 0x8ce20000
    ctx->pc = 0x187104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x187108: 0x28420008
    ctx->pc = 0x187108u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x18710c: 0x1040003c
    ctx->pc = 0x18710Cu;
    {
        const bool branch_taken_0x18710c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187110u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        if (branch_taken_0x18710c) {
            ctx->pc = 0x187200u;
            goto label_187200;
        }
    }
    ctx->pc = 0x187114u;
    // 0x187114: 0x8c430008
    ctx->pc = 0x187114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x187118: 0x14730039
    ctx->pc = 0x187118u;
    {
        const bool branch_taken_0x187118 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        ctx->pc = 0x18711Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 16));
        if (branch_taken_0x187118) {
            ctx->pc = 0x187200u;
            goto label_187200;
        }
    }
    ctx->pc = 0x187120u;
    // 0x187120: 0xac910000
    ctx->pc = 0x187120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x187124: 0x8ce30000
    ctx->pc = 0x187124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x187128: 0x31a80
    ctx->pc = 0x187128u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 10));
    // 0x18712c: 0x691821
    ctx->pc = 0x18712cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x187130: 0x621021
    ctx->pc = 0x187130u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187134: 0x2022025
    ctx->pc = 0x187134u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x187138: 0x30840007
    ctx->pc = 0x187138u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 7));
    // 0x18713c: 0x1080001a
    ctx->pc = 0x18713Cu;
    {
        const bool branch_taken_0x18713c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x187140u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18713c) {
            ctx->pc = 0x1871A8u;
            goto label_1871a8;
        }
    }
    ctx->pc = 0x187144u;
    // 0x187144: 0x26040400
    ctx->pc = 0x187144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1024));
label_187148:
    // 0x187148: 0x68c30007
    ctx->pc = 0x187148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18714c: 0x6cc30000
    ctx->pc = 0x18714cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187150: 0x68c5000f
    ctx->pc = 0x187150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187154: 0x6cc50008
    ctx->pc = 0x187154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187158: 0x68c70017
    ctx->pc = 0x187158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18715c: 0x6cc70010
    ctx->pc = 0x18715cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187160: 0x68c8001f
    ctx->pc = 0x187160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187164: 0x6cc80018
    ctx->pc = 0x187164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187168: 0xb0430007
    ctx->pc = 0x187168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18716c: 0xb4430000
    ctx->pc = 0x18716cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187170: 0xb045000f
    ctx->pc = 0x187170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187174: 0xb4450008
    ctx->pc = 0x187174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187178: 0xb0470017
    ctx->pc = 0x187178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18717c: 0xb4470010
    ctx->pc = 0x18717cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187180: 0xb048001f
    ctx->pc = 0x187180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187184: 0xb4480018
    ctx->pc = 0x187184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187188: 0x24c60020
    ctx->pc = 0x187188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x18718c: 0x0
    ctx->pc = 0x18718cu;
    // NOP
    // 0x187190: 0x0
    ctx->pc = 0x187190u;
    // NOP
    // 0x187194: 0x14c4ffec
    ctx->pc = 0x187194u;
    {
        const bool branch_taken_0x187194 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x187198u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x187194) {
            ctx->pc = 0x187148u;
            goto label_187148;
        }
    }
    ctx->pc = 0x18719Cu;
    // 0x18719c: 0x10000011
    ctx->pc = 0x18719Cu;
    {
        const bool branch_taken_0x18719c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1871A0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x18719c) {
            ctx->pc = 0x1871E4u;
            goto label_1871e4;
        }
    }
    ctx->pc = 0x1871A4u;
    // 0x1871a4: 0x0
    ctx->pc = 0x1871a4u;
    // NOP
label_1871a8:
    // 0x1871a8: 0x26040400
    ctx->pc = 0x1871a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 1024));
label_1871ac:
    // 0x1871ac: 0xdcc30000
    ctx->pc = 0x1871acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1871b0: 0xdcc50008
    ctx->pc = 0x1871b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1871b4: 0xdcc70010
    ctx->pc = 0x1871b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1871b8: 0xdcc80018
    ctx->pc = 0x1871b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1871bc: 0xfc430000
    ctx->pc = 0x1871bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1871c0: 0xfc450008
    ctx->pc = 0x1871c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1871c4: 0xfc470010
    ctx->pc = 0x1871c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x1871c8: 0xfc480018
    ctx->pc = 0x1871c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x1871cc: 0x24c60020
    ctx->pc = 0x1871ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x1871d0: 0x0
    ctx->pc = 0x1871d0u;
    // NOP
    // 0x1871d4: 0x0
    ctx->pc = 0x1871d4u;
    // NOP
    // 0x1871d8: 0x14c4fff4
    ctx->pc = 0x1871D8u;
    {
        const bool branch_taken_0x1871d8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x1871DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
        if (branch_taken_0x1871d8) {
            ctx->pc = 0x1871ACu;
            goto label_1871ac;
        }
    }
    ctx->pc = 0x1871E0u;
    // 0x1871e0: 0x2922021
    ctx->pc = 0x1871e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1871e4:
    // 0x1871e4: 0x26a27080
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 28800));
    // 0x1871e8: 0x2442000c
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1871ec: 0x42100
    ctx->pc = 0x1871ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1871f0: 0x822021
    ctx->pc = 0x1871f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1871f4: 0x10000042
    ctx->pc = 0x1871F4u;
    {
        const bool branch_taken_0x1871f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1871F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1871f4) {
            ctx->pc = 0x187300u;
            goto label_187300;
        }
    }
    ctx->pc = 0x1871FCu;
    // 0x1871fc: 0x0
    ctx->pc = 0x1871fcu;
    // NOP
label_187200:
    // 0x187200: 0xc061bbc
    ctx->pc = 0x187200u;
    SET_GPR_U32(ctx, 31, 0x187208u);
    ctx->pc = 0x187204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187208u; }
    }
    if (ctx->pc != 0x187208u) { return; }
    ctx->pc = 0x187208u;
    // 0x187208: 0x26a37080
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 28800));
    // 0x18720c: 0x40502d
    ctx->pc = 0x18720cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187210: 0x2921021
    ctx->pc = 0x187210u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x187214: 0x24640010
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16));
    // 0x187218: 0x21100
    ctx->pc = 0x187218u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x18721c: 0x622821
    ctx->pc = 0x18721cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187220: 0x200402d
    ctx->pc = 0x187220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187224: 0x444821
    ctx->pc = 0x187224u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187228: 0xa0302d
    ctx->pc = 0x187228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18722c: 0x1092025
    ctx->pc = 0x18722cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x187230: 0x433821
    ctx->pc = 0x187230u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187234: 0x30840007
    ctx->pc = 0x187234u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 7));
    // 0x187238: 0xc0182d
    ctx->pc = 0x187238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18723c: 0xacf10000
    ctx->pc = 0x18723cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x187240: 0xacb10004
    ctx->pc = 0x187240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x187244: 0xacd30008
    ctx->pc = 0x187244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 19));
    // 0x187248: 0x10800019
    ctx->pc = 0x187248u;
    {
        const bool branch_taken_0x187248 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18724Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x187248) {
            ctx->pc = 0x1872B0u;
            goto label_1872b0;
        }
    }
    ctx->pc = 0x187250u;
    // 0x187250: 0x25020400
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1024));
label_187254:
    // 0x187254: 0x69030007
    ctx->pc = 0x187254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187258: 0x6d030000
    ctx->pc = 0x187258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18725c: 0x6904000f
    ctx->pc = 0x18725cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187260: 0x6d040008
    ctx->pc = 0x187260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187264: 0x69050017
    ctx->pc = 0x187264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187268: 0x6d050010
    ctx->pc = 0x187268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18726c: 0x6906001f
    ctx->pc = 0x18726cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x187270: 0x6d060018
    ctx->pc = 0x187270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x187274: 0xb1230007
    ctx->pc = 0x187274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187278: 0xb5230000
    ctx->pc = 0x187278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18727c: 0xb124000f
    ctx->pc = 0x18727cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187280: 0xb5240008
    ctx->pc = 0x187280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187284: 0xb1250017
    ctx->pc = 0x187284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187288: 0xb5250010
    ctx->pc = 0x187288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18728c: 0xb126001f
    ctx->pc = 0x18728cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187290: 0xb5260018
    ctx->pc = 0x187290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x187294: 0x25080020
    ctx->pc = 0x187294u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
    // 0x187298: 0x0
    ctx->pc = 0x187298u;
    // NOP
    // 0x18729c: 0x0
    ctx->pc = 0x18729cu;
    // NOP
    // 0x1872a0: 0x1502ffec
    ctx->pc = 0x1872A0u;
    {
        const bool branch_taken_0x1872a0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x1872A4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32));
        if (branch_taken_0x1872a0) {
            ctx->pc = 0x187254u;
            goto label_187254;
        }
    }
    ctx->pc = 0x1872A8u;
    // 0x1872a8: 0x10000010
    ctx->pc = 0x1872A8u;
    {
        const bool branch_taken_0x1872a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1872ACu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        if (branch_taken_0x1872a8) {
            ctx->pc = 0x1872ECu;
            goto label_1872ec;
        }
    }
    ctx->pc = 0x1872B0u;
label_1872b0:
    // 0x1872b0: 0x25020400
    ctx->pc = 0x1872b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1024));
label_1872b4:
    // 0x1872b4: 0xdd070000
    ctx->pc = 0x1872b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1872b8: 0xdd030008
    ctx->pc = 0x1872b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1872bc: 0xdd040010
    ctx->pc = 0x1872bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1872c0: 0xdd050018
    ctx->pc = 0x1872c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1872c4: 0xfd270000
    ctx->pc = 0x1872c4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 7));
    // 0x1872c8: 0xfd230008
    ctx->pc = 0x1872c8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x1872cc: 0xfd240010
    ctx->pc = 0x1872ccu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 16), GPR_U64(ctx, 4));
    // 0x1872d0: 0xfd250018
    ctx->pc = 0x1872d0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 5));
    // 0x1872d4: 0x25080020
    ctx->pc = 0x1872d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
    // 0x1872d8: 0x0
    ctx->pc = 0x1872d8u;
    // NOP
    // 0x1872dc: 0x0
    ctx->pc = 0x1872dcu;
    // NOP
    // 0x1872e0: 0x1502fff4
    ctx->pc = 0x1872E0u;
    {
        const bool branch_taken_0x1872e0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x1872E4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32));
        if (branch_taken_0x1872e0) {
            ctx->pc = 0x1872B4u;
            goto label_1872b4;
        }
    }
    ctx->pc = 0x1872E8u;
    // 0x1872e8: 0x2922021
    ctx->pc = 0x1872e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1872ec:
    // 0x1872ec: 0x26a27080
    ctx->pc = 0x1872ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 28800));
    // 0x1872f0: 0x2442000c
    ctx->pc = 0x1872f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1872f4: 0x42100
    ctx->pc = 0x1872f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1872f8: 0x822021
    ctx->pc = 0x1872f8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1872fc: 0x140102d
    ctx->pc = 0x1872fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_187300:
    // 0x187300: 0x8c830000
    ctx->pc = 0x187300u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187304: 0x24630001
    ctx->pc = 0x187304u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x187308: 0xac830000
    ctx->pc = 0x187308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18730c: 0xdfb00000
    ctx->pc = 0x18730cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187310: 0xdfb10008
    ctx->pc = 0x187310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187314: 0xdfb20010
    ctx->pc = 0x187314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187318: 0xdfb30018
    ctx->pc = 0x187318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18731c: 0xdfb40020
    ctx->pc = 0x18731cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187320: 0xdfb50028
    ctx->pc = 0x187320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187324: 0xdfbf0030
    ctx->pc = 0x187324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187328: 0x3e00008
    ctx->pc = 0x187328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18732Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186FE4u: goto label_186fe4;
            case 0x187030u: goto label_187030;
            case 0x187090u: goto label_187090;
            case 0x187094u: goto label_187094;
            case 0x1870CCu: goto label_1870cc;
            case 0x1870E8u: goto label_1870e8;
            case 0x187148u: goto label_187148;
            case 0x1871A8u: goto label_1871a8;
            case 0x1871ACu: goto label_1871ac;
            case 0x1871E4u: goto label_1871e4;
            case 0x187200u: goto label_187200;
            case 0x187254u: goto label_187254;
            case 0x1872B0u: goto label_1872b0;
            case 0x1872B4u: goto label_1872b4;
            case 0x1872ECu: goto label_1872ec;
            case 0x187300u: goto label_187300;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187330u;
}
