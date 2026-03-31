#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193A00
// Address: 0x193a00 - 0x193af0
void sub_00193A00_0x193a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193a00u;

    // 0x193a00: 0x27bdff40
    ctx->pc = 0x193a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x193a04: 0xffbf0030
    ctx->pc = 0x193a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x193a08: 0x7fb10020
    ctx->pc = 0x193a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193a0c: 0x7fb00010
    ctx->pc = 0x193a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193a10: 0x80882d
    ctx->pc = 0x193a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a14: 0xe7b60008
    ctx->pc = 0x193a14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193a18: 0xa0802d
    ctx->pc = 0x193a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a1c: 0xe7b50004
    ctx->pc = 0x193a1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193a20: 0xe7b40000
    ctx->pc = 0x193a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193a24: 0xc4a20000
    ctx->pc = 0x193a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193a28: 0xc4a10004
    ctx->pc = 0x193a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a2c: 0xc4a00008
    ctx->pc = 0x193a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a30: 0x46006586
    ctx->pc = 0x193a30u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x193a34: 0x46006d46
    ctx->pc = 0x193a34u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x193a38: 0x46007506
    ctx->pc = 0x193a38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x193a3c: 0x46161302
    ctx->pc = 0x193a3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x193a40: 0x46150b42
    ctx->pc = 0x193a40u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x193a44: 0xc063f98
    ctx->pc = 0x193A44u;
    SET_GPR_U32(ctx, 31, 0x193A4Cu);
    ctx->pc = 0x193A48u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x18FE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE60_0x18fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A4Cu; }
    }
    if (ctx->pc != 0x193A4Cu) { return; }
    ctx->pc = 0x193A4Cu;
    // 0x193a4c: 0xc063f7c
    ctx->pc = 0x193A4Cu;
    SET_GPR_U32(ctx, 31, 0x193A54u);
    ctx->pc = 0x193A50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A54u; }
    }
    if (ctx->pc != 0x193A54u) { return; }
    ctx->pc = 0x193A54u;
    // 0x193a54: 0xc60c000c
    ctx->pc = 0x193a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193a58: 0xc60d0010
    ctx->pc = 0x193a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x193a5c: 0xc60e0014
    ctx->pc = 0x193a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x193a60: 0xc064284
    ctx->pc = 0x193A60u;
    SET_GPR_U32(ctx, 31, 0x193A68u);
    ctx->pc = 0x193A64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x190A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00190A10_0x190a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A68u; }
    }
    if (ctx->pc != 0x193A68u) { return; }
    ctx->pc = 0x193A68u;
    // 0x193a68: 0xc063f7c
    ctx->pc = 0x193A68u;
    SET_GPR_U32(ctx, 31, 0x193A70u);
    ctx->pc = 0x193A6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A70u; }
    }
    if (ctx->pc != 0x193A70u) { return; }
    ctx->pc = 0x193A70u;
    // 0x193a70: 0x3c023f80
    ctx->pc = 0x193a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x193a74: 0x220202d
    ctx->pc = 0x193a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a78: 0x44821000
    ctx->pc = 0x193a78u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x193a7c: 0x27a50080
    ctx->pc = 0x193a7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    // 0x193a80: 0x46161003
    ctx->pc = 0x193a80u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[22];
    // 0x193a84: 0xe7a00040
    ctx->pc = 0x193a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x193a88: 0x46151043
    ctx->pc = 0x193a88u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[21];
    // 0x193a8c: 0x46141003
    ctx->pc = 0x193a8cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x193a90: 0xe7a10054
    ctx->pc = 0x193a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x193a94: 0xe7a00068
    ctx->pc = 0x193a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x193a98: 0xc6000018
    ctx->pc = 0x193a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a9c: 0xe7a00070
    ctx->pc = 0x193a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x193aa0: 0xc600001c
    ctx->pc = 0x193aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193aa4: 0xe7a00074
    ctx->pc = 0x193aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x193aa8: 0xc6000020
    ctx->pc = 0x193aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193aac: 0xc0644c0
    ctx->pc = 0x193AACu;
    SET_GPR_U32(ctx, 31, 0x193AB4u);
    ctx->pc = 0x193AB0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->pc = 0x191300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191300_0x191300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AB4u; }
    }
    if (ctx->pc != 0x193AB4u) { return; }
    ctx->pc = 0x193AB4u;
    // 0x193ab4: 0x220202d
    ctx->pc = 0x193ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ab8: 0xc0644c0
    ctx->pc = 0x193AB8u;
    SET_GPR_U32(ctx, 31, 0x193AC0u);
    ctx->pc = 0x193ABCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x191300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191300_0x191300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AC0u; }
    }
    if (ctx->pc != 0x193AC0u) { return; }
    ctx->pc = 0x193AC0u;
    // 0x193ac0: 0xdfbf0030
    ctx->pc = 0x193ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193ac4: 0xc7b60008
    ctx->pc = 0x193ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x193ac8: 0x7bb10020
    ctx->pc = 0x193ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193acc: 0xc7b50004
    ctx->pc = 0x193accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x193ad0: 0x7bb00010
    ctx->pc = 0x193ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ad4: 0xc7b40000
    ctx->pc = 0x193ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193ad8: 0x24020001
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193adc: 0x3e00008
    ctx->pc = 0x193ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193AE4u;
    // 0x193ae4: 0x0
    ctx->pc = 0x193ae4u;
    // NOP
    // 0x193ae8: 0x0
    ctx->pc = 0x193ae8u;
    // NOP
    // 0x193aec: 0x0
    ctx->pc = 0x193aecu;
    // NOP
}
