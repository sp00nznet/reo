#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001858C8
// Address: 0x1858c8 - 0x185e40
void sub_001858C8_0x1858c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1858c8u;

    // 0x1858c8: 0x27bdfd00
    ctx->pc = 0x1858c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x1858cc: 0xffb102b8
    ctx->pc = 0x1858ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 17));
    // 0x1858d0: 0xa0882d
    ctx->pc = 0x1858d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858d4: 0xffb202c0
    ctx->pc = 0x1858d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 18));
    // 0x1858d8: 0xe0902d
    ctx->pc = 0x1858d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858dc: 0xffb302c8
    ctx->pc = 0x1858dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 19));
    // 0x1858e0: 0xc0982d
    ctx->pc = 0x1858e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858e4: 0xffb502d8
    ctx->pc = 0x1858e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 21));
    // 0x1858e8: 0x100a82d
    ctx->pc = 0x1858e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858ec: 0xffb702e8
    ctx->pc = 0x1858ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 23));
    // 0x1858f0: 0xffb002b0
    ctx->pc = 0x1858f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 16));
    // 0x1858f4: 0xffb402d0
    ctx->pc = 0x1858f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x1858f8: 0xffb602e0
    ctx->pc = 0x1858f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
    // 0x1858fc: 0xffbe02f0
    ctx->pc = 0x1858fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x185900: 0xffbf02f8
    ctx->pc = 0x185900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 760), GPR_U64(ctx, 31));
    // 0x185904: 0xc062210
    ctx->pc = 0x185904u;
    SET_GPR_U32(ctx, 31, 0x18590Cu);
    ctx->pc = 0x185908u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188840u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18590Cu; }
    }
    if (ctx->pc != 0x18590Cu) { return; }
    ctx->pc = 0x18590Cu;
    // 0x18590c: 0x14400004
    ctx->pc = 0x18590Cu;
    {
        const bool branch_taken_0x18590c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185910u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2200));
        if (branch_taken_0x18590c) {
            ctx->pc = 0x185920u;
            goto label_185920;
        }
    }
    ctx->pc = 0x185914u;
    // 0x185914: 0x3c028101
    ctx->pc = 0x185914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185918: 0x1000013d
    ctx->pc = 0x185918u;
    {
        const bool branch_taken_0x185918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18591Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 19));
        if (branch_taken_0x185918) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185920u;
label_185920:
    // 0x185920: 0x3c028101
    ctx->pc = 0x185920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185924: 0x2e31818
    ctx->pc = 0x185924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x185928: 0x3c040028
    ctx->pc = 0x185928u;
    SET_GPR_U32(ctx, 4, ((uint32_t)40 << 16));
    // 0x18592c: 0x832021
    ctx->pc = 0x18592cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x185930: 0x8c8463d4
    ctx->pc = 0x185930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 25556)));
    // 0x185934: 0x10800136
    ctx->pc = 0x185934u;
    {
        const bool branch_taken_0x185934 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x185938u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x185934) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x18593Cu;
    // 0x18593c: 0x27b00200
    ctx->pc = 0x18593cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 512));
    // 0x185940: 0x220282d
    ctx->pc = 0x185940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185944: 0x2e0202d
    ctx->pc = 0x185944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185948: 0xc0609a2
    ctx->pc = 0x185948u;
    SET_GPR_U32(ctx, 31, 0x185950u);
    ctx->pc = 0x18594Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182688_0x182688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185950u; }
    }
    if (ctx->pc != 0x185950u) { return; }
    ctx->pc = 0x185950u;
    // 0x185950: 0x10400005
    ctx->pc = 0x185950u;
    {
        const bool branch_taken_0x185950 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185954u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x185950) {
            ctx->pc = 0x185968u;
            goto label_185968;
        }
    }
    ctx->pc = 0x185958u;
    // 0x185958: 0xc06089c
    ctx->pc = 0x185958u;
    SET_GPR_U32(ctx, 31, 0x185960u);
    ctx->pc = 0x18595Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182270_0x182270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185960u; }
    }
    if (ctx->pc != 0x185960u) { return; }
    ctx->pc = 0x185960u;
    // 0x185960: 0x14400005
    ctx->pc = 0x185960u;
    {
        const bool branch_taken_0x185960 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185960) {
            ctx->pc = 0x185978u;
            goto label_185978;
        }
    }
    ctx->pc = 0x185968u;
label_185968:
    // 0x185968: 0x3c028101
    ctx->pc = 0x185968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18596c: 0x10000128
    ctx->pc = 0x18596Cu;
    {
        const bool branch_taken_0x18596c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185970u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x18596c) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185974u;
    // 0x185974: 0x0
    ctx->pc = 0x185974u;
    // NOP
