#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0011BF40
// Address: 0x11bf40 - 0x11c3e0
void sub_0011BF40_0x11bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11bf40u;

    // 0x11bf40: 0x27bdff70
    ctx->pc = 0x11bf40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11bf44: 0xffb60070
    ctx->pc = 0x11bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11bf48: 0xffb30040
    ctx->pc = 0x11bf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11bf4c: 0xe0b02d
    ctx->pc = 0x11bf4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf50: 0xffb10020
    ctx->pc = 0x11bf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11bf54: 0x80982d
    ctx->pc = 0x11bf54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf58: 0xffb00010
    ctx->pc = 0x11bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11bf5c: 0xa0882d
    ctx->pc = 0x11bf5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf60: 0xffbf0080
    ctx->pc = 0x11bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11bf64: 0xc0802d
    ctx->pc = 0x11bf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf68: 0xffb50060
    ctx->pc = 0x11bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11bf6c: 0xffb40050
    ctx->pc = 0x11bf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11bf70: 0xc046f5e
    ctx->pc = 0x11BF70u;
    SET_GPR_U32(ctx, 31, 0x11BF78u);
    ctx->pc = 0x11BF74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF78u; }
    }
    if (ctx->pc != 0x11BF78u) { return; }
    ctx->pc = 0x11BF78u;
    // 0x11bf78: 0x4400069
    ctx->pc = 0x11BF78u;
    {
        const bool branch_taken_0x11bf78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11BF7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11bf78) {
            ctx->pc = 0x11C120u;
            goto label_11c120;
        }
    }
    ctx->pc = 0x11BF80u;
    // 0x11bf80: 0xc046f9e
    ctx->pc = 0x11BF80u;
    SET_GPR_U32(ctx, 31, 0x11BF88u);
    ctx->pc = 0x11BE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE78_0x11be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF88u; }
    }
    if (ctx->pc != 0x11BF88u) { return; }
    ctx->pc = 0x11BF88u;
    // 0x11bf88: 0x10400004
    ctx->pc = 0x11BF88u;
    {
        const bool branch_taken_0x11bf88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BF8Cu;
        SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
        if (branch_taken_0x11bf88) {
            ctx->pc = 0x11BF9Cu;
            goto label_11bf9c;
        }
    }
    ctx->pc = 0x11BF90u;
    // 0x11bf90: 0x3c02fffe
    ctx->pc = 0x11bf90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11bf94: 0x10000062
    ctx->pc = 0x11BF94u;
    {
        const bool branch_taken_0x11bf94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BF98u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x11bf94) {
            ctx->pc = 0x11C120u;
            goto label_11c120;
        }
    }
    ctx->pc = 0x11BF9Cu;
