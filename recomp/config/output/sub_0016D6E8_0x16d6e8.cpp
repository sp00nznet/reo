#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016D6E8
// Address: 0x16d6e8 - 0x16d8a0
void sub_0016D6E8_0x16d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16d6e8u;

    // 0x16d6e8: 0x27bdffa0
    ctx->pc = 0x16d6e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16d6ec: 0xffb00010
    ctx->pc = 0x16d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16d6f0: 0xc0802d
    ctx->pc = 0x16d6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6f4: 0xffb10018
    ctx->pc = 0x16d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16d6f8: 0xffb20020
    ctx->pc = 0x16d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16d6fc: 0xffb40030
    ctx->pc = 0x16d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16d700: 0x80a02d
    ctx->pc = 0x16d700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d704: 0xffb50038
    ctx->pc = 0x16d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x16d708: 0xffb70048
    ctx->pc = 0x16d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x16d70c: 0xa0b82d
    ctx->pc = 0x16d70cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d710: 0xffbe0050
    ctx->pc = 0x16d710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x16d714: 0xe0f02d
    ctx->pc = 0x16d714u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d718: 0xffb30028
    ctx->pc = 0x16d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16d71c: 0xffb60040
    ctx->pc = 0x16d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x16d720: 0xffbf0058
    ctx->pc = 0x16d720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x16d724: 0x8e931b30
    ctx->pc = 0x16d724u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 6960)));
    // 0x16d728: 0x8e760000
    ctx->pc = 0x16d728u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16d72c: 0x2662093c
    ctx->pc = 0x16d72cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 2364));
    // 0x16d730: 0x8c460008
    ctx->pc = 0x16d730u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d734: 0x2675008c
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 19), 140));
    // 0x16d738: 0x8c45000c
    ctx->pc = 0x16d738u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16d73c: 0xc056538
    ctx->pc = 0x16D73Cu;
    SET_GPR_U32(ctx, 31, 0x16D744u);
    ctx->pc = 0x16D740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1594E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001594E0_0x1594e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D744u; }
    }
    if (ctx->pc != 0x16D744u) { return; }
    ctx->pc = 0x16D744u;
    // 0x16d744: 0x200202d
    ctx->pc = 0x16d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d748: 0x24060001
    ctx->pc = 0x16d748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d74c: 0xc04fffa
    ctx->pc = 0x16D74Cu;
    SET_GPR_U32(ctx, 31, 0x16D754u);
    ctx->pc = 0x16D750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFE8_0x13ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D754u; }
    }
    if (ctx->pc != 0x16D754u) { return; }
    ctx->pc = 0x16D754u;
    // 0x16d754: 0x2c0202d
    ctx->pc = 0x16d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d758: 0x200282d
    ctx->pc = 0x16d758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d75c: 0xc056548
    ctx->pc = 0x16D75Cu;
    SET_GPR_U32(ctx, 31, 0x16D764u);
    ctx->pc = 0x16D760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x159520u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00159520_0x159520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D764u; }
    }
    if (ctx->pc != 0x16D764u) { return; }
    ctx->pc = 0x16D764u;
    // 0x16d764: 0x200202d
    ctx->pc = 0x16d764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d768: 0x282d
    ctx->pc = 0x16d768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d76c: 0x24060001
    ctx->pc = 0x16d76cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d770: 0xc04fffa
    ctx->pc = 0x16D770u;
    SET_GPR_U32(ctx, 31, 0x16D778u);
    ctx->pc = 0x16D774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFE8_0x13ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D778u; }
    }
    if (ctx->pc != 0x16D778u) { return; }
    ctx->pc = 0x16D778u;
    // 0x16d778: 0x528023
    ctx->pc = 0x16d778u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16d77c: 0x3c07ff00
    ctx->pc = 0x16d77cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)65280 << 16));
    // 0x16d780: 0x220282d
    ctx->pc = 0x16d780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d784: 0x200302d
    ctx->pc = 0x16d784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d788: 0x280202d
    ctx->pc = 0x16d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d78c: 0xc05b592
    ctx->pc = 0x16D78Cu;
    SET_GPR_U32(ctx, 31, 0x16D794u);
    ctx->pc = 0x16D790u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3844));
    ctx->pc = 0x16D648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D648_0x16d648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D794u; }
    }
    if (ctx->pc != 0x16D794u) { return; }
    ctx->pc = 0x16D794u;
    // 0x16d794: 0x280202d
    ctx->pc = 0x16d794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d798: 0x40882d
    ctx->pc = 0x16d798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d79c: 0xc05b572
    ctx->pc = 0x16D79Cu;
    SET_GPR_U32(ctx, 31, 0x16D7A4u);
    ctx->pc = 0x16D7A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D5C8_0x16d5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7A4u; }
    }
    if (ctx->pc != 0x16D7A4u) { return; }
    ctx->pc = 0x16D7A4u;
    // 0x16d7a4: 0x220102d
    ctx->pc = 0x16d7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7a8: 0x2c0202d
    ctx->pc = 0x16d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7ac: 0x2666094c
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 2380));
    // 0x16d7b0: 0x1620002f
    ctx->pc = 0x16D7B0u;
    {
        const bool branch_taken_0x16d7b0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D7B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d7b0) {
            ctx->pc = 0x16D870u;
            goto label_16d870;
        }
    }
    ctx->pc = 0x16D7B8u;
    // 0x16d7b8: 0xc05653e
    ctx->pc = 0x16D7B8u;
    SET_GPR_U32(ctx, 31, 0x16D7C0u);
    ctx->pc = 0x1594F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001594F8_0x1594f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7C0u; }
    }
    if (ctx->pc != 0x16D7C0u) { return; }
    ctx->pc = 0x16D7C0u;
    // 0x16d7c0: 0x2c0202d
    ctx->pc = 0x16d7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7c4: 0xc05647a
    ctx->pc = 0x16D7C4u;
    SET_GPR_U32(ctx, 31, 0x16D7CCu);
    ctx->pc = 0x16D7C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1591E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001591E8_0x1591e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7CCu; }
    }
    if (ctx->pc != 0x16D7CCu) { return; }
    ctx->pc = 0x16D7CCu;
    // 0x16d7cc: 0x280202d
    ctx->pc = 0x16d7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7d0: 0x3c05ff00
    ctx->pc = 0x16d7d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x16d7d4: 0x2e0302d
    ctx->pc = 0x16d7d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7d8: 0x34a50f05
    ctx->pc = 0x16d7d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3845));
    // 0x16d7dc: 0x10400006
    ctx->pc = 0x16D7DCu;
    {
        const bool branch_taken_0x16d7dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D7E0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d7dc) {
            ctx->pc = 0x16D7F8u;
            goto label_16d7f8;
        }
    }
    ctx->pc = 0x16D7E4u;
    // 0x16d7e4: 0xc05a704
    ctx->pc = 0x16D7E4u;
    SET_GPR_U32(ctx, 31, 0x16D7ECu);
    ctx->pc = 0x169C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00169C10_0x169c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D7ECu; }
    }
    if (ctx->pc != 0x16D7ECu) { return; }
    ctx->pc = 0x16D7ECu;
    // 0x16d7ec: 0x10000021
    ctx->pc = 0x16D7ECu;
    {
        const bool branch_taken_0x16d7ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D7F0u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16d7ec) {
            ctx->pc = 0x16D874u;
            goto label_16d874;
        }
    }
    ctx->pc = 0x16D7F4u;
    // 0x16d7f4: 0x0
    ctx->pc = 0x16d7f4u;
    // NOP
