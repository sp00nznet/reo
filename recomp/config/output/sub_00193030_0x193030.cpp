#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193030
// Address: 0x193030 - 0x193140
void sub_00193030_0x193030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193030u;

label_193030:
    // 0x193030: 0x27bdffd0
    ctx->pc = 0x193030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193034: 0xffbf0020
    ctx->pc = 0x193034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193038: 0x7fb00010
    ctx->pc = 0x193038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19303c: 0xe7b40000
    ctx->pc = 0x19303cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193040: 0x80802d
    ctx->pc = 0x193040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193044: 0x46006506
    ctx->pc = 0x193044u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x193048: 0x202d
    ctx->pc = 0x193048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19304c:
    // 0x19304c: 0x41080
    ctx->pc = 0x19304cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x193050: 0x2021821
    ctx->pc = 0x193050u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x193054: 0x24840001
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x193058: 0xc46000dc
    ctx->pc = 0x193058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19305c: 0x2882000a
    ctx->pc = 0x19305cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x193060: 0x1440fffa
    ctx->pc = 0x193060u;
    {
        const bool branch_taken_0x193060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193064u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
        if (branch_taken_0x193060) {
            ctx->pc = 0x19304Cu;
            goto label_19304c;
        }
    }
    ctx->pc = 0x193068u;
    // 0x193068: 0x8e0400d4
    ctx->pc = 0x193068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x19306c: 0x1080000c
    ctx->pc = 0x19306Cu;
    {
        const bool branch_taken_0x19306c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x19306c) {
            ctx->pc = 0x1930A0u;
            goto label_1930a0;
        }
    }
    ctx->pc = 0x193074u;
    // 0x193074: 0xc064914
    ctx->pc = 0x193074u;
    SET_GPR_U32(ctx, 31, 0x19307Cu);
    ctx->pc = 0x192450u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192450_0x192450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19307Cu; }
    }
    if (ctx->pc != 0x19307Cu) { return; }
    ctx->pc = 0x19307Cu;
    // 0x19307c: 0x3c010029
    ctx->pc = 0x19307cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x193080: 0x8e0300d8
    ctx->pc = 0x193080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x193084: 0x8c224168
    ctx->pc = 0x193084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    // 0x193088: 0x260500dc
    ctx->pc = 0x193088u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 220));
    // 0x19308c: 0x26060104
    ctx->pc = 0x19308cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 260));
    // 0x193090: 0x2607015c
    ctx->pc = 0x193090u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 348));
    // 0x193094: 0x4600a306
    ctx->pc = 0x193094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x193098: 0xc064f20
    ctx->pc = 0x193098u;
    SET_GPR_U32(ctx, 31, 0x1930A0u);
    ctx->pc = 0x19309Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x193C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193C80_0x193c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930A0u; }
    }
    if (ctx->pc != 0x1930A0u) { return; }
    ctx->pc = 0x1930A0u;
label_1930a0:
    // 0x1930a0: 0x26040040
    ctx->pc = 0x1930a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x1930a4: 0xc064e68
    ctx->pc = 0x1930A4u;
    SET_GPR_U32(ctx, 31, 0x1930ACu);
    ctx->pc = 0x1930A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 260));
    ctx->pc = 0x1939A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001939A0_0x1939a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930ACu; }
    }
    if (ctx->pc != 0x1930ACu) { return; }
    ctx->pc = 0x1930ACu;
    // 0x1930ac: 0x8e0400d0
    ctx->pc = 0x1930acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1930b0: 0x10800003
    ctx->pc = 0x1930B0u;
    {
        const bool branch_taken_0x1930b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1930B4u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x1930b0) {
            ctx->pc = 0x1930C0u;
            goto label_1930c0;
        }
    }
    ctx->pc = 0x1930B8u;
    // 0x1930b8: 0xc064c0c
    ctx->pc = 0x1930B8u;
    SET_GPR_U32(ctx, 31, 0x1930C0u);
    ctx->pc = 0x193030u;
    goto label_193030;
    ctx->pc = 0x1930C0u;
label_1930c0:
    // 0x1930c0: 0x8e0400cc
    ctx->pc = 0x1930c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1930c4: 0x10800003
    ctx->pc = 0x1930C4u;
    {
        const bool branch_taken_0x1930c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1930C8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x1930c4) {
            ctx->pc = 0x1930D4u;
            goto label_1930d4;
        }
    }
    ctx->pc = 0x1930CCu;
    // 0x1930cc: 0xc064c0c
    ctx->pc = 0x1930CCu;
    SET_GPR_U32(ctx, 31, 0x1930D4u);
    ctx->pc = 0x193030u;
    goto label_193030;
    ctx->pc = 0x1930D4u;
label_1930d4:
    // 0x1930d4: 0xdfbf0020
    ctx->pc = 0x1930d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1930d8: 0xc7b40000
    ctx->pc = 0x1930d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1930dc: 0x7bb00010
    ctx->pc = 0x1930dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1930e0: 0x24020001
    ctx->pc = 0x1930e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1930e4: 0x3e00008
    ctx->pc = 0x1930E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1930E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193030u: goto label_193030;
            case 0x19304Cu: goto label_19304c;
            case 0x1930A0u: goto label_1930a0;
            case 0x1930C0u: goto label_1930c0;
            case 0x1930D4u: goto label_1930d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1930ECu;
    // 0x1930ec: 0x0
    ctx->pc = 0x1930ecu;
    // NOP
    // 0x1930f0: 0x27bdffd0
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1930f4: 0xffbf0020
    ctx->pc = 0x1930f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1930f8: 0x7fb00010
    ctx->pc = 0x1930f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1930fc: 0xe7b40000
    ctx->pc = 0x1930fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193100: 0xa0802d
    ctx->pc = 0x193100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193104: 0xc064b44
    ctx->pc = 0x193104u;
    SET_GPR_U32(ctx, 31, 0x19310Cu);
    ctx->pc = 0x193108u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x192D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D10_0x192d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19310Cu; }
    }
    if (ctx->pc != 0x19310Cu) { return; }
    ctx->pc = 0x19310Cu;
    // 0x19310c: 0x4600a306
    ctx->pc = 0x19310cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x193110: 0x40202d
    ctx->pc = 0x193110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193114: 0xc064c50
    ctx->pc = 0x193114u;
    SET_GPR_U32(ctx, 31, 0x19311Cu);
    ctx->pc = 0x193118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00193140_0x193140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19311Cu; }
    }
    if (ctx->pc != 0x19311Cu) { return; }
    ctx->pc = 0x19311Cu;
    // 0x19311c: 0xdfbf0020
    ctx->pc = 0x19311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193120: 0xc7b40000
    ctx->pc = 0x193120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193124: 0x7bb00010
    ctx->pc = 0x193124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193128: 0x24020001
    ctx->pc = 0x193128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19312c: 0x3e00008
    ctx->pc = 0x19312Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193130u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193030u: goto label_193030;
            case 0x19304Cu: goto label_19304c;
            case 0x1930A0u: goto label_1930a0;
            case 0x1930C0u: goto label_1930c0;
            case 0x1930D4u: goto label_1930d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193134u;
    // 0x193134: 0x0
    ctx->pc = 0x193134u;
    // NOP
    // 0x193138: 0x0
    ctx->pc = 0x193138u;
    // NOP
    // 0x19313c: 0x0
    ctx->pc = 0x19313cu;
    // NOP
}
