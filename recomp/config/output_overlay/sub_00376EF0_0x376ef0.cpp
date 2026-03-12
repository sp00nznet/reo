#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00376EF0
// Address: 0x376ef0 - 0x377540
void sub_00376EF0_0x376ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x376ef0u;

label_376ef0:
    // 0x376ef0: 0x27bdffa0
    ctx->pc = 0x376ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x376ef4: 0xffbf0030
    ctx->pc = 0x376ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x376ef8: 0x44800800
    ctx->pc = 0x376ef8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x376efc: 0x7fb10020
    ctx->pc = 0x376efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x376f00: 0x7fb00010
    ctx->pc = 0x376f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376f04: 0xe7b40000
    ctx->pc = 0x376f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x376f08: 0x80802d
    ctx->pc = 0x376f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376f0c: 0xc4c20000
    ctx->pc = 0x376f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376f10: 0xc4a00000
    ctx->pc = 0x376f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376f14: 0x46001001
    ctx->pc = 0x376f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x376f18: 0xe7a00050
    ctx->pc = 0x376f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x376f1c: 0xc4c30004
    ctx->pc = 0x376f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376f20: 0xc4a20004
    ctx->pc = 0x376f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376f24: 0xc7a00050
    ctx->pc = 0x376f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376f28: 0x46021881
    ctx->pc = 0x376f28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x376f2c: 0x46000832
    ctx->pc = 0x376f2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376f30: 0xe7a20054
    ctx->pc = 0x376f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x376f34: 0xc4c10008
    ctx->pc = 0x376f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376f38: 0xc4a00008
    ctx->pc = 0x376f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376f3c: 0x46000801
    ctx->pc = 0x376f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376f40: 0x45000004
    ctx->pc = 0x376F40u;
    {
        const bool branch_taken_0x376f40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x376F44u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        if (branch_taken_0x376f40) {
            ctx->pc = 0x376F54u;
            goto label_376f54;
        }
    }
    ctx->pc = 0x376F48u;
    // 0x376f48: 0x3c010039
    ctx->pc = 0x376f48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x376f4c: 0xc420ca98
    ctx->pc = 0x376f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376f50: 0xe7a00050
    ctx->pc = 0x376f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_376f54:
    // 0x376f54: 0x27b10058
    ctx->pc = 0x376f54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 88));
    // 0x376f58: 0xc7a00050
    ctx->pc = 0x376f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376f5c: 0xc6210000
    ctx->pc = 0x376f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376f60: 0x4600001a
    ctx->pc = 0x376f60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x376f64: 0xc0dc620
    ctx->pc = 0x376F64u;
    SET_GPR_U32(ctx, 31, 0x376F6Cu);
    ctx->pc = 0x376F68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    ctx->pc = 0x371880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00371880_0x371880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F6Cu; }
    }
    if (ctx->pc != 0x376F6Cu) { return; }
    ctx->pc = 0x376F6Cu;
    // 0x376f6c: 0x46000506
    ctx->pc = 0x376f6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x376f70: 0x44800000
    ctx->pc = 0x376f70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x376f74: 0x0
    ctx->pc = 0x376f74u;
    // NOP
    // 0x376f78: 0x46140032
    ctx->pc = 0x376f78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376f7c: 0x45000002
    ctx->pc = 0x376F7Cu;
    {
        const bool branch_taken_0x376f7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x376F80u;
        SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
        if (branch_taken_0x376f7c) {
            ctx->pc = 0x376F88u;
            goto label_376f88;
        }
    }
    ctx->pc = 0x376F84u;
    // 0x376f84: 0xc434ca98
    ctx->pc = 0x376f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_376f88:
    // 0x376f88: 0xc7ac0050
    ctx->pc = 0x376f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376f8c: 0xc064860
    ctx->pc = 0x376F8Cu;
    SET_GPR_U32(ctx, 31, 0x376F94u);
    ctx->pc = 0x376F90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x192180u;
    {
        auto targetFn = runtime->lookupFunction(0x192180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F94u; }
        if (ctx->pc != 0x376F94u) { return; }
    }
    ctx->pc = 0x376F94u;
    // 0x376f94: 0xc0647bc
    ctx->pc = 0x376F94u;
    SET_GPR_U32(ctx, 31, 0x376F9Cu);
    ctx->pc = 0x376F98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191EF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F9Cu; }
        if (ctx->pc != 0x376F9Cu) { return; }
    }
    ctx->pc = 0x376F9Cu;
    // 0x376f9c: 0xc7ac0054
    ctx->pc = 0x376f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376fa0: 0xa7a2004a
    ctx->pc = 0x376fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x376fa4: 0xc064860
    ctx->pc = 0x376FA4u;
    SET_GPR_U32(ctx, 31, 0x376FACu);
    ctx->pc = 0x376FA8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x192180u;
    {
        auto targetFn = runtime->lookupFunction(0x192180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376FACu; }
        if (ctx->pc != 0x376FACu) { return; }
    }
    ctx->pc = 0x376FACu;
    // 0x376fac: 0xc0647bc
    ctx->pc = 0x376FACu;
    SET_GPR_U32(ctx, 31, 0x376FB4u);
    ctx->pc = 0x376FB0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x191EF0u;
    {
        auto targetFn = runtime->lookupFunction(0x191EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376FB4u; }
        if (ctx->pc != 0x376FB4u) { return; }
    }
    ctx->pc = 0x376FB4u;
    // 0x376fb4: 0xa7a20048
    ctx->pc = 0x376fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x376fb8: 0x27a30048
    ctx->pc = 0x376fb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 72));
    // 0x376fbc: 0xa7a0004c
    ctx->pc = 0x376fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x376fc0: 0x84660000
    ctx->pc = 0x376fc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x376fc4: 0x84650002
    ctx->pc = 0x376fc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x376fc8: 0x84640004
    ctx->pc = 0x376fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x376fcc: 0x84630006
    ctx->pc = 0x376fccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x376fd0: 0xa6060000
    ctx->pc = 0x376fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x376fd4: 0xa6050002
    ctx->pc = 0x376fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x376fd8: 0xa6040004
    ctx->pc = 0x376fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x376fdc: 0xa6030006
    ctx->pc = 0x376fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x376fe0: 0xdfbf0030
    ctx->pc = 0x376fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376fe4: 0xc7b40000
    ctx->pc = 0x376fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x376fe8: 0x7bb10020
    ctx->pc = 0x376fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376fec: 0x7bb00010
    ctx->pc = 0x376fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376ff0: 0x3e00008
    ctx->pc = 0x376FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x376FF8u;
    // 0x376ff8: 0x0
    ctx->pc = 0x376ff8u;
    // NOP
    // 0x376ffc: 0x0
    ctx->pc = 0x376ffcu;
    // NOP
    // 0x377000: 0x27bdffd0
    ctx->pc = 0x377000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377004: 0xa0102d
    ctx->pc = 0x377004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377008: 0xffbf0010
    ctx->pc = 0x377008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37700c: 0x24850038
    ctx->pc = 0x37700cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 56));
    // 0x377010: 0x7fb00000
    ctx->pc = 0x377010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x377014: 0x27a40028
    ctx->pc = 0x377014u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 40));
    // 0x377018: 0xc0802d
    ctx->pc = 0x377018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37701c: 0xc0ddbbc
    ctx->pc = 0x37701Cu;
    SET_GPR_U32(ctx, 31, 0x377024u);
    ctx->pc = 0x377020u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 56));
    ctx->pc = 0x376EF0u;
    goto label_376ef0;
    ctx->pc = 0x377024u;