label_16d7f8:
    // 0x16d7f8: 0x8ea30030
    ctx->pc = 0x16d7f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x16d7fc: 0x8e6200e0
    ctx->pc = 0x16d7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x16d800: 0x10430005
    ctx->pc = 0x16D800u;
    {
        const bool branch_taken_0x16d800 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x16D804u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16d800) {
            ctx->pc = 0x16D818u;
            goto label_16d818;
        }
    }
    ctx->pc = 0x16D808u;
    // 0x16d808: 0xae6300e0
    ctx->pc = 0x16d808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 3));
    // 0x16d80c: 0x10000003
    ctx->pc = 0x16D80Cu;
    {
        const bool branch_taken_0x16d80c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D810u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
        if (branch_taken_0x16d80c) {
            ctx->pc = 0x16D81Cu;
            goto label_16d81c;
        }
    }
    ctx->pc = 0x16D814u;
    // 0x16d814: 0x0
    ctx->pc = 0x16d814u;
    // NOP
label_16d818:
    // 0x16d818: 0xae6000e4
    ctx->pc = 0x16d818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 0));
label_16d81c:
    // 0x16d81c: 0x8e6800e4
    ctx->pc = 0x16d81cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x16d820: 0xc05b628
    ctx->pc = 0x16D820u;
    SET_GPR_U32(ctx, 31, 0x16D828u);
    ctx->pc = 0x16D824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D8A0_0x16d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D828u; }
    }
    if (ctx->pc != 0x16D828u) { return; }
    ctx->pc = 0x16D828u;
    // 0x16d828: 0x280202d
    ctx->pc = 0x16d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d82c: 0x2a0282d
    ctx->pc = 0x16d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d830: 0x13c0000f
    ctx->pc = 0x16D830u;
    {
        const bool branch_taken_0x16d830 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D834u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16d830) {
            ctx->pc = 0x16D870u;
            goto label_16d870;
        }
    }
    ctx->pc = 0x16D838u;
    // 0x16d838: 0x8e6700e4
    ctx->pc = 0x16d838u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x16d83c: 0xc05b6c8
    ctx->pc = 0x16D83Cu;
    SET_GPR_U32(ctx, 31, 0x16D844u);
    ctx->pc = 0x16D840u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16DB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DB20_0x16db20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D844u; }
    }
    if (ctx->pc != 0x16D844u) { return; }
    ctx->pc = 0x16D844u;
    // 0x16d844: 0x280202d
    ctx->pc = 0x16d844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d848: 0xc05b80e
    ctx->pc = 0x16D848u;
    SET_GPR_U32(ctx, 31, 0x16D850u);
    ctx->pc = 0x16D84Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E038u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E038_0x16e038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D850u; }
    }
    if (ctx->pc != 0x16D850u) { return; }
    ctx->pc = 0x16D850u;
    // 0x16d850: 0x280202d
    ctx->pc = 0x16d850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d854: 0xc05b838
    ctx->pc = 0x16D854u;
    SET_GPR_U32(ctx, 31, 0x16D85Cu);
    ctx->pc = 0x16D858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E0E0_0x16e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D85Cu; }
    }
    if (ctx->pc != 0x16D85Cu) { return; }
    ctx->pc = 0x16D85Cu;
    // 0x16d85c: 0x280202d
    ctx->pc = 0x16d85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d860: 0x2c0282d
    ctx->pc = 0x16d860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d864: 0x2a0302d
    ctx->pc = 0x16d864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d868: 0xc05b88c
    ctx->pc = 0x16D868u;
    SET_GPR_U32(ctx, 31, 0x16D870u);
    ctx->pc = 0x16D86Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E230_0x16e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D870u; }
    }
    if (ctx->pc != 0x16D870u) { return; }
    ctx->pc = 0x16D870u;
label_16d870:
    // 0x16d870: 0xdfb00010
    ctx->pc = 0x16d870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d874:
    // 0x16d874: 0xdfb10018
    ctx->pc = 0x16d874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d878: 0xdfb20020
    ctx->pc = 0x16d878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d87c: 0xdfb30028
    ctx->pc = 0x16d87cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16d880: 0xdfb40030
    ctx->pc = 0x16d880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d884: 0xdfb50038
    ctx->pc = 0x16d884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d888: 0xdfb60040
    ctx->pc = 0x16d888u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d88c: 0xdfb70048
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16d890: 0xdfbe0050
    ctx->pc = 0x16d890u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d894: 0xdfbf0058
    ctx->pc = 0x16d894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16d898: 0x3e00008
    ctx->pc = 0x16D898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D89Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D7F8u: goto label_16d7f8;
            case 0x16D818u: goto label_16d818;
            case 0x16D81Cu: goto label_16d81c;
            case 0x16D870u: goto label_16d870;
            case 0x16D874u: goto label_16d874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D8A0u;
}
