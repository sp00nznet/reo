#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375A50
// Address: 0x375a50 - 0x375b40
void sub_00375A50_0x375a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375a50u;

    // 0x375a50: 0x27bdff60
    ctx->pc = 0x375a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x375a54: 0xffbf0000
    ctx->pc = 0x375a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375a58: 0xc063f7c
    ctx->pc = 0x375A58u;
    SET_GPR_U32(ctx, 31, 0x375A60u);
    ctx->pc = 0x375A5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A60u; }
        if (ctx->pc != 0x375A60u) { return; }
    }
    ctx->pc = 0x375A60u;
    // 0x375a60: 0x3c010032
    ctx->pc = 0x375a60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375a64: 0x202d
    ctx->pc = 0x375a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a68: 0x8c26418c
    ctx->pc = 0x375a68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 16780)));
    // 0x375a6c: 0x282d
    ctx->pc = 0x375a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a70: 0xc0dc088
    ctx->pc = 0x375A70u;
    SET_GPR_U32(ctx, 31, 0x375A78u);
    ctx->pc = 0x375A74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x370220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370220_0x370220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375A78u; }
    }
    if (ctx->pc != 0x375A78u) { return; }
    ctx->pc = 0x375A78u;
    // 0x375a78: 0x3c010032
    ctx->pc = 0x375a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375a7c: 0x3c060032
    ctx->pc = 0x375a7cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x375a80: 0xc4254144
    ctx->pc = 0x375a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x375a84: 0x27a40050
    ctx->pc = 0x375a84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x375a88: 0x27a50090
    ctx->pc = 0x375a88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    // 0x375a8c: 0x24c6415c
    ctx->pc = 0x375a8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16732));
    // 0x375a90: 0x3c010032
    ctx->pc = 0x375a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375a94: 0xc4244138
    ctx->pc = 0x375a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x375a98: 0x3c010032
    ctx->pc = 0x375a98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375a9c: 0xc4234148
    ctx->pc = 0x375a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x375aa0: 0x46042901
    ctx->pc = 0x375aa0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x375aa4: 0x3c010032
    ctx->pc = 0x375aa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375aa8: 0xc422413c
    ctx->pc = 0x375aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375aac: 0x3c010032
    ctx->pc = 0x375aacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375ab0: 0xc421414c
    ctx->pc = 0x375ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375ab4: 0x46021881
    ctx->pc = 0x375ab4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x375ab8: 0x3c010032
    ctx->pc = 0x375ab8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375abc: 0xc4204140
    ctx->pc = 0x375abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375ac0: 0x46000801
    ctx->pc = 0x375ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375ac4: 0x46002047
    ctx->pc = 0x375ac4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x375ac8: 0xe7a10090
    ctx->pc = 0x375ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x375acc: 0x46001047
    ctx->pc = 0x375accu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x375ad0: 0x46000007
    ctx->pc = 0x375ad0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x375ad4: 0xe7a10094
    ctx->pc = 0x375ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x375ad8: 0xc064608
    ctx->pc = 0x375AD8u;
    SET_GPR_U32(ctx, 31, 0x375AE0u);
    ctx->pc = 0x375ADCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x191820u;
    {
        auto targetFn = runtime->lookupFunction(0x191820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375AE0u; }
        if (ctx->pc != 0x375AE0u) { return; }
    }
    ctx->pc = 0x375AE0u;
    // 0x375ae0: 0x3c010032
    ctx->pc = 0x375ae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375ae4: 0x3c023f80
    ctx->pc = 0x375ae4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x375ae8: 0xc4224138
    ctx->pc = 0x375ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375aec: 0x3c040032
    ctx->pc = 0x375aecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x375af0: 0xafa2008c
    ctx->pc = 0x375af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x375af4: 0x248440e0
    ctx->pc = 0x375af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16608));
    // 0x375af8: 0x27a50010
    ctx->pc = 0x375af8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x375afc: 0x27a60050
    ctx->pc = 0x375afcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x375b00: 0x3c010032
    ctx->pc = 0x375b00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375b04: 0xc421413c
    ctx->pc = 0x375b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375b08: 0xe7a20080
    ctx->pc = 0x375b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x375b0c: 0x3c010032
    ctx->pc = 0x375b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)50 << 16));
    // 0x375b10: 0xc4204140
    ctx->pc = 0x375b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 16704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375b14: 0xe7a10084
    ctx->pc = 0x375b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x375b18: 0xc0644a0
    ctx->pc = 0x375B18u;
    SET_GPR_U32(ctx, 31, 0x375B20u);
    ctx->pc = 0x375B1Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->pc = 0x191280u;
    {
        auto targetFn = runtime->lookupFunction(0x191280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B20u; }
        if (ctx->pc != 0x375B20u) { return; }
    }
    ctx->pc = 0x375B20u;
    // 0x375b20: 0x3c040032
    ctx->pc = 0x375b20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x375b24: 0xc064488
    ctx->pc = 0x375B24u;
    SET_GPR_U32(ctx, 31, 0x375B2Cu);
    ctx->pc = 0x375B28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16608));
    ctx->pc = 0x191220u;
    {
        auto targetFn = runtime->lookupFunction(0x191220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B2Cu; }
        if (ctx->pc != 0x375B2Cu) { return; }
    }
    ctx->pc = 0x375B2Cu;
    // 0x375b2c: 0xdfbf0000
    ctx->pc = 0x375b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375b30: 0x3e00008
    ctx->pc = 0x375B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375B34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x375B38u;
    // 0x375b38: 0x0
    ctx->pc = 0x375b38u;
    // NOP
    // 0x375b3c: 0x0
    ctx->pc = 0x375b3cu;
    // NOP
}
