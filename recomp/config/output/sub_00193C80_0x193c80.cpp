#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00193C80
// Address: 0x193c80 - 0x193e20
void sub_00193C80_0x193c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x193c80u;

    // 0x193c80: 0x27bdff70
    ctx->pc = 0x193c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x193c84: 0xffbf0080
    ctx->pc = 0x193c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x193c88: 0x7fb60070
    ctx->pc = 0x193c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x193c8c: 0x7fb50060
    ctx->pc = 0x193c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x193c90: 0x7fb40050
    ctx->pc = 0x193c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x193c94: 0x7fb30040
    ctx->pc = 0x193c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x193c98: 0x7fb20030
    ctx->pc = 0x193c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x193c9c: 0x7fb10020
    ctx->pc = 0x193c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193ca0: 0x80902d
    ctx->pc = 0x193ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ca4: 0x7fb00010
    ctx->pc = 0x193ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193ca8: 0xc0882d
    ctx->pc = 0x193ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cac: 0xe7b40000
    ctx->pc = 0x193cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193cb0: 0xe0802d
    ctx->pc = 0x193cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cb4: 0x1240004b
    ctx->pc = 0x193CB4u;
    {
        const bool branch_taken_0x193cb4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x193CB8u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x193cb4) {
            ctx->pc = 0x193DE4u;
            goto label_193de4;
        }
    }
    ctx->pc = 0x193CBCu;
    // 0x193cbc: 0x96430000
    ctx->pc = 0x193cbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x193cc0: 0x24022000
    ctx->pc = 0x193cc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x193cc4: 0x3063f000
    ctx->pc = 0x193cc4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 61440));
    // 0x193cc8: 0x1062001c
    ctx->pc = 0x193CC8u;
    {
        const bool branch_taken_0x193cc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x193CCCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x193cc8) {
            ctx->pc = 0x193D3Cu;
            goto label_193d3c;
        }
    }
    ctx->pc = 0x193CD0u;
    // 0x193cd0: 0x24021000
    ctx->pc = 0x193cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x193cd4: 0x10620003
    ctx->pc = 0x193CD4u;
    {
        const bool branch_taken_0x193cd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x193CD8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x193cd4) {
            ctx->pc = 0x193CE4u;
            goto label_193ce4;
        }
    }
    ctx->pc = 0x193CDCu;
    // 0x193cdc: 0x10000042
    ctx->pc = 0x193CDCu;
    {
        const bool branch_taken_0x193cdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193CE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x193cdc) {
            ctx->pc = 0x193DE8u;
            goto label_193de8;
        }
    }
    ctx->pc = 0x193CE4u;
label_193ce4:
    // 0x193ce4: 0x8e430004
    ctx->pc = 0x193ce4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x193ce8: 0x8c224168
    ctx->pc = 0x193ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    // 0x193cec: 0xa02d
    ctx->pc = 0x193cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cf0: 0x1000000c
    ctx->pc = 0x193CF0u;
    {
        const bool branch_taken_0x193cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193CF4u;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x193cf0) {
            ctx->pc = 0x193D24u;
            goto label_193d24;
        }
    }
    ctx->pc = 0x193CF8u;
label_193cf8:
    // 0x193cf8: 0x92750001
    ctx->pc = 0x193cf8u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x193cfc: 0x4600a306
    ctx->pc = 0x193cfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x193d00: 0x260202d
    ctx->pc = 0x193d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d04: 0x151040
    ctx->pc = 0x193d04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
    // 0x193d08: 0xc0638f0
    ctx->pc = 0x193D08u;
    SET_GPR_U32(ctx, 31, 0x193D10u);
    ctx->pc = 0x193D0Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x18E3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E3C0_0x18e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D10u; }
    }
    if (ctx->pc != 0x193D10u) { return; }
    ctx->pc = 0x193D10u;
    // 0x193d10: 0x151080
    ctx->pc = 0x193d10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
    // 0x193d14: 0x26940001
    ctx->pc = 0x193d14u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x193d18: 0x2221021
    ctx->pc = 0x193d18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x193d1c: 0x26730008
    ctx->pc = 0x193d1cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
    // 0x193d20: 0xe4400000
    ctx->pc = 0x193d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_193d24:
    // 0x193d24: 0x86420002
    ctx->pc = 0x193d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x193d28: 0x282102a
    ctx->pc = 0x193d28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x193d2c: 0x1440fff2
    ctx->pc = 0x193D2Cu;
    {
        const bool branch_taken_0x193d2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x193d2c) {
            ctx->pc = 0x193CF8u;
            goto label_193cf8;
        }
    }
    ctx->pc = 0x193D34u;
    // 0x193d34: 0x1000002b
    ctx->pc = 0x193D34u;
    {
        const bool branch_taken_0x193d34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x193d34) {
            ctx->pc = 0x193DE4u;
            goto label_193de4;
        }
    }
    ctx->pc = 0x193D3Cu;
label_193d3c:
    // 0x193d3c: 0x8e430004
    ctx->pc = 0x193d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x193d40: 0x8c224168
    ctx->pc = 0x193d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 16744)));
    // 0x193d44: 0x982d
    ctx->pc = 0x193d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d48: 0x10000022
    ctx->pc = 0x193D48u;
    {
        const bool branch_taken_0x193d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193D4Cu;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x193d48) {
            ctx->pc = 0x193DD4u;
            goto label_193dd4;
        }
    }
    ctx->pc = 0x193D50u;
