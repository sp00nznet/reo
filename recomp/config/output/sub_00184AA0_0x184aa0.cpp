#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00184AA0
// Address: 0x184aa0 - 0x184c60
void sub_00184AA0_0x184aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x184aa0u;

    // 0x184aa0: 0x27bdffb0
    ctx->pc = 0x184aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x184aa4: 0xffb30028
    ctx->pc = 0x184aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x184aa8: 0x3c137fff
    ctx->pc = 0x184aa8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)32767 << 16));
    // 0x184aac: 0xffb50038
    ctx->pc = 0x184aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x184ab0: 0x3c158101
    ctx->pc = 0x184ab0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)33025 << 16));
    // 0x184ab4: 0xffbf0048
    ctx->pc = 0x184ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x184ab8: 0x36b5006f
    ctx->pc = 0x184ab8u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), 111));
    // 0x184abc: 0xafa00000
    ctx->pc = 0x184abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x184ac0: 0x3673ffff
    ctx->pc = 0x184ac0u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 65535));
    // 0x184ac4: 0xffb00010
    ctx->pc = 0x184ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x184ac8: 0xc0802d
    ctx->pc = 0x184ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184acc: 0xffb10018
    ctx->pc = 0x184accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x184ad0: 0xe0882d
    ctx->pc = 0x184ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ad4: 0xffb20020
    ctx->pc = 0x184ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x184ad8: 0x80902d
    ctx->pc = 0x184ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184adc: 0xffb40030
    ctx->pc = 0x184adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x184ae0: 0x2414ffff
    ctx->pc = 0x184ae0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x184ae4: 0xffb60040
    ctx->pc = 0x184ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x184ae8: 0xa0b02d
    ctx->pc = 0x184ae8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184aec: 0x0
    ctx->pc = 0x184aecu;
    // NOP
label_184af0:
    // 0x184af0: 0x2a220002
    ctx->pc = 0x184af0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x184af4: 0x10400042
    ctx->pc = 0x184AF4u;
    {
        const bool branch_taken_0x184af4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184AF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184af4) {
            ctx->pc = 0x184C00u;
            goto label_184c00;
        }
    }
    ctx->pc = 0x184AFCu;
    // 0x184afc: 0x3c140028
    ctx->pc = 0x184afcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)40 << 16));
    // 0x184b00: 0x240202d
    ctx->pc = 0x184b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b04: 0x26936c80
    ctx->pc = 0x184b04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 20), 27776));
    // 0x184b08: 0x200302d
    ctx->pc = 0x184b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b0c: 0x260282d
    ctx->pc = 0x184b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b10: 0xc061d1e
    ctx->pc = 0x184B10u;
    SET_GPR_U32(ctx, 31, 0x184B18u);
    ctx->pc = 0x184B14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187478_0x187478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B18u; }
    }
    if (ctx->pc != 0x184B18u) { return; }
    ctx->pc = 0x184B18u;
    // 0x184b18: 0x14400005
    ctx->pc = 0x184B18u;
    {
        const bool branch_taken_0x184b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184B1Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 9));
        if (branch_taken_0x184b18) {
            ctx->pc = 0x184B30u;
            goto label_184b30;
        }
    }
    ctx->pc = 0x184B20u;
    // 0x184b20: 0x3c028101
    ctx->pc = 0x184b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x184b24: 0x10000044
    ctx->pc = 0x184B24u;
    {
        const bool branch_taken_0x184b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184B28u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x184b24) {
            ctx->pc = 0x184C38u;
            goto label_184c38;
        }
    }
    ctx->pc = 0x184B2Cu;
    // 0x184b2c: 0x0
    ctx->pc = 0x184b2cu;
    // NOP
label_184b30:
    // 0x184b30: 0x2c0282d
    ctx->pc = 0x184b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b34: 0x731821
    ctx->pc = 0x184b34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x184b38: 0xa31025
    ctx->pc = 0x184b38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x184b3c: 0x30420007
    ctx->pc = 0x184b3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x184b40: 0x10400019
    ctx->pc = 0x184B40u;
    {
        const bool branch_taken_0x184b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184B44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 512));
        if (branch_taken_0x184b40) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x184B48u;
label_184b48:
    // 0x184b48: 0x68a40007
    ctx->pc = 0x184b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184b4c: 0x6ca40000
    ctx->pc = 0x184b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184b50: 0x68a6000f
    ctx->pc = 0x184b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184b54: 0x6ca60008
    ctx->pc = 0x184b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184b58: 0x68a70017
    ctx->pc = 0x184b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184b5c: 0x6ca70010
    ctx->pc = 0x184b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184b60: 0x68a8001f
    ctx->pc = 0x184b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x184b64: 0x6ca80018
    ctx->pc = 0x184b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x184b68: 0xb0640007
    ctx->pc = 0x184b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b6c: 0xb4640000
    ctx->pc = 0x184b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b70: 0xb066000f
    ctx->pc = 0x184b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b74: 0xb4660008
    ctx->pc = 0x184b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b78: 0xb0670017
    ctx->pc = 0x184b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b7c: 0xb4670010
    ctx->pc = 0x184b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b80: 0xb068001f
    ctx->pc = 0x184b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b84: 0xb4680018
    ctx->pc = 0x184b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x184b88: 0x24a50020
    ctx->pc = 0x184b88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x184b8c: 0x0
    ctx->pc = 0x184b8cu;
    // NOP
    // 0x184b90: 0x0
    ctx->pc = 0x184b90u;
    // NOP
    // 0x184b94: 0x14a2ffec
    ctx->pc = 0x184B94u;
    {
        const bool branch_taken_0x184b94 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x184B98u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x184b94) {
            ctx->pc = 0x184B48u;
            goto label_184b48;
        }
    }
    ctx->pc = 0x184B9Cu;
    // 0x184b9c: 0x10000010
    ctx->pc = 0x184B9Cu;
    {
        const bool branch_taken_0x184b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184BA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184b9c) {
            ctx->pc = 0x184BE0u;
            goto label_184be0;
        }
    }
    ctx->pc = 0x184BA4u;
    // 0x184ba4: 0x0
    ctx->pc = 0x184ba4u;
    // NOP
