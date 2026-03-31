#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001658D0
// Address: 0x1658d0 - 0x165a88
void sub_001658D0_0x1658d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1658d0u;

    // 0x1658d0: 0x27bdffa0
    ctx->pc = 0x1658d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1658d4: 0x3c020027
    ctx->pc = 0x1658d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1658d8: 0xffb20050
    ctx->pc = 0x1658d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1658dc: 0x80902d
    ctx->pc = 0x1658dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1658e0: 0xffb00040
    ctx->pc = 0x1658e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1658e4: 0x24480750
    ctx->pc = 0x1658e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 1872));
    // 0x1658e8: 0xffb10048
    ctx->pc = 0x1658e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1658ec: 0xa0382d
    ctx->pc = 0x1658ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1658f0: 0xffbf0058
    ctx->pc = 0x1658f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1658f4: 0x3c05ff00
    ctx->pc = 0x1658f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1658f8: 0x8d020008
    ctx->pc = 0x1658f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1658fc: 0x10400004
    ctx->pc = 0x1658FCu;
    {
        const bool branch_taken_0x1658fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x165900u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3078));
        if (branch_taken_0x1658fc) {
            ctx->pc = 0x165910u;
            goto label_165910;
        }
    }
    ctx->pc = 0x165904u;
    // 0x165904: 0x8d020018
    ctx->pc = 0x165904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x165908: 0x14400005
    ctx->pc = 0x165908u;
    {
        const bool branch_taken_0x165908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16590Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)22 << 16));
        if (branch_taken_0x165908) {
            ctx->pc = 0x165920u;
            goto label_165920;
        }
    }
    ctx->pc = 0x165910u;
label_165910:
    // 0x165910: 0xc05a704
    ctx->pc = 0x165910u;
    SET_GPR_U32(ctx, 31, 0x165918u);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165918u; }
    }
    if (ctx->pc != 0x165918u) { return; }
    ctx->pc = 0x165918u;
    // 0x165918: 0x10000055
    ctx->pc = 0x165918u;
    {
        const bool branch_taken_0x165918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16591Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x165918) {
            ctx->pc = 0x165A70u;
            goto label_165a70;
        }
    }
    ctx->pc = 0x165920u;
