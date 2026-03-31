#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_0016EC90
// Address: 0x16ec90 - 0x16ef18
void sub_0016EC90_0x16ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x16ec90u;

    // 0x16ec90: 0x27bdff70
    ctx->pc = 0x16ec90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16ec94: 0xffb30058
    ctx->pc = 0x16ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x16ec98: 0x80982d
    ctx->pc = 0x16ec98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec9c: 0xffb60070
    ctx->pc = 0x16ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x16eca0: 0x2676098c
    ctx->pc = 0x16eca0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 2444));
    // 0x16eca4: 0xffb70078
    ctx->pc = 0x16eca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x16eca8: 0xa0b82d
    ctx->pc = 0x16eca8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecac: 0xffbe0080
    ctx->pc = 0x16ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x16ecb0: 0x2662094c
    ctx->pc = 0x16ecb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 2380));
    // 0x16ecb4: 0xffb00040
    ctx->pc = 0x16ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x16ecb8: 0x3a0302d
    ctx->pc = 0x16ecb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecbc: 0xffb10048
    ctx->pc = 0x16ecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x16ecc0: 0x27a70030
    ctx->pc = 0x16ecc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x16ecc4: 0xffb20050
    ctx->pc = 0x16ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x16ecc8: 0xffb40060
    ctx->pc = 0x16ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x16eccc: 0xffb50068
    ctx->pc = 0x16ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x16ecd0: 0xffbf0088
    ctx->pc = 0x16ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x16ecd4: 0x8e741b30
    ctx->pc = 0x16ecd4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 6960)));
    // 0x16ecd8: 0xafa20034
    ctx->pc = 0x16ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x16ecdc: 0x269e008c
    ctx->pc = 0x16ecdcu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 20), 140));
    // 0x16ece0: 0x8e820000
    ctx->pc = 0x16ece0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ece4: 0x3c0282d
    ctx->pc = 0x16ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ece8: 0xc05bbc6
    ctx->pc = 0x16ECE8u;
    SET_GPR_U32(ctx, 31, 0x16ECF0u);
    ctx->pc = 0x16ECECu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x16EF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF18_0x16ef18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECF0u; }
    }
    if (ctx->pc != 0x16ECF0u) { return; }
    ctx->pc = 0x16ECF0u;
    // 0x16ecf0: 0x1440007c
    ctx->pc = 0x16ECF0u;
    {
        const bool branch_taken_0x16ecf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16ECF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ecf0) {
            ctx->pc = 0x16EEE4u;
            goto label_16eee4;
        }
    }
    ctx->pc = 0x16ECF8u;
    // 0x16ecf8: 0x8fa20030
    ctx->pc = 0x16ecf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ecfc: 0x26850948
    ctx->pc = 0x16ecfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 2376));
    // 0x16ed00: 0xc05bd96
    ctx->pc = 0x16ED00u;
    SET_GPR_U32(ctx, 31, 0x16ED08u);
    ctx->pc = 0x16ED04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->pc = 0x16F658u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F658_0x16f658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED08u; }
    }
    if (ctx->pc != 0x16ED08u) { return; }
    ctx->pc = 0x16ED08u;
    // 0x16ed08: 0xc05bc8c
    ctx->pc = 0x16ED08u;
    SET_GPR_U32(ctx, 31, 0x16ED10u);
    ctx->pc = 0x16ED0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F230_0x16f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED10u; }
    }
    if (ctx->pc != 0x16ED10u) { return; }
    ctx->pc = 0x16ED10u;
    // 0x16ed10: 0xc05fa1c
    ctx->pc = 0x16ED10u;
    SET_GPR_U32(ctx, 31, 0x16ED18u);
    ctx->pc = 0x17E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E870_0x17e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED18u; }
    }
    if (ctx->pc != 0x16ED18u) { return; }
    ctx->pc = 0x16ED18u;
    // 0x16ed18: 0x2e0202d
    ctx->pc = 0x16ed18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed1c: 0x282d
    ctx->pc = 0x16ed1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed20: 0x24060001
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ed24: 0xc04fffa
    ctx->pc = 0x16ED24u;
    SET_GPR_U32(ctx, 31, 0x16ED2Cu);
    ctx->pc = 0x16ED28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFE8_0x13ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED2Cu; }
    }
    if (ctx->pc != 0x16ED2Cu) { return; }
    ctx->pc = 0x16ED2Cu;
    // 0x16ed2c: 0x2e0282d
    ctx->pc = 0x16ed2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed30: 0x8fa40038
    ctx->pc = 0x16ed30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ed34: 0x3a0302d
    ctx->pc = 0x16ed34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed38: 0x260382d
    ctx->pc = 0x16ed38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed3c: 0xc05c744
    ctx->pc = 0x16ED3Cu;
    SET_GPR_U32(ctx, 31, 0x16ED44u);
    ctx->pc = 0x16ED40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00171D10_0x171d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED44u; }
    }
    if (ctx->pc != 0x16ED44u) { return; }
    ctx->pc = 0x16ED44u;
    // 0x16ed44: 0x2e0202d
    ctx->pc = 0x16ed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed48: 0x24060001
    ctx->pc = 0x16ed48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ed4c: 0x282d
    ctx->pc = 0x16ed4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed50: 0xc04fffa
    ctx->pc = 0x16ED50u;
    SET_GPR_U32(ctx, 31, 0x16ED58u);
    ctx->pc = 0x16ED54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FFE8_0x13ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED58u; }
    }
    if (ctx->pc != 0x16ED58u) { return; }
    ctx->pc = 0x16ED58u;
    // 0x16ed58: 0xc05fa1c
    ctx->pc = 0x16ED58u;
    SET_GPR_U32(ctx, 31, 0x16ED60u);
    ctx->pc = 0x16ED5Cu;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x17E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E870_0x17e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED60u; }
    }
    if (ctx->pc != 0x16ED60u) { return; }
    ctx->pc = 0x16ED60u;
    // 0x16ed60: 0x8fc40018
    ctx->pc = 0x16ed60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x16ed64: 0x52282f
    ctx->pc = 0x16ed64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x16ed68: 0x42140
    ctx->pc = 0x16ed68u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x16ed6c: 0x2642021
    ctx->pc = 0x16ed6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x16ed70: 0xc05dd1c
    ctx->pc = 0x16ED70u;
    SET_GPR_U32(ctx, 31, 0x16ED78u);
    ctx->pc = 0x16ED74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10944));
    ctx->pc = 0x177470u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00177470_0x177470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED78u; }
    }
    if (ctx->pc != 0x16ED78u) { return; }
    ctx->pc = 0x16ED78u;
    // 0x16ed78: 0x8ec2000c
    ctx->pc = 0x16ed78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x16ed7c: 0x8fa60028
    ctx->pc = 0x16ed7cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ed80: 0x3c07ff00
    ctx->pc = 0x16ed80u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65280 << 16));
    // 0x16ed84: 0x8fa8002c
    ctx->pc = 0x16ed84u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x16ed88: 0x220282d
    ctx->pc = 0x16ed88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed8c: 0x8ec30010
    ctx->pc = 0x16ed8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x16ed90: 0x461021
    ctx->pc = 0x16ed90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16ed94: 0xaec2000c
    ctx->pc = 0x16ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x16ed98: 0x260202d
    ctx->pc = 0x16ed98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed9c: 0x681821
    ctx->pc = 0x16ed9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x16eda0: 0x2a0302d
    ctx->pc = 0x16eda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eda4: 0xaec30010
    ctx->pc = 0x16eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x16eda8: 0xc05b592
    ctx->pc = 0x16EDA8u;
    SET_GPR_U32(ctx, 31, 0x16EDB0u);
    ctx->pc = 0x16EDACu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 3846));
    ctx->pc = 0x16D648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D648_0x16d648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDB0u; }
    }
    if (ctx->pc != 0x16EDB0u) { return; }
    ctx->pc = 0x16EDB0u;
    // 0x16edb0: 0x260202d
    ctx->pc = 0x16edb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edb4: 0x40802d
    ctx->pc = 0x16edb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edb8: 0xc05b572
    ctx->pc = 0x16EDB8u;
    SET_GPR_U32(ctx, 31, 0x16EDC0u);
    ctx->pc = 0x16EDBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D5C8_0x16d5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDC0u; }
    }
    if (ctx->pc != 0x16EDC0u) { return; }
    ctx->pc = 0x16EDC0u;
    // 0x16edc0: 0x12000005
    ctx->pc = 0x16EDC0u;
    {
        const bool branch_taken_0x16edc0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x16edc0) {
            ctx->pc = 0x16EDD8u;
            goto label_16edd8;
        }
    }
    ctx->pc = 0x16EDC8u;
    // 0x16edc8: 0xc05c1b4
    ctx->pc = 0x16EDC8u;
    SET_GPR_U32(ctx, 31, 0x16EDD0u);
    ctx->pc = 0x16EDCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1706D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001706D0_0x1706d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDD0u; }
    }
    if (ctx->pc != 0x16EDD0u) { return; }
    ctx->pc = 0x16EDD0u;
    // 0x16edd0: 0x10000044
    ctx->pc = 0x16EDD0u;
    {
        const bool branch_taken_0x16edd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EDD4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16edd0) {
            ctx->pc = 0x16EEE4u;
            goto label_16eee4;
        }
    }
    ctx->pc = 0x16EDD8u;
