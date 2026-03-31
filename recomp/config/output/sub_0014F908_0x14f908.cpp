#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0014F908
// Address: 0x14f908 - 0x14ff50
void sub_0014F908_0x14f908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x14f908u;

    // 0x14f908: 0x27bdffa0
    ctx->pc = 0x14f908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f90c: 0xffb30028
    ctx->pc = 0x14f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14f910: 0x982d
    ctx->pc = 0x14f910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f914: 0xffb40030
    ctx->pc = 0x14f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14f918: 0xffb50038
    ctx->pc = 0x14f918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x14f91c: 0xc0a82d
    ctx->pc = 0x14f91cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f920: 0xffb60040
    ctx->pc = 0x14f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x14f924: 0xa0b02d
    ctx->pc = 0x14f924u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f928: 0xffb70048
    ctx->pc = 0x14f928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x14f92c: 0xe0b82d
    ctx->pc = 0x14f92cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f930: 0xffbe0050
    ctx->pc = 0x14f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x14f934: 0xffb00010
    ctx->pc = 0x14f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f938: 0xffb10018
    ctx->pc = 0x14f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f93c: 0xffb20020
    ctx->pc = 0x14f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14f940: 0xffbf0058
    ctx->pc = 0x14f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x14f944: 0xc052490
    ctx->pc = 0x14F944u;
    SET_GPR_U32(ctx, 31, 0x14F94Cu);
    ctx->pc = 0x14F948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x149240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00149240_0x149240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F94Cu; }
    }
    if (ctx->pc != 0x14F94Cu) { return; }
    ctx->pc = 0x14F94Cu;
    // 0x14f94c: 0x40f02d
    ctx->pc = 0x14f94cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f950: 0x26e20800
    ctx->pc = 0x14f950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 2048));
    // 0x14f954: 0x26e31000
    ctx->pc = 0x14f954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 4096));
    // 0x14f958: 0x3414ff80
    ctx->pc = 0x14f958u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 0), 65408));
    // 0x14f95c: 0x14a3bc
    ctx->pc = 0x14f95cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 14));
    // 0x14f960: 0xafa20004
    ctx->pc = 0x14f960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14f964: 0xafa30008
    ctx->pc = 0x14f964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_14f968:
    // 0x14f968: 0x2664fff0
    ctx->pc = 0x14f968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x14f96c: 0xc0448ba
    ctx->pc = 0x14F96Cu;
    SET_GPR_U32(ctx, 31, 0x14F974u);
    ctx->pc = 0x14F970u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 3));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F974u; }
    }
    if (ctx->pc != 0x14F974u) { return; }
    ctx->pc = 0x14F974u;
    // 0x14f974: 0x3c010024
    ctx->pc = 0x14f974u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14f978: 0xdc25e2b0
    ctx->pc = 0x14f978u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959792)));
    // 0x14f97c: 0x8fa30008
    ctx->pc = 0x14f97cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f980: 0x40202d
    ctx->pc = 0x14f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f984: 0x8fa20004
    ctx->pc = 0x14f984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14f988: 0x2039021
    ctx->pc = 0x14f988u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14f98c: 0xc04476c
    ctx->pc = 0x14F98Cu;
    SET_GPR_U32(ctx, 31, 0x14F994u);
    ctx->pc = 0x14F990u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F994u; }
    }
    if (ctx->pc != 0x14F994u) { return; }
    ctx->pc = 0x14F994u;
    // 0x14f994: 0x40202d
    ctx->pc = 0x14f994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f998: 0x280282d
    ctx->pc = 0x14f998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f99c: 0xc04473c
    ctx->pc = 0x14F99Cu;
    SET_GPR_U32(ctx, 31, 0x14F9A4u);
    ctx->pc = 0x14F9A0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9A4u; }
    }
    if (ctx->pc != 0x14F9A4u) { return; }
    ctx->pc = 0x14F9A4u;
    // 0x14f9a4: 0x40202d
    ctx->pc = 0x14f9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9a8: 0xc0448e8
    ctx->pc = 0x14F9A8u;
    SET_GPR_U32(ctx, 31, 0x14F9B0u);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9B0u; }
    }
    if (ctx->pc != 0x14F9B0u) { return; }
    ctx->pc = 0x14F9B0u;
    // 0x14f9b0: 0x2664ff80
    ctx->pc = 0x14f9b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967168));
    // 0x14f9b4: 0x21400
    ctx->pc = 0x14f9b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x14f9b8: 0x26730001
    ctx->pc = 0x14f9b8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x14f9bc: 0x21403
    ctx->pc = 0x14f9bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x14f9c0: 0xa6020000
    ctx->pc = 0x14f9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14f9c4: 0xa6020004
    ctx->pc = 0x14f9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x14f9c8: 0xc0448ba
    ctx->pc = 0x14F9C8u;
    SET_GPR_U32(ctx, 31, 0x14F9D0u);
    ctx->pc = 0x14F9CCu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9D0u; }
    }
    if (ctx->pc != 0x14F9D0u) { return; }
    ctx->pc = 0x14F9D0u;
    // 0x14f9d0: 0x3c010024
    ctx->pc = 0x14f9d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14f9d4: 0xdc25e2b8
    ctx->pc = 0x14f9d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959800)));
    // 0x14f9d8: 0x40802d
    ctx->pc = 0x14f9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9dc: 0xc04476c
    ctx->pc = 0x14F9DCu;
    SET_GPR_U32(ctx, 31, 0x14F9E4u);
    ctx->pc = 0x14F9E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9E4u; }
    }
    if (ctx->pc != 0x14F9E4u) { return; }
    ctx->pc = 0x14F9E4u;
    // 0x14f9e4: 0x280282d
    ctx->pc = 0x14f9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9e8: 0xc04473c
    ctx->pc = 0x14F9E8u;
    SET_GPR_U32(ctx, 31, 0x14F9F0u);
    ctx->pc = 0x14F9ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9F0u; }
    }
    if (ctx->pc != 0x14F9F0u) { return; }
    ctx->pc = 0x14F9F0u;
    // 0x14f9f0: 0xc0448e8
    ctx->pc = 0x14F9F0u;
    SET_GPR_U32(ctx, 31, 0x14F9F8u);
    ctx->pc = 0x14F9F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F9F8u; }
    }
    if (ctx->pc != 0x14F9F8u) { return; }
    ctx->pc = 0x14F9F8u;
    // 0x14f9f8: 0x200202d
    ctx->pc = 0x14f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9fc: 0x3c010024
    ctx->pc = 0x14f9fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fa00: 0xdc25e2c0
    ctx->pc = 0x14fa00u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959808)));
    // 0x14fa04: 0xc04476c
    ctx->pc = 0x14FA04u;
    SET_GPR_U32(ctx, 31, 0x14FA0Cu);
    ctx->pc = 0x14FA08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA0Cu; }
    }
    if (ctx->pc != 0x14FA0Cu) { return; }
    ctx->pc = 0x14FA0Cu;
    // 0x14fa0c: 0x280282d
    ctx->pc = 0x14fa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa10: 0xc04473c
    ctx->pc = 0x14FA10u;
    SET_GPR_U32(ctx, 31, 0x14FA18u);
    ctx->pc = 0x14FA14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA18u; }
    }
    if (ctx->pc != 0x14FA18u) { return; }
    ctx->pc = 0x14FA18u;
    // 0x14fa18: 0xc0448e8
    ctx->pc = 0x14FA18u;
    SET_GPR_U32(ctx, 31, 0x14FA20u);
    ctx->pc = 0x14FA1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA20u; }
    }
    if (ctx->pc != 0x14FA20u) { return; }
    ctx->pc = 0x14FA20u;
    // 0x14fa20: 0xa6200000
    ctx->pc = 0x14fa20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fa24: 0xa6220002
    ctx->pc = 0x14fa24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fa28: 0x200202d
    ctx->pc = 0x14fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa2c: 0xa6200006
    ctx->pc = 0x14fa2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fa30: 0x3c010024
    ctx->pc = 0x14fa30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fa34: 0xdc25e2c8
    ctx->pc = 0x14fa34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959816)));
    // 0x14fa38: 0xc04476c
    ctx->pc = 0x14FA38u;
    SET_GPR_U32(ctx, 31, 0x14FA40u);
    ctx->pc = 0x14FA3Cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA40u; }
    }
    if (ctx->pc != 0x14FA40u) { return; }
    ctx->pc = 0x14FA40u;
    // 0x14fa40: 0x280282d
    ctx->pc = 0x14fa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa44: 0xc04473c
    ctx->pc = 0x14FA44u;
    SET_GPR_U32(ctx, 31, 0x14FA4Cu);
    ctx->pc = 0x14FA48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA4Cu; }
    }
    if (ctx->pc != 0x14FA4Cu) { return; }
    ctx->pc = 0x14FA4Cu;
    // 0x14fa4c: 0xc0448e8
    ctx->pc = 0x14FA4Cu;
    SET_GPR_U32(ctx, 31, 0x14FA54u);
    ctx->pc = 0x14FA50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA54u; }
    }
    if (ctx->pc != 0x14FA54u) { return; }
    ctx->pc = 0x14FA54u;
    // 0x14fa54: 0x200202d
    ctx->pc = 0x14fa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa58: 0x3c010024
    ctx->pc = 0x14fa58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fa5c: 0xdc25e2d0
    ctx->pc = 0x14fa5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959824)));
    // 0x14fa60: 0xc04476c
    ctx->pc = 0x14FA60u;
    SET_GPR_U32(ctx, 31, 0x14FA68u);
    ctx->pc = 0x14FA64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA68u; }
    }
    if (ctx->pc != 0x14FA68u) { return; }
    ctx->pc = 0x14FA68u;
    // 0x14fa68: 0x280282d
    ctx->pc = 0x14fa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa6c: 0xc04473c
    ctx->pc = 0x14FA6Cu;
    SET_GPR_U32(ctx, 31, 0x14FA74u);
    ctx->pc = 0x14FA70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA74u; }
    }
    if (ctx->pc != 0x14FA74u) { return; }
    ctx->pc = 0x14FA74u;
    // 0x14fa74: 0xc0448e8
    ctx->pc = 0x14FA74u;
    SET_GPR_U32(ctx, 31, 0x14FA7Cu);
    ctx->pc = 0x14FA78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA7Cu; }
    }
    if (ctx->pc != 0x14FA7Cu) { return; }
    ctx->pc = 0x14FA7Cu;
    // 0x14fa7c: 0xa6400006
    ctx->pc = 0x14fa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fa80: 0x2a630100
    ctx->pc = 0x14fa80u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 256));
    // 0x14fa84: 0x1460ffb8
    ctx->pc = 0x14FA84u;
    {
        const bool branch_taken_0x14fa84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14FA88u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x14fa84) {
            ctx->pc = 0x14F968u;
            goto label_14f968;
        }
    }
    ctx->pc = 0x14FA8Cu;
    // 0x14fa8c: 0x3c0202d
    ctx->pc = 0x14fa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa90: 0xc0448ba
    ctx->pc = 0x14FA90u;
    SET_GPR_U32(ctx, 31, 0x14FA98u);
    ctx->pc = 0x14FA94u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FA98u; }
    }
    if (ctx->pc != 0x14FA98u) { return; }
    ctx->pc = 0x14FA98u;
    // 0x14fa98: 0x40802d
    ctx->pc = 0x14fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa9c: 0xc0448ba
    ctx->pc = 0x14FA9Cu;
    SET_GPR_U32(ctx, 31, 0x14FAA4u);
    ctx->pc = 0x14FAA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAA4u; }
    }
    if (ctx->pc != 0x14FAA4u) { return; }
    ctx->pc = 0x14FAA4u;
    // 0x14faa4: 0x40282d
    ctx->pc = 0x14faa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14faa8: 0xc04480e
    ctx->pc = 0x14FAA8u;
    SET_GPR_U32(ctx, 31, 0x14FAB0u);
    ctx->pc = 0x14FAACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00112038_0x112038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAB0u; }
    }
    if (ctx->pc != 0x14FAB0u) { return; }
    ctx->pc = 0x14FAB0u;
    // 0x14fab0: 0x8fa30000
    ctx->pc = 0x14fab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fab4: 0x40902d
    ctx->pc = 0x14fab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fab8: 0x24020001
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fabc: 0x14620020
    ctx->pc = 0x14FABCu;
    {
        const bool branch_taken_0x14fabc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x14FAC0u;
        SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 30), 6));
        if (branch_taken_0x14fabc) {
            ctx->pc = 0x14FB40u;
            goto label_14fb40;
        }
    }
    ctx->pc = 0x14FAC4u;
    // 0x14fac4: 0x1ea180
    ctx->pc = 0x14fac4u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 30), 6));
    // 0x14fac8: 0x26f00006
    ctx->pc = 0x14fac8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 23), 6));
    // 0x14facc: 0x982d
    ctx->pc = 0x14faccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fad0: 0x241100ff
    ctx->pc = 0x14fad0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 255));
    // 0x14fad4: 0x0
    ctx->pc = 0x14fad4u;
    // NOP