label_11bf9c:
    // 0x11bf9c: 0x280a82d
    ctx->pc = 0x11bf9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfa0: 0x2692e400
    ctx->pc = 0x11bfa0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 4294960128));
    // 0x11bfa4: 0x1200004a
    ctx->pc = 0x11BFA4u;
    {
        const bool branch_taken_0x11bfa4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BFA8u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960128), GPR_U32(ctx, 19));
        if (branch_taken_0x11bfa4) {
            ctx->pc = 0x11C0D0u;
            goto label_11c0d0;
        }
    }
    ctx->pc = 0x11BFACu;
    // 0x11bfac: 0x2a2200fd
    ctx->pc = 0x11bfacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 253));
    // 0x11bfb0: 0x14400042
    ctx->pc = 0x11BFB0u;
    {
        const bool branch_taken_0x11bfb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11BFB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11bfb0) {
            ctx->pc = 0x11C0BCu;
            goto label_11c0bc;
        }
    }
    ctx->pc = 0x11BFB8u;
    // 0x11bfb8: 0x26440104
    ctx->pc = 0x11bfb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 260));
    // 0x11bfbc: 0x2041025
    ctx->pc = 0x11bfbcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11bfc0: 0x30420007
    ctx->pc = 0x11bfc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x11bfc4: 0x1040001a
    ctx->pc = 0x11BFC4u;
    {
        const bool branch_taken_0x11bfc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11BFC8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11bfc4) {
            ctx->pc = 0x11C030u;
            goto label_11c030;
        }
    }
    ctx->pc = 0x11BFCCu;
    // 0x11bfcc: 0x260200e0
    ctx->pc = 0x11bfccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 224));
    // 0x11bfd0: 0x3c050026
    ctx->pc = 0x11bfd0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11bfd4:
    // 0x11bfd4: 0x68e30007
    ctx->pc = 0x11bfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11bfd8: 0x6ce30000
    ctx->pc = 0x11bfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11bfdc: 0x68e6000f
    ctx->pc = 0x11bfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11bfe0: 0x6ce60008
    ctx->pc = 0x11bfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11bfe4: 0x68e80017
    ctx->pc = 0x11bfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11bfe8: 0x6ce80010
    ctx->pc = 0x11bfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11bfec: 0x68e9001f
    ctx->pc = 0x11bfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11bff0: 0x6ce90018
    ctx->pc = 0x11bff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11bff4: 0xb0830007
    ctx->pc = 0x11bff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bff8: 0xb4830000
    ctx->pc = 0x11bff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bffc: 0xb086000f
    ctx->pc = 0x11bffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c000: 0xb4860008
    ctx->pc = 0x11c000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c004: 0xb0880017
    ctx->pc = 0x11c004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c008: 0xb4880010
    ctx->pc = 0x11c008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c00c: 0xb089001f
    ctx->pc = 0x11c00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c010: 0xb4890018
    ctx->pc = 0x11c010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c014: 0x24e70020
    ctx->pc = 0x11c014u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
    // 0x11c018: 0x24840020
    ctx->pc = 0x11c018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c01c: 0x0
    ctx->pc = 0x11c01cu;
    // NOP
    // 0x11c020: 0x14e2ffec
    ctx->pc = 0x11C020u;
    {
        const bool branch_taken_0x11c020 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x11c020) {
            ctx->pc = 0x11BFD4u;
            goto label_11bfd4;
        }
    }
    ctx->pc = 0x11C028u;
    // 0x11c028: 0x10000010
    ctx->pc = 0x11C028u;
    {
        const bool branch_taken_0x11c028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c028) {
            ctx->pc = 0x11C06Cu;
            goto label_11c06c;
        }
    }
    ctx->pc = 0x11C030u;
label_11c030:
    // 0x11c030: 0x260200e0
    ctx->pc = 0x11c030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 224));
    // 0x11c034: 0x3c050026
    ctx->pc = 0x11c034u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c038:
    // 0x11c038: 0xdcea0000
    ctx->pc = 0x11c038u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11c03c: 0xdce30008
    ctx->pc = 0x11c03cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11c040: 0xdce60010
    ctx->pc = 0x11c040u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x11c044: 0xdce80018
    ctx->pc = 0x11c044u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x11c048: 0xfc8a0000
    ctx->pc = 0x11c048u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x11c04c: 0xfc830008
    ctx->pc = 0x11c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x11c050: 0xfc860010
    ctx->pc = 0x11c050u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x11c054: 0xfc880018
    ctx->pc = 0x11c054u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x11c058: 0x24e70020
    ctx->pc = 0x11c058u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
    // 0x11c05c: 0x24840020
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c060: 0x0
    ctx->pc = 0x11c060u;
    // NOP
    // 0x11c064: 0x14e2fff4
    ctx->pc = 0x11C064u;
    {
        const bool branch_taken_0x11c064 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x11c064) {
            ctx->pc = 0x11C038u;
            goto label_11c038;
        }
    }
    ctx->pc = 0x11C06Cu;
