#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193AF0
// Address: 0x193af0 - 0x193bd0
void sub_00193AF0_0x193af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193af0u;

    // 0x193af0: 0x27bdff40
    ctx->pc = 0x193af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x193af4: 0xffbf0030
    ctx->pc = 0x193af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x193af8: 0x7fb10020
    ctx->pc = 0x193af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193afc: 0x7fb00010
    ctx->pc = 0x193afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193b00: 0x80882d
    ctx->pc = 0x193b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b04: 0xe7b60008
    ctx->pc = 0x193b04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193b08: 0xe7b50004
    ctx->pc = 0x193b08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193b0c: 0xe7b40000
    ctx->pc = 0x193b0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193b10: 0x46006586
    ctx->pc = 0x193b10u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x193b14: 0x46006d46
    ctx->pc = 0x193b14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x193b18: 0x46007506
    ctx->pc = 0x193b18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x193b1c: 0xc4ac0000
    ctx->pc = 0x193b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193b20: 0xc4ad0004
    ctx->pc = 0x193b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x193b24: 0xc4ae0008
    ctx->pc = 0x193b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x193b28: 0xc063f98
    ctx->pc = 0x193B28u;
    SET_GPR_U32(ctx, 31, 0x193B30u);
    ctx->pc = 0x193B2Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE60_0x18fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B30u; }
    }
    if (ctx->pc != 0x193B30u) { return; }
    ctx->pc = 0x193B30u;
    // 0x193b30: 0xc063f7c
    ctx->pc = 0x193B30u;
    SET_GPR_U32(ctx, 31, 0x193B38u);
    ctx->pc = 0x193B34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B38u; }
    }
    if (ctx->pc != 0x193B38u) { return; }
    ctx->pc = 0x193B38u;
    // 0x193b38: 0xc60c000c
    ctx->pc = 0x193b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193b3c: 0xc60d0010
    ctx->pc = 0x193b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x193b40: 0xc60e0014
    ctx->pc = 0x193b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x193b44: 0xc064284
    ctx->pc = 0x193B44u;
    SET_GPR_U32(ctx, 31, 0x193B4Cu);
    ctx->pc = 0x193B48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x190A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00190A10_0x190a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B4Cu; }
    }
    if (ctx->pc != 0x193B4Cu) { return; }
    ctx->pc = 0x193B4Cu;
    // 0x193b4c: 0xc063f7c
    ctx->pc = 0x193B4Cu;
    SET_GPR_U32(ctx, 31, 0x193B54u);
    ctx->pc = 0x193B50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18FDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FDF0_0x18fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B54u; }
    }
    if (ctx->pc != 0x193B54u) { return; }
    ctx->pc = 0x193B54u;
    // 0x193b54: 0x3c023f80
    ctx->pc = 0x193b54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x193b58: 0x220202d
    ctx->pc = 0x193b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b5c: 0x44821000
    ctx->pc = 0x193b5cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x193b60: 0x27a50080
    ctx->pc = 0x193b60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 128));
    // 0x193b64: 0x46161003
    ctx->pc = 0x193b64u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[22];
    // 0x193b68: 0xe7a00040
    ctx->pc = 0x193b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x193b6c: 0x46151043
    ctx->pc = 0x193b6cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[21];
    // 0x193b70: 0x46141003
    ctx->pc = 0x193b70u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[20];
    // 0x193b74: 0xe7a10054
    ctx->pc = 0x193b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x193b78: 0xe7a00068
    ctx->pc = 0x193b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x193b7c: 0xc6000018
    ctx->pc = 0x193b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b80: 0xe7a00070
    ctx->pc = 0x193b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x193b84: 0xc600001c
    ctx->pc = 0x193b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b88: 0xe7a00074
    ctx->pc = 0x193b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x193b8c: 0xc6000020
    ctx->pc = 0x193b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b90: 0xc0644c0
    ctx->pc = 0x193B90u;
    SET_GPR_U32(ctx, 31, 0x193B98u);
    ctx->pc = 0x193B94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->pc = 0x191300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191300_0x191300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B98u; }
    }
    if (ctx->pc != 0x193B98u) { return; }
    ctx->pc = 0x193B98u;
    // 0x193b98: 0x220202d
    ctx->pc = 0x193b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b9c: 0xc0644c0
    ctx->pc = 0x193B9Cu;
    SET_GPR_U32(ctx, 31, 0x193BA4u);
    ctx->pc = 0x193BA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x191300u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00191300_0x191300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BA4u; }
    }
    if (ctx->pc != 0x193BA4u) { return; }
    ctx->pc = 0x193BA4u;
    // 0x193ba4: 0xdfbf0030
    ctx->pc = 0x193ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193ba8: 0xc7b60008
    ctx->pc = 0x193ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x193bac: 0x7bb10020
    ctx->pc = 0x193bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193bb0: 0xc7b50004
    ctx->pc = 0x193bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x193bb4: 0x7bb00010
    ctx->pc = 0x193bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193bb8: 0xc7b40000
    ctx->pc = 0x193bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193bbc: 0x24020001
    ctx->pc = 0x193bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193bc0: 0x3e00008
    ctx->pc = 0x193BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193BC8u;
    // 0x193bc8: 0x0
    ctx->pc = 0x193bc8u;
    // NOP
    // 0x193bcc: 0x0
    ctx->pc = 0x193bccu;
    // NOP
}