label_184ba8:
    // 0x184ba8: 0xdca40000
    ctx->pc = 0x184ba8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184bac: 0xdca60008
    ctx->pc = 0x184bacu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x184bb0: 0xdca70010
    ctx->pc = 0x184bb0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x184bb4: 0xdca80018
    ctx->pc = 0x184bb4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x184bb8: 0xfc640000
    ctx->pc = 0x184bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x184bbc: 0xfc660008
    ctx->pc = 0x184bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x184bc0: 0xfc670010
    ctx->pc = 0x184bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x184bc4: 0xfc680018
    ctx->pc = 0x184bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x184bc8: 0x24a50020
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x184bcc: 0x0
    ctx->pc = 0x184bccu;
    // NOP
    // 0x184bd0: 0x0
    ctx->pc = 0x184bd0u;
    // NOP
    // 0x184bd4: 0x14a2fff4
    ctx->pc = 0x184BD4u;
    {
        const bool branch_taken_0x184bd4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x184BD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
        if (branch_taken_0x184bd4) {
            ctx->pc = 0x184BA8u;
            goto label_184ba8;
        }
    }
    ctx->pc = 0x184BDCu;
    // 0x184bdc: 0x240202d
    ctx->pc = 0x184bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184be0:
    // 0x184be0: 0x26856c80
    ctx->pc = 0x184be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 27776));
    // 0x184be4: 0x200302d
    ctx->pc = 0x184be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184be8: 0xc061d24
    ctx->pc = 0x184BE8u;
    SET_GPR_U32(ctx, 31, 0x184BF0u);
    ctx->pc = 0x184BECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187490_0x187490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BF0u; }
    }
    if (ctx->pc != 0x184BF0u) { return; }
    ctx->pc = 0x184BF0u;
    // 0x184bf0: 0x2a80b
    ctx->pc = 0x184bf0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
    // 0x184bf4: 0x10000010
    ctx->pc = 0x184BF4u;
    {
        const bool branch_taken_0x184bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184BF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184bf4) {
            ctx->pc = 0x184C38u;
            goto label_184c38;
        }
    }
    ctx->pc = 0x184BFCu;
    // 0x184bfc: 0x0
    ctx->pc = 0x184bfcu;
    // NOP
label_184c00:
    // 0x184c00: 0x240202d
    ctx->pc = 0x184c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c04: 0xc060b02
    ctx->pc = 0x184C04u;
    SET_GPR_U32(ctx, 31, 0x184C0Cu);
    ctx->pc = 0x184C08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C0Cu; }
    }
    if (ctx->pc != 0x184C0Cu) { return; }
    ctx->pc = 0x184C0Cu;
    // 0x184c0c: 0x8fa30000
    ctx->pc = 0x184c0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184c10: 0x40802d
    ctx->pc = 0x184c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c14: 0x14600008
    ctx->pc = 0x184C14u;
    {
        const bool branch_taken_0x184c14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x184C18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184c14) {
            ctx->pc = 0x184C38u;
            goto label_184c38;
        }
    }
    ctx->pc = 0x184C1Cu;
    // 0x184c1c: 0x3c028101
    ctx->pc = 0x184c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x184c20: 0x12140005
    ctx->pc = 0x184C20u;
    {
        const bool branch_taken_0x184c20 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 20));
        ctx->pc = 0x184C24u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x184c20) {
            ctx->pc = 0x184C38u;
            goto label_184c38;
        }
    }
    ctx->pc = 0x184C28u;
    // 0x184c28: 0x2138024
    ctx->pc = 0x184c28u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x184c2c: 0x1000ffb0
    ctx->pc = 0x184C2Cu;
    {
        const bool branch_taken_0x184c2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184C30u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967294));
        if (branch_taken_0x184c2c) {
            ctx->pc = 0x184AF0u;
            goto label_184af0;
        }
    }
    ctx->pc = 0x184C34u;
    // 0x184c34: 0x0
    ctx->pc = 0x184c34u;
    // NOP
label_184c38:
    // 0x184c38: 0xdfb00010
    ctx->pc = 0x184c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184c3c: 0xdfb10018
    ctx->pc = 0x184c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184c40: 0xdfb20020
    ctx->pc = 0x184c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184c44: 0xdfb30028
    ctx->pc = 0x184c44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x184c48: 0xdfb40030
    ctx->pc = 0x184c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184c4c: 0xdfb50038
    ctx->pc = 0x184c4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x184c50: 0xdfb60040
    ctx->pc = 0x184c50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184c54: 0xdfbf0048
    ctx->pc = 0x184c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x184c58: 0x3e00008
    ctx->pc = 0x184C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184C5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184AF0u: goto label_184af0;
            case 0x184B30u: goto label_184b30;
            case 0x184B48u: goto label_184b48;
            case 0x184BA8u: goto label_184ba8;
            case 0x184BE0u: goto label_184be0;
            case 0x184C00u: goto label_184c00;
            case 0x184C38u: goto label_184c38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184C60u;
}