label_11c06c:
    // 0x11c06c: 0x68e90007
    ctx->pc = 0x11c06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c070: 0x6ce90000
    ctx->pc = 0x11c070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c074: 0x68ea000f
    ctx->pc = 0x11c074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c078: 0x6cea0008
    ctx->pc = 0x11c078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c07c: 0x68e60017
    ctx->pc = 0x11c07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c080: 0x6ce60010
    ctx->pc = 0x11c080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c084: 0x88e8001b
    ctx->pc = 0x11c084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 8, (GPR_U32(ctx, 8) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x11c088: 0x98e80018
    ctx->pc = 0x11c088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 8, (GPR_U32(ctx, 8) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x11c08c: 0xb0890007
    ctx->pc = 0x11c08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c090: 0xb4890000
    ctx->pc = 0x11c090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c094: 0xb08a000f
    ctx->pc = 0x11c094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c098: 0xb48a0008
    ctx->pc = 0x11c098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c09c: 0xb0860017
    ctx->pc = 0x11c09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c0a0: 0xb4860010
    ctx->pc = 0x11c0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c0a4: 0xa888001b
    ctx->pc = 0x11c0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 8) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11c0a8: 0x26a3e400
    ctx->pc = 0x11c0a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 4294960128));
    // 0x11c0ac: 0x240200fc
    ctx->pc = 0x11c0acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 252));
    // 0x11c0b0: 0xb8880018
    ctx->pc = 0x11c0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 8) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11c0b4: 0x10000008
    ctx->pc = 0x11C0B4u;
    {
        const bool branch_taken_0x11c0b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C0B8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x11c0b4) {
            ctx->pc = 0x11C0D8u;
            goto label_11c0d8;
        }
    }
    ctx->pc = 0x11C0BCu;
label_11c0bc:
    // 0x11c0bc: 0x26440104
    ctx->pc = 0x11c0bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 260));
    // 0x11c0c0: 0xc041eac
    ctx->pc = 0x11C0C0u;
    SET_GPR_U32(ctx, 31, 0x11C0C8u);
    ctx->pc = 0x11C0C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C0C8u; }
    }
    if (ctx->pc != 0x11C0C8u) { return; }
    ctx->pc = 0x11C0C8u;
    // 0x11c0c8: 0x10000002
    ctx->pc = 0x11C0C8u;
    {
        const bool branch_taken_0x11c0c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C0CCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        if (branch_taken_0x11c0c8) {
            ctx->pc = 0x11C0D4u;
            goto label_11c0d4;
        }
    }
    ctx->pc = 0x11C0D0u;
label_11c0d0:
    // 0x11c0d0: 0xae400004
    ctx->pc = 0x11c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_11c0d4:
    // 0x11c0d4: 0x3c050026
    ctx->pc = 0x11c0d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c0d8:
    // 0x11c0d8: 0x26b0e400
    ctx->pc = 0x11c0d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294960128));
    // 0x11c0dc: 0x24a4e600
    ctx->pc = 0x11c0dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294960640));
    // 0x11c0e0: 0xafa00000
    ctx->pc = 0x11c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c0e4: 0x24050006
    ctx->pc = 0x11c0e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c0e8: 0x302d
    ctx->pc = 0x11c0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0ec: 0x200382d
    ctx->pc = 0x11c0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0f0: 0x24080200
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x11c0f4: 0x200482d
    ctx->pc = 0x11c0f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0f8: 0x240a0008
    ctx->pc = 0x11c0f8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c0fc: 0xc045e7a
    ctx->pc = 0x11C0FCu;
    SET_GPR_U32(ctx, 31, 0x11C104u);
    ctx->pc = 0x11C100u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C104u; }
    }
    if (ctx->pc != 0x11C104u) { return; }
    ctx->pc = 0x11C104u;
    // 0x11c104: 0x4430004
    ctx->pc = 0x11C104u;
    {
        const bool branch_taken_0x11c104 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c104) {
            ctx->pc = 0x11C108u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x11C118u;
            goto label_11c118;
        }
    }
    ctx->pc = 0x11C10Cu;
    // 0x11c10c: 0x3c02fffe
    ctx->pc = 0x11c10cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c110: 0x10000003
    ctx->pc = 0x11C110u;
    {
        const bool branch_taken_0x11c110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C114u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x11c110) {
            ctx->pc = 0x11C120u;
            goto label_11c120;
        }
    }
    ctx->pc = 0x11C118u;
