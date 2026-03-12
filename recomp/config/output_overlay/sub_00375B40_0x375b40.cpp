#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_overlay_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sub_00375B40
// Address: 0x375b40 - 0x375d60
void sub_00375B40_0x375b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x375b40u;

    // 0x375b40: 0x27bdfed0
    ctx->pc = 0x375b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x375b44: 0xffbf0080
    ctx->pc = 0x375b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x375b48: 0x7fb70070
    ctx->pc = 0x375b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x375b4c: 0x7fb60060
    ctx->pc = 0x375b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x375b50: 0x7fb50050
    ctx->pc = 0x375b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x375b54: 0x7fb40040
    ctx->pc = 0x375b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x375b58: 0x7fb30030
    ctx->pc = 0x375b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x375b5c: 0x7fb20020
    ctx->pc = 0x375b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x375b60: 0xe0982d
    ctx->pc = 0x375b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b64: 0x7fb10010
    ctx->pc = 0x375b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x375b68: 0x80902d
    ctx->pc = 0x375b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b6c: 0x7fb00000
    ctx->pc = 0x375b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x375b70: 0xa0882d
    ctx->pc = 0x375b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375b74: 0x11000007
    ctx->pc = 0x375B74u;
    {
        const bool branch_taken_0x375b74 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x375B78u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x375b74) {
            ctx->pc = 0x375B94u;
            goto label_375b94;
        }
    }
    ctx->pc = 0x375B7Cu;
    // 0x375b7c: 0x3c050032
    ctx->pc = 0x375b7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x375b80: 0x27a40090
    ctx->pc = 0x375b80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x375b84: 0xc06450c
    ctx->pc = 0x375B84u;
    SET_GPR_U32(ctx, 31, 0x375B8Cu);
    ctx->pc = 0x375B88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16608));
    ctx->pc = 0x191430u;
    {
        auto targetFn = runtime->lookupFunction(0x191430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B8Cu; }
        if (ctx->pc != 0x375B8Cu) { return; }
    }
    ctx->pc = 0x375B8Cu;
    // 0x375b8c: 0x10000004
    ctx->pc = 0x375B8Cu;
    {
        const bool branch_taken_0x375b8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375B90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
        if (branch_taken_0x375b8c) {
            ctx->pc = 0x375BA0u;
            goto label_375ba0;
        }
    }
    ctx->pc = 0x375B94u;
label_375b94:
    // 0x375b94: 0xc063f7c
    ctx->pc = 0x375B94u;
    SET_GPR_U32(ctx, 31, 0x375B9Cu);
    ctx->pc = 0x375B98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B9Cu; }
        if (ctx->pc != 0x375B9Cu) { return; }
    }
    ctx->pc = 0x375B9Cu;
    // 0x375b9c: 0x27a400d0
    ctx->pc = 0x375b9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
label_375ba0:
    // 0x375ba0: 0xc063f7c
    ctx->pc = 0x375BA0u;
    SET_GPR_U32(ctx, 31, 0x375BA8u);
    ctx->pc = 0x18FDF0u;
    {
        auto targetFn = runtime->lookupFunction(0x18FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BA8u; }
        if (ctx->pc != 0x375BA8u) { return; }
    }
    ctx->pc = 0x375BA8u;
    // 0x375ba8: 0xc6610000
    ctx->pc = 0x375ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375bac: 0x3c024f00
    ctx->pc = 0x375bacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x375bb0: 0x44820000
    ctx->pc = 0x375bb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x375bb4: 0x0
    ctx->pc = 0x375bb4u;
    // NOP
    // 0x375bb8: 0x46010036
    ctx->pc = 0x375bb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375bbc: 0x45010005
    ctx->pc = 0x375BBCu;
    {
        const bool branch_taken_0x375bbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375bbc) {
            ctx->pc = 0x375BD4u;
            goto label_375bd4;
        }
    }
    ctx->pc = 0x375BC4u;
    // 0x375bc4: 0x46000864
    ctx->pc = 0x375bc4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x375bc8: 0x44030800
    ctx->pc = 0x375bc8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x375bcc: 0x10000008
    ctx->pc = 0x375BCCu;
    {
        const bool branch_taken_0x375bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375BD0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x375bcc) {
            ctx->pc = 0x375BF0u;
            goto label_375bf0;
        }
    }
    ctx->pc = 0x375BD4u;
