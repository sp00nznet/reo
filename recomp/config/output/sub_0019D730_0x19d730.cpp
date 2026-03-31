#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0019D730
// Address: 0x19d730 - 0x19d910
void sub_0019D730_0x19d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x19d730u;

    // 0x19d730: 0x27bdff50
    ctx->pc = 0x19d730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19d734: 0x102d
    ctx->pc = 0x19d734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d738: 0xffbf0090
    ctx->pc = 0x19d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19d73c: 0x7fbe0080
    ctx->pc = 0x19d73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19d740: 0x7fb70070
    ctx->pc = 0x19d740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19d744: 0x7fb60060
    ctx->pc = 0x19d744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19d748: 0xa0b82d
    ctx->pc = 0x19d748u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d74c: 0x7fb50050
    ctx->pc = 0x19d74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19d750: 0x80b02d
    ctx->pc = 0x19d750u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d754: 0x7fb40040
    ctx->pc = 0x19d754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19d758: 0x7fb30030
    ctx->pc = 0x19d758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19d75c: 0xa02d
    ctx->pc = 0x19d75cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d760: 0x7fb20020
    ctx->pc = 0x19d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d764: 0x7fb10010
    ctx->pc = 0x19d764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d768: 0x902d
    ctx->pc = 0x19d768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d76c: 0x10000046
    ctx->pc = 0x19D76Cu;
    {
        const bool branch_taken_0x19d76c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D770u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        if (branch_taken_0x19d76c) {
            ctx->pc = 0x19D888u;
            goto label_19d888;
        }
    }
    ctx->pc = 0x19D774u;
label_19d774:
    // 0x19d774: 0x3c06002a
    ctx->pc = 0x19d774u;
    SET_GPR_U32(ctx, 6, ((uint32_t)42 << 16));
    // 0x19d778: 0x2e31821
    ctx->pc = 0x19d778u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x19d77c: 0x3c04ffff
    ctx->pc = 0x19d77cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x19d780: 0x8c650000
    ctx->pc = 0x19d780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d784: 0x24c68680
    ctx->pc = 0x19d784u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294936192));
    // 0x19d788: 0x982d
    ctx->pc = 0x19d788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d78c: 0xa42024
    ctx->pc = 0x19d78cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19d790: 0x30b1ffff
    ctx->pc = 0x19d790u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 65535));
    // 0x19d794: 0x48402
    ctx->pc = 0x19d794u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 4), 16));
    // 0x19d798: 0x2627ffff
    ctx->pc = 0x19d798u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19d79c: 0x720c0
    ctx->pc = 0x19d79cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 7), 3));
    // 0x19d7a0: 0x3c030029
    ctx->pc = 0x19d7a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
    // 0x19d7a4: 0x2605ffff
    ctx->pc = 0x19d7a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x19d7a8: 0x873823
    ctx->pc = 0x19d7a8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x19d7ac: 0x520c0
    ctx->pc = 0x19d7acu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x19d7b0: 0x24634e80
    ctx->pc = 0x19d7b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20096));
    // 0x19d7b4: 0x852023
    ctx->pc = 0x19d7b4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19d7b8: 0x420c0
    ctx->pc = 0x19d7b8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x19d7bc: 0x728c0
    ctx->pc = 0x19d7bcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 3));
    // 0x19d7c0: 0x641821
    ctx->pc = 0x19d7c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d7c4: 0xc5f021
    ctx->pc = 0x19d7c4u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19d7c8: 0xafa300a0
    ctx->pc = 0x19d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_19d7cc:
    // 0x19d7cc: 0x16600007
    ctx->pc = 0x19D7CCu;
    {
        const bool branch_taken_0x19d7cc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x19d7cc) {
            ctx->pc = 0x19D7ECu;
            goto label_19d7ec;
        }
    }
    ctx->pc = 0x19D7D4u;
    // 0x19d7d4: 0x12200027
    ctx->pc = 0x19D7D4u;
    {
        const bool branch_taken_0x19d7d4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D7D8u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 17), 256));
        if (branch_taken_0x19d7d4) {
            ctx->pc = 0x19D874u;
            goto label_19d874;
        }
    }
    ctx->pc = 0x19D7DCu;
    // 0x19d7dc: 0x10200025
    ctx->pc = 0x19D7DCu;
    {
        const bool branch_taken_0x19d7dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D7E0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d7dc) {
            ctx->pc = 0x19D874u;
            goto label_19d874;
        }
    }
    ctx->pc = 0x19D7E4u;
    // 0x19d7e4: 0x10000007
    ctx->pc = 0x19D7E4u;
    {
        const bool branch_taken_0x19d7e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D7E8u;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
        if (branch_taken_0x19d7e4) {
            ctx->pc = 0x19D804u;
            goto label_19d804;
        }
    }
    ctx->pc = 0x19D7ECu;
