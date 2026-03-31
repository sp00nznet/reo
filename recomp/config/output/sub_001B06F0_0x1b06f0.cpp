#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001B06F0
// Address: 0x1b06f0 - 0x1b0980
void sub_001B06F0_0x1b06f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1b06f0u;

    // 0x1b06f0: 0x27bdff80
    ctx->pc = 0x1b06f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b06f4: 0xffbf0050
    ctx->pc = 0x1b06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b06f8: 0x7fb40040
    ctx->pc = 0x1b06f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b06fc: 0x7fb30030
    ctx->pc = 0x1b06fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0700: 0xa02d
    ctx->pc = 0x1b0700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0704: 0x7fb20020
    ctx->pc = 0x1b0704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b0708: 0x27b3006c
    ctx->pc = 0x1b0708u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 108));
    // 0x1b070c: 0x7fb10010
    ctx->pc = 0x1b070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0710: 0x1000008b
    ctx->pc = 0x1B0710u;
    {
        const bool branch_taken_0x1b0710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1B0714u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x1b0710) {
            ctx->pc = 0x1B0940u;
            goto label_1b0940;
        }
    }
    ctx->pc = 0x1B0718u;
label_1b0718:
    // 0x1b0718: 0x141100
    ctx->pc = 0x1b0718u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 4));
    // 0x1b071c: 0x8c23ffa8
    ctx->pc = 0x1b071cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294967208)));
    // 0x1b0720: 0x542023
    ctx->pc = 0x1b0720u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1b0724: 0x480c0
    ctx->pc = 0x1b0724u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b0728: 0x24020001
    ctx->pc = 0x1b0728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b072c: 0x701821
    ctx->pc = 0x1b072cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b0730: 0x90630000
    ctx->pc = 0x1b0730u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0734: 0x10620021
    ctx->pc = 0x1B0734u;
    {
        const bool branch_taken_0x1b0734 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1B0738u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x1b0734) {
            ctx->pc = 0x1B07BCu;
            goto label_1b07bc;
        }
    }
    ctx->pc = 0x1B073Cu;
    // 0x1b073c: 0x141040
    ctx->pc = 0x1b073cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
    // 0x1b0740: 0x3c030032
    ctx->pc = 0x1b0740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x1b0744: 0x542021
    ctx->pc = 0x1b0744u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1b0748: 0x24634300
    ctx->pc = 0x1b0748u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 17152));
    // 0x1b074c: 0x42100
    ctx->pc = 0x1b074cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1b0750: 0x3c020032
    ctx->pc = 0x1b0750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1b0754: 0x641821
    ctx->pc = 0x1b0754u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0758: 0x24424240
    ctx->pc = 0x1b0758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16960));
    // 0x1b075c: 0xac600008
    ctx->pc = 0x1b075cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b0760: 0x441021
    ctx->pc = 0x1b0760u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b0764: 0xac600000
    ctx->pc = 0x1b0764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b0768: 0xac600004
    ctx->pc = 0x1b0768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b076c: 0xa4600020
    ctx->pc = 0x1b076cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0770: 0xa4600028
    ctx->pc = 0x1b0770u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0774: 0xa4600022
    ctx->pc = 0x1b0774u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0778: 0xa460002a
    ctx->pc = 0x1b0778u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b077c: 0xa4600024
    ctx->pc = 0x1b077cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0780: 0xa4600026
    ctx->pc = 0x1b0780u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0784: 0xa460002c
    ctx->pc = 0x1b0784u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b0788: 0xa460002e
    ctx->pc = 0x1b0788u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b078c: 0xac400008
    ctx->pc = 0x1b078cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b0790: 0xac400000
    ctx->pc = 0x1b0790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b0794: 0xac400004
    ctx->pc = 0x1b0794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b0798: 0xa4400020
    ctx->pc = 0x1b0798u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b079c: 0xa4400028
    ctx->pc = 0x1b079cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b07a0: 0xa4400022
    ctx->pc = 0x1b07a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b07a4: 0xa440002a
    ctx->pc = 0x1b07a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b07a8: 0xa4400024
    ctx->pc = 0x1b07a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b07ac: 0xa4400026
    ctx->pc = 0x1b07acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b07b0: 0xa440002c
    ctx->pc = 0x1b07b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b07b4: 0xa440002e
    ctx->pc = 0x1b07b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b07b8: 0x141840
    ctx->pc = 0x1b07b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 1));