label_377024:
    // 0x377024: 0x27a30028
    ctx->pc = 0x377024u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 40));
    // 0x377028: 0x84660000
    ctx->pc = 0x377028u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37702c: 0x84650002
    ctx->pc = 0x37702cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x377030: 0x84640004
    ctx->pc = 0x377030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x377034: 0x84630006
    ctx->pc = 0x377034u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x377038: 0xa6060000
    ctx->pc = 0x377038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x37703c: 0xa6050002
    ctx->pc = 0x37703cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x377040: 0xa6040004
    ctx->pc = 0x377040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x377044: 0xa6030006
    ctx->pc = 0x377044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x377048: 0xdfbf0010
    ctx->pc = 0x377048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37704c: 0x7bb00000
    ctx->pc = 0x37704cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377050: 0x3e00008
    ctx->pc = 0x377050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377054u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377058u;
    // 0x377058: 0x0
    ctx->pc = 0x377058u;
    // NOP
    // 0x37705c: 0x0
    ctx->pc = 0x37705cu;
    // NOP
    // 0x377060: 0x27bdffd0
    ctx->pc = 0x377060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377064: 0xffbf0010
    ctx->pc = 0x377064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x377068: 0x7fb00000
    ctx->pc = 0x377068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37706c: 0x8c820034
    ctx->pc = 0x37706cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x377070: 0x24430820
    ctx->pc = 0x377070u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2080));
    // 0x377074: 0x8c420820
    ctx->pc = 0x377074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x377078: 0x10400007
    ctx->pc = 0x377078u;
    {
        const bool branch_taken_0x377078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x37707Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377078) {
            ctx->pc = 0x377098u;
            goto label_377098;
        }
    }
    ctx->pc = 0x377080u;
    // 0x377080: 0x30a2ffff
    ctx->pc = 0x377080u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x377084: 0x21080
    ctx->pc = 0x377084u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x377088: 0x621021
    ctx->pc = 0x377088u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37708c: 0x8c420000
    ctx->pc = 0x37708cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377090: 0x10000002
    ctx->pc = 0x377090u;
    {
        const bool branch_taken_0x377090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377094u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 48));
        if (branch_taken_0x377090) {
            ctx->pc = 0x37709Cu;
            goto label_37709c;
        }
    }
    ctx->pc = 0x377098u;