label_19d7ec:
    // 0x19d7ec: 0x12000021
    ctx->pc = 0x19D7ECu;
    {
        const bool branch_taken_0x19d7ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D7F0u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x19d7ec) {
            ctx->pc = 0x19D874u;
            goto label_19d874;
        }
    }
    ctx->pc = 0x19D7F4u;
    // 0x19d7f4: 0x1020001f
    ctx->pc = 0x19D7F4u;
    {
        const bool branch_taken_0x19d7f4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d7f4) {
            ctx->pc = 0x19D874u;
            goto label_19d874;
        }
    }
    ctx->pc = 0x19D7FCu;
    // 0x19d7fc: 0x8fb500a0
    ctx->pc = 0x19d7fcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19d800: 0x82a30035
    ctx->pc = 0x19d800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
label_19d804:
    // 0x19d804: 0x1460001b
    ctx->pc = 0x19D804u;
    {
        const bool branch_taken_0x19d804 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19d804) {
            ctx->pc = 0x19D874u;
            goto label_19d874;
        }
    }
    ctx->pc = 0x19D80Cu;
    // 0x19d80c: 0x86a50012
    ctx->pc = 0x19d80cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x19d810: 0xc067c10
    ctx->pc = 0x19D810u;
    SET_GPR_U32(ctx, 31, 0x19D818u);
    ctx->pc = 0x19D814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    ctx->pc = 0x19F040u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F040_0x19f040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D818u; }
    }
    if (ctx->pc != 0x19D818u) { return; }
    ctx->pc = 0x19D818u;
    // 0x19d818: 0x2403ffff
    ctx->pc = 0x19d818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d81c: 0x10430007
    ctx->pc = 0x19D81Cu;
    {
        const bool branch_taken_0x19d81c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x19D820u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d81c) {
            ctx->pc = 0x19D83Cu;
            goto label_19d83c;
        }
    }
    ctx->pc = 0x19D824u;
    // 0x19d824: 0x40202d
    ctx->pc = 0x19d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d828: 0xc067b24
    ctx->pc = 0x19D828u;
    SET_GPR_U32(ctx, 31, 0x19D830u);
    ctx->pc = 0x19D82Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EC90_0x19ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D830u; }
    }
    if (ctx->pc != 0x19D830u) { return; }
    ctx->pc = 0x19D830u;
    // 0x19d830: 0x1000000c
    ctx->pc = 0x19D830u;
    {
        const bool branch_taken_0x19d830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D834u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d830) {
            ctx->pc = 0x19D864u;
            goto label_19d864;
        }
    }
    ctx->pc = 0x19D838u;