label_1b07bc:
    // 0x1b07bc: 0x3c020032
    ctx->pc = 0x1b07bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1b07c0: 0x741821
    ctx->pc = 0x1b07c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1b07c4: 0x24424300
    ctx->pc = 0x1b07c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17152));
    // 0x1b07c8: 0x39100
    ctx->pc = 0x1b07c8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b07cc: 0x3c01002b
    ctx->pc = 0x1b07ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1b07d0: 0x528821
    ctx->pc = 0x1b07d0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b07d4: 0x8e220010
    ctx->pc = 0x1b07d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b07d8: 0xae220014
    ctx->pc = 0x1b07d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1b07dc: 0x8e22000c
    ctx->pc = 0x1b07dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b07e0: 0xae220010
    ctx->pc = 0x1b07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1b07e4: 0x8e220008
    ctx->pc = 0x1b07e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b07e8: 0xae22000c
    ctx->pc = 0x1b07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1b07ec: 0x8c22ffa8
    ctx->pc = 0x1b07ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967208)));
    // 0x1b07f0: 0x501821
    ctx->pc = 0x1b07f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b07f4: 0x8c620008
    ctx->pc = 0x1b07f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b07f8: 0xae220008
    ctx->pc = 0x1b07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b07fc: 0x8c620010
    ctx->pc = 0x1b07fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b0800: 0xae220000
    ctx->pc = 0x1b0800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b0804: 0x8c620014
    ctx->pc = 0x1b0804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1b0808: 0xae220004
    ctx->pc = 0x1b0808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b080c: 0x8462001c
    ctx->pc = 0x1b080cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1b0810: 0xa6220024
    ctx->pc = 0x1b0810u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0814: 0x8462001e
    ctx->pc = 0x1b0814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1b0818: 0xa6220026
    ctx->pc = 0x1b0818u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b081c: 0x84620028
    ctx->pc = 0x1b081cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b0820: 0xa622002c
    ctx->pc = 0x1b0820u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0824: 0x8462002a
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b0828: 0xa622002e
    ctx->pc = 0x1b0828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b082c: 0x84620020
    ctx->pc = 0x1b082cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b0830: 0xa6220020
    ctx->pc = 0x1b0830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0834: 0x8462002c
    ctx->pc = 0x1b0834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1b0838: 0xa6220028
    ctx->pc = 0x1b0838u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b083c: 0xc0647bc
    ctx->pc = 0x1B083Cu;
    SET_GPR_U32(ctx, 31, 0x1B0844u);
    ctx->pc = 0x1B0840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x191EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191EF0_0x191ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0844u; }
    }
    if (ctx->pc != 0x1B0844u) { return; }
    ctx->pc = 0x1B0844u;
    // 0x1b0844: 0x3042ffff
    ctx->pc = 0x1b0844u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b0848: 0x3c01002b
    ctx->pc = 0x1b0848u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1b084c: 0x2442c000
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x1b0850: 0xa6220022
    ctx->pc = 0x1b0850u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0854: 0x8c22ffa8
    ctx->pc = 0x1b0854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967208)));
    // 0x1b0858: 0x501021
    ctx->pc = 0x1b0858u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b085c: 0xc0647bc
    ctx->pc = 0x1B085Cu;
    SET_GPR_U32(ctx, 31, 0x1B0864u);
    ctx->pc = 0x1B0860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x191EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191EF0_0x191ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0864u; }
    }
    if (ctx->pc != 0x1B0864u) { return; }
    ctx->pc = 0x1B0864u;
    // 0x1b0864: 0x3042ffff
    ctx->pc = 0x1b0864u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b0868: 0x280202d
    ctx->pc = 0x1b0868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b086c: 0x2442c000
    ctx->pc = 0x1b086cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x1b0870: 0x282d
    ctx->pc = 0x1b0870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0874: 0xa622002a
    ctx->pc = 0x1b0874u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0878: 0xc06865c
    ctx->pc = 0x1B0878u;
    SET_GPR_U32(ctx, 31, 0x1B0880u);
    ctx->pc = 0x1B087Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1A1970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1970_0x1a1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0880u; }
    }
    if (ctx->pc != 0x1B0880u) { return; }
    ctx->pc = 0x1B0880u;
    // 0x1b0880: 0x280202d
    ctx->pc = 0x1b0880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0884: 0x24050001
    ctx->pc = 0x1b0884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0888: 0xc06865c
    ctx->pc = 0x1B0888u;
    SET_GPR_U32(ctx, 31, 0x1B0890u);
    ctx->pc = 0x1B088Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A1970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1970_0x1a1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0890u; }
    }
    if (ctx->pc != 0x1B0890u) { return; }
    ctx->pc = 0x1B0890u;
    // 0x1b0890: 0x3c020032
    ctx->pc = 0x1b0890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x1b0894: 0x3c01002b
    ctx->pc = 0x1b0894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1b0898: 0x24424240
    ctx->pc = 0x1b0898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16960));
    // 0x1b089c: 0x528821
    ctx->pc = 0x1b089cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1b08a0: 0x8e220010
    ctx->pc = 0x1b08a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b08a4: 0xae220014
    ctx->pc = 0x1b08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1b08a8: 0x8e22000c
    ctx->pc = 0x1b08a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b08ac: 0xae220010
    ctx->pc = 0x1b08acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1b08b0: 0x8e220008
    ctx->pc = 0x1b08b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b08b4: 0xae22000c
    ctx->pc = 0x1b08b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1b08b8: 0x8c22ffac
    ctx->pc = 0x1b08b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967212)));
    // 0x1b08bc: 0x501821
    ctx->pc = 0x1b08bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b08c0: 0x8c620008
    ctx->pc = 0x1b08c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b08c4: 0xae220008
    ctx->pc = 0x1b08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b08c8: 0x8c620010
    ctx->pc = 0x1b08c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b08cc: 0xae220000
    ctx->pc = 0x1b08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b08d0: 0x8c620014
    ctx->pc = 0x1b08d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1b08d4: 0xae220004
    ctx->pc = 0x1b08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b08d8: 0x8462001c
    ctx->pc = 0x1b08d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1b08dc: 0xa6220024
    ctx->pc = 0x1b08dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b08e0: 0x8462001e
    ctx->pc = 0x1b08e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1b08e4: 0xa6220026
    ctx->pc = 0x1b08e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b08e8: 0x84620028
    ctx->pc = 0x1b08e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b08ec: 0xa622002c
    ctx->pc = 0x1b08ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b08f0: 0x8462002a
    ctx->pc = 0x1b08f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b08f4: 0xa622002e
    ctx->pc = 0x1b08f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b08f8: 0x84620020
    ctx->pc = 0x1b08f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b08fc: 0xa6220020
    ctx->pc = 0x1b08fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0900: 0x8462002c
    ctx->pc = 0x1b0900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1b0904: 0xa6220028
    ctx->pc = 0x1b0904u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0908: 0xc0647bc
    ctx->pc = 0x1B0908u;
    SET_GPR_U32(ctx, 31, 0x1B0910u);
    ctx->pc = 0x1B090Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x191EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191EF0_0x191ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0910u; }
    }
    if (ctx->pc != 0x1B0910u) { return; }
    ctx->pc = 0x1B0910u;
    // 0x1b0910: 0x3042ffff
    ctx->pc = 0x1b0910u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b0914: 0x3c01002b
    ctx->pc = 0x1b0914u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1b0918: 0x2442c000
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x1b091c: 0xa6220022
    ctx->pc = 0x1b091cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b0920: 0x8c22ffac
    ctx->pc = 0x1b0920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294967212)));
    // 0x1b0924: 0x501021
    ctx->pc = 0x1b0924u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b0928: 0xc0647bc
    ctx->pc = 0x1B0928u;
    SET_GPR_U32(ctx, 31, 0x1B0930u);
    ctx->pc = 0x1B092Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x191EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191EF0_0x191ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0930u; }
    }
    if (ctx->pc != 0x1B0930u) { return; }
    ctx->pc = 0x1B0930u;
    // 0x1b0930: 0x3043ffff
    ctx->pc = 0x1b0930u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1b0934: 0x26940001
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b0938: 0x2463c000
    ctx->pc = 0x1b0938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294950912));
    // 0x1b093c: 0xa623002a
    ctx->pc = 0x1b093cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