label_165920:
    // 0x165920: 0x2406ffff
    ctx->pc = 0x165920u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x165924: 0x24030001
    ctx->pc = 0x165924u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x165928: 0x24424c28
    ctx->pc = 0x165928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19496));
    // 0x16592c: 0x69050007
    ctx->pc = 0x16592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x165930: 0x6d050000
    ctx->pc = 0x165930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x165934: 0x6909000f
    ctx->pc = 0x165934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x165938: 0x6d090008
    ctx->pc = 0x165938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x16593c: 0x690a0017
    ctx->pc = 0x16593cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x165940: 0x6d0a0010
    ctx->pc = 0x165940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x165944: 0x8d0b0018
    ctx->pc = 0x165944u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x165948: 0xb0e5000f
    ctx->pc = 0x165948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16594c: 0xb4e50008
    ctx->pc = 0x16594cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x165950: 0xb0e90017
    ctx->pc = 0x165950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x165954: 0xb4e90010
    ctx->pc = 0x165954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x165958: 0xb0ea001f
    ctx->pc = 0x165958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16595c: 0xb4ea0018
    ctx->pc = 0x16595cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x165960: 0xaceb0020
    ctx->pc = 0x165960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 11));
    // 0x165964: 0x2405003f
    ctx->pc = 0x165964u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 63));
    // 0x165968: 0xace30028
    ctx->pc = 0x165968u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x16596c: 0x3c11000f
    ctx->pc = 0x16596cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)15 << 16));
    // 0x165970: 0x36314240
    ctx->pc = 0x165970u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 16960));
    // 0x165974: 0xace2003c
    ctx->pc = 0x165974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
    // 0x165978: 0x26500f60
    ctx->pc = 0x165978u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 3936));
    // 0x16597c: 0xace60044
    ctx->pc = 0x16597cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    // 0x165980: 0xace00048
    ctx->pc = 0x165980u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x165984: 0xace00000
    ctx->pc = 0x165984u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x165988: 0xace00004
    ctx->pc = 0x165988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x16598c: 0xace60024
    ctx->pc = 0x16598cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
    // 0x165990: 0xace0002c
    ctx->pc = 0x165990u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x165994: 0xace00030
    ctx->pc = 0x165994u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x165998: 0xace00034
    ctx->pc = 0x165998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x16599c: 0xace00038
    ctx->pc = 0x16599cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x1659a0: 0xc05d58a
    ctx->pc = 0x1659A0u;
    SET_GPR_U32(ctx, 31, 0x1659A8u);
    ctx->pc = 0x1659A4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659A8u; }
    }
    if (ctx->pc != 0x1659A8u) { return; }
    ctx->pc = 0x1659A8u;
    // 0x1659a8: 0x240202d
    ctx->pc = 0x1659a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659ac: 0x24050040
    ctx->pc = 0x1659acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1659b0: 0xffa20000
    ctx->pc = 0x1659b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1659b4: 0xc05d58a
    ctx->pc = 0x1659B4u;
    SET_GPR_U32(ctx, 31, 0x1659BCu);
    ctx->pc = 0x1659B8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659BCu; }
    }
    if (ctx->pc != 0x1659BCu) { return; }
    ctx->pc = 0x1659BCu;
    // 0x1659bc: 0x240202d
    ctx->pc = 0x1659bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659c0: 0x24050041
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 65));
    // 0x1659c4: 0xffa20010
    ctx->pc = 0x1659c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1659c8: 0xc05d58a
    ctx->pc = 0x1659C8u;
    SET_GPR_U32(ctx, 31, 0x1659D0u);
    ctx->pc = 0x1659CCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659D0u; }
    }
    if (ctx->pc != 0x1659D0u) { return; }
    ctx->pc = 0x1659D0u;
    // 0x1659d0: 0x24050042
    ctx->pc = 0x1659d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 66));
    // 0x1659d4: 0x240202d
    ctx->pc = 0x1659d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659d8: 0xffa20020
    ctx->pc = 0x1659d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x1659dc: 0xc05d58a
    ctx->pc = 0x1659DCu;
    SET_GPR_U32(ctx, 31, 0x1659E4u);
    ctx->pc = 0x1659E0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659E4u; }
    }
    if (ctx->pc != 0x1659E4u) { return; }
    ctx->pc = 0x1659E4u;
    // 0x1659e4: 0x200202d
    ctx->pc = 0x1659e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659e8: 0xffa20030
    ctx->pc = 0x1659e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x1659ec: 0xc05df2c
    ctx->pc = 0x1659ECu;
    SET_GPR_U32(ctx, 31, 0x1659F4u);
    ctx->pc = 0x1659F0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    ctx->pc = 0x177CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177CB0_0x177cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1659F4u; }
    }
    if (ctx->pc != 0x1659F4u) { return; }
    ctx->pc = 0x1659F4u;
    // 0x1659f4: 0x240202d
    ctx->pc = 0x1659f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659f8: 0xc05d58a
    ctx->pc = 0x1659F8u;
    SET_GPR_U32(ctx, 31, 0x165A00u);
    ctx->pc = 0x1659FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 72));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A00u; }
    }
    if (ctx->pc != 0x165A00u) { return; }
    ctx->pc = 0x165A00u;
    // 0x165a00: 0x200202d
    ctx->pc = 0x165a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a04: 0xc05df74
    ctx->pc = 0x165A04u;
    SET_GPR_U32(ctx, 31, 0x165A0Cu);
    ctx->pc = 0x165A08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DD0_0x177dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A0Cu; }
    }
    if (ctx->pc != 0x165A0Cu) { return; }
    ctx->pc = 0x165A0Cu;
    // 0x165a0c: 0x200202d
    ctx->pc = 0x165a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a10: 0xc05df76
    ctx->pc = 0x165A10u;
    SET_GPR_U32(ctx, 31, 0x165A18u);
    ctx->pc = 0x165A14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DD8_0x177dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A18u; }
    }
    if (ctx->pc != 0x165A18u) { return; }
    ctx->pc = 0x165A18u;
    // 0x165a18: 0x200202d
    ctx->pc = 0x165a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a1c: 0xc05df7c
    ctx->pc = 0x165A1Cu;
    SET_GPR_U32(ctx, 31, 0x165A24u);
    ctx->pc = 0x165A20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x177DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177DF0_0x177df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A24u; }
    }
    if (ctx->pc != 0x165A24u) { return; }
    ctx->pc = 0x165A24u;
    // 0x165a24: 0x200202d
    ctx->pc = 0x165a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a28: 0xc05df82
    ctx->pc = 0x165A28u;
    SET_GPR_U32(ctx, 31, 0x165A30u);
    ctx->pc = 0x165A2Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x177E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E08_0x177e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A30u; }
    }
    if (ctx->pc != 0x165A30u) { return; }
    ctx->pc = 0x165A30u;
    // 0x165a30: 0x200202d
    ctx->pc = 0x165a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a34: 0xc05df88
    ctx->pc = 0x165A34u;
    SET_GPR_U32(ctx, 31, 0x165A3Cu);
    ctx->pc = 0x165A38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x177E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E20_0x177e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A3Cu; }
    }
    if (ctx->pc != 0x165A3Cu) { return; }
    ctx->pc = 0x165A3Cu;
    // 0x165a3c: 0x240202d
    ctx->pc = 0x165a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a40: 0xc05d58a
    ctx->pc = 0x165A40u;
    SET_GPR_U32(ctx, 31, 0x165A48u);
    ctx->pc = 0x165A44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 62));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A48u; }
    }
    if (ctx->pc != 0x165A48u) { return; }
    ctx->pc = 0x165A48u;
    // 0x165a48: 0x200202d
    ctx->pc = 0x165a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a4c: 0xc05df8e
    ctx->pc = 0x165A4Cu;
    SET_GPR_U32(ctx, 31, 0x165A54u);
    ctx->pc = 0x165A50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177E38_0x177e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A54u; }
    }
    if (ctx->pc != 0x165A54u) { return; }
    ctx->pc = 0x165A54u;
    // 0x165a54: 0x240202d
    ctx->pc = 0x165a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a58: 0xc05d58a
    ctx->pc = 0x165A58u;
    SET_GPR_U32(ctx, 31, 0x165A60u);
    ctx->pc = 0x165A5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 61));
    ctx->pc = 0x175628u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00175628_0x175628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A60u; }
    }
    if (ctx->pc != 0x165A60u) { return; }
    ctx->pc = 0x165A60u;
    // 0x165a60: 0xc05f9de
    ctx->pc = 0x165A60u;
    SET_GPR_U32(ctx, 31, 0x165A68u);
    ctx->pc = 0x165A64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E778u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E778_0x17e778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165A68u; }
    }
    if (ctx->pc != 0x165A68u) { return; }
    ctx->pc = 0x165A68u;
    // 0x165a68: 0x102d
    ctx->pc = 0x165a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a6c: 0xdfb00040
    ctx->pc = 0x165a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_165a70:
    // 0x165a70: 0xdfb10048
    ctx->pc = 0x165a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165a74: 0xdfb20050
    ctx->pc = 0x165a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165a78: 0xdfbf0058
    ctx->pc = 0x165a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165a7c: 0x3e00008
    ctx->pc = 0x165A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165A80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165910u: goto label_165910;
            case 0x165920u: goto label_165920;
            case 0x165A70u: goto label_165a70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x165A84u;
    // 0x165a84: 0x0
    ctx->pc = 0x165a84u;
    // NOP
}
