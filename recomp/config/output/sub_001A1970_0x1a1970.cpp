#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_001A1970
// Address: 0x1a1970 - 0x1a1ac0
void sub_001A1970_0x1a1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1a1970u;

    // 0x1a1970: 0x27bdffb0
    ctx->pc = 0x1a1970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1974: 0x41900
    ctx->pc = 0x1a1974u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a1978: 0xffbf0030
    ctx->pc = 0x1a1978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a197c: 0x51040
    ctx->pc = 0x1a197cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a1980: 0x7fb10020
    ctx->pc = 0x1a1980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a1984: 0x641823
    ctx->pc = 0x1a1984u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1988: 0x7fb00010
    ctx->pc = 0x1a1988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a198c: 0x451021
    ctx->pc = 0x1a198cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a1990: 0xe7b40000
    ctx->pc = 0x1a1990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a1994: 0x3c01002b
    ctx->pc = 0x1a1994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)43 << 16));
    // 0x1a1998: 0x8c28ffac
    ctx->pc = 0x1a1998u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294967212)));
    // 0x1a199c: 0x318c0
    ctx->pc = 0x1a199cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a19a0: 0xa0882d
    ctx->pc = 0x1a19a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19a4: 0x21080
    ctx->pc = 0x1a19a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a19a8: 0xc0802d
    ctx->pc = 0x1a19a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19ac: 0x27a5004e
    ctx->pc = 0x1a19acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 78));
    // 0x1a19b0: 0x27a7004a
    ctx->pc = 0x1a19b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 74));
    // 0x1a19b4: 0x681821
    ctx->pc = 0x1a19b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1a19b8: 0x431021
    ctx->pc = 0x1a19b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a19bc: 0xc442001c
    ctx->pc = 0x1a19bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a19c0: 0xc4410020
    ctx->pc = 0x1a19c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a19c4: 0xc4400024
    ctx->pc = 0x1a19c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a19c8: 0xe4c20000
    ctx->pc = 0x1a19c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a19cc: 0xe4c10004
    ctx->pc = 0x1a19ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a19d0: 0xe4c00008
    ctx->pc = 0x1a19d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1a19d4: 0xc0697c0
    ctx->pc = 0x1A19D4u;
    SET_GPR_U32(ctx, 31, 0x1A19DCu);
    ctx->pc = 0x1A19D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
    ctx->pc = 0x1A5F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5F00_0x1a5f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19DCu; }
    }
    if (ctx->pc != 0x1A19DCu) { return; }
    ctx->pc = 0x1A19DCu;
    // 0x1a19dc: 0x12200003
    ctx->pc = 0x1A19DCu;
    {
        const bool branch_taken_0x1a19dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a19dc) {
            ctx->pc = 0x1A19ECu;
            goto label_1a19ec;
        }
    }
    ctx->pc = 0x1A19E4u;
    // 0x1a19e4: 0x87a2004a
    ctx->pc = 0x1a19e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 74)));
    // 0x1a19e8: 0xa7a2004c
    ctx->pc = 0x1a19e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 2));