label_11c118:
    // 0x11c118: 0x8e82e400
    ctx->pc = 0x11c118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294960128)));
    // 0x11c11c: 0xaec30000
    ctx->pc = 0x11c11cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_11c120:
    // 0x11c120: 0xdfbf0080
    ctx->pc = 0x11c120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11c124: 0xdfb60070
    ctx->pc = 0x11c124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c128: 0xdfb50060
    ctx->pc = 0x11c128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c12c: 0xdfb40050
    ctx->pc = 0x11c12cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c130: 0xdfb30040
    ctx->pc = 0x11c130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c134: 0xdfb20030
    ctx->pc = 0x11c134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c138: 0xdfb10020
    ctx->pc = 0x11c138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c13c: 0xdfb00010
    ctx->pc = 0x11c13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c140: 0x3e00008
    ctx->pc = 0x11C140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C144u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BF9Cu: goto label_11bf9c;
            case 0x11BFD4u: goto label_11bfd4;
            case 0x11C030u: goto label_11c030;
            case 0x11C038u: goto label_11c038;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C0BCu: goto label_11c0bc;
            case 0x11C0D0u: goto label_11c0d0;
            case 0x11C0D4u: goto label_11c0d4;
            case 0x11C0D8u: goto label_11c0d8;
            case 0x11C118u: goto label_11c118;
            case 0x11C120u: goto label_11c120;
            case 0x11C1A4u: goto label_11c1a4;
            case 0x11C1DCu: goto label_11c1dc;
            case 0x11C238u: goto label_11c238;
            case 0x11C240u: goto label_11c240;
            case 0x11C274u: goto label_11c274;
            case 0x11C2C4u: goto label_11c2c4;
            case 0x11C2D8u: goto label_11c2d8;
            case 0x11C2DCu: goto label_11c2dc;
            case 0x11C2E0u: goto label_11c2e0;
            case 0x11C320u: goto label_11c320;
            case 0x11C328u: goto label_11c328;
            case 0x11C38Cu: goto label_11c38c;
            case 0x11C3CCu: goto label_11c3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C148u;
    // 0x11c148: 0x27bdff70
    ctx->pc = 0x11c148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11c14c: 0xffb60070
    ctx->pc = 0x11c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11c150: 0xffb30040
    ctx->pc = 0x11c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11c154: 0xe0b02d
    ctx->pc = 0x11c154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c158: 0xffb10020
    ctx->pc = 0x11c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c15c: 0x80982d
    ctx->pc = 0x11c15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c160: 0xffb00010
    ctx->pc = 0x11c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c164: 0xa0882d
    ctx->pc = 0x11c164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c168: 0xffbf0080
    ctx->pc = 0x11c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11c16c: 0xc0802d
    ctx->pc = 0x11c16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c170: 0xffb50060
    ctx->pc = 0x11c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11c174: 0xffb40050
    ctx->pc = 0x11c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11c178: 0xc046f5e
    ctx->pc = 0x11C178u;
    SET_GPR_U32(ctx, 31, 0x11C180u);
    ctx->pc = 0x11C17Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C180u; }
    }
    if (ctx->pc != 0x11C180u) { return; }
    ctx->pc = 0x11C180u;
    // 0x11c180: 0x4400069
    ctx->pc = 0x11C180u;
    {
        const bool branch_taken_0x11c180 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C184u;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11c180) {
            ctx->pc = 0x11C328u;
            goto label_11c328;
        }
    }
    ctx->pc = 0x11C188u;
    // 0x11c188: 0xc046f9e
    ctx->pc = 0x11C188u;
    SET_GPR_U32(ctx, 31, 0x11C190u);
    ctx->pc = 0x11BE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE78_0x11be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C190u; }
    }
    if (ctx->pc != 0x11C190u) { return; }
    ctx->pc = 0x11C190u;
    // 0x11c190: 0x10400004
    ctx->pc = 0x11C190u;
    {
        const bool branch_taken_0x11c190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C194u;
        SET_GPR_U32(ctx, 20, ((uint32_t)38 << 16));
        if (branch_taken_0x11c190) {
            ctx->pc = 0x11C1A4u;
            goto label_11c1a4;
        }
    }
    ctx->pc = 0x11C198u;
    // 0x11c198: 0x3c02fffe
    ctx->pc = 0x11c198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c19c: 0x10000062
    ctx->pc = 0x11C19Cu;
    {
        const bool branch_taken_0x11c19c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C1A0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x11c19c) {
            ctx->pc = 0x11C328u;
            goto label_11c328;
        }
    }
    ctx->pc = 0x11C1A4u;
