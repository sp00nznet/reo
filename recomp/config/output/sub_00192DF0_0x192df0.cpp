#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00192DF0
// Address: 0x192df0 - 0x193000
void sub_00192DF0_0x192df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x192df0u;

    // 0x192df0: 0x27bdff60
    ctx->pc = 0x192df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x192df4: 0xffbf0090
    ctx->pc = 0x192df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x192df8: 0x7fb70080
    ctx->pc = 0x192df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x192dfc: 0x7fb60070
    ctx->pc = 0x192dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x192e00: 0x100b82d
    ctx->pc = 0x192e00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e04: 0x7fb50060
    ctx->pc = 0x192e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x192e08: 0x80b02d
    ctx->pc = 0x192e08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e0c: 0x7fb40050
    ctx->pc = 0x192e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x192e10: 0xc0a82d
    ctx->pc = 0x192e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e14: 0x7fb30040
    ctx->pc = 0x192e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x192e18: 0xe0a02d
    ctx->pc = 0x192e18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e1c: 0x7fb20030
    ctx->pc = 0x192e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x192e20: 0x202d
    ctx->pc = 0x192e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e24: 0x7fb10020
    ctx->pc = 0x192e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x192e28: 0x7fb00010
    ctx->pc = 0x192e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192e2c: 0xe7b40000
    ctx->pc = 0x192e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x192e30: 0x46006506
    ctx->pc = 0x192e30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_192e34:
    // 0x192e34: 0x41880
    ctx->pc = 0x192e34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x192e38: 0xa31021
    ctx->pc = 0x192e38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x192e3c: 0x24840001
    ctx->pc = 0x192e3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x192e40: 0xc4400000
    ctx->pc = 0x192e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e44: 0x2a31821
    ctx->pc = 0x192e44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x192e48: 0x2882000a
    ctx->pc = 0x192e48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 10));
    // 0x192e4c: 0x1440fff9
    ctx->pc = 0x192E4Cu;
    {
        const bool branch_taken_0x192e4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192E50u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x192e4c) {
            ctx->pc = 0x192E34u;
            goto label_192e34;
        }
    }
    ctx->pc = 0x192E54u;
    // 0x192e54: 0x12c0004b
    ctx->pc = 0x192E54u;
    {
        const bool branch_taken_0x192e54 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x192e54) {
            ctx->pc = 0x192F84u;
            goto label_192f84;
        }
    }
    ctx->pc = 0x192E5Cu;
    // 0x192e5c: 0x96c30000
    ctx->pc = 0x192e5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x192e60: 0x24022000
    ctx->pc = 0x192e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x192e64: 0x3063f000
    ctx->pc = 0x192e64u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 61440));
    // 0x192e68: 0x1062001c
    ctx->pc = 0x192E68u;
    {
        const bool branch_taken_0x192e68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x192E6Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x192e68) {
            ctx->pc = 0x192EDCu;
            goto label_192edc;
        }
    }
    ctx->pc = 0x192E70u;
    // 0x192e70: 0x24021000
    ctx->pc = 0x192e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x192e74: 0x10620003
    ctx->pc = 0x192E74u;
    {
        const bool branch_taken_0x192e74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x192E78u;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x192e74) {
            ctx->pc = 0x192E84u;
            goto label_192e84;
        }
    }
    ctx->pc = 0x192E7Cu;
    // 0x192e7c: 0x10000042
    ctx->pc = 0x192E7Cu;
    {
        const bool branch_taken_0x192e7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192E80u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x192e7c) {
            ctx->pc = 0x192F88u;
            goto label_192f88;
        }
    }
    ctx->pc = 0x192E84u;
label_192e84:
    // 0x192e84: 0x8ec30004
    ctx->pc = 0x192e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x192e88: 0x8c224168
    ctx->pc = 0x192e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    // 0x192e8c: 0x802d
    ctx->pc = 0x192e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e90: 0x1000000c
    ctx->pc = 0x192E90u;
    {
        const bool branch_taken_0x192e90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192E94u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x192e90) {
            ctx->pc = 0x192EC4u;
            goto label_192ec4;
        }
    }
    ctx->pc = 0x192E98u;