label_14fad8:
    // 0x14fad8: 0x276102a
    ctx->pc = 0x14fad8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 22)));
    // 0x14fadc: 0x10400004
    ctx->pc = 0x14FADCu;
    {
        const bool branch_taken_0x14fadc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FAE0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 19)));
        if (branch_taken_0x14fadc) {
            ctx->pc = 0x14FAF0u;
            goto label_14faf0;
        }
    }
    ctx->pc = 0x14FAE4u;
    // 0x14fae4: 0x1000000f
    ctx->pc = 0x14FAE4u;
    {
        const bool branch_taken_0x14fae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FAE8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 20));
        if (branch_taken_0x14fae4) {
            ctx->pc = 0x14FB24u;
            goto label_14fb24;
        }
    }
    ctx->pc = 0x14FAECu;
    // 0x14faec: 0x0
    ctx->pc = 0x14faecu;
    // NOP
label_14faf0:
    // 0x14faf0: 0x10400003
    ctx->pc = 0x14FAF0u;
    {
        const bool branch_taken_0x14faf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14faf0) {
            ctx->pc = 0x14FB00u;
            goto label_14fb00;
        }
    }
    ctx->pc = 0x14FAF8u;
    // 0x14faf8: 0x1000000a
    ctx->pc = 0x14FAF8u;
    {
        const bool branch_taken_0x14faf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FAFCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x14faf8) {
            ctx->pc = 0x14FB24u;
            goto label_14fb24;
        }
    }
    ctx->pc = 0x14FB00u;