label_375bd4:
    // 0x375bd4: 0x46000841
    ctx->pc = 0x375bd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375bd8: 0x3c028000
    ctx->pc = 0x375bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x375bdc: 0x46000864
    ctx->pc = 0x375bdcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x375be0: 0x44030800
    ctx->pc = 0x375be0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x375be4: 0x0
    ctx->pc = 0x375be4u;
    // NOP
    // 0x375be8: 0x621825
    ctx->pc = 0x375be8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375bec: 0xc6610004
    ctx->pc = 0x375becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375bf0:
    // 0x375bf0: 0x3c024f00
    ctx->pc = 0x375bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x375bf4: 0x44820000
    ctx->pc = 0x375bf4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x375bf8: 0x0
    ctx->pc = 0x375bf8u;
    // NOP
    // 0x375bfc: 0x46010036
    ctx->pc = 0x375bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375c00: 0x45010005
    ctx->pc = 0x375C00u;
    {
        const bool branch_taken_0x375c00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x375C04u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x375c00) {
            ctx->pc = 0x375C18u;
            goto label_375c18;
        }
    }
    ctx->pc = 0x375C08u;
    // 0x375c08: 0x46000864
    ctx->pc = 0x375c08u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x375c0c: 0x44030800
    ctx->pc = 0x375c0cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x375c10: 0x10000008
    ctx->pc = 0x375C10u;
    {
        const bool branch_taken_0x375c10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375C14u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x375c10) {
            ctx->pc = 0x375C34u;
            goto label_375c34;
        }
    }
    ctx->pc = 0x375C18u;
label_375c18:
    // 0x375c18: 0x46000841
    ctx->pc = 0x375c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375c1c: 0x3c028000
    ctx->pc = 0x375c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x375c20: 0x46000864
    ctx->pc = 0x375c20u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x375c24: 0x44030800
    ctx->pc = 0x375c24u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x375c28: 0x0
    ctx->pc = 0x375c28u;
    // NOP
    // 0x375c2c: 0x621825
    ctx->pc = 0x375c2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375c30: 0xc6610008
    ctx->pc = 0x375c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375c34:
    // 0x375c34: 0x3c024f00
    ctx->pc = 0x375c34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20224 << 16));
    // 0x375c38: 0x44820000
    ctx->pc = 0x375c38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x375c3c: 0x0
    ctx->pc = 0x375c3cu;
    // NOP
    // 0x375c40: 0x46010036
    ctx->pc = 0x375c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375c44: 0x45010005
    ctx->pc = 0x375C44u;
    {
        const bool branch_taken_0x375c44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x375C48u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x375c44) {
            ctx->pc = 0x375C5Cu;
            goto label_375c5c;
        }
    }
    ctx->pc = 0x375C4Cu;
    // 0x375c4c: 0x46000864
    ctx->pc = 0x375c4cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x375c50: 0x44030800
    ctx->pc = 0x375c50u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x375c54: 0x10000008
    ctx->pc = 0x375C54u;
    {
        const bool branch_taken_0x375c54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375C58u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 65535));
        if (branch_taken_0x375c54) {
            ctx->pc = 0x375C78u;
            goto label_375c78;
        }
    }
    ctx->pc = 0x375C5Cu;
label_375c5c:
    // 0x375c5c: 0x46000841
    ctx->pc = 0x375c5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375c60: 0x3c028000
    ctx->pc = 0x375c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x375c64: 0x46000864
    ctx->pc = 0x375c64u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x375c68: 0x44030800
    ctx->pc = 0x375c68u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x375c6c: 0x0
    ctx->pc = 0x375c6cu;
    // NOP
    // 0x375c70: 0x621825
    ctx->pc = 0x375c70u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375c74: 0x3066ffff
    ctx->pc = 0x375c74u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), 65535));
label_375c78:
    // 0x375c78: 0xc0dc0e8
    ctx->pc = 0x375C78u;
    SET_GPR_U32(ctx, 31, 0x375C80u);
    ctx->pc = 0x375C7Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 208));
    ctx->pc = 0x3703A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_003703A0_0x3703a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C80u; }
    }
    if (ctx->pc != 0x375C80u) { return; }
    ctx->pc = 0x375C80u;
    // 0x375c80: 0x27a400d0
    ctx->pc = 0x375c80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    // 0x375c84: 0xc0644c0
    ctx->pc = 0x375C84u;
    SET_GPR_U32(ctx, 31, 0x375C8Cu);
    ctx->pc = 0x375C88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x191300u;
    {
        auto targetFn = runtime->lookupFunction(0x191300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C8Cu; }
        if (ctx->pc != 0x375C8Cu) { return; }
    }
    ctx->pc = 0x375C8Cu;
    // 0x375c8c: 0xb02d
    ctx->pc = 0x375c8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375c90: 0x27b50114
    ctx->pc = 0x375c90u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 276));
    // 0x375c94: 0x27b40118
    ctx->pc = 0x375c94u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 280));
    // 0x375c98: 0x27b30124
    ctx->pc = 0x375c98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 292));
    // 0x375c9c: 0x1000001f
    ctx->pc = 0x375C9Cu;
    {
        const bool branch_taken_0x375c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x375CA0u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 296));
        if (branch_taken_0x375c9c) {
            ctx->pc = 0x375D1Cu;
            goto label_375d1c;
        }
    }
    ctx->pc = 0x375CA4u;