label_193d50:
    // 0x193d50: 0x92960001
    ctx->pc = 0x193d50u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x193d54: 0x4600a306
    ctx->pc = 0x193d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x193d58: 0x280202d
    ctx->pc = 0x193d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d5c: 0x161880
    ctx->pc = 0x193d5cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 22), 2));
    // 0x193d60: 0x161040
    ctx->pc = 0x193d60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 22), 1));
    // 0x193d64: 0x223a821
    ctx->pc = 0x193d64u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x193d68: 0xc0638f0
    ctx->pc = 0x193D68u;
    SET_GPR_U32(ctx, 31, 0x193D70u);
    ctx->pc = 0x193D6Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x18E3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E3C0_0x18e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D70u; }
    }
    if (ctx->pc != 0x193D70u) { return; }
    ctx->pc = 0x193D70u;
    // 0x193d70: 0x32c3ffff
    ctx->pc = 0x193d70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 22), 65535));
    // 0x193d74: 0x24020005
    ctx->pc = 0x193d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x193d78: 0x10620009
    ctx->pc = 0x193D78u;
    {
        const bool branch_taken_0x193d78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x193D7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        if (branch_taken_0x193d78) {
            ctx->pc = 0x193DA0u;
            goto label_193da0;
        }
    }
    ctx->pc = 0x193D80u;
    // 0x193d80: 0x24020004
    ctx->pc = 0x193d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x193d84: 0x10620006
    ctx->pc = 0x193D84u;
    {
        const bool branch_taken_0x193d84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x193d84) {
            ctx->pc = 0x193DA0u;
            goto label_193da0;
        }
    }
    ctx->pc = 0x193D8Cu;
    // 0x193d8c: 0x24020003
    ctx->pc = 0x193d8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x193d90: 0x10620003
    ctx->pc = 0x193D90u;
    {
        const bool branch_taken_0x193d90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x193d90) {
            ctx->pc = 0x193DA0u;
            goto label_193da0;
        }
    }
    ctx->pc = 0x193D98u;
    // 0x193d98: 0x10000007
    ctx->pc = 0x193D98u;
    {
        const bool branch_taken_0x193d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193D9Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x193d98) {
            ctx->pc = 0x193DB8u;
            goto label_193db8;
        }
    }
    ctx->pc = 0x193DA0u;
label_193da0:
    // 0x193da0: 0x3c010024
    ctx->pc = 0x193da0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)36 << 16));
    // 0x193da4: 0xc6a10000
    ctx->pc = 0x193da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193da8: 0xc4201c98
    ctx->pc = 0x193da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193dac: 0x46000802
    ctx->pc = 0x193dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193db0: 0x10000006
    ctx->pc = 0x193DB0u;
    {
        const bool branch_taken_0x193db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193DB4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        if (branch_taken_0x193db0) {
            ctx->pc = 0x193DCCu;
            goto label_193dcc;
        }
    }
    ctx->pc = 0x193DB8u;
label_193db8:
    // 0x193db8: 0x3c024180
    ctx->pc = 0x193db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16768 << 16));
    // 0x193dbc: 0x44820800
    ctx->pc = 0x193dbcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x193dc0: 0x0
    ctx->pc = 0x193dc0u;
    // NOP
    // 0x193dc4: 0x46010003
    ctx->pc = 0x193dc4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x193dc8: 0xe6a00000
    ctx->pc = 0x193dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_193dcc:
    // 0x193dcc: 0x26730001
    ctx->pc = 0x193dccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x193dd0: 0x26940008
    ctx->pc = 0x193dd0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_193dd4:
    // 0x193dd4: 0x86420002
    ctx->pc = 0x193dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x193dd8: 0x262102a
    ctx->pc = 0x193dd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x193ddc: 0x1440ffdc
    ctx->pc = 0x193DDCu;
    {
        const bool branch_taken_0x193ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x193ddc) {
            ctx->pc = 0x193D50u;
            goto label_193d50;
        }
    }
    ctx->pc = 0x193DE4u;
label_193de4:
    // 0x193de4: 0xdfbf0080
    ctx->pc = 0x193de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_193de8:
    // 0x193de8: 0xc7b40000
    ctx->pc = 0x193de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193dec: 0x7bb60070
    ctx->pc = 0x193decu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193df0: 0x24020001
    ctx->pc = 0x193df0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193df4: 0x7bb50060
    ctx->pc = 0x193df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193df8: 0x7bb40050
    ctx->pc = 0x193df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193dfc: 0x7bb30040
    ctx->pc = 0x193dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193e00: 0x7bb20030
    ctx->pc = 0x193e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193e04: 0x7bb10020
    ctx->pc = 0x193e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193e08: 0x7bb00010
    ctx->pc = 0x193e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193e0c: 0x3e00008
    ctx->pc = 0x193E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193CE4u: goto label_193ce4;
            case 0x193CF8u: goto label_193cf8;
            case 0x193D24u: goto label_193d24;
            case 0x193D3Cu: goto label_193d3c;
            case 0x193D50u: goto label_193d50;
            case 0x193DA0u: goto label_193da0;
            case 0x193DB8u: goto label_193db8;
            case 0x193DCCu: goto label_193dcc;
            case 0x193DD4u: goto label_193dd4;
            case 0x193DE4u: goto label_193de4;
            case 0x193DE8u: goto label_193de8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193E14u;
    // 0x193e14: 0x0
    ctx->pc = 0x193e14u;
    // NOP
    // 0x193e18: 0x0
    ctx->pc = 0x193e18u;
    // NOP
    // 0x193e1c: 0x0
    ctx->pc = 0x193e1cu;
    // NOP
}