label_14fb00:
    // 0x14fb00: 0xc0448ba
    ctx->pc = 0x14FB00u;
    SET_GPR_U32(ctx, 31, 0x14FB08u);
    ctx->pc = 0x14FB04u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB08u; }
    }
    if (ctx->pc != 0x14FB08u) { return; }
    ctx->pc = 0x14FB08u;
    // 0x14fb08: 0x240282d
    ctx->pc = 0x14fb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb0c: 0xc04476c
    ctx->pc = 0x14FB0Cu;
    SET_GPR_U32(ctx, 31, 0x14FB14u);
    ctx->pc = 0x14FB10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB14u; }
    }
    if (ctx->pc != 0x14FB14u) { return; }
    ctx->pc = 0x14FB14u;
    // 0x14fb14: 0xc0448e8
    ctx->pc = 0x14FB14u;
    SET_GPR_U32(ctx, 31, 0x14FB1Cu);
    ctx->pc = 0x14FB18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB1Cu; }
    }
    if (ctx->pc != 0x14FB1Cu) { return; }
    ctx->pc = 0x14FB1Cu;
    // 0x14fb1c: 0x21180
    ctx->pc = 0x14fb1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x14fb20: 0xa6020000
    ctx->pc = 0x14fb20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_14fb24:
    // 0x14fb24: 0x26730001
    ctx->pc = 0x14fb24u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x14fb28: 0x26100008
    ctx->pc = 0x14fb28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x14fb2c: 0x2a620100
    ctx->pc = 0x14fb2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 256));
    // 0x14fb30: 0x1440ffe9
    ctx->pc = 0x14FB30u;
    {
        const bool branch_taken_0x14fb30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14FB34u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x14fb30) {
            ctx->pc = 0x14FAD8u;
            goto label_14fad8;
        }
    }
    ctx->pc = 0x14FB38u;
    // 0x14fb38: 0x1000001b
    ctx->pc = 0x14FB38u;
    {
        const bool branch_taken_0x14fb38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FB3Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x14fb38) {
            ctx->pc = 0x14FBA8u;
            goto label_14fba8;
        }
    }
    ctx->pc = 0x14FB40u;
label_14fb40:
    // 0x14fb40: 0x26f00006
    ctx->pc = 0x14fb40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 23), 6));
    // 0x14fb44: 0x982d
    ctx->pc = 0x14fb44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fb48:
    // 0x14fb48: 0x276102a
    ctx->pc = 0x14fb48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 22)));
    // 0x14fb4c: 0x10400004
    ctx->pc = 0x14FB4Cu;
    {
        const bool branch_taken_0x14fb4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FB50u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 19)));
        if (branch_taken_0x14fb4c) {
            ctx->pc = 0x14FB60u;
            goto label_14fb60;
        }
    }
    ctx->pc = 0x14FB54u;
    // 0x14fb54: 0x1000000f
    ctx->pc = 0x14FB54u;
    {
        const bool branch_taken_0x14fb54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FB58u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x14fb54) {
            ctx->pc = 0x14FB94u;
            goto label_14fb94;
        }
    }
    ctx->pc = 0x14FB5Cu;
    // 0x14fb5c: 0x0
    ctx->pc = 0x14fb5cu;
    // NOP
label_14fb60:
    // 0x14fb60: 0x10400003
    ctx->pc = 0x14FB60u;
    {
        const bool branch_taken_0x14fb60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14fb60) {
            ctx->pc = 0x14FB70u;
            goto label_14fb70;
        }
    }
    ctx->pc = 0x14FB68u;
    // 0x14fb68: 0x1000000a
    ctx->pc = 0x14FB68u;
    {
        const bool branch_taken_0x14fb68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FB6Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
        if (branch_taken_0x14fb68) {
            ctx->pc = 0x14FB94u;
            goto label_14fb94;
        }
    }
    ctx->pc = 0x14FB70u;
