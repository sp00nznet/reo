#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001AF0C0
// Address: 0x1af0c0 - 0x1af1e0
void sub_001AF0C0_0x1af0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1af0c0u;

    // 0x1af0c0: 0x24022710
    ctx->pc = 0x1af0c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1af0c4: 0x27bdffd0
    ctx->pc = 0x1af0c4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af0c8: 0x44820000
    ctx->pc = 0x1af0c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1af0cc: 0xffbf0010
    ctx->pc = 0x1af0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af0d0: 0x7fb00000
    ctx->pc = 0x1af0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1af0d4: 0x3c0343fa
    ctx->pc = 0x1af0d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17402 << 16));
    // 0x1af0d8: 0x46800020
    ctx->pc = 0x1af0d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1af0dc: 0x80802d
    ctx->pc = 0x1af0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0e0: 0xafa3002c
    ctx->pc = 0x1af0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1af0e4: 0xc06bddc
    ctx->pc = 0x1AF0E4u;
    SET_GPR_U32(ctx, 31, 0x1AF0ECu);
    ctx->pc = 0x1AF0E8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x1AF770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF770_0x1af770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF0ECu; }
    }
    if (ctx->pc != 0x1AF0ECu) { return; }
    ctx->pc = 0x1AF0ECu;
    // 0x1af0ec: 0x16000026
    ctx->pc = 0x1AF0ECu;
    {
        const bool branch_taken_0x1af0ec = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1af0ec) {
            ctx->pc = 0x1AF188u;
            goto label_1af188;
        }
    }
    ctx->pc = 0x1AF0F4u;
    // 0x1af0f4: 0x2404000e
    ctx->pc = 0x1af0f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1af0f8: 0xc06bde0
    ctx->pc = 0x1AF0F8u;
    SET_GPR_U32(ctx, 31, 0x1AF100u);
    ctx->pc = 0x1AF0FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF100u; }
    }
    if (ctx->pc != 0x1AF100u) { return; }
    ctx->pc = 0x1AF100u;
    // 0x1af100: 0x24040001
    ctx->pc = 0x1af100u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af104: 0xc06bde0
    ctx->pc = 0x1AF104u;
    SET_GPR_U32(ctx, 31, 0x1AF10Cu);
    ctx->pc = 0x1AF108u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF10Cu; }
    }
    if (ctx->pc != 0x1AF10Cu) { return; }
    ctx->pc = 0x1AF10Cu;
    // 0x1af10c: 0x24040015
    ctx->pc = 0x1af10cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1af110: 0xc06bde0
    ctx->pc = 0x1AF110u;
    SET_GPR_U32(ctx, 31, 0x1AF118u);
    ctx->pc = 0x1AF114u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF118u; }
    }
    if (ctx->pc != 0x1AF118u) { return; }
    ctx->pc = 0x1AF118u;
    // 0x1af118: 0x24040012
    ctx->pc = 0x1af118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1af11c: 0xc06bde0
    ctx->pc = 0x1AF11Cu;
    SET_GPR_U32(ctx, 31, 0x1AF124u);
    ctx->pc = 0x1AF120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF124u; }
    }
    if (ctx->pc != 0x1AF124u) { return; }
    ctx->pc = 0x1AF124u;
    // 0x1af124: 0x3c0280ff
    ctx->pc = 0x1af124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)33023 << 16));
    // 0x1af128: 0x2404000f
    ctx->pc = 0x1af128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1af12c: 0xc06bde0
    ctx->pc = 0x1AF12Cu;
    SET_GPR_U32(ctx, 31, 0x1AF134u);
    ctx->pc = 0x1AF130u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 65535));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF134u; }
    }
    if (ctx->pc != 0x1AF134u) { return; }
    ctx->pc = 0x1AF134u;
    // 0x1af134: 0x8fa5002c
    ctx->pc = 0x1af134u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1af138: 0xc06bde0
    ctx->pc = 0x1AF138u;
    SET_GPR_U32(ctx, 31, 0x1AF140u);
    ctx->pc = 0x1AF13Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF140u; }
    }
    if (ctx->pc != 0x1AF140u) { return; }
    ctx->pc = 0x1AF140u;
    // 0x1af140: 0x8fa50028
    ctx->pc = 0x1af140u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1af144: 0xc06bde0
    ctx->pc = 0x1AF144u;
    SET_GPR_U32(ctx, 31, 0x1AF14Cu);
    ctx->pc = 0x1AF148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF14Cu; }
    }
    if (ctx->pc != 0x1AF14Cu) { return; }
    ctx->pc = 0x1AF14Cu;
    // 0x1af14c: 0x2404000c
    ctx->pc = 0x1af14cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af150: 0xc06bde0
    ctx->pc = 0x1AF150u;
    SET_GPR_U32(ctx, 31, 0x1AF158u);
    ctx->pc = 0x1AF154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF158u; }
    }
    if (ctx->pc != 0x1AF158u) { return; }
    ctx->pc = 0x1AF158u;
    // 0x1af158: 0x24040066
    ctx->pc = 0x1af158u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
    // 0x1af15c: 0xc06bde0
    ctx->pc = 0x1AF15Cu;
    SET_GPR_U32(ctx, 31, 0x1AF164u);
    ctx->pc = 0x1AF160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF164u; }
    }
    if (ctx->pc != 0x1AF164u) { return; }
    ctx->pc = 0x1AF164u;
    // 0x1af164: 0x24040062
    ctx->pc = 0x1af164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 98));
    // 0x1af168: 0xc06bde0
    ctx->pc = 0x1AF168u;
    SET_GPR_U32(ctx, 31, 0x1AF170u);
    ctx->pc = 0x1AF16Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF170u; }
    }
    if (ctx->pc != 0x1AF170u) { return; }
    ctx->pc = 0x1AF170u;
    // 0x1af170: 0x24040002
    ctx->pc = 0x1af170u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1af174: 0xc06bde0
    ctx->pc = 0x1AF174u;
    SET_GPR_U32(ctx, 31, 0x1AF17Cu);
    ctx->pc = 0x1AF178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF17Cu; }
    }
    if (ctx->pc != 0x1AF17Cu) { return; }
    ctx->pc = 0x1AF17Cu;
    // 0x1af17c: 0x202d
    ctx->pc = 0x1af17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af180: 0xc06bde0
    ctx->pc = 0x1AF180u;
    SET_GPR_U32(ctx, 31, 0x1AF188u);
    ctx->pc = 0x1AF184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF188u; }
    }
    if (ctx->pc != 0x1AF188u) { return; }
    ctx->pc = 0x1AF188u;
