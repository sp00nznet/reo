#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001EA02C
// Address: 0x1ea02c - 0x1eaa1c
void sub_001EA02C_0x1ea02c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1ea02cu;

label_1ea02c:
    // 0x1ea02c: 0x27bdff80
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ea030: 0xffbe0070
    ctx->pc = 0x1ea030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1ea034: 0xffbf0078
    ctx->pc = 0x1ea034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1ea038: 0x3a0f02d
    ctx->pc = 0x1ea038u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea03c: 0xafc40000
    ctx->pc = 0x1ea03cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x1ea040: 0xafc50004
    ctx->pc = 0x1ea040u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x1ea044: 0x27c30040
    ctx->pc = 0x1ea044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 64));
    // 0x1ea048: 0x3c020026
    ctx->pc = 0x1ea048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ea04c: 0x244280b8
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934712));
    // 0x1ea050: 0x68440007
    ctx->pc = 0x1ea050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1ea054: 0x6c440000
    ctx->pc = 0x1ea054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1ea058: 0x6845000f
    ctx->pc = 0x1ea058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1ea05c: 0x6c450008
    ctx->pc = 0x1ea05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1ea060: 0x68460017
    ctx->pc = 0x1ea060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1ea064: 0x6c460010
    ctx->pc = 0x1ea064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1ea068: 0x6847001f
    ctx->pc = 0x1ea068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1ea06c: 0x6c470018
    ctx->pc = 0x1ea06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1ea070: 0xb0640007
    ctx->pc = 0x1ea070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea074: 0xb4640000
    ctx->pc = 0x1ea074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea078: 0xb065000f
    ctx->pc = 0x1ea078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea07c: 0xb4650008
    ctx->pc = 0x1ea07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea080: 0xb0660017
    ctx->pc = 0x1ea080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea084: 0xb4660010
    ctx->pc = 0x1ea084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea088: 0xb067001f
    ctx->pc = 0x1ea088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea08c: 0xb4670018
    ctx->pc = 0x1ea08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea090: 0x68440027
    ctx->pc = 0x1ea090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1ea094: 0x6c440020
    ctx->pc = 0x1ea094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1ea098: 0x6845002f
    ctx->pc = 0x1ea098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1ea09c: 0x6c450028
    ctx->pc = 0x1ea09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1ea0a0: 0xb0640027
    ctx->pc = 0x1ea0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea0a4: 0xb4640020
    ctx->pc = 0x1ea0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea0a8: 0xb065002f
    ctx->pc = 0x1ea0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea0ac: 0xb4650028
    ctx->pc = 0x1ea0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea0b0: 0xc0413bc
    ctx->pc = 0x1EA0B0u;
    SET_GPR_U32(ctx, 31, 0x1EA0B8u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0B8u; }
    }
    if (ctx->pc != 0x1EA0B8u) { return; }
    ctx->pc = 0x1EA0B8u;
    // 0x1ea0b8: 0xac400000
    ctx->pc = 0x1ea0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ea0bc: 0x3c020023
    ctx->pc = 0x1ea0bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea0c0: 0xdc4269f8
    ctx->pc = 0x1ea0c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea0c4: 0x144000c3
    ctx->pc = 0x1EA0C4u;
    {
        const bool branch_taken_0x1ea0c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea0c4) {
            ctx->pc = 0x1EA3D4u;
            goto label_1ea3d4;
        }
    }
    ctx->pc = 0x1EA0CCu;
    // 0x1ea0cc: 0x27c20010
    ctx->pc = 0x1ea0ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1ea0d0: 0x40202d
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0d4: 0xc040742
    ctx->pc = 0x1EA0D4u;
    SET_GPR_U32(ctx, 31, 0x1EA0DCu);
    ctx->pc = 0x101D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101D08_0x101d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0DCu; }
    }
    if (ctx->pc != 0x1EA0DCu) { return; }
    ctx->pc = 0x1EA0DCu;
    // 0x1ea0dc: 0xafc20020
    ctx->pc = 0x1ea0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1ea0e0: 0x8fc20020
    ctx->pc = 0x1ea0e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea0e4: 0x14400009
    ctx->pc = 0x1EA0E4u;
    {
        const bool branch_taken_0x1ea0e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea0e4) {
            ctx->pc = 0x1EA10Cu;
            goto label_1ea10c;
        }
    }
    ctx->pc = 0x1EA0ECu;
    // 0x1ea0ec: 0xc0413bc
    ctx->pc = 0x1EA0ECu;
    SET_GPR_U32(ctx, 31, 0x1EA0F4u);
    ctx->pc = 0x104EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00104EF0_0x104ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0F4u; }
    }
    if (ctx->pc != 0x1EA0F4u) { return; }
    ctx->pc = 0x1EA0F4u;
    // 0x1ea0f4: 0x40182d
    ctx->pc = 0x1ea0f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0f8: 0x2402000e
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ea0fc: 0xac620000
    ctx->pc = 0x1ea0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ea100: 0x2402ffff
    ctx->pc = 0x1ea100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea104: 0x1000010e
    ctx->pc = 0x1EA104u;
    {
        const bool branch_taken_0x1ea104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea104) {
            ctx->pc = 0x1EA540u;
            goto label_1ea540;
        }
    }
    ctx->pc = 0x1EA10Cu;