label_11c1a4:
    // 0x11c1a4: 0x280a82d
    ctx->pc = 0x11c1a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1a8: 0x2692e400
    ctx->pc = 0x11c1a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 4294960128));
    // 0x11c1ac: 0x1200004a
    ctx->pc = 0x11C1ACu;
    {
        const bool branch_taken_0x11c1ac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C1B0u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960128), GPR_U32(ctx, 19));
        if (branch_taken_0x11c1ac) {
            ctx->pc = 0x11C2D8u;
            goto label_11c2d8;
        }
    }
    ctx->pc = 0x11C1B4u;
    // 0x11c1b4: 0x2a2200fd
    ctx->pc = 0x11c1b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 253));
    // 0x11c1b8: 0x14400042
    ctx->pc = 0x11C1B8u;
    {
        const bool branch_taken_0x11c1b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11C1BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c1b8) {
            ctx->pc = 0x11C2C4u;
            goto label_11c2c4;
        }
    }
    ctx->pc = 0x11C1C0u;
    // 0x11c1c0: 0x26440104
    ctx->pc = 0x11c1c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 260));
    // 0x11c1c4: 0x2041025
    ctx->pc = 0x11c1c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11c1c8: 0x30420007
    ctx->pc = 0x11c1c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x11c1cc: 0x1040001a
    ctx->pc = 0x11C1CCu;
    {
        const bool branch_taken_0x11c1cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C1D0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11c1cc) {
            ctx->pc = 0x11C238u;
            goto label_11c238;
        }
    }
    ctx->pc = 0x11C1D4u;
    // 0x11c1d4: 0x260200e0
    ctx->pc = 0x11c1d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 224));
    // 0x11c1d8: 0x3c050026
    ctx->pc = 0x11c1d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c1dc:
    // 0x11c1dc: 0x68e30007
    ctx->pc = 0x11c1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c1e0: 0x6ce30000
    ctx->pc = 0x11c1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c1e4: 0x68e6000f
    ctx->pc = 0x11c1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c1e8: 0x6ce60008
    ctx->pc = 0x11c1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c1ec: 0x68e80017
    ctx->pc = 0x11c1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c1f0: 0x6ce80010
    ctx->pc = 0x11c1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c1f4: 0x68e9001f
    ctx->pc = 0x11c1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c1f8: 0x6ce90018
    ctx->pc = 0x11c1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c1fc: 0xb0830007
    ctx->pc = 0x11c1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c200: 0xb4830000
    ctx->pc = 0x11c200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c204: 0xb086000f
    ctx->pc = 0x11c204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c208: 0xb4860008
    ctx->pc = 0x11c208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c20c: 0xb0880017
    ctx->pc = 0x11c20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c210: 0xb4880010
    ctx->pc = 0x11c210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c214: 0xb089001f
    ctx->pc = 0x11c214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c218: 0xb4890018
    ctx->pc = 0x11c218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c21c: 0x24e70020
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
    // 0x11c220: 0x24840020
    ctx->pc = 0x11c220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c224: 0x0
    ctx->pc = 0x11c224u;
    // NOP
    // 0x11c228: 0x14e2ffec
    ctx->pc = 0x11C228u;
    {
        const bool branch_taken_0x11c228 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x11c228) {
            ctx->pc = 0x11C1DCu;
            goto label_11c1dc;
        }
    }
    ctx->pc = 0x11C230u;
    // 0x11c230: 0x10000010
    ctx->pc = 0x11C230u;
    {
        const bool branch_taken_0x11c230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x11c230) {
            ctx->pc = 0x11C274u;
            goto label_11c274;
        }
    }
    ctx->pc = 0x11C238u;
label_11c238:
    // 0x11c238: 0x260200e0
    ctx->pc = 0x11c238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 224));
    // 0x11c23c: 0x3c050026
    ctx->pc = 0x11c23cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c240:
    // 0x11c240: 0xdcea0000
    ctx->pc = 0x11c240u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11c244: 0xdce30008
    ctx->pc = 0x11c244u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11c248: 0xdce60010
    ctx->pc = 0x11c248u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x11c24c: 0xdce80018
    ctx->pc = 0x11c24cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x11c250: 0xfc8a0000
    ctx->pc = 0x11c250u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x11c254: 0xfc830008
    ctx->pc = 0x11c254u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x11c258: 0xfc860010
    ctx->pc = 0x11c258u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x11c25c: 0xfc880018
    ctx->pc = 0x11c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x11c260: 0x24e70020
    ctx->pc = 0x11c260u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
    // 0x11c264: 0x24840020
    ctx->pc = 0x11c264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x11c268: 0x0
    ctx->pc = 0x11c268u;
    // NOP
    // 0x11c26c: 0x14e2fff4
    ctx->pc = 0x11C26Cu;
    {
        const bool branch_taken_0x11c26c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x11c26c) {
            ctx->pc = 0x11C240u;
            goto label_11c240;
        }
    }
    ctx->pc = 0x11C274u;
