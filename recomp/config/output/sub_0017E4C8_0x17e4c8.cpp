#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0017E4C8
// Address: 0x17e4c8 - 0x17e6a0
void sub_0017E4C8_0x17e4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x17e4c8u;

    // 0x17e4c8: 0x27bdffa0
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17e4cc: 0x3c030024
    ctx->pc = 0x17e4ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17e4d0: 0xffb00030
    ctx->pc = 0x17e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x17e4d4: 0x80802d
    ctx->pc = 0x17e4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4d8: 0xffb10038
    ctx->pc = 0x17e4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x17e4dc: 0x27b10010
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
    // 0x17e4e0: 0xffb20040
    ctx->pc = 0x17e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x17e4e4: 0x27b20020
    ctx->pc = 0x17e4e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e4e8: 0xffb30048
    ctx->pc = 0x17e4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x17e4ec: 0xa0982d
    ctx->pc = 0x17e4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4f0: 0xffbf0050
    ctx->pc = 0x17e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17e4f4: 0x3c050024
    ctx->pc = 0x17e4f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17e4f8: 0x246a1538
    ctx->pc = 0x17e4f8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 3), 5432));
    // 0x17e4fc: 0x69470007
    ctx->pc = 0x17e4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17e500: 0x6d470000
    ctx->pc = 0x17e500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17e504: 0xb3a70007
    ctx->pc = 0x17e504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e508: 0xb7a70000
    ctx->pc = 0x17e508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e50c: 0x3c060024
    ctx->pc = 0x17e50cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x17e510: 0x24a91550
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 5456));
    // 0x17e514: 0x69230007
    ctx->pc = 0x17e514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17e518: 0x6d230000
    ctx->pc = 0x17e518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17e51c: 0xb2230007
    ctx->pc = 0x17e51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e520: 0xb6230000
    ctx->pc = 0x17e520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e524: 0x26040002
    ctx->pc = 0x17e524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2));
    // 0x17e528: 0x8e620000
    ctx->pc = 0x17e528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e52c: 0x24c71568
    ctx->pc = 0x17e52cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 5480));
    // 0x17e530: 0x68ea0007
    ctx->pc = 0x17e530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17e534: 0x6cea0000
    ctx->pc = 0x17e534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17e538: 0xb24a0007
    ctx->pc = 0x17e538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e53c: 0xb64a0000
    ctx->pc = 0x17e53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e540: 0x24060001
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e544: 0x21080
    ctx->pc = 0x17e544u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e548: 0x3a21821
    ctx->pc = 0x17e548u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x17e54c: 0xc042d7e
    ctx->pc = 0x17E54Cu;
    SET_GPR_U32(ctx, 31, 0x17E554u);
    ctx->pc = 0x17E550u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E554u; }
    }
    if (ctx->pc != 0x17E554u) { return; }
    ctx->pc = 0x17E554u;
    // 0x17e554: 0x8e630004
    ctx->pc = 0x17e554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x17e558: 0x26040003
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 3));
    // 0x17e55c: 0x24060001
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e560: 0x31880
    ctx->pc = 0x17e560u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x17e564: 0x2238821
    ctx->pc = 0x17e564u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17e568: 0xc042d7e
    ctx->pc = 0x17E568u;
    SET_GPR_U32(ctx, 31, 0x17E570u);
    ctx->pc = 0x17E56Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E570u; }
    }
    if (ctx->pc != 0x17E570u) { return; }
    ctx->pc = 0x17E570u;
    // 0x17e570: 0x8e630008
    ctx->pc = 0x17e570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17e574: 0x26040004
    ctx->pc = 0x17e574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x17e578: 0x24060001
    ctx->pc = 0x17e578u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e57c: 0x31880
    ctx->pc = 0x17e57cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x17e580: 0x2439021
    ctx->pc = 0x17e580u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17e584: 0xc042d7e
    ctx->pc = 0x17E584u;
    SET_GPR_U32(ctx, 31, 0x17E58Cu);
    ctx->pc = 0x17E588u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E58Cu; }
    }
    if (ctx->pc != 0x17E58Cu) { return; }
    ctx->pc = 0x17E58Cu;
    // 0x17e58c: 0xdfb00030
    ctx->pc = 0x17e58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e590: 0xdfb10038
    ctx->pc = 0x17e590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17e594: 0xdfb20040
    ctx->pc = 0x17e594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e598: 0xdfb30048
    ctx->pc = 0x17e598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17e59c: 0xdfbf0050
    ctx->pc = 0x17e59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e5a0: 0x3e00008
    ctx->pc = 0x17E5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E5BCu: goto label_17e5bc;
            case 0x17E5C8u: goto label_17e5c8;
            case 0x17E5DCu: goto label_17e5dc;
            case 0x17E5FCu: goto label_17e5fc;
            case 0x17E608u: goto label_17e608;
            case 0x17E61Cu: goto label_17e61c;
            case 0x17E644u: goto label_17e644;
            case 0x17E650u: goto label_17e650;
            case 0x17E690u: goto label_17e690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E5A8u;
    // 0x17e5a8: 0x27bdfff0
    ctx->pc = 0x17e5a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e5ac: 0x10800003
    ctx->pc = 0x17E5ACu;
    {
        const bool branch_taken_0x17e5ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E5B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17e5ac) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E5B4u;
    // 0x17e5b4: 0x4a10004
    ctx->pc = 0x17E5B4u;
    {
        const bool branch_taken_0x17e5b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17E5B8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x17e5b4) {
            ctx->pc = 0x17E5C8u;
            goto label_17e5c8;
        }
    }
    ctx->pc = 0x17E5BCu;