label_1ea10c:
    // 0x1ea10c: 0x93c20017
    ctx->pc = 0x1ea10cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 23)));
    // 0x1ea110: 0x21102
    ctx->pc = 0x1ea110u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea114: 0x304300ff
    ctx->pc = 0x1ea114u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea118: 0x60102d
    ctx->pc = 0x1ea118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea11c: 0x21080
    ctx->pc = 0x1ea11cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea120: 0x431021
    ctx->pc = 0x1ea120u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea124: 0x21840
    ctx->pc = 0x1ea124u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea128: 0x93c20017
    ctx->pc = 0x1ea128u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 23)));
    // 0x1ea12c: 0x3042000f
    ctx->pc = 0x1ea12cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea130: 0x304200ff
    ctx->pc = 0x1ea130u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea134: 0x621021
    ctx->pc = 0x1ea134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea138: 0xafc20024
    ctx->pc = 0x1ea138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1ea13c: 0x93c20016
    ctx->pc = 0x1ea13cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x1ea140: 0x21102
    ctx->pc = 0x1ea140u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea144: 0x304300ff
    ctx->pc = 0x1ea144u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea148: 0x60102d
    ctx->pc = 0x1ea148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea14c: 0x21080
    ctx->pc = 0x1ea14cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea150: 0x431021
    ctx->pc = 0x1ea150u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea154: 0x21840
    ctx->pc = 0x1ea154u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea158: 0x93c20016
    ctx->pc = 0x1ea158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x1ea15c: 0x3042000f
    ctx->pc = 0x1ea15cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea160: 0x304200ff
    ctx->pc = 0x1ea160u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea164: 0x621021
    ctx->pc = 0x1ea164u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea168: 0xafc20028
    ctx->pc = 0x1ea168u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1ea16c: 0x93c20015
    ctx->pc = 0x1ea16cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 21)));
    // 0x1ea170: 0x21102
    ctx->pc = 0x1ea170u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea174: 0x304300ff
    ctx->pc = 0x1ea174u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea178: 0x60102d
    ctx->pc = 0x1ea178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea17c: 0x21080
    ctx->pc = 0x1ea17cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea180: 0x431021
    ctx->pc = 0x1ea180u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea184: 0x21840
    ctx->pc = 0x1ea184u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea188: 0x93c20015
    ctx->pc = 0x1ea188u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 21)));
    // 0x1ea18c: 0x3042000f
    ctx->pc = 0x1ea18cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea190: 0x304200ff
    ctx->pc = 0x1ea190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea194: 0x621021
    ctx->pc = 0x1ea194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea198: 0xafc2002c
    ctx->pc = 0x1ea198u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x1ea19c: 0x93c20013
    ctx->pc = 0x1ea19cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x1ea1a0: 0x21102
    ctx->pc = 0x1ea1a0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea1a4: 0x304300ff
    ctx->pc = 0x1ea1a4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea1a8: 0x60102d
    ctx->pc = 0x1ea1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1ac: 0x21080
    ctx->pc = 0x1ea1acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea1b0: 0x431021
    ctx->pc = 0x1ea1b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea1b4: 0x21840
    ctx->pc = 0x1ea1b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea1b8: 0x93c20013
    ctx->pc = 0x1ea1b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x1ea1bc: 0x3042000f
    ctx->pc = 0x1ea1bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea1c0: 0x304200ff
    ctx->pc = 0x1ea1c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea1c4: 0x621021
    ctx->pc = 0x1ea1c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea1c8: 0xafc20030
    ctx->pc = 0x1ea1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1ea1cc: 0x93c20012
    ctx->pc = 0x1ea1ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x1ea1d0: 0x21102
    ctx->pc = 0x1ea1d0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea1d4: 0x304300ff
    ctx->pc = 0x1ea1d4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea1d8: 0x60102d
    ctx->pc = 0x1ea1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1dc: 0x21080
    ctx->pc = 0x1ea1dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea1e0: 0x431021
    ctx->pc = 0x1ea1e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea1e4: 0x21840
    ctx->pc = 0x1ea1e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea1e8: 0x93c20012
    ctx->pc = 0x1ea1e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x1ea1ec: 0x3042000f
    ctx->pc = 0x1ea1ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea1f0: 0x304200ff
    ctx->pc = 0x1ea1f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea1f4: 0x621021
    ctx->pc = 0x1ea1f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea1f8: 0xafc20034
    ctx->pc = 0x1ea1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x1ea1fc: 0x93c20011
    ctx->pc = 0x1ea1fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x1ea200: 0x21102
    ctx->pc = 0x1ea200u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea204: 0x304300ff
    ctx->pc = 0x1ea204u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea208: 0x60102d
    ctx->pc = 0x1ea208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea20c: 0x21080
    ctx->pc = 0x1ea20cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea210: 0x431021
    ctx->pc = 0x1ea210u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea214: 0x21840
    ctx->pc = 0x1ea214u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea218: 0x93c20011
    ctx->pc = 0x1ea218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x1ea21c: 0x3042000f
    ctx->pc = 0x1ea21cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea220: 0x304200ff
    ctx->pc = 0x1ea220u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea224: 0x621021
    ctx->pc = 0x1ea224u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea228: 0xafc20038
    ctx->pc = 0x1ea228u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 2));
    // 0x1ea22c: 0x8fc20024
    ctx->pc = 0x1ea22cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea230: 0x2c420046
    ctx->pc = 0x1ea230u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 70));
    // 0x1ea234: 0x10400006
    ctx->pc = 0x1EA234u;
    {
        const bool branch_taken_0x1ea234 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea234) {
            ctx->pc = 0x1EA250u;
            goto label_1ea250;
        }
    }
    ctx->pc = 0x1EA23Cu;
    // 0x1ea23c: 0x8fc20024
    ctx->pc = 0x1ea23cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea240: 0x244207d0
    ctx->pc = 0x1ea240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2000));
    // 0x1ea244: 0xafc20024
    ctx->pc = 0x1ea244u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1ea248: 0x10000004
    ctx->pc = 0x1EA248u;
    {
        const bool branch_taken_0x1ea248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea248) {
            ctx->pc = 0x1EA25Cu;
            goto label_1ea25c;
        }
    }
    ctx->pc = 0x1EA250u;
label_1ea250:
    // 0x1ea250: 0x8fc20024
    ctx->pc = 0x1ea250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea254: 0x2442076c
    ctx->pc = 0x1ea254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1900));
    // 0x1ea258: 0xafc20024
    ctx->pc = 0x1ea258u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_1ea25c:
    // 0x1ea25c: 0x8fc20024
    ctx->pc = 0x1ea25cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea260: 0x2443f84e
    ctx->pc = 0x1ea260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965326));
    // 0x1ea264: 0x2402016d
    ctx->pc = 0x1ea264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 365));
    // 0x1ea268: 0x621018
    ctx->pc = 0x1ea268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1ea26c: 0x2103c
    ctx->pc = 0x1ea26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea270: 0x2103e
    ctx->pc = 0x1ea270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ea274: 0x3c010023
    ctx->pc = 0x1ea274u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea278: 0xfc2269f8
    ctx->pc = 0x1ea278u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea27c: 0x8fc20024
    ctx->pc = 0x1ea27cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea280: 0x2c4207b5
    ctx->pc = 0x1ea280u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1973));
    // 0x1ea284: 0x1440000b
    ctx->pc = 0x1EA284u;
    {
        const bool branch_taken_0x1ea284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea284) {
            ctx->pc = 0x1EA2B4u;
            goto label_1ea2b4;
        }
    }
    ctx->pc = 0x1EA28Cu;
    // 0x1ea28c: 0x8fc20024
    ctx->pc = 0x1ea28cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea290: 0x2442f84b
    ctx->pc = 0x1ea290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965323));
    // 0x1ea294: 0x21082
    ctx->pc = 0x1ea294u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ea298: 0x2103c
    ctx->pc = 0x1ea298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea29c: 0x2183e
    ctx->pc = 0x1ea29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ea2a0: 0x3c020023
    ctx->pc = 0x1ea2a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea2a4: 0xdc4269f8
    ctx->pc = 0x1ea2a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea2a8: 0x43102d
    ctx->pc = 0x1ea2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea2ac: 0x3c010023
    ctx->pc = 0x1ea2acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea2b0: 0xfc2269f8
    ctx->pc = 0x1ea2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
label_1ea2b4:
    // 0x1ea2b4: 0x8fc20028
    ctx->pc = 0x1ea2b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1ea2b8: 0x2442ffff
    ctx->pc = 0x1ea2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ea2bc: 0x21880
    ctx->pc = 0x1ea2bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea2c0: 0x27c20040
    ctx->pc = 0x1ea2c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 64));
    // 0x1ea2c4: 0x431021
    ctx->pc = 0x1ea2c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea2c8: 0x8c430000
    ctx->pc = 0x1ea2c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea2cc: 0x8fc2002c
    ctx->pc = 0x1ea2ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1ea2d0: 0x621021
    ctx->pc = 0x1ea2d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea2d4: 0x2103c
    ctx->pc = 0x1ea2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea2d8: 0x2183e
    ctx->pc = 0x1ea2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ea2dc: 0x3c020023
    ctx->pc = 0x1ea2dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea2e0: 0xdc4269f8
    ctx->pc = 0x1ea2e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea2e4: 0x43102d
    ctx->pc = 0x1ea2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea2e8: 0x3c010023
    ctx->pc = 0x1ea2e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea2ec: 0xfc2269f8
    ctx->pc = 0x1ea2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea2f0: 0x8fc20024
    ctx->pc = 0x1ea2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea2f4: 0x30420003
    ctx->pc = 0x1ea2f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x1ea2f8: 0x1440000a
    ctx->pc = 0x1EA2F8u;
    {
        const bool branch_taken_0x1ea2f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea2f8) {
            ctx->pc = 0x1EA324u;
            goto label_1ea324;
        }
    }
    ctx->pc = 0x1EA300u;
    // 0x1ea300: 0x8fc20028
    ctx->pc = 0x1ea300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1ea304: 0x2c420003
    ctx->pc = 0x1ea304u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x1ea308: 0x14400006
    ctx->pc = 0x1EA308u;
    {
        const bool branch_taken_0x1ea308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea308) {
            ctx->pc = 0x1EA324u;
            goto label_1ea324;
        }
    }
    ctx->pc = 0x1EA310u;
    // 0x1ea310: 0x3c020023
    ctx->pc = 0x1ea310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea314: 0xdc4269f8
    ctx->pc = 0x1ea314u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea318: 0x64420001
    ctx->pc = 0x1ea318u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
    // 0x1ea31c: 0x3c010023
    ctx->pc = 0x1ea31cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea320: 0xfc2269f8
    ctx->pc = 0x1ea320u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