label_14fb70:
    // 0x14fb70: 0xc0448ba
    ctx->pc = 0x14FB70u;
    SET_GPR_U32(ctx, 31, 0x14FB78u);
    ctx->pc = 0x14FB74u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB78u; }
    }
    if (ctx->pc != 0x14FB78u) { return; }
    ctx->pc = 0x14FB78u;
    // 0x14fb78: 0x240282d
    ctx->pc = 0x14fb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb7c: 0xc04476c
    ctx->pc = 0x14FB7Cu;
    SET_GPR_U32(ctx, 31, 0x14FB84u);
    ctx->pc = 0x14FB80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB84u; }
    }
    if (ctx->pc != 0x14FB84u) { return; }
    ctx->pc = 0x14FB84u;
    // 0x14fb84: 0xc0448e8
    ctx->pc = 0x14FB84u;
    SET_GPR_U32(ctx, 31, 0x14FB8Cu);
    ctx->pc = 0x14FB88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB8Cu; }
    }
    if (ctx->pc != 0x14FB8Cu) { return; }
    ctx->pc = 0x14FB8Cu;
    // 0x14fb8c: 0x21180
    ctx->pc = 0x14fb8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x14fb90: 0xa6020000
    ctx->pc = 0x14fb90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_14fb94:
    // 0x14fb94: 0x26730001
    ctx->pc = 0x14fb94u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x14fb98: 0x2a620100
    ctx->pc = 0x14fb98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 256));
    // 0x14fb9c: 0x1440ffea
    ctx->pc = 0x14FB9Cu;
    {
        const bool branch_taken_0x14fb9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x14FBA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x14fb9c) {
            ctx->pc = 0x14FB48u;
            goto label_14fb48;
        }
    }
    ctx->pc = 0x14FBA4u;
    // 0x14fba4: 0xdfb00010
    ctx->pc = 0x14fba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14fba8:
    // 0x14fba8: 0xdfb10018
    ctx->pc = 0x14fba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14fbac: 0xdfb20020
    ctx->pc = 0x14fbacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fbb0: 0xdfb30028
    ctx->pc = 0x14fbb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14fbb4: 0xdfb40030
    ctx->pc = 0x14fbb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fbb8: 0xdfb50038
    ctx->pc = 0x14fbb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14fbbc: 0xdfb60040
    ctx->pc = 0x14fbbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fbc0: 0xdfb70048
    ctx->pc = 0x14fbc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14fbc4: 0xdfbe0050
    ctx->pc = 0x14fbc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fbc8: 0xdfbf0058
    ctx->pc = 0x14fbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x14fbcc: 0x3e00008
    ctx->pc = 0x14FBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FBD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F968u: goto label_14f968;
            case 0x14FAD8u: goto label_14fad8;
            case 0x14FAF0u: goto label_14faf0;
            case 0x14FB00u: goto label_14fb00;
            case 0x14FB24u: goto label_14fb24;
            case 0x14FB40u: goto label_14fb40;
            case 0x14FB48u: goto label_14fb48;
            case 0x14FB60u: goto label_14fb60;
            case 0x14FB70u: goto label_14fb70;
            case 0x14FB94u: goto label_14fb94;
            case 0x14FBA8u: goto label_14fba8;
            case 0x14FC28u: goto label_14fc28;
            case 0x14FD08u: goto label_14fd08;
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD48u: goto label_14fd48;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FDE8u: goto label_14fde8;
            case 0x14FDF8u: goto label_14fdf8;
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FBD4u;
    // 0x14fbd4: 0x0
    ctx->pc = 0x14fbd4u;
    // NOP
    // 0x14fbd8: 0x27bdffb0
    ctx->pc = 0x14fbd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14fbdc: 0xffb30018
    ctx->pc = 0x14fbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14fbe0: 0x982d
    ctx->pc = 0x14fbe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbe4: 0xffb40020
    ctx->pc = 0x14fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14fbe8: 0xffb50028
    ctx->pc = 0x14fbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14fbec: 0x80a82d
    ctx->pc = 0x14fbecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbf0: 0xffb60030
    ctx->pc = 0x14fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14fbf4: 0x26b61000
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 21), 4096));
    // 0x14fbf8: 0xffb70038
    ctx->pc = 0x14fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x14fbfc: 0xffbe0040
    ctx->pc = 0x14fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x14fc00: 0xffb00000
    ctx->pc = 0x14fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14fc04: 0xffb10008
    ctx->pc = 0x14fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14fc08: 0xffb20010
    ctx->pc = 0x14fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14fc0c: 0xffbf0048
    ctx->pc = 0x14fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x14fc10: 0xc052490
    ctx->pc = 0x14FC10u;
    SET_GPR_U32(ctx, 31, 0x14FC18u);
    ctx->pc = 0x14FC14u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 21), 2048));
    ctx->pc = 0x149240u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00149240_0x149240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC18u; }
    }
    if (ctx->pc != 0x14FC18u) { return; }
    ctx->pc = 0x14FC18u;
    // 0x14fc18: 0x3414ff80
    ctx->pc = 0x14fc18u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 0), 65408));
    // 0x14fc1c: 0x14a3bc
    ctx->pc = 0x14fc1cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 14));
    // 0x14fc20: 0x40f02d
    ctx->pc = 0x14fc20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc24: 0x0
    ctx->pc = 0x14fc24u;
    // NOP
