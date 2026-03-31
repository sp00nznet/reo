#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011C550
// Address: 0x11c550 - 0x11c778
void sub_0011C550_0x11c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11c550u;

    // 0x11c550: 0x27bdff80
    ctx->pc = 0x11c550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11c554: 0xffb40050
    ctx->pc = 0x11c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11c558: 0xffb30040
    ctx->pc = 0x11c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11c55c: 0xe0a02d
    ctx->pc = 0x11c55cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c560: 0xffb20030
    ctx->pc = 0x11c560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c564: 0x100982d
    ctx->pc = 0x11c564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c568: 0xffb10020
    ctx->pc = 0x11c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c56c: 0xa0902d
    ctx->pc = 0x11c56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c570: 0xffb00010
    ctx->pc = 0x11c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c574: 0x80882d
    ctx->pc = 0x11c574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c578: 0xffbf0070
    ctx->pc = 0x11c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11c57c: 0xc0802d
    ctx->pc = 0x11c57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c580: 0xc046f5e
    ctx->pc = 0x11C580u;
    SET_GPR_U32(ctx, 31, 0x11C588u);
    ctx->pc = 0x11C584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C588u; }
    }
    if (ctx->pc != 0x11C588u) { return; }
    ctx->pc = 0x11C588u;
    // 0x11c588: 0x4400071
    ctx->pc = 0x11C588u;
    {
        const bool branch_taken_0x11c588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C58Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11c588) {
            ctx->pc = 0x11C750u;
            goto label_11c750;
        }
    }
    ctx->pc = 0x11C590u;
    // 0x11c590: 0xc046f9e
    ctx->pc = 0x11C590u;
    SET_GPR_U32(ctx, 31, 0x11C598u);
    ctx->pc = 0x11BE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE78_0x11be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C598u; }
    }
    if (ctx->pc != 0x11C598u) { return; }
    ctx->pc = 0x11C598u;
    // 0x11c598: 0x50400004
    ctx->pc = 0x11C598u;
    {
        const bool branch_taken_0x11c598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c598) {
            ctx->pc = 0x11C59Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
            ctx->pc = 0x11C5ACu;
            goto label_11c5ac;
        }
    }
    ctx->pc = 0x11C5A0u;
    // 0x11c5a0: 0x3c02fffe
    ctx->pc = 0x11c5a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c5a4: 0x1000006a
    ctx->pc = 0x11C5A4u;
    {
        const bool branch_taken_0x11c5a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C5A8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x11c5a4) {
            ctx->pc = 0x11C750u;
            goto label_11c750;
        }
    }
    ctx->pc = 0x11C5ACu;
label_11c5ac:
    // 0x11c5ac: 0x220282d
    ctx->pc = 0x11c5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5b0: 0x2451e408
    ctx->pc = 0x11c5b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294960136));
    // 0x11c5b4: 0x240600fc
    ctx->pc = 0x11c5b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 252));
    // 0x11c5b8: 0xc042d7e
    ctx->pc = 0x11C5B8u;
    SET_GPR_U32(ctx, 31, 0x11C5C0u);
    ctx->pc = 0x11C5BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B5F8_0x10b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C5C0u; }
    }
    if (ctx->pc != 0x11C5C0u) { return; }
    ctx->pc = 0x11C5C0u;
    // 0x11c5c0: 0x2622fff8
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x11c5c4: 0x1200004c
    ctx->pc = 0x11C5C4u;
    {
        const bool branch_taken_0x11c5c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C5C8u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x11c5c4) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11C5CCu;
    // 0x11c5cc: 0x2a4200fd
    ctx->pc = 0x11c5ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 253));
    // 0x11c5d0: 0x14400043
    ctx->pc = 0x11C5D0u;
    {
        const bool branch_taken_0x11c5d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11C5D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c5d0) {
            ctx->pc = 0x11C6E0u;
            goto label_11c6e0;
        }
    }
    ctx->pc = 0x11C5D8u;
    // 0x11c5d8: 0x262400fc
    ctx->pc = 0x11c5d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 252));
    // 0x11c5dc: 0x2041025
    ctx->pc = 0x11c5dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11c5e0: 0x30420007
    ctx->pc = 0x11c5e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x11c5e4: 0x1040001b
    ctx->pc = 0x11C5E4u;
    {
        const bool branch_taken_0x11c5e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C5E8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c5e4) {
            ctx->pc = 0x11C654u;
            goto label_11c654;
        }
    }
    ctx->pc = 0x11C5ECu;
    // 0x11c5ec: 0x260200e0
    ctx->pc = 0x11c5ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 224));
    // 0x11c5f0: 0x3c150026
    ctx->pc = 0x11c5f0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11c5f4: 0x3c050026
    ctx->pc = 0x11c5f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c5f8:
    // 0x11c5f8: 0x68660007
    ctx->pc = 0x11c5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c5fc: 0x6c660000
    ctx->pc = 0x11c5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c600: 0x6867000f
    ctx->pc = 0x11c600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c604: 0x6c670008
    ctx->pc = 0x11c604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c608: 0x68680017
    ctx->pc = 0x11c608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c60c: 0x6c680010
    ctx->pc = 0x11c60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c610: 0x6869001f
    ctx->pc = 0x11c610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c614: 0x6c690018
    ctx->pc = 0x11c614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c618: 0xb0860007
    ctx->pc = 0x11c618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c61c: 0xb4860000
    ctx->pc = 0x11c61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c620: 0xb087000f
    ctx->pc = 0x11c620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c624: 0xb4870008
    ctx->pc = 0x11c624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c628: 0xb0880017
    ctx->pc = 0x11c628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c62c: 0xb4880010
    ctx->pc = 0x11c62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c630: 0xb089001f
    ctx->pc = 0x11c630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c634: 0xb4890018
    ctx->pc = 0x11c634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c638: 0x24630020
    ctx->pc = 0x11c638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x11c63c: 0x24840020
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c640: 0x0
    ctx->pc = 0x11c640u;
    // NOP
    // 0x11c644: 0x1462ffec
    ctx->pc = 0x11C644u;
    {
        const bool branch_taken_0x11c644 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x11c644) {
            ctx->pc = 0x11C5F8u;
            goto label_11c5f8;
        }
    }
    ctx->pc = 0x11C64Cu;
    // 0x11c64c: 0x10000011
    ctx->pc = 0x11C64Cu;
    {
        const bool branch_taken_0x11c64c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c64c) {
            ctx->pc = 0x11C694u;
            goto label_11c694;
        }
    }
    ctx->pc = 0x11C654u;