label_16edd8:
    // 0x16edd8: 0x5aa0003d
    ctx->pc = 0x16EDD8u;
    {
        const bool branch_taken_0x16edd8 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x16edd8) {
            ctx->pc = 0x16EDDCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 308)));
            ctx->pc = 0x16EED0u;
            goto label_16eed0;
        }
    }
    ctx->pc = 0x16EDE0u;
    // 0x16ede0: 0x282d
    ctx->pc = 0x16ede0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ede4: 0xc05c160
    ctx->pc = 0x16EDE4u;
    SET_GPR_U32(ctx, 31, 0x16EDECu);
    ctx->pc = 0x16EDE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00170580_0x170580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDECu; }
    }
    if (ctx->pc != 0x16EDECu) { return; }
    ctx->pc = 0x16EDECu;
    // 0x16edec: 0x260202d
    ctx->pc = 0x16edecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edf0: 0xc05bcce
    ctx->pc = 0x16EDF0u;
    SET_GPR_U32(ctx, 31, 0x16EDF8u);
    ctx->pc = 0x16EDF4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x16F338u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F338_0x16f338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDF8u; }
    }
    if (ctx->pc != 0x16EDF8u) { return; }
    ctx->pc = 0x16EDF8u;
    // 0x16edf8: 0x260202d
    ctx->pc = 0x16edf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16edfc: 0x8fa50030
    ctx->pc = 0x16edfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ee00: 0xc05bd0e
    ctx->pc = 0x16EE00u;
    SET_GPR_U32(ctx, 31, 0x16EE08u);
    ctx->pc = 0x16EE04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16F438u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F438_0x16f438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE08u; }
    }
    if (ctx->pc != 0x16EE08u) { return; }
    ctx->pc = 0x16EE08u;
    // 0x16ee08: 0x8e840088
    ctx->pc = 0x16ee08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x16ee0c: 0x8fa20030
    ctx->pc = 0x16ee0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ee10: 0x24060003
    ctx->pc = 0x16ee10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ee14: 0x8fc50038
    ctx->pc = 0x16ee14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x16ee18: 0xac44001c
    ctx->pc = 0x16ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x16ee1c: 0x8fa20028
    ctx->pc = 0x16ee1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ee20: 0x8fa30030
    ctx->pc = 0x16ee20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ee24: 0xac620014
    ctx->pc = 0x16ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x16ee28: 0x8fa40030
    ctx->pc = 0x16ee28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ee2c: 0x8fa2002c
    ctx->pc = 0x16ee2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x16ee30: 0x10a60007
    ctx->pc = 0x16EE30u;
    {
        const bool branch_taken_0x16ee30 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 6));
        ctx->pc = 0x16EE34u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x16ee30) {
            ctx->pc = 0x16EE50u;
            goto label_16ee50;
        }
    }
    ctx->pc = 0x16EE38u;
    // 0x16ee38: 0x8e820134
    ctx->pc = 0x16ee38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x16ee3c: 0x54400005
    ctx->pc = 0x16EE3Cu;
    {
        const bool branch_taken_0x16ee3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16ee3c) {
            ctx->pc = 0x16EE40u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 0));
            ctx->pc = 0x16EE54u;
            goto label_16ee54;
        }
    }
    ctx->pc = 0x16EE44u;
    // 0x16ee44: 0x8fa20030
    ctx->pc = 0x16ee44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ee48: 0x10000002
    ctx->pc = 0x16EE48u;
    {
        const bool branch_taken_0x16ee48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EE4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
        if (branch_taken_0x16ee48) {
            ctx->pc = 0x16EE54u;
            goto label_16ee54;
        }
    }
    ctx->pc = 0x16EE50u;