label_14fc28:
    // 0x14fc28: 0x2664ff80
    ctx->pc = 0x14fc28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967168));
    // 0x14fc2c: 0xc0448ba
    ctx->pc = 0x14FC2Cu;
    SET_GPR_U32(ctx, 31, 0x14FC34u);
    ctx->pc = 0x14FC30u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 3));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC34u; }
    }
    if (ctx->pc != 0x14FC34u) { return; }
    ctx->pc = 0x14FC34u;
    // 0x14fc34: 0x3c010024
    ctx->pc = 0x14fc34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fc38: 0xdc25e2d8
    ctx->pc = 0x14fc38u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959832)));
    // 0x14fc3c: 0x40902d
    ctx->pc = 0x14fc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc40: 0x2378021
    ctx->pc = 0x14fc40u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x14fc44: 0x240202d
    ctx->pc = 0x14fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc48: 0xc04476c
    ctx->pc = 0x14FC48u;
    SET_GPR_U32(ctx, 31, 0x14FC50u);
    ctx->pc = 0x14FC4Cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC50u; }
    }
    if (ctx->pc != 0x14FC50u) { return; }
    ctx->pc = 0x14FC50u;
    // 0x14fc50: 0x280282d
    ctx->pc = 0x14fc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc54: 0x40202d
    ctx->pc = 0x14fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc58: 0xc04473c
    ctx->pc = 0x14FC58u;
    SET_GPR_U32(ctx, 31, 0x14FC60u);
    ctx->pc = 0x14FC5Cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC60u; }
    }
    if (ctx->pc != 0x14FC60u) { return; }
    ctx->pc = 0x14FC60u;
    // 0x14fc60: 0x40202d
    ctx->pc = 0x14fc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc64: 0xc0448e8
    ctx->pc = 0x14FC64u;
    SET_GPR_U32(ctx, 31, 0x14FC6Cu);
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC6Cu; }
    }
    if (ctx->pc != 0x14FC6Cu) { return; }
    ctx->pc = 0x14FC6Cu;
    // 0x14fc6c: 0x240202d
    ctx->pc = 0x14fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc70: 0x3c010024
    ctx->pc = 0x14fc70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fc74: 0xdc25e2e0
    ctx->pc = 0x14fc74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959840)));
    // 0x14fc78: 0xc04476c
    ctx->pc = 0x14FC78u;
    SET_GPR_U32(ctx, 31, 0x14FC80u);
    ctx->pc = 0x14FC7Cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC80u; }
    }
    if (ctx->pc != 0x14FC80u) { return; }
    ctx->pc = 0x14FC80u;
    // 0x14fc80: 0x280282d
    ctx->pc = 0x14fc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc84: 0xc04473c
    ctx->pc = 0x14FC84u;
    SET_GPR_U32(ctx, 31, 0x14FC8Cu);
    ctx->pc = 0x14FC88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC8Cu; }
    }
    if (ctx->pc != 0x14FC8Cu) { return; }
    ctx->pc = 0x14FC8Cu;
    // 0x14fc8c: 0xc0448e8
    ctx->pc = 0x14FC8Cu;
    SET_GPR_U32(ctx, 31, 0x14FC94u);
    ctx->pc = 0x14FC90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC94u; }
    }
    if (ctx->pc != 0x14FC94u) { return; }
    ctx->pc = 0x14FC94u;
    // 0x14fc94: 0xa6000000
    ctx->pc = 0x14fc94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fc98: 0xa6020002
    ctx->pc = 0x14fc98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fc9c: 0x240202d
    ctx->pc = 0x14fc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fca0: 0xa6000006
    ctx->pc = 0x14fca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fca4: 0x3c010024
    ctx->pc = 0x14fca4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fca8: 0xdc25e2e8
    ctx->pc = 0x14fca8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959848)));
    // 0x14fcac: 0xc04476c
    ctx->pc = 0x14FCACu;
    SET_GPR_U32(ctx, 31, 0x14FCB4u);
    ctx->pc = 0x14FCB0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCB4u; }
    }
    if (ctx->pc != 0x14FCB4u) { return; }
    ctx->pc = 0x14FCB4u;
    // 0x14fcb4: 0x280282d
    ctx->pc = 0x14fcb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcb8: 0xc04473c
    ctx->pc = 0x14FCB8u;
    SET_GPR_U32(ctx, 31, 0x14FCC0u);
    ctx->pc = 0x14FCBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCC0u; }
    }
    if (ctx->pc != 0x14FCC0u) { return; }
    ctx->pc = 0x14FCC0u;
    // 0x14fcc0: 0xc0448e8
    ctx->pc = 0x14FCC0u;
    SET_GPR_U32(ctx, 31, 0x14FCC8u);
    ctx->pc = 0x14FCC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCC8u; }
    }
    if (ctx->pc != 0x14FCC8u) { return; }
    ctx->pc = 0x14FCC8u;
    // 0x14fcc8: 0x240202d
    ctx->pc = 0x14fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fccc: 0x3c010024
    ctx->pc = 0x14fcccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fcd0: 0xdc25e2f0
    ctx->pc = 0x14fcd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959856)));
    // 0x14fcd4: 0xc04476c
    ctx->pc = 0x14FCD4u;
    SET_GPR_U32(ctx, 31, 0x14FCDCu);
    ctx->pc = 0x14FCD8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCDCu; }
    }
    if (ctx->pc != 0x14FCDCu) { return; }
    ctx->pc = 0x14FCDCu;
    // 0x14fcdc: 0x280282d
    ctx->pc = 0x14fcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fce0: 0xc04473c
    ctx->pc = 0x14FCE0u;
    SET_GPR_U32(ctx, 31, 0x14FCE8u);
    ctx->pc = 0x14FCE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCE8u; }
    }
    if (ctx->pc != 0x14FCE8u) { return; }
    ctx->pc = 0x14FCE8u;
    // 0x14fce8: 0xc0448e8
    ctx->pc = 0x14FCE8u;
    SET_GPR_U32(ctx, 31, 0x14FCF0u);
    ctx->pc = 0x14FCECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCF0u; }
    }
    if (ctx->pc != 0x14FCF0u) { return; }
    ctx->pc = 0x14FCF0u;
    // 0x14fcf0: 0xa6200006
    ctx->pc = 0x14fcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fcf4: 0x2a630100
    ctx->pc = 0x14fcf4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 256));
    // 0x14fcf8: 0x1460ffcb
    ctx->pc = 0x14FCF8u;
    {
        const bool branch_taken_0x14fcf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14FCFCu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x14fcf8) {
            ctx->pc = 0x14FC28u;
            goto label_14fc28;
        }
    }
    ctx->pc = 0x14FD00u;
    // 0x14fd00: 0x2a0102d
    ctx->pc = 0x14fd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd04: 0x2413000f
    ctx->pc = 0x14fd04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 15));