label_1ea324:
    // 0x1ea324: 0x3c030023
    ctx->pc = 0x1ea324u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1ea328: 0xdc6369f8
    ctx->pc = 0x1ea328u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 27128)));
    // 0x1ea32c: 0x60102d
    ctx->pc = 0x1ea32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea330: 0x21078
    ctx->pc = 0x1ea330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x1ea334: 0x43102d
    ctx->pc = 0x1ea334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea338: 0x210f8
    ctx->pc = 0x1ea338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x1ea33c: 0x3c010023
    ctx->pc = 0x1ea33cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea340: 0xfc2269f8
    ctx->pc = 0x1ea340u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea344: 0x9fc30030
    ctx->pc = 0x1ea344u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1ea348: 0x3c020023
    ctx->pc = 0x1ea348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea34c: 0xdc4269f8
    ctx->pc = 0x1ea34cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea350: 0x43102d
    ctx->pc = 0x1ea350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea354: 0x3c010023
    ctx->pc = 0x1ea354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea358: 0xfc2269f8
    ctx->pc = 0x1ea358u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea35c: 0x3c030023
    ctx->pc = 0x1ea35cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1ea360: 0xdc6369f8
    ctx->pc = 0x1ea360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 27128)));
    // 0x1ea364: 0x60102d
    ctx->pc = 0x1ea364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea368: 0x21138
    ctx->pc = 0x1ea368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x1ea36c: 0x43102f
    ctx->pc = 0x1ea36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1ea370: 0x210b8
    ctx->pc = 0x1ea370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1ea374: 0x3c010023
    ctx->pc = 0x1ea374u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea378: 0xfc2269f8
    ctx->pc = 0x1ea378u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea37c: 0x9fc30034
    ctx->pc = 0x1ea37cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1ea380: 0x3c020023
    ctx->pc = 0x1ea380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea384: 0xdc4269f8
    ctx->pc = 0x1ea384u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea388: 0x43102d
    ctx->pc = 0x1ea388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea38c: 0x3c010023
    ctx->pc = 0x1ea38cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea390: 0xfc2269f8
    ctx->pc = 0x1ea390u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea394: 0x3c030023
    ctx->pc = 0x1ea394u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1ea398: 0xdc6369f8
    ctx->pc = 0x1ea398u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 27128)));
    // 0x1ea39c: 0x60102d
    ctx->pc = 0x1ea39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3a0: 0x21138
    ctx->pc = 0x1ea3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x1ea3a4: 0x43102f
    ctx->pc = 0x1ea3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1ea3a8: 0x210b8
    ctx->pc = 0x1ea3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1ea3ac: 0x3c010023
    ctx->pc = 0x1ea3acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea3b0: 0xfc2269f8
    ctx->pc = 0x1ea3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea3b4: 0x9fc30038
    ctx->pc = 0x1ea3b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1ea3b8: 0x3c020023
    ctx->pc = 0x1ea3b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea3bc: 0xdc4269f8
    ctx->pc = 0x1ea3bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea3c0: 0x43102d
    ctx->pc = 0x1ea3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea3c4: 0x3c010023
    ctx->pc = 0x1ea3c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea3c8: 0xfc2269f8
    ctx->pc = 0x1ea3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea3cc: 0x3c010023
    ctx->pc = 0x1ea3ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea3d0: 0xfc206a00
    ctx->pc = 0x1ea3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27136), GPR_U64(ctx, 0));
label_1ea3d4:
    // 0x1ea3d4: 0xc07a800
    ctx->pc = 0x1EA3D4u;
    SET_GPR_U32(ctx, 31, 0x1EA3DCu);
    ctx->pc = 0x1EA000u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA000_0x1ea000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3DCu; }
    }
    if (ctx->pc != 0x1EA3DCu) { return; }
    ctx->pc = 0x1EA3DCu;
    // 0x1ea3dc: 0xafc20008
    ctx->pc = 0x1ea3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1ea3e0: 0x8fc30008
    ctx->pc = 0x1ea3e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1ea3e4: 0x8f828050
    ctx->pc = 0x1ea3e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934608)));
    // 0x1ea3e8: 0x43102b
    ctx->pc = 0x1ea3e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea3ec: 0x10400009
    ctx->pc = 0x1EA3ECu;
    {
        const bool branch_taken_0x1ea3ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea3ec) {
            ctx->pc = 0x1EA414u;
            goto label_1ea414;
        }
    }
    ctx->pc = 0x1EA3F4u;
    // 0x1ea3f4: 0x8fc30008
    ctx->pc = 0x1ea3f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1ea3f8: 0x8f828050
    ctx->pc = 0x1ea3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934608)));
    // 0x1ea3fc: 0x621823
    ctx->pc = 0x1ea3fcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea400: 0x8f828054
    ctx->pc = 0x1ea400u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934612)));
    // 0x1ea404: 0x431021
    ctx->pc = 0x1ea404u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea408: 0xaf828054
    ctx->pc = 0x1ea408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934612), GPR_U32(ctx, 2));
    // 0x1ea40c: 0x1000000c
    ctx->pc = 0x1EA40Cu;
    {
        const bool branch_taken_0x1ea40c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea40c) {
            ctx->pc = 0x1EA440u;
            goto label_1ea440;
        }
    }
    ctx->pc = 0x1EA414u;
label_1ea414:
    // 0x1ea414: 0x9f848054
    ctx->pc = 0x1ea414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934612)));
    // 0x1ea418: 0x9fc30008
    ctx->pc = 0x1ea418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1ea41c: 0x9f828050
    ctx->pc = 0x1ea41cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934608)));
    // 0x1ea420: 0x62102f
    ctx->pc = 0x1ea420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1ea424: 0x82182d
    ctx->pc = 0x1ea424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1ea428: 0x34028000
    ctx->pc = 0x1ea428u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1ea42c: 0x21478
    ctx->pc = 0x1ea42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1ea430: 0x62102d
    ctx->pc = 0x1ea430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1ea434: 0x2103c
    ctx->pc = 0x1ea434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea438: 0x2103f
    ctx->pc = 0x1ea438u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ea43c: 0xaf828054
    ctx->pc = 0x1ea43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934612), GPR_U32(ctx, 2));