label_16ee50:
    // 0x16ee50: 0xae800134
    ctx->pc = 0x16ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 0));
label_16ee54:
    // 0x16ee54: 0x8e820134
    ctx->pc = 0x16ee54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x16ee58: 0x14400022
    ctx->pc = 0x16EE58u;
    {
        const bool branch_taken_0x16ee58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EE5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ee58) {
            ctx->pc = 0x16EEE4u;
            goto label_16eee4;
        }
    }
    ctx->pc = 0x16EE60u;
    // 0x16ee60: 0x8e630038
    ctx->pc = 0x16ee60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16ee64: 0x24020003
    ctx->pc = 0x16ee64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ee68: 0x1462000b
    ctx->pc = 0x16EE68u;
    {
        const bool branch_taken_0x16ee68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16ee68) {
            ctx->pc = 0x16EE98u;
            goto label_16ee98;
        }
    }
    ctx->pc = 0x16EE70u;
    // 0x16ee70: 0x8fc20018
    ctx->pc = 0x16ee70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x16ee74: 0x2442ffff
    ctx->pc = 0x16ee74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ee78: 0x2c420002
    ctx->pc = 0x16ee78u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x16ee7c: 0x10400006
    ctx->pc = 0x16EE7Cu;
    {
        const bool branch_taken_0x16ee7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ee7c) {
            ctx->pc = 0x16EE98u;
            goto label_16ee98;
        }
    }
    ctx->pc = 0x16EE84u;
    // 0x16ee84: 0xc05c1be
    ctx->pc = 0x16EE84u;
    SET_GPR_U32(ctx, 31, 0x16EE8Cu);
    ctx->pc = 0x16EE88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1706F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001706F8_0x1706f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE8Cu; }
    }
    if (ctx->pc != 0x16EE8Cu) { return; }
    ctx->pc = 0x16EE8Cu;
    // 0x16ee8c: 0x10000005
    ctx->pc = 0x16EE8Cu;
    {
        const bool branch_taken_0x16ee8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EE90u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x16ee8c) {
            ctx->pc = 0x16EEA4u;
            goto label_16eea4;
        }
    }
    ctx->pc = 0x16EE94u;
    // 0x16ee94: 0x0
    ctx->pc = 0x16ee94u;
    // NOP