label_185978:
    // 0x185978: 0xc060880
    ctx->pc = 0x185978u;
    SET_GPR_U32(ctx, 31, 0x185980u);
    ctx->pc = 0x18597Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182200_0x182200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185980u; }
    }
    if (ctx->pc != 0x185980u) { return; }
    ctx->pc = 0x185980u;
    // 0x185980: 0x14400005
    ctx->pc = 0x185980u;
    {
        const bool branch_taken_0x185980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185984u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185980) {
            ctx->pc = 0x185998u;
            goto label_185998;
        }
    }
    ctx->pc = 0x185988u;
    // 0x185988: 0x3c028101
    ctx->pc = 0x185988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x18598c: 0x10000120
    ctx->pc = 0x18598Cu;
    {
        const bool branch_taken_0x18598c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185990u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 91));
        if (branch_taken_0x18598c) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185994u;
    // 0x185994: 0x0
    ctx->pc = 0x185994u;
    // NOP
label_185998:
    // 0x185998: 0x2e0202d
    ctx->pc = 0x185998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18599c: 0x3a0302d
    ctx->pc = 0x18599cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859a0: 0x27a70290
    ctx->pc = 0x1859a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 656));
    // 0x1859a4: 0xc0610d8
    ctx->pc = 0x1859A4u;
    SET_GPR_U32(ctx, 31, 0x1859ACu);
    ctx->pc = 0x1859A8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 660));
    ctx->pc = 0x184360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184360_0x184360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1859ACu; }
    }
    if (ctx->pc != 0x1859ACu) { return; }
    ctx->pc = 0x1859ACu;
    // 0x1859ac: 0x3c038101
    ctx->pc = 0x1859acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33025 << 16));
    // 0x1859b0: 0x34630011
    ctx->pc = 0x1859b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 17));
    // 0x1859b4: 0x14430116
    ctx->pc = 0x1859B4u;
    {
        const bool branch_taken_0x1859b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1859B8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
        if (branch_taken_0x1859b4) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x1859BCu;
    // 0x1859bc: 0x93a30060
    ctx->pc = 0x1859bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1859c0: 0x3c028101
    ctx->pc = 0x1859c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1859c4: 0x14600112
    ctx->pc = 0x1859C4u;
    {
        const bool branch_taken_0x1859c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1859C8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x1859c4) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x1859CCu;
    // 0x1859cc: 0x97a20000
    ctx->pc = 0x1859ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1859d0: 0x34038000
    ctx->pc = 0x1859d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1859d4: 0x40202d
    ctx->pc = 0x1859d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859d8: 0x3085f000
    ctx->pc = 0x1859d8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 61440));
    // 0x1859dc: 0x10a30004
    ctx->pc = 0x1859DCu;
    {
        const bool branch_taken_0x1859dc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1859E0u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 40960));
        if (branch_taken_0x1859dc) {
            ctx->pc = 0x1859F0u;
            goto label_1859f0;
        }
    }
    ctx->pc = 0x1859E4u;
    // 0x1859e4: 0x3c028101
    ctx->pc = 0x1859e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x1859e8: 0x14a30109
    ctx->pc = 0x1859E8u;
    {
        const bool branch_taken_0x1859e8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1859ECu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x1859e8) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x1859F0u;
label_1859f0:
    // 0x1859f0: 0x30830f00
    ctx->pc = 0x1859f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 3840));
    // 0x1859f4: 0x24020400
    ctx->pc = 0x1859f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1859f8: 0x10620004
    ctx->pc = 0x1859F8u;
    {
        const bool branch_taken_0x1859f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1859f8) {
            ctx->pc = 0x185A0Cu;
            goto label_185a0c;
        }
    }
    ctx->pc = 0x185A00u;
    // 0x185a00: 0x3c028101
    ctx->pc = 0x185a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185a04: 0x14600102
    ctx->pc = 0x185A04u;
    {
        const bool branch_taken_0x185a04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185A08u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36866));
        if (branch_taken_0x185a04) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185A0Cu;