label_17e5bc:
    // 0x17e5bc: 0x10000007
    ctx->pc = 0x17E5BCu;
    {
        const bool branch_taken_0x17e5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E5C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e5bc) {
            ctx->pc = 0x17E5DCu;
            goto label_17e5dc;
        }
    }
    ctx->pc = 0x17E5C4u;
    // 0x17e5c4: 0x0
    ctx->pc = 0x17e5c4u;
    // NOP
label_17e5c8:
    // 0x17e5c8: 0x24840012
    ctx->pc = 0x17e5c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18));
    // 0x17e5cc: 0x24a51530
    ctx->pc = 0x17e5ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5424));
    // 0x17e5d0: 0xc042d10
    ctx->pc = 0x17E5D0u;
    SET_GPR_U32(ctx, 31, 0x17E5D8u);
    ctx->pc = 0x17E5D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5D8u; }
    }
    if (ctx->pc != 0x17E5D8u) { return; }
    ctx->pc = 0x17E5D8u;
    // 0x17e5d8: 0x2c420001
    ctx->pc = 0x17e5d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17e5dc:
    // 0x17e5dc: 0xdfbf0000
    ctx->pc = 0x17e5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e5e0: 0x3e00008
    ctx->pc = 0x17E5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E5BCu: goto label_17e5bc;
            case 0x17E5C8u: goto label_17e5c8;
            case 0x17E5DCu: goto label_17e5dc;
            case 0x17E5FCu: goto label_17e5fc;
            case 0x17E608u: goto label_17e608;
            case 0x17E61Cu: goto label_17e61c;
            case 0x17E644u: goto label_17e644;
            case 0x17E650u: goto label_17e650;
            case 0x17E690u: goto label_17e690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E5E8u;
    // 0x17e5e8: 0x27bdfff0
    ctx->pc = 0x17e5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e5ec: 0x10800003
    ctx->pc = 0x17E5ECu;
    {
        const bool branch_taken_0x17e5ec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E5F0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17e5ec) {
            ctx->pc = 0x17E5FCu;
            goto label_17e5fc;
        }
    }
    ctx->pc = 0x17E5F4u;
    // 0x17e5f4: 0x4a10004
    ctx->pc = 0x17E5F4u;
    {
        const bool branch_taken_0x17e5f4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17E5F8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x17e5f4) {
            ctx->pc = 0x17E608u;
            goto label_17e608;
        }
    }
    ctx->pc = 0x17E5FCu;
label_17e5fc:
    // 0x17e5fc: 0x10000007
    ctx->pc = 0x17E5FCu;
    {
        const bool branch_taken_0x17e5fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E600u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e5fc) {
            ctx->pc = 0x17E61Cu;
            goto label_17e61c;
        }
    }
    ctx->pc = 0x17E604u;
    // 0x17e604: 0x0
    ctx->pc = 0x17e604u;
    // NOP