label_11c274:
    // 0x11c274: 0x68e90007
    ctx->pc = 0x11c274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c278: 0x6ce90000
    ctx->pc = 0x11c278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c27c: 0x68ea000f
    ctx->pc = 0x11c27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c280: 0x6cea0008
    ctx->pc = 0x11c280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c284: 0x68e60017
    ctx->pc = 0x11c284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x11c288: 0x6ce60010
    ctx->pc = 0x11c288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x11c28c: 0x88e8001b
    ctx->pc = 0x11c28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 8, (GPR_U32(ctx, 8) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x11c290: 0x98e80018
    ctx->pc = 0x11c290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 8, (GPR_U32(ctx, 8) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x11c294: 0xb0890007
    ctx->pc = 0x11c294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c298: 0xb4890000
    ctx->pc = 0x11c298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c29c: 0xb08a000f
    ctx->pc = 0x11c29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c2a0: 0xb48a0008
    ctx->pc = 0x11c2a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c2a4: 0xb0860017
    ctx->pc = 0x11c2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c2a8: 0xb4860010
    ctx->pc = 0x11c2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11c2ac: 0xa888001b
    ctx->pc = 0x11c2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 8) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11c2b0: 0x26a3e400
    ctx->pc = 0x11c2b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 4294960128));
    // 0x11c2b4: 0x240200fc
    ctx->pc = 0x11c2b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 252));
    // 0x11c2b8: 0xb8880018
    ctx->pc = 0x11c2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 8) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11c2bc: 0x10000008
    ctx->pc = 0x11C2BCu;
    {
        const bool branch_taken_0x11c2bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C2C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x11c2bc) {
            ctx->pc = 0x11C2E0u;
            goto label_11c2e0;
        }
    }
    ctx->pc = 0x11C2C4u;
label_11c2c4:
    // 0x11c2c4: 0x26440104
    ctx->pc = 0x11c2c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 260));
    // 0x11c2c8: 0xc041eac
    ctx->pc = 0x11C2C8u;
    SET_GPR_U32(ctx, 31, 0x11C2D0u);
    ctx->pc = 0x11C2CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C2D0u; }
    }
    if (ctx->pc != 0x11C2D0u) { return; }
    ctx->pc = 0x11C2D0u;
    // 0x11c2d0: 0x10000002
    ctx->pc = 0x11C2D0u;
    {
        const bool branch_taken_0x11c2d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C2D4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        if (branch_taken_0x11c2d0) {
            ctx->pc = 0x11C2DCu;
            goto label_11c2dc;
        }
    }
    ctx->pc = 0x11C2D8u;
label_11c2d8:
    // 0x11c2d8: 0xae400004
    ctx->pc = 0x11c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_11c2dc:
    // 0x11c2dc: 0x3c050026
    ctx->pc = 0x11c2dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