label_11c654:
    // 0x11c654: 0x260200e0
    ctx->pc = 0x11c654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 224));
    // 0x11c658: 0x3c150026
    ctx->pc = 0x11c658u;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11c65c: 0x3c050026
    ctx->pc = 0x11c65cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c660:
    // 0x11c660: 0xdc660000
    ctx->pc = 0x11c660u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c664: 0xdc670008
    ctx->pc = 0x11c664u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11c668: 0xdc680010
    ctx->pc = 0x11c668u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11c66c: 0xdc690018
    ctx->pc = 0x11c66cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11c670: 0xfc860000
    ctx->pc = 0x11c670u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x11c674: 0xfc870008
    ctx->pc = 0x11c674u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x11c678: 0xfc880010
    ctx->pc = 0x11c678u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x11c67c: 0xfc890018
    ctx->pc = 0x11c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x11c680: 0x24630020
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x11c684: 0x24840020
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c688: 0x0
    ctx->pc = 0x11c688u;
    // NOP
    // 0x11c68c: 0x1462fff4
    ctx->pc = 0x11C68Cu;
    {
        const bool branch_taken_0x11c68c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x11c68c) {
            ctx->pc = 0x11C660u;
            goto label_11c660;
        }
    }
    ctx->pc = 0x11C694u;
label_11c694:
    // 0x11c694: 0x68660007
    ctx->pc = 0x11c694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c698: 0x6c660000
    ctx->pc = 0x11c698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c69c: 0x6867000f
    ctx->pc = 0x11c69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c6a0: 0x6c670008
    ctx->pc = 0x11c6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c6a4: 0x68680017
    ctx->pc = 0x11c6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c6a8: 0x6c680010
    ctx->pc = 0x11c6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c6ac: 0x8869001b
    ctx->pc = 0x11c6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 9, (GPR_U32(ctx, 9) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x11c6b0: 0x98690018
    ctx->pc = 0x11c6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 9, (GPR_U32(ctx, 9) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x11c6b4: 0xb0860007
    ctx->pc = 0x11c6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6b8: 0xb4860000
    ctx->pc = 0x11c6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6bc: 0xb087000f
    ctx->pc = 0x11c6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6c0: 0xb4870008
    ctx->pc = 0x11c6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6c4: 0xb0880017
    ctx->pc = 0x11c6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6c8: 0xb4880010
    ctx->pc = 0x11c6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c6cc: 0xa889001b
    ctx->pc = 0x11c6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 9) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11c6d0: 0x240200fc
    ctx->pc = 0x11c6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 252));
    // 0x11c6d4: 0xb8890018
    ctx->pc = 0x11c6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 9) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11c6d8: 0x1000000b
    ctx->pc = 0x11C6D8u;
    {
        const bool branch_taken_0x11c6d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C6DCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294960128), GPR_U32(ctx, 2));
        if (branch_taken_0x11c6d8) {
            ctx->pc = 0x11C708u;
            goto label_11c708;
        }
    }
    ctx->pc = 0x11C6E0u;