label_1ea440:
    // 0x1ea440: 0x8fc20008
    ctx->pc = 0x1ea440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1ea444: 0xaf828050
    ctx->pc = 0x1ea444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934608), GPR_U32(ctx, 2));
    // 0x1ea448: 0x8f828054
    ctx->pc = 0x1ea448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934612)));
    // 0x1ea44c: 0x2c42012d
    ctx->pc = 0x1ea44cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 301));
    // 0x1ea450: 0x14400032
    ctx->pc = 0x1EA450u;
    {
        const bool branch_taken_0x1ea450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea450) {
            ctx->pc = 0x1EA51Cu;
            goto label_1ea51c;
        }
    }
    ctx->pc = 0x1EA458u;
    // 0x1ea458: 0x8f838054
    ctx->pc = 0x1ea458u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934612)));
    // 0x1ea45c: 0x2402012c
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
    // 0x1ea460: 0x62001b
    ctx->pc = 0x1ea460u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x1ea464: 0x1812
    ctx->pc = 0x1ea464u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x1ea468: 0x50400001
    ctx->pc = 0x1EA468u;
    {
        const bool branch_taken_0x1ea468 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea468) {
            ctx->pc = 0x1EA46Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1EA470u;
            goto label_1ea470;
        }
    }
    ctx->pc = 0x1EA470u;
label_1ea470:
    // 0x1ea470: 0xafc3000c
    ctx->pc = 0x1ea470u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x1ea474: 0x8f838054
    ctx->pc = 0x1ea474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934612)));
    // 0x1ea478: 0x2402012c
    ctx->pc = 0x1ea478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
    // 0x1ea47c: 0x62001b
    ctx->pc = 0x1ea47cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x1ea480: 0x1810
    ctx->pc = 0x1ea480u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1ea484: 0x50400001
    ctx->pc = 0x1EA484u;
    {
        const bool branch_taken_0x1ea484 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea484) {
            ctx->pc = 0x1EA488u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1EA48Cu;
            goto label_1ea48c;
        }
    }
    ctx->pc = 0x1EA48Cu;
label_1ea48c:
    // 0x1ea48c: 0xaf838054
    ctx->pc = 0x1ea48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934612), GPR_U32(ctx, 3));
    // 0x1ea490: 0x9fc3000c
    ctx->pc = 0x1ea490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1ea494: 0x3c020023
    ctx->pc = 0x1ea494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea498: 0xdc426a00
    ctx->pc = 0x1ea498u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27136)));
    // 0x1ea49c: 0x43102d
    ctx->pc = 0x1ea49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea4a0: 0x3c010023
    ctx->pc = 0x1ea4a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea4a4: 0xfc226a00
    ctx->pc = 0x1ea4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27136), GPR_U64(ctx, 2));
    // 0x1ea4a8: 0x3c030023
    ctx->pc = 0x1ea4a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1ea4ac: 0xdc636a00
    ctx->pc = 0x1ea4acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 27136)));
    // 0x1ea4b0: 0x3c02000f
    ctx->pc = 0x1ea4b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x1ea4b4: 0x34424240
    ctx->pc = 0x1ea4b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16960));
    // 0x1ea4b8: 0x43102a
    ctx->pc = 0x1ea4b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1ea4bc: 0x10400017
    ctx->pc = 0x1EA4BCu;
    {
        const bool branch_taken_0x1ea4bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea4bc) {
            ctx->pc = 0x1EA51Cu;
            goto label_1ea51c;
        }
    }
    ctx->pc = 0x1EA4C4u;
    // 0x1ea4c4: 0x3c020023
    ctx->pc = 0x1ea4c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea4c8: 0xdc426a00
    ctx->pc = 0x1ea4c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27136)));
    // 0x1ea4cc: 0x40202d
    ctx->pc = 0x1ea4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4d0: 0x3c05000f
    ctx->pc = 0x1ea4d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)15 << 16));
    // 0x1ea4d4: 0x34a54240
    ctx->pc = 0x1ea4d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16960));
    // 0x1ea4d8: 0xc043ec6
    ctx->pc = 0x1EA4D8u;
    SET_GPR_U32(ctx, 31, 0x1EA4E0u);
    ctx->pc = 0x10FB18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FB18_0x10fb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4E0u; }
    }
    if (ctx->pc != 0x1EA4E0u) { return; }
    ctx->pc = 0x1EA4E0u;
    // 0x1ea4e0: 0x40182d
    ctx->pc = 0x1ea4e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4e4: 0x3c020023
    ctx->pc = 0x1ea4e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea4e8: 0xdc4269f8
    ctx->pc = 0x1ea4e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea4ec: 0x43102d
    ctx->pc = 0x1ea4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1ea4f0: 0x3c010023
    ctx->pc = 0x1ea4f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea4f4: 0xfc2269f8
    ctx->pc = 0x1ea4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27128), GPR_U64(ctx, 2));
    // 0x1ea4f8: 0x3c020023
    ctx->pc = 0x1ea4f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea4fc: 0xdc426a00
    ctx->pc = 0x1ea4fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27136)));
    // 0x1ea500: 0x40202d
    ctx->pc = 0x1ea500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea504: 0x3c05000f
    ctx->pc = 0x1ea504u;
    SET_GPR_U32(ctx, 5, ((uint32_t)15 << 16));
    // 0x1ea508: 0x34a54240
    ctx->pc = 0x1ea508u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16960));
    // 0x1ea50c: 0xc04406c
    ctx->pc = 0x1EA50Cu;
    SET_GPR_U32(ctx, 31, 0x1EA514u);
    ctx->pc = 0x1101B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001101B0_0x1101b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA514u; }
    }
    if (ctx->pc != 0x1EA514u) { return; }
    ctx->pc = 0x1EA514u;
    // 0x1ea514: 0x3c010023
    ctx->pc = 0x1ea514u;
    SET_GPR_U32(ctx, 1, ((uint32_t)35 << 16));
    // 0x1ea518: 0xfc226a00
    ctx->pc = 0x1ea518u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 27136), GPR_U64(ctx, 2));