label_192e98:
    // 0x192e98: 0x92510001
    ctx->pc = 0x192e98u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x192e9c: 0x4600a306
    ctx->pc = 0x192e9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192ea0: 0x240202d
    ctx->pc = 0x192ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ea4: 0x111040
    ctx->pc = 0x192ea4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
    // 0x192ea8: 0xc0638f0
    ctx->pc = 0x192EA8u;
    SET_GPR_U32(ctx, 31, 0x192EB0u);
    ctx->pc = 0x192EACu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->pc = 0x18E3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E3C0_0x18e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EB0u; }
    }
    if (ctx->pc != 0x192EB0u) { return; }
    ctx->pc = 0x192EB0u;
    // 0x192eb0: 0x111080
    ctx->pc = 0x192eb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x192eb4: 0x26100001
    ctx->pc = 0x192eb4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x192eb8: 0x2a21021
    ctx->pc = 0x192eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x192ebc: 0x26520008
    ctx->pc = 0x192ebcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
    // 0x192ec0: 0xe4400000
    ctx->pc = 0x192ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_192ec4:
    // 0x192ec4: 0x86c20002
    ctx->pc = 0x192ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x192ec8: 0x202102a
    ctx->pc = 0x192ec8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x192ecc: 0x1440fff2
    ctx->pc = 0x192ECCu;
    {
        const bool branch_taken_0x192ecc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x192ecc) {
            ctx->pc = 0x192E98u;
            goto label_192e98;
        }
    }
    ctx->pc = 0x192ED4u;
    // 0x192ed4: 0x1000002b
    ctx->pc = 0x192ED4u;
    {
        const bool branch_taken_0x192ed4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x192ed4) {
            ctx->pc = 0x192F84u;
            goto label_192f84;
        }
    }
    ctx->pc = 0x192EDCu;
label_192edc:
    // 0x192edc: 0x8ec30004
    ctx->pc = 0x192edcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x192ee0: 0x8c224168
    ctx->pc = 0x192ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    // 0x192ee4: 0x882d
    ctx->pc = 0x192ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ee8: 0x10000022
    ctx->pc = 0x192EE8u;
    {
        const bool branch_taken_0x192ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192EECu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x192ee8) {
            ctx->pc = 0x192F74u;
            goto label_192f74;
        }
    }
    ctx->pc = 0x192EF0u;
label_192ef0:
    // 0x192ef0: 0x92130001
    ctx->pc = 0x192ef0u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x192ef4: 0x4600a306
    ctx->pc = 0x192ef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x192ef8: 0x200202d
    ctx->pc = 0x192ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192efc: 0x131880
    ctx->pc = 0x192efcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x192f00: 0x131040
    ctx->pc = 0x192f00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 1));
    // 0x192f04: 0x2a39021
    ctx->pc = 0x192f04u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x192f08: 0xc0638f0
    ctx->pc = 0x192F08u;
    SET_GPR_U32(ctx, 31, 0x192F10u);
    ctx->pc = 0x192F0Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->pc = 0x18E3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E3C0_0x18e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F10u; }
    }
    if (ctx->pc != 0x192F10u) { return; }
    ctx->pc = 0x192F10u;
    // 0x192f10: 0x3263ffff
    ctx->pc = 0x192f10u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 65535));
    // 0x192f14: 0x24020005
    ctx->pc = 0x192f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x192f18: 0x10620009
    ctx->pc = 0x192F18u;
    {
        const bool branch_taken_0x192f18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x192F1Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x192f18) {
            ctx->pc = 0x192F40u;
            goto label_192f40;
        }
    }
    ctx->pc = 0x192F20u;
    // 0x192f20: 0x24020004
    ctx->pc = 0x192f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x192f24: 0x10620006
    ctx->pc = 0x192F24u;
    {
        const bool branch_taken_0x192f24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x192f24) {
            ctx->pc = 0x192F40u;
            goto label_192f40;
        }
    }
    ctx->pc = 0x192F2Cu;
    // 0x192f2c: 0x24020003
    ctx->pc = 0x192f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x192f30: 0x10620003
    ctx->pc = 0x192F30u;
    {
        const bool branch_taken_0x192f30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x192f30) {
            ctx->pc = 0x192F40u;
            goto label_192f40;
        }
    }
    ctx->pc = 0x192F38u;
    // 0x192f38: 0x10000007
    ctx->pc = 0x192F38u;
    {
        const bool branch_taken_0x192f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192F3Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x192f38) {
            ctx->pc = 0x192F58u;
            goto label_192f58;
        }
    }
    ctx->pc = 0x192F40u;
label_192f40:
    // 0x192f40: 0x3c010024
    ctx->pc = 0x192f40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x192f44: 0xc6410000
    ctx->pc = 0x192f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192f48: 0xc4201c98
    ctx->pc = 0x192f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192f4c: 0x46000802
    ctx->pc = 0x192f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x192f50: 0x10000006
    ctx->pc = 0x192F50u;
    {
        const bool branch_taken_0x192f50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192F54u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        if (branch_taken_0x192f50) {
            ctx->pc = 0x192F6Cu;
            goto label_192f6c;
        }
    }
    ctx->pc = 0x192F58u;