label_377098:
    // 0x377098: 0x24850038
    ctx->pc = 0x377098u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 56));
label_37709c:
    // 0x37709c: 0x8cc20034
    ctx->pc = 0x37709cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x3770a0: 0x24430820
    ctx->pc = 0x3770a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2080));
    // 0x3770a4: 0x8c420820
    ctx->pc = 0x3770a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2080)));
    // 0x3770a8: 0x10400006
    ctx->pc = 0x3770A8u;
    {
        const bool branch_taken_0x3770a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3770ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 65535));
        if (branch_taken_0x3770a8) {
            ctx->pc = 0x3770C4u;
            goto label_3770c4;
        }
    }
    ctx->pc = 0x3770B0u;
    // 0x3770b0: 0x21080
    ctx->pc = 0x3770b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x3770b4: 0x621021
    ctx->pc = 0x3770b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3770b8: 0x8c420000
    ctx->pc = 0x3770b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3770bc: 0x10000002
    ctx->pc = 0x3770BCu;
    {
        const bool branch_taken_0x3770bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3770C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 48));
        if (branch_taken_0x3770bc) {
            ctx->pc = 0x3770C8u;
            goto label_3770c8;
        }
    }
    ctx->pc = 0x3770C4u;
label_3770c4:
    // 0x3770c4: 0x24c60038
    ctx->pc = 0x3770c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 56));
label_3770c8:
    // 0x3770c8: 0xc0ddbbc
    ctx->pc = 0x3770C8u;
    SET_GPR_U32(ctx, 31, 0x3770D0u);
    ctx->pc = 0x3770CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 40));
    ctx->pc = 0x376EF0u;
    goto label_376ef0;
    ctx->pc = 0x3770D0u;