label_14fd08:
    // 0x14fd08: 0x2673ffff
    ctx->pc = 0x14fd08u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fd0c: 0xa4400004
    ctx->pc = 0x14fd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd10: 0xa4400002
    ctx->pc = 0x14fd10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd14: 0xa4400000
    ctx->pc = 0x14fd14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd18: 0xa4400006
    ctx->pc = 0x14fd18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x14fd1c: 0x661fffa
    ctx->pc = 0x14FD1Cu;
    {
        const bool branch_taken_0x14fd1c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FD20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
        if (branch_taken_0x14fd1c) {
            ctx->pc = 0x14FD08u;
            goto label_14fd08;
        }
    }
    ctx->pc = 0x14FD24u;
    // 0x14fd24: 0x1ea140
    ctx->pc = 0x14fd24u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 30), 5));
    // 0x14fd28: 0x24120070
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 112));
    // 0x14fd2c: 0x26b00080
    ctx->pc = 0x14fd2cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 128));
    // 0x14fd30: 0x882d
    ctx->pc = 0x14fd30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd34: 0x2413006f
    ctx->pc = 0x14fd34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 111));
label_14fd38:
    // 0x14fd38: 0x232001a
    ctx->pc = 0x14fd38u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x14fd3c: 0x26310100
    ctx->pc = 0x14fd3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 256));
    // 0x14fd40: 0x52400001
    ctx->pc = 0x14FD40u;
    {
        const bool branch_taken_0x14fd40 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x14fd40) {
            ctx->pc = 0x14FD44u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x14FD48u;
            goto label_14fd48;
        }
    }
    ctx->pc = 0x14FD48u;
label_14fd48:
    // 0x14fd48: 0x2673ffff
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fd4c: 0x2012
    ctx->pc = 0x14fd4cu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x14fd50: 0xc0448ba
    ctx->pc = 0x14FD50u;
    SET_GPR_U32(ctx, 31, 0x14FD58u);
    ctx->pc = 0x14FD54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD58u; }
    }
    if (ctx->pc != 0x14FD58u) { return; }
    ctx->pc = 0x14FD58u;
    // 0x14fd58: 0x3c010024
    ctx->pc = 0x14fd58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fd5c: 0xdc25e2f8
    ctx->pc = 0x14fd5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959864)));
    // 0x14fd60: 0xc04476c
    ctx->pc = 0x14FD60u;
    SET_GPR_U32(ctx, 31, 0x14FD68u);
    ctx->pc = 0x14FD64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD68u; }
    }
    if (ctx->pc != 0x14FD68u) { return; }
    ctx->pc = 0x14FD68u;
    // 0x14fd68: 0x3405ff80
    ctx->pc = 0x14fd68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x14fd6c: 0x52bbc
    ctx->pc = 0x14fd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x14fd70: 0xc04473c
    ctx->pc = 0x14FD70u;
    SET_GPR_U32(ctx, 31, 0x14FD78u);
    ctx->pc = 0x14FD74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD78u; }
    }
    if (ctx->pc != 0x14FD78u) { return; }
    ctx->pc = 0x14FD78u;
    // 0x14fd78: 0xc0448e8
    ctx->pc = 0x14FD78u;
    SET_GPR_U32(ctx, 31, 0x14FD80u);
    ctx->pc = 0x14FD7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FD80u; }
    }
    if (ctx->pc != 0x14FD80u) { return; }
    ctx->pc = 0x14FD80u;
    // 0x14fd80: 0xa6140006
    ctx->pc = 0x14fd80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x14fd84: 0x21400
    ctx->pc = 0x14fd84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x14fd88: 0x21403
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x14fd8c: 0xa6020000
    ctx->pc = 0x14fd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fd90: 0xa6020004
    ctx->pc = 0x14fd90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fd94: 0xa6020002
    ctx->pc = 0x14fd94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fd98: 0x661ffe7
    ctx->pc = 0x14FD98u;
    {
        const bool branch_taken_0x14fd98 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FD9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x14fd98) {
            ctx->pc = 0x14FD38u;
            goto label_14fd38;
        }
    }
    ctx->pc = 0x14FDA0u;
    // 0x14fda0: 0x1ea180
    ctx->pc = 0x14fda0u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 30), 6));
    // 0x14fda4: 0x2402458d
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17805));
    // 0x14fda8: 0x280202d
    ctx->pc = 0x14fda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdac: 0x26a30400
    ctx->pc = 0x14fdacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 1024));
    // 0x14fdb0: 0x2413000f
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 15));
    // 0x14fdb4: 0x0
    ctx->pc = 0x14fdb4u;
    // NOP
label_14fdb8:
    // 0x14fdb8: 0x2673ffff
    ctx->pc = 0x14fdb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fdbc: 0xa4620004
    ctx->pc = 0x14fdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fdc0: 0xa4620002
    ctx->pc = 0x14fdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fdc4: 0xa4620000
    ctx->pc = 0x14fdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fdc8: 0xa4640006
    ctx->pc = 0x14fdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x14fdcc: 0x661fffa
    ctx->pc = 0x14FDCCu;
    {
        const bool branch_taken_0x14fdcc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FDD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x14fdcc) {
            ctx->pc = 0x14FDB8u;
            goto label_14fdb8;
        }
    }
    ctx->pc = 0x14FDD4u;
    // 0x14fdd4: 0x26b00480
    ctx->pc = 0x14fdd4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 1152));
    // 0x14fdd8: 0x241500ff
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 255));
    // 0x14fddc: 0x24120070
    ctx->pc = 0x14fddcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 112));
    // 0x14fde0: 0x882d
    ctx->pc = 0x14fde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fde4: 0x2413006f
    ctx->pc = 0x14fde4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 111));
label_14fde8:
    // 0x14fde8: 0x232001a
    ctx->pc = 0x14fde8u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x14fdec: 0x26310100
    ctx->pc = 0x14fdecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 256));
    // 0x14fdf0: 0x52400001
    ctx->pc = 0x14FDF0u;
    {
        const bool branch_taken_0x14fdf0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x14fdf0) {
            ctx->pc = 0x14FDF4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x14FDF8u;
            goto label_14fdf8;
        }
    }
    ctx->pc = 0x14FDF8u;