label_185a0c:
    // 0x185a0c: 0x3c028101
    ctx->pc = 0x185a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185a10: 0x30830002
    ctx->pc = 0x185a10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 2));
    // 0x185a14: 0x106000fe
    ctx->pc = 0x185A14u;
    {
        const bool branch_taken_0x185a14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x185A18u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13));
        if (branch_taken_0x185a14) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185A1Cu;
    // 0x185a1c: 0x3c028101
    ctx->pc = 0x185a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185a20: 0x30830020
    ctx->pc = 0x185a20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 32));
    // 0x185a24: 0x146000fa
    ctx->pc = 0x185A24u;
    {
        const bool branch_taken_0x185a24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185A28u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x185a24) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185A2Cu;
    // 0x185a2c: 0x8fa70004
    ctx->pc = 0x185a2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x185a30: 0x3c028101
    ctx->pc = 0x185a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185a34: 0xf2182a
    ctx->pc = 0x185a34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 18)));
    // 0x185a38: 0x146000f5
    ctx->pc = 0x185A38u;
    {
        const bool branch_taken_0x185a38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185A3Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 22));
        if (branch_taken_0x185a38) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185A40u;
    // 0x185a40: 0x2551021
    ctx->pc = 0x185a40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x185a44: 0x24e403ff
    ctx->pc = 0x185a44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 1023));
    // 0x185a48: 0x244303ff
    ctx->pc = 0x185a48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1023));
    // 0x185a4c: 0x244207fe
    ctx->pc = 0x185a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2046));
    // 0x185a50: 0x24e707fe
    ctx->pc = 0x185a50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2046));
    // 0x185a54: 0x28650000
    ctx->pc = 0x185a54u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 0));
    // 0x185a58: 0x28860000
    ctx->pc = 0x185a58u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 4), 0));
    // 0x185a5c: 0x45180b
    ctx->pc = 0x185a5cu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x185a60: 0xe6200b
    ctx->pc = 0x185a60u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 7));
    // 0x185a64: 0x38a83
    ctx->pc = 0x185a64u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 10));
    // 0x185a68: 0x48283
    ctx->pc = 0x185a68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 10));
    // 0x185a6c: 0x211102a
    ctx->pc = 0x185a6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x185a70: 0x1040000e
    ctx->pc = 0x185A70u;
    {
        const bool branch_taken_0x185a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185A74u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x185a70) {
            ctx->pc = 0x185AACu;
            goto label_185aac;
        }
    }
    ctx->pc = 0x185A78u;
    // 0x185a78: 0x2e0202d
    ctx->pc = 0x185a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a7c: 0xc060bcc
    ctx->pc = 0x185A7Cu;
    SET_GPR_U32(ctx, 31, 0x185A84u);
    ctx->pc = 0x185A80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 664));
    ctx->pc = 0x182F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182F30_0x182f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185A84u; }
    }
    if (ctx->pc != 0x185A84u) { return; }
    ctx->pc = 0x185A84u;
    // 0x185a84: 0x8fa30298
    ctx->pc = 0x185a84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x185a88: 0x40202d
    ctx->pc = 0x185a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185a8c: 0x146000e0
    ctx->pc = 0x185A8Cu;
    {
        const bool branch_taken_0x185a8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185A90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185a8c) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185A94u;
    // 0x185a94: 0x2301823
    ctx->pc = 0x185a94u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x185a98: 0x3c028101
    ctx->pc = 0x185a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185a9c: 0x83182a
    ctx->pc = 0x185a9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x185aa0: 0x146000db
    ctx->pc = 0x185AA0u;
    {
        const bool branch_taken_0x185aa0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185AA4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 28));
        if (branch_taken_0x185aa0) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185AA8u;
    // 0x185aa8: 0x8fa50010
    ctx->pc = 0x185aa8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_185aac:
    // 0x185aac: 0x2402ffff
    ctx->pc = 0x185aacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185ab0: 0x54a20013
    ctx->pc = 0x185AB0u;
    {
        const bool branch_taken_0x185ab0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x185ab0) {
            ctx->pc = 0x185AB4u;
            SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
            ctx->pc = 0x185B00u;
            goto label_185b00;
        }
    }
    ctx->pc = 0x185AB8u;
    // 0x185ab8: 0x2e0202d
    ctx->pc = 0x185ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185abc: 0xc060b7a
    ctx->pc = 0x185ABCu;
    SET_GPR_U32(ctx, 31, 0x185AC4u);
    ctx->pc = 0x185AC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 664));
    ctx->pc = 0x182DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182DE8_0x182de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AC4u; }
    }
    if (ctx->pc != 0x185AC4u) { return; }
    ctx->pc = 0x185AC4u;
    // 0x185ac4: 0x8fa30298
    ctx->pc = 0x185ac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x185ac8: 0x40882d
    ctx->pc = 0x185ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185acc: 0x146000d0
    ctx->pc = 0x185ACCu;
    {
        const bool branch_taken_0x185acc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185AD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185acc) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185AD4u;
    // 0x185ad4: 0x2e0202d
    ctx->pc = 0x185ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ad8: 0x220282d
    ctx->pc = 0x185ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185adc: 0x2406ffff
    ctx->pc = 0x185adcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185ae0: 0xc060b28
    ctx->pc = 0x185AE0u;
    SET_GPR_U32(ctx, 31, 0x185AE8u);
    ctx->pc = 0x185AE4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 664));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185AE8u; }
    }
    if (ctx->pc != 0x185AE8u) { return; }
    ctx->pc = 0x185AE8u;
    // 0x185ae8: 0x8fa30298
    ctx->pc = 0x185ae8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x185aec: 0x146000c8
    ctx->pc = 0x185AECu;
    {
        const bool branch_taken_0x185aec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185AF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185aec) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185AF4u;
    // 0x185af4: 0xafb10010
    ctx->pc = 0x185af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x185af8: 0x220282d
    ctx->pc = 0x185af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185afc: 0x3c020028
    ctx->pc = 0x185afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