label_3770d0:
    // 0x3770d0: 0x27a30028
    ctx->pc = 0x3770d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 40));
    // 0x3770d4: 0x84660000
    ctx->pc = 0x3770d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3770d8: 0x84650002
    ctx->pc = 0x3770d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3770dc: 0x84640004
    ctx->pc = 0x3770dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3770e0: 0x84630006
    ctx->pc = 0x3770e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3770e4: 0xa6060000
    ctx->pc = 0x3770e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3770e8: 0xa6050002
    ctx->pc = 0x3770e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3770ec: 0xa6040004
    ctx->pc = 0x3770ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3770f0: 0xa6030006
    ctx->pc = 0x3770f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x3770f4: 0xdfbf0010
    ctx->pc = 0x3770f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3770f8: 0x7bb00000
    ctx->pc = 0x3770f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3770fc: 0x3e00008
    ctx->pc = 0x3770FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377100u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377104u;
    // 0x377104: 0x0
    ctx->pc = 0x377104u;
    // NOP
    // 0x377108: 0x0
    ctx->pc = 0x377108u;
    // NOP
    // 0x37710c: 0x0
    ctx->pc = 0x37710cu;
    // NOP
    // 0x377110: 0x52c3c
    ctx->pc = 0x377110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x377114: 0x4143c
    ctx->pc = 0x377114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x377118: 0x52c3f
    ctx->pc = 0x377118u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x37711c: 0x2143f
    ctx->pc = 0x37711cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x377120: 0xa22023
    ctx->pc = 0x377120u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x377124: 0x2403ffff
    ctx->pc = 0x377124u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x377128: 0x24020001
    ctx->pc = 0x377128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x37712c: 0x30848000
    ctx->pc = 0x37712cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 32768));
    // 0x377130: 0x44180a
    ctx->pc = 0x377130u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x377134: 0x3143c
    ctx->pc = 0x377134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x377138: 0x3e00008
    ctx->pc = 0x377138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37713Cu;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377140u;
    // 0x377140: 0x30a5ffff
    ctx->pc = 0x377140u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x377144: 0x3083ffff
    ctx->pc = 0x377144u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65535));
    // 0x377148: 0xa31823
    ctx->pc = 0x377148u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37714c: 0x6143c
    ctx->pc = 0x37714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x377150: 0x31c3c
    ctx->pc = 0x377150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x377154: 0x2143f
    ctx->pc = 0x377154u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x377158: 0x31c3f
    ctx->pc = 0x377158u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37715c: 0x62001a
    ctx->pc = 0x37715cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x377160: 0x0
    ctx->pc = 0x377160u;
    // NOP
    // 0x377164: 0x0
    ctx->pc = 0x377164u;
    // NOP
    // 0x377168: 0x1012
    ctx->pc = 0x377168u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x37716c: 0x2143c
    ctx->pc = 0x37716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x377170: 0x3e00008
    ctx->pc = 0x377170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377174u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377178u;
    // 0x377178: 0x0
    ctx->pc = 0x377178u;
    // NOP
    // 0x37717c: 0x0
    ctx->pc = 0x37717cu;
    // NOP
    // 0x377180: 0x27bdff90
    ctx->pc = 0x377180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x377184: 0xffbf0010
    ctx->pc = 0x377184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x377188: 0x7fb00000
    ctx->pc = 0x377188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37718c: 0x80802d
    ctx->pc = 0x37718cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377190: 0xc063f7c
    ctx->pc = 0x377190u;
    SET_GPR_U32(ctx, 31, 0x377198u);
    ctx->pc = 0x377194u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377198u; }
        if (ctx->pc != 0x377198u) { return; }
    }
    ctx->pc = 0x377198u;
    // 0x377198: 0x27a50030
    ctx->pc = 0x377198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x37719c: 0xc06bde0
    ctx->pc = 0x37719Cu;
    SET_GPR_U32(ctx, 31, 0x3771A4u);
    ctx->pc = 0x3771A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26));
    ctx->pc = 0x1AF780u;
    {
        auto targetFn = runtime->lookupFunction(0x1AF780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3771A4u; }
        if (ctx->pc != 0x3771A4u) { return; }
    }
    ctx->pc = 0x3771A4u;
    // 0x3771a4: 0x200282d
    ctx->pc = 0x3771a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3771a8: 0xc064810
    ctx->pc = 0x3771A8u;
    SET_GPR_U32(ctx, 31, 0x3771B0u);
    ctx->pc = 0x3771ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x192040u;
    {
        auto targetFn = runtime->lookupFunction(0x192040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3771B0u; }
        if (ctx->pc != 0x3771B0u) { return; }
    }
    ctx->pc = 0x3771B0u;
    // 0x3771b0: 0xc7a20020
    ctx->pc = 0x3771b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3771b4: 0x44800800
    ctx->pc = 0x3771b4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x3771b8: 0x0
    ctx->pc = 0x3771b8u;
    // NOP
    // 0x3771bc: 0x46011034
    ctx->pc = 0x3771bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3771c0: 0x45010008
    ctx->pc = 0x3771C0u;
    {
        const bool branch_taken_0x3771c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3771C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3771c0) {
            ctx->pc = 0x3771E4u;
            goto label_3771e4;
        }
    }
    ctx->pc = 0x3771C8u;
    // 0x3771c8: 0x3c024420
    ctx->pc = 0x3771c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17440 << 16));
    // 0x3771cc: 0x44820000
    ctx->pc = 0x3771ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3771d0: 0x0
    ctx->pc = 0x3771d0u;
    // NOP
    // 0x3771d4: 0x46001036
    ctx->pc = 0x3771d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3771d8: 0x45010004
    ctx->pc = 0x3771D8u;
    {
        const bool branch_taken_0x3771d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3771d8) {
            ctx->pc = 0x3771ECu;
            goto label_3771ec;
        }
    }
    ctx->pc = 0x3771E0u;
    // 0x3771e0: 0x102d
    ctx->pc = 0x3771e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3771e4:
    // 0x3771e4: 0x1000001a
    ctx->pc = 0x3771E4u;
    {
        const bool branch_taken_0x3771e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3771E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x3771e4) {
            ctx->pc = 0x377250u;
            goto label_377250;
        }
    }
    ctx->pc = 0x3771ECu;
label_3771ec:
    // 0x3771ec: 0xc7a20024
    ctx->pc = 0x3771ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3771f0: 0x46011034
    ctx->pc = 0x3771f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3771f4: 0x45010008
    ctx->pc = 0x3771F4u;
    {
        const bool branch_taken_0x3771f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3771F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3771f4) {
            ctx->pc = 0x377218u;
            goto label_377218;
        }
    }
    ctx->pc = 0x3771FCu;
    // 0x3771fc: 0x3c0243e0
    ctx->pc = 0x3771fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17376 << 16));
    // 0x377200: 0x44820000
    ctx->pc = 0x377200u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x377204: 0x0
    ctx->pc = 0x377204u;
    // NOP
    // 0x377208: 0x46001036
    ctx->pc = 0x377208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37720c: 0x45010004
    ctx->pc = 0x37720Cu;
    {
        const bool branch_taken_0x37720c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37720c) {
            ctx->pc = 0x377220u;
            goto label_377220;
        }
    }
    ctx->pc = 0x377214u;
    // 0x377214: 0x102d
    ctx->pc = 0x377214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377218:
    // 0x377218: 0x1000000c
    ctx->pc = 0x377218u;
    {
        const bool branch_taken_0x377218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x377218) {
            ctx->pc = 0x37724Cu;
            goto label_37724c;
        }
    }
    ctx->pc = 0x377220u;