label_14fdf8:
    // 0x14fdf8: 0x2673ffff
    ctx->pc = 0x14fdf8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14fdfc: 0x2012
    ctx->pc = 0x14fdfcu;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x14fe00: 0x2a42023
    ctx->pc = 0x14fe00u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x14fe04: 0xc0448ba
    ctx->pc = 0x14FE04u;
    SET_GPR_U32(ctx, 31, 0x14FE0Cu);
    ctx->pc = 0x14FE08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->pc = 0x1122E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001122E8_0x1122e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE0Cu; }
    }
    if (ctx->pc != 0x14FE0Cu) { return; }
    ctx->pc = 0x14FE0Cu;
    // 0x14fe0c: 0x3c010024
    ctx->pc = 0x14fe0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x14fe10: 0xdc25e300
    ctx->pc = 0x14fe10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959872)));
    // 0x14fe14: 0xc04476c
    ctx->pc = 0x14FE14u;
    SET_GPR_U32(ctx, 31, 0x14FE1Cu);
    ctx->pc = 0x14FE18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111DB0_0x111db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE1Cu; }
    }
    if (ctx->pc != 0x14FE1Cu) { return; }
    ctx->pc = 0x14FE1Cu;
    // 0x14fe1c: 0x3405ff80
    ctx->pc = 0x14fe1cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x14fe20: 0x52bbc
    ctx->pc = 0x14fe20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x14fe24: 0xc04473c
    ctx->pc = 0x14FE24u;
    SET_GPR_U32(ctx, 31, 0x14FE2Cu);
    ctx->pc = 0x14FE28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00111CF0_0x111cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE2Cu; }
    }
    if (ctx->pc != 0x14FE2Cu) { return; }
    ctx->pc = 0x14FE2Cu;
    // 0x14fe2c: 0xc0448e8
    ctx->pc = 0x14FE2Cu;
    SET_GPR_U32(ctx, 31, 0x14FE34u);
    ctx->pc = 0x14FE30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1123A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001123A0_0x1123a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE34u; }
    }
    if (ctx->pc != 0x14FE34u) { return; }
    ctx->pc = 0x14FE34u;
    // 0x14fe34: 0xa6140006
    ctx->pc = 0x14fe34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 20));
    // 0x14fe38: 0x21400
    ctx->pc = 0x14fe38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x14fe3c: 0x21403
    ctx->pc = 0x14fe3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x14fe40: 0xa6020000
    ctx->pc = 0x14fe40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe44: 0xa6020004
    ctx->pc = 0x14fe44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe48: 0xa6020002
    ctx->pc = 0x14fe48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe4c: 0x661ffe6
    ctx->pc = 0x14FE4Cu;
    {
        const bool branch_taken_0x14fe4c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x14FE50u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
        if (branch_taken_0x14fe4c) {
            ctx->pc = 0x14FDE8u;
            goto label_14fde8;
        }
    }
    ctx->pc = 0x14FE54u;
    // 0x14fe54: 0xdfb00000
    ctx->pc = 0x14fe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fe58: 0xdfb10008
    ctx->pc = 0x14fe58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14fe5c: 0xdfb20010
    ctx->pc = 0x14fe5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fe60: 0xdfb30018
    ctx->pc = 0x14fe60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14fe64: 0xdfb40020
    ctx->pc = 0x14fe64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fe68: 0xdfb50028
    ctx->pc = 0x14fe68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14fe6c: 0xdfb60030
    ctx->pc = 0x14fe6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe70: 0xdfb70038
    ctx->pc = 0x14fe70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14fe74: 0xdfbe0040
    ctx->pc = 0x14fe74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fe78: 0xdfbf0048
    ctx->pc = 0x14fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14fe7c: 0x3e00008
    ctx->pc = 0x14FE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FE80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F968u: goto label_14f968;
            case 0x14FAD8u: goto label_14fad8;
            case 0x14FAF0u: goto label_14faf0;
            case 0x14FB00u: goto label_14fb00;
            case 0x14FB24u: goto label_14fb24;
            case 0x14FB40u: goto label_14fb40;
            case 0x14FB48u: goto label_14fb48;
            case 0x14FB60u: goto label_14fb60;
            case 0x14FB70u: goto label_14fb70;
            case 0x14FB94u: goto label_14fb94;
            case 0x14FBA8u: goto label_14fba8;
            case 0x14FC28u: goto label_14fc28;
            case 0x14FD08u: goto label_14fd08;
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD48u: goto label_14fd48;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FDE8u: goto label_14fde8;
            case 0x14FDF8u: goto label_14fdf8;
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FE84u;
    // 0x14fe84: 0x0
    ctx->pc = 0x14fe84u;
    // NOP
    // 0x14fe88: 0x3e00008
    ctx->pc = 0x14FE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F968u: goto label_14f968;
            case 0x14FAD8u: goto label_14fad8;
            case 0x14FAF0u: goto label_14faf0;
            case 0x14FB00u: goto label_14fb00;
            case 0x14FB24u: goto label_14fb24;
            case 0x14FB40u: goto label_14fb40;
            case 0x14FB48u: goto label_14fb48;
            case 0x14FB60u: goto label_14fb60;
            case 0x14FB70u: goto label_14fb70;
            case 0x14FB94u: goto label_14fb94;
            case 0x14FBA8u: goto label_14fba8;
            case 0x14FC28u: goto label_14fc28;
            case 0x14FD08u: goto label_14fd08;
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD48u: goto label_14fd48;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FDE8u: goto label_14fde8;
            case 0x14FDF8u: goto label_14fdf8;
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FE90u;
    // 0x14fe90: 0x3c030023
    ctx->pc = 0x14fe90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x14fe94: 0x2463c008
    ctx->pc = 0x14fe94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950920));
    // 0x14fe98: 0x831025
    ctx->pc = 0x14fe98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14fe9c: 0x30420007
    ctx->pc = 0x14fe9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x14fea0: 0x10400019
    ctx->pc = 0x14FEA0u;
    {
        const bool branch_taken_0x14fea0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14FEA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 6144));
        if (branch_taken_0x14fea0) {
            ctx->pc = 0x14FF08u;
            goto label_14ff08;
        }
    }
    ctx->pc = 0x14FEA8u;