label_1ea51c:
    // 0x1ea51c: 0x8fc30000
    ctx->pc = 0x1ea51cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ea520: 0x3c020023
    ctx->pc = 0x1ea520u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea524: 0xdc426a00
    ctx->pc = 0x1ea524u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27136)));
    // 0x1ea528: 0xfc620008
    ctx->pc = 0x1ea528u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x1ea52c: 0x8fc30000
    ctx->pc = 0x1ea52cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ea530: 0x3c020023
    ctx->pc = 0x1ea530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1ea534: 0xdc4269f8
    ctx->pc = 0x1ea534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27128)));
    // 0x1ea538: 0xfc620000
    ctx->pc = 0x1ea538u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1ea53c: 0x102d
    ctx->pc = 0x1ea53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea540:
    // 0x1ea540: 0x3c0e82d
    ctx->pc = 0x1ea540u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea544: 0xdfbe0070
    ctx->pc = 0x1ea544u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea548: 0xdfbf0078
    ctx->pc = 0x1ea548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ea54c: 0x27bd0080
    ctx->pc = 0x1ea54cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ea550: 0x3e00008
    ctx->pc = 0x1EA550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA02Cu: goto label_1ea02c;
            case 0x1EA10Cu: goto label_1ea10c;
            case 0x1EA250u: goto label_1ea250;
            case 0x1EA25Cu: goto label_1ea25c;
            case 0x1EA2B4u: goto label_1ea2b4;
            case 0x1EA324u: goto label_1ea324;
            case 0x1EA3D4u: goto label_1ea3d4;
            case 0x1EA414u: goto label_1ea414;
            case 0x1EA440u: goto label_1ea440;
            case 0x1EA470u: goto label_1ea470;
            case 0x1EA48Cu: goto label_1ea48c;
            case 0x1EA51Cu: goto label_1ea51c;
            case 0x1EA540u: goto label_1ea540;
            case 0x1EA5C4u: goto label_1ea5c4;
            case 0x1EA708u: goto label_1ea708;
            case 0x1EA714u: goto label_1ea714;
            case 0x1EA728u: goto label_1ea728;
            case 0x1EA7D0u: goto label_1ea7d0;
            case 0x1EA914u: goto label_1ea914;
            case 0x1EA920u: goto label_1ea920;
            case 0x1EA934u: goto label_1ea934;
            case 0x1EA988u: goto label_1ea988;
            case 0x1EA9E8u: goto label_1ea9e8;
            case 0x1EAA04u: goto label_1eaa04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA558u;
    // 0x1ea558: 0x27bdff90
    ctx->pc = 0x1ea558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ea55c: 0xffbe0060
    ctx->pc = 0x1ea55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1ea560: 0xffbf0068
    ctx->pc = 0x1ea560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1ea564: 0x3a0f02d
    ctx->pc = 0x1ea564u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea568: 0x27c30050
    ctx->pc = 0x1ea568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 80));
    // 0x1ea56c: 0x27828058
    ctx->pc = 0x1ea56cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294934616));
    // 0x1ea570: 0x68440007
    ctx->pc = 0x1ea570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1ea574: 0x6c440000
    ctx->pc = 0x1ea574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1ea578: 0xb0640007
    ctx->pc = 0x1ea578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea57c: 0xb4640000
    ctx->pc = 0x1ea57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea580: 0x27c20010
    ctx->pc = 0x1ea580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1ea584: 0x40202d
    ctx->pc = 0x1ea584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea588: 0xc040742
    ctx->pc = 0x1EA588u;
    SET_GPR_U32(ctx, 31, 0x1EA590u);
    ctx->pc = 0x101D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101D08_0x101d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA590u; }
    }
    if (ctx->pc != 0x1EA590u) { return; }
    ctx->pc = 0x1EA590u;
    // 0x1ea590: 0xa7c20000
    ctx->pc = 0x1ea590u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ea594: 0x87c20000
    ctx->pc = 0x1ea594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ea598: 0x1440000a
    ctx->pc = 0x1EA598u;
    {
        const bool branch_taken_0x1ea598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea598) {
            ctx->pc = 0x1EA5C4u;
            goto label_1ea5c4;
        }
    }
    ctx->pc = 0x1EA5A0u;
    // 0x1ea5a0: 0x87c20000
    ctx->pc = 0x1ea5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ea5a4: 0x3c040026
    ctx->pc = 0x1ea5a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea5a8: 0x248480e8
    ctx->pc = 0x1ea5a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934760));
    // 0x1ea5ac: 0x40282d
    ctx->pc = 0x1ea5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5b0: 0xc045a12
    ctx->pc = 0x1EA5B0u;
    SET_GPR_U32(ctx, 31, 0x1EA5B8u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5B8u; }
    }
    if (ctx->pc != 0x1EA5B8u) { return; }
    ctx->pc = 0x1EA5B8u;
    // 0x1ea5b8: 0x2402ffff
    ctx->pc = 0x1ea5b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea5bc: 0x10000111
    ctx->pc = 0x1EA5BCu;
    {
        const bool branch_taken_0x1ea5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea5bc) {
            ctx->pc = 0x1EAA04u;
            goto label_1eaa04;
        }
    }
    ctx->pc = 0x1EA5C4u;
label_1ea5c4:
    // 0x1ea5c4: 0x93c20017
    ctx->pc = 0x1ea5c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 23)));
    // 0x1ea5c8: 0x21102
    ctx->pc = 0x1ea5c8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea5cc: 0x304300ff
    ctx->pc = 0x1ea5ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea5d0: 0x60102d
    ctx->pc = 0x1ea5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5d4: 0x21080
    ctx->pc = 0x1ea5d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea5d8: 0x431021
    ctx->pc = 0x1ea5d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea5dc: 0x21840
    ctx->pc = 0x1ea5dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea5e0: 0x93c20017
    ctx->pc = 0x1ea5e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 23)));
    // 0x1ea5e4: 0x3042000f
    ctx->pc = 0x1ea5e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea5e8: 0x304200ff
    ctx->pc = 0x1ea5e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea5ec: 0x621021
    ctx->pc = 0x1ea5ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea5f0: 0xafc20020
    ctx->pc = 0x1ea5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1ea5f4: 0x93c20016
    ctx->pc = 0x1ea5f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x1ea5f8: 0x21102
    ctx->pc = 0x1ea5f8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea5fc: 0x304300ff
    ctx->pc = 0x1ea5fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea600: 0x60102d
    ctx->pc = 0x1ea600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea604: 0x21080
    ctx->pc = 0x1ea604u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea608: 0x431021
    ctx->pc = 0x1ea608u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea60c: 0x21840
    ctx->pc = 0x1ea60cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea610: 0x93c20016
    ctx->pc = 0x1ea610u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x1ea614: 0x3042000f
    ctx->pc = 0x1ea614u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea618: 0x304200ff
    ctx->pc = 0x1ea618u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea61c: 0x621021
    ctx->pc = 0x1ea61cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea620: 0xafc20024
    ctx->pc = 0x1ea620u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1ea624: 0x93c20015
    ctx->pc = 0x1ea624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 21)));
    // 0x1ea628: 0x21102
    ctx->pc = 0x1ea628u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea62c: 0x304300ff
    ctx->pc = 0x1ea62cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea630: 0x60102d
    ctx->pc = 0x1ea630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea634: 0x21080
    ctx->pc = 0x1ea634u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea638: 0x431021
    ctx->pc = 0x1ea638u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea63c: 0x21840
    ctx->pc = 0x1ea63cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea640: 0x93c20015
    ctx->pc = 0x1ea640u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 21)));
    // 0x1ea644: 0x3042000f
    ctx->pc = 0x1ea644u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea648: 0x304200ff
    ctx->pc = 0x1ea648u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea64c: 0x621021
    ctx->pc = 0x1ea64cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea650: 0xafc20028
    ctx->pc = 0x1ea650u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1ea654: 0x93c20013
    ctx->pc = 0x1ea654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x1ea658: 0x21102
    ctx->pc = 0x1ea658u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea65c: 0x304300ff
    ctx->pc = 0x1ea65cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea660: 0x60102d
    ctx->pc = 0x1ea660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea664: 0x21080
    ctx->pc = 0x1ea664u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea668: 0x431021
    ctx->pc = 0x1ea668u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea66c: 0x21840
    ctx->pc = 0x1ea66cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea670: 0x93c20013
    ctx->pc = 0x1ea670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x1ea674: 0x3042000f
    ctx->pc = 0x1ea674u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea678: 0x304200ff
    ctx->pc = 0x1ea678u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea67c: 0x621021
    ctx->pc = 0x1ea67cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea680: 0xafc2002c
    ctx->pc = 0x1ea680u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x1ea684: 0x93c20012
    ctx->pc = 0x1ea684u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x1ea688: 0x21102
    ctx->pc = 0x1ea688u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea68c: 0x304300ff
    ctx->pc = 0x1ea68cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea690: 0x60102d
    ctx->pc = 0x1ea690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea694: 0x21080
    ctx->pc = 0x1ea694u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea698: 0x431021
    ctx->pc = 0x1ea698u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea69c: 0x21840
    ctx->pc = 0x1ea69cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea6a0: 0x93c20012
    ctx->pc = 0x1ea6a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x1ea6a4: 0x3042000f
    ctx->pc = 0x1ea6a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea6a8: 0x304200ff
    ctx->pc = 0x1ea6a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea6ac: 0x621021
    ctx->pc = 0x1ea6acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea6b0: 0xafc20030
    ctx->pc = 0x1ea6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1ea6b4: 0x93c20011
    ctx->pc = 0x1ea6b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x1ea6b8: 0x21102
    ctx->pc = 0x1ea6b8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea6bc: 0x304300ff
    ctx->pc = 0x1ea6bcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea6c0: 0x60102d
    ctx->pc = 0x1ea6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6c4: 0x21080
    ctx->pc = 0x1ea6c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea6c8: 0x431021
    ctx->pc = 0x1ea6c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea6cc: 0x21840
    ctx->pc = 0x1ea6ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea6d0: 0x93c20011
    ctx->pc = 0x1ea6d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x1ea6d4: 0x3042000f
    ctx->pc = 0x1ea6d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea6d8: 0x304200ff
    ctx->pc = 0x1ea6d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea6dc: 0x621021
    ctx->pc = 0x1ea6dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea6e0: 0xafc20034
    ctx->pc = 0x1ea6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x1ea6e4: 0x8fc20020
    ctx->pc = 0x1ea6e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea6e8: 0x2c420046
    ctx->pc = 0x1ea6e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 70));
    // 0x1ea6ec: 0x10400006
    ctx->pc = 0x1EA6ECu;
    {
        const bool branch_taken_0x1ea6ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea6ec) {
            ctx->pc = 0x1EA708u;
            goto label_1ea708;
        }
    }
    ctx->pc = 0x1EA6F4u;
    // 0x1ea6f4: 0x8fc20020
    ctx->pc = 0x1ea6f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea6f8: 0x244207d0
    ctx->pc = 0x1ea6f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2000));
    // 0x1ea6fc: 0xafc20020
    ctx->pc = 0x1ea6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1ea700: 0x10000004
    ctx->pc = 0x1EA700u;
    {
        const bool branch_taken_0x1ea700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea700) {
            ctx->pc = 0x1EA714u;
            goto label_1ea714;
        }
    }
    ctx->pc = 0x1EA708u;