label_1a19ec:
    // 0x1a19ec: 0x87a3004c
    ctx->pc = 0x1a19ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a19f0: 0x3c0242fe
    ctx->pc = 0x1a19f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17150 << 16));
    // 0x1a19f4: 0x44820800
    ctx->pc = 0x1a19f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a19f8: 0x86020004
    ctx->pc = 0x1a19f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a19fc: 0x2464ffff
    ctx->pc = 0x1a19fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1a00: 0x44840000
    ctx->pc = 0x1a1a00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1a1a04: 0x0
    ctx->pc = 0x1a1a04u;
    // NOP
    // 0x1a1a08: 0x46800020
    ctx->pc = 0x1a1a08u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a1a0c: 0x46000801
    ctx->pc = 0x1a1a0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a1a10: 0x46000d03
    ctx->pc = 0x1a1a10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x1a1a14: 0x0
    ctx->pc = 0x1a1a14u;
    // NOP
    // 0x1a1a18: 0x0
    ctx->pc = 0x1a1a18u;
    // NOP
    // 0x1a1a1c: 0x10400018
    ctx->pc = 0x1A1A1Cu;
    {
        const bool branch_taken_0x1a1a1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a1a1c) {
            ctx->pc = 0x1A1A80u;
            goto label_1a1a80;
        }
    }
    ctx->pc = 0x1A1A24u;
    // 0x1a1a24: 0x21c3c
    ctx->pc = 0x1a1a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1a28: 0x31c3f
    ctx->pc = 0x1a1a28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a1a2c: 0x3c024f00
    ctx->pc = 0x1a1a2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x1a1a30: 0x641823
    ctx->pc = 0x1a1a30u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1a34: 0x44830800
    ctx->pc = 0x1a1a34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a1a38: 0x44820000
    ctx->pc = 0x1a1a38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a1a3c: 0x0
    ctx->pc = 0x1a1a3cu;
    // NOP
    // 0x1a1a40: 0x46800860
    ctx->pc = 0x1a1a40u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1a1a44: 0x4601a042
    ctx->pc = 0x1a1a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1a1a48: 0x46010036
    ctx->pc = 0x1a1a48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1a4c: 0x45010005
    ctx->pc = 0x1A1A4Cu;
    {
        const bool branch_taken_0x1a1a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1a4c) {
            ctx->pc = 0x1A1A64u;
            goto label_1a1a64;
        }
    }
    ctx->pc = 0x1A1A54u;
    // 0x1a1a54: 0x46000864
    ctx->pc = 0x1a1a54u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1a1a58: 0x44030800
    ctx->pc = 0x1a1a58u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1a1a5c: 0x10000008
    ctx->pc = 0x1A1A5Cu;
    {
        const bool branch_taken_0x1a1a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1A60u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1a1a5c) {
            ctx->pc = 0x1A1A80u;
            goto label_1a1a80;
        }
    }
    ctx->pc = 0x1A1A64u;
label_1a1a64:
    // 0x1a1a64: 0x46000841
    ctx->pc = 0x1a1a64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a1a68: 0x3c028000
    ctx->pc = 0x1a1a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x1a1a6c: 0x46000864
    ctx->pc = 0x1a1a6cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1a1a70: 0x44030800
    ctx->pc = 0x1a1a70u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x1a1a74: 0x0
    ctx->pc = 0x1a1a74u;
    // NOP
    // 0x1a1a78: 0x621825
    ctx->pc = 0x1a1a78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1a7c: 0xa6030004
    ctx->pc = 0x1a1a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_1a1a80:
    // 0x1a1a80: 0x86040000
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1a84: 0x87a5004c
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a1a88: 0xc0686b0
    ctx->pc = 0x1A1A88u;
    SET_GPR_U32(ctx, 31, 0x1A1A90u);
    ctx->pc = 0x1A1A8Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A1AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1AC0_0x1a1ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1A90u; }
    }
    if (ctx->pc != 0x1A1A90u) { return; }
    ctx->pc = 0x1A1A90u;
    // 0x1a1a90: 0xa6020000
    ctx->pc = 0x1a1a90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1a94: 0x86040002
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a1a98: 0x87a5004c
    ctx->pc = 0x1a1a98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a1a9c: 0xc0686b0
    ctx->pc = 0x1A1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1AA4u);
    ctx->pc = 0x1A1AA0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1A1AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1AC0_0x1a1ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AA4u; }
    }
    if (ctx->pc != 0x1A1AA4u) { return; }
    ctx->pc = 0x1A1AA4u;
    // 0x1a1aa4: 0xa6020002
    ctx->pc = 0x1a1aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1aa8: 0xdfbf0030
    ctx->pc = 0x1a1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1aac: 0xc7b40000
    ctx->pc = 0x1a1aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a1ab0: 0x7bb10020
    ctx->pc = 0x1a1ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1ab4: 0x7bb00010
    ctx->pc = 0x1a1ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ab8: 0x3e00008
    ctx->pc = 0x1A1AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1ABCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A19ECu: goto label_1a19ec;
            case 0x1A1A64u: goto label_1a1a64;
            case 0x1A1A80u: goto label_1a1a80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1AC0u;
}