label_14fea8:
    // 0x14fea8: 0x68650007
    ctx->pc = 0x14fea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14feac: 0x6c650000
    ctx->pc = 0x14feacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14feb0: 0x6866000f
    ctx->pc = 0x14feb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14feb4: 0x6c660008
    ctx->pc = 0x14feb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14feb8: 0x68670017
    ctx->pc = 0x14feb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14febc: 0x6c670010
    ctx->pc = 0x14febcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14fec0: 0x6868001f
    ctx->pc = 0x14fec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x14fec4: 0x6c680018
    ctx->pc = 0x14fec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x14fec8: 0xb0850007
    ctx->pc = 0x14fec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fecc: 0xb4850000
    ctx->pc = 0x14feccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fed0: 0xb086000f
    ctx->pc = 0x14fed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fed4: 0xb4860008
    ctx->pc = 0x14fed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fed8: 0xb0870017
    ctx->pc = 0x14fed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fedc: 0xb4870010
    ctx->pc = 0x14fedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fee0: 0xb088001f
    ctx->pc = 0x14fee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fee4: 0xb4880018
    ctx->pc = 0x14fee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14fee8: 0x24630020
    ctx->pc = 0x14fee8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x14feec: 0x0
    ctx->pc = 0x14feecu;
    // NOP
    // 0x14fef0: 0x0
    ctx->pc = 0x14fef0u;
    // NOP
    // 0x14fef4: 0x1462ffec
    ctx->pc = 0x14FEF4u;
    {
        const bool branch_taken_0x14fef4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x14FEF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x14fef4) {
            ctx->pc = 0x14FEA8u;
            goto label_14fea8;
        }
    }
    ctx->pc = 0x14FEFCu;
    // 0x14fefc: 0x3e00008
    ctx->pc = 0x14FEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F968u: goto label_14f968;
            case 0x14FAD8u: goto label_14fad8;
            case 0x14FAF0u: goto label_14faf0;
            case 0x14FB00u: goto label_14fb00;
            case 0x14FB24u: goto label_14fb24;
            case 0x14FB40u: goto label_14fb40;
            case 0x14FB48u: goto label_14fb48;
            case 0x14FB60u: goto label_14fb60;
            case 0x14FB70u: goto label_14fb70;
            case 0x14FB94u: goto label_14fb94;
            case 0x14FBA8u: goto label_14fba8;
            case 0x14FC28u: goto label_14fc28;
            case 0x14FD08u: goto label_14fd08;
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD48u: goto label_14fd48;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FDE8u: goto label_14fde8;
            case 0x14FDF8u: goto label_14fdf8;
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FF04u;
    // 0x14ff04: 0x0
    ctx->pc = 0x14ff04u;
    // NOP
label_14ff08:
    // 0x14ff08: 0xdc650000
    ctx->pc = 0x14ff08u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ff0c: 0xdc660008
    ctx->pc = 0x14ff0cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14ff10: 0xdc670010
    ctx->pc = 0x14ff10u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14ff14: 0xdc680018
    ctx->pc = 0x14ff14u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x14ff18: 0xfc850000
    ctx->pc = 0x14ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x14ff1c: 0xfc860008
    ctx->pc = 0x14ff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x14ff20: 0xfc870010
    ctx->pc = 0x14ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x14ff24: 0xfc880018
    ctx->pc = 0x14ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x14ff28: 0x24630020
    ctx->pc = 0x14ff28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x14ff2c: 0x0
    ctx->pc = 0x14ff2cu;
    // NOP
    // 0x14ff30: 0x0
    ctx->pc = 0x14ff30u;
    // NOP
    // 0x14ff34: 0x1462fff4
    ctx->pc = 0x14FF34u;
    {
        const bool branch_taken_0x14ff34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x14FF38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x14ff34) {
            ctx->pc = 0x14FF08u;
            goto label_14ff08;
        }
    }
    ctx->pc = 0x14FF3Cu;
    // 0x14ff3c: 0x3e00008
    ctx->pc = 0x14FF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F968u: goto label_14f968;
            case 0x14FAD8u: goto label_14fad8;
            case 0x14FAF0u: goto label_14faf0;
            case 0x14FB00u: goto label_14fb00;
            case 0x14FB24u: goto label_14fb24;
            case 0x14FB40u: goto label_14fb40;
            case 0x14FB48u: goto label_14fb48;
            case 0x14FB60u: goto label_14fb60;
            case 0x14FB70u: goto label_14fb70;
            case 0x14FB94u: goto label_14fb94;
            case 0x14FBA8u: goto label_14fba8;
            case 0x14FC28u: goto label_14fc28;
            case 0x14FD08u: goto label_14fd08;
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD48u: goto label_14fd48;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FDE8u: goto label_14fde8;
            case 0x14FDF8u: goto label_14fdf8;
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FF44u;
    // 0x14ff44: 0x0
    ctx->pc = 0x14ff44u;
    // NOP
    // 0x14ff48: 0x3e00008
    ctx->pc = 0x14FF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F968u: goto label_14f968;
            case 0x14FAD8u: goto label_14fad8;
            case 0x14FAF0u: goto label_14faf0;
            case 0x14FB00u: goto label_14fb00;
            case 0x14FB24u: goto label_14fb24;
            case 0x14FB40u: goto label_14fb40;
            case 0x14FB48u: goto label_14fb48;
            case 0x14FB60u: goto label_14fb60;
            case 0x14FB70u: goto label_14fb70;
            case 0x14FB94u: goto label_14fb94;
            case 0x14FBA8u: goto label_14fba8;
            case 0x14FC28u: goto label_14fc28;
            case 0x14FD08u: goto label_14fd08;
            case 0x14FD38u: goto label_14fd38;
            case 0x14FD48u: goto label_14fd48;
            case 0x14FDB8u: goto label_14fdb8;
            case 0x14FDE8u: goto label_14fde8;
            case 0x14FDF8u: goto label_14fdf8;
            case 0x14FEA8u: goto label_14fea8;
            case 0x14FF08u: goto label_14ff08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FF50u;
}