label_1b0940:
    // 0x1b0940: 0x3c010032
    ctx->pc = 0x1b0940u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1b0944: 0x802341f0
    ctx->pc = 0x1b0944u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 16880)));
    // 0x1b0948: 0x283182a
    ctx->pc = 0x1b0948u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x1b094c: 0x1460ff72
    ctx->pc = 0x1B094Cu;
    {
        const bool branch_taken_0x1b094c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B0950u;
        SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
        if (branch_taken_0x1b094c) {
            ctx->pc = 0x1B0718u;
            goto label_1b0718;
        }
    }
    ctx->pc = 0x1B0954u;
    // 0x1b0954: 0xdfbf0050
    ctx->pc = 0x1b0954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0958: 0x7bb40040
    ctx->pc = 0x1b0958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b095c: 0x7bb30030
    ctx->pc = 0x1b095cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0960: 0x7bb20020
    ctx->pc = 0x1b0960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0964: 0x7bb10010
    ctx->pc = 0x1b0964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0968: 0x7bb00000
    ctx->pc = 0x1b0968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b096c: 0x3e00008
    ctx->pc = 0x1B096Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0718u: goto label_1b0718;
            case 0x1B07BCu: goto label_1b07bc;
            case 0x1B0940u: goto label_1b0940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0974u;
    // 0x1b0974: 0x0
    ctx->pc = 0x1b0974u;
    // NOP
    // 0x1b0978: 0x0
    ctx->pc = 0x1b0978u;
    // NOP
    // 0x1b097c: 0x0
    ctx->pc = 0x1b097cu;
    // NOP
}