label_11c6e0:
    // 0x11c6e0: 0x262400fc
    ctx->pc = 0x11c6e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 252));
    // 0x11c6e4: 0x240302d
    ctx->pc = 0x11c6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6e8: 0xc041eac
    ctx->pc = 0x11C6E8u;
    SET_GPR_U32(ctx, 31, 0x11C6F0u);
    ctx->pc = 0x11C6ECu;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C6F0u; }
    }
    if (ctx->pc != 0x11C6F0u) { return; }
    ctx->pc = 0x11C6F0u;
    // 0x11c6f0: 0x10000004
    ctx->pc = 0x11C6F0u;
    {
        const bool branch_taken_0x11c6f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C6F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        if (branch_taken_0x11c6f0) {
            ctx->pc = 0x11C704u;
            goto label_11c704;
        }
    }
    ctx->pc = 0x11C6F8u;
label_11c6f8:
    // 0x11c6f8: 0xa0400104
    ctx->pc = 0x11c6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c6fc: 0x3c150026
    ctx->pc = 0x11c6fcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)38 << 16));
    // 0x11c700: 0xae20fff8
    ctx->pc = 0x11c700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_11c704:
    // 0x11c704: 0x3c050026
    ctx->pc = 0x11c704u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c708:
    // 0x11c708: 0x26b0e400
    ctx->pc = 0x11c708u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294960128));
    // 0x11c70c: 0x24a4e600
    ctx->pc = 0x11c70cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294960640));
    // 0x11c710: 0x260282d
    ctx->pc = 0x11c710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c714: 0xafa00000
    ctx->pc = 0x11c714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c718: 0x302d
    ctx->pc = 0x11c718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c71c: 0x200382d
    ctx->pc = 0x11c71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c720: 0x24080200
    ctx->pc = 0x11c720u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x11c724: 0x200482d
    ctx->pc = 0x11c724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c728: 0x240a0008
    ctx->pc = 0x11c728u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c72c: 0xc045e7a
    ctx->pc = 0x11C72Cu;
    SET_GPR_U32(ctx, 31, 0x11C734u);
    ctx->pc = 0x11C730u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C734u; }
    }
    if (ctx->pc != 0x11C734u) { return; }
    ctx->pc = 0x11C734u;
    // 0x11c734: 0x4430004
    ctx->pc = 0x11C734u;
    {
        const bool branch_taken_0x11c734 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c734) {
            ctx->pc = 0x11C738u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x11C748u;
            goto label_11c748;
        }
    }
    ctx->pc = 0x11C73Cu;
    // 0x11c73c: 0x3c02fffe
    ctx->pc = 0x11c73cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c740: 0x10000003
    ctx->pc = 0x11C740u;
    {
        const bool branch_taken_0x11c740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C744u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x11c740) {
            ctx->pc = 0x11C750u;
            goto label_11c750;
        }
    }
    ctx->pc = 0x11C748u;
label_11c748:
    // 0x11c748: 0x8ea2e400
    ctx->pc = 0x11c748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294960128)));
    // 0x11c74c: 0xae830000
    ctx->pc = 0x11c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_11c750:
    // 0x11c750: 0xdfbf0070
    ctx->pc = 0x11c750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c754: 0xdfb50060
    ctx->pc = 0x11c754u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c758: 0xdfb40050
    ctx->pc = 0x11c758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c75c: 0xdfb30040
    ctx->pc = 0x11c75cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c760: 0xdfb20030
    ctx->pc = 0x11c760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c764: 0xdfb10020
    ctx->pc = 0x11c764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c768: 0xdfb00010
    ctx->pc = 0x11c768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c76c: 0x3e00008
    ctx->pc = 0x11C76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C770u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C5ACu: goto label_11c5ac;
            case 0x11C5F8u: goto label_11c5f8;
            case 0x11C654u: goto label_11c654;
            case 0x11C660u: goto label_11c660;
            case 0x11C694u: goto label_11c694;
            case 0x11C6E0u: goto label_11c6e0;
            case 0x11C6F8u: goto label_11c6f8;
            case 0x11C704u: goto label_11c704;
            case 0x11C708u: goto label_11c708;
            case 0x11C748u: goto label_11c748;
            case 0x11C750u: goto label_11c750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C774u;
    // 0x11c774: 0x0
    ctx->pc = 0x11c774u;
    // NOP
}