label_185b00:
    // 0x185b00: 0xafb502a0
    ctx->pc = 0x185b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 21));
    // 0x185b04: 0xa0882d
    ctx->pc = 0x185b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b08: 0x260a02d
    ctx->pc = 0x185b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b0c: 0x240f02d
    ctx->pc = 0x185b0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b10: 0x24566c80
    ctx->pc = 0x185b10u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 27776));
    // 0x185b14: 0x0
    ctx->pc = 0x185b14u;
    // NOP
label_185b18:
    // 0x185b18: 0x2a420400
    ctx->pc = 0x185b18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 1024));
    // 0x185b1c: 0x10400033
    ctx->pc = 0x185B1Cu;
    {
        const bool branch_taken_0x185b1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B20u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185b1c) {
            ctx->pc = 0x185BECu;
            goto label_185bec;
        }
    }
    ctx->pc = 0x185B24u;
    // 0x185b24: 0x2559821
    ctx->pc = 0x185b24u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x185b28: 0x2a620400
    ctx->pc = 0x185b28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 1024));
    // 0x185b2c: 0x1040000e
    ctx->pc = 0x185B2Cu;
    {
        const bool branch_taken_0x185b2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x185b2c) {
            ctx->pc = 0x185B68u;
            goto label_185b68;
        }
    }
    ctx->pc = 0x185B34u;
    // 0x185b34: 0x8fa20004
    ctx->pc = 0x185b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x185b38: 0x3c2102a
    ctx->pc = 0x185b38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 30), GPR_S32(ctx, 2)));
    // 0x185b3c: 0x1040000a
    ctx->pc = 0x185B3Cu;
    {
        const bool branch_taken_0x185b3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
        if (branch_taken_0x185b3c) {
            ctx->pc = 0x185B68u;
            goto label_185b68;
        }
    }
    ctx->pc = 0x185B44u;
    // 0x185b44: 0x3c020028
    ctx->pc = 0x185b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)40 << 16));
    // 0x185b48: 0x2e0202d
    ctx->pc = 0x185b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b4c: 0x24456c80
    ctx->pc = 0x185b4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 27776));
    // 0x185b50: 0x220302d
    ctx->pc = 0x185b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b54: 0xc061d1e
    ctx->pc = 0x185B54u;
    SET_GPR_U32(ctx, 31, 0x185B5Cu);
    ctx->pc = 0x185B58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187478u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187478_0x187478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B5Cu; }
    }
    if (ctx->pc != 0x185B5Cu) { return; }
    ctx->pc = 0x185B5Cu;
    // 0x185b5c: 0x104000a0
    ctx->pc = 0x185B5Cu;
    {
        const bool branch_taken_0x185b5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B60u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x185b5c) {
            ctx->pc = 0x185DE0u;
            goto label_185de0;
        }
    }
    ctx->pc = 0x185B64u;
    // 0x185b64: 0x24020400
    ctx->pc = 0x185b64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
label_185b68:
    // 0x185b68: 0x528023
    ctx->pc = 0x185b68u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x185b6c: 0x215182a
    ctx->pc = 0x185b6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 21)));
    // 0x185b70: 0x10600011
    ctx->pc = 0x185B70u;
    {
        const bool branch_taken_0x185b70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B74u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        if (branch_taken_0x185b70) {
            ctx->pc = 0x185BB8u;
            goto label_185bb8;
        }
    }
    ctx->pc = 0x185B78u;
    // 0x185b78: 0x280282d
    ctx->pc = 0x185b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b7c: 0xc041eac
    ctx->pc = 0x185B7Cu;
    SET_GPR_U32(ctx, 31, 0x185B84u);
    ctx->pc = 0x185B80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B84u; }
    }
    if (ctx->pc != 0x185B84u) { return; }
    ctx->pc = 0x185B84u;
    // 0x185b84: 0x2e0202d
    ctx->pc = 0x185b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b88: 0x2c0282d
    ctx->pc = 0x185b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b8c: 0x220302d
    ctx->pc = 0x185b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b90: 0xc061d24
    ctx->pc = 0x185B90u;
    SET_GPR_U32(ctx, 31, 0x185B98u);
    ctx->pc = 0x185B94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187490_0x187490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185B98u; }
    }
    if (ctx->pc != 0x185B98u) { return; }
    ctx->pc = 0x185B98u;
    // 0x185b98: 0x10400091
    ctx->pc = 0x185B98u;
    {
        const bool branch_taken_0x185b98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185B9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x185b98) {
            ctx->pc = 0x185DE0u;
            goto label_185de0;
        }
    }
    ctx->pc = 0x185BA0u;
    // 0x185ba0: 0x3d21023
    ctx->pc = 0x185ba0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x185ba4: 0x902d
    ctx->pc = 0x185ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ba8: 0x245e0400
    ctx->pc = 0x185ba8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x185bac: 0x290a021
    ctx->pc = 0x185bacu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x185bb0: 0x1000000d
    ctx->pc = 0x185BB0u;
    {
        const bool branch_taken_0x185bb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185BB4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 19), 4294966272));
        if (branch_taken_0x185bb0) {
            ctx->pc = 0x185BE8u;
            goto label_185be8;
        }
    }
    ctx->pc = 0x185BB8u;