label_377220:
    // 0x377220: 0xc7a20028
    ctx->pc = 0x377220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x377224: 0x46011034
    ctx->pc = 0x377224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377228: 0x45010008
    ctx->pc = 0x377228u;
    {
        const bool branch_taken_0x377228 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37722Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x377228) {
            ctx->pc = 0x37724Cu;
            goto label_37724c;
        }
    }
    ctx->pc = 0x377230u;
    // 0x377230: 0x3c023f80
    ctx->pc = 0x377230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x377234: 0x44820000
    ctx->pc = 0x377234u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x377238: 0x0
    ctx->pc = 0x377238u;
    // NOP
    // 0x37723c: 0x46001036
    ctx->pc = 0x37723cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x377240: 0x45010002
    ctx->pc = 0x377240u;
    {
        const bool branch_taken_0x377240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x377244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x377240) {
            ctx->pc = 0x37724Cu;
            goto label_37724c;
        }
    }
    ctx->pc = 0x377248u;
    // 0x377248: 0x102d
    ctx->pc = 0x377248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37724c:
    // 0x37724c: 0xdfbf0010
    ctx->pc = 0x37724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_377250:
    // 0x377250: 0x7bb00000
    ctx->pc = 0x377250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377254: 0x3e00008
    ctx->pc = 0x377254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377258u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37725Cu;
    // 0x37725c: 0x0
    ctx->pc = 0x37725cu;
    // NOP
    // 0x377260: 0x27bdffa0
    ctx->pc = 0x377260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x377264: 0xffbf0050
    ctx->pc = 0x377264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x377268: 0x7fb20040
    ctx->pc = 0x377268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x37726c: 0x7fb10030
    ctx->pc = 0x37726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x377270: 0x80902d
    ctx->pc = 0x377270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377274: 0x7fb00020
    ctx->pc = 0x377274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377278: 0xa0882d
    ctx->pc = 0x377278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37727c: 0xe7b80010
    ctx->pc = 0x37727cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x377280: 0x3c040032
    ctx->pc = 0x377280u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x377284: 0xe7b7000c
    ctx->pc = 0x377284u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x377288: 0x3c050032
    ctx->pc = 0x377288u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x37728c: 0xe7b60008
    ctx->pc = 0x37728cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x377290: 0xc0802d
    ctx->pc = 0x377290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377294: 0xe7b50004
    ctx->pc = 0x377294u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x377298: 0x24844144
    ctx->pc = 0x377298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16708));
    // 0x37729c: 0x460065c6
    ctx->pc = 0x37729cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x3772a0: 0x24a54138
    ctx->pc = 0x3772a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x3772a4: 0x46006d86
    ctx->pc = 0x3772a4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x3772a8: 0xc0dc050
    ctx->pc = 0x3772A8u;
    SET_GPR_U32(ctx, 31, 0x3772B0u);
    ctx->pc = 0x3772ACu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->pc = 0x370140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370140_0x370140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3772B0u; }
    }
    if (ctx->pc != 0x3772B0u) { return; }
    ctx->pc = 0x3772B0u;
    // 0x3772b0: 0x3042ffff
    ctx->pc = 0x3772b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x3772b4: 0x4400004
    ctx->pc = 0x3772B4u;
    {
        const bool branch_taken_0x3772b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3772B8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x3772b4) {
            ctx->pc = 0x3772C8u;
            goto label_3772c8;
        }
    }
    ctx->pc = 0x3772BCu;
    // 0x3772bc: 0x44820000
    ctx->pc = 0x3772bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3772c0: 0x10000007
    ctx->pc = 0x3772C0u;
    {
        const bool branch_taken_0x3772c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3772C4u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x3772c0) {
            ctx->pc = 0x3772E0u;
            goto label_3772e0;
        }
    }
    ctx->pc = 0x3772C8u;