label_16ee98:
    // 0x16ee98: 0xc05c1b8
    ctx->pc = 0x16EE98u;
    SET_GPR_U32(ctx, 31, 0x16EEA0u);
    ctx->pc = 0x16EE9Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1706E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001706E0_0x1706e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEA0u; }
    }
    if (ctx->pc != 0x16EEA0u) { return; }
    ctx->pc = 0x16EEA0u;
    // 0x16eea0: 0x8fa20034
    ctx->pc = 0x16eea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_16eea4:
    // 0x16eea4: 0x8fa40038
    ctx->pc = 0x16eea4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16eea8: 0x2446000c
    ctx->pc = 0x16eea8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 12));
    // 0x16eeac: 0xc056d84
    ctx->pc = 0x16EEACu;
    SET_GPR_U32(ctx, 31, 0x16EEB4u);
    ctx->pc = 0x16EEB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 8));
    ctx->pc = 0x15B610u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B610_0x15b610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEB4u; }
    }
    if (ctx->pc != 0x16EEB4u) { return; }
    ctx->pc = 0x16EEB4u;
    // 0x16eeb4: 0x260202d
    ctx->pc = 0x16eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eeb8: 0x8fc60018
    ctx->pc = 0x16eeb8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x16eebc: 0xc05ce30
    ctx->pc = 0x16EEBCu;
    SET_GPR_U32(ctx, 31, 0x16EEC4u);
    ctx->pc = 0x16EEC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1738C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001738C0_0x1738c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEC4u; }
    }
    if (ctx->pc != 0x16EEC4u) { return; }
    ctx->pc = 0x16EEC4u;
    // 0x16eec4: 0x10000006
    ctx->pc = 0x16EEC4u;
    {
        const bool branch_taken_0x16eec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16EEC8u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 0));
        if (branch_taken_0x16eec4) {
            ctx->pc = 0x16EEE0u;
            goto label_16eee0;
        }
    }
    ctx->pc = 0x16EECCu;
    // 0x16eecc: 0x0
    ctx->pc = 0x16eeccu;
    // NOP