label_185bb8:
    // 0x185bb8: 0x280282d
    ctx->pc = 0x185bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bbc: 0xc041eac
    ctx->pc = 0x185BBCu;
    SET_GPR_U32(ctx, 31, 0x185BC4u);
    ctx->pc = 0x185BC0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x107AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00107AB0_0x107ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BC4u; }
    }
    if (ctx->pc != 0x185BC4u) { return; }
    ctx->pc = 0x185BC4u;
    // 0x185bc4: 0x2e0202d
    ctx->pc = 0x185bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bc8: 0x2c0282d
    ctx->pc = 0x185bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bcc: 0x220302d
    ctx->pc = 0x185bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bd0: 0xc061d24
    ctx->pc = 0x185BD0u;
    SET_GPR_U32(ctx, 31, 0x185BD8u);
    ctx->pc = 0x185BD4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x187490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187490_0x187490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BD8u; }
    }
    if (ctx->pc != 0x185BD8u) { return; }
    ctx->pc = 0x185BD8u;
    // 0x185bd8: 0x1440002d
    ctx->pc = 0x185BD8u;
    {
        const bool branch_taken_0x185bd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185BDCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x185bd8) {
            ctx->pc = 0x185C90u;
            goto label_185c90;
        }
    }
    ctx->pc = 0x185BE0u;
    // 0x185be0: 0x1000007f
    ctx->pc = 0x185BE0u;
    {
        const bool branch_taken_0x185be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x185be0) {
            ctx->pc = 0x185DE0u;
            goto label_185de0;
        }
    }
    ctx->pc = 0x185BE8u;
label_185be8:
    // 0x185be8: 0x220802d
    ctx->pc = 0x185be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185bec:
    // 0x185bec: 0x2e0202d
    ctx->pc = 0x185becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bf0: 0x200282d
    ctx->pc = 0x185bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bf4: 0xc060b02
    ctx->pc = 0x185BF4u;
    SET_GPR_U32(ctx, 31, 0x185BFCu);
    ctx->pc = 0x185BF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 668));
    ctx->pc = 0x182C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C08_0x182c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185BFCu; }
    }
    if (ctx->pc != 0x185BFCu) { return; }
    ctx->pc = 0x185BFCu;
    // 0x185bfc: 0x8fa3029c
    ctx->pc = 0x185bfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x185c00: 0x40882d
    ctx->pc = 0x185c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c04: 0x14600082
    ctx->pc = 0x185C04u;
    {
        const bool branch_taken_0x185c04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x185C08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185c04) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185C0Cu;
    // 0x185c0c: 0x2402ffff
    ctx->pc = 0x185c0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185c10: 0x1622001a
    ctx->pc = 0x185C10u;
    {
        const bool branch_taken_0x185c10 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x185C14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
        if (branch_taken_0x185c10) {
            ctx->pc = 0x185C7Cu;
            goto label_185c7c;
        }
    }
    ctx->pc = 0x185C18u;
    // 0x185c18: 0x2e0202d
    ctx->pc = 0x185c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c1c: 0xc060b7a
    ctx->pc = 0x185C1Cu;
    SET_GPR_U32(ctx, 31, 0x185C24u);
    ctx->pc = 0x185C20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 664));
    ctx->pc = 0x182DE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182DE8_0x182de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C24u; }
    }
    if (ctx->pc != 0x185C24u) { return; }
    ctx->pc = 0x185C24u;
    // 0x185c24: 0x40882d
    ctx->pc = 0x185c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c28: 0x8fa20298
    ctx->pc = 0x185c28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x185c2c: 0x54400079
    ctx->pc = 0x185C2Cu;
    {
        const bool branch_taken_0x185c2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185c2c) {
            ctx->pc = 0x185C30u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
            ctx->pc = 0x185E14u;
            goto label_185e14;
        }
    }
    ctx->pc = 0x185C34u;
    // 0x185c34: 0x2e0202d
    ctx->pc = 0x185c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c38: 0x220282d
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c3c: 0x2406ffff
    ctx->pc = 0x185c3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185c40: 0xc060b28
    ctx->pc = 0x185C40u;
    SET_GPR_U32(ctx, 31, 0x185C48u);
    ctx->pc = 0x185C44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 664));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C48u; }
    }
    if (ctx->pc != 0x185C48u) { return; }
    ctx->pc = 0x185C48u;
    // 0x185c48: 0x8fa20298
    ctx->pc = 0x185c48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x185c4c: 0x54400071
    ctx->pc = 0x185C4Cu;
    {
        const bool branch_taken_0x185c4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185c4c) {
            ctx->pc = 0x185C50u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
            ctx->pc = 0x185E14u;
            goto label_185e14;
        }
    }
    ctx->pc = 0x185C54u;
    // 0x185c54: 0x3c068000
    ctx->pc = 0x185c54u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x185c58: 0x200282d
    ctx->pc = 0x185c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c5c: 0x2263025
    ctx->pc = 0x185c5cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x185c60: 0x2e0202d
    ctx->pc = 0x185c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c64: 0xc060b28
    ctx->pc = 0x185C64u;
    SET_GPR_U32(ctx, 31, 0x185C6Cu);
    ctx->pc = 0x185C68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 664));
    ctx->pc = 0x182CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182CA0_0x182ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C6Cu; }
    }
    if (ctx->pc != 0x185C6Cu) { return; }
    ctx->pc = 0x185C6Cu;
    // 0x185c6c: 0x8fa20298
    ctx->pc = 0x185c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x185c70: 0x14400068
    ctx->pc = 0x185C70u;
    {
        const bool branch_taken_0x185c70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185C74u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
        if (branch_taken_0x185c70) {
            ctx->pc = 0x185E14u;
            goto label_185e14;
        }
    }
    ctx->pc = 0x185C78u;
    // 0x185c78: 0x3c027fff
    ctx->pc = 0x185c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