label_3772c8:
    // 0x3772c8: 0x30420001
    ctx->pc = 0x3772c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x3772cc: 0x621825
    ctx->pc = 0x3772ccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3772d0: 0x44830000
    ctx->pc = 0x3772d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x3772d4: 0x0
    ctx->pc = 0x3772d4u;
    // NOP
    // 0x3772d8: 0x46800060
    ctx->pc = 0x3772d8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3772dc: 0x46010840
    ctx->pc = 0x3772dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3772e0:
    // 0x3772e0: 0x3c024780
    ctx->pc = 0x3772e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x3772e4: 0x3c040032
    ctx->pc = 0x3772e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x3772e8: 0x44820000
    ctx->pc = 0x3772e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3772ec: 0x3c050032
    ctx->pc = 0x3772ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x3772f0: 0x24844144
    ctx->pc = 0x3772f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16708));
    // 0x3772f4: 0x24a54138
    ctx->pc = 0x3772f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x3772f8: 0x46000d03
    ctx->pc = 0x3772f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x3772fc: 0x0
    ctx->pc = 0x3772fcu;
    // NOP
    // 0x377300: 0x0
    ctx->pc = 0x377300u;
    // NOP
    // 0x377304: 0xc0dc068
    ctx->pc = 0x377304u;
    SET_GPR_U32(ctx, 31, 0x37730Cu);
    ctx->pc = 0x3701A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003701A0_0x3701a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37730Cu; }
    }
    if (ctx->pc != 0x37730Cu) { return; }
    ctx->pc = 0x37730Cu;
    // 0x37730c: 0x3042ffff
    ctx->pc = 0x37730cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x377310: 0x4400004
    ctx->pc = 0x377310u;
    {
        const bool branch_taken_0x377310 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x377314u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x377310) {
            ctx->pc = 0x377324u;
            goto label_377324;
        }
    }
    ctx->pc = 0x377318u;
    // 0x377318: 0x44820000
    ctx->pc = 0x377318u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37731c: 0x10000007
    ctx->pc = 0x37731Cu;
    {
        const bool branch_taken_0x37731c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377320u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x37731c) {
            ctx->pc = 0x37733Cu;
            goto label_37733c;
        }
    }
    ctx->pc = 0x377324u;
label_377324:
    // 0x377324: 0x30420001
    ctx->pc = 0x377324u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x377328: 0x621825
    ctx->pc = 0x377328u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37732c: 0x44830000
    ctx->pc = 0x37732cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x377330: 0x0
    ctx->pc = 0x377330u;
    // NOP
    // 0x377334: 0x46800060
    ctx->pc = 0x377334u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x377338: 0x46010840
    ctx->pc = 0x377338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37733c:
    // 0x37733c: 0x3c024780
    ctx->pc = 0x37733cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x377340: 0x3c050032
    ctx->pc = 0x377340u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x377344: 0x44820000
    ctx->pc = 0x377344u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x377348: 0x240202d
    ctx->pc = 0x377348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37734c: 0x24a54138
    ctx->pc = 0x37734cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x377350: 0x46000d43
    ctx->pc = 0x377350u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
    // 0x377354: 0x0
    ctx->pc = 0x377354u;
    // NOP
    // 0x377358: 0x0
    ctx->pc = 0x377358u;
    // NOP
    // 0x37735c: 0xc0dc050
    ctx->pc = 0x37735Cu;
    SET_GPR_U32(ctx, 31, 0x377364u);
    ctx->pc = 0x370140u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_00370140_0x370140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377364u; }
    }
    if (ctx->pc != 0x377364u) { return; }
    ctx->pc = 0x377364u;
    // 0x377364: 0x3c030001
    ctx->pc = 0x377364u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x377368: 0x621023
    ctx->pc = 0x377368u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37736c: 0x3042ffff
    ctx->pc = 0x37736cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x377370: 0x4400004
    ctx->pc = 0x377370u;
    {
        const bool branch_taken_0x377370 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x377374u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x377370) {
            ctx->pc = 0x377384u;
            goto label_377384;
        }
    }
    ctx->pc = 0x377378u;
    // 0x377378: 0x44820000
    ctx->pc = 0x377378u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x37737c: 0x10000007
    ctx->pc = 0x37737Cu;
    {
        const bool branch_taken_0x37737c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x377380u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x37737c) {
            ctx->pc = 0x37739Cu;
            goto label_37739c;
        }
    }
    ctx->pc = 0x377384u;
