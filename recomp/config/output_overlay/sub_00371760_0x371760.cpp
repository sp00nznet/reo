#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00371760
// Address: 0x371760 - 0x371870
void sub_00371760_0x371760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x371760u;

    // 0x371760: 0x27bdff70
    ctx->pc = 0x371760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x371764: 0xffbf0060
    ctx->pc = 0x371764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x371768: 0x7fb40050
    ctx->pc = 0x371768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x37176c: 0x7fb30040
    ctx->pc = 0x37176cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x371770: 0x80a02d
    ctx->pc = 0x371770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371774: 0x7fb20030
    ctx->pc = 0x371774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x371778: 0xa0982d
    ctx->pc = 0x371778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37177c: 0x7fb10020
    ctx->pc = 0x37177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x371780: 0xe0902d
    ctx->pc = 0x371780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371784: 0x7fb00010
    ctx->pc = 0x371784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x371788: 0x27a40088
    ctx->pc = 0x371788u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 136));
    // 0x37178c: 0xe7b40000
    ctx->pc = 0x37178cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x371790: 0xc0802d
    ctx->pc = 0x371790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371794: 0x46006506
    ctx->pc = 0x371794u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x371798: 0xc0dc124
    ctx->pc = 0x371798u;
    SET_GPR_U32(ctx, 31, 0x3717A0u);
    ctx->pc = 0x37179Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x370490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370490_0x370490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3717A0u; }
    }
    if (ctx->pc != 0x3717A0u) { return; }
    ctx->pc = 0x3717A0u;
    // 0x3717a0: 0xc7a00088
    ctx->pc = 0x3717a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3717a4: 0x200282d
    ctx->pc = 0x3717a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717a8: 0xc6810000
    ctx->pc = 0x3717a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3717ac: 0x27b1008c
    ctx->pc = 0x3717acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 140));
    // 0x3717b0: 0x27b00084
    ctx->pc = 0x3717b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 132));
    // 0x3717b4: 0x27a40088
    ctx->pc = 0x3717b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 136));
    // 0x3717b8: 0x260302d
    ctx->pc = 0x3717b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717bc: 0x46140002
    ctx->pc = 0x3717bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3717c0: 0x46000800
    ctx->pc = 0x3717c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3717c4: 0xe7a00080
    ctx->pc = 0x3717c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3717c8: 0xc6200000
    ctx->pc = 0x3717c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3717cc: 0xc6810004
    ctx->pc = 0x3717ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3717d0: 0x46140002
    ctx->pc = 0x3717d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3717d4: 0x46000800
    ctx->pc = 0x3717d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3717d8: 0xc0dc124
    ctx->pc = 0x3717D8u;
    SET_GPR_U32(ctx, 31, 0x3717E0u);
    ctx->pc = 0x3717DCu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->pc = 0x370490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370490_0x370490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3717E0u; }
    }
    if (ctx->pc != 0x3717E0u) { return; }
    ctx->pc = 0x3717E0u;
    // 0x3717e0: 0xc7a00088
    ctx->pc = 0x3717e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3717e4: 0x27a40088
    ctx->pc = 0x3717e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 136));
    // 0x3717e8: 0xc6610000
    ctx->pc = 0x3717e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3717ec: 0x27a50078
    ctx->pc = 0x3717ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 120));
    // 0x3717f0: 0x27a60080
    ctx->pc = 0x3717f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 128));
    // 0x3717f4: 0x46140002
    ctx->pc = 0x3717f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3717f8: 0x46000800
    ctx->pc = 0x3717f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3717fc: 0xe7a00078
    ctx->pc = 0x3717fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x371800: 0xc6200000
    ctx->pc = 0x371800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371804: 0xc6610004
    ctx->pc = 0x371804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371808: 0x46140002
    ctx->pc = 0x371808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x37180c: 0x46000800
    ctx->pc = 0x37180cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371810: 0xc0dc124
    ctx->pc = 0x371810u;
    SET_GPR_U32(ctx, 31, 0x371818u);
    ctx->pc = 0x371814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->pc = 0x370490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370490_0x370490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371818u; }
    }
    if (ctx->pc != 0x371818u) { return; }
    ctx->pc = 0x371818u;
    // 0x371818: 0xc7a00088
    ctx->pc = 0x371818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37181c: 0xc7a10080
    ctx->pc = 0x37181cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371820: 0x46140002
    ctx->pc = 0x371820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371824: 0x46000800
    ctx->pc = 0x371824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371828: 0xe6400000
    ctx->pc = 0x371828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x37182c: 0xc6200000
    ctx->pc = 0x37182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371830: 0xc6010000
    ctx->pc = 0x371830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371834: 0x46140002
    ctx->pc = 0x371834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x371838: 0x46000800
    ctx->pc = 0x371838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37183c: 0xe6400004
    ctx->pc = 0x37183cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x371840: 0xdfbf0060
    ctx->pc = 0x371840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371844: 0xc7b40000
    ctx->pc = 0x371844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x371848: 0x7bb40050
    ctx->pc = 0x371848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37184c: 0x7bb30040
    ctx->pc = 0x37184cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371850: 0x7bb20030
    ctx->pc = 0x371850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371854: 0x7bb10020
    ctx->pc = 0x371854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371858: 0x7bb00010
    ctx->pc = 0x371858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37185c: 0x3e00008
    ctx->pc = 0x37185Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371860u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x371864u;
    // 0x371864: 0x0
    ctx->pc = 0x371864u;
    // NOP
    // 0x371868: 0x0
    ctx->pc = 0x371868u;
    // NOP
    // 0x37186c: 0x0
    ctx->pc = 0x37186cu;
    // NOP
}