label_1ea708:
    // 0x1ea708: 0x8fc20020
    ctx->pc = 0x1ea708u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea70c: 0x2442076c
    ctx->pc = 0x1ea70cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1900));
    // 0x1ea710: 0xafc20020
    ctx->pc = 0x1ea710u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_1ea714:
    // 0x1ea714: 0x27c20040
    ctx->pc = 0x1ea714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 64));
    // 0x1ea718: 0x40202d
    ctx->pc = 0x1ea718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea71c: 0x282d
    ctx->pc = 0x1ea71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea720: 0xc07a80b
    ctx->pc = 0x1EA720u;
    SET_GPR_U32(ctx, 31, 0x1EA728u);
    ctx->pc = 0x1EA02Cu;
    goto label_1ea02c;
    ctx->pc = 0x1EA728u;
label_1ea728:
    // 0x1ea728: 0x3c040026
    ctx->pc = 0x1ea728u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea72c: 0x24848100
    ctx->pc = 0x1ea72cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934784));
    // 0x1ea730: 0x8fc50020
    ctx->pc = 0x1ea730u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea734: 0x8fc60024
    ctx->pc = 0x1ea734u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea738: 0x8fc70028
    ctx->pc = 0x1ea738u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1ea73c: 0x8fc8002c
    ctx->pc = 0x1ea73cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1ea740: 0x8fc90030
    ctx->pc = 0x1ea740u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1ea744: 0x8fca0034
    ctx->pc = 0x1ea744u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1ea748: 0xc045a12
    ctx->pc = 0x1EA748u;
    SET_GPR_U32(ctx, 31, 0x1EA750u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA750u; }
    }
    if (ctx->pc != 0x1EA750u) { return; }
    ctx->pc = 0x1EA750u;
    // 0x1ea750: 0x3c040026
    ctx->pc = 0x1ea750u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea754: 0x24848130
    ctx->pc = 0x1ea754u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934832));
    // 0x1ea758: 0xdfc50040
    ctx->pc = 0x1ea758u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1ea75c: 0xdfc60048
    ctx->pc = 0x1ea75cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1ea760: 0xc045a12
    ctx->pc = 0x1EA760u;
    SET_GPR_U32(ctx, 31, 0x1EA768u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA768u; }
    }
    if (ctx->pc != 0x1EA768u) { return; }
    ctx->pc = 0x1EA768u;
    // 0x1ea768: 0x3c040026
    ctx->pc = 0x1ea768u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea76c: 0x24848148
    ctx->pc = 0x1ea76cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934856));
    // 0x1ea770: 0xc045a12
    ctx->pc = 0x1EA770u;
    SET_GPR_U32(ctx, 31, 0x1EA778u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA778u; }
    }
    if (ctx->pc != 0x1EA778u) { return; }
    ctx->pc = 0x1EA778u;
    // 0x1ea778: 0x27c20050
    ctx->pc = 0x1ea778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 80));
    // 0x1ea77c: 0x40202d
    ctx->pc = 0x1ea77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea780: 0x282d
    ctx->pc = 0x1ea780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea784: 0xc079fb4
    ctx->pc = 0x1EA784u;
    SET_GPR_U32(ctx, 31, 0x1EA78Cu);
    ctx->pc = 0x1E7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7ED0_0x1e7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA78Cu; }
    }
    if (ctx->pc != 0x1EA78Cu) { return; }
    ctx->pc = 0x1EA78Cu;
    // 0x1ea78c: 0x27c20010
    ctx->pc = 0x1ea78cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x1ea790: 0x40202d
    ctx->pc = 0x1ea790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea794: 0xc040742
    ctx->pc = 0x1EA794u;
    SET_GPR_U32(ctx, 31, 0x1EA79Cu);
    ctx->pc = 0x101D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00101D08_0x101d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA79Cu; }
    }
    if (ctx->pc != 0x1EA79Cu) { return; }
    ctx->pc = 0x1EA79Cu;
    // 0x1ea79c: 0xa7c20000
    ctx->pc = 0x1ea79cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ea7a0: 0x87c20000
    ctx->pc = 0x1ea7a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ea7a4: 0x1440000a
    ctx->pc = 0x1EA7A4u;
    {
        const bool branch_taken_0x1ea7a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ea7a4) {
            ctx->pc = 0x1EA7D0u;
            goto label_1ea7d0;
        }
    }
    ctx->pc = 0x1EA7ACu;
    // 0x1ea7ac: 0x87c20000
    ctx->pc = 0x1ea7acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ea7b0: 0x3c040026
    ctx->pc = 0x1ea7b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea7b4: 0x248480e8
    ctx->pc = 0x1ea7b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934760));
    // 0x1ea7b8: 0x40282d
    ctx->pc = 0x1ea7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7bc: 0xc045a12
    ctx->pc = 0x1EA7BCu;
    SET_GPR_U32(ctx, 31, 0x1EA7C4u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7C4u; }
    }
    if (ctx->pc != 0x1EA7C4u) { return; }
    ctx->pc = 0x1EA7C4u;
    // 0x1ea7c4: 0x2402ffff
    ctx->pc = 0x1ea7c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea7c8: 0x1000008e
    ctx->pc = 0x1EA7C8u;
    {
        const bool branch_taken_0x1ea7c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea7c8) {
            ctx->pc = 0x1EAA04u;
            goto label_1eaa04;
        }
    }
    ctx->pc = 0x1EA7D0u;