label_19d838:
    // 0x19d838: 0x2a0202d
    ctx->pc = 0x19d838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d83c:
    // 0x19d83c: 0x2e0282d
    ctx->pc = 0x19d83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d840: 0xc067c44
    ctx->pc = 0x19D840u;
    SET_GPR_U32(ctx, 31, 0x19D848u);
    ctx->pc = 0x19D844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F110_0x19f110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D848u; }
    }
    if (ctx->pc != 0x19D848u) { return; }
    ctx->pc = 0x19D848u;
    // 0x19d848: 0x2403ffff
    ctx->pc = 0x19d848u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d84c: 0x1043fffa
    ctx->pc = 0x19D84Cu;
    {
        const bool branch_taken_0x19d84c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x19d84c) {
            ctx->pc = 0x19D838u;
            goto label_19d838;
        }
    }
    ctx->pc = 0x19D854u;
    // 0x19d854: 0x40202d
    ctx->pc = 0x19d854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d858: 0xc067b64
    ctx->pc = 0x19D858u;
    SET_GPR_U32(ctx, 31, 0x19D860u);
    ctx->pc = 0x19D85Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19ED90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019ED90_0x19ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D860u; }
    }
    if (ctx->pc != 0x19D860u) { return; }
    ctx->pc = 0x19D860u;
    // 0x19d860: 0x2a0202d
    ctx->pc = 0x19d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19d864:
    // 0x19d864: 0xc067390
    ctx->pc = 0x19D864u;
    SET_GPR_U32(ctx, 31, 0x19D86Cu);
    ctx->pc = 0x19CE40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CE40_0x19ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D86Cu; }
    }
    if (ctx->pc != 0x19D86Cu) { return; }
    ctx->pc = 0x19D86Cu;
    // 0x19d86c: 0x2a0102d
    ctx->pc = 0x19d86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d870: 0x26520001
    ctx->pc = 0x19d870u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_19d874:
    // 0x19d874: 0x26730001
    ctx->pc = 0x19d874u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x19d878: 0x2a630002
    ctx->pc = 0x19d878u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), 2));
    // 0x19d87c: 0x1460ffd3
    ctx->pc = 0x19D87Cu;
    {
        const bool branch_taken_0x19d87c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x19d87c) {
            ctx->pc = 0x19D7CCu;
            goto label_19d7cc;
        }
    }
    ctx->pc = 0x19D884u;
    // 0x19d884: 0x26940001
    ctx->pc = 0x19d884u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_19d888:
    // 0x19d888: 0x296182a
    ctx->pc = 0x19d888u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 22)));
    // 0x19d88c: 0x1460ffb9
    ctx->pc = 0x19D88Cu;
    {
        const bool branch_taken_0x19d88c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19D890u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x19d88c) {
            ctx->pc = 0x19D774u;
            goto label_19d774;
        }
    }
    ctx->pc = 0x19D894u;
    // 0x19d894: 0x10400011
    ctx->pc = 0x19D894u;
    {
        const bool branch_taken_0x19d894 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D898u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d894) {
            ctx->pc = 0x19D8DCu;
            goto label_19d8dc;
        }
    }
    ctx->pc = 0x19D89Cu;
    // 0x19d89c: 0xc06322c
    ctx->pc = 0x19D89Cu;
    SET_GPR_U32(ctx, 31, 0x19D8A4u);
    ctx->pc = 0x18C8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018C8B0_0x18c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8A4u; }
    }
    if (ctx->pc != 0x19D8A4u) { return; }
    ctx->pc = 0x19D8A4u;
    // 0x19d8a4: 0x40202d
    ctx->pc = 0x19d8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8a8: 0xc063774
    ctx->pc = 0x19D8A8u;
    SET_GPR_U32(ctx, 31, 0x19D8B0u);
    ctx->pc = 0x19D8ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x18DDD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DDD0_0x18ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8B0u; }
    }
    if (ctx->pc != 0x19D8B0u) { return; }
    ctx->pc = 0x19D8B0u;
    // 0x19d8b0: 0x40802d
    ctx->pc = 0x19d8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8b4: 0x24050001
    ctx->pc = 0x19d8b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d8b8: 0xc063340
    ctx->pc = 0x19D8B8u;
    SET_GPR_U32(ctx, 31, 0x19D8C0u);
    ctx->pc = 0x19D8BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CD00_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8C0u; }
    }
    if (ctx->pc != 0x19D8C0u) { return; }
    ctx->pc = 0x19D8C0u;
    // 0x19d8c0: 0x10293c
    ctx->pc = 0x19d8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 4));
    // 0x19d8c4: 0x3c07002a
    ctx->pc = 0x19d8c4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)42 << 16));
    // 0x19d8c8: 0x5293e
    ctx->pc = 0x19d8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x19d8cc: 0x200302d
    ctx->pc = 0x19d8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8d0: 0x202d
    ctx->pc = 0x19d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8d4: 0xc0633ec
    ctx->pc = 0x19D8D4u;
    SET_GPR_U32(ctx, 31, 0x19D8DCu);
    ctx->pc = 0x19D8D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294964976));
    ctx->pc = 0x18CFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CFB0_0x18cfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D8DCu; }
    }
    if (ctx->pc != 0x19D8DCu) { return; }
    ctx->pc = 0x19D8DCu;
label_19d8dc:
    // 0x19d8dc: 0x240102d
    ctx->pc = 0x19d8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d8e0: 0xdfbf0090
    ctx->pc = 0x19d8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19d8e4: 0x7bbe0080
    ctx->pc = 0x19d8e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19d8e8: 0x7bb70070
    ctx->pc = 0x19d8e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19d8ec: 0x7bb60060
    ctx->pc = 0x19d8ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19d8f0: 0x7bb50050
    ctx->pc = 0x19d8f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d8f4: 0x7bb40040
    ctx->pc = 0x19d8f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d8f8: 0x7bb30030
    ctx->pc = 0x19d8f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d8fc: 0x7bb20020
    ctx->pc = 0x19d8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d900: 0x7bb10010
    ctx->pc = 0x19d900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d904: 0x7bb00000
    ctx->pc = 0x19d904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d908: 0x3e00008
    ctx->pc = 0x19D908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D90Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D774u: goto label_19d774;
            case 0x19D7CCu: goto label_19d7cc;
            case 0x19D7ECu: goto label_19d7ec;
            case 0x19D804u: goto label_19d804;
            case 0x19D838u: goto label_19d838;
            case 0x19D83Cu: goto label_19d83c;
            case 0x19D864u: goto label_19d864;
            case 0x19D874u: goto label_19d874;
            case 0x19D888u: goto label_19d888;
            case 0x19D8DCu: goto label_19d8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D910u;
}