label_185c7c:
    // 0x185c7c: 0x2643fc00
    ctx->pc = 0x185c7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294966272));
    // 0x185c80: 0x3442ffff
    ctx->pc = 0x185c80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x185c84: 0x72900b
    ctx->pc = 0x185c84u;
    if (GPR_U32(ctx, 18) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
    // 0x185c88: 0x1000ffa3
    ctx->pc = 0x185C88u;
    {
        const bool branch_taken_0x185c88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185C8Cu;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x185c88) {
            ctx->pc = 0x185B18u;
            goto label_185b18;
        }
    }
    ctx->pc = 0x185C90u;
label_185c90:
    // 0x185c90: 0x2e0202d
    ctx->pc = 0x185c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c94: 0xc061bbc
    ctx->pc = 0x185C94u;
    SET_GPR_U32(ctx, 31, 0x185C9Cu);
    ctx->pc = 0x185C98u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C9Cu; }
    }
    if (ctx->pc != 0x185C9Cu) { return; }
    ctx->pc = 0x185C9Cu;
    // 0x185c9c: 0x40182d
    ctx->pc = 0x185c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ca0: 0x3c028101
    ctx->pc = 0x185ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185ca4: 0xafa3029c
    ctx->pc = 0x185ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
    // 0x185ca8: 0x10600059
    ctx->pc = 0x185CA8u;
    {
        const bool branch_taken_0x185ca8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x185CACu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x185ca8) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185CB0u;
    // 0x185cb0: 0xc060a84
    ctx->pc = 0x185CB0u;
    SET_GPR_U32(ctx, 31, 0x185CB8u);
    ctx->pc = 0x185CB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00182A10_0x182a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CB8u; }
    }
    if (ctx->pc != 0x185CB8u) { return; }
    ctx->pc = 0x185CB8u;
    // 0x185cb8: 0x40182d
    ctx->pc = 0x185cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cbc: 0x3c028101
    ctx->pc = 0x185cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185cc0: 0xafa3029c
    ctx->pc = 0x185cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
    // 0x185cc4: 0x10600052
    ctx->pc = 0x185CC4u;
    {
        const bool branch_taken_0x185cc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x185CC8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x185cc4) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185CCCu;
    // 0x185ccc: 0x27a50280
    ctx->pc = 0x185cccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 640));
    // 0x185cd0: 0xc061ffe
    ctx->pc = 0x185CD0u;
    SET_GPR_U32(ctx, 31, 0x185CD8u);
    ctx->pc = 0x185CD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00187FF8_0x187ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CD8u; }
    }
    if (ctx->pc != 0x185CD8u) { return; }
    ctx->pc = 0x185CD8u;
    // 0x185cd8: 0x2e0202d
    ctx->pc = 0x185cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cdc: 0x93a20287
    ctx->pc = 0x185cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
    // 0x185ce0: 0x3a0282d
    ctx->pc = 0x185ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ce4: 0x93b20286
    ctx->pc = 0x185ce4u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 646)));
    // 0x185ce8: 0x93b30285
    ctx->pc = 0x185ce8u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 645)));
    // 0x185cec: 0x23102
    ctx->pc = 0x185cecu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 2), 4));
    // 0x185cf0: 0x93b10283
    ctx->pc = 0x185cf0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 643)));
    // 0x185cf4: 0x12b102
    ctx->pc = 0x185cf4u;
    SET_GPR_U32(ctx, 22, SRL32(GPR_U32(ctx, 18), 4));
    // 0x185cf8: 0x93b00282
    ctx->pc = 0x185cf8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 642)));
    // 0x185cfc: 0x13a902
    ctx->pc = 0x185cfcu;
    SET_GPR_U32(ctx, 21, SRL32(GPR_U32(ctx, 19), 4));
    // 0x185d00: 0x93af0281
    ctx->pc = 0x185d00u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 641)));
    // 0x185d04: 0x116902
    ctx->pc = 0x185d04u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 17), 4));
    // 0x185d08: 0x10a102
    ctx->pc = 0x185d08u;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 16), 4));
    // 0x185d0c: 0x3210000f
    ctx->pc = 0x185d0cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 15));
    // 0x185d10: 0xf3902
    ctx->pc = 0x185d10u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 15), 4));
    // 0x185d14: 0x31ef000f
    ctx->pc = 0x185d14u;
    SET_GPR_U32(ctx, 15, AND32(GPR_U32(ctx, 15), 15));
    // 0x185d18: 0x61880
    ctx->pc = 0x185d18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x185d1c: 0x8fae0004
    ctx->pc = 0x185d1cu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x185d20: 0x661821
    ctx->pc = 0x185d20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x185d24: 0x8fa60290
    ctx->pc = 0x185d24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x185d28: 0xd5080
    ctx->pc = 0x185d28u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 13), 2));
    // 0x185d2c: 0x76080
    ctx->pc = 0x185d2cu;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 7), 2));
    // 0x185d30: 0x164080
    ctx->pc = 0x185d30u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 22), 2));
    // 0x185d34: 0x154880
    ctx->pc = 0x185d34u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 21), 2));
    // 0x185d38: 0x145880
    ctx->pc = 0x185d38u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 20), 2));
    // 0x185d3c: 0x14d5021
    ctx->pc = 0x185d3cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x185d40: 0x1876021
    ctx->pc = 0x185d40u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x185d44: 0x8fa70294
    ctx->pc = 0x185d44u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x185d48: 0x97ad0000
    ctx->pc = 0x185d48u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185d4c: 0x3042000f
    ctx->pc = 0x185d4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x185d50: 0x1164021
    ctx->pc = 0x185d50u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
    // 0x185d54: 0x1354821
    ctx->pc = 0x185d54u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x185d58: 0x1745821
    ctx->pc = 0x185d58u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x185d5c: 0x31840
    ctx->pc = 0x185d5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x185d60: 0x621821
    ctx->pc = 0x185d60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x185d64: 0x1de102a
    ctx->pc = 0x185d64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 14), GPR_S32(ctx, 30)));
    // 0x185d68: 0x84040
    ctx->pc = 0x185d68u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
    // 0x185d6c: 0x3252000f
    ctx->pc = 0x185d6cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), 15));
    // 0x185d70: 0x94840
    ctx->pc = 0x185d70u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
    // 0x185d74: 0x3273000f
    ctx->pc = 0x185d74u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), 15));
    // 0x185d78: 0xa5040
    ctx->pc = 0x185d78u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 1));
    // 0x185d7c: 0x3231000f
    ctx->pc = 0x185d7cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), 15));
    // 0x185d80: 0xb5840
    ctx->pc = 0x185d80u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
    // 0x185d84: 0xc6040
    ctx->pc = 0x185d84u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 12), 1));
    // 0x185d88: 0x246307d0
    ctx->pc = 0x185d88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2000));
    // 0x185d8c: 0x3c2700b
    ctx->pc = 0x185d8cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 14, GPR_U32(ctx, 30));
    // 0x185d90: 0x1124021
    ctx->pc = 0x185d90u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x185d94: 0x1334821
    ctx->pc = 0x185d94u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x185d98: 0x1515021
    ctx->pc = 0x185d98u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x185d9c: 0x1705821
    ctx->pc = 0x185d9cu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x185da0: 0x18f6021
    ctx->pc = 0x185da0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x185da4: 0x35ad0080
    ctx->pc = 0x185da4u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), 128));
    // 0x185da8: 0xa7a3001e
    ctx->pc = 0x185da8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x185dac: 0xafae0004
    ctx->pc = 0x185dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x185db0: 0xa7ad0000
    ctx->pc = 0x185db0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x185db4: 0xa3a8001d
    ctx->pc = 0x185db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 8));
    // 0x185db8: 0xa3a9001c
    ctx->pc = 0x185db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 9));
    // 0x185dbc: 0xa3aa001b
    ctx->pc = 0x185dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 10));
    // 0x185dc0: 0xa3ab001a
    ctx->pc = 0x185dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 11));
    // 0x185dc4: 0xc0612a8
    ctx->pc = 0x185DC4u;
    SET_GPR_U32(ctx, 31, 0x185DCCu);
    ctx->pc = 0x185DC8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 12));
    ctx->pc = 0x184AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AA0_0x184aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DCCu; }
    }
    if (ctx->pc != 0x185DCCu) { return; }
    ctx->pc = 0x185DCCu;
    // 0x185dcc: 0x40182d
    ctx->pc = 0x185dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dd0: 0x10600007
    ctx->pc = 0x185DD0u;
    {
        const bool branch_taken_0x185dd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x185DD4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 3));
        if (branch_taken_0x185dd0) {
            ctx->pc = 0x185DF0u;
            goto label_185df0;
        }
    }
    ctx->pc = 0x185DD8u;
    // 0x185dd8: 0x1000000e
    ctx->pc = 0x185DD8u;
    {
        const bool branch_taken_0x185dd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185DDCu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
        if (branch_taken_0x185dd8) {
            ctx->pc = 0x185E14u;
            goto label_185e14;
        }
    }
    ctx->pc = 0x185DE0u;