label_1ea7d0:
    // 0x1ea7d0: 0x93c20017
    ctx->pc = 0x1ea7d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 23)));
    // 0x1ea7d4: 0x21102
    ctx->pc = 0x1ea7d4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea7d8: 0x304300ff
    ctx->pc = 0x1ea7d8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea7dc: 0x60102d
    ctx->pc = 0x1ea7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7e0: 0x21080
    ctx->pc = 0x1ea7e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea7e4: 0x431021
    ctx->pc = 0x1ea7e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea7e8: 0x21840
    ctx->pc = 0x1ea7e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea7ec: 0x93c20017
    ctx->pc = 0x1ea7ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 23)));
    // 0x1ea7f0: 0x3042000f
    ctx->pc = 0x1ea7f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea7f4: 0x304200ff
    ctx->pc = 0x1ea7f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea7f8: 0x621021
    ctx->pc = 0x1ea7f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea7fc: 0xafc20020
    ctx->pc = 0x1ea7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1ea800: 0x93c20016
    ctx->pc = 0x1ea800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x1ea804: 0x21102
    ctx->pc = 0x1ea804u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea808: 0x304300ff
    ctx->pc = 0x1ea808u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea80c: 0x60102d
    ctx->pc = 0x1ea80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea810: 0x21080
    ctx->pc = 0x1ea810u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea814: 0x431021
    ctx->pc = 0x1ea814u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea818: 0x21840
    ctx->pc = 0x1ea818u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea81c: 0x93c20016
    ctx->pc = 0x1ea81cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x1ea820: 0x3042000f
    ctx->pc = 0x1ea820u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea824: 0x304200ff
    ctx->pc = 0x1ea824u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea828: 0x621021
    ctx->pc = 0x1ea828u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea82c: 0xafc20024
    ctx->pc = 0x1ea82cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x1ea830: 0x93c20015
    ctx->pc = 0x1ea830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 21)));
    // 0x1ea834: 0x21102
    ctx->pc = 0x1ea834u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea838: 0x304300ff
    ctx->pc = 0x1ea838u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea83c: 0x60102d
    ctx->pc = 0x1ea83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea840: 0x21080
    ctx->pc = 0x1ea840u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea844: 0x431021
    ctx->pc = 0x1ea844u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea848: 0x21840
    ctx->pc = 0x1ea848u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea84c: 0x93c20015
    ctx->pc = 0x1ea84cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 21)));
    // 0x1ea850: 0x3042000f
    ctx->pc = 0x1ea850u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea854: 0x304200ff
    ctx->pc = 0x1ea854u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea858: 0x621021
    ctx->pc = 0x1ea858u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea85c: 0xafc20028
    ctx->pc = 0x1ea85cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 2));
    // 0x1ea860: 0x93c20013
    ctx->pc = 0x1ea860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x1ea864: 0x21102
    ctx->pc = 0x1ea864u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea868: 0x304300ff
    ctx->pc = 0x1ea868u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea86c: 0x60102d
    ctx->pc = 0x1ea86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea870: 0x21080
    ctx->pc = 0x1ea870u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea874: 0x431021
    ctx->pc = 0x1ea874u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea878: 0x21840
    ctx->pc = 0x1ea878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea87c: 0x93c20013
    ctx->pc = 0x1ea87cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x1ea880: 0x3042000f
    ctx->pc = 0x1ea880u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea884: 0x304200ff
    ctx->pc = 0x1ea884u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea888: 0x621021
    ctx->pc = 0x1ea888u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea88c: 0xafc2002c
    ctx->pc = 0x1ea88cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
    // 0x1ea890: 0x93c20012
    ctx->pc = 0x1ea890u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x1ea894: 0x21102
    ctx->pc = 0x1ea894u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea898: 0x304300ff
    ctx->pc = 0x1ea898u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea89c: 0x60102d
    ctx->pc = 0x1ea89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8a0: 0x21080
    ctx->pc = 0x1ea8a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea8a4: 0x431021
    ctx->pc = 0x1ea8a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea8a8: 0x21840
    ctx->pc = 0x1ea8a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea8ac: 0x93c20012
    ctx->pc = 0x1ea8acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x1ea8b0: 0x3042000f
    ctx->pc = 0x1ea8b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea8b4: 0x304200ff
    ctx->pc = 0x1ea8b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea8b8: 0x621021
    ctx->pc = 0x1ea8b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea8bc: 0xafc20030
    ctx->pc = 0x1ea8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x1ea8c0: 0x93c20011
    ctx->pc = 0x1ea8c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x1ea8c4: 0x21102
    ctx->pc = 0x1ea8c4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 4));
    // 0x1ea8c8: 0x304300ff
    ctx->pc = 0x1ea8c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea8cc: 0x60102d
    ctx->pc = 0x1ea8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8d0: 0x21080
    ctx->pc = 0x1ea8d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea8d4: 0x431021
    ctx->pc = 0x1ea8d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea8d8: 0x21840
    ctx->pc = 0x1ea8d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ea8dc: 0x93c20011
    ctx->pc = 0x1ea8dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x1ea8e0: 0x3042000f
    ctx->pc = 0x1ea8e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x1ea8e4: 0x304200ff
    ctx->pc = 0x1ea8e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x1ea8e8: 0x621021
    ctx->pc = 0x1ea8e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea8ec: 0xafc20034
    ctx->pc = 0x1ea8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x1ea8f0: 0x8fc20020
    ctx->pc = 0x1ea8f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea8f4: 0x2c420046
    ctx->pc = 0x1ea8f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 70));
    // 0x1ea8f8: 0x10400006
    ctx->pc = 0x1EA8F8u;
    {
        const bool branch_taken_0x1ea8f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea8f8) {
            ctx->pc = 0x1EA914u;
            goto label_1ea914;
        }
    }
    ctx->pc = 0x1EA900u;
    // 0x1ea900: 0x8fc20020
    ctx->pc = 0x1ea900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea904: 0x244207d0
    ctx->pc = 0x1ea904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2000));
    // 0x1ea908: 0xafc20020
    ctx->pc = 0x1ea908u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x1ea90c: 0x10000004
    ctx->pc = 0x1EA90Cu;
    {
        const bool branch_taken_0x1ea90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea90c) {
            ctx->pc = 0x1EA920u;
            goto label_1ea920;
        }
    }
    ctx->pc = 0x1EA914u;
label_1ea914:
    // 0x1ea914: 0x8fc20020
    ctx->pc = 0x1ea914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea918: 0x2442076c
    ctx->pc = 0x1ea918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1900));
    // 0x1ea91c: 0xafc20020
    ctx->pc = 0x1ea91cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_1ea920:
    // 0x1ea920: 0x27c20040
    ctx->pc = 0x1ea920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 64));
    // 0x1ea924: 0x40202d
    ctx->pc = 0x1ea924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea928: 0x282d
    ctx->pc = 0x1ea928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea92c: 0xc07a80b
    ctx->pc = 0x1EA92Cu;
    SET_GPR_U32(ctx, 31, 0x1EA934u);
    ctx->pc = 0x1EA02Cu;
    goto label_1ea02c;
    ctx->pc = 0x1EA934u;