label_377384:
    // 0x377384: 0x30420001
    ctx->pc = 0x377384u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x377388: 0x621825
    ctx->pc = 0x377388u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37738c: 0x44830000
    ctx->pc = 0x37738cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x377390: 0x0
    ctx->pc = 0x377390u;
    // NOP
    // 0x377394: 0x46800060
    ctx->pc = 0x377394u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x377398: 0x46010840
    ctx->pc = 0x377398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37739c:
    // 0x37739c: 0x3c024780
    ctx->pc = 0x37739cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x3773a0: 0x3c050032
    ctx->pc = 0x3773a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x3773a4: 0x44820000
    ctx->pc = 0x3773a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3773a8: 0x240202d
    ctx->pc = 0x3773a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3773ac: 0x24a54138
    ctx->pc = 0x3773acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16696));
    // 0x3773b0: 0x46000e03
    ctx->pc = 0x3773b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[24] = ctx->f[1] / ctx->f[0];
    // 0x3773b4: 0x0
    ctx->pc = 0x3773b4u;
    // NOP
    // 0x3773b8: 0x0
    ctx->pc = 0x3773b8u;
    // NOP
    // 0x3773bc: 0xc0dc068
    ctx->pc = 0x3773BCu;
    SET_GPR_U32(ctx, 31, 0x3773C4u);
    ctx->pc = 0x3701A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003701A0_0x3701a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3773C4u; }
    }
    if (ctx->pc != 0x3773C4u) { return; }
    ctx->pc = 0x3773C4u;
    // 0x3773c4: 0x3042ffff
    ctx->pc = 0x3773c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x3773c8: 0x4400004
    ctx->pc = 0x3773C8u;
    {
        const bool branch_taken_0x3773c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3773CCu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x3773c8) {
            ctx->pc = 0x3773DCu;
            goto label_3773dc;
        }
    }
    ctx->pc = 0x3773D0u;
    // 0x3773d0: 0x44820000
    ctx->pc = 0x3773d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3773d4: 0x10000007
    ctx->pc = 0x3773D4u;
    {
        const bool branch_taken_0x3773d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3773D8u;
        ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x3773d4) {
            ctx->pc = 0x3773F4u;
            goto label_3773f4;
        }
    }
    ctx->pc = 0x3773DCu;