label_375ca4:
    // 0x375ca4: 0xc6410000
    ctx->pc = 0x375ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375ca8: 0x27a40120
    ctx->pc = 0x375ca8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 288));
    // 0x375cac: 0xc6200000
    ctx->pc = 0x375cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375cb0: 0x27a50110
    ctx->pc = 0x375cb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 272));
    // 0x375cb4: 0x27a600d0
    ctx->pc = 0x375cb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 208));
    // 0x375cb8: 0x46000801
    ctx->pc = 0x375cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375cbc: 0xe7a00110
    ctx->pc = 0x375cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x375cc0: 0xc6410004
    ctx->pc = 0x375cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375cc4: 0xc6200004
    ctx->pc = 0x375cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375cc8: 0x46000801
    ctx->pc = 0x375cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375ccc: 0xe6a00000
    ctx->pc = 0x375cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x375cd0: 0xc6410008
    ctx->pc = 0x375cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375cd4: 0xc6200008
    ctx->pc = 0x375cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375cd8: 0x46000801
    ctx->pc = 0x375cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375cdc: 0xc064674
    ctx->pc = 0x375CDCu;
    SET_GPR_U32(ctx, 31, 0x375CE4u);
    ctx->pc = 0x375CE0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->pc = 0x1919D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1919D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CE4u; }
        if (ctx->pc != 0x375CE4u) { return; }
    }
    ctx->pc = 0x375CE4u;
    // 0x375ce4: 0xc7a10120
    ctx->pc = 0x375ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375ce8: 0x26d60001
    ctx->pc = 0x375ce8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
    // 0x375cec: 0xc6200000
    ctx->pc = 0x375cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375cf0: 0x46000800
    ctx->pc = 0x375cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375cf4: 0xe6400000
    ctx->pc = 0x375cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x375cf8: 0xc6610000
    ctx->pc = 0x375cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375cfc: 0xc6200004
    ctx->pc = 0x375cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375d00: 0x46000800
    ctx->pc = 0x375d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375d04: 0xe6400004
    ctx->pc = 0x375d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x375d08: 0xc6e10000
    ctx->pc = 0x375d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d0c: 0xc6200008
    ctx->pc = 0x375d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375d10: 0x46000800
    ctx->pc = 0x375d10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375d14: 0xe6400008
    ctx->pc = 0x375d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x375d18: 0x2652000c
    ctx->pc = 0x375d18u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
label_375d1c:
    // 0x375d1c: 0x2d0182a
    ctx->pc = 0x375d1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 16)));
    // 0x375d20: 0x1460ffe0
    ctx->pc = 0x375D20u;
    {
        const bool branch_taken_0x375d20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x375d20) {
            ctx->pc = 0x375CA4u;
            goto label_375ca4;
        }
    }
    ctx->pc = 0x375D28u;
    // 0x375d28: 0xdfbf0080
    ctx->pc = 0x375d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x375d2c: 0x7bb70070
    ctx->pc = 0x375d2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x375d30: 0x7bb60060
    ctx->pc = 0x375d30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x375d34: 0x7bb50050
    ctx->pc = 0x375d34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375d38: 0x7bb40040
    ctx->pc = 0x375d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375d3c: 0x7bb30030
    ctx->pc = 0x375d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375d40: 0x7bb20020
    ctx->pc = 0x375d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375d44: 0x7bb10010
    ctx->pc = 0x375d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375d48: 0x7bb00000
    ctx->pc = 0x375d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375d4c: 0x3e00008
    ctx->pc = 0x375D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375B94u: goto label_375b94;
            case 0x375BA0u: goto label_375ba0;
            case 0x375BD4u: goto label_375bd4;
            case 0x375BF0u: goto label_375bf0;
            case 0x375C18u: goto label_375c18;
            case 0x375C34u: goto label_375c34;
            case 0x375C5Cu: goto label_375c5c;
            case 0x375C78u: goto label_375c78;
            case 0x375CA4u: goto label_375ca4;
            case 0x375D1Cu: goto label_375d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375D54u;
    // 0x375d54: 0x0
    ctx->pc = 0x375d54u;
    // NOP
    // 0x375d58: 0x0
    ctx->pc = 0x375d58u;
    // NOP
    // 0x375d5c: 0x0
    ctx->pc = 0x375d5cu;
    // NOP
}