label_185de0:
    // 0x185de0: 0x3c028101
    ctx->pc = 0x185de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185de4: 0x1000000a
    ctx->pc = 0x185DE4u;
    {
        const bool branch_taken_0x185de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185DE8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
        if (branch_taken_0x185de4) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185DECu;
    // 0x185dec: 0x0
    ctx->pc = 0x185decu;
    // NOP
label_185df0:
    // 0x185df0: 0xc061bbc
    ctx->pc = 0x185DF0u;
    SET_GPR_U32(ctx, 31, 0x185DF8u);
    ctx->pc = 0x185DF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00186EF0_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185DF8u; }
    }
    if (ctx->pc != 0x185DF8u) { return; }
    ctx->pc = 0x185DF8u;
    // 0x185df8: 0x40182d
    ctx->pc = 0x185df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dfc: 0x3c028101
    ctx->pc = 0x185dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33025 << 16));
    // 0x185e00: 0x8fa402a0
    ctx->pc = 0x185e00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x185e04: 0x3442006f
    ctx->pc = 0x185e04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 111));
    // 0x185e08: 0xafa3029c
    ctx->pc = 0x185e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
    // 0x185e0c: 0x83100b
    ctx->pc = 0x185e0cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_185e10:
    // 0x185e10: 0xdfb002b0
    ctx->pc = 0x185e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_185e14:
    // 0x185e14: 0xdfb102b8
    ctx->pc = 0x185e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x185e18: 0xdfb202c0
    ctx->pc = 0x185e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x185e1c: 0xdfb302c8
    ctx->pc = 0x185e1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x185e20: 0xdfb402d0
    ctx->pc = 0x185e20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x185e24: 0xdfb502d8
    ctx->pc = 0x185e24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x185e28: 0xdfb602e0
    ctx->pc = 0x185e28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x185e2c: 0xdfb702e8
    ctx->pc = 0x185e2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x185e30: 0xdfbe02f0
    ctx->pc = 0x185e30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x185e34: 0xdfbf02f8
    ctx->pc = 0x185e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x185e38: 0x3e00008
    ctx->pc = 0x185E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185E3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185920u: goto label_185920;
            case 0x185968u: goto label_185968;
            case 0x185978u: goto label_185978;
            case 0x185998u: goto label_185998;
            case 0x1859F0u: goto label_1859f0;
            case 0x185A0Cu: goto label_185a0c;
            case 0x185AACu: goto label_185aac;
            case 0x185B00u: goto label_185b00;
            case 0x185B18u: goto label_185b18;
            case 0x185B68u: goto label_185b68;
            case 0x185BB8u: goto label_185bb8;
            case 0x185BE8u: goto label_185be8;
            case 0x185BECu: goto label_185bec;
            case 0x185C7Cu: goto label_185c7c;
            case 0x185C90u: goto label_185c90;
            case 0x185DE0u: goto label_185de0;
            case 0x185DF0u: goto label_185df0;
            case 0x185E10u: goto label_185e10;
            case 0x185E14u: goto label_185e14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185E40u;
}