label_3773dc:
    // 0x3773dc: 0x30420001
    ctx->pc = 0x3773dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x3773e0: 0x621825
    ctx->pc = 0x3773e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3773e4: 0x44830000
    ctx->pc = 0x3773e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x3773e8: 0x0
    ctx->pc = 0x3773e8u;
    // NOP
    // 0x3773ec: 0x46800060
    ctx->pc = 0x3773ecu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x3773f0: 0x46010840
    ctx->pc = 0x3773f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3773f4:
    // 0x3773f4: 0x4618a000
    ctx->pc = 0x3773f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x3773f8: 0x3c024780
    ctx->pc = 0x3773f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x3773fc: 0x4600bb02
    ctx->pc = 0x3773fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x377400: 0x44820000
    ctx->pc = 0x377400u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x377404: 0x0
    ctx->pc = 0x377404u;
    // NOP
    // 0x377408: 0x46000d03
    ctx->pc = 0x377408u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x37740c: 0x0
    ctx->pc = 0x37740cu;
    // NOP
    // 0x377410: 0x0
    ctx->pc = 0x377410u;
    // NOP
    // 0x377414: 0xc064880
    ctx->pc = 0x377414u;
    SET_GPR_U32(ctx, 31, 0x37741Cu);
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37741Cu; }
        if (ctx->pc != 0x37741Cu) { return; }
    }
    ctx->pc = 0x37741Cu;
    // 0x37741c: 0x4614a840
    ctx->pc = 0x37741cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x377420: 0x4601b302
    ctx->pc = 0x377420u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x377424: 0xc064880
    ctx->pc = 0x377424u;
    SET_GPR_U32(ctx, 31, 0x37742Cu);
    ctx->pc = 0x377428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x192200u;
    {
        auto targetFn = runtime->lookupFunction(0x192200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37742Cu; }
        if (ctx->pc != 0x37742Cu) { return; }
    }
    ctx->pc = 0x37742Cu;
    // 0x37742c: 0xe6000000
    ctx->pc = 0x37742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x377430: 0xdfbf0050
    ctx->pc = 0x377430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377434: 0xc7b80010
    ctx->pc = 0x377434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x377438: 0x7bb20040
    ctx->pc = 0x377438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37743c: 0xc7b7000c
    ctx->pc = 0x37743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x377440: 0x7bb10030
    ctx->pc = 0x377440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377444: 0xc7b60008
    ctx->pc = 0x377444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x377448: 0x7bb00020
    ctx->pc = 0x377448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37744c: 0xc7b50004
    ctx->pc = 0x37744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x377450: 0xc7b40000
    ctx->pc = 0x377450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x377454: 0x3e00008
    ctx->pc = 0x377454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x37745Cu;
    // 0x37745c: 0x0
    ctx->pc = 0x37745cu;
    // NOP
    // 0x377460: 0x27bdffc0
    ctx->pc = 0x377460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377464: 0x30a2ffff
    ctx->pc = 0x377464u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x377468: 0xffbf0020
    ctx->pc = 0x377468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37746c: 0x44820000
    ctx->pc = 0x37746cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x377470: 0x7fb00010
    ctx->pc = 0x377470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377474: 0x3c050039
    ctx->pc = 0x377474u;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
    // 0x377478: 0xe7b40000
    ctx->pc = 0x377478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x37747c: 0x24a59548
    ctx->pc = 0x37747cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939976));
    // 0x377480: 0xdca30000
    ctx->pc = 0x377480u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377484: 0xc4a10008
    ctx->pc = 0x377484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377488: 0x80802d
    ctx->pc = 0x377488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37748c: 0x3c010039
    ctx->pc = 0x37748cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)57 << 16));
    // 0x377490: 0x27a40030
    ctx->pc = 0x377490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x377494: 0x3c024780
    ctx->pc = 0x377494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18304 << 16));
    // 0x377498: 0x468000a0
    ctx->pc = 0x377498u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x37749c: 0xfc830000
    ctx->pc = 0x37749cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x3774a0: 0xe4810008
    ctx->pc = 0x3774a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3774a4: 0xc421ca90
    ctx->pc = 0x3774a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294953616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3774a8: 0x44820000
    ctx->pc = 0x3774a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x3774ac: 0x46006506
    ctx->pc = 0x3774acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3774b0: 0x46020842
    ctx->pc = 0x3774b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3774b4: 0x46000b03
    ctx->pc = 0x3774b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x3774b8: 0x0
    ctx->pc = 0x3774b8u;
    // NOP
    // 0x3774bc: 0x0
    ctx->pc = 0x3774bcu;
    // NOP
    // 0x3774c0: 0xc0646f0
    ctx->pc = 0x3774C0u;
    SET_GPR_U32(ctx, 31, 0x3774C8u);
    ctx->pc = 0x191BC0u;
    {
        auto targetFn = runtime->lookupFunction(0x191BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3774C8u; }
        if (ctx->pc != 0x3774C8u) { return; }
    }
    ctx->pc = 0x3774C8u;
    // 0x3774c8: 0xc7a00030
    ctx->pc = 0x3774c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3774cc: 0x27a40034
    ctx->pc = 0x3774ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x3774d0: 0x27a30038
    ctx->pc = 0x3774d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 56));
    // 0x3774d4: 0x46140002
    ctx->pc = 0x3774d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3774d8: 0xe7a00030
    ctx->pc = 0x3774d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3774dc: 0xc4800000
    ctx->pc = 0x3774dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3774e0: 0x46140002
    ctx->pc = 0x3774e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3774e4: 0xe4800000
    ctx->pc = 0x3774e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3774e8: 0xc4600000
    ctx->pc = 0x3774e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3774ec: 0x46140002
    ctx->pc = 0x3774ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3774f0: 0xe4600000
    ctx->pc = 0x3774f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3774f4: 0xc6010000
    ctx->pc = 0x3774f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3774f8: 0xc7a00030
    ctx->pc = 0x3774f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3774fc: 0x46000800
    ctx->pc = 0x3774fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x377500: 0xe6000000
    ctx->pc = 0x377500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x377504: 0xc4800000
    ctx->pc = 0x377504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377508: 0xc6010004
    ctx->pc = 0x377508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37750c: 0x46000800
    ctx->pc = 0x37750cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x377510: 0xe6000004
    ctx->pc = 0x377510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x377514: 0xc4600000
    ctx->pc = 0x377514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377518: 0xc6010008
    ctx->pc = 0x377518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37751c: 0x46000800
    ctx->pc = 0x37751cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x377520: 0xe6000008
    ctx->pc = 0x377520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x377524: 0xdfbf0020
    ctx->pc = 0x377524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377528: 0xc7b40000
    ctx->pc = 0x377528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37752c: 0x7bb00010
    ctx->pc = 0x37752cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377530: 0x3e00008
    ctx->pc = 0x377530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377534u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x376EF0u: goto label_376ef0;
            case 0x376F54u: goto label_376f54;
            case 0x376F88u: goto label_376f88;
            case 0x377024u: goto label_377024;
            case 0x377098u: goto label_377098;
            case 0x37709Cu: goto label_37709c;
            case 0x3770C4u: goto label_3770c4;
            case 0x3770C8u: goto label_3770c8;
            case 0x3770D0u: goto label_3770d0;
            case 0x3771E4u: goto label_3771e4;
            case 0x3771ECu: goto label_3771ec;
            case 0x377218u: goto label_377218;
            case 0x377220u: goto label_377220;
            case 0x37724Cu: goto label_37724c;
            case 0x377250u: goto label_377250;
            case 0x3772C8u: goto label_3772c8;
            case 0x3772E0u: goto label_3772e0;
            case 0x377324u: goto label_377324;
            case 0x37733Cu: goto label_37733c;
            case 0x377384u: goto label_377384;
            case 0x37739Cu: goto label_37739c;
            case 0x3773DCu: goto label_3773dc;
            case 0x3773F4u: goto label_3773f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x377538u;
    // 0x377538: 0x0
    ctx->pc = 0x377538u;
    // NOP
    // 0x37753c: 0x0
    ctx->pc = 0x37753cu;
    // NOP
}