label_1af188:
    // 0x1af188: 0x3c010032
    ctx->pc = 0x1af188u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af18c: 0x24020004
    ctx->pc = 0x1af18cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af190: 0xa0204402
    ctx->pc = 0x1af190u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17410), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af194: 0x2404005e
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 94));
    // 0x1af198: 0x3c010032
    ctx->pc = 0x1af198u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af19c: 0x24050032
    ctx->pc = 0x1af19cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    // 0x1af1a0: 0xa0224400
    ctx->pc = 0x1af1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17408), (uint8_t)GPR_U32(ctx, 2));
    // 0x1af1a4: 0x24020005
    ctx->pc = 0x1af1a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af1a8: 0x3c010032
    ctx->pc = 0x1af1a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af1ac: 0xa0224401
    ctx->pc = 0x1af1acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17409), (uint8_t)GPR_U32(ctx, 2));
    // 0x1af1b0: 0x240200ff
    ctx->pc = 0x1af1b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1af1b4: 0x3c010032
    ctx->pc = 0x1af1b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x1af1b8: 0xc06bde0
    ctx->pc = 0x1AF1B8u;
    SET_GPR_U32(ctx, 31, 0x1AF1C0u);
    ctx->pc = 0x1AF1BCu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17411), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF1C0u; }
    }
    if (ctx->pc != 0x1AF1C0u) { return; }
    ctx->pc = 0x1AF1C0u;
    // 0x1af1c0: 0x24040063
    ctx->pc = 0x1af1c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    // 0x1af1c4: 0xc06bde0
    ctx->pc = 0x1AF1C4u;
    SET_GPR_U32(ctx, 31, 0x1AF1CCu);
    ctx->pc = 0x1AF1C8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    ctx->pc = 0x1AF780u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF780_0x1af780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF1CCu; }
    }
    if (ctx->pc != 0x1AF1CCu) { return; }
    ctx->pc = 0x1AF1CCu;
    // 0x1af1cc: 0xdfbf0010
    ctx->pc = 0x1af1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af1d0: 0x7bb00000
    ctx->pc = 0x1af1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af1d4: 0x3e00008
    ctx->pc = 0x1AF1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF1D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF188u: goto label_1af188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF1DCu;
    // 0x1af1dc: 0x0
    ctx->pc = 0x1af1dcu;
    // NOP
}