label_192f58:
    // 0x192f58: 0x3c024180
    ctx->pc = 0x192f58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x192f5c: 0x44820800
    ctx->pc = 0x192f5cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x192f60: 0x0
    ctx->pc = 0x192f60u;
    // NOP
    // 0x192f64: 0x46010003
    ctx->pc = 0x192f64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x192f68: 0xe6400000
    ctx->pc = 0x192f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_192f6c:
    // 0x192f6c: 0x26310001
    ctx->pc = 0x192f6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x192f70: 0x26100008
    ctx->pc = 0x192f70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
label_192f74:
    // 0x192f74: 0x86c20002
    ctx->pc = 0x192f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x192f78: 0x222102a
    ctx->pc = 0x192f78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x192f7c: 0x1440ffdc
    ctx->pc = 0x192F7Cu;
    {
        const bool branch_taken_0x192f7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x192f7c) {
            ctx->pc = 0x192EF0u;
            goto label_192ef0;
        }
    }
    ctx->pc = 0x192F84u;
label_192f84:
    // 0x192f84: 0xc6ac0000
    ctx->pc = 0x192f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_192f88:
    // 0x192f88: 0xc6ad0004
    ctx->pc = 0x192f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x192f8c: 0xc6ae0008
    ctx->pc = 0x192f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x192f90: 0xc063f98
    ctx->pc = 0x192F90u;
    SET_GPR_U32(ctx, 31, 0x192F98u);
    ctx->pc = 0x192F94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018FE60_0x18fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F98u; }
    }
    if (ctx->pc != 0x192F98u) { return; }
    ctx->pc = 0x192F98u;
    // 0x192f98: 0xc6ac000c
    ctx->pc = 0x192f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192f9c: 0xc6ad0010
    ctx->pc = 0x192f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x192fa0: 0xc6ae0014
    ctx->pc = 0x192fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x192fa4: 0xc064284
    ctx->pc = 0x192FA4u;
    SET_GPR_U32(ctx, 31, 0x192FACu);
    ctx->pc = 0x192FA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00190A10_0x190a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192FACu; }
    }
    if (ctx->pc != 0x192FACu) { return; }
    ctx->pc = 0x192FACu;
    // 0x192fac: 0xc6a00018
    ctx->pc = 0x192facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fb0: 0x24020001
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x192fb4: 0xe6800030
    ctx->pc = 0x192fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x192fb8: 0xc6a0001c
    ctx->pc = 0x192fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fbc: 0xe6800034
    ctx->pc = 0x192fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
    // 0x192fc0: 0xc6a00020
    ctx->pc = 0x192fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fc4: 0xe6800038
    ctx->pc = 0x192fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
    // 0x192fc8: 0xdfbf0090
    ctx->pc = 0x192fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x192fcc: 0xc7b40000
    ctx->pc = 0x192fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192fd0: 0x7bb70080
    ctx->pc = 0x192fd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192fd4: 0x7bb60070
    ctx->pc = 0x192fd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192fd8: 0x7bb50060
    ctx->pc = 0x192fd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192fdc: 0x7bb40050
    ctx->pc = 0x192fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192fe0: 0x7bb30040
    ctx->pc = 0x192fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192fe4: 0x7bb20030
    ctx->pc = 0x192fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192fe8: 0x7bb10020
    ctx->pc = 0x192fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192fec: 0x7bb00010
    ctx->pc = 0x192fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192ff0: 0x3e00008
    ctx->pc = 0x192FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192E34u: goto label_192e34;
            case 0x192E84u: goto label_192e84;
            case 0x192E98u: goto label_192e98;
            case 0x192EC4u: goto label_192ec4;
            case 0x192EDCu: goto label_192edc;
            case 0x192EF0u: goto label_192ef0;
            case 0x192F40u: goto label_192f40;
            case 0x192F58u: goto label_192f58;
            case 0x192F6Cu: goto label_192f6c;
            case 0x192F74u: goto label_192f74;
            case 0x192F84u: goto label_192f84;
            case 0x192F88u: goto label_192f88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192FF8u;
    // 0x192ff8: 0x0
    ctx->pc = 0x192ff8u;
    // NOP
    // 0x192ffc: 0x0
    ctx->pc = 0x192ffcu;
    // NOP
}