label_11c2e0:
    // 0x11c2e0: 0x26b0e400
    ctx->pc = 0x11c2e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 4294960128));
    // 0x11c2e4: 0x24a4e600
    ctx->pc = 0x11c2e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 4294960640));
    // 0x11c2e8: 0xafa00000
    ctx->pc = 0x11c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c2ec: 0x24050007
    ctx->pc = 0x11c2ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x11c2f0: 0x302d
    ctx->pc = 0x11c2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2f4: 0x200382d
    ctx->pc = 0x11c2f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2f8: 0x24080200
    ctx->pc = 0x11c2f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x11c2fc: 0x200482d
    ctx->pc = 0x11c2fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c300: 0x240a0008
    ctx->pc = 0x11c300u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c304: 0xc045e7a
    ctx->pc = 0x11C304u;
    SET_GPR_U32(ctx, 31, 0x11C30Cu);
    ctx->pc = 0x11C308u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C30Cu; }
    }
    if (ctx->pc != 0x11C30Cu) { return; }
    ctx->pc = 0x11C30Cu;
    // 0x11c30c: 0x4430004
    ctx->pc = 0x11C30Cu;
    {
        const bool branch_taken_0x11c30c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c30c) {
            ctx->pc = 0x11C310u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x11C320u;
            goto label_11c320;
        }
    }
    ctx->pc = 0x11C314u;
    // 0x11c314: 0x3c02fffe
    ctx->pc = 0x11c314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c318: 0x10000003
    ctx->pc = 0x11C318u;
    {
        const bool branch_taken_0x11c318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C31Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x11c318) {
            ctx->pc = 0x11C328u;
            goto label_11c328;
        }
    }
    ctx->pc = 0x11C320u;
label_11c320:
    // 0x11c320: 0x8e82e400
    ctx->pc = 0x11c320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294960128)));
    // 0x11c324: 0xaec30000
    ctx->pc = 0x11c324u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_11c328:
    // 0x11c328: 0xdfbf0080
    ctx->pc = 0x11c328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11c32c: 0xdfb60070
    ctx->pc = 0x11c32cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c330: 0xdfb50060
    ctx->pc = 0x11c330u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c334: 0xdfb40050
    ctx->pc = 0x11c334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c338: 0xdfb30040
    ctx->pc = 0x11c338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c33c: 0xdfb20030
    ctx->pc = 0x11c33cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c340: 0xdfb10020
    ctx->pc = 0x11c340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c344: 0xdfb00010
    ctx->pc = 0x11c344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c348: 0x3e00008
    ctx->pc = 0x11C348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C34Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BF9Cu: goto label_11bf9c;
            case 0x11BFD4u: goto label_11bfd4;
            case 0x11C030u: goto label_11c030;
            case 0x11C038u: goto label_11c038;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C0BCu: goto label_11c0bc;
            case 0x11C0D0u: goto label_11c0d0;
            case 0x11C0D4u: goto label_11c0d4;
            case 0x11C0D8u: goto label_11c0d8;
            case 0x11C118u: goto label_11c118;
            case 0x11C120u: goto label_11c120;
            case 0x11C1A4u: goto label_11c1a4;
            case 0x11C1DCu: goto label_11c1dc;
            case 0x11C238u: goto label_11c238;
            case 0x11C240u: goto label_11c240;
            case 0x11C274u: goto label_11c274;
            case 0x11C2C4u: goto label_11c2c4;
            case 0x11C2D8u: goto label_11c2d8;
            case 0x11C2DCu: goto label_11c2dc;
            case 0x11C2E0u: goto label_11c2e0;
            case 0x11C320u: goto label_11c320;
            case 0x11C328u: goto label_11c328;
            case 0x11C38Cu: goto label_11c38c;
            case 0x11C3CCu: goto label_11c3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C350u;
    // 0x11c350: 0x27bdffc0
    ctx->pc = 0x11c350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c354: 0xffb10020
    ctx->pc = 0x11c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c358: 0xffbf0030
    ctx->pc = 0x11c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c35c: 0x80882d
    ctx->pc = 0x11c35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c360: 0xc046f5e
    ctx->pc = 0x11C360u;
    SET_GPR_U32(ctx, 31, 0x11C368u);
    ctx->pc = 0x11C364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x11BD78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BD78_0x11bd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C368u; }
    }
    if (ctx->pc != 0x11C368u) { return; }
    ctx->pc = 0x11C368u;
    // 0x11c368: 0x4400018
    ctx->pc = 0x11C368u;
    {
        const bool branch_taken_0x11c368 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11C36Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
        if (branch_taken_0x11c368) {
            ctx->pc = 0x11C3CCu;
            goto label_11c3cc;
        }
    }
    ctx->pc = 0x11C370u;
    // 0x11c370: 0xc046f9e
    ctx->pc = 0x11C370u;
    SET_GPR_U32(ctx, 31, 0x11C378u);
    ctx->pc = 0x11BE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BE78_0x11be78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C378u; }
    }
    if (ctx->pc != 0x11C378u) { return; }
    ctx->pc = 0x11C378u;
    // 0x11c378: 0x10400004
    ctx->pc = 0x11C378u;
    {
        const bool branch_taken_0x11c378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C37Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
        if (branch_taken_0x11c378) {
            ctx->pc = 0x11C38Cu;
            goto label_11c38c;
        }
    }
    ctx->pc = 0x11C380u;
    // 0x11c380: 0x3c02fffe
    ctx->pc = 0x11c380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c384: 0x10000011
    ctx->pc = 0x11C384u;
    {
        const bool branch_taken_0x11c384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11C388u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
        if (branch_taken_0x11c384) {
            ctx->pc = 0x11C3CCu;
            goto label_11c3cc;
        }
    }
    ctx->pc = 0x11C38Cu;