label_1ea934:
    // 0x1ea934: 0x3c040026
    ctx->pc = 0x1ea934u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea938: 0x24848100
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934784));
    // 0x1ea93c: 0x8fc50020
    ctx->pc = 0x1ea93cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1ea940: 0x8fc60024
    ctx->pc = 0x1ea940u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x1ea944: 0x8fc70028
    ctx->pc = 0x1ea944u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1ea948: 0x8fc8002c
    ctx->pc = 0x1ea948u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x1ea94c: 0x8fc90030
    ctx->pc = 0x1ea94cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1ea950: 0x8fca0034
    ctx->pc = 0x1ea950u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x1ea954: 0xc045a12
    ctx->pc = 0x1EA954u;
    SET_GPR_U32(ctx, 31, 0x1EA95Cu);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA95Cu; }
    }
    if (ctx->pc != 0x1EA95Cu) { return; }
    ctx->pc = 0x1EA95Cu;
    // 0x1ea95c: 0x3c040026
    ctx->pc = 0x1ea95cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea960: 0x24848130
    ctx->pc = 0x1ea960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934832));
    // 0x1ea964: 0xdfc50040
    ctx->pc = 0x1ea964u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1ea968: 0xdfc60048
    ctx->pc = 0x1ea968u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1ea96c: 0xc045a12
    ctx->pc = 0x1EA96Cu;
    SET_GPR_U32(ctx, 31, 0x1EA974u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA974u; }
    }
    if (ctx->pc != 0x1EA974u) { return; }
    ctx->pc = 0x1EA974u;
    // 0x1ea974: 0x27c20040
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 64));
    // 0x1ea978: 0x40202d
    ctx->pc = 0x1ea978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea97c: 0x282d
    ctx->pc = 0x1ea97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea980: 0xc07a80b
    ctx->pc = 0x1EA980u;
    SET_GPR_U32(ctx, 31, 0x1EA988u);
    ctx->pc = 0x1EA02Cu;
    goto label_1ea02c;
    ctx->pc = 0x1EA988u;
label_1ea988:
    // 0x1ea988: 0x3c040026
    ctx->pc = 0x1ea988u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea98c: 0x24848130
    ctx->pc = 0x1ea98cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934832));
    // 0x1ea990: 0xdfc50040
    ctx->pc = 0x1ea990u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1ea994: 0xdfc60048
    ctx->pc = 0x1ea994u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1ea998: 0xc045a12
    ctx->pc = 0x1EA998u;
    SET_GPR_U32(ctx, 31, 0x1EA9A0u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9A0u; }
    }
    if (ctx->pc != 0x1EA9A0u) { return; }
    ctx->pc = 0x1EA9A0u;
    // 0x1ea9a0: 0x3c040026
    ctx->pc = 0x1ea9a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea9a4: 0x24848158
    ctx->pc = 0x1ea9a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934872));
    // 0x1ea9a8: 0xc045a12
    ctx->pc = 0x1EA9A8u;
    SET_GPR_U32(ctx, 31, 0x1EA9B0u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9B0u; }
    }
    if (ctx->pc != 0x1EA9B0u) { return; }
    ctx->pc = 0x1EA9B0u;
    // 0x1ea9b0: 0xafc00050
    ctx->pc = 0x1ea9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 80), GPR_U32(ctx, 0));
    // 0x1ea9b4: 0x3c021dcd
    ctx->pc = 0x1ea9b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)7629 << 16));
    // 0x1ea9b8: 0x34426500
    ctx->pc = 0x1ea9b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 25856));
    // 0x1ea9bc: 0xafc20054
    ctx->pc = 0x1ea9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 2));
    // 0x1ea9c0: 0x27c20050
    ctx->pc = 0x1ea9c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 80));
    // 0x1ea9c4: 0x40202d
    ctx->pc = 0x1ea9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9c8: 0x282d
    ctx->pc = 0x1ea9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9cc: 0xc079fb4
    ctx->pc = 0x1EA9CCu;
    SET_GPR_U32(ctx, 31, 0x1EA9D4u);
    ctx->pc = 0x1E7ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7ED0_0x1e7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA9D4u; }
    }
    if (ctx->pc != 0x1EA9D4u) { return; }
    ctx->pc = 0x1EA9D4u;
    // 0x1ea9d4: 0x27c20040
    ctx->pc = 0x1ea9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 64));
    // 0x1ea9d8: 0x40202d
    ctx->pc = 0x1ea9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9dc: 0x282d
    ctx->pc = 0x1ea9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea9e0: 0xc07a80b
    ctx->pc = 0x1EA9E0u;
    SET_GPR_U32(ctx, 31, 0x1EA9E8u);
    ctx->pc = 0x1EA02Cu;
    goto label_1ea02c;
    ctx->pc = 0x1EA9E8u;
label_1ea9e8:
    // 0x1ea9e8: 0x3c040026
    ctx->pc = 0x1ea9e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x1ea9ec: 0x24848130
    ctx->pc = 0x1ea9ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934832));
    // 0x1ea9f0: 0xdfc50040
    ctx->pc = 0x1ea9f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1ea9f4: 0xdfc60048
    ctx->pc = 0x1ea9f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 30), 72)));
    // 0x1ea9f8: 0xc045a12
    ctx->pc = 0x1EA9F8u;
    SET_GPR_U32(ctx, 31, 0x1EAA00u);
    ctx->pc = 0x116848u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00116848_0x116848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA00u; }
    }
    if (ctx->pc != 0x1EAA00u) { return; }
    ctx->pc = 0x1EAA00u;
    // 0x1eaa00: 0x102d
    ctx->pc = 0x1eaa00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaa04:
    // 0x1eaa04: 0x3c0e82d
    ctx->pc = 0x1eaa04u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaa08: 0xdfbe0060
    ctx->pc = 0x1eaa08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eaa0c: 0xdfbf0068
    ctx->pc = 0x1eaa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eaa10: 0x27bd0070
    ctx->pc = 0x1eaa10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1eaa14: 0x3e00008
    ctx->pc = 0x1EAA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA02Cu: goto label_1ea02c;
            case 0x1EA10Cu: goto label_1ea10c;
            case 0x1EA250u: goto label_1ea250;
            case 0x1EA25Cu: goto label_1ea25c;
            case 0x1EA2B4u: goto label_1ea2b4;
            case 0x1EA324u: goto label_1ea324;
            case 0x1EA3D4u: goto label_1ea3d4;
            case 0x1EA414u: goto label_1ea414;
            case 0x1EA440u: goto label_1ea440;
            case 0x1EA470u: goto label_1ea470;
            case 0x1EA48Cu: goto label_1ea48c;
            case 0x1EA51Cu: goto label_1ea51c;
            case 0x1EA540u: goto label_1ea540;
            case 0x1EA5C4u: goto label_1ea5c4;
            case 0x1EA708u: goto label_1ea708;
            case 0x1EA714u: goto label_1ea714;
            case 0x1EA728u: goto label_1ea728;
            case 0x1EA7D0u: goto label_1ea7d0;
            case 0x1EA914u: goto label_1ea914;
            case 0x1EA920u: goto label_1ea920;
            case 0x1EA934u: goto label_1ea934;
            case 0x1EA988u: goto label_1ea988;
            case 0x1EA9E8u: goto label_1ea9e8;
            case 0x1EAA04u: goto label_1eaa04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EAA1Cu;
}