label_17e608:
    // 0x17e608: 0x24840013
    ctx->pc = 0x17e608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19));
    // 0x17e60c: 0x24a51548
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5448));
    // 0x17e610: 0xc042d10
    ctx->pc = 0x17E610u;
    SET_GPR_U32(ctx, 31, 0x17E618u);
    ctx->pc = 0x17E614u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E618u; }
    }
    if (ctx->pc != 0x17E618u) { return; }
    ctx->pc = 0x17E618u;
    // 0x17e618: 0x2c420001
    ctx->pc = 0x17e618u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17e61c:
    // 0x17e61c: 0xdfbf0000
    ctx->pc = 0x17e61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e620: 0x3e00008
    ctx->pc = 0x17E620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E5BCu: goto label_17e5bc;
            case 0x17E5C8u: goto label_17e5c8;
            case 0x17E5DCu: goto label_17e5dc;
            case 0x17E5FCu: goto label_17e5fc;
            case 0x17E608u: goto label_17e608;
            case 0x17E61Cu: goto label_17e61c;
            case 0x17E644u: goto label_17e644;
            case 0x17E650u: goto label_17e650;
            case 0x17E690u: goto label_17e690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E628u;
    // 0x17e628: 0x27bdffe0
    ctx->pc = 0x17e628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e62c: 0xffb00010
    ctx->pc = 0x17e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e630: 0x80802d
    ctx->pc = 0x17e630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e634: 0x12000003
    ctx->pc = 0x17E634u;
    {
        const bool branch_taken_0x17e634 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E638u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        if (branch_taken_0x17e634) {
            ctx->pc = 0x17E644u;
            goto label_17e644;
        }
    }
    ctx->pc = 0x17E63Cu;
    // 0x17e63c: 0x4a10004
    ctx->pc = 0x17E63Cu;
    {
        const bool branch_taken_0x17e63c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17E640u;
        SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
        if (branch_taken_0x17e63c) {
            ctx->pc = 0x17E650u;
            goto label_17e650;
        }
    }
    ctx->pc = 0x17E644u;
label_17e644:
    // 0x17e644: 0x10000012
    ctx->pc = 0x17E644u;
    {
        const bool branch_taken_0x17e644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E648u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e644) {
            ctx->pc = 0x17E690u;
            goto label_17e690;
        }
    }
    ctx->pc = 0x17E64Cu;
    // 0x17e64c: 0x0
    ctx->pc = 0x17e64cu;
    // NOP
label_17e650:
    // 0x17e650: 0x3a0202d
    ctx->pc = 0x17e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e654: 0x24a51570
    ctx->pc = 0x17e654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5488));
    // 0x17e658: 0x82020010
    ctx->pc = 0x17e658u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17e65c: 0x82030011
    ctx->pc = 0x17e65cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x17e660: 0xa3a20000
    ctx->pc = 0x17e660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e664: 0xa3a30001
    ctx->pc = 0x17e664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x17e668: 0xc042d10
    ctx->pc = 0x17E668u;
    SET_GPR_U32(ctx, 31, 0x17E670u);
    ctx->pc = 0x17E66Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E670u; }
    }
    if (ctx->pc != 0x17E670u) { return; }
    ctx->pc = 0x17E670u;
    // 0x17e670: 0x3c050024
    ctx->pc = 0x17e670u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x17e674: 0x26040014
    ctx->pc = 0x17e674u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
    // 0x17e678: 0x24a51560
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5472));
    // 0x17e67c: 0x10400004
    ctx->pc = 0x17E67Cu;
    {
        const bool branch_taken_0x17e67c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E680u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17e67c) {
            ctx->pc = 0x17E690u;
            goto label_17e690;
        }
    }
    ctx->pc = 0x17E684u;
    // 0x17e684: 0xc042d10
    ctx->pc = 0x17E684u;
    SET_GPR_U32(ctx, 31, 0x17E68Cu);
    ctx->pc = 0x10B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B440_0x10b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E68Cu; }
    }
    if (ctx->pc != 0x17E68Cu) { return; }
    ctx->pc = 0x17E68Cu;
    // 0x17e68c: 0x2c420001
    ctx->pc = 0x17e68cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_17e690:
    // 0x17e690: 0xdfb00010
    ctx->pc = 0x17e690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e694: 0xdfbf0018
    ctx->pc = 0x17e694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e698: 0x3e00008
    ctx->pc = 0x17E698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E69Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E5BCu: goto label_17e5bc;
            case 0x17E5C8u: goto label_17e5c8;
            case 0x17E5DCu: goto label_17e5dc;
            case 0x17E5FCu: goto label_17e5fc;
            case 0x17E608u: goto label_17e608;
            case 0x17E61Cu: goto label_17e61c;
            case 0x17E644u: goto label_17e644;
            case 0x17E650u: goto label_17e650;
            case 0x17E690u: goto label_17e690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E6A0u;
}