label_16eed0:
    // 0x16eed0: 0x54400004
    ctx->pc = 0x16EED0u;
    {
        const bool branch_taken_0x16eed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16eed0) {
            ctx->pc = 0x16EED4u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16EEE4u;
            goto label_16eee4;
        }
    }
    ctx->pc = 0x16EED8u;
    // 0x16eed8: 0xc05c1b4
    ctx->pc = 0x16EED8u;
    SET_GPR_U32(ctx, 31, 0x16EEE0u);
    ctx->pc = 0x16EEDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1706D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001706D0_0x1706d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEE0u; }
    }
    if (ctx->pc != 0x16EEE0u) { return; }
    ctx->pc = 0x16EEE0u;
label_16eee0:
    // 0x16eee0: 0x102d
    ctx->pc = 0x16eee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16eee4:
    // 0x16eee4: 0xdfb00040
    ctx->pc = 0x16eee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16eee8: 0xdfb10048
    ctx->pc = 0x16eee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16eeec: 0xdfb20050
    ctx->pc = 0x16eeecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16eef0: 0xdfb30058
    ctx->pc = 0x16eef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16eef4: 0xdfb40060
    ctx->pc = 0x16eef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16eef8: 0xdfb50068
    ctx->pc = 0x16eef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16eefc: 0xdfb60070
    ctx->pc = 0x16eefcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16ef00: 0xdfb70078
    ctx->pc = 0x16ef00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16ef04: 0xdfbe0080
    ctx->pc = 0x16ef04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16ef08: 0xdfbf0088
    ctx->pc = 0x16ef08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ef0c: 0x3e00008
    ctx->pc = 0x16EF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EDD8u: goto label_16edd8;
            case 0x16EE50u: goto label_16ee50;
            case 0x16EE54u: goto label_16ee54;
            case 0x16EE98u: goto label_16ee98;
            case 0x16EEA4u: goto label_16eea4;
            case 0x16EED0u: goto label_16eed0;
            case 0x16EEE0u: goto label_16eee0;
            case 0x16EEE4u: goto label_16eee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EF14u;
    // 0x16ef14: 0x0
    ctx->pc = 0x16ef14u;
    // NOP
}