label_11c38c:
    // 0x11c38c: 0x3c040026
    ctx->pc = 0x11c38cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x11c390: 0x2607e400
    ctx->pc = 0x11c390u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294960128));
    // 0x11c394: 0xae11e400
    ctx->pc = 0x11c394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960128), GPR_U32(ctx, 17));
    // 0x11c398: 0x2484e600
    ctx->pc = 0x11c398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960640));
    // 0x11c39c: 0xafa00000
    ctx->pc = 0x11c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11c3a0: 0x24050008
    ctx->pc = 0x11c3a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c3a4: 0x302d
    ctx->pc = 0x11c3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3a8: 0x24080004
    ctx->pc = 0x11c3a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c3ac: 0xe0482d
    ctx->pc = 0x11c3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3b0: 0x240a0004
    ctx->pc = 0x11c3b0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c3b4: 0xc045e7a
    ctx->pc = 0x11C3B4u;
    SET_GPR_U32(ctx, 31, 0x11C3BCu);
    ctx->pc = 0x11C3B8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1179E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001179E8_0x1179e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3BCu; }
    }
    if (ctx->pc != 0x11C3BCu) { return; }
    ctx->pc = 0x11C3BCu;
    // 0x11c3bc: 0x4430003
    ctx->pc = 0x11C3BCu;
    {
        const bool branch_taken_0x11c3bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c3bc) {
            ctx->pc = 0x11C3C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294960128)));
            ctx->pc = 0x11C3CCu;
            goto label_11c3cc;
        }
    }
    ctx->pc = 0x11C3C4u;
    // 0x11c3c4: 0x3c02fffe
    ctx->pc = 0x11c3c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65534 << 16));
    // 0x11c3c8: 0x3442ffff
    ctx->pc = 0x11c3c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_11c3cc:
    // 0x11c3cc: 0xdfbf0030
    ctx->pc = 0x11c3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c3d0: 0xdfb10020
    ctx->pc = 0x11c3d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c3d4: 0xdfb00010
    ctx->pc = 0x11c3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c3d8: 0x3e00008
    ctx->pc = 0x11C3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C3DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BF9Cu: goto label_11bf9c;
            case 0x11BFD4u: goto label_11bfd4;
            case 0x11C030u: goto label_11c030;
            case 0x11C038u: goto label_11c038;
            case 0x11C06Cu: goto label_11c06c;
            case 0x11C0BCu: goto label_11c0bc;
            case 0x11C0D0u: goto label_11c0d0;
            case 0x11C0D4u: goto label_11c0d4;
            case 0x11C0D8u: goto label_11c0d8;
            case 0x11C118u: goto label_11c118;
            case 0x11C120u: goto label_11c120;
            case 0x11C1A4u: goto label_11c1a4;
            case 0x11C1DCu: goto label_11c1dc;
            case 0x11C238u: goto label_11c238;
            case 0x11C240u: goto label_11c240;
            case 0x11C274u: goto label_11c274;
            case 0x11C2C4u: goto label_11c2c4;
            case 0x11C2D8u: goto label_11c2d8;
            case 0x11C2DCu: goto label_11c2dc;
            case 0x11C2E0u: goto label_11c2e0;
            case 0x11C320u: goto label_11c320;
            case 0x11C328u: goto label_11c328;
            case 0x11C38Cu: goto label_11c38c;
            case 0x11C3CCu: goto label_11c3cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C3E0u;
}
